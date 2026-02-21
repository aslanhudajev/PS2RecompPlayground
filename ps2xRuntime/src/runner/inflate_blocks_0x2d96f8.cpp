#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <iostream>

// Function: inflate_blocks
// Address: 0x2d96f8 - 0x2da49c
void inflate_blocks_0x2d96f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d96f8u;
    {
        static int s_blocksEntry = 0;
        if (s_blocksEntry++ < 30) {
            const uint32_t r4 = GPR_U32(ctx, 4), r5 = GPR_U32(ctx, 5), r6 = GPR_U32(ctx, 6);
            std::cerr << "[inflate_blocks] ENTRY #" << s_blocksEntry << " reg4=0x" << std::hex << r4 << " reg5=0x" << r5 << " reg6=0x" << r6;
            if (r5) std::cerr << " z+0=0x" << READ32(ADD32(r5, 0)) << " z+4=0x" << READ32(ADD32(r5, 4)) << " z+8=0x" << READ32(ADD32(r5, 8));
            std::cerr << std::dec << "\n";
        }
    }

label_2d96f8:
    // 0x2d96f8: 0x27bdff30
    ctx->pc = 0x2d96f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_2d96fc:
    // 0x2d96fc: 0xffbf00c0
    ctx->pc = 0x2d96fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2d9700:
    // 0x2d9700: 0xffbe00b0
    ctx->pc = 0x2d9700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_2d9704:
    // 0x2d9704: 0xffb700a0
    ctx->pc = 0x2d9704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_2d9708:
    // 0x2d9708: 0xffb60090
    ctx->pc = 0x2d9708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_2d970c:
    // 0x2d970c: 0xffb50080
    ctx->pc = 0x2d970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_2d9710:
    // 0x2d9710: 0xffb40070
    ctx->pc = 0x2d9710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2d9714:
    // 0x2d9714: 0xffb30060
    ctx->pc = 0x2d9714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_2d9718:
    // 0x2d9718: 0xffb20050
    ctx->pc = 0x2d9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2d971c:
    // 0x2d971c: 0xffb10040
    ctx->pc = 0x2d971cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2d9720:
    // 0x2d9720: 0xffb00030
    ctx->pc = 0x2d9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2d9724:
    // 0x2d9724: 0x80882d
    ctx->pc = 0x2d9724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9728:
    // 0x2d9728: 0xa0902d
    ctx->pc = 0x2d9728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d972c:
    // 0x2d972c: 0xafa60020
    ctx->pc = 0x2d972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_2d9730:
    // 0x2d9730: 0x8e550000
    ctx->pc = 0x2d9730u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9734:
    // 0x2d9734: 0x8e570004
    ctx->pc = 0x2d9734u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d9738:
    // 0x2d9738: 0x8e340020
    ctx->pc = 0x2d9738u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d973c:
    // 0x2d973c: 0x8e3e0030
    ctx->pc = 0x2d973cu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2d9740:
    // 0x2d9740: 0x8e23002c
    ctx->pc = 0x2d9740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d9744:
    // 0x2d9744: 0x3c3102b
    ctx->pc = 0x2d9744u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2d9748:
    // 0x2d9748: 0x10400004
label_2d974c:
    if (ctx->pc == 0x2D974Cu) {
        ctx->pc = 0x2D974Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2D9750u;
        goto label_2d9750;
    }
    ctx->pc = 0x2D9748u;
    {
        const bool branch_taken_0x2d9748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D974Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x2d9748) {
            ctx->pc = 0x2D975Cu;
            goto label_2d975c;
        }
    }
    ctx->pc = 0x2D9750u;
label_2d9750:
    // 0x2d9750: 0x7eb023
    ctx->pc = 0x2d9750u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_2d9754:
    // 0x2d9754: 0x10000004
label_2d9758:
    if (ctx->pc == 0x2D9758u) {
        ctx->pc = 0x2D9758u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x2D975Cu;
        goto label_2d975c;
    }
    ctx->pc = 0x2D9754u;
    {
        const bool branch_taken_0x2d9754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9758u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        if (branch_taken_0x2d9754) {
            ctx->pc = 0x2D9768u;
            goto label_2d9768;
        }
    }
    ctx->pc = 0x2D975Cu;
label_2d975c:
    // 0x2d975c: 0x8e220028
    ctx->pc = 0x2d975cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d9760:
    // 0x2d9760: 0x5eb023
    ctx->pc = 0x2d9760u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2d9764:
    // 0x2d9764: 0x0
    ctx->pc = 0x2d9764u;
    // NOP
label_2d9768:
    // 0x2d9768: 0x8e230000
    ctx->pc = 0x2d9768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d976c:
    // 0x2d976c: 0x2c62000a
    ctx->pc = 0x2d976cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_2d9770:
    // 0x2d9770: 0x1040032f
label_2d9774:
    if (ctx->pc == 0x2D9774u) {
        ctx->pc = 0x2D9774u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2D9778u;
        goto label_2d9778;
    }
    ctx->pc = 0x2D9770u;
    {
        const bool branch_taken_0x2d9770 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9774u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2d9770) {
            ctx->pc = 0x2DA430u;
            goto label_2da430;
        }
    }
    ctx->pc = 0x2D9778u;
label_2d9778:
    // 0x2d9778: 0x24428100
    ctx->pc = 0x2d9778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934784));
label_2d977c:
    // 0x2d977c: 0x31880
    ctx->pc = 0x2d977cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2d9780:
    // 0x2d9780: 0x621821
    ctx->pc = 0x2d9780u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d9784:
    // 0x2d9784: 0x8c620000
    ctx->pc = 0x2d9784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9788:
    // 0x2d9788: 0x400008
label_2d978c:
    if (ctx->pc == 0x2D978Cu) {
        ctx->pc = 0x2D9790u;
        goto label_2d9790;
    }
    ctx->pc = 0x2D9788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        {
            static int s_firstSwitchLog = 0;
            if (s_firstSwitchLog++ < 40) {
                std::cerr << "[inflate_blocks] first switch jumpTarget=0x" << std::hex << jumpTarget << std::dec << "\n";
            }
        }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D96F8u: goto label_2d96f8;
            case 0x2D96FCu: goto label_2d96fc;
            case 0x2D9700u: goto label_2d9700;
            case 0x2D9704u: goto label_2d9704;
            case 0x2D9708u: goto label_2d9708;
            case 0x2D970Cu: goto label_2d970c;
            case 0x2D9710u: goto label_2d9710;
            case 0x2D9714u: goto label_2d9714;
            case 0x2D9718u: goto label_2d9718;
            case 0x2D971Cu: goto label_2d971c;
            case 0x2D9720u: goto label_2d9720;
            case 0x2D9724u: goto label_2d9724;
            case 0x2D9728u: goto label_2d9728;
            case 0x2D972Cu: goto label_2d972c;
            case 0x2D9730u: goto label_2d9730;
            case 0x2D9734u: goto label_2d9734;
            case 0x2D9738u: goto label_2d9738;
            case 0x2D973Cu: goto label_2d973c;
            case 0x2D9740u: goto label_2d9740;
            case 0x2D9744u: goto label_2d9744;
            case 0x2D9748u: goto label_2d9748;
            case 0x2D974Cu: goto label_2d974c;
            case 0x2D9750u: goto label_2d9750;
            case 0x2D9754u: goto label_2d9754;
            case 0x2D9758u: goto label_2d9758;
            case 0x2D975Cu: goto label_2d975c;
            case 0x2D9760u: goto label_2d9760;
            case 0x2D9764u: goto label_2d9764;
            case 0x2D9768u: goto label_2d9768;
            case 0x2D976Cu: goto label_2d976c;
            case 0x2D9770u: goto label_2d9770;
            case 0x2D9774u: goto label_2d9774;
            case 0x2D9778u: goto label_2d9778;
            case 0x2D977Cu: goto label_2d977c;
            case 0x2D9780u: goto label_2d9780;
            case 0x2D9784u: goto label_2d9784;
            case 0x2D9788u: goto label_2d9788;
            case 0x2D978Cu: goto label_2d978c;
            case 0x2D9790u: goto label_2d9790;
            case 0x2D9794u: goto label_2d9794;
            case 0x2D9798u: goto label_2d9798;
            case 0x2D979Cu: goto label_2d979c;
            case 0x2D97A0u: goto label_2d97a0;
            case 0x2D97A4u: goto label_2d97a4;
            case 0x2D97A8u: goto label_2d97a8;
            case 0x2D97ACu: goto label_2d97ac;
            case 0x2D97B0u: goto label_2d97b0;
            case 0x2D97B4u: goto label_2d97b4;
            case 0x2D97B8u: goto label_2d97b8;
            case 0x2D97BCu: goto label_2d97bc;
            case 0x2D97C0u: goto label_2d97c0;
            case 0x2D97C4u: goto label_2d97c4;
            case 0x2D97C8u: goto label_2d97c8;
            case 0x2D97CCu: goto label_2d97cc;
            case 0x2D97D0u: goto label_2d97d0;
            case 0x2D97D4u: goto label_2d97d4;
            case 0x2D97D8u: goto label_2d97d8;
            case 0x2D97DCu: goto label_2d97dc;
            case 0x2D97E0u: goto label_2d97e0;
            case 0x2D97E4u: goto label_2d97e4;
            case 0x2D97E8u: goto label_2d97e8;
            case 0x2D97ECu: goto label_2d97ec;
            case 0x2D97F0u: goto label_2d97f0;
            case 0x2D97F4u: goto label_2d97f4;
            case 0x2D97F8u: goto label_2d97f8;
            case 0x2D97FCu: goto label_2d97fc;
            case 0x2D9800u: goto label_2d9800;
            case 0x2D9804u: goto label_2d9804;
            case 0x2D9808u: goto label_2d9808;
            case 0x2D980Cu: goto label_2d980c;
            case 0x2D9810u: goto label_2d9810;
            case 0x2D9814u: goto label_2d9814;
            case 0x2D9818u: goto label_2d9818;
            case 0x2D981Cu: goto label_2d981c;
            case 0x2D9820u: goto label_2d9820;
            case 0x2D9824u: goto label_2d9824;
            case 0x2D9828u: goto label_2d9828;
            case 0x2D982Cu: goto label_2d982c;
            case 0x2D9830u: goto label_2d9830;
            case 0x2D9834u: goto label_2d9834;
            case 0x2D9838u: goto label_2d9838;
            case 0x2D983Cu: goto label_2d983c;
            case 0x2D9840u: goto label_2d9840;
            case 0x2D9844u: goto label_2d9844;
            case 0x2D9848u: goto label_2d9848;
            case 0x2D984Cu: goto label_2d984c;
            case 0x2D9850u: goto label_2d9850;
            case 0x2D9854u: goto label_2d9854;
            case 0x2D9858u: goto label_2d9858;
            case 0x2D985Cu: goto label_2d985c;
            case 0x2D9860u: goto label_2d9860;
            case 0x2D9864u: goto label_2d9864;
            case 0x2D9868u: goto label_2d9868;
            case 0x2D986Cu: goto label_2d986c;
            case 0x2D9870u: goto label_2d9870;
            case 0x2D9874u: goto label_2d9874;
            case 0x2D9878u: goto label_2d9878;
            case 0x2D987Cu: goto label_2d987c;
            case 0x2D9880u: goto label_2d9880;
            case 0x2D9884u: goto label_2d9884;
            case 0x2D9888u: goto label_2d9888;
            case 0x2D988Cu: goto label_2d988c;
            case 0x2D9890u: goto label_2d9890;
            case 0x2D9894u: goto label_2d9894;
            case 0x2D9898u: goto label_2d9898;
            case 0x2D989Cu: goto label_2d989c;
            case 0x2D98A0u: goto label_2d98a0;
            case 0x2D98A4u: goto label_2d98a4;
            case 0x2D98A8u: goto label_2d98a8;
            case 0x2D98ACu: goto label_2d98ac;
            case 0x2D98B0u: goto label_2d98b0;
            case 0x2D98B4u: goto label_2d98b4;
            case 0x2D98B8u: goto label_2d98b8;
            case 0x2D98BCu: goto label_2d98bc;
            case 0x2D98C0u: goto label_2d98c0;
            case 0x2D98C4u: goto label_2d98c4;
            case 0x2D98C8u: goto label_2d98c8;
            case 0x2D98CCu: goto label_2d98cc;
            case 0x2D98D0u: goto label_2d98d0;
            case 0x2D98D4u: goto label_2d98d4;
            case 0x2D98D8u: goto label_2d98d8;
            case 0x2D98DCu: goto label_2d98dc;
            case 0x2D98E0u: goto label_2d98e0;
            case 0x2D98E4u: goto label_2d98e4;
            case 0x2D98E8u: goto label_2d98e8;
            case 0x2D98ECu: goto label_2d98ec;
            case 0x2D98F0u: goto label_2d98f0;
            case 0x2D98F4u: goto label_2d98f4;
            case 0x2D98F8u: goto label_2d98f8;
            case 0x2D98FCu: goto label_2d98fc;
            case 0x2D9900u: goto label_2d9900;
            case 0x2D9904u: goto label_2d9904;
            case 0x2D9908u: goto label_2d9908;
            case 0x2D990Cu: goto label_2d990c;
            case 0x2D9910u: goto label_2d9910;
            case 0x2D9914u: goto label_2d9914;
            case 0x2D9918u: goto label_2d9918;
            case 0x2D991Cu: goto label_2d991c;
            case 0x2D9920u: goto label_2d9920;
            case 0x2D9924u: goto label_2d9924;
            case 0x2D9928u: goto label_2d9928;
            case 0x2D992Cu: goto label_2d992c;
            case 0x2D9930u: goto label_2d9930;
            case 0x2D9934u: goto label_2d9934;
            case 0x2D9938u: goto label_2d9938;
            case 0x2D993Cu: goto label_2d993c;
            case 0x2D9940u: goto label_2d9940;
            case 0x2D9944u: goto label_2d9944;
            case 0x2D9948u: goto label_2d9948;
            case 0x2D994Cu: goto label_2d994c;
            case 0x2D9950u: goto label_2d9950;
            case 0x2D9954u: goto label_2d9954;
            case 0x2D9958u: goto label_2d9958;
            case 0x2D995Cu: goto label_2d995c;
            case 0x2D9960u: goto label_2d9960;
            case 0x2D9964u: goto label_2d9964;
            case 0x2D9968u: goto label_2d9968;
            case 0x2D996Cu: goto label_2d996c;
            case 0x2D9970u: goto label_2d9970;
            case 0x2D9974u: goto label_2d9974;
            case 0x2D9978u: goto label_2d9978;
            case 0x2D997Cu: goto label_2d997c;
            case 0x2D9980u: goto label_2d9980;
            case 0x2D9984u: goto label_2d9984;
            case 0x2D9988u: goto label_2d9988;
            case 0x2D998Cu: goto label_2d998c;
            case 0x2D9990u: goto label_2d9990;
            case 0x2D9994u: goto label_2d9994;
            case 0x2D9998u: goto label_2d9998;
            case 0x2D999Cu: goto label_2d999c;
            case 0x2D99A0u: goto label_2d99a0;
            case 0x2D99A4u: goto label_2d99a4;
            case 0x2D99A8u: goto label_2d99a8;
            case 0x2D99ACu: goto label_2d99ac;
            case 0x2D99B0u: goto label_2d99b0;
            case 0x2D99B4u: goto label_2d99b4;
            case 0x2D99B8u: goto label_2d99b8;
            case 0x2D99BCu: goto label_2d99bc;
            case 0x2D99C0u: goto label_2d99c0;
            case 0x2D99C4u: goto label_2d99c4;
            case 0x2D99C8u: goto label_2d99c8;
            case 0x2D99CCu: goto label_2d99cc;
            case 0x2D99D0u: goto label_2d99d0;
            case 0x2D99D4u: goto label_2d99d4;
            case 0x2D99D8u: goto label_2d99d8;
            case 0x2D99DCu: goto label_2d99dc;
            case 0x2D99E0u: goto label_2d99e0;
            case 0x2D99E4u: goto label_2d99e4;
            case 0x2D99E8u: goto label_2d99e8;
            case 0x2D99ECu: goto label_2d99ec;
            case 0x2D99F0u: goto label_2d99f0;
            case 0x2D99F4u: goto label_2d99f4;
            case 0x2D99F8u: goto label_2d99f8;
            case 0x2D99FCu: goto label_2d99fc;
            case 0x2D9A00u: goto label_2d9a00;
            case 0x2D9A04u: goto label_2d9a04;
            case 0x2D9A08u: goto label_2d9a08;
            case 0x2D9A0Cu: goto label_2d9a0c;
            case 0x2D9A10u: goto label_2d9a10;
            case 0x2D9A14u: goto label_2d9a14;
            case 0x2D9A18u: goto label_2d9a18;
            case 0x2D9A1Cu: goto label_2d9a1c;
            case 0x2D9A20u: goto label_2d9a20;
            case 0x2D9A24u: goto label_2d9a24;
            case 0x2D9A28u: goto label_2d9a28;
            case 0x2D9A2Cu: goto label_2d9a2c;
            case 0x2D9A30u: goto label_2d9a30;
            case 0x2D9A34u: goto label_2d9a34;
            case 0x2D9A38u: goto label_2d9a38;
            case 0x2D9A3Cu: goto label_2d9a3c;
            case 0x2D9A40u: goto label_2d9a40;
            case 0x2D9A44u: goto label_2d9a44;
            case 0x2D9A48u: goto label_2d9a48;
            case 0x2D9A4Cu: goto label_2d9a4c;
            case 0x2D9A50u: goto label_2d9a50;
            case 0x2D9A54u: goto label_2d9a54;
            case 0x2D9A58u: goto label_2d9a58;
            case 0x2D9A5Cu: goto label_2d9a5c;
            case 0x2D9A60u: goto label_2d9a60;
            case 0x2D9A64u: goto label_2d9a64;
            case 0x2D9A68u: goto label_2d9a68;
            case 0x2D9A6Cu: goto label_2d9a6c;
            case 0x2D9A70u: goto label_2d9a70;
            case 0x2D9A74u: goto label_2d9a74;
            case 0x2D9A78u: goto label_2d9a78;
            case 0x2D9A7Cu: goto label_2d9a7c;
            case 0x2D9A80u: goto label_2d9a80;
            case 0x2D9A84u: goto label_2d9a84;
            case 0x2D9A88u: goto label_2d9a88;
            case 0x2D9A8Cu: goto label_2d9a8c;
            case 0x2D9A90u: goto label_2d9a90;
            case 0x2D9A94u: goto label_2d9a94;
            case 0x2D9A98u: goto label_2d9a98;
            case 0x2D9A9Cu: goto label_2d9a9c;
            case 0x2D9AA0u: goto label_2d9aa0;
            case 0x2D9AA4u: goto label_2d9aa4;
            case 0x2D9AA8u: goto label_2d9aa8;
            case 0x2D9AACu: goto label_2d9aac;
            case 0x2D9AB0u: goto label_2d9ab0;
            case 0x2D9AB4u: goto label_2d9ab4;
            case 0x2D9AB8u: goto label_2d9ab8;
            case 0x2D9ABCu: goto label_2d9abc;
            case 0x2D9AC0u: goto label_2d9ac0;
            case 0x2D9AC4u: goto label_2d9ac4;
            case 0x2D9AC8u: goto label_2d9ac8;
            case 0x2D9ACCu: goto label_2d9acc;
            case 0x2D9AD0u: goto label_2d9ad0;
            case 0x2D9AD4u: goto label_2d9ad4;
            case 0x2D9AD8u: goto label_2d9ad8;
            case 0x2D9ADCu: goto label_2d9adc;
            case 0x2D9AE0u: goto label_2d9ae0;
            case 0x2D9AE4u: goto label_2d9ae4;
            case 0x2D9AE8u: goto label_2d9ae8;
            case 0x2D9AECu: goto label_2d9aec;
            case 0x2D9AF0u: goto label_2d9af0;
            case 0x2D9AF4u: goto label_2d9af4;
            case 0x2D9AF8u: goto label_2d9af8;
            case 0x2D9AFCu: goto label_2d9afc;
            case 0x2D9B00u: goto label_2d9b00;
            case 0x2D9B04u: goto label_2d9b04;
            case 0x2D9B08u: goto label_2d9b08;
            case 0x2D9B0Cu: goto label_2d9b0c;
            case 0x2D9B10u: goto label_2d9b10;
            case 0x2D9B14u: goto label_2d9b14;
            case 0x2D9B18u: goto label_2d9b18;
            case 0x2D9B1Cu: goto label_2d9b1c;
            case 0x2D9B20u: goto label_2d9b20;
            case 0x2D9B24u: goto label_2d9b24;
            case 0x2D9B28u: goto label_2d9b28;
            case 0x2D9B2Cu: goto label_2d9b2c;
            case 0x2D9B30u: goto label_2d9b30;
            case 0x2D9B34u: goto label_2d9b34;
            case 0x2D9B38u: goto label_2d9b38;
            case 0x2D9B3Cu: goto label_2d9b3c;
            case 0x2D9B40u: goto label_2d9b40;
            case 0x2D9B44u: goto label_2d9b44;
            case 0x2D9B48u: goto label_2d9b48;
            case 0x2D9B4Cu: goto label_2d9b4c;
            case 0x2D9B50u: goto label_2d9b50;
            case 0x2D9B54u: goto label_2d9b54;
            case 0x2D9B58u: goto label_2d9b58;
            case 0x2D9B5Cu: goto label_2d9b5c;
            case 0x2D9B60u: goto label_2d9b60;
            case 0x2D9B64u: goto label_2d9b64;
            case 0x2D9B68u: goto label_2d9b68;
            case 0x2D9B6Cu: goto label_2d9b6c;
            case 0x2D9B70u: goto label_2d9b70;
            case 0x2D9B74u: goto label_2d9b74;
            case 0x2D9B78u: goto label_2d9b78;
            case 0x2D9B7Cu: goto label_2d9b7c;
            case 0x2D9B80u: goto label_2d9b80;
            case 0x2D9B84u: goto label_2d9b84;
            case 0x2D9B88u: goto label_2d9b88;
            case 0x2D9B8Cu: goto label_2d9b8c;
            case 0x2D9B90u: goto label_2d9b90;
            case 0x2D9B94u: goto label_2d9b94;
            case 0x2D9B98u: goto label_2d9b98;
            case 0x2D9B9Cu: goto label_2d9b9c;
            case 0x2D9BA0u: goto label_2d9ba0;
            case 0x2D9BA4u: goto label_2d9ba4;
            case 0x2D9BA8u: goto label_2d9ba8;
            case 0x2D9BACu: goto label_2d9bac;
            case 0x2D9BB0u: goto label_2d9bb0;
            case 0x2D9BB4u: goto label_2d9bb4;
            case 0x2D9BB8u: goto label_2d9bb8;
            case 0x2D9BBCu: goto label_2d9bbc;
            case 0x2D9BC0u: goto label_2d9bc0;
            case 0x2D9BC4u: goto label_2d9bc4;
            case 0x2D9BC8u: goto label_2d9bc8;
            case 0x2D9BCCu: goto label_2d9bcc;
            case 0x2D9BD0u: goto label_2d9bd0;
            case 0x2D9BD4u: goto label_2d9bd4;
            case 0x2D9BD8u: goto label_2d9bd8;
            case 0x2D9BDCu: goto label_2d9bdc;
            case 0x2D9BE0u: goto label_2d9be0;
            case 0x2D9BE4u: goto label_2d9be4;
            case 0x2D9BE8u: goto label_2d9be8;
            case 0x2D9BECu: goto label_2d9bec;
            case 0x2D9BF0u: goto label_2d9bf0;
            case 0x2D9BF4u: goto label_2d9bf4;
            case 0x2D9BF8u: goto label_2d9bf8;
            case 0x2D9BFCu: goto label_2d9bfc;
            case 0x2D9C00u: goto label_2d9c00;
            case 0x2D9C04u: goto label_2d9c04;
            case 0x2D9C08u: goto label_2d9c08;
            case 0x2D9C0Cu: goto label_2d9c0c;
            case 0x2D9C10u: goto label_2d9c10;
            case 0x2D9C14u: goto label_2d9c14;
            case 0x2D9C18u: goto label_2d9c18;
            case 0x2D9C1Cu: goto label_2d9c1c;
            case 0x2D9C20u: goto label_2d9c20;
            case 0x2D9C24u: goto label_2d9c24;
            case 0x2D9C28u: goto label_2d9c28;
            case 0x2D9C2Cu: goto label_2d9c2c;
            case 0x2D9C30u: goto label_2d9c30;
            case 0x2D9C34u: goto label_2d9c34;
            case 0x2D9C38u: goto label_2d9c38;
            case 0x2D9C3Cu: goto label_2d9c3c;
            case 0x2D9C40u: goto label_2d9c40;
            case 0x2D9C44u: goto label_2d9c44;
            case 0x2D9C48u: goto label_2d9c48;
            case 0x2D9C4Cu: goto label_2d9c4c;
            case 0x2D9C50u: goto label_2d9c50;
            case 0x2D9C54u: goto label_2d9c54;
            case 0x2D9C58u: goto label_2d9c58;
            case 0x2D9C5Cu: goto label_2d9c5c;
            case 0x2D9C60u: goto label_2d9c60;
            case 0x2D9C64u: goto label_2d9c64;
            case 0x2D9C68u: goto label_2d9c68;
            case 0x2D9C6Cu: goto label_2d9c6c;
            case 0x2D9C70u: goto label_2d9c70;
            case 0x2D9C74u: goto label_2d9c74;
            case 0x2D9C78u: goto label_2d9c78;
            case 0x2D9C7Cu: goto label_2d9c7c;
            case 0x2D9C80u: goto label_2d9c80;
            case 0x2D9C84u: goto label_2d9c84;
            case 0x2D9C88u: goto label_2d9c88;
            case 0x2D9C8Cu: goto label_2d9c8c;
            case 0x2D9C90u: goto label_2d9c90;
            case 0x2D9C94u: goto label_2d9c94;
            case 0x2D9C98u: goto label_2d9c98;
            case 0x2D9C9Cu: goto label_2d9c9c;
            case 0x2D9CA0u: goto label_2d9ca0;
            case 0x2D9CA4u: goto label_2d9ca4;
            case 0x2D9CA8u: goto label_2d9ca8;
            case 0x2D9CACu: goto label_2d9cac;
            case 0x2D9CB0u: goto label_2d9cb0;
            case 0x2D9CB4u: goto label_2d9cb4;
            case 0x2D9CB8u: goto label_2d9cb8;
            case 0x2D9CBCu: goto label_2d9cbc;
            case 0x2D9CC0u: goto label_2d9cc0;
            case 0x2D9CC4u: goto label_2d9cc4;
            case 0x2D9CC8u: goto label_2d9cc8;
            case 0x2D9CCCu: goto label_2d9ccc;
            case 0x2D9CD0u: goto label_2d9cd0;
            case 0x2D9CD4u: goto label_2d9cd4;
            case 0x2D9CD8u: goto label_2d9cd8;
            case 0x2D9CDCu: goto label_2d9cdc;
            case 0x2D9CE0u: goto label_2d9ce0;
            case 0x2D9CE4u: goto label_2d9ce4;
            case 0x2D9CE8u: goto label_2d9ce8;
            case 0x2D9CECu: goto label_2d9cec;
            case 0x2D9CF0u: goto label_2d9cf0;
            case 0x2D9CF4u: goto label_2d9cf4;
            case 0x2D9CF8u: goto label_2d9cf8;
            case 0x2D9CFCu: goto label_2d9cfc;
            case 0x2D9D00u: goto label_2d9d00;
            case 0x2D9D04u: goto label_2d9d04;
            case 0x2D9D08u: goto label_2d9d08;
            case 0x2D9D0Cu: goto label_2d9d0c;
            case 0x2D9D10u: goto label_2d9d10;
            case 0x2D9D14u: goto label_2d9d14;
            case 0x2D9D18u: goto label_2d9d18;
            case 0x2D9D1Cu: goto label_2d9d1c;
            case 0x2D9D20u: goto label_2d9d20;
            case 0x2D9D24u: goto label_2d9d24;
            case 0x2D9D28u: goto label_2d9d28;
            case 0x2D9D2Cu: goto label_2d9d2c;
            case 0x2D9D30u: goto label_2d9d30;
            case 0x2D9D34u: goto label_2d9d34;
            case 0x2D9D38u: goto label_2d9d38;
            case 0x2D9D3Cu: goto label_2d9d3c;
            case 0x2D9D40u: goto label_2d9d40;
            case 0x2D9D44u: goto label_2d9d44;
            case 0x2D9D48u: goto label_2d9d48;
            case 0x2D9D4Cu: goto label_2d9d4c;
            case 0x2D9D50u: goto label_2d9d50;
            case 0x2D9D54u: goto label_2d9d54;
            case 0x2D9D58u: goto label_2d9d58;
            case 0x2D9D5Cu: goto label_2d9d5c;
            case 0x2D9D60u: goto label_2d9d60;
            case 0x2D9D64u: goto label_2d9d64;
            case 0x2D9D68u: goto label_2d9d68;
            case 0x2D9D6Cu: goto label_2d9d6c;
            case 0x2D9D70u: goto label_2d9d70;
            case 0x2D9D74u: goto label_2d9d74;
            case 0x2D9D78u: goto label_2d9d78;
            case 0x2D9D7Cu: goto label_2d9d7c;
            case 0x2D9D80u: goto label_2d9d80;
            case 0x2D9D84u: goto label_2d9d84;
            case 0x2D9D88u: goto label_2d9d88;
            case 0x2D9D8Cu: goto label_2d9d8c;
            case 0x2D9D90u: goto label_2d9d90;
            case 0x2D9D94u: goto label_2d9d94;
            case 0x2D9D98u: goto label_2d9d98;
            case 0x2D9D9Cu: goto label_2d9d9c;
            case 0x2D9DA0u: goto label_2d9da0;
            case 0x2D9DA4u: goto label_2d9da4;
            case 0x2D9DA8u: goto label_2d9da8;
            case 0x2D9DACu: goto label_2d9dac;
            case 0x2D9DB0u: goto label_2d9db0;
            case 0x2D9DB4u: goto label_2d9db4;
            case 0x2D9DB8u: goto label_2d9db8;
            case 0x2D9DBCu: goto label_2d9dbc;
            case 0x2D9DC0u: goto label_2d9dc0;
            case 0x2D9DC4u: goto label_2d9dc4;
            case 0x2D9DC8u: goto label_2d9dc8;
            case 0x2D9DCCu: goto label_2d9dcc;
            case 0x2D9DD0u: goto label_2d9dd0;
            case 0x2D9DD4u: goto label_2d9dd4;
            case 0x2D9DD8u: goto label_2d9dd8;
            case 0x2D9DDCu: goto label_2d9ddc;
            case 0x2D9DE0u: goto label_2d9de0;
            case 0x2D9DE4u: goto label_2d9de4;
            case 0x2D9DE8u: goto label_2d9de8;
            case 0x2D9DECu: goto label_2d9dec;
            case 0x2D9DF0u: goto label_2d9df0;
            case 0x2D9DF4u: goto label_2d9df4;
            case 0x2D9DF8u: goto label_2d9df8;
            case 0x2D9DFCu: goto label_2d9dfc;
            case 0x2D9E00u: goto label_2d9e00;
            case 0x2D9E04u: goto label_2d9e04;
            case 0x2D9E08u: goto label_2d9e08;
            case 0x2D9E0Cu: goto label_2d9e0c;
            case 0x2D9E10u: goto label_2d9e10;
            case 0x2D9E14u: goto label_2d9e14;
            case 0x2D9E18u: goto label_2d9e18;
            case 0x2D9E1Cu: goto label_2d9e1c;
            case 0x2D9E20u: goto label_2d9e20;
            case 0x2D9E24u: goto label_2d9e24;
            case 0x2D9E28u: goto label_2d9e28;
            case 0x2D9E2Cu: goto label_2d9e2c;
            case 0x2D9E30u: goto label_2d9e30;
            case 0x2D9E34u: goto label_2d9e34;
            case 0x2D9E38u: goto label_2d9e38;
            case 0x2D9E3Cu: goto label_2d9e3c;
            case 0x2D9E40u: goto label_2d9e40;
            case 0x2D9E44u: goto label_2d9e44;
            case 0x2D9E48u: goto label_2d9e48;
            case 0x2D9E4Cu: goto label_2d9e4c;
            case 0x2D9E50u: goto label_2d9e50;
            case 0x2D9E54u: goto label_2d9e54;
            case 0x2D9E58u: goto label_2d9e58;
            case 0x2D9E5Cu: goto label_2d9e5c;
            case 0x2D9E60u: goto label_2d9e60;
            case 0x2D9E64u: goto label_2d9e64;
            case 0x2D9E68u: goto label_2d9e68;
            case 0x2D9E6Cu: goto label_2d9e6c;
            case 0x2D9E70u: goto label_2d9e70;
            case 0x2D9E74u: goto label_2d9e74;
            case 0x2D9E78u: goto label_2d9e78;
            case 0x2D9E7Cu: goto label_2d9e7c;
            case 0x2D9E80u: goto label_2d9e80;
            case 0x2D9E84u: goto label_2d9e84;
            case 0x2D9E88u: goto label_2d9e88;
            case 0x2D9E8Cu: goto label_2d9e8c;
            case 0x2D9E90u: goto label_2d9e90;
            case 0x2D9E94u: goto label_2d9e94;
            case 0x2D9E98u: goto label_2d9e98;
            case 0x2D9E9Cu: goto label_2d9e9c;
            case 0x2D9EA0u: goto label_2d9ea0;
            case 0x2D9EA4u: goto label_2d9ea4;
            case 0x2D9EA8u: goto label_2d9ea8;
            case 0x2D9EACu: goto label_2d9eac;
            case 0x2D9EB0u: goto label_2d9eb0;
            case 0x2D9EB4u: goto label_2d9eb4;
            case 0x2D9EB8u: goto label_2d9eb8;
            case 0x2D9EBCu: goto label_2d9ebc;
            case 0x2D9EC0u: goto label_2d9ec0;
            case 0x2D9EC4u: goto label_2d9ec4;
            case 0x2D9EC8u: goto label_2d9ec8;
            case 0x2D9ECCu: goto label_2d9ecc;
            case 0x2D9ED0u: goto label_2d9ed0;
            case 0x2D9ED4u: goto label_2d9ed4;
            case 0x2D9ED8u: goto label_2d9ed8;
            case 0x2D9EDCu: goto label_2d9edc;
            case 0x2D9EE0u: goto label_2d9ee0;
            case 0x2D9EE4u: goto label_2d9ee4;
            case 0x2D9EE8u: goto label_2d9ee8;
            case 0x2D9EECu: goto label_2d9eec;
            case 0x2D9EF0u: goto label_2d9ef0;
            case 0x2D9EF4u: goto label_2d9ef4;
            case 0x2D9EF8u: goto label_2d9ef8;
            case 0x2D9EFCu: goto label_2d9efc;
            case 0x2D9F00u: goto label_2d9f00;
            case 0x2D9F04u: goto label_2d9f04;
            case 0x2D9F08u: goto label_2d9f08;
            case 0x2D9F0Cu: goto label_2d9f0c;
            case 0x2D9F10u: goto label_2d9f10;
            case 0x2D9F14u: goto label_2d9f14;
            case 0x2D9F18u: goto label_2d9f18;
            case 0x2D9F1Cu: goto label_2d9f1c;
            case 0x2D9F20u: goto label_2d9f20;
            case 0x2D9F24u: goto label_2d9f24;
            case 0x2D9F28u: goto label_2d9f28;
            case 0x2D9F2Cu: goto label_2d9f2c;
            case 0x2D9F30u: goto label_2d9f30;
            case 0x2D9F34u: goto label_2d9f34;
            case 0x2D9F38u: goto label_2d9f38;
            case 0x2D9F3Cu: goto label_2d9f3c;
            case 0x2D9F40u: goto label_2d9f40;
            case 0x2D9F44u: goto label_2d9f44;
            case 0x2D9F48u: goto label_2d9f48;
            case 0x2D9F4Cu: goto label_2d9f4c;
            case 0x2D9F50u: goto label_2d9f50;
            case 0x2D9F54u: goto label_2d9f54;
            case 0x2D9F58u: goto label_2d9f58;
            case 0x2D9F5Cu: goto label_2d9f5c;
            case 0x2D9F60u: goto label_2d9f60;
            case 0x2D9F64u: goto label_2d9f64;
            case 0x2D9F68u: goto label_2d9f68;
            case 0x2D9F6Cu: goto label_2d9f6c;
            case 0x2D9F70u: goto label_2d9f70;
            case 0x2D9F74u: goto label_2d9f74;
            case 0x2D9F78u: goto label_2d9f78;
            case 0x2D9F7Cu: goto label_2d9f7c;
            case 0x2D9F80u: goto label_2d9f80;
            case 0x2D9F84u: goto label_2d9f84;
            case 0x2D9F88u: goto label_2d9f88;
            case 0x2D9F8Cu: goto label_2d9f8c;
            case 0x2D9F90u: goto label_2d9f90;
            case 0x2D9F94u: goto label_2d9f94;
            case 0x2D9F98u: goto label_2d9f98;
            case 0x2D9F9Cu: goto label_2d9f9c;
            case 0x2D9FA0u: goto label_2d9fa0;
            case 0x2D9FA4u: goto label_2d9fa4;
            case 0x2D9FA8u: goto label_2d9fa8;
            case 0x2D9FACu: goto label_2d9fac;
            case 0x2D9FB0u: goto label_2d9fb0;
            case 0x2D9FB4u: goto label_2d9fb4;
            case 0x2D9FB8u: goto label_2d9fb8;
            case 0x2D9FBCu: goto label_2d9fbc;
            case 0x2D9FC0u: goto label_2d9fc0;
            case 0x2D9FC4u: goto label_2d9fc4;
            case 0x2D9FC8u: goto label_2d9fc8;
            case 0x2D9FCCu: goto label_2d9fcc;
            case 0x2D9FD0u: goto label_2d9fd0;
            case 0x2D9FD4u: goto label_2d9fd4;
            case 0x2D9FD8u: goto label_2d9fd8;
            case 0x2D9FDCu: goto label_2d9fdc;
            case 0x2D9FE0u: goto label_2d9fe0;
            case 0x2D9FE4u: goto label_2d9fe4;
            case 0x2D9FE8u: goto label_2d9fe8;
            case 0x2D9FECu: goto label_2d9fec;
            case 0x2D9FF0u: goto label_2d9ff0;
            case 0x2D9FF4u: goto label_2d9ff4;
            case 0x2D9FF8u: goto label_2d9ff8;
            case 0x2D9FFCu: goto label_2d9ffc;
            case 0x2DA000u: goto label_2da000;
            case 0x2DA004u: goto label_2da004;
            case 0x2DA008u: goto label_2da008;
            case 0x2DA00Cu: goto label_2da00c;
            case 0x2DA010u: goto label_2da010;
            case 0x2DA014u: goto label_2da014;
            case 0x2DA018u: goto label_2da018;
            case 0x2DA01Cu: goto label_2da01c;
            case 0x2DA020u: goto label_2da020;
            case 0x2DA024u: goto label_2da024;
            case 0x2DA028u: goto label_2da028;
            case 0x2DA02Cu: goto label_2da02c;
            case 0x2DA030u: goto label_2da030;
            case 0x2DA034u: goto label_2da034;
            case 0x2DA038u: goto label_2da038;
            case 0x2DA03Cu: goto label_2da03c;
            case 0x2DA040u: goto label_2da040;
            case 0x2DA044u: goto label_2da044;
            case 0x2DA048u: goto label_2da048;
            case 0x2DA04Cu: goto label_2da04c;
            case 0x2DA050u: goto label_2da050;
            case 0x2DA054u: goto label_2da054;
            case 0x2DA058u: goto label_2da058;
            case 0x2DA05Cu: goto label_2da05c;
            case 0x2DA060u: goto label_2da060;
            case 0x2DA064u: goto label_2da064;
            case 0x2DA068u: goto label_2da068;
            case 0x2DA06Cu: goto label_2da06c;
            case 0x2DA070u: goto label_2da070;
            case 0x2DA074u: goto label_2da074;
            case 0x2DA078u: goto label_2da078;
            case 0x2DA07Cu: goto label_2da07c;
            case 0x2DA080u: goto label_2da080;
            case 0x2DA084u: goto label_2da084;
            case 0x2DA088u: goto label_2da088;
            case 0x2DA08Cu: goto label_2da08c;
            case 0x2DA090u: goto label_2da090;
            case 0x2DA094u: goto label_2da094;
            case 0x2DA098u: goto label_2da098;
            case 0x2DA09Cu: goto label_2da09c;
            case 0x2DA0A0u: goto label_2da0a0;
            case 0x2DA0A4u: goto label_2da0a4;
            case 0x2DA0A8u: goto label_2da0a8;
            case 0x2DA0ACu: goto label_2da0ac;
            case 0x2DA0B0u: goto label_2da0b0;
            case 0x2DA0B4u: goto label_2da0b4;
            case 0x2DA0B8u: goto label_2da0b8;
            case 0x2DA0BCu: goto label_2da0bc;
            case 0x2DA0C0u: goto label_2da0c0;
            case 0x2DA0C4u: goto label_2da0c4;
            case 0x2DA0C8u: goto label_2da0c8;
            case 0x2DA0CCu: goto label_2da0cc;
            case 0x2DA0D0u: goto label_2da0d0;
            case 0x2DA0D4u: goto label_2da0d4;
            case 0x2DA0D8u: goto label_2da0d8;
            case 0x2DA0DCu: goto label_2da0dc;
            case 0x2DA0E0u: goto label_2da0e0;
            case 0x2DA0E4u: goto label_2da0e4;
            case 0x2DA0E8u: goto label_2da0e8;
            case 0x2DA0ECu: goto label_2da0ec;
            case 0x2DA0F0u: goto label_2da0f0;
            case 0x2DA0F4u: goto label_2da0f4;
            case 0x2DA0F8u: goto label_2da0f8;
            case 0x2DA0FCu: goto label_2da0fc;
            case 0x2DA100u: goto label_2da100;
            case 0x2DA104u: goto label_2da104;
            case 0x2DA108u: goto label_2da108;
            case 0x2DA10Cu: goto label_2da10c;
            case 0x2DA110u: goto label_2da110;
            case 0x2DA114u: goto label_2da114;
            case 0x2DA118u: goto label_2da118;
            case 0x2DA11Cu: goto label_2da11c;
            case 0x2DA120u: goto label_2da120;
            case 0x2DA124u: goto label_2da124;
            case 0x2DA128u: goto label_2da128;
            case 0x2DA12Cu: goto label_2da12c;
            case 0x2DA130u: goto label_2da130;
            case 0x2DA134u: goto label_2da134;
            case 0x2DA138u: goto label_2da138;
            case 0x2DA13Cu: goto label_2da13c;
            case 0x2DA140u: goto label_2da140;
            case 0x2DA144u: goto label_2da144;
            case 0x2DA148u: goto label_2da148;
            case 0x2DA14Cu: goto label_2da14c;
            case 0x2DA150u: goto label_2da150;
            case 0x2DA154u: goto label_2da154;
            case 0x2DA158u: goto label_2da158;
            case 0x2DA15Cu: goto label_2da15c;
            case 0x2DA160u: goto label_2da160;
            case 0x2DA164u: goto label_2da164;
            case 0x2DA168u: goto label_2da168;
            case 0x2DA16Cu: goto label_2da16c;
            case 0x2DA170u: goto label_2da170;
            case 0x2DA174u: goto label_2da174;
            case 0x2DA178u: goto label_2da178;
            case 0x2DA17Cu: goto label_2da17c;
            case 0x2DA180u: goto label_2da180;
            case 0x2DA184u: goto label_2da184;
            case 0x2DA188u: goto label_2da188;
            case 0x2DA18Cu: goto label_2da18c;
            case 0x2DA190u: goto label_2da190;
            case 0x2DA194u: goto label_2da194;
            case 0x2DA198u: goto label_2da198;
            case 0x2DA19Cu: goto label_2da19c;
            case 0x2DA1A0u: goto label_2da1a0;
            case 0x2DA1A4u: goto label_2da1a4;
            case 0x2DA1A8u: goto label_2da1a8;
            case 0x2DA1ACu: goto label_2da1ac;
            case 0x2DA1B0u: goto label_2da1b0;
            case 0x2DA1B4u: goto label_2da1b4;
            case 0x2DA1B8u: goto label_2da1b8;
            case 0x2DA1BCu: goto label_2da1bc;
            case 0x2DA1C0u: goto label_2da1c0;
            case 0x2DA1C4u: goto label_2da1c4;
            case 0x2DA1C8u: goto label_2da1c8;
            case 0x2DA1CCu: goto label_2da1cc;
            case 0x2DA1D0u: goto label_2da1d0;
            case 0x2DA1D4u: goto label_2da1d4;
            case 0x2DA1D8u: goto label_2da1d8;
            case 0x2DA1DCu: goto label_2da1dc;
            case 0x2DA1E0u: goto label_2da1e0;
            case 0x2DA1E4u: goto label_2da1e4;
            case 0x2DA1E8u: goto label_2da1e8;
            case 0x2DA1ECu: goto label_2da1ec;
            case 0x2DA1F0u: goto label_2da1f0;
            case 0x2DA1F4u: goto label_2da1f4;
            case 0x2DA1F8u: goto label_2da1f8;
            case 0x2DA1FCu: goto label_2da1fc;
            case 0x2DA200u: goto label_2da200;
            case 0x2DA204u: goto label_2da204;
            case 0x2DA208u: goto label_2da208;
            case 0x2DA20Cu: goto label_2da20c;
            case 0x2DA210u: goto label_2da210;
            case 0x2DA214u: goto label_2da214;
            case 0x2DA218u: goto label_2da218;
            case 0x2DA21Cu: goto label_2da21c;
            case 0x2DA220u: goto label_2da220;
            case 0x2DA224u: goto label_2da224;
            case 0x2DA228u: goto label_2da228;
            case 0x2DA22Cu: goto label_2da22c;
            case 0x2DA230u: goto label_2da230;
            case 0x2DA234u: goto label_2da234;
            case 0x2DA238u: goto label_2da238;
            case 0x2DA23Cu: goto label_2da23c;
            case 0x2DA240u: goto label_2da240;
            case 0x2DA244u: goto label_2da244;
            case 0x2DA248u: goto label_2da248;
            case 0x2DA24Cu: goto label_2da24c;
            case 0x2DA250u: goto label_2da250;
            case 0x2DA254u: goto label_2da254;
            case 0x2DA258u: goto label_2da258;
            case 0x2DA25Cu: goto label_2da25c;
            case 0x2DA260u: goto label_2da260;
            case 0x2DA264u: goto label_2da264;
            case 0x2DA268u: goto label_2da268;
            case 0x2DA26Cu: goto label_2da26c;
            case 0x2DA270u: goto label_2da270;
            case 0x2DA274u: goto label_2da274;
            case 0x2DA278u: goto label_2da278;
            case 0x2DA27Cu: goto label_2da27c;
            case 0x2DA280u: goto label_2da280;
            case 0x2DA284u: goto label_2da284;
            case 0x2DA288u: goto label_2da288;
            case 0x2DA28Cu: goto label_2da28c;
            case 0x2DA290u: goto label_2da290;
            case 0x2DA294u: goto label_2da294;
            case 0x2DA298u: goto label_2da298;
            case 0x2DA29Cu: goto label_2da29c;
            case 0x2DA2A0u: goto label_2da2a0;
            case 0x2DA2A4u: goto label_2da2a4;
            case 0x2DA2A8u: goto label_2da2a8;
            case 0x2DA2ACu: goto label_2da2ac;
            case 0x2DA2B0u: goto label_2da2b0;
            case 0x2DA2B4u: goto label_2da2b4;
            case 0x2DA2B8u: goto label_2da2b8;
            case 0x2DA2BCu: goto label_2da2bc;
            case 0x2DA2C0u: goto label_2da2c0;
            case 0x2DA2C4u: goto label_2da2c4;
            case 0x2DA2C8u: goto label_2da2c8;
            case 0x2DA2CCu: goto label_2da2cc;
            case 0x2DA2D0u: goto label_2da2d0;
            case 0x2DA2D4u: goto label_2da2d4;
            case 0x2DA2D8u: goto label_2da2d8;
            case 0x2DA2DCu: goto label_2da2dc;
            case 0x2DA2E0u: goto label_2da2e0;
            case 0x2DA2E4u: goto label_2da2e4;
            case 0x2DA2E8u: goto label_2da2e8;
            case 0x2DA2ECu: goto label_2da2ec;
            case 0x2DA2F0u: goto label_2da2f0;
            case 0x2DA2F4u: goto label_2da2f4;
            case 0x2DA2F8u: goto label_2da2f8;
            case 0x2DA2FCu: goto label_2da2fc;
            case 0x2DA300u: goto label_2da300;
            case 0x2DA304u: goto label_2da304;
            case 0x2DA308u: goto label_2da308;
            case 0x2DA30Cu: goto label_2da30c;
            case 0x2DA310u: goto label_2da310;
            case 0x2DA314u: goto label_2da314;
            case 0x2DA318u: goto label_2da318;
            case 0x2DA31Cu: goto label_2da31c;
            case 0x2DA320u: goto label_2da320;
            case 0x2DA324u: goto label_2da324;
            case 0x2DA328u: goto label_2da328;
            case 0x2DA32Cu: goto label_2da32c;
            case 0x2DA330u: goto label_2da330;
            case 0x2DA334u: goto label_2da334;
            case 0x2DA338u: goto label_2da338;
            case 0x2DA33Cu: goto label_2da33c;
            case 0x2DA340u: goto label_2da340;
            case 0x2DA344u: goto label_2da344;
            case 0x2DA348u: goto label_2da348;
            case 0x2DA34Cu: goto label_2da34c;
            case 0x2DA350u: goto label_2da350;
            case 0x2DA354u: goto label_2da354;
            case 0x2DA358u: goto label_2da358;
            case 0x2DA35Cu: goto label_2da35c;
            case 0x2DA360u: goto label_2da360;
            case 0x2DA364u: goto label_2da364;
            case 0x2DA368u: goto label_2da368;
            case 0x2DA36Cu: goto label_2da36c;
            case 0x2DA370u: goto label_2da370;
            case 0x2DA374u: goto label_2da374;
            case 0x2DA378u: goto label_2da378;
            case 0x2DA37Cu: goto label_2da37c;
            case 0x2DA380u: goto label_2da380;
            case 0x2DA384u: goto label_2da384;
            case 0x2DA388u: goto label_2da388;
            case 0x2DA38Cu: goto label_2da38c;
            case 0x2DA390u: goto label_2da390;
            case 0x2DA394u: goto label_2da394;
            case 0x2DA398u: goto label_2da398;
            case 0x2DA39Cu: goto label_2da39c;
            case 0x2DA3A0u: goto label_2da3a0;
            case 0x2DA3A4u: goto label_2da3a4;
            case 0x2DA3A8u: goto label_2da3a8;
            case 0x2DA3ACu: goto label_2da3ac;
            case 0x2DA3B0u: goto label_2da3b0;
            case 0x2DA3B4u: goto label_2da3b4;
            case 0x2DA3B8u: goto label_2da3b8;
            case 0x2DA3BCu: goto label_2da3bc;
            case 0x2DA3C0u: goto label_2da3c0;
            case 0x2DA3C4u: goto label_2da3c4;
            case 0x2DA3C8u: goto label_2da3c8;
            case 0x2DA3CCu: goto label_2da3cc;
            case 0x2DA3D0u: goto label_2da3d0;
            case 0x2DA3D4u: goto label_2da3d4;
            case 0x2DA3D8u: goto label_2da3d8;
            case 0x2DA3DCu: goto label_2da3dc;
            case 0x2DA3E0u: goto label_2da3e0;
            case 0x2DA3E4u: goto label_2da3e4;
            case 0x2DA3E8u: goto label_2da3e8;
            case 0x2DA3ECu: goto label_2da3ec;
            case 0x2DA3F0u: goto label_2da3f0;
            case 0x2DA3F4u: goto label_2da3f4;
            case 0x2DA3F8u: goto label_2da3f8;
            case 0x2DA3FCu: goto label_2da3fc;
            case 0x2DA400u: goto label_2da400;
            case 0x2DA404u: goto label_2da404;
            case 0x2DA408u: goto label_2da408;
            case 0x2DA40Cu: goto label_2da40c;
            case 0x2DA410u: goto label_2da410;
            case 0x2DA414u: goto label_2da414;
            case 0x2DA418u: goto label_2da418;
            case 0x2DA41Cu: goto label_2da41c;
            case 0x2DA420u: goto label_2da420;
            case 0x2DA424u: goto label_2da424;
            case 0x2DA428u: goto label_2da428;
            case 0x2DA42Cu: goto label_2da42c;
            case 0x2DA430u: goto label_2da430;
            case 0x2DA434u: goto label_2da434;
            case 0x2DA438u: goto label_2da438;
            case 0x2DA43Cu: goto label_2da43c;
            case 0x2DA440u: goto label_2da440;
            case 0x2DA444u: goto label_2da444;
            case 0x2DA448u: goto label_2da448;
            case 0x2DA44Cu: goto label_2da44c;
            case 0x2DA450u: goto label_2da450;
            case 0x2DA454u: goto label_2da454;
            case 0x2DA458u: goto label_2da458;
            case 0x2DA45Cu: goto label_2da45c;
            case 0x2DA460u: goto label_2da460;
            case 0x2DA464u: goto label_2da464;
            case 0x2DA468u: goto label_2da468;
            case 0x2DA46Cu: goto label_2da46c;
            case 0x2DA470u: goto label_2da470;
            case 0x2DA474u: goto label_2da474;
            case 0x2DA478u: goto label_2da478;
            case 0x2DA47Cu: goto label_2da47c;
            case 0x2DA480u: goto label_2da480;
            case 0x2DA484u: goto label_2da484;
            case 0x2DA488u: goto label_2da488;
            case 0x2DA48Cu: goto label_2da48c;
            case 0x2DA490u: goto label_2da490;
            case 0x2DA494u: goto label_2da494;
            case 0x2DA498u: goto label_2da498;
            case 0x2DA5E8u:  // inflate_codes: called via jump from first switch; run recompiled then return so runner resumes at ra
                inflate_codes_0x2da5e8(rdram, ctx, runtime);
                return;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D9790u;
label_2d9790:
    // 0x2d9790: 0x12e002d3
label_2d9794:
    if (ctx->pc == 0x2D9794u) {
        ctx->pc = 0x2D9794u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2D9798u;
        goto label_2d9798;
    }
    ctx->pc = 0x2D9790u;
    {
        const bool branch_taken_0x2d9790 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9794u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2d9790) {
            ctx->pc = 0x2DA2E0u;
            goto label_2da2e0;
        }
    }
    ctx->pc = 0x2D9798u;
label_2d9798:
    // 0x2d9798: 0xafa00020
    ctx->pc = 0x2d9798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d979c:
    // 0x2d979c: 0x92a20000
    ctx->pc = 0x2d979cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2d97a0:
    // 0x2d97a0: 0x2621004
    ctx->pc = 0x2d97a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2d97a4:
    // 0x2d97a4: 0x282a025
    ctx->pc = 0x2d97a4u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d97a8:
    // 0x2d97a8: 0x26b50001
    ctx->pc = 0x2d97a8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2d97ac:
    // 0x2d97ac: 0x26730008
    ctx->pc = 0x2d97acu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2d97b0:
    // 0x2d97b0: 0x2e620003
    ctx->pc = 0x2d97b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 3));
label_2d97b4:
    // 0x2d97b4: 0x1440fff6
label_2d97b8:
    if (ctx->pc == 0x2D97B8u) {
        ctx->pc = 0x2D97B8u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 20), 7));
        ctx->pc = 0x2D97BCu;
        goto label_2d97bc;
    }
    ctx->pc = 0x2D97B4u;
    {
        const bool branch_taken_0x2d97b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D97B8u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 20), 7));
        if (branch_taken_0x2d97b4) {
            ctx->pc = 0x2D9790u;
            goto label_2d9790;
        }
    }
    ctx->pc = 0x2D97BCu;
label_2d97bc:
    // 0x2d97bc: 0x32820001
    ctx->pc = 0x2d97bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
label_2d97c0:
    // 0x2d97c0: 0xae220018
    ctx->pc = 0x2d97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2d97c4:
    // 0x2d97c4: 0x101842
    ctx->pc = 0x2d97c4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 1));
label_2d97c8:
    // 0x2d97c8: 0x24020001
    ctx->pc = 0x2d97c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2d97cc:
    // 0x2d97cc: 0x10620011
label_2d97d0:
    if (ctx->pc == 0x2D97D0u) {
        ctx->pc = 0x2D97D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D97D4u;
        goto label_2d97d4;
    }
    ctx->pc = 0x2D97CCu;
    {
        const bool branch_taken_0x2d97cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D97D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d97cc) {
            ctx->pc = 0x2D9814u;
            goto label_2d9814;
        }
    }
    ctx->pc = 0x2D97D4u;
label_2d97d4:
    // 0x2d97d4: 0x10600007
label_2d97d8:
    if (ctx->pc == 0x2D97D8u) {
        ctx->pc = 0x2D97D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2D97DCu;
        goto label_2d97dc;
    }
    ctx->pc = 0x2D97D4u;
    {
        const bool branch_taken_0x2d97d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D97D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d97d4) {
            ctx->pc = 0x2D97F4u;
            goto label_2d97f4;
        }
    }
    ctx->pc = 0x2D97DCu;
label_2d97dc:
    // 0x2d97dc: 0x1062002d
label_2d97e0:
    if (ctx->pc == 0x2D97E0u) {
        ctx->pc = 0x2D97E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2D97E4u;
        goto label_2d97e4;
    }
    ctx->pc = 0x2D97DCu;
    {
        const bool branch_taken_0x2d97dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D97E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2d97dc) {
            ctx->pc = 0x2D9894u;
            goto label_2d9894;
        }
    }
    ctx->pc = 0x2D97E4u;
label_2d97e4:
    // 0x2d97e4: 0x5062002e
label_2d97e8:
    if (ctx->pc == 0x2D97E8u) {
        ctx->pc = 0x2D97E8u;
        SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 3));
        ctx->pc = 0x2D97ECu;
        goto label_2d97ec;
    }
    ctx->pc = 0x2D97E4u;
    {
        const bool branch_taken_0x2d97e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2d97e4) {
            ctx->pc = 0x2D97E8u;
            SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 3));
            ctx->pc = 0x2D98A0u;
            goto label_2d98a0;
        }
    }
    ctx->pc = 0x2D97ECu;
label_2d97ec:
    // 0x2d97ec: 0x1000ffdf
label_2d97f0:
    if (ctx->pc == 0x2D97F0u) {
        ctx->pc = 0x2D97F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D97F4u;
        goto label_2d97f4;
    }
    ctx->pc = 0x2D97ECu;
    {
        const bool branch_taken_0x2d97ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D97F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x2d97ec) {
            ctx->pc = 0x2D976Cu;
            goto label_2d976c;
        }
    }
    ctx->pc = 0x2D97F4u;
label_2d97f4:
    // 0x2d97f4: 0x14a0c2
    ctx->pc = 0x2d97f4u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 3));
label_2d97f8:
    // 0x2d97f8: 0x2673fffd
    ctx->pc = 0x2d97f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967293));
label_2d97fc:
    // 0x2d97fc: 0x32700007
    ctx->pc = 0x2d97fcu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 19), 7));
label_2d9800:
    // 0x2d9800: 0x214a006
    ctx->pc = 0x2d9800u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 16) & 0x1F));
label_2d9804:
    // 0x2d9804: 0x2709823
    ctx->pc = 0x2d9804u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2d9808:
    // 0x2d9808: 0x24020001
    ctx->pc = 0x2d9808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2d980c:
    // 0x2d980c: 0x1000ffd6
label_2d9810:
    if (ctx->pc == 0x2D9810u) {
        ctx->pc = 0x2D9810u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9814u;
        goto label_2d9814;
    }
    ctx->pc = 0x2D980Cu;
    {
        const bool branch_taken_0x2d980c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9810u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2d980c) {
            ctx->pc = 0x2D9768u;
            goto label_2d9768;
        }
    }
    ctx->pc = 0x2D9814u;
label_2d9814:
    // 0x2d9814: 0x27a50004
    ctx->pc = 0x2d9814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
label_2d9818:
    // 0x2d9818: 0x27a60008
    ctx->pc = 0x2d9818u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
label_2d981c:
    // 0x2d981c: 0xc0b6f1a
label_2d9820:
    if (ctx->pc == 0x2D9820u) {
        ctx->pc = 0x2D9820u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
        ctx->pc = 0x2D9824u;
        goto label_2d9824;
    }
    ctx->pc = 0x2D981Cu;
    SET_GPR_U32(ctx, 31, 0x2D9824u);
    ctx->pc = 0x2D9820u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x2DBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_fixed_0x2dbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9824u; }
    }
    if (ctx->pc != 0x2D9824u) { return; }
    ctx->pc = 0x2D9824u;
label_2d9824:
    // 0x2d9824: 0x8fa40000
    ctx->pc = 0x2d9824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9828:
    // 0x2d9828: 0x8fa50004
    ctx->pc = 0x2d9828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d982c:
    // 0x2d982c: 0x8fa60008
    ctx->pc = 0x2d982cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9830:
    // 0x2d9830: 0x8fa7000c
    ctx->pc = 0x2d9830u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2d9834:
    // 0x2d9834: 0xc0b695e
label_2d9838:
    if (ctx->pc == 0x2D9838u) {
        ctx->pc = 0x2D9838u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D983Cu;
        goto label_2d983c;
    }
    ctx->pc = 0x2D9834u;
    SET_GPR_U32(ctx, 31, 0x2D983Cu);
    ctx->pc = 0x2D9838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DA578u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_new_0x2da578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D983Cu; }
    }
    if (ctx->pc != 0x2D983Cu) { return; }
    ctx->pc = 0x2D983Cu;
label_2d983c:
    // 0x2d983c: 0x1440000f
label_2d9840:
    if (ctx->pc == 0x2D9840u) {
        ctx->pc = 0x2D9840u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9844u;
        goto label_2d9844;
    }
    ctx->pc = 0x2D983Cu;
    {
        const bool branch_taken_0x2d983c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9840u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2d983c) {
            ctx->pc = 0x2D987Cu;
            goto label_2d987c;
        }
    }
    ctx->pc = 0x2D9844u;
label_2d9844:
    // 0x2d9844: 0xae340020
    ctx->pc = 0x2d9844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d9848:
    // 0x2d9848: 0xae33001c
    ctx->pc = 0x2d9848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d984c:
    // 0x2d984c: 0xae570004
    ctx->pc = 0x2d984cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d9850:
    // 0x2d9850: 0x8e420000
    ctx->pc = 0x2d9850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9854:
    // 0x2d9854: 0x2a21023
    ctx->pc = 0x2d9854u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d9858:
    // 0x2d9858: 0x8e430008
    ctx->pc = 0x2d9858u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d985c:
    // 0x2d985c: 0x431021
    ctx->pc = 0x2d985cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9860:
    // 0x2d9860: 0xae420008
    ctx->pc = 0x2d9860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d9864:
    // 0x2d9864: 0xae550000
    ctx->pc = 0x2d9864u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d9868:
    // 0x2d9868: 0xae3e0030
    ctx->pc = 0x2d9868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d986c:
    // 0x2d986c: 0x220202d
    ctx->pc = 0x2d986cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9870:
    // 0x2d9870: 0x240282d
    ctx->pc = 0x2d9870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9874:
    // 0x2d9874: 0x100002fb
label_2d9878:
    if (ctx->pc == 0x2D9878u) {
        ctx->pc = 0x2D9878u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x2D987Cu;
        goto label_2d987c;
    }
    ctx->pc = 0x2D9874u;
    {
        const bool branch_taken_0x2d9874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9878u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2d9874) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D987Cu;
label_2d987c:
    // 0x2d987c: 0xae200004
    ctx->pc = 0x2d987cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2d9880:
    // 0x2d9880: 0xae200008
    ctx->pc = 0x2d9880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2d9884:
    // 0x2d9884: 0x14a0c2
    ctx->pc = 0x2d9884u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 3));
label_2d9888:
    // 0x2d9888: 0x2673fffd
    ctx->pc = 0x2d9888u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967293));
label_2d988c:
    // 0x2d988c: 0x1000ffdf
label_2d9890:
    if (ctx->pc == 0x2D9890u) {
        ctx->pc = 0x2D9890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2D9894u;
        goto label_2d9894;
    }
    ctx->pc = 0x2D988Cu;
    {
        const bool branch_taken_0x2d988c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2d988c) {
            ctx->pc = 0x2D980Cu;
            goto label_2d980c;
        }
    }
    ctx->pc = 0x2D9894u;
label_2d9894:
    // 0x2d9894: 0x14a0c2
    ctx->pc = 0x2d9894u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 3));
label_2d9898:
    // 0x2d9898: 0x1000ffdc
label_2d989c:
    if (ctx->pc == 0x2D989Cu) {
        ctx->pc = 0x2D989Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->pc = 0x2D98A0u;
        goto label_2d98a0;
    }
    ctx->pc = 0x2D9898u;
    {
        const bool branch_taken_0x2d9898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D989Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967293));
        if (branch_taken_0x2d9898) {
            ctx->pc = 0x2D980Cu;
            goto label_2d980c;
        }
    }
    ctx->pc = 0x2D98A0u;
label_2d98a0:
    // 0x2d98a0: 0x2673fffd
    ctx->pc = 0x2d98a0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967293));
label_2d98a4:
    // 0x2d98a4: 0x24020009
    ctx->pc = 0x2d98a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2d98a8:
    // 0x2d98a8: 0xae220000
    ctx->pc = 0x2d98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d98ac:
    // 0x2d98ac: 0x3c02003c
    ctx->pc = 0x2d98acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2d98b0:
    // 0x2d98b0: 0x24428080
    ctx->pc = 0x2d98b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934656));
label_2d98b4:
    // 0x2d98b4: 0xae420018
    ctx->pc = 0x2d98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2d98b8:
    // 0x2d98b8: 0xae340020
    ctx->pc = 0x2d98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d98bc:
    // 0x2d98bc: 0xae33001c
    ctx->pc = 0x2d98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d98c0:
    // 0x2d98c0: 0xae570004
    ctx->pc = 0x2d98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d98c4:
    // 0x2d98c4: 0x8e420000
    ctx->pc = 0x2d98c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d98c8:
    // 0x2d98c8: 0x2a21023
    ctx->pc = 0x2d98c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d98cc:
    // 0x2d98cc: 0x8e430008
    ctx->pc = 0x2d98ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d98d0:
    // 0x2d98d0: 0x431021
    ctx->pc = 0x2d98d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d98d4:
    // 0x2d98d4: 0xae420008
    ctx->pc = 0x2d98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d98d8:
    // 0x2d98d8: 0xae550000
    ctx->pc = 0x2d98d8u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d98dc:
    // 0x2d98dc: 0xae3e0030
    ctx->pc = 0x2d98dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d98e0:
    // 0x2d98e0: 0x220202d
    ctx->pc = 0x2d98e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d98e4:
    // 0x2d98e4: 0x240282d
    ctx->pc = 0x2d98e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d98e8:
    // 0x2d98e8: 0x100002de
label_2d98ec:
    if (ctx->pc == 0x2D98ECu) {
        ctx->pc = 0x2D98ECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2D98F0u;
        goto label_2d98f0;
    }
    ctx->pc = 0x2D98E8u;
    {
        const bool branch_taken_0x2d98e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D98ECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d98e8) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D98F0u;
label_2d98f0:
    // 0x2d98f0: 0x12e00289
label_2d98f4:
    if (ctx->pc == 0x2D98F4u) {
        ctx->pc = 0x2D98F4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2D98F8u;
        goto label_2d98f8;
    }
    ctx->pc = 0x2D98F0u;
    {
        const bool branch_taken_0x2d98f0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D98F4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2d98f0) {
            ctx->pc = 0x2DA318u;
            goto label_2da318;
        }
    }
    ctx->pc = 0x2D98F8u;
label_2d98f8:
    // 0x2d98f8: 0xafa00020
    ctx->pc = 0x2d98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d98fc:
    // 0x2d98fc: 0x92a20000
    ctx->pc = 0x2d98fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2d9900:
    // 0x2d9900: 0x2621004
    ctx->pc = 0x2d9900u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2d9904:
    // 0x2d9904: 0x282a025
    ctx->pc = 0x2d9904u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d9908:
    // 0x2d9908: 0x26b50001
    ctx->pc = 0x2d9908u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2d990c:
    // 0x2d990c: 0x26730008
    ctx->pc = 0x2d990cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2d9910:
    // 0x2d9910: 0x2e620020
    ctx->pc = 0x2d9910u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 32));
label_2d9914:
    // 0x2d9914: 0x1440fff6
label_2d9918:
    if (ctx->pc == 0x2D9918u) {
        ctx->pc = 0x2D9918u;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->pc = 0x2D991Cu;
        goto label_2d991c;
    }
    ctx->pc = 0x2D9914u;
    {
        const bool branch_taken_0x2d9914 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9918u;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x2d9914) {
            ctx->pc = 0x2D98F0u;
            goto label_2d98f0;
        }
    }
    ctx->pc = 0x2D991Cu;
label_2d991c:
    // 0x2d991c: 0x21402
    ctx->pc = 0x2d991cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
label_2d9920:
    // 0x2d9920: 0x3283ffff
    ctx->pc = 0x2d9920u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 65535));
label_2d9924:
    // 0x2d9924: 0x10430013
label_2d9928:
    if (ctx->pc == 0x2D9928u) {
        ctx->pc = 0x2D9928u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2D992Cu;
        goto label_2d992c;
    }
    ctx->pc = 0x2D9924u;
    {
        const bool branch_taken_0x2d9924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2D9928u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x2d9924) {
            ctx->pc = 0x2D9974u;
            goto label_2d9974;
        }
    }
    ctx->pc = 0x2D992Cu;
label_2d992c:
    // 0x2d992c: 0xae220000
    ctx->pc = 0x2d992cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9930:
    // 0x2d9930: 0x3c02003c
    ctx->pc = 0x2d9930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2d9934:
    // 0x2d9934: 0x24428098
    ctx->pc = 0x2d9934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934680));
label_2d9938:
    // 0x2d9938: 0xae420018
    ctx->pc = 0x2d9938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2d993c:
    // 0x2d993c: 0xae340020
    ctx->pc = 0x2d993cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d9940:
    // 0x2d9940: 0xae33001c
    ctx->pc = 0x2d9940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d9944:
    // 0x2d9944: 0xae570004
    ctx->pc = 0x2d9944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d9948:
    // 0x2d9948: 0x8e420000
    ctx->pc = 0x2d9948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d994c:
    // 0x2d994c: 0x2a21023
    ctx->pc = 0x2d994cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d9950:
    // 0x2d9950: 0x8e430008
    ctx->pc = 0x2d9950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d9954:
    // 0x2d9954: 0x431021
    ctx->pc = 0x2d9954u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9958:
    // 0x2d9958: 0xae420008
    ctx->pc = 0x2d9958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d995c:
    // 0x2d995c: 0xae550000
    ctx->pc = 0x2d995cu;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d9960:
    // 0x2d9960: 0xae3e0030
    ctx->pc = 0x2d9960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d9964:
    // 0x2d9964: 0x220202d
    ctx->pc = 0x2d9964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9968:
    // 0x2d9968: 0x240282d
    ctx->pc = 0x2d9968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d996c:
    // 0x2d996c: 0x100002bd
label_2d9970:
    if (ctx->pc == 0x2D9970u) {
        ctx->pc = 0x2D9970u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2D9974u;
        goto label_2d9974;
    }
    ctx->pc = 0x2D996Cu;
    {
        const bool branch_taken_0x2d996c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9970u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d996c) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D9974u;
label_2d9974:
    // 0x2d9974: 0x3282ffff
    ctx->pc = 0x2d9974u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 65535));
label_2d9978:
    // 0x2d9978: 0xae220004
    ctx->pc = 0x2d9978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2d997c:
    // 0x2d997c: 0x982d
    ctx->pc = 0x2d997cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9980:
    // 0x2d9980: 0x14400005
label_2d9984:
    if (ctx->pc == 0x2D9984u) {
        ctx->pc = 0x2D9984u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9988u;
        goto label_2d9988;
    }
    ctx->pc = 0x2D9980u;
    {
        const bool branch_taken_0x2d9980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9984u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d9980) {
            ctx->pc = 0x2D9998u;
            goto label_2d9998;
        }
    }
    ctx->pc = 0x2D9988u;
label_2d9988:
    // 0x2d9988: 0x8e230018
    ctx->pc = 0x2d9988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2d998c:
    // 0x2d998c: 0x24020007
    ctx->pc = 0x2d998cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2d9990:
    // 0x2d9990: 0x1000ff9e
label_2d9994:
    if (ctx->pc == 0x2D9994u) {
        ctx->pc = 0x2D9994u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = 0x2D9998u;
        goto label_2d9998;
    }
    ctx->pc = 0x2D9990u;
    {
        const bool branch_taken_0x2d9990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9994u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        if (branch_taken_0x2d9990) {
            ctx->pc = 0x2D980Cu;
            goto label_2d980c;
        }
    }
    ctx->pc = 0x2D9998u;
label_2d9998:
    // 0x2d9998: 0x1000ff9c
label_2d999c:
    if (ctx->pc == 0x2D999Cu) {
        ctx->pc = 0x2D999Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2D99A0u;
        goto label_2d99a0;
    }
    ctx->pc = 0x2D9998u;
    {
        const bool branch_taken_0x2d9998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D999Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d9998) {
            ctx->pc = 0x2D980Cu;
            goto label_2d980c;
        }
    }
    ctx->pc = 0x2D99A0u;
label_2d99a0:
    // 0x2d99a0: 0x16e0000e
label_2d99a4:
    if (ctx->pc == 0x2D99A4u) {
        ctx->pc = 0x2D99A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D99A8u;
        goto label_2d99a8;
    }
    ctx->pc = 0x2D99A0u;
    {
        const bool branch_taken_0x2d99a0 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D99A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d99a0) {
            ctx->pc = 0x2D99DCu;
            goto label_2d99dc;
        }
    }
    ctx->pc = 0x2D99A8u;
label_2d99a8:
    // 0x2d99a8: 0xae340020
    ctx->pc = 0x2d99a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d99ac:
    // 0x2d99ac: 0xae33001c
    ctx->pc = 0x2d99acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d99b0:
    // 0x2d99b0: 0xae400004
    ctx->pc = 0x2d99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2d99b4:
    // 0x2d99b4: 0x8e420000
    ctx->pc = 0x2d99b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d99b8:
    // 0x2d99b8: 0x2a21023
    ctx->pc = 0x2d99b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d99bc:
    // 0x2d99bc: 0x8e430008
    ctx->pc = 0x2d99bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d99c0:
    // 0x2d99c0: 0x431021
    ctx->pc = 0x2d99c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d99c4:
    // 0x2d99c4: 0xae420008
    ctx->pc = 0x2d99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d99c8:
    // 0x2d99c8: 0xae550000
    ctx->pc = 0x2d99c8u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d99cc:
    // 0x2d99cc: 0xae3e0030
    ctx->pc = 0x2d99ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d99d0:
    // 0x2d99d0: 0x240282d
    ctx->pc = 0x2d99d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d99d4:
    // 0x2d99d4: 0x100002a3
label_2d99d8:
    if (ctx->pc == 0x2D99D8u) {
        ctx->pc = 0x2D99D8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2D99DCu;
        goto label_2d99dc;
    }
    ctx->pc = 0x2D99D4u;
    {
        const bool branch_taken_0x2d99d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D99D8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d99d4) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D99DCu;
label_2d99dc:
    // 0x2d99dc: 0x56c00040
label_2d99e0:
    if (ctx->pc == 0x2D99E0u) {
        ctx->pc = 0x2D99E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x2D99E4u;
        goto label_2d99e4;
    }
    ctx->pc = 0x2D99DCu;
    {
        const bool branch_taken_0x2d99dc = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d99dc) {
            ctx->pc = 0x2D99E0u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x2D9AE0u;
            goto label_2d9ae0;
        }
    }
    ctx->pc = 0x2D99E4u;
label_2d99e4:
    // 0x2d99e4: 0x8e220028
    ctx->pc = 0x2d99e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d99e8:
    // 0x2d99e8: 0x17c2000d
label_2d99ec:
    if (ctx->pc == 0x2D99ECu) {
        ctx->pc = 0x2D99F0u;
        goto label_2d99f0;
    }
    ctx->pc = 0x2D99E8u;
    {
        const bool branch_taken_0x2d99e8 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d99e8) {
            ctx->pc = 0x2D9A20u;
            goto label_2d9a20;
        }
    }
    ctx->pc = 0x2D99F0u;
label_2d99f0:
    // 0x2d99f0: 0x8e23002c
    ctx->pc = 0x2d99f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d99f4:
    // 0x2d99f4: 0x8e220024
    ctx->pc = 0x2d99f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d99f8:
    // 0x2d99f8: 0x10620009
label_2d99fc:
    if (ctx->pc == 0x2D99FCu) {
        ctx->pc = 0x2D9A00u;
        goto label_2d9a00;
    }
    ctx->pc = 0x2D99F8u;
    {
        const bool branch_taken_0x2d99f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2d99f8) {
            ctx->pc = 0x2D9A20u;
            goto label_2d9a20;
        }
    }
    ctx->pc = 0x2D9A00u;
label_2d9a00:
    // 0x2d9a00: 0x40f02d
    ctx->pc = 0x2d9a00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a04:
    // 0x2d9a04: 0x3c3102b
    ctx->pc = 0x2d9a04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2d9a08:
    // 0x2d9a08: 0x10400003
label_2d9a0c:
    if (ctx->pc == 0x2D9A0Cu) {
        ctx->pc = 0x2D9A0Cu;
        SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->pc = 0x2D9A10u;
        goto label_2d9a10;
    }
    ctx->pc = 0x2D9A08u;
    {
        const bool branch_taken_0x2d9a08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9A0Cu;
        SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        if (branch_taken_0x2d9a08) {
            ctx->pc = 0x2D9A18u;
            goto label_2d9a18;
        }
    }
    ctx->pc = 0x2D9A10u;
label_2d9a10:
    // 0x2d9a10: 0x10000003
label_2d9a14:
    if (ctx->pc == 0x2D9A14u) {
        ctx->pc = 0x2D9A14u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x2D9A18u;
        goto label_2d9a18;
    }
    ctx->pc = 0x2D9A10u;
    {
        const bool branch_taken_0x2d9a10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9A14u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        if (branch_taken_0x2d9a10) {
            ctx->pc = 0x2D9A20u;
            goto label_2d9a20;
        }
    }
    ctx->pc = 0x2D9A18u;
label_2d9a18:
    // 0x2d9a18: 0x8e220028
    ctx->pc = 0x2d9a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d9a1c:
    // 0x2d9a1c: 0x5eb023
    ctx->pc = 0x2d9a1cu;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2d9a20:
    // 0x2d9a20: 0x56c0002f
label_2d9a24:
    if (ctx->pc == 0x2D9A24u) {
        ctx->pc = 0x2D9A24u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x2D9A28u;
        goto label_2d9a28;
    }
    ctx->pc = 0x2D9A20u;
    {
        const bool branch_taken_0x2d9a20 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9a20) {
            ctx->pc = 0x2D9A24u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x2D9AE0u;
            goto label_2d9ae0;
        }
    }
    ctx->pc = 0x2D9A28u;
label_2d9a28:
    // 0x2d9a28: 0xae3e0030
    ctx->pc = 0x2d9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d9a2c:
    // 0x2d9a2c: 0x220202d
    ctx->pc = 0x2d9a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a30:
    // 0x2d9a30: 0x240282d
    ctx->pc = 0x2d9a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a34:
    // 0x2d9a34: 0xc0b6cac
label_2d9a38:
    if (ctx->pc == 0x2D9A38u) {
        ctx->pc = 0x2D9A38u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2D9A3Cu;
        goto label_2d9a3c;
    }
    ctx->pc = 0x2D9A34u;
    SET_GPR_U32(ctx, 31, 0x2D9A3Cu);
    ctx->pc = 0x2D9A38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2DB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x2db2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A3Cu; }
    }
    if (ctx->pc != 0x2D9A3Cu) { return; }
    ctx->pc = 0x2D9A3Cu;
label_2d9a3c:
    // 0x2d9a3c: 0xafa20020
    ctx->pc = 0x2d9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2d9a40:
    // 0x2d9a40: 0x8e3e0030
    ctx->pc = 0x2d9a40u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2d9a44:
    // 0x2d9a44: 0x8e23002c
    ctx->pc = 0x2d9a44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d9a48:
    // 0x2d9a48: 0x3c3102b
    ctx->pc = 0x2d9a48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2d9a4c:
    // 0x2d9a4c: 0x10400003
label_2d9a50:
    if (ctx->pc == 0x2D9A50u) {
        ctx->pc = 0x2D9A50u;
        SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->pc = 0x2D9A54u;
        goto label_2d9a54;
    }
    ctx->pc = 0x2D9A4Cu;
    {
        const bool branch_taken_0x2d9a4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9A50u;
        SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        if (branch_taken_0x2d9a4c) {
            ctx->pc = 0x2D9A5Cu;
            goto label_2d9a5c;
        }
    }
    ctx->pc = 0x2D9A54u;
label_2d9a54:
    // 0x2d9a54: 0x10000003
label_2d9a58:
    if (ctx->pc == 0x2D9A58u) {
        ctx->pc = 0x2D9A58u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x2D9A5Cu;
        goto label_2d9a5c;
    }
    ctx->pc = 0x2D9A54u;
    {
        const bool branch_taken_0x2d9a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9A58u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        if (branch_taken_0x2d9a54) {
            ctx->pc = 0x2D9A64u;
            goto label_2d9a64;
        }
    }
    ctx->pc = 0x2D9A5Cu;
label_2d9a5c:
    // 0x2d9a5c: 0x8e220028
    ctx->pc = 0x2d9a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d9a60:
    // 0x2d9a60: 0x5eb023
    ctx->pc = 0x2d9a60u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2d9a64:
    // 0x2d9a64: 0x8e220028
    ctx->pc = 0x2d9a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d9a68:
    // 0x2d9a68: 0x17c2000d
label_2d9a6c:
    if (ctx->pc == 0x2D9A6Cu) {
        ctx->pc = 0x2D9A70u;
        goto label_2d9a70;
    }
    ctx->pc = 0x2D9A68u;
    {
        const bool branch_taken_0x2d9a68 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d9a68) {
            ctx->pc = 0x2D9AA0u;
            goto label_2d9aa0;
        }
    }
    ctx->pc = 0x2D9A70u;
label_2d9a70:
    // 0x2d9a70: 0x8e23002c
    ctx->pc = 0x2d9a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d9a74:
    // 0x2d9a74: 0x8e220024
    ctx->pc = 0x2d9a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d9a78:
    // 0x2d9a78: 0x10620009
label_2d9a7c:
    if (ctx->pc == 0x2D9A7Cu) {
        ctx->pc = 0x2D9A80u;
        goto label_2d9a80;
    }
    ctx->pc = 0x2D9A78u;
    {
        const bool branch_taken_0x2d9a78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2d9a78) {
            ctx->pc = 0x2D9AA0u;
            goto label_2d9aa0;
        }
    }
    ctx->pc = 0x2D9A80u;
label_2d9a80:
    // 0x2d9a80: 0x40f02d
    ctx->pc = 0x2d9a80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a84:
    // 0x2d9a84: 0x3c3102b
    ctx->pc = 0x2d9a84u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2d9a88:
    // 0x2d9a88: 0x10400003
label_2d9a8c:
    if (ctx->pc == 0x2D9A8Cu) {
        ctx->pc = 0x2D9A8Cu;
        SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->pc = 0x2D9A90u;
        goto label_2d9a90;
    }
    ctx->pc = 0x2D9A88u;
    {
        const bool branch_taken_0x2d9a88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9A8Cu;
        SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        if (branch_taken_0x2d9a88) {
            ctx->pc = 0x2D9A98u;
            goto label_2d9a98;
        }
    }
    ctx->pc = 0x2D9A90u;
label_2d9a90:
    // 0x2d9a90: 0x10000003
label_2d9a94:
    if (ctx->pc == 0x2D9A94u) {
        ctx->pc = 0x2D9A94u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x2D9A98u;
        goto label_2d9a98;
    }
    ctx->pc = 0x2D9A90u;
    {
        const bool branch_taken_0x2d9a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9A94u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        if (branch_taken_0x2d9a90) {
            ctx->pc = 0x2D9AA0u;
            goto label_2d9aa0;
        }
    }
    ctx->pc = 0x2D9A98u;
label_2d9a98:
    // 0x2d9a98: 0x8e220028
    ctx->pc = 0x2d9a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d9a9c:
    // 0x2d9a9c: 0x5eb023
    ctx->pc = 0x2d9a9cu;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2d9aa0:
    // 0x2d9aa0: 0x56c0000f
label_2d9aa4:
    if (ctx->pc == 0x2D9AA4u) {
        ctx->pc = 0x2D9AA4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x2D9AA8u;
        goto label_2d9aa8;
    }
    ctx->pc = 0x2D9AA0u;
    {
        const bool branch_taken_0x2d9aa0 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9aa0) {
            ctx->pc = 0x2D9AA4u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x2D9AE0u;
            goto label_2d9ae0;
        }
    }
    ctx->pc = 0x2D9AA8u;
label_2d9aa8:
    // 0x2d9aa8: 0xae340020
    ctx->pc = 0x2d9aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d9aac:
    // 0x2d9aac: 0xae33001c
    ctx->pc = 0x2d9aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d9ab0:
    // 0x2d9ab0: 0xae570004
    ctx->pc = 0x2d9ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d9ab4:
    // 0x2d9ab4: 0x8e420000
    ctx->pc = 0x2d9ab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9ab8:
    // 0x2d9ab8: 0x2a21023
    ctx->pc = 0x2d9ab8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d9abc:
    // 0x2d9abc: 0x8e430008
    ctx->pc = 0x2d9abcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d9ac0:
    // 0x2d9ac0: 0x431021
    ctx->pc = 0x2d9ac0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9ac4:
    // 0x2d9ac4: 0xae420008
    ctx->pc = 0x2d9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d9ac8:
    // 0x2d9ac8: 0xae550000
    ctx->pc = 0x2d9ac8u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d9acc:
    // 0x2d9acc: 0xae3e0030
    ctx->pc = 0x2d9accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d9ad0:
    // 0x2d9ad0: 0x220202d
    ctx->pc = 0x2d9ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ad4:
    // 0x2d9ad4: 0x240282d
    ctx->pc = 0x2d9ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ad8:
    // 0x2d9ad8: 0x10000262
label_2d9adc:
    if (ctx->pc == 0x2D9ADCu) {
        ctx->pc = 0x2D9ADCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2D9AE0u;
        goto label_2d9ae0;
    }
    ctx->pc = 0x2D9AD8u;
    {
        const bool branch_taken_0x2d9ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9ADCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d9ad8) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D9AE0u;
label_2d9ae0:
    // 0x2d9ae0: 0x8e300004
    ctx->pc = 0x2d9ae0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9ae4:
    // 0x2d9ae4: 0x2f0102b
    ctx->pc = 0x2d9ae4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_2d9ae8:
    // 0x2d9ae8: 0x2e2800b
    ctx->pc = 0x2d9ae8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 23));
label_2d9aec:
    // 0x2d9aec: 0x2d0102b
    ctx->pc = 0x2d9aecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2d9af0:
    // 0x2d9af0: 0x2c2800b
    ctx->pc = 0x2d9af0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 22));
label_2d9af4:
    // 0x2d9af4: 0x3c0202d
    ctx->pc = 0x2d9af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2d9af8:
    // 0x2d9af8: 0x2a0282d
    ctx->pc = 0x2d9af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d9afc:
    // 0x2d9afc: 0xc0bec59
label_2d9b00:
    if (ctx->pc == 0x2D9B00u) {
        ctx->pc = 0x2D9B00u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B04u;
        goto label_2d9b04;
    }
    ctx->pc = 0x2D9AFCu;
    SET_GPR_U32(ctx, 31, 0x2D9B04u);
    ctx->pc = 0x2D9B00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9B04u; }
    }
    if (ctx->pc != 0x2D9B04u) { return; }
    ctx->pc = 0x2D9B04u;
label_2d9b04:
    // 0x2d9b04: 0x2b0a821
    ctx->pc = 0x2d9b04u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_2d9b08:
    // 0x2d9b08: 0x2f0b823
    ctx->pc = 0x2d9b08u;
    SET_GPR_U32(ctx, 23, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_2d9b0c:
    // 0x2d9b0c: 0x3d0f021
    ctx->pc = 0x2d9b0cu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_2d9b10:
    // 0x2d9b10: 0x2d0b023
    ctx->pc = 0x2d9b10u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2d9b14:
    // 0x2d9b14: 0x8e220004
    ctx->pc = 0x2d9b14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9b18:
    // 0x2d9b18: 0x501023
    ctx->pc = 0x2d9b18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2d9b1c:
    // 0x2d9b1c: 0x1440ff12
label_2d9b20:
    if (ctx->pc == 0x2D9B20u) {
        ctx->pc = 0x2D9B20u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9B24u;
        goto label_2d9b24;
    }
    ctx->pc = 0x2D9B1Cu;
    {
        const bool branch_taken_0x2d9b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9B20u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2d9b1c) {
            ctx->pc = 0x2D9768u;
            goto label_2d9768;
        }
    }
    ctx->pc = 0x2D9B24u;
label_2d9b24:
    // 0x2d9b24: 0x8e230018
    ctx->pc = 0x2d9b24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2d9b28:
    // 0x2d9b28: 0x24020007
    ctx->pc = 0x2d9b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2d9b2c:
    // 0x2d9b2c: 0x1000ff37
label_2d9b30:
    if (ctx->pc == 0x2D9B30u) {
        ctx->pc = 0x2D9B30u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = 0x2D9B34u;
        goto label_2d9b34;
    }
    ctx->pc = 0x2D9B2Cu;
    {
        const bool branch_taken_0x2d9b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9B30u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        if (branch_taken_0x2d9b2c) {
            ctx->pc = 0x2D980Cu;
            goto label_2d980c;
        }
    }
    ctx->pc = 0x2D9B34u;
label_2d9b34:
    // 0x2d9b34: 0x0
    ctx->pc = 0x2d9b34u;
    // NOP
label_2d9b38:
    // 0x2d9b38: 0x12e00205
label_2d9b3c:
    if (ctx->pc == 0x2D9B3Cu) {
        ctx->pc = 0x2D9B3Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2D9B40u;
        goto label_2d9b40;
    }
    ctx->pc = 0x2D9B38u;
    {
        const bool branch_taken_0x2d9b38 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9B3Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2d9b38) {
            ctx->pc = 0x2DA350u;
            goto label_2da350;
        }
    }
    ctx->pc = 0x2D9B40u;
label_2d9b40:
    // 0x2d9b40: 0xafa00020
    ctx->pc = 0x2d9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d9b44:
    // 0x2d9b44: 0x92a20000
    ctx->pc = 0x2d9b44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2d9b48:
    // 0x2d9b48: 0x2621004
    ctx->pc = 0x2d9b48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2d9b4c:
    // 0x2d9b4c: 0x282a025
    ctx->pc = 0x2d9b4cu;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d9b50:
    // 0x2d9b50: 0x26b50001
    ctx->pc = 0x2d9b50u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2d9b54:
    // 0x2d9b54: 0x26730008
    ctx->pc = 0x2d9b54u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2d9b58:
    // 0x2d9b58: 0x2e62000e
    ctx->pc = 0x2d9b58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 14));
label_2d9b5c:
    // 0x2d9b5c: 0x1440fff6
label_2d9b60:
    if (ctx->pc == 0x2D9B60u) {
        ctx->pc = 0x2D9B60u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 20), 16383));
        ctx->pc = 0x2D9B64u;
        goto label_2d9b64;
    }
    ctx->pc = 0x2D9B5Cu;
    {
        const bool branch_taken_0x2d9b5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9B60u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 20), 16383));
        if (branch_taken_0x2d9b5c) {
            ctx->pc = 0x2D9B38u;
            goto label_2d9b38;
        }
    }
    ctx->pc = 0x2D9B64u;
label_2d9b64:
    // 0x2d9b64: 0x3282001f
    ctx->pc = 0x2d9b64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 31));
label_2d9b68:
    // 0x2d9b68: 0x2c42001e
    ctx->pc = 0x2d9b68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 30));
label_2d9b6c:
    // 0x2d9b6c: 0x10400006
label_2d9b70:
    if (ctx->pc == 0x2D9B70u) {
        ctx->pc = 0x2D9B70u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2D9B74u;
        goto label_2d9b74;
    }
    ctx->pc = 0x2D9B6Cu;
    {
        const bool branch_taken_0x2d9b6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9B70u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x2d9b6c) {
            ctx->pc = 0x2D9B88u;
            goto label_2d9b88;
        }
    }
    ctx->pc = 0x2D9B74u;
label_2d9b74:
    // 0x2d9b74: 0x101142
    ctx->pc = 0x2d9b74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 5));
label_2d9b78:
    // 0x2d9b78: 0x3042001f
    ctx->pc = 0x2d9b78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
label_2d9b7c:
    // 0x2d9b7c: 0x2c42001e
    ctx->pc = 0x2d9b7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 30));
label_2d9b80:
    // 0x2d9b80: 0x14400014
label_2d9b84:
    if (ctx->pc == 0x2D9B84u) {
        ctx->pc = 0x2D9B84u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 31));
        ctx->pc = 0x2D9B88u;
        goto label_2d9b88;
    }
    ctx->pc = 0x2D9B80u;
    {
        const bool branch_taken_0x2d9b80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9B84u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 31));
        if (branch_taken_0x2d9b80) {
            ctx->pc = 0x2D9BD4u;
            goto label_2d9bd4;
        }
    }
    ctx->pc = 0x2D9B88u;
label_2d9b88:
    // 0x2d9b88: 0x24020009
    ctx->pc = 0x2d9b88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2d9b8c:
    // 0x2d9b8c: 0xae220000
    ctx->pc = 0x2d9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9b90:
    // 0x2d9b90: 0x3c02003c
    ctx->pc = 0x2d9b90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2d9b94:
    // 0x2d9b94: 0x244280b8
    ctx->pc = 0x2d9b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934712));
label_2d9b98:
    // 0x2d9b98: 0xae420018
    ctx->pc = 0x2d9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2d9b9c:
    // 0x2d9b9c: 0xae340020
    ctx->pc = 0x2d9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d9ba0:
    // 0x2d9ba0: 0xae33001c
    ctx->pc = 0x2d9ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d9ba4:
    // 0x2d9ba4: 0xae570004
    ctx->pc = 0x2d9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d9ba8:
    // 0x2d9ba8: 0x8e420000
    ctx->pc = 0x2d9ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9bac:
    // 0x2d9bac: 0x2a21023
    ctx->pc = 0x2d9bacu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d9bb0:
    // 0x2d9bb0: 0x8e430008
    ctx->pc = 0x2d9bb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d9bb4:
    // 0x2d9bb4: 0x431021
    ctx->pc = 0x2d9bb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9bb8:
    // 0x2d9bb8: 0xae420008
    ctx->pc = 0x2d9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d9bbc:
    // 0x2d9bbc: 0xae550000
    ctx->pc = 0x2d9bbcu;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d9bc0:
    // 0x2d9bc0: 0xae3e0030
    ctx->pc = 0x2d9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d9bc4:
    // 0x2d9bc4: 0x220202d
    ctx->pc = 0x2d9bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9bc8:
    // 0x2d9bc8: 0x240282d
    ctx->pc = 0x2d9bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9bcc:
    // 0x2d9bcc: 0x10000225
label_2d9bd0:
    if (ctx->pc == 0x2D9BD0u) {
        ctx->pc = 0x2D9BD0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2D9BD4u;
        goto label_2d9bd4;
    }
    ctx->pc = 0x2D9BCCu;
    {
        const bool branch_taken_0x2d9bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9BD0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d9bcc) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D9BD4u;
label_2d9bd4:
    // 0x2d9bd4: 0x101142
    ctx->pc = 0x2d9bd4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 5));
label_2d9bd8:
    // 0x2d9bd8: 0x3042001f
    ctx->pc = 0x2d9bd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
label_2d9bdc:
    // 0x2d9bdc: 0x24420102
    ctx->pc = 0x2d9bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 258));
label_2d9be0:
    // 0x2d9be0: 0x628021
    ctx->pc = 0x2d9be0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d9be4:
    // 0x2d9be4: 0x24050013
    ctx->pc = 0x2d9be4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 19));
label_2d9be8:
    // 0x2d9be8: 0x24030012
    ctx->pc = 0x2d9be8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
label_2d9bec:
    // 0x2d9bec: 0x70182b
    ctx->pc = 0x2d9becu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2d9bf0:
    // 0x2d9bf0: 0x8e420020
    ctx->pc = 0x2d9bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2d9bf4:
    // 0x2d9bf4: 0x8e440028
    ctx->pc = 0x2d9bf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2d9bf8:
    // 0x2d9bf8: 0x203280b
    ctx->pc = 0x2d9bf8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 16));
label_2d9bfc:
    // 0x2d9bfc: 0x40f809
label_2d9c00:
    if (ctx->pc == 0x2D9C00u) {
        ctx->pc = 0x2D9C00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2D9C04u;
        goto label_2d9c04;
    }
    ctx->pc = 0x2D9BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9C04u);
        ctx->pc = 0x2D9C00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D96F8u: goto label_2d96f8;
            case 0x2D96FCu: goto label_2d96fc;
            case 0x2D9700u: goto label_2d9700;
            case 0x2D9704u: goto label_2d9704;
            case 0x2D9708u: goto label_2d9708;
            case 0x2D970Cu: goto label_2d970c;
            case 0x2D9710u: goto label_2d9710;
            case 0x2D9714u: goto label_2d9714;
            case 0x2D9718u: goto label_2d9718;
            case 0x2D971Cu: goto label_2d971c;
            case 0x2D9720u: goto label_2d9720;
            case 0x2D9724u: goto label_2d9724;
            case 0x2D9728u: goto label_2d9728;
            case 0x2D972Cu: goto label_2d972c;
            case 0x2D9730u: goto label_2d9730;
            case 0x2D9734u: goto label_2d9734;
            case 0x2D9738u: goto label_2d9738;
            case 0x2D973Cu: goto label_2d973c;
            case 0x2D9740u: goto label_2d9740;
            case 0x2D9744u: goto label_2d9744;
            case 0x2D9748u: goto label_2d9748;
            case 0x2D974Cu: goto label_2d974c;
            case 0x2D9750u: goto label_2d9750;
            case 0x2D9754u: goto label_2d9754;
            case 0x2D9758u: goto label_2d9758;
            case 0x2D975Cu: goto label_2d975c;
            case 0x2D9760u: goto label_2d9760;
            case 0x2D9764u: goto label_2d9764;
            case 0x2D9768u: goto label_2d9768;
            case 0x2D976Cu: goto label_2d976c;
            case 0x2D9770u: goto label_2d9770;
            case 0x2D9774u: goto label_2d9774;
            case 0x2D9778u: goto label_2d9778;
            case 0x2D977Cu: goto label_2d977c;
            case 0x2D9780u: goto label_2d9780;
            case 0x2D9784u: goto label_2d9784;
            case 0x2D9788u: goto label_2d9788;
            case 0x2D978Cu: goto label_2d978c;
            case 0x2D9790u: goto label_2d9790;
            case 0x2D9794u: goto label_2d9794;
            case 0x2D9798u: goto label_2d9798;
            case 0x2D979Cu: goto label_2d979c;
            case 0x2D97A0u: goto label_2d97a0;
            case 0x2D97A4u: goto label_2d97a4;
            case 0x2D97A8u: goto label_2d97a8;
            case 0x2D97ACu: goto label_2d97ac;
            case 0x2D97B0u: goto label_2d97b0;
            case 0x2D97B4u: goto label_2d97b4;
            case 0x2D97B8u: goto label_2d97b8;
            case 0x2D97BCu: goto label_2d97bc;
            case 0x2D97C0u: goto label_2d97c0;
            case 0x2D97C4u: goto label_2d97c4;
            case 0x2D97C8u: goto label_2d97c8;
            case 0x2D97CCu: goto label_2d97cc;
            case 0x2D97D0u: goto label_2d97d0;
            case 0x2D97D4u: goto label_2d97d4;
            case 0x2D97D8u: goto label_2d97d8;
            case 0x2D97DCu: goto label_2d97dc;
            case 0x2D97E0u: goto label_2d97e0;
            case 0x2D97E4u: goto label_2d97e4;
            case 0x2D97E8u: goto label_2d97e8;
            case 0x2D97ECu: goto label_2d97ec;
            case 0x2D97F0u: goto label_2d97f0;
            case 0x2D97F4u: goto label_2d97f4;
            case 0x2D97F8u: goto label_2d97f8;
            case 0x2D97FCu: goto label_2d97fc;
            case 0x2D9800u: goto label_2d9800;
            case 0x2D9804u: goto label_2d9804;
            case 0x2D9808u: goto label_2d9808;
            case 0x2D980Cu: goto label_2d980c;
            case 0x2D9810u: goto label_2d9810;
            case 0x2D9814u: goto label_2d9814;
            case 0x2D9818u: goto label_2d9818;
            case 0x2D981Cu: goto label_2d981c;
            case 0x2D9820u: goto label_2d9820;
            case 0x2D9824u: goto label_2d9824;
            case 0x2D9828u: goto label_2d9828;
            case 0x2D982Cu: goto label_2d982c;
            case 0x2D9830u: goto label_2d9830;
            case 0x2D9834u: goto label_2d9834;
            case 0x2D9838u: goto label_2d9838;
            case 0x2D983Cu: goto label_2d983c;
            case 0x2D9840u: goto label_2d9840;
            case 0x2D9844u: goto label_2d9844;
            case 0x2D9848u: goto label_2d9848;
            case 0x2D984Cu: goto label_2d984c;
            case 0x2D9850u: goto label_2d9850;
            case 0x2D9854u: goto label_2d9854;
            case 0x2D9858u: goto label_2d9858;
            case 0x2D985Cu: goto label_2d985c;
            case 0x2D9860u: goto label_2d9860;
            case 0x2D9864u: goto label_2d9864;
            case 0x2D9868u: goto label_2d9868;
            case 0x2D986Cu: goto label_2d986c;
            case 0x2D9870u: goto label_2d9870;
            case 0x2D9874u: goto label_2d9874;
            case 0x2D9878u: goto label_2d9878;
            case 0x2D987Cu: goto label_2d987c;
            case 0x2D9880u: goto label_2d9880;
            case 0x2D9884u: goto label_2d9884;
            case 0x2D9888u: goto label_2d9888;
            case 0x2D988Cu: goto label_2d988c;
            case 0x2D9890u: goto label_2d9890;
            case 0x2D9894u: goto label_2d9894;
            case 0x2D9898u: goto label_2d9898;
            case 0x2D989Cu: goto label_2d989c;
            case 0x2D98A0u: goto label_2d98a0;
            case 0x2D98A4u: goto label_2d98a4;
            case 0x2D98A8u: goto label_2d98a8;
            case 0x2D98ACu: goto label_2d98ac;
            case 0x2D98B0u: goto label_2d98b0;
            case 0x2D98B4u: goto label_2d98b4;
            case 0x2D98B8u: goto label_2d98b8;
            case 0x2D98BCu: goto label_2d98bc;
            case 0x2D98C0u: goto label_2d98c0;
            case 0x2D98C4u: goto label_2d98c4;
            case 0x2D98C8u: goto label_2d98c8;
            case 0x2D98CCu: goto label_2d98cc;
            case 0x2D98D0u: goto label_2d98d0;
            case 0x2D98D4u: goto label_2d98d4;
            case 0x2D98D8u: goto label_2d98d8;
            case 0x2D98DCu: goto label_2d98dc;
            case 0x2D98E0u: goto label_2d98e0;
            case 0x2D98E4u: goto label_2d98e4;
            case 0x2D98E8u: goto label_2d98e8;
            case 0x2D98ECu: goto label_2d98ec;
            case 0x2D98F0u: goto label_2d98f0;
            case 0x2D98F4u: goto label_2d98f4;
            case 0x2D98F8u: goto label_2d98f8;
            case 0x2D98FCu: goto label_2d98fc;
            case 0x2D9900u: goto label_2d9900;
            case 0x2D9904u: goto label_2d9904;
            case 0x2D9908u: goto label_2d9908;
            case 0x2D990Cu: goto label_2d990c;
            case 0x2D9910u: goto label_2d9910;
            case 0x2D9914u: goto label_2d9914;
            case 0x2D9918u: goto label_2d9918;
            case 0x2D991Cu: goto label_2d991c;
            case 0x2D9920u: goto label_2d9920;
            case 0x2D9924u: goto label_2d9924;
            case 0x2D9928u: goto label_2d9928;
            case 0x2D992Cu: goto label_2d992c;
            case 0x2D9930u: goto label_2d9930;
            case 0x2D9934u: goto label_2d9934;
            case 0x2D9938u: goto label_2d9938;
            case 0x2D993Cu: goto label_2d993c;
            case 0x2D9940u: goto label_2d9940;
            case 0x2D9944u: goto label_2d9944;
            case 0x2D9948u: goto label_2d9948;
            case 0x2D994Cu: goto label_2d994c;
            case 0x2D9950u: goto label_2d9950;
            case 0x2D9954u: goto label_2d9954;
            case 0x2D9958u: goto label_2d9958;
            case 0x2D995Cu: goto label_2d995c;
            case 0x2D9960u: goto label_2d9960;
            case 0x2D9964u: goto label_2d9964;
            case 0x2D9968u: goto label_2d9968;
            case 0x2D996Cu: goto label_2d996c;
            case 0x2D9970u: goto label_2d9970;
            case 0x2D9974u: goto label_2d9974;
            case 0x2D9978u: goto label_2d9978;
            case 0x2D997Cu: goto label_2d997c;
            case 0x2D9980u: goto label_2d9980;
            case 0x2D9984u: goto label_2d9984;
            case 0x2D9988u: goto label_2d9988;
            case 0x2D998Cu: goto label_2d998c;
            case 0x2D9990u: goto label_2d9990;
            case 0x2D9994u: goto label_2d9994;
            case 0x2D9998u: goto label_2d9998;
            case 0x2D999Cu: goto label_2d999c;
            case 0x2D99A0u: goto label_2d99a0;
            case 0x2D99A4u: goto label_2d99a4;
            case 0x2D99A8u: goto label_2d99a8;
            case 0x2D99ACu: goto label_2d99ac;
            case 0x2D99B0u: goto label_2d99b0;
            case 0x2D99B4u: goto label_2d99b4;
            case 0x2D99B8u: goto label_2d99b8;
            case 0x2D99BCu: goto label_2d99bc;
            case 0x2D99C0u: goto label_2d99c0;
            case 0x2D99C4u: goto label_2d99c4;
            case 0x2D99C8u: goto label_2d99c8;
            case 0x2D99CCu: goto label_2d99cc;
            case 0x2D99D0u: goto label_2d99d0;
            case 0x2D99D4u: goto label_2d99d4;
            case 0x2D99D8u: goto label_2d99d8;
            case 0x2D99DCu: goto label_2d99dc;
            case 0x2D99E0u: goto label_2d99e0;
            case 0x2D99E4u: goto label_2d99e4;
            case 0x2D99E8u: goto label_2d99e8;
            case 0x2D99ECu: goto label_2d99ec;
            case 0x2D99F0u: goto label_2d99f0;
            case 0x2D99F4u: goto label_2d99f4;
            case 0x2D99F8u: goto label_2d99f8;
            case 0x2D99FCu: goto label_2d99fc;
            case 0x2D9A00u: goto label_2d9a00;
            case 0x2D9A04u: goto label_2d9a04;
            case 0x2D9A08u: goto label_2d9a08;
            case 0x2D9A0Cu: goto label_2d9a0c;
            case 0x2D9A10u: goto label_2d9a10;
            case 0x2D9A14u: goto label_2d9a14;
            case 0x2D9A18u: goto label_2d9a18;
            case 0x2D9A1Cu: goto label_2d9a1c;
            case 0x2D9A20u: goto label_2d9a20;
            case 0x2D9A24u: goto label_2d9a24;
            case 0x2D9A28u: goto label_2d9a28;
            case 0x2D9A2Cu: goto label_2d9a2c;
            case 0x2D9A30u: goto label_2d9a30;
            case 0x2D9A34u: goto label_2d9a34;
            case 0x2D9A38u: goto label_2d9a38;
            case 0x2D9A3Cu: goto label_2d9a3c;
            case 0x2D9A40u: goto label_2d9a40;
            case 0x2D9A44u: goto label_2d9a44;
            case 0x2D9A48u: goto label_2d9a48;
            case 0x2D9A4Cu: goto label_2d9a4c;
            case 0x2D9A50u: goto label_2d9a50;
            case 0x2D9A54u: goto label_2d9a54;
            case 0x2D9A58u: goto label_2d9a58;
            case 0x2D9A5Cu: goto label_2d9a5c;
            case 0x2D9A60u: goto label_2d9a60;
            case 0x2D9A64u: goto label_2d9a64;
            case 0x2D9A68u: goto label_2d9a68;
            case 0x2D9A6Cu: goto label_2d9a6c;
            case 0x2D9A70u: goto label_2d9a70;
            case 0x2D9A74u: goto label_2d9a74;
            case 0x2D9A78u: goto label_2d9a78;
            case 0x2D9A7Cu: goto label_2d9a7c;
            case 0x2D9A80u: goto label_2d9a80;
            case 0x2D9A84u: goto label_2d9a84;
            case 0x2D9A88u: goto label_2d9a88;
            case 0x2D9A8Cu: goto label_2d9a8c;
            case 0x2D9A90u: goto label_2d9a90;
            case 0x2D9A94u: goto label_2d9a94;
            case 0x2D9A98u: goto label_2d9a98;
            case 0x2D9A9Cu: goto label_2d9a9c;
            case 0x2D9AA0u: goto label_2d9aa0;
            case 0x2D9AA4u: goto label_2d9aa4;
            case 0x2D9AA8u: goto label_2d9aa8;
            case 0x2D9AACu: goto label_2d9aac;
            case 0x2D9AB0u: goto label_2d9ab0;
            case 0x2D9AB4u: goto label_2d9ab4;
            case 0x2D9AB8u: goto label_2d9ab8;
            case 0x2D9ABCu: goto label_2d9abc;
            case 0x2D9AC0u: goto label_2d9ac0;
            case 0x2D9AC4u: goto label_2d9ac4;
            case 0x2D9AC8u: goto label_2d9ac8;
            case 0x2D9ACCu: goto label_2d9acc;
            case 0x2D9AD0u: goto label_2d9ad0;
            case 0x2D9AD4u: goto label_2d9ad4;
            case 0x2D9AD8u: goto label_2d9ad8;
            case 0x2D9ADCu: goto label_2d9adc;
            case 0x2D9AE0u: goto label_2d9ae0;
            case 0x2D9AE4u: goto label_2d9ae4;
            case 0x2D9AE8u: goto label_2d9ae8;
            case 0x2D9AECu: goto label_2d9aec;
            case 0x2D9AF0u: goto label_2d9af0;
            case 0x2D9AF4u: goto label_2d9af4;
            case 0x2D9AF8u: goto label_2d9af8;
            case 0x2D9AFCu: goto label_2d9afc;
            case 0x2D9B00u: goto label_2d9b00;
            case 0x2D9B04u: goto label_2d9b04;
            case 0x2D9B08u: goto label_2d9b08;
            case 0x2D9B0Cu: goto label_2d9b0c;
            case 0x2D9B10u: goto label_2d9b10;
            case 0x2D9B14u: goto label_2d9b14;
            case 0x2D9B18u: goto label_2d9b18;
            case 0x2D9B1Cu: goto label_2d9b1c;
            case 0x2D9B20u: goto label_2d9b20;
            case 0x2D9B24u: goto label_2d9b24;
            case 0x2D9B28u: goto label_2d9b28;
            case 0x2D9B2Cu: goto label_2d9b2c;
            case 0x2D9B30u: goto label_2d9b30;
            case 0x2D9B34u: goto label_2d9b34;
            case 0x2D9B38u: goto label_2d9b38;
            case 0x2D9B3Cu: goto label_2d9b3c;
            case 0x2D9B40u: goto label_2d9b40;
            case 0x2D9B44u: goto label_2d9b44;
            case 0x2D9B48u: goto label_2d9b48;
            case 0x2D9B4Cu: goto label_2d9b4c;
            case 0x2D9B50u: goto label_2d9b50;
            case 0x2D9B54u: goto label_2d9b54;
            case 0x2D9B58u: goto label_2d9b58;
            case 0x2D9B5Cu: goto label_2d9b5c;
            case 0x2D9B60u: goto label_2d9b60;
            case 0x2D9B64u: goto label_2d9b64;
            case 0x2D9B68u: goto label_2d9b68;
            case 0x2D9B6Cu: goto label_2d9b6c;
            case 0x2D9B70u: goto label_2d9b70;
            case 0x2D9B74u: goto label_2d9b74;
            case 0x2D9B78u: goto label_2d9b78;
            case 0x2D9B7Cu: goto label_2d9b7c;
            case 0x2D9B80u: goto label_2d9b80;
            case 0x2D9B84u: goto label_2d9b84;
            case 0x2D9B88u: goto label_2d9b88;
            case 0x2D9B8Cu: goto label_2d9b8c;
            case 0x2D9B90u: goto label_2d9b90;
            case 0x2D9B94u: goto label_2d9b94;
            case 0x2D9B98u: goto label_2d9b98;
            case 0x2D9B9Cu: goto label_2d9b9c;
            case 0x2D9BA0u: goto label_2d9ba0;
            case 0x2D9BA4u: goto label_2d9ba4;
            case 0x2D9BA8u: goto label_2d9ba8;
            case 0x2D9BACu: goto label_2d9bac;
            case 0x2D9BB0u: goto label_2d9bb0;
            case 0x2D9BB4u: goto label_2d9bb4;
            case 0x2D9BB8u: goto label_2d9bb8;
            case 0x2D9BBCu: goto label_2d9bbc;
            case 0x2D9BC0u: goto label_2d9bc0;
            case 0x2D9BC4u: goto label_2d9bc4;
            case 0x2D9BC8u: goto label_2d9bc8;
            case 0x2D9BCCu: goto label_2d9bcc;
            case 0x2D9BD0u: goto label_2d9bd0;
            case 0x2D9BD4u: goto label_2d9bd4;
            case 0x2D9BD8u: goto label_2d9bd8;
            case 0x2D9BDCu: goto label_2d9bdc;
            case 0x2D9BE0u: goto label_2d9be0;
            case 0x2D9BE4u: goto label_2d9be4;
            case 0x2D9BE8u: goto label_2d9be8;
            case 0x2D9BECu: goto label_2d9bec;
            case 0x2D9BF0u: goto label_2d9bf0;
            case 0x2D9BF4u: goto label_2d9bf4;
            case 0x2D9BF8u: goto label_2d9bf8;
            case 0x2D9BFCu: goto label_2d9bfc;
            case 0x2D9C00u: goto label_2d9c00;
            case 0x2D9C04u: goto label_2d9c04;
            case 0x2D9C08u: goto label_2d9c08;
            case 0x2D9C0Cu: goto label_2d9c0c;
            case 0x2D9C10u: goto label_2d9c10;
            case 0x2D9C14u: goto label_2d9c14;
            case 0x2D9C18u: goto label_2d9c18;
            case 0x2D9C1Cu: goto label_2d9c1c;
            case 0x2D9C20u: goto label_2d9c20;
            case 0x2D9C24u: goto label_2d9c24;
            case 0x2D9C28u: goto label_2d9c28;
            case 0x2D9C2Cu: goto label_2d9c2c;
            case 0x2D9C30u: goto label_2d9c30;
            case 0x2D9C34u: goto label_2d9c34;
            case 0x2D9C38u: goto label_2d9c38;
            case 0x2D9C3Cu: goto label_2d9c3c;
            case 0x2D9C40u: goto label_2d9c40;
            case 0x2D9C44u: goto label_2d9c44;
            case 0x2D9C48u: goto label_2d9c48;
            case 0x2D9C4Cu: goto label_2d9c4c;
            case 0x2D9C50u: goto label_2d9c50;
            case 0x2D9C54u: goto label_2d9c54;
            case 0x2D9C58u: goto label_2d9c58;
            case 0x2D9C5Cu: goto label_2d9c5c;
            case 0x2D9C60u: goto label_2d9c60;
            case 0x2D9C64u: goto label_2d9c64;
            case 0x2D9C68u: goto label_2d9c68;
            case 0x2D9C6Cu: goto label_2d9c6c;
            case 0x2D9C70u: goto label_2d9c70;
            case 0x2D9C74u: goto label_2d9c74;
            case 0x2D9C78u: goto label_2d9c78;
            case 0x2D9C7Cu: goto label_2d9c7c;
            case 0x2D9C80u: goto label_2d9c80;
            case 0x2D9C84u: goto label_2d9c84;
            case 0x2D9C88u: goto label_2d9c88;
            case 0x2D9C8Cu: goto label_2d9c8c;
            case 0x2D9C90u: goto label_2d9c90;
            case 0x2D9C94u: goto label_2d9c94;
            case 0x2D9C98u: goto label_2d9c98;
            case 0x2D9C9Cu: goto label_2d9c9c;
            case 0x2D9CA0u: goto label_2d9ca0;
            case 0x2D9CA4u: goto label_2d9ca4;
            case 0x2D9CA8u: goto label_2d9ca8;
            case 0x2D9CACu: goto label_2d9cac;
            case 0x2D9CB0u: goto label_2d9cb0;
            case 0x2D9CB4u: goto label_2d9cb4;
            case 0x2D9CB8u: goto label_2d9cb8;
            case 0x2D9CBCu: goto label_2d9cbc;
            case 0x2D9CC0u: goto label_2d9cc0;
            case 0x2D9CC4u: goto label_2d9cc4;
            case 0x2D9CC8u: goto label_2d9cc8;
            case 0x2D9CCCu: goto label_2d9ccc;
            case 0x2D9CD0u: goto label_2d9cd0;
            case 0x2D9CD4u: goto label_2d9cd4;
            case 0x2D9CD8u: goto label_2d9cd8;
            case 0x2D9CDCu: goto label_2d9cdc;
            case 0x2D9CE0u: goto label_2d9ce0;
            case 0x2D9CE4u: goto label_2d9ce4;
            case 0x2D9CE8u: goto label_2d9ce8;
            case 0x2D9CECu: goto label_2d9cec;
            case 0x2D9CF0u: goto label_2d9cf0;
            case 0x2D9CF4u: goto label_2d9cf4;
            case 0x2D9CF8u: goto label_2d9cf8;
            case 0x2D9CFCu: goto label_2d9cfc;
            case 0x2D9D00u: goto label_2d9d00;
            case 0x2D9D04u: goto label_2d9d04;
            case 0x2D9D08u: goto label_2d9d08;
            case 0x2D9D0Cu: goto label_2d9d0c;
            case 0x2D9D10u: goto label_2d9d10;
            case 0x2D9D14u: goto label_2d9d14;
            case 0x2D9D18u: goto label_2d9d18;
            case 0x2D9D1Cu: goto label_2d9d1c;
            case 0x2D9D20u: goto label_2d9d20;
            case 0x2D9D24u: goto label_2d9d24;
            case 0x2D9D28u: goto label_2d9d28;
            case 0x2D9D2Cu: goto label_2d9d2c;
            case 0x2D9D30u: goto label_2d9d30;
            case 0x2D9D34u: goto label_2d9d34;
            case 0x2D9D38u: goto label_2d9d38;
            case 0x2D9D3Cu: goto label_2d9d3c;
            case 0x2D9D40u: goto label_2d9d40;
            case 0x2D9D44u: goto label_2d9d44;
            case 0x2D9D48u: goto label_2d9d48;
            case 0x2D9D4Cu: goto label_2d9d4c;
            case 0x2D9D50u: goto label_2d9d50;
            case 0x2D9D54u: goto label_2d9d54;
            case 0x2D9D58u: goto label_2d9d58;
            case 0x2D9D5Cu: goto label_2d9d5c;
            case 0x2D9D60u: goto label_2d9d60;
            case 0x2D9D64u: goto label_2d9d64;
            case 0x2D9D68u: goto label_2d9d68;
            case 0x2D9D6Cu: goto label_2d9d6c;
            case 0x2D9D70u: goto label_2d9d70;
            case 0x2D9D74u: goto label_2d9d74;
            case 0x2D9D78u: goto label_2d9d78;
            case 0x2D9D7Cu: goto label_2d9d7c;
            case 0x2D9D80u: goto label_2d9d80;
            case 0x2D9D84u: goto label_2d9d84;
            case 0x2D9D88u: goto label_2d9d88;
            case 0x2D9D8Cu: goto label_2d9d8c;
            case 0x2D9D90u: goto label_2d9d90;
            case 0x2D9D94u: goto label_2d9d94;
            case 0x2D9D98u: goto label_2d9d98;
            case 0x2D9D9Cu: goto label_2d9d9c;
            case 0x2D9DA0u: goto label_2d9da0;
            case 0x2D9DA4u: goto label_2d9da4;
            case 0x2D9DA8u: goto label_2d9da8;
            case 0x2D9DACu: goto label_2d9dac;
            case 0x2D9DB0u: goto label_2d9db0;
            case 0x2D9DB4u: goto label_2d9db4;
            case 0x2D9DB8u: goto label_2d9db8;
            case 0x2D9DBCu: goto label_2d9dbc;
            case 0x2D9DC0u: goto label_2d9dc0;
            case 0x2D9DC4u: goto label_2d9dc4;
            case 0x2D9DC8u: goto label_2d9dc8;
            case 0x2D9DCCu: goto label_2d9dcc;
            case 0x2D9DD0u: goto label_2d9dd0;
            case 0x2D9DD4u: goto label_2d9dd4;
            case 0x2D9DD8u: goto label_2d9dd8;
            case 0x2D9DDCu: goto label_2d9ddc;
            case 0x2D9DE0u: goto label_2d9de0;
            case 0x2D9DE4u: goto label_2d9de4;
            case 0x2D9DE8u: goto label_2d9de8;
            case 0x2D9DECu: goto label_2d9dec;
            case 0x2D9DF0u: goto label_2d9df0;
            case 0x2D9DF4u: goto label_2d9df4;
            case 0x2D9DF8u: goto label_2d9df8;
            case 0x2D9DFCu: goto label_2d9dfc;
            case 0x2D9E00u: goto label_2d9e00;
            case 0x2D9E04u: goto label_2d9e04;
            case 0x2D9E08u: goto label_2d9e08;
            case 0x2D9E0Cu: goto label_2d9e0c;
            case 0x2D9E10u: goto label_2d9e10;
            case 0x2D9E14u: goto label_2d9e14;
            case 0x2D9E18u: goto label_2d9e18;
            case 0x2D9E1Cu: goto label_2d9e1c;
            case 0x2D9E20u: goto label_2d9e20;
            case 0x2D9E24u: goto label_2d9e24;
            case 0x2D9E28u: goto label_2d9e28;
            case 0x2D9E2Cu: goto label_2d9e2c;
            case 0x2D9E30u: goto label_2d9e30;
            case 0x2D9E34u: goto label_2d9e34;
            case 0x2D9E38u: goto label_2d9e38;
            case 0x2D9E3Cu: goto label_2d9e3c;
            case 0x2D9E40u: goto label_2d9e40;
            case 0x2D9E44u: goto label_2d9e44;
            case 0x2D9E48u: goto label_2d9e48;
            case 0x2D9E4Cu: goto label_2d9e4c;
            case 0x2D9E50u: goto label_2d9e50;
            case 0x2D9E54u: goto label_2d9e54;
            case 0x2D9E58u: goto label_2d9e58;
            case 0x2D9E5Cu: goto label_2d9e5c;
            case 0x2D9E60u: goto label_2d9e60;
            case 0x2D9E64u: goto label_2d9e64;
            case 0x2D9E68u: goto label_2d9e68;
            case 0x2D9E6Cu: goto label_2d9e6c;
            case 0x2D9E70u: goto label_2d9e70;
            case 0x2D9E74u: goto label_2d9e74;
            case 0x2D9E78u: goto label_2d9e78;
            case 0x2D9E7Cu: goto label_2d9e7c;
            case 0x2D9E80u: goto label_2d9e80;
            case 0x2D9E84u: goto label_2d9e84;
            case 0x2D9E88u: goto label_2d9e88;
            case 0x2D9E8Cu: goto label_2d9e8c;
            case 0x2D9E90u: goto label_2d9e90;
            case 0x2D9E94u: goto label_2d9e94;
            case 0x2D9E98u: goto label_2d9e98;
            case 0x2D9E9Cu: goto label_2d9e9c;
            case 0x2D9EA0u: goto label_2d9ea0;
            case 0x2D9EA4u: goto label_2d9ea4;
            case 0x2D9EA8u: goto label_2d9ea8;
            case 0x2D9EACu: goto label_2d9eac;
            case 0x2D9EB0u: goto label_2d9eb0;
            case 0x2D9EB4u: goto label_2d9eb4;
            case 0x2D9EB8u: goto label_2d9eb8;
            case 0x2D9EBCu: goto label_2d9ebc;
            case 0x2D9EC0u: goto label_2d9ec0;
            case 0x2D9EC4u: goto label_2d9ec4;
            case 0x2D9EC8u: goto label_2d9ec8;
            case 0x2D9ECCu: goto label_2d9ecc;
            case 0x2D9ED0u: goto label_2d9ed0;
            case 0x2D9ED4u: goto label_2d9ed4;
            case 0x2D9ED8u: goto label_2d9ed8;
            case 0x2D9EDCu: goto label_2d9edc;
            case 0x2D9EE0u: goto label_2d9ee0;
            case 0x2D9EE4u: goto label_2d9ee4;
            case 0x2D9EE8u: goto label_2d9ee8;
            case 0x2D9EECu: goto label_2d9eec;
            case 0x2D9EF0u: goto label_2d9ef0;
            case 0x2D9EF4u: goto label_2d9ef4;
            case 0x2D9EF8u: goto label_2d9ef8;
            case 0x2D9EFCu: goto label_2d9efc;
            case 0x2D9F00u: goto label_2d9f00;
            case 0x2D9F04u: goto label_2d9f04;
            case 0x2D9F08u: goto label_2d9f08;
            case 0x2D9F0Cu: goto label_2d9f0c;
            case 0x2D9F10u: goto label_2d9f10;
            case 0x2D9F14u: goto label_2d9f14;
            case 0x2D9F18u: goto label_2d9f18;
            case 0x2D9F1Cu: goto label_2d9f1c;
            case 0x2D9F20u: goto label_2d9f20;
            case 0x2D9F24u: goto label_2d9f24;
            case 0x2D9F28u: goto label_2d9f28;
            case 0x2D9F2Cu: goto label_2d9f2c;
            case 0x2D9F30u: goto label_2d9f30;
            case 0x2D9F34u: goto label_2d9f34;
            case 0x2D9F38u: goto label_2d9f38;
            case 0x2D9F3Cu: goto label_2d9f3c;
            case 0x2D9F40u: goto label_2d9f40;
            case 0x2D9F44u: goto label_2d9f44;
            case 0x2D9F48u: goto label_2d9f48;
            case 0x2D9F4Cu: goto label_2d9f4c;
            case 0x2D9F50u: goto label_2d9f50;
            case 0x2D9F54u: goto label_2d9f54;
            case 0x2D9F58u: goto label_2d9f58;
            case 0x2D9F5Cu: goto label_2d9f5c;
            case 0x2D9F60u: goto label_2d9f60;
            case 0x2D9F64u: goto label_2d9f64;
            case 0x2D9F68u: goto label_2d9f68;
            case 0x2D9F6Cu: goto label_2d9f6c;
            case 0x2D9F70u: goto label_2d9f70;
            case 0x2D9F74u: goto label_2d9f74;
            case 0x2D9F78u: goto label_2d9f78;
            case 0x2D9F7Cu: goto label_2d9f7c;
            case 0x2D9F80u: goto label_2d9f80;
            case 0x2D9F84u: goto label_2d9f84;
            case 0x2D9F88u: goto label_2d9f88;
            case 0x2D9F8Cu: goto label_2d9f8c;
            case 0x2D9F90u: goto label_2d9f90;
            case 0x2D9F94u: goto label_2d9f94;
            case 0x2D9F98u: goto label_2d9f98;
            case 0x2D9F9Cu: goto label_2d9f9c;
            case 0x2D9FA0u: goto label_2d9fa0;
            case 0x2D9FA4u: goto label_2d9fa4;
            case 0x2D9FA8u: goto label_2d9fa8;
            case 0x2D9FACu: goto label_2d9fac;
            case 0x2D9FB0u: goto label_2d9fb0;
            case 0x2D9FB4u: goto label_2d9fb4;
            case 0x2D9FB8u: goto label_2d9fb8;
            case 0x2D9FBCu: goto label_2d9fbc;
            case 0x2D9FC0u: goto label_2d9fc0;
            case 0x2D9FC4u: goto label_2d9fc4;
            case 0x2D9FC8u: goto label_2d9fc8;
            case 0x2D9FCCu: goto label_2d9fcc;
            case 0x2D9FD0u: goto label_2d9fd0;
            case 0x2D9FD4u: goto label_2d9fd4;
            case 0x2D9FD8u: goto label_2d9fd8;
            case 0x2D9FDCu: goto label_2d9fdc;
            case 0x2D9FE0u: goto label_2d9fe0;
            case 0x2D9FE4u: goto label_2d9fe4;
            case 0x2D9FE8u: goto label_2d9fe8;
            case 0x2D9FECu: goto label_2d9fec;
            case 0x2D9FF0u: goto label_2d9ff0;
            case 0x2D9FF4u: goto label_2d9ff4;
            case 0x2D9FF8u: goto label_2d9ff8;
            case 0x2D9FFCu: goto label_2d9ffc;
            case 0x2DA000u: goto label_2da000;
            case 0x2DA004u: goto label_2da004;
            case 0x2DA008u: goto label_2da008;
            case 0x2DA00Cu: goto label_2da00c;
            case 0x2DA010u: goto label_2da010;
            case 0x2DA014u: goto label_2da014;
            case 0x2DA018u: goto label_2da018;
            case 0x2DA01Cu: goto label_2da01c;
            case 0x2DA020u: goto label_2da020;
            case 0x2DA024u: goto label_2da024;
            case 0x2DA028u: goto label_2da028;
            case 0x2DA02Cu: goto label_2da02c;
            case 0x2DA030u: goto label_2da030;
            case 0x2DA034u: goto label_2da034;
            case 0x2DA038u: goto label_2da038;
            case 0x2DA03Cu: goto label_2da03c;
            case 0x2DA040u: goto label_2da040;
            case 0x2DA044u: goto label_2da044;
            case 0x2DA048u: goto label_2da048;
            case 0x2DA04Cu: goto label_2da04c;
            case 0x2DA050u: goto label_2da050;
            case 0x2DA054u: goto label_2da054;
            case 0x2DA058u: goto label_2da058;
            case 0x2DA05Cu: goto label_2da05c;
            case 0x2DA060u: goto label_2da060;
            case 0x2DA064u: goto label_2da064;
            case 0x2DA068u: goto label_2da068;
            case 0x2DA06Cu: goto label_2da06c;
            case 0x2DA070u: goto label_2da070;
            case 0x2DA074u: goto label_2da074;
            case 0x2DA078u: goto label_2da078;
            case 0x2DA07Cu: goto label_2da07c;
            case 0x2DA080u: goto label_2da080;
            case 0x2DA084u: goto label_2da084;
            case 0x2DA088u: goto label_2da088;
            case 0x2DA08Cu: goto label_2da08c;
            case 0x2DA090u: goto label_2da090;
            case 0x2DA094u: goto label_2da094;
            case 0x2DA098u: goto label_2da098;
            case 0x2DA09Cu: goto label_2da09c;
            case 0x2DA0A0u: goto label_2da0a0;
            case 0x2DA0A4u: goto label_2da0a4;
            case 0x2DA0A8u: goto label_2da0a8;
            case 0x2DA0ACu: goto label_2da0ac;
            case 0x2DA0B0u: goto label_2da0b0;
            case 0x2DA0B4u: goto label_2da0b4;
            case 0x2DA0B8u: goto label_2da0b8;
            case 0x2DA0BCu: goto label_2da0bc;
            case 0x2DA0C0u: goto label_2da0c0;
            case 0x2DA0C4u: goto label_2da0c4;
            case 0x2DA0C8u: goto label_2da0c8;
            case 0x2DA0CCu: goto label_2da0cc;
            case 0x2DA0D0u: goto label_2da0d0;
            case 0x2DA0D4u: goto label_2da0d4;
            case 0x2DA0D8u: goto label_2da0d8;
            case 0x2DA0DCu: goto label_2da0dc;
            case 0x2DA0E0u: goto label_2da0e0;
            case 0x2DA0E4u: goto label_2da0e4;
            case 0x2DA0E8u: goto label_2da0e8;
            case 0x2DA0ECu: goto label_2da0ec;
            case 0x2DA0F0u: goto label_2da0f0;
            case 0x2DA0F4u: goto label_2da0f4;
            case 0x2DA0F8u: goto label_2da0f8;
            case 0x2DA0FCu: goto label_2da0fc;
            case 0x2DA100u: goto label_2da100;
            case 0x2DA104u: goto label_2da104;
            case 0x2DA108u: goto label_2da108;
            case 0x2DA10Cu: goto label_2da10c;
            case 0x2DA110u: goto label_2da110;
            case 0x2DA114u: goto label_2da114;
            case 0x2DA118u: goto label_2da118;
            case 0x2DA11Cu: goto label_2da11c;
            case 0x2DA120u: goto label_2da120;
            case 0x2DA124u: goto label_2da124;
            case 0x2DA128u: goto label_2da128;
            case 0x2DA12Cu: goto label_2da12c;
            case 0x2DA130u: goto label_2da130;
            case 0x2DA134u: goto label_2da134;
            case 0x2DA138u: goto label_2da138;
            case 0x2DA13Cu: goto label_2da13c;
            case 0x2DA140u: goto label_2da140;
            case 0x2DA144u: goto label_2da144;
            case 0x2DA148u: goto label_2da148;
            case 0x2DA14Cu: goto label_2da14c;
            case 0x2DA150u: goto label_2da150;
            case 0x2DA154u: goto label_2da154;
            case 0x2DA158u: goto label_2da158;
            case 0x2DA15Cu: goto label_2da15c;
            case 0x2DA160u: goto label_2da160;
            case 0x2DA164u: goto label_2da164;
            case 0x2DA168u: goto label_2da168;
            case 0x2DA16Cu: goto label_2da16c;
            case 0x2DA170u: goto label_2da170;
            case 0x2DA174u: goto label_2da174;
            case 0x2DA178u: goto label_2da178;
            case 0x2DA17Cu: goto label_2da17c;
            case 0x2DA180u: goto label_2da180;
            case 0x2DA184u: goto label_2da184;
            case 0x2DA188u: goto label_2da188;
            case 0x2DA18Cu: goto label_2da18c;
            case 0x2DA190u: goto label_2da190;
            case 0x2DA194u: goto label_2da194;
            case 0x2DA198u: goto label_2da198;
            case 0x2DA19Cu: goto label_2da19c;
            case 0x2DA1A0u: goto label_2da1a0;
            case 0x2DA1A4u: goto label_2da1a4;
            case 0x2DA1A8u: goto label_2da1a8;
            case 0x2DA1ACu: goto label_2da1ac;
            case 0x2DA1B0u: goto label_2da1b0;
            case 0x2DA1B4u: goto label_2da1b4;
            case 0x2DA1B8u: goto label_2da1b8;
            case 0x2DA1BCu: goto label_2da1bc;
            case 0x2DA1C0u: goto label_2da1c0;
            case 0x2DA1C4u: goto label_2da1c4;
            case 0x2DA1C8u: goto label_2da1c8;
            case 0x2DA1CCu: goto label_2da1cc;
            case 0x2DA1D0u: goto label_2da1d0;
            case 0x2DA1D4u: goto label_2da1d4;
            case 0x2DA1D8u: goto label_2da1d8;
            case 0x2DA1DCu: goto label_2da1dc;
            case 0x2DA1E0u: goto label_2da1e0;
            case 0x2DA1E4u: goto label_2da1e4;
            case 0x2DA1E8u: goto label_2da1e8;
            case 0x2DA1ECu: goto label_2da1ec;
            case 0x2DA1F0u: goto label_2da1f0;
            case 0x2DA1F4u: goto label_2da1f4;
            case 0x2DA1F8u: goto label_2da1f8;
            case 0x2DA1FCu: goto label_2da1fc;
            case 0x2DA200u: goto label_2da200;
            case 0x2DA204u: goto label_2da204;
            case 0x2DA208u: goto label_2da208;
            case 0x2DA20Cu: goto label_2da20c;
            case 0x2DA210u: goto label_2da210;
            case 0x2DA214u: goto label_2da214;
            case 0x2DA218u: goto label_2da218;
            case 0x2DA21Cu: goto label_2da21c;
            case 0x2DA220u: goto label_2da220;
            case 0x2DA224u: goto label_2da224;
            case 0x2DA228u: goto label_2da228;
            case 0x2DA22Cu: goto label_2da22c;
            case 0x2DA230u: goto label_2da230;
            case 0x2DA234u: goto label_2da234;
            case 0x2DA238u: goto label_2da238;
            case 0x2DA23Cu: goto label_2da23c;
            case 0x2DA240u: goto label_2da240;
            case 0x2DA244u: goto label_2da244;
            case 0x2DA248u: goto label_2da248;
            case 0x2DA24Cu: goto label_2da24c;
            case 0x2DA250u: goto label_2da250;
            case 0x2DA254u: goto label_2da254;
            case 0x2DA258u: goto label_2da258;
            case 0x2DA25Cu: goto label_2da25c;
            case 0x2DA260u: goto label_2da260;
            case 0x2DA264u: goto label_2da264;
            case 0x2DA268u: goto label_2da268;
            case 0x2DA26Cu: goto label_2da26c;
            case 0x2DA270u: goto label_2da270;
            case 0x2DA274u: goto label_2da274;
            case 0x2DA278u: goto label_2da278;
            case 0x2DA27Cu: goto label_2da27c;
            case 0x2DA280u: goto label_2da280;
            case 0x2DA284u: goto label_2da284;
            case 0x2DA288u: goto label_2da288;
            case 0x2DA28Cu: goto label_2da28c;
            case 0x2DA290u: goto label_2da290;
            case 0x2DA294u: goto label_2da294;
            case 0x2DA298u: goto label_2da298;
            case 0x2DA29Cu: goto label_2da29c;
            case 0x2DA2A0u: goto label_2da2a0;
            case 0x2DA2A4u: goto label_2da2a4;
            case 0x2DA2A8u: goto label_2da2a8;
            case 0x2DA2ACu: goto label_2da2ac;
            case 0x2DA2B0u: goto label_2da2b0;
            case 0x2DA2B4u: goto label_2da2b4;
            case 0x2DA2B8u: goto label_2da2b8;
            case 0x2DA2BCu: goto label_2da2bc;
            case 0x2DA2C0u: goto label_2da2c0;
            case 0x2DA2C4u: goto label_2da2c4;
            case 0x2DA2C8u: goto label_2da2c8;
            case 0x2DA2CCu: goto label_2da2cc;
            case 0x2DA2D0u: goto label_2da2d0;
            case 0x2DA2D4u: goto label_2da2d4;
            case 0x2DA2D8u: goto label_2da2d8;
            case 0x2DA2DCu: goto label_2da2dc;
            case 0x2DA2E0u: goto label_2da2e0;
            case 0x2DA2E4u: goto label_2da2e4;
            case 0x2DA2E8u: goto label_2da2e8;
            case 0x2DA2ECu: goto label_2da2ec;
            case 0x2DA2F0u: goto label_2da2f0;
            case 0x2DA2F4u: goto label_2da2f4;
            case 0x2DA2F8u: goto label_2da2f8;
            case 0x2DA2FCu: goto label_2da2fc;
            case 0x2DA300u: goto label_2da300;
            case 0x2DA304u: goto label_2da304;
            case 0x2DA308u: goto label_2da308;
            case 0x2DA30Cu: goto label_2da30c;
            case 0x2DA310u: goto label_2da310;
            case 0x2DA314u: goto label_2da314;
            case 0x2DA318u: goto label_2da318;
            case 0x2DA31Cu: goto label_2da31c;
            case 0x2DA320u: goto label_2da320;
            case 0x2DA324u: goto label_2da324;
            case 0x2DA328u: goto label_2da328;
            case 0x2DA32Cu: goto label_2da32c;
            case 0x2DA330u: goto label_2da330;
            case 0x2DA334u: goto label_2da334;
            case 0x2DA338u: goto label_2da338;
            case 0x2DA33Cu: goto label_2da33c;
            case 0x2DA340u: goto label_2da340;
            case 0x2DA344u: goto label_2da344;
            case 0x2DA348u: goto label_2da348;
            case 0x2DA34Cu: goto label_2da34c;
            case 0x2DA350u: goto label_2da350;
            case 0x2DA354u: goto label_2da354;
            case 0x2DA358u: goto label_2da358;
            case 0x2DA35Cu: goto label_2da35c;
            case 0x2DA360u: goto label_2da360;
            case 0x2DA364u: goto label_2da364;
            case 0x2DA368u: goto label_2da368;
            case 0x2DA36Cu: goto label_2da36c;
            case 0x2DA370u: goto label_2da370;
            case 0x2DA374u: goto label_2da374;
            case 0x2DA378u: goto label_2da378;
            case 0x2DA37Cu: goto label_2da37c;
            case 0x2DA380u: goto label_2da380;
            case 0x2DA384u: goto label_2da384;
            case 0x2DA388u: goto label_2da388;
            case 0x2DA38Cu: goto label_2da38c;
            case 0x2DA390u: goto label_2da390;
            case 0x2DA394u: goto label_2da394;
            case 0x2DA398u: goto label_2da398;
            case 0x2DA39Cu: goto label_2da39c;
            case 0x2DA3A0u: goto label_2da3a0;
            case 0x2DA3A4u: goto label_2da3a4;
            case 0x2DA3A8u: goto label_2da3a8;
            case 0x2DA3ACu: goto label_2da3ac;
            case 0x2DA3B0u: goto label_2da3b0;
            case 0x2DA3B4u: goto label_2da3b4;
            case 0x2DA3B8u: goto label_2da3b8;
            case 0x2DA3BCu: goto label_2da3bc;
            case 0x2DA3C0u: goto label_2da3c0;
            case 0x2DA3C4u: goto label_2da3c4;
            case 0x2DA3C8u: goto label_2da3c8;
            case 0x2DA3CCu: goto label_2da3cc;
            case 0x2DA3D0u: goto label_2da3d0;
            case 0x2DA3D4u: goto label_2da3d4;
            case 0x2DA3D8u: goto label_2da3d8;
            case 0x2DA3DCu: goto label_2da3dc;
            case 0x2DA3E0u: goto label_2da3e0;
            case 0x2DA3E4u: goto label_2da3e4;
            case 0x2DA3E8u: goto label_2da3e8;
            case 0x2DA3ECu: goto label_2da3ec;
            case 0x2DA3F0u: goto label_2da3f0;
            case 0x2DA3F4u: goto label_2da3f4;
            case 0x2DA3F8u: goto label_2da3f8;
            case 0x2DA3FCu: goto label_2da3fc;
            case 0x2DA400u: goto label_2da400;
            case 0x2DA404u: goto label_2da404;
            case 0x2DA408u: goto label_2da408;
            case 0x2DA40Cu: goto label_2da40c;
            case 0x2DA410u: goto label_2da410;
            case 0x2DA414u: goto label_2da414;
            case 0x2DA418u: goto label_2da418;
            case 0x2DA41Cu: goto label_2da41c;
            case 0x2DA420u: goto label_2da420;
            case 0x2DA424u: goto label_2da424;
            case 0x2DA428u: goto label_2da428;
            case 0x2DA42Cu: goto label_2da42c;
            case 0x2DA430u: goto label_2da430;
            case 0x2DA434u: goto label_2da434;
            case 0x2DA438u: goto label_2da438;
            case 0x2DA43Cu: goto label_2da43c;
            case 0x2DA440u: goto label_2da440;
            case 0x2DA444u: goto label_2da444;
            case 0x2DA448u: goto label_2da448;
            case 0x2DA44Cu: goto label_2da44c;
            case 0x2DA450u: goto label_2da450;
            case 0x2DA454u: goto label_2da454;
            case 0x2DA458u: goto label_2da458;
            case 0x2DA45Cu: goto label_2da45c;
            case 0x2DA460u: goto label_2da460;
            case 0x2DA464u: goto label_2da464;
            case 0x2DA468u: goto label_2da468;
            case 0x2DA46Cu: goto label_2da46c;
            case 0x2DA470u: goto label_2da470;
            case 0x2DA474u: goto label_2da474;
            case 0x2DA478u: goto label_2da478;
            case 0x2DA47Cu: goto label_2da47c;
            case 0x2DA480u: goto label_2da480;
            case 0x2DA484u: goto label_2da484;
            case 0x2DA488u: goto label_2da488;
            case 0x2DA48Cu: goto label_2da48c;
            case 0x2DA490u: goto label_2da490;
            case 0x2DA494u: goto label_2da494;
            case 0x2DA498u: goto label_2da498;
            case 0x2DA5E8u:  // inflate_codes: call recompiled directly
                {
                    static int s_blocksCodesPath2 = 0;
                    if (s_blocksCodesPath2++ < 30) {
                        const uint32_t strm = GPR_U32(ctx, 17);
                        std::cerr << "[inflate_blocks] BEFORE inflate_codes(path2) #" << s_blocksCodesPath2 << " reg17=0x" << std::hex << strm;
                        if (strm) std::cerr << " strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4));
                        std::cerr << std::dec << "\n";
                    }
                    inflate_codes_0x2da5e8(rdram, ctx, runtime);
                    if (s_blocksCodesPath2 <= 30) {
                        const uint32_t strm = GPR_U32(ctx, 17);
                        std::cerr << "[inflate_blocks] AFTER inflate_codes(path2) reg2=0x" << std::hex << GPR_U32(ctx, 2);
                        if (strm) std::cerr << " strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4));
                        std::cerr << std::dec << "\n";
                    }
                }
                ctx->pc = 0x2D9C04u;
                goto label_2d9c04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C04u; }
            if (ctx->pc != 0x2D9C04u) { return; }
        }
    }
    ctx->pc = 0x2D9C04u;
label_2d9c04:
    // 0x2d9c04: 0x1440000f
label_2d9c08:
    if (ctx->pc == 0x2D9C08u) {
        ctx->pc = 0x2D9C08u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9C0Cu;
        goto label_2d9c0c;
    }
    ctx->pc = 0x2D9C04u;
    {
        const bool branch_taken_0x2d9c04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9C08u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2d9c04) {
            ctx->pc = 0x2D9C44u;
            goto label_2d9c44;
        }
    }
    ctx->pc = 0x2D9C0Cu;
label_2d9c0c:
    // 0x2d9c0c: 0xae340020
    ctx->pc = 0x2d9c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d9c10:
    // 0x2d9c10: 0xae33001c
    ctx->pc = 0x2d9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d9c14:
    // 0x2d9c14: 0xae570004
    ctx->pc = 0x2d9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d9c18:
    // 0x2d9c18: 0x8e420000
    ctx->pc = 0x2d9c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9c1c:
    // 0x2d9c1c: 0x2a21023
    ctx->pc = 0x2d9c1cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d9c20:
    // 0x2d9c20: 0x8e430008
    ctx->pc = 0x2d9c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d9c24:
    // 0x2d9c24: 0x431021
    ctx->pc = 0x2d9c24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9c28:
    // 0x2d9c28: 0xae420008
    ctx->pc = 0x2d9c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d9c2c:
    // 0x2d9c2c: 0xae550000
    ctx->pc = 0x2d9c2cu;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d9c30:
    // 0x2d9c30: 0xae3e0030
    ctx->pc = 0x2d9c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d9c34:
    // 0x2d9c34: 0x220202d
    ctx->pc = 0x2d9c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c38:
    // 0x2d9c38: 0x240282d
    ctx->pc = 0x2d9c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c3c:
    // 0x2d9c3c: 0x10000209
label_2d9c40:
    if (ctx->pc == 0x2D9C40u) {
        ctx->pc = 0x2D9C40u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x2D9C44u;
        goto label_2d9c44;
    }
    ctx->pc = 0x2D9C3Cu;
    {
        const bool branch_taken_0x2d9c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9C40u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2d9c3c) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D9C44u;
label_2d9c44:
    // 0x2d9c44: 0x14a382
    ctx->pc = 0x2d9c44u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 14));
label_2d9c48:
    // 0x2d9c48: 0x2673fff2
    ctx->pc = 0x2d9c48u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967282));
label_2d9c4c:
    // 0x2d9c4c: 0xae200008
    ctx->pc = 0x2d9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2d9c50:
    // 0x2d9c50: 0x24020004
    ctx->pc = 0x2d9c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2d9c54:
    // 0x2d9c54: 0xae220000
    ctx->pc = 0x2d9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9c58:
    // 0x2d9c58: 0x8e230004
    ctx->pc = 0x2d9c58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9c5c:
    // 0x2d9c5c: 0x31a82
    ctx->pc = 0x2d9c5cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 10));
label_2d9c60:
    // 0x2d9c60: 0x24630004
    ctx->pc = 0x2d9c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_2d9c64:
    // 0x2d9c64: 0x8e220008
    ctx->pc = 0x2d9c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9c68:
    // 0x2d9c68: 0x43102b
    ctx->pc = 0x2d9c68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9c6c:
    // 0x2d9c6c: 0x10400021
label_2d9c70:
    if (ctx->pc == 0x2D9C70u) {
        ctx->pc = 0x2D9C70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x2D9C74u;
        goto label_2d9c74;
    }
    ctx->pc = 0x2D9C6Cu;
    {
        const bool branch_taken_0x2d9c6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9C70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d9c6c) {
            ctx->pc = 0x2D9CF4u;
            goto label_2d9cf4;
        }
    }
    ctx->pc = 0x2D9C74u;
label_2d9c74:
    // 0x2d9c74: 0x1000000a
label_2d9c78:
    if (ctx->pc == 0x2D9C78u) {
        ctx->pc = 0x2D9C78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9896));
        ctx->pc = 0x2D9C7Cu;
        goto label_2d9c7c;
    }
    ctx->pc = 0x2D9C74u;
    {
        const bool branch_taken_0x2d9c74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9C78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9896));
        if (branch_taken_0x2d9c74) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9C7Cu;
label_2d9c7c:
    // 0x2d9c7c: 0x0
    ctx->pc = 0x2d9c7cu;
    // NOP
label_2d9c80:
    // 0x2d9c80: 0x12e001c1
label_2d9c84:
    if (ctx->pc == 0x2D9C84u) {
        ctx->pc = 0x2D9C84u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2D9C88u;
        goto label_2d9c88;
    }
    ctx->pc = 0x2D9C80u;
    {
        const bool branch_taken_0x2d9c80 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9C84u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2d9c80) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2D9C88u;
label_2d9c88:
    // 0x2d9c88: 0xafa00020
    ctx->pc = 0x2d9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d9c8c:
    // 0x2d9c8c: 0x92a20000
    ctx->pc = 0x2d9c8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2d9c90:
    // 0x2d9c90: 0x2621004
    ctx->pc = 0x2d9c90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2d9c94:
    // 0x2d9c94: 0x282a025
    ctx->pc = 0x2d9c94u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d9c98:
    // 0x2d9c98: 0x26b50001
    ctx->pc = 0x2d9c98u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2d9c9c:
    // 0x2d9c9c: 0x26730008
    ctx->pc = 0x2d9c9cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2d9ca0:
    // 0x2d9ca0: 0x2e620003
    ctx->pc = 0x2d9ca0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 3));
label_2d9ca4:
    // 0x2d9ca4: 0x1440fff6
label_2d9ca8:
    if (ctx->pc == 0x2D9CA8u) {
        ctx->pc = 0x2D9CACu;
        goto label_2d9cac;
    }
    ctx->pc = 0x2D9CA4u;
    {
        const bool branch_taken_0x2d9ca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9ca4) {
            ctx->pc = 0x2D9C80u;
            goto label_2d9c80;
        }
    }
    ctx->pc = 0x2D9CACu;
label_2d9cac:
    // 0x2d9cac: 0x8e240008
    ctx->pc = 0x2d9cacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9cb0:
    // 0x2d9cb0: 0x41080
    ctx->pc = 0x2d9cb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2d9cb4:
    // 0x2d9cb4: 0x451021
    ctx->pc = 0x2d9cb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2d9cb8:
    // 0x2d9cb8: 0x8c420000
    ctx->pc = 0x2d9cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9cbc:
    // 0x2d9cbc: 0x8e23000c
    ctx->pc = 0x2d9cbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d9cc0:
    // 0x2d9cc0: 0x21080
    ctx->pc = 0x2d9cc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2d9cc4:
    // 0x2d9cc4: 0x431021
    ctx->pc = 0x2d9cc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9cc8:
    // 0x2d9cc8: 0x32830007
    ctx->pc = 0x2d9cc8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 7));
label_2d9ccc:
    // 0x2d9ccc: 0xac430000
    ctx->pc = 0x2d9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2d9cd0:
    // 0x2d9cd0: 0x24840001
    ctx->pc = 0x2d9cd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d9cd4:
    // 0x2d9cd4: 0xae240008
    ctx->pc = 0x2d9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_2d9cd8:
    // 0x2d9cd8: 0x14a0c2
    ctx->pc = 0x2d9cd8u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 3));
label_2d9cdc:
    // 0x2d9cdc: 0x8e220004
    ctx->pc = 0x2d9cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9ce0:
    // 0x2d9ce0: 0x21282
    ctx->pc = 0x2d9ce0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 10));
label_2d9ce4:
    // 0x2d9ce4: 0x24420004
    ctx->pc = 0x2d9ce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
label_2d9ce8:
    // 0x2d9ce8: 0x82202b
    ctx->pc = 0x2d9ce8u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d9cec:
    // 0x2d9cec: 0x1480ffec
label_2d9cf0:
    if (ctx->pc == 0x2D9CF0u) {
        ctx->pc = 0x2D9CF0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->pc = 0x2D9CF4u;
        goto label_2d9cf4;
    }
    ctx->pc = 0x2D9CECu;
    {
        const bool branch_taken_0x2d9cec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9CF0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967293));
        if (branch_taken_0x2d9cec) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9CF4u;
label_2d9cf4:
    // 0x2d9cf4: 0x8e220008
    ctx->pc = 0x2d9cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9cf8:
    // 0x2d9cf8: 0x2c420013
    ctx->pc = 0x2d9cf8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 19));
label_2d9cfc:
    // 0x2d9cfc: 0x10400010
label_2d9d00:
    if (ctx->pc == 0x2D9D00u) {
        ctx->pc = 0x2D9D00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x2D9D04u;
        goto label_2d9d04;
    }
    ctx->pc = 0x2D9CFCu;
    {
        const bool branch_taken_0x2d9cfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9D00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d9cfc) {
            ctx->pc = 0x2D9D40u;
            goto label_2d9d40;
        }
    }
    ctx->pc = 0x2D9D04u;
label_2d9d04:
    // 0x2d9d04: 0x244526a8
    ctx->pc = 0x2d9d04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9896));
label_2d9d08:
    // 0x2d9d08: 0x8e230008
    ctx->pc = 0x2d9d08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9d0c:
    // 0x2d9d0c: 0x0
    ctx->pc = 0x2d9d0cu;
    // NOP
label_2d9d10:
    // 0x2d9d10: 0x31080
    ctx->pc = 0x2d9d10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2d9d14:
    // 0x2d9d14: 0x451021
    ctx->pc = 0x2d9d14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2d9d18:
    // 0x2d9d18: 0x8c420000
    ctx->pc = 0x2d9d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9d1c:
    // 0x2d9d1c: 0x8e24000c
    ctx->pc = 0x2d9d1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d9d20:
    // 0x2d9d20: 0x21080
    ctx->pc = 0x2d9d20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2d9d24:
    // 0x2d9d24: 0x441021
    ctx->pc = 0x2d9d24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d9d28:
    // 0x2d9d28: 0xac400000
    ctx->pc = 0x2d9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2d9d2c:
    // 0x2d9d2c: 0x24630001
    ctx->pc = 0x2d9d2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2d9d30:
    // 0x2d9d30: 0xae230008
    ctx->pc = 0x2d9d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2d9d34:
    // 0x2d9d34: 0x2c630013
    ctx->pc = 0x2d9d34u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 19));
label_2d9d38:
    // 0x2d9d38: 0x5460fff5
label_2d9d3c:
    if (ctx->pc == 0x2D9D3Cu) {
        ctx->pc = 0x2D9D3Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x2D9D40u;
        goto label_2d9d40;
    }
    ctx->pc = 0x2D9D38u;
    {
        const bool branch_taken_0x2d9d38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9d38) {
            ctx->pc = 0x2D9D3Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x2D9D10u;
            goto label_2d9d10;
        }
    }
    ctx->pc = 0x2D9D40u;
label_2d9d40:
    // 0x2d9d40: 0x24020007
    ctx->pc = 0x2d9d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2d9d44:
    // 0x2d9d44: 0xae220010
    ctx->pc = 0x2d9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2d9d48:
    // 0x2d9d48: 0x8e24000c
    ctx->pc = 0x2d9d48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d9d4c:
    // 0x2d9d4c: 0x26250010
    ctx->pc = 0x2d9d4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
label_2d9d50:
    // 0x2d9d50: 0x26260014
    ctx->pc = 0x2d9d50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
label_2d9d54:
    // 0x2d9d54: 0xc0b6e8e
label_2d9d58:
    if (ctx->pc == 0x2D9D58u) {
        ctx->pc = 0x2D9D58u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D5Cu;
        goto label_2d9d5c;
    }
    ctx->pc = 0x2D9D54u;
    SET_GPR_U32(ctx, 31, 0x2D9D5Cu);
    ctx->pc = 0x2D9D58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBA38u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_bits_0x2dba38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D5Cu; }
    }
    if (ctx->pc != 0x2D9D5Cu) { return; }
    ctx->pc = 0x2D9D5Cu;
label_2d9d5c:
    // 0x2d9d5c: 0x40802d
    ctx->pc = 0x2d9d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d60:
    // 0x2d9d60: 0x12000013
label_2d9d64:
    if (ctx->pc == 0x2D9D64u) {
        ctx->pc = 0x2D9D64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2D9D68u;
        goto label_2d9d68;
    }
    ctx->pc = 0x2D9D60u;
    {
        const bool branch_taken_0x2d9d60 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9D64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d9d60) {
            ctx->pc = 0x2D9DB0u;
            goto label_2d9db0;
        }
    }
    ctx->pc = 0x2D9D68u;
label_2d9d68:
    // 0x2d9d68: 0x16020003
label_2d9d6c:
    if (ctx->pc == 0x2D9D6Cu) {
        ctx->pc = 0x2D9D6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
        ctx->pc = 0x2D9D70u;
        goto label_2d9d70;
    }
    ctx->pc = 0x2D9D68u;
    {
        const bool branch_taken_0x2d9d68 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D9D6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
        if (branch_taken_0x2d9d68) {
            ctx->pc = 0x2D9D78u;
            goto label_2d9d78;
        }
    }
    ctx->pc = 0x2D9D70u;
label_2d9d70:
    // 0x2d9d70: 0x24020009
    ctx->pc = 0x2d9d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2d9d74:
    // 0x2d9d74: 0xae220000
    ctx->pc = 0x2d9d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9d78:
    // 0x2d9d78: 0xae340020
    ctx->pc = 0x2d9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d9d7c:
    // 0x2d9d7c: 0xae33001c
    ctx->pc = 0x2d9d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d9d80:
    // 0x2d9d80: 0xae570004
    ctx->pc = 0x2d9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d9d84:
    // 0x2d9d84: 0x8e420000
    ctx->pc = 0x2d9d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9d88:
    // 0x2d9d88: 0x2a21023
    ctx->pc = 0x2d9d88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d9d8c:
    // 0x2d9d8c: 0x8e430008
    ctx->pc = 0x2d9d8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d9d90:
    // 0x2d9d90: 0x431021
    ctx->pc = 0x2d9d90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9d94:
    // 0x2d9d94: 0xae420008
    ctx->pc = 0x2d9d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d9d98:
    // 0x2d9d98: 0xae550000
    ctx->pc = 0x2d9d98u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d9d9c:
    // 0x2d9d9c: 0xae3e0030
    ctx->pc = 0x2d9d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d9da0:
    // 0x2d9da0: 0x220202d
    ctx->pc = 0x2d9da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9da4:
    // 0x2d9da4: 0x240282d
    ctx->pc = 0x2d9da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9da8:
    // 0x2d9da8: 0x100001ae
label_2d9dac:
    if (ctx->pc == 0x2D9DACu) {
        ctx->pc = 0x2D9DACu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2D9DB0u;
        goto label_2d9db0;
    }
    ctx->pc = 0x2D9DA8u;
    {
        const bool branch_taken_0x2d9da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9DACu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d9da8) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D9DB0u;
label_2d9db0:
    // 0x2d9db0: 0xae200008
    ctx->pc = 0x2d9db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2d9db4:
    // 0x2d9db4: 0x24020005
    ctx->pc = 0x2d9db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2d9db8:
    // 0x2d9db8: 0xae220000
    ctx->pc = 0x2d9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9dbc:
    // 0x2d9dbc: 0x8e300004
    ctx->pc = 0x2d9dbcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9dc0:
    // 0x2d9dc0: 0x3202001f
    ctx->pc = 0x2d9dc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 31));
label_2d9dc4:
    // 0x2d9dc4: 0x101942
    ctx->pc = 0x2d9dc4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 5));
label_2d9dc8:
    // 0x2d9dc8: 0x3063001f
    ctx->pc = 0x2d9dc8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
label_2d9dcc:
    // 0x2d9dcc: 0x24630102
    ctx->pc = 0x2d9dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 258));
label_2d9dd0:
    // 0x2d9dd0: 0x431021
    ctx->pc = 0x2d9dd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9dd4:
    // 0x2d9dd4: 0x8e230008
    ctx->pc = 0x2d9dd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9dd8:
    // 0x2d9dd8: 0x62182b
    ctx->pc = 0x2d9dd8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d9ddc:
    // 0x2d9ddc: 0x10600081
label_2d9de0:
    if (ctx->pc == 0x2D9DE0u) {
        ctx->pc = 0x2D9DE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x2D9DE4u;
        goto label_2d9de4;
    }
    ctx->pc = 0x2D9DDCu;
    {
        const bool branch_taken_0x2d9ddc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9DE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d9ddc) {
            ctx->pc = 0x2D9FE4u;
            goto label_2d9fe4;
        }
    }
    ctx->pc = 0x2D9DE4u;
label_2d9de4:
    // 0x2d9de4: 0x24492720
    ctx->pc = 0x2d9de4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 10016));
label_2d9de8:
    // 0x2d9de8: 0x24080010
    ctx->pc = 0x2d9de8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
label_2d9dec:
    // 0x2d9dec: 0x3c02003c
    ctx->pc = 0x2d9decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2d9df0:
    // 0x2d9df0: 0x244a80e0
    ctx->pc = 0x2d9df0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294934752));
label_2d9df4:
    // 0x2d9df4: 0x8e300010
    ctx->pc = 0x2d9df4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d9df8:
    // 0x2d9df8: 0x270102b
    ctx->pc = 0x2d9df8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2d9dfc:
    // 0x2d9dfc: 0x1040000d
label_2d9e00:
    if (ctx->pc == 0x2D9E00u) {
        ctx->pc = 0x2D9E00u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x2D9E04u;
        goto label_2d9e04;
    }
    ctx->pc = 0x2D9DFCu;
    {
        const bool branch_taken_0x2d9dfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9E00u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2d9dfc) {
            ctx->pc = 0x2D9E34u;
            goto label_2d9e34;
        }
    }
    ctx->pc = 0x2D9E04u;
label_2d9e04:
    // 0x2d9e04: 0x0
    ctx->pc = 0x2d9e04u;
    // NOP
label_2d9e08:
    // 0x2d9e08: 0x12e0016d
label_2d9e0c:
    if (ctx->pc == 0x2D9E0Cu) {
        ctx->pc = 0x2D9E0Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2D9E10u;
        goto label_2d9e10;
    }
    ctx->pc = 0x2D9E08u;
    {
        const bool branch_taken_0x2d9e08 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9E0Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2d9e08) {
            ctx->pc = 0x2DA3C0u;
            goto label_2da3c0;
        }
    }
    ctx->pc = 0x2D9E10u;
label_2d9e10:
    // 0x2d9e10: 0xafa00020
    ctx->pc = 0x2d9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d9e14:
    // 0x2d9e14: 0x92a20000
    ctx->pc = 0x2d9e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2d9e18:
    // 0x2d9e18: 0x2621004
    ctx->pc = 0x2d9e18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2d9e1c:
    // 0x2d9e1c: 0x282a025
    ctx->pc = 0x2d9e1cu;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d9e20:
    // 0x2d9e20: 0x26730008
    ctx->pc = 0x2d9e20u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2d9e24:
    // 0x2d9e24: 0x270102b
    ctx->pc = 0x2d9e24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2d9e28:
    // 0x2d9e28: 0x1440fff7
label_2d9e2c:
    if (ctx->pc == 0x2D9E2Cu) {
        ctx->pc = 0x2D9E2Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2D9E30u;
        goto label_2d9e30;
    }
    ctx->pc = 0x2D9E28u;
    {
        const bool branch_taken_0x2d9e28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9E2Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x2d9e28) {
            ctx->pc = 0x2D9E08u;
            goto label_2d9e08;
        }
    }
    ctx->pc = 0x2D9E30u;
label_2d9e30:
    // 0x2d9e30: 0x101080
    ctx->pc = 0x2d9e30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_2d9e34:
    // 0x2d9e34: 0x491021
    ctx->pc = 0x2d9e34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2d9e38:
    // 0x2d9e38: 0x8c420000
    ctx->pc = 0x2d9e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9e3c:
    // 0x2d9e3c: 0x2821024
    ctx->pc = 0x2d9e3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d9e40:
    // 0x2d9e40: 0x210c0
    ctx->pc = 0x2d9e40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_2d9e44:
    // 0x2d9e44: 0x8e230014
    ctx->pc = 0x2d9e44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d9e48:
    // 0x2d9e48: 0x431021
    ctx->pc = 0x2d9e48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9e4c:
    // 0x2d9e4c: 0x90500001
    ctx->pc = 0x2d9e4cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d9e50:
    // 0x2d9e50: 0x8c450004
    ctx->pc = 0x2d9e50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d9e54:
    // 0x2d9e54: 0x2ca20010
    ctx->pc = 0x2d9e54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 16));
label_2d9e58:
    // 0x2d9e58: 0x1040000b
label_2d9e5c:
    if (ctx->pc == 0x2D9E5Cu) {
        ctx->pc = 0x2D9E5Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2D9E60u;
        goto label_2d9e60;
    }
    ctx->pc = 0x2D9E58u;
    {
        const bool branch_taken_0x2d9e58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9E5Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2d9e58) {
            ctx->pc = 0x2D9E88u;
            goto label_2d9e88;
        }
    }
    ctx->pc = 0x2D9E60u;
label_2d9e60:
    // 0x2d9e60: 0x214a006
    ctx->pc = 0x2d9e60u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 16) & 0x1F));
label_2d9e64:
    // 0x2d9e64: 0x2709823
    ctx->pc = 0x2d9e64u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2d9e68:
    // 0x2d9e68: 0x8e220008
    ctx->pc = 0x2d9e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9e6c:
    // 0x2d9e6c: 0x8e24000c
    ctx->pc = 0x2d9e6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d9e70:
    // 0x2d9e70: 0x21880
    ctx->pc = 0x2d9e70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_2d9e74:
    // 0x2d9e74: 0x641821
    ctx->pc = 0x2d9e74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d9e78:
    // 0x2d9e78: 0xac650000
    ctx->pc = 0x2d9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2d9e7c:
    // 0x2d9e7c: 0x24420001
    ctx->pc = 0x2d9e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d9e80:
    // 0x2d9e80: 0x1000004e
label_2d9e84:
    if (ctx->pc == 0x2D9E84u) {
        ctx->pc = 0x2D9E84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9E88u;
        goto label_2d9e88;
    }
    ctx->pc = 0x2D9E80u;
    {
        const bool branch_taken_0x2d9e80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9E84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2d9e80) {
            ctx->pc = 0x2D9FBCu;
            goto label_2d9fbc;
        }
    }
    ctx->pc = 0x2D9E88u;
label_2d9e88:
    // 0x2d9e88: 0x24a2fff2
    ctx->pc = 0x2d9e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967282));
label_2d9e8c:
    // 0x2d9e8c: 0x38a30012
    ctx->pc = 0x2d9e8cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), 18));
label_2d9e90:
    // 0x2d9e90: 0x43380b
    ctx->pc = 0x2d9e90u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_2d9e94:
    // 0x2d9e94: 0x24060003
    ctx->pc = 0x2d9e94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
label_2d9e98:
    // 0x2d9e98: 0x2402000b
    ctx->pc = 0x2d9e98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_2d9e9c:
    // 0x2d9e9c: 0x43300a
    ctx->pc = 0x2d9e9cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
label_2d9ea0:
    // 0x2d9ea0: 0x2071021
    ctx->pc = 0x2d9ea0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_2d9ea4:
    // 0x2d9ea4: 0x262102b
    ctx->pc = 0x2d9ea4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2d9ea8:
    // 0x2d9ea8: 0x1040000b
label_2d9eac:
    if (ctx->pc == 0x2D9EACu) {
        ctx->pc = 0x2D9EACu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->pc = 0x2D9EB0u;
        goto label_2d9eb0;
    }
    ctx->pc = 0x2D9EA8u;
    {
        const bool branch_taken_0x2d9ea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9EACu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        if (branch_taken_0x2d9ea8) {
            ctx->pc = 0x2D9ED8u;
            goto label_2d9ed8;
        }
    }
    ctx->pc = 0x2D9EB0u;
label_2d9eb0:
    // 0x2d9eb0: 0x12e00151
label_2d9eb4:
    if (ctx->pc == 0x2D9EB4u) {
        ctx->pc = 0x2D9EB4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x2D9EB8u;
        goto label_2d9eb8;
    }
    ctx->pc = 0x2D9EB0u;
    {
        const bool branch_taken_0x2d9eb0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9EB4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4294967295));
        if (branch_taken_0x2d9eb0) {
            ctx->pc = 0x2DA3F8u;
            goto label_2da3f8;
        }
    }
    ctx->pc = 0x2D9EB8u;
label_2d9eb8:
    // 0x2d9eb8: 0xafa00020
    ctx->pc = 0x2d9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2d9ebc:
    // 0x2d9ebc: 0x92a20000
    ctx->pc = 0x2d9ebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2d9ec0:
    // 0x2d9ec0: 0x2621004
    ctx->pc = 0x2d9ec0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_2d9ec4:
    // 0x2d9ec4: 0x282a025
    ctx->pc = 0x2d9ec4u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d9ec8:
    // 0x2d9ec8: 0x26730008
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
label_2d9ecc:
    // 0x2d9ecc: 0x263102b
    ctx->pc = 0x2d9eccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2d9ed0:
    // 0x2d9ed0: 0x1440fff7
label_2d9ed4:
    if (ctx->pc == 0x2D9ED4u) {
        ctx->pc = 0x2D9ED4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2D9ED8u;
        goto label_2d9ed8;
    }
    ctx->pc = 0x2D9ED0u;
    {
        const bool branch_taken_0x2d9ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9ED4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x2d9ed0) {
            ctx->pc = 0x2D9EB0u;
            goto label_2d9eb0;
        }
    }
    ctx->pc = 0x2D9ED8u;
label_2d9ed8:
    // 0x2d9ed8: 0x214a006
    ctx->pc = 0x2d9ed8u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 16) & 0x1F));
label_2d9edc:
    // 0x2d9edc: 0x2709823
    ctx->pc = 0x2d9edcu;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2d9ee0:
    // 0x2d9ee0: 0x71080
    ctx->pc = 0x2d9ee0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
label_2d9ee4:
    // 0x2d9ee4: 0x491021
    ctx->pc = 0x2d9ee4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2d9ee8:
    // 0x2d9ee8: 0x8c420000
    ctx->pc = 0x2d9ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9eec:
    // 0x2d9eec: 0x2821024
    ctx->pc = 0x2d9eecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d9ef0:
    // 0x2d9ef0: 0xc23021
    ctx->pc = 0x2d9ef0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2d9ef4:
    // 0x2d9ef4: 0xf4a006
    ctx->pc = 0x2d9ef4u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 7) & 0x1F));
label_2d9ef8:
    // 0x2d9ef8: 0x2679823
    ctx->pc = 0x2d9ef8u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_2d9efc:
    // 0x2d9efc: 0x8e270008
    ctx->pc = 0x2d9efcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9f00:
    // 0x2d9f00: 0x8e300004
    ctx->pc = 0x2d9f00u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9f04:
    // 0x2d9f04: 0xe62021
    ctx->pc = 0x2d9f04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2d9f08:
    // 0x2d9f08: 0x3203001f
    ctx->pc = 0x2d9f08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 31));
label_2d9f0c:
    // 0x2d9f0c: 0x101142
    ctx->pc = 0x2d9f0cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 5));
label_2d9f10:
    // 0x2d9f10: 0x3042001f
    ctx->pc = 0x2d9f10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
label_2d9f14:
    // 0x2d9f14: 0x24420102
    ctx->pc = 0x2d9f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 258));
label_2d9f18:
    // 0x2d9f18: 0x621821
    ctx->pc = 0x2d9f18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d9f1c:
    // 0x2d9f1c: 0x64182b
    ctx->pc = 0x2d9f1cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d9f20:
    // 0x2d9f20: 0x54600005
label_2d9f24:
    if (ctx->pc == 0x2D9F24u) {
        ctx->pc = 0x2D9F24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2D9F28u;
        goto label_2d9f28;
    }
    ctx->pc = 0x2D9F20u;
    {
        const bool branch_taken_0x2d9f20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9f20) {
            ctx->pc = 0x2D9F24u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
            ctx->pc = 0x2D9F38u;
            goto label_2d9f38;
        }
    }
    ctx->pc = 0x2D9F28u;
label_2d9f28:
    // 0x2d9f28: 0x14a80019
label_2d9f2c:
    if (ctx->pc == 0x2D9F2Cu) {
        ctx->pc = 0x2D9F2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F30u;
        goto label_2d9f30;
    }
    ctx->pc = 0x2D9F28u;
    {
        const bool branch_taken_0x2d9f28 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        ctx->pc = 0x2D9F2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d9f28) {
            ctx->pc = 0x2D9F90u;
            goto label_2d9f90;
        }
    }
    ctx->pc = 0x2D9F30u;
label_2d9f30:
    // 0x2d9f30: 0x14e00011
label_2d9f34:
    if (ctx->pc == 0x2D9F34u) {
        ctx->pc = 0x2D9F34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2D9F38u;
        goto label_2d9f38;
    }
    ctx->pc = 0x2D9F30u;
    {
        const bool branch_taken_0x2d9f30 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9F34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x2d9f30) {
            ctx->pc = 0x2D9F78u;
            goto label_2d9f78;
        }
    }
    ctx->pc = 0x2D9F38u;
label_2d9f38:
    // 0x2d9f38: 0xae220000
    ctx->pc = 0x2d9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9f3c:
    // 0x2d9f3c: 0xae4a0018
    ctx->pc = 0x2d9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 10));
label_2d9f40:
    // 0x2d9f40: 0xae340020
    ctx->pc = 0x2d9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2d9f44:
    // 0x2d9f44: 0xae33001c
    ctx->pc = 0x2d9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2d9f48:
    // 0x2d9f48: 0xae570004
    ctx->pc = 0x2d9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2d9f4c:
    // 0x2d9f4c: 0x8e420000
    ctx->pc = 0x2d9f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9f50:
    // 0x2d9f50: 0x2a21023
    ctx->pc = 0x2d9f50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d9f54:
    // 0x2d9f54: 0x8e430008
    ctx->pc = 0x2d9f54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d9f58:
    // 0x2d9f58: 0x431021
    ctx->pc = 0x2d9f58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9f5c:
    // 0x2d9f5c: 0xae420008
    ctx->pc = 0x2d9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2d9f60:
    // 0x2d9f60: 0xae550000
    ctx->pc = 0x2d9f60u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2d9f64:
    // 0x2d9f64: 0xae3e0030
    ctx->pc = 0x2d9f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2d9f68:
    // 0x2d9f68: 0x220202d
    ctx->pc = 0x2d9f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f6c:
    // 0x2d9f6c: 0x240282d
    ctx->pc = 0x2d9f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f70:
    // 0x2d9f70: 0x1000013c
label_2d9f74:
    if (ctx->pc == 0x2D9F74u) {
        ctx->pc = 0x2D9F74u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2D9F78u;
        goto label_2d9f78;
    }
    ctx->pc = 0x2D9F70u;
    {
        const bool branch_taken_0x2d9f70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9F74u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d9f70) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2D9F78u;
label_2d9f78:
    // 0x2d9f78: 0x54a80005
label_2d9f7c:
    if (ctx->pc == 0x2D9F7Cu) {
        ctx->pc = 0x2D9F7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F80u;
        goto label_2d9f80;
    }
    ctx->pc = 0x2D9F78u;
    {
        const bool branch_taken_0x2d9f78 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        if (branch_taken_0x2d9f78) {
            ctx->pc = 0x2D9F7Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D9F90u;
            goto label_2d9f90;
        }
    }
    ctx->pc = 0x2D9F80u;
label_2d9f80:
    // 0x2d9f80: 0x8e23000c
    ctx->pc = 0x2d9f80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d9f84:
    // 0x2d9f84: 0x71080
    ctx->pc = 0x2d9f84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
label_2d9f88:
    // 0x2d9f88: 0x431021
    ctx->pc = 0x2d9f88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9f8c:
    // 0x2d9f8c: 0x8c42fffc
    ctx->pc = 0x2d9f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2d9f90:
    // 0x2d9f90: 0x40282d
    ctx->pc = 0x2d9f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f94:
    // 0x2d9f94: 0x0
    ctx->pc = 0x2d9f94u;
    // NOP
label_2d9f98:
    // 0x2d9f98: 0x8e23000c
    ctx->pc = 0x2d9f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d9f9c:
    // 0x2d9f9c: 0x71080
    ctx->pc = 0x2d9f9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
label_2d9fa0:
    // 0x2d9fa0: 0x431021
    ctx->pc = 0x2d9fa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9fa4:
    // 0x2d9fa4: 0xac450000
    ctx->pc = 0x2d9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2d9fa8:
    // 0x2d9fa8: 0x24e70001
    ctx->pc = 0x2d9fa8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_2d9fac:
    // 0x2d9fac: 0x24c6ffff
    ctx->pc = 0x2d9facu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_2d9fb0:
    // 0x2d9fb0: 0x14c0fff9
label_2d9fb4:
    if (ctx->pc == 0x2D9FB4u) {
        ctx->pc = 0x2D9FB8u;
        goto label_2d9fb8;
    }
    ctx->pc = 0x2D9FB0u;
    {
        const bool branch_taken_0x2d9fb0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9fb0) {
            ctx->pc = 0x2D9F98u;
            goto label_2d9f98;
        }
    }
    ctx->pc = 0x2D9FB8u;
label_2d9fb8:
    // 0x2d9fb8: 0xae270008
    ctx->pc = 0x2d9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
label_2d9fbc:
    // 0x2d9fbc: 0x8e300004
    ctx->pc = 0x2d9fbcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9fc0:
    // 0x2d9fc0: 0x3202001f
    ctx->pc = 0x2d9fc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 31));
label_2d9fc4:
    // 0x2d9fc4: 0x101942
    ctx->pc = 0x2d9fc4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 5));
label_2d9fc8:
    // 0x2d9fc8: 0x3063001f
    ctx->pc = 0x2d9fc8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
label_2d9fcc:
    // 0x2d9fcc: 0x24630102
    ctx->pc = 0x2d9fccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 258));
label_2d9fd0:
    // 0x2d9fd0: 0x431021
    ctx->pc = 0x2d9fd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9fd4:
    // 0x2d9fd4: 0x8e230008
    ctx->pc = 0x2d9fd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9fd8:
    // 0x2d9fd8: 0x62182b
    ctx->pc = 0x2d9fd8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d9fdc:
    // 0x2d9fdc: 0x5460ff86
label_2d9fe0:
    if (ctx->pc == 0x2D9FE0u) {
        ctx->pc = 0x2D9FE0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x2D9FE4u;
        goto label_2d9fe4;
    }
    ctx->pc = 0x2D9FDCu;
    {
        const bool branch_taken_0x2d9fdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9fdc) {
            ctx->pc = 0x2D9FE0u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x2D9DF8u;
            goto label_2d9df8;
        }
    }
    ctx->pc = 0x2D9FE4u;
label_2d9fe4:
    // 0x2d9fe4: 0x8e240014
    ctx->pc = 0x2d9fe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d9fe8:
    // 0x2d9fe8: 0xc0b6f98
label_2d9fec:
    if (ctx->pc == 0x2D9FECu) {
        ctx->pc = 0x2D9FECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FF0u;
        goto label_2d9ff0;
    }
    ctx->pc = 0x2D9FE8u;
    SET_GPR_U32(ctx, 31, 0x2D9FF0u);
    ctx->pc = 0x2D9FECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9FF0u; }
    }
    if (ctx->pc != 0x2D9FF0u) { return; }
    ctx->pc = 0x2D9FF0u;
label_2d9ff0:
    // 0x2d9ff0: 0xae200014
    ctx->pc = 0x2d9ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2d9ff4:
    // 0x2d9ff4: 0x24160009
    ctx->pc = 0x2d9ff4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 9));
label_2d9ff8:
    // 0x2d9ff8: 0xafb60010
    ctx->pc = 0x2d9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_2d9ffc:
    // 0x2d9ffc: 0x24020006
    ctx->pc = 0x2d9ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2da000:
    // 0x2da000: 0xafa20014
    ctx->pc = 0x2da000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2da004:
    // 0x2da004: 0x8e300004
    ctx->pc = 0x2da004u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2da008:
    // 0x2da008: 0x3204001f
    ctx->pc = 0x2da008u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 31));
label_2da00c:
    // 0x2da00c: 0x102942
    ctx->pc = 0x2da00cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 16), 5));
label_2da010:
    // 0x2da010: 0x30a5001f
    ctx->pc = 0x2da010u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 31));
label_2da014:
    // 0x2da014: 0x24840101
    ctx->pc = 0x2da014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 257));
label_2da018:
    // 0x2da018: 0x24a50001
    ctx->pc = 0x2da018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2da01c:
    // 0x2da01c: 0x8e26000c
    ctx->pc = 0x2da01cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2da020:
    // 0x2da020: 0x27a70010
    ctx->pc = 0x2da020u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_2da024:
    // 0x2da024: 0x27a80014
    ctx->pc = 0x2da024u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 20));
label_2da028:
    // 0x2da028: 0x27a90018
    ctx->pc = 0x2da028u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 24));
label_2da02c:
    // 0x2da02c: 0x27aa001c
    ctx->pc = 0x2da02cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 28));
label_2da030:
    // 0x2da030: 0xc0b6eb4
label_2da034:
    if (ctx->pc == 0x2DA034u) {
        ctx->pc = 0x2DA034u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA038u;
        goto label_2da038;
    }
    ctx->pc = 0x2DA030u;
    SET_GPR_U32(ctx, 31, 0x2DA038u);
    ctx->pc = 0x2DA034u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_dynamic_0x2dbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA038u; }
    }
    if (ctx->pc != 0x2DA038u) { return; }
    ctx->pc = 0x2DA038u;
label_2da038:
    // 0x2da038: 0x40802d
    ctx->pc = 0x2da038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da03c:
    // 0x2da03c: 0x12000013
label_2da040:
    if (ctx->pc == 0x2DA040u) {
        ctx->pc = 0x2DA040u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2DA044u;
        goto label_2da044;
    }
    ctx->pc = 0x2DA03Cu;
    {
        const bool branch_taken_0x2da03c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA040u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2da03c) {
            ctx->pc = 0x2DA08Cu;
            goto label_2da08c;
        }
    }
    ctx->pc = 0x2DA044u;
label_2da044:
    // 0x2da044: 0x3c02ffff
    ctx->pc = 0x2da044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2da048:
    // 0x2da048: 0x3442fffd
    ctx->pc = 0x2da048u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
label_2da04c:
    // 0x2da04c: 0x52020001
label_2da050:
    if (ctx->pc == 0x2DA050u) {
        ctx->pc = 0x2DA050u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
        ctx->pc = 0x2DA054u;
        goto label_2da054;
    }
    ctx->pc = 0x2DA04Cu;
    {
        const bool branch_taken_0x2da04c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x2da04c) {
            ctx->pc = 0x2DA050u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
            ctx->pc = 0x2DA054u;
            goto label_2da054;
        }
    }
    ctx->pc = 0x2DA054u;
label_2da054:
    // 0x2da054: 0xae340020
    ctx->pc = 0x2da054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da058:
    // 0x2da058: 0xae33001c
    ctx->pc = 0x2da058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da05c:
    // 0x2da05c: 0xae570004
    ctx->pc = 0x2da05cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2da060:
    // 0x2da060: 0x8e420000
    ctx->pc = 0x2da060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da064:
    // 0x2da064: 0x2a21023
    ctx->pc = 0x2da064u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da068:
    // 0x2da068: 0x8e430008
    ctx->pc = 0x2da068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da06c:
    // 0x2da06c: 0x431021
    ctx->pc = 0x2da06cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da070:
    // 0x2da070: 0xae420008
    ctx->pc = 0x2da070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da074:
    // 0x2da074: 0xae550000
    ctx->pc = 0x2da074u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da078:
    // 0x2da078: 0xae3e0030
    ctx->pc = 0x2da078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da07c:
    // 0x2da07c: 0x220202d
    ctx->pc = 0x2da07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da080:
    // 0x2da080: 0x240282d
    ctx->pc = 0x2da080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da084:
    // 0x2da084: 0x100000f7
label_2da088:
    if (ctx->pc == 0x2DA088u) {
        ctx->pc = 0x2DA088u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA08Cu;
        goto label_2da08c;
    }
    ctx->pc = 0x2DA084u;
    {
        const bool branch_taken_0x2da084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA088u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2da084) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA08Cu;
label_2da08c:
    // 0x2da08c: 0x8fa50014
    ctx->pc = 0x2da08cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2da090:
    // 0x2da090: 0x8fa60018
    ctx->pc = 0x2da090u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2da094:
    // 0x2da094: 0x8fa7001c
    ctx->pc = 0x2da094u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2da098:
    // 0x2da098: 0xc0b695e
label_2da09c:
    if (ctx->pc == 0x2DA09Cu) {
        ctx->pc = 0x2DA09Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0A0u;
        goto label_2da0a0;
    }
    ctx->pc = 0x2DA098u;
    SET_GPR_U32(ctx, 31, 0x2DA0A0u);
    ctx->pc = 0x2DA09Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DA578u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_new_0x2da578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0A0u; }
    }
    if (ctx->pc != 0x2DA0A0u) { return; }
    ctx->pc = 0x2DA0A0u;
label_2da0a0:
    // 0x2da0a0: 0x40802d
    ctx->pc = 0x2da0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da0a4:
    // 0x2da0a4: 0x56000015
label_2da0a8:
    if (ctx->pc == 0x2DA0A8u) {
        ctx->pc = 0x2DA0A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x2DA0ACu;
        goto label_2da0ac;
    }
    ctx->pc = 0x2DA0A4u;
    {
        const bool branch_taken_0x2da0a4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2da0a4) {
            ctx->pc = 0x2DA0A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->pc = 0x2DA0FCu;
            goto label_2da0fc;
        }
    }
    ctx->pc = 0x2DA0ACu;
label_2da0ac:
    // 0x2da0ac: 0x8fa4001c
    ctx->pc = 0x2da0acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2da0b0:
    // 0x2da0b0: 0xc0b6f98
label_2da0b4:
    if (ctx->pc == 0x2DA0B4u) {
        ctx->pc = 0x2DA0B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0B8u;
        goto label_2da0b8;
    }
    ctx->pc = 0x2DA0B0u;
    SET_GPR_U32(ctx, 31, 0x2DA0B8u);
    ctx->pc = 0x2DA0B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0B8u; }
    }
    if (ctx->pc != 0x2DA0B8u) { return; }
    ctx->pc = 0x2DA0B8u;
label_2da0b8:
    // 0x2da0b8: 0x8fa40018
    ctx->pc = 0x2da0b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2da0bc:
    // 0x2da0bc: 0xc0b6f98
label_2da0c0:
    if (ctx->pc == 0x2DA0C0u) {
        ctx->pc = 0x2DA0C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0C4u;
        goto label_2da0c4;
    }
    ctx->pc = 0x2DA0BCu;
    SET_GPR_U32(ctx, 31, 0x2DA0C4u);
    ctx->pc = 0x2DA0C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA0C4u; }
    }
    if (ctx->pc != 0x2DA0C4u) { return; }
    ctx->pc = 0x2DA0C4u;
label_2da0c4:
    // 0x2da0c4: 0xae340020
    ctx->pc = 0x2da0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da0c8:
    // 0x2da0c8: 0xae33001c
    ctx->pc = 0x2da0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da0cc:
    // 0x2da0cc: 0xae570004
    ctx->pc = 0x2da0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2da0d0:
    // 0x2da0d0: 0x8e420000
    ctx->pc = 0x2da0d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da0d4:
    // 0x2da0d4: 0x2a21023
    ctx->pc = 0x2da0d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da0d8:
    // 0x2da0d8: 0x8e430008
    ctx->pc = 0x2da0d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da0dc:
    // 0x2da0dc: 0x431021
    ctx->pc = 0x2da0dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da0e0:
    // 0x2da0e0: 0xae420008
    ctx->pc = 0x2da0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da0e4:
    // 0x2da0e4: 0xae550000
    ctx->pc = 0x2da0e4u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da0e8:
    // 0x2da0e8: 0xae3e0030
    ctx->pc = 0x2da0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da0ec:
    // 0x2da0ec: 0x220202d
    ctx->pc = 0x2da0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da0f0:
    // 0x2da0f0: 0x240282d
    ctx->pc = 0x2da0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da0f4:
    // 0x2da0f4: 0x100000db
label_2da0f8:
    if (ctx->pc == 0x2DA0F8u) {
        ctx->pc = 0x2DA0F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x2DA0FCu;
        goto label_2da0fc;
    }
    ctx->pc = 0x2DA0F4u;
    {
        const bool branch_taken_0x2da0f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA0F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2da0f4) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA0FCu;
label_2da0fc:
    // 0x2da0fc: 0x8e440028
    ctx->pc = 0x2da0fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2da100:
    // 0x2da100: 0x40f809
label_2da104:
    if (ctx->pc == 0x2DA104u) {
        ctx->pc = 0x2DA104u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x2DA108u;
        goto label_2da108;
    }
    ctx->pc = 0x2DA100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        // When calling inflate_codes (0x2da5e8), return to 0x2DA15C so we don't overwrite stream[0] with stale reg 21 at 2da144.
        const uint32_t returnAddr = (jumpTarget == 0x2DA5E8u) ? 0x2DA15Cu : 0x2DA108u;
        SET_GPR_U32(ctx, 31, returnAddr);
        ctx->pc = 0x2DA104u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D96F8u: goto label_2d96f8;
            case 0x2D96FCu: goto label_2d96fc;
            case 0x2D9700u: goto label_2d9700;
            case 0x2D9704u: goto label_2d9704;
            case 0x2D9708u: goto label_2d9708;
            case 0x2D970Cu: goto label_2d970c;
            case 0x2D9710u: goto label_2d9710;
            case 0x2D9714u: goto label_2d9714;
            case 0x2D9718u: goto label_2d9718;
            case 0x2D971Cu: goto label_2d971c;
            case 0x2D9720u: goto label_2d9720;
            case 0x2D9724u: goto label_2d9724;
            case 0x2D9728u: goto label_2d9728;
            case 0x2D972Cu: goto label_2d972c;
            case 0x2D9730u: goto label_2d9730;
            case 0x2D9734u: goto label_2d9734;
            case 0x2D9738u: goto label_2d9738;
            case 0x2D973Cu: goto label_2d973c;
            case 0x2D9740u: goto label_2d9740;
            case 0x2D9744u: goto label_2d9744;
            case 0x2D9748u: goto label_2d9748;
            case 0x2D974Cu: goto label_2d974c;
            case 0x2D9750u: goto label_2d9750;
            case 0x2D9754u: goto label_2d9754;
            case 0x2D9758u: goto label_2d9758;
            case 0x2D975Cu: goto label_2d975c;
            case 0x2D9760u: goto label_2d9760;
            case 0x2D9764u: goto label_2d9764;
            case 0x2D9768u: goto label_2d9768;
            case 0x2D976Cu: goto label_2d976c;
            case 0x2D9770u: goto label_2d9770;
            case 0x2D9774u: goto label_2d9774;
            case 0x2D9778u: goto label_2d9778;
            case 0x2D977Cu: goto label_2d977c;
            case 0x2D9780u: goto label_2d9780;
            case 0x2D9784u: goto label_2d9784;
            case 0x2D9788u: goto label_2d9788;
            case 0x2D978Cu: goto label_2d978c;
            case 0x2D9790u: goto label_2d9790;
            case 0x2D9794u: goto label_2d9794;
            case 0x2D9798u: goto label_2d9798;
            case 0x2D979Cu: goto label_2d979c;
            case 0x2D97A0u: goto label_2d97a0;
            case 0x2D97A4u: goto label_2d97a4;
            case 0x2D97A8u: goto label_2d97a8;
            case 0x2D97ACu: goto label_2d97ac;
            case 0x2D97B0u: goto label_2d97b0;
            case 0x2D97B4u: goto label_2d97b4;
            case 0x2D97B8u: goto label_2d97b8;
            case 0x2D97BCu: goto label_2d97bc;
            case 0x2D97C0u: goto label_2d97c0;
            case 0x2D97C4u: goto label_2d97c4;
            case 0x2D97C8u: goto label_2d97c8;
            case 0x2D97CCu: goto label_2d97cc;
            case 0x2D97D0u: goto label_2d97d0;
            case 0x2D97D4u: goto label_2d97d4;
            case 0x2D97D8u: goto label_2d97d8;
            case 0x2D97DCu: goto label_2d97dc;
            case 0x2D97E0u: goto label_2d97e0;
            case 0x2D97E4u: goto label_2d97e4;
            case 0x2D97E8u: goto label_2d97e8;
            case 0x2D97ECu: goto label_2d97ec;
            case 0x2D97F0u: goto label_2d97f0;
            case 0x2D97F4u: goto label_2d97f4;
            case 0x2D97F8u: goto label_2d97f8;
            case 0x2D97FCu: goto label_2d97fc;
            case 0x2D9800u: goto label_2d9800;
            case 0x2D9804u: goto label_2d9804;
            case 0x2D9808u: goto label_2d9808;
            case 0x2D980Cu: goto label_2d980c;
            case 0x2D9810u: goto label_2d9810;
            case 0x2D9814u: goto label_2d9814;
            case 0x2D9818u: goto label_2d9818;
            case 0x2D981Cu: goto label_2d981c;
            case 0x2D9820u: goto label_2d9820;
            case 0x2D9824u: goto label_2d9824;
            case 0x2D9828u: goto label_2d9828;
            case 0x2D982Cu: goto label_2d982c;
            case 0x2D9830u: goto label_2d9830;
            case 0x2D9834u: goto label_2d9834;
            case 0x2D9838u: goto label_2d9838;
            case 0x2D983Cu: goto label_2d983c;
            case 0x2D9840u: goto label_2d9840;
            case 0x2D9844u: goto label_2d9844;
            case 0x2D9848u: goto label_2d9848;
            case 0x2D984Cu: goto label_2d984c;
            case 0x2D9850u: goto label_2d9850;
            case 0x2D9854u: goto label_2d9854;
            case 0x2D9858u: goto label_2d9858;
            case 0x2D985Cu: goto label_2d985c;
            case 0x2D9860u: goto label_2d9860;
            case 0x2D9864u: goto label_2d9864;
            case 0x2D9868u: goto label_2d9868;
            case 0x2D986Cu: goto label_2d986c;
            case 0x2D9870u: goto label_2d9870;
            case 0x2D9874u: goto label_2d9874;
            case 0x2D9878u: goto label_2d9878;
            case 0x2D987Cu: goto label_2d987c;
            case 0x2D9880u: goto label_2d9880;
            case 0x2D9884u: goto label_2d9884;
            case 0x2D9888u: goto label_2d9888;
            case 0x2D988Cu: goto label_2d988c;
            case 0x2D9890u: goto label_2d9890;
            case 0x2D9894u: goto label_2d9894;
            case 0x2D9898u: goto label_2d9898;
            case 0x2D989Cu: goto label_2d989c;
            case 0x2D98A0u: goto label_2d98a0;
            case 0x2D98A4u: goto label_2d98a4;
            case 0x2D98A8u: goto label_2d98a8;
            case 0x2D98ACu: goto label_2d98ac;
            case 0x2D98B0u: goto label_2d98b0;
            case 0x2D98B4u: goto label_2d98b4;
            case 0x2D98B8u: goto label_2d98b8;
            case 0x2D98BCu: goto label_2d98bc;
            case 0x2D98C0u: goto label_2d98c0;
            case 0x2D98C4u: goto label_2d98c4;
            case 0x2D98C8u: goto label_2d98c8;
            case 0x2D98CCu: goto label_2d98cc;
            case 0x2D98D0u: goto label_2d98d0;
            case 0x2D98D4u: goto label_2d98d4;
            case 0x2D98D8u: goto label_2d98d8;
            case 0x2D98DCu: goto label_2d98dc;
            case 0x2D98E0u: goto label_2d98e0;
            case 0x2D98E4u: goto label_2d98e4;
            case 0x2D98E8u: goto label_2d98e8;
            case 0x2D98ECu: goto label_2d98ec;
            case 0x2D98F0u: goto label_2d98f0;
            case 0x2D98F4u: goto label_2d98f4;
            case 0x2D98F8u: goto label_2d98f8;
            case 0x2D98FCu: goto label_2d98fc;
            case 0x2D9900u: goto label_2d9900;
            case 0x2D9904u: goto label_2d9904;
            case 0x2D9908u: goto label_2d9908;
            case 0x2D990Cu: goto label_2d990c;
            case 0x2D9910u: goto label_2d9910;
            case 0x2D9914u: goto label_2d9914;
            case 0x2D9918u: goto label_2d9918;
            case 0x2D991Cu: goto label_2d991c;
            case 0x2D9920u: goto label_2d9920;
            case 0x2D9924u: goto label_2d9924;
            case 0x2D9928u: goto label_2d9928;
            case 0x2D992Cu: goto label_2d992c;
            case 0x2D9930u: goto label_2d9930;
            case 0x2D9934u: goto label_2d9934;
            case 0x2D9938u: goto label_2d9938;
            case 0x2D993Cu: goto label_2d993c;
            case 0x2D9940u: goto label_2d9940;
            case 0x2D9944u: goto label_2d9944;
            case 0x2D9948u: goto label_2d9948;
            case 0x2D994Cu: goto label_2d994c;
            case 0x2D9950u: goto label_2d9950;
            case 0x2D9954u: goto label_2d9954;
            case 0x2D9958u: goto label_2d9958;
            case 0x2D995Cu: goto label_2d995c;
            case 0x2D9960u: goto label_2d9960;
            case 0x2D9964u: goto label_2d9964;
            case 0x2D9968u: goto label_2d9968;
            case 0x2D996Cu: goto label_2d996c;
            case 0x2D9970u: goto label_2d9970;
            case 0x2D9974u: goto label_2d9974;
            case 0x2D9978u: goto label_2d9978;
            case 0x2D997Cu: goto label_2d997c;
            case 0x2D9980u: goto label_2d9980;
            case 0x2D9984u: goto label_2d9984;
            case 0x2D9988u: goto label_2d9988;
            case 0x2D998Cu: goto label_2d998c;
            case 0x2D9990u: goto label_2d9990;
            case 0x2D9994u: goto label_2d9994;
            case 0x2D9998u: goto label_2d9998;
            case 0x2D999Cu: goto label_2d999c;
            case 0x2D99A0u: goto label_2d99a0;
            case 0x2D99A4u: goto label_2d99a4;
            case 0x2D99A8u: goto label_2d99a8;
            case 0x2D99ACu: goto label_2d99ac;
            case 0x2D99B0u: goto label_2d99b0;
            case 0x2D99B4u: goto label_2d99b4;
            case 0x2D99B8u: goto label_2d99b8;
            case 0x2D99BCu: goto label_2d99bc;
            case 0x2D99C0u: goto label_2d99c0;
            case 0x2D99C4u: goto label_2d99c4;
            case 0x2D99C8u: goto label_2d99c8;
            case 0x2D99CCu: goto label_2d99cc;
            case 0x2D99D0u: goto label_2d99d0;
            case 0x2D99D4u: goto label_2d99d4;
            case 0x2D99D8u: goto label_2d99d8;
            case 0x2D99DCu: goto label_2d99dc;
            case 0x2D99E0u: goto label_2d99e0;
            case 0x2D99E4u: goto label_2d99e4;
            case 0x2D99E8u: goto label_2d99e8;
            case 0x2D99ECu: goto label_2d99ec;
            case 0x2D99F0u: goto label_2d99f0;
            case 0x2D99F4u: goto label_2d99f4;
            case 0x2D99F8u: goto label_2d99f8;
            case 0x2D99FCu: goto label_2d99fc;
            case 0x2D9A00u: goto label_2d9a00;
            case 0x2D9A04u: goto label_2d9a04;
            case 0x2D9A08u: goto label_2d9a08;
            case 0x2D9A0Cu: goto label_2d9a0c;
            case 0x2D9A10u: goto label_2d9a10;
            case 0x2D9A14u: goto label_2d9a14;
            case 0x2D9A18u: goto label_2d9a18;
            case 0x2D9A1Cu: goto label_2d9a1c;
            case 0x2D9A20u: goto label_2d9a20;
            case 0x2D9A24u: goto label_2d9a24;
            case 0x2D9A28u: goto label_2d9a28;
            case 0x2D9A2Cu: goto label_2d9a2c;
            case 0x2D9A30u: goto label_2d9a30;
            case 0x2D9A34u: goto label_2d9a34;
            case 0x2D9A38u: goto label_2d9a38;
            case 0x2D9A3Cu: goto label_2d9a3c;
            case 0x2D9A40u: goto label_2d9a40;
            case 0x2D9A44u: goto label_2d9a44;
            case 0x2D9A48u: goto label_2d9a48;
            case 0x2D9A4Cu: goto label_2d9a4c;
            case 0x2D9A50u: goto label_2d9a50;
            case 0x2D9A54u: goto label_2d9a54;
            case 0x2D9A58u: goto label_2d9a58;
            case 0x2D9A5Cu: goto label_2d9a5c;
            case 0x2D9A60u: goto label_2d9a60;
            case 0x2D9A64u: goto label_2d9a64;
            case 0x2D9A68u: goto label_2d9a68;
            case 0x2D9A6Cu: goto label_2d9a6c;
            case 0x2D9A70u: goto label_2d9a70;
            case 0x2D9A74u: goto label_2d9a74;
            case 0x2D9A78u: goto label_2d9a78;
            case 0x2D9A7Cu: goto label_2d9a7c;
            case 0x2D9A80u: goto label_2d9a80;
            case 0x2D9A84u: goto label_2d9a84;
            case 0x2D9A88u: goto label_2d9a88;
            case 0x2D9A8Cu: goto label_2d9a8c;
            case 0x2D9A90u: goto label_2d9a90;
            case 0x2D9A94u: goto label_2d9a94;
            case 0x2D9A98u: goto label_2d9a98;
            case 0x2D9A9Cu: goto label_2d9a9c;
            case 0x2D9AA0u: goto label_2d9aa0;
            case 0x2D9AA4u: goto label_2d9aa4;
            case 0x2D9AA8u: goto label_2d9aa8;
            case 0x2D9AACu: goto label_2d9aac;
            case 0x2D9AB0u: goto label_2d9ab0;
            case 0x2D9AB4u: goto label_2d9ab4;
            case 0x2D9AB8u: goto label_2d9ab8;
            case 0x2D9ABCu: goto label_2d9abc;
            case 0x2D9AC0u: goto label_2d9ac0;
            case 0x2D9AC4u: goto label_2d9ac4;
            case 0x2D9AC8u: goto label_2d9ac8;
            case 0x2D9ACCu: goto label_2d9acc;
            case 0x2D9AD0u: goto label_2d9ad0;
            case 0x2D9AD4u: goto label_2d9ad4;
            case 0x2D9AD8u: goto label_2d9ad8;
            case 0x2D9ADCu: goto label_2d9adc;
            case 0x2D9AE0u: goto label_2d9ae0;
            case 0x2D9AE4u: goto label_2d9ae4;
            case 0x2D9AE8u: goto label_2d9ae8;
            case 0x2D9AECu: goto label_2d9aec;
            case 0x2D9AF0u: goto label_2d9af0;
            case 0x2D9AF4u: goto label_2d9af4;
            case 0x2D9AF8u: goto label_2d9af8;
            case 0x2D9AFCu: goto label_2d9afc;
            case 0x2D9B00u: goto label_2d9b00;
            case 0x2D9B04u: goto label_2d9b04;
            case 0x2D9B08u: goto label_2d9b08;
            case 0x2D9B0Cu: goto label_2d9b0c;
            case 0x2D9B10u: goto label_2d9b10;
            case 0x2D9B14u: goto label_2d9b14;
            case 0x2D9B18u: goto label_2d9b18;
            case 0x2D9B1Cu: goto label_2d9b1c;
            case 0x2D9B20u: goto label_2d9b20;
            case 0x2D9B24u: goto label_2d9b24;
            case 0x2D9B28u: goto label_2d9b28;
            case 0x2D9B2Cu: goto label_2d9b2c;
            case 0x2D9B30u: goto label_2d9b30;
            case 0x2D9B34u: goto label_2d9b34;
            case 0x2D9B38u: goto label_2d9b38;
            case 0x2D9B3Cu: goto label_2d9b3c;
            case 0x2D9B40u: goto label_2d9b40;
            case 0x2D9B44u: goto label_2d9b44;
            case 0x2D9B48u: goto label_2d9b48;
            case 0x2D9B4Cu: goto label_2d9b4c;
            case 0x2D9B50u: goto label_2d9b50;
            case 0x2D9B54u: goto label_2d9b54;
            case 0x2D9B58u: goto label_2d9b58;
            case 0x2D9B5Cu: goto label_2d9b5c;
            case 0x2D9B60u: goto label_2d9b60;
            case 0x2D9B64u: goto label_2d9b64;
            case 0x2D9B68u: goto label_2d9b68;
            case 0x2D9B6Cu: goto label_2d9b6c;
            case 0x2D9B70u: goto label_2d9b70;
            case 0x2D9B74u: goto label_2d9b74;
            case 0x2D9B78u: goto label_2d9b78;
            case 0x2D9B7Cu: goto label_2d9b7c;
            case 0x2D9B80u: goto label_2d9b80;
            case 0x2D9B84u: goto label_2d9b84;
            case 0x2D9B88u: goto label_2d9b88;
            case 0x2D9B8Cu: goto label_2d9b8c;
            case 0x2D9B90u: goto label_2d9b90;
            case 0x2D9B94u: goto label_2d9b94;
            case 0x2D9B98u: goto label_2d9b98;
            case 0x2D9B9Cu: goto label_2d9b9c;
            case 0x2D9BA0u: goto label_2d9ba0;
            case 0x2D9BA4u: goto label_2d9ba4;
            case 0x2D9BA8u: goto label_2d9ba8;
            case 0x2D9BACu: goto label_2d9bac;
            case 0x2D9BB0u: goto label_2d9bb0;
            case 0x2D9BB4u: goto label_2d9bb4;
            case 0x2D9BB8u: goto label_2d9bb8;
            case 0x2D9BBCu: goto label_2d9bbc;
            case 0x2D9BC0u: goto label_2d9bc0;
            case 0x2D9BC4u: goto label_2d9bc4;
            case 0x2D9BC8u: goto label_2d9bc8;
            case 0x2D9BCCu: goto label_2d9bcc;
            case 0x2D9BD0u: goto label_2d9bd0;
            case 0x2D9BD4u: goto label_2d9bd4;
            case 0x2D9BD8u: goto label_2d9bd8;
            case 0x2D9BDCu: goto label_2d9bdc;
            case 0x2D9BE0u: goto label_2d9be0;
            case 0x2D9BE4u: goto label_2d9be4;
            case 0x2D9BE8u: goto label_2d9be8;
            case 0x2D9BECu: goto label_2d9bec;
            case 0x2D9BF0u: goto label_2d9bf0;
            case 0x2D9BF4u: goto label_2d9bf4;
            case 0x2D9BF8u: goto label_2d9bf8;
            case 0x2D9BFCu: goto label_2d9bfc;
            case 0x2D9C00u: goto label_2d9c00;
            case 0x2D9C04u: goto label_2d9c04;
            case 0x2D9C08u: goto label_2d9c08;
            case 0x2D9C0Cu: goto label_2d9c0c;
            case 0x2D9C10u: goto label_2d9c10;
            case 0x2D9C14u: goto label_2d9c14;
            case 0x2D9C18u: goto label_2d9c18;
            case 0x2D9C1Cu: goto label_2d9c1c;
            case 0x2D9C20u: goto label_2d9c20;
            case 0x2D9C24u: goto label_2d9c24;
            case 0x2D9C28u: goto label_2d9c28;
            case 0x2D9C2Cu: goto label_2d9c2c;
            case 0x2D9C30u: goto label_2d9c30;
            case 0x2D9C34u: goto label_2d9c34;
            case 0x2D9C38u: goto label_2d9c38;
            case 0x2D9C3Cu: goto label_2d9c3c;
            case 0x2D9C40u: goto label_2d9c40;
            case 0x2D9C44u: goto label_2d9c44;
            case 0x2D9C48u: goto label_2d9c48;
            case 0x2D9C4Cu: goto label_2d9c4c;
            case 0x2D9C50u: goto label_2d9c50;
            case 0x2D9C54u: goto label_2d9c54;
            case 0x2D9C58u: goto label_2d9c58;
            case 0x2D9C5Cu: goto label_2d9c5c;
            case 0x2D9C60u: goto label_2d9c60;
            case 0x2D9C64u: goto label_2d9c64;
            case 0x2D9C68u: goto label_2d9c68;
            case 0x2D9C6Cu: goto label_2d9c6c;
            case 0x2D9C70u: goto label_2d9c70;
            case 0x2D9C74u: goto label_2d9c74;
            case 0x2D9C78u: goto label_2d9c78;
            case 0x2D9C7Cu: goto label_2d9c7c;
            case 0x2D9C80u: goto label_2d9c80;
            case 0x2D9C84u: goto label_2d9c84;
            case 0x2D9C88u: goto label_2d9c88;
            case 0x2D9C8Cu: goto label_2d9c8c;
            case 0x2D9C90u: goto label_2d9c90;
            case 0x2D9C94u: goto label_2d9c94;
            case 0x2D9C98u: goto label_2d9c98;
            case 0x2D9C9Cu: goto label_2d9c9c;
            case 0x2D9CA0u: goto label_2d9ca0;
            case 0x2D9CA4u: goto label_2d9ca4;
            case 0x2D9CA8u: goto label_2d9ca8;
            case 0x2D9CACu: goto label_2d9cac;
            case 0x2D9CB0u: goto label_2d9cb0;
            case 0x2D9CB4u: goto label_2d9cb4;
            case 0x2D9CB8u: goto label_2d9cb8;
            case 0x2D9CBCu: goto label_2d9cbc;
            case 0x2D9CC0u: goto label_2d9cc0;
            case 0x2D9CC4u: goto label_2d9cc4;
            case 0x2D9CC8u: goto label_2d9cc8;
            case 0x2D9CCCu: goto label_2d9ccc;
            case 0x2D9CD0u: goto label_2d9cd0;
            case 0x2D9CD4u: goto label_2d9cd4;
            case 0x2D9CD8u: goto label_2d9cd8;
            case 0x2D9CDCu: goto label_2d9cdc;
            case 0x2D9CE0u: goto label_2d9ce0;
            case 0x2D9CE4u: goto label_2d9ce4;
            case 0x2D9CE8u: goto label_2d9ce8;
            case 0x2D9CECu: goto label_2d9cec;
            case 0x2D9CF0u: goto label_2d9cf0;
            case 0x2D9CF4u: goto label_2d9cf4;
            case 0x2D9CF8u: goto label_2d9cf8;
            case 0x2D9CFCu: goto label_2d9cfc;
            case 0x2D9D00u: goto label_2d9d00;
            case 0x2D9D04u: goto label_2d9d04;
            case 0x2D9D08u: goto label_2d9d08;
            case 0x2D9D0Cu: goto label_2d9d0c;
            case 0x2D9D10u: goto label_2d9d10;
            case 0x2D9D14u: goto label_2d9d14;
            case 0x2D9D18u: goto label_2d9d18;
            case 0x2D9D1Cu: goto label_2d9d1c;
            case 0x2D9D20u: goto label_2d9d20;
            case 0x2D9D24u: goto label_2d9d24;
            case 0x2D9D28u: goto label_2d9d28;
            case 0x2D9D2Cu: goto label_2d9d2c;
            case 0x2D9D30u: goto label_2d9d30;
            case 0x2D9D34u: goto label_2d9d34;
            case 0x2D9D38u: goto label_2d9d38;
            case 0x2D9D3Cu: goto label_2d9d3c;
            case 0x2D9D40u: goto label_2d9d40;
            case 0x2D9D44u: goto label_2d9d44;
            case 0x2D9D48u: goto label_2d9d48;
            case 0x2D9D4Cu: goto label_2d9d4c;
            case 0x2D9D50u: goto label_2d9d50;
            case 0x2D9D54u: goto label_2d9d54;
            case 0x2D9D58u: goto label_2d9d58;
            case 0x2D9D5Cu: goto label_2d9d5c;
            case 0x2D9D60u: goto label_2d9d60;
            case 0x2D9D64u: goto label_2d9d64;
            case 0x2D9D68u: goto label_2d9d68;
            case 0x2D9D6Cu: goto label_2d9d6c;
            case 0x2D9D70u: goto label_2d9d70;
            case 0x2D9D74u: goto label_2d9d74;
            case 0x2D9D78u: goto label_2d9d78;
            case 0x2D9D7Cu: goto label_2d9d7c;
            case 0x2D9D80u: goto label_2d9d80;
            case 0x2D9D84u: goto label_2d9d84;
            case 0x2D9D88u: goto label_2d9d88;
            case 0x2D9D8Cu: goto label_2d9d8c;
            case 0x2D9D90u: goto label_2d9d90;
            case 0x2D9D94u: goto label_2d9d94;
            case 0x2D9D98u: goto label_2d9d98;
            case 0x2D9D9Cu: goto label_2d9d9c;
            case 0x2D9DA0u: goto label_2d9da0;
            case 0x2D9DA4u: goto label_2d9da4;
            case 0x2D9DA8u: goto label_2d9da8;
            case 0x2D9DACu: goto label_2d9dac;
            case 0x2D9DB0u: goto label_2d9db0;
            case 0x2D9DB4u: goto label_2d9db4;
            case 0x2D9DB8u: goto label_2d9db8;
            case 0x2D9DBCu: goto label_2d9dbc;
            case 0x2D9DC0u: goto label_2d9dc0;
            case 0x2D9DC4u: goto label_2d9dc4;
            case 0x2D9DC8u: goto label_2d9dc8;
            case 0x2D9DCCu: goto label_2d9dcc;
            case 0x2D9DD0u: goto label_2d9dd0;
            case 0x2D9DD4u: goto label_2d9dd4;
            case 0x2D9DD8u: goto label_2d9dd8;
            case 0x2D9DDCu: goto label_2d9ddc;
            case 0x2D9DE0u: goto label_2d9de0;
            case 0x2D9DE4u: goto label_2d9de4;
            case 0x2D9DE8u: goto label_2d9de8;
            case 0x2D9DECu: goto label_2d9dec;
            case 0x2D9DF0u: goto label_2d9df0;
            case 0x2D9DF4u: goto label_2d9df4;
            case 0x2D9DF8u: goto label_2d9df8;
            case 0x2D9DFCu: goto label_2d9dfc;
            case 0x2D9E00u: goto label_2d9e00;
            case 0x2D9E04u: goto label_2d9e04;
            case 0x2D9E08u: goto label_2d9e08;
            case 0x2D9E0Cu: goto label_2d9e0c;
            case 0x2D9E10u: goto label_2d9e10;
            case 0x2D9E14u: goto label_2d9e14;
            case 0x2D9E18u: goto label_2d9e18;
            case 0x2D9E1Cu: goto label_2d9e1c;
            case 0x2D9E20u: goto label_2d9e20;
            case 0x2D9E24u: goto label_2d9e24;
            case 0x2D9E28u: goto label_2d9e28;
            case 0x2D9E2Cu: goto label_2d9e2c;
            case 0x2D9E30u: goto label_2d9e30;
            case 0x2D9E34u: goto label_2d9e34;
            case 0x2D9E38u: goto label_2d9e38;
            case 0x2D9E3Cu: goto label_2d9e3c;
            case 0x2D9E40u: goto label_2d9e40;
            case 0x2D9E44u: goto label_2d9e44;
            case 0x2D9E48u: goto label_2d9e48;
            case 0x2D9E4Cu: goto label_2d9e4c;
            case 0x2D9E50u: goto label_2d9e50;
            case 0x2D9E54u: goto label_2d9e54;
            case 0x2D9E58u: goto label_2d9e58;
            case 0x2D9E5Cu: goto label_2d9e5c;
            case 0x2D9E60u: goto label_2d9e60;
            case 0x2D9E64u: goto label_2d9e64;
            case 0x2D9E68u: goto label_2d9e68;
            case 0x2D9E6Cu: goto label_2d9e6c;
            case 0x2D9E70u: goto label_2d9e70;
            case 0x2D9E74u: goto label_2d9e74;
            case 0x2D9E78u: goto label_2d9e78;
            case 0x2D9E7Cu: goto label_2d9e7c;
            case 0x2D9E80u: goto label_2d9e80;
            case 0x2D9E84u: goto label_2d9e84;
            case 0x2D9E88u: goto label_2d9e88;
            case 0x2D9E8Cu: goto label_2d9e8c;
            case 0x2D9E90u: goto label_2d9e90;
            case 0x2D9E94u: goto label_2d9e94;
            case 0x2D9E98u: goto label_2d9e98;
            case 0x2D9E9Cu: goto label_2d9e9c;
            case 0x2D9EA0u: goto label_2d9ea0;
            case 0x2D9EA4u: goto label_2d9ea4;
            case 0x2D9EA8u: goto label_2d9ea8;
            case 0x2D9EACu: goto label_2d9eac;
            case 0x2D9EB0u: goto label_2d9eb0;
            case 0x2D9EB4u: goto label_2d9eb4;
            case 0x2D9EB8u: goto label_2d9eb8;
            case 0x2D9EBCu: goto label_2d9ebc;
            case 0x2D9EC0u: goto label_2d9ec0;
            case 0x2D9EC4u: goto label_2d9ec4;
            case 0x2D9EC8u: goto label_2d9ec8;
            case 0x2D9ECCu: goto label_2d9ecc;
            case 0x2D9ED0u: goto label_2d9ed0;
            case 0x2D9ED4u: goto label_2d9ed4;
            case 0x2D9ED8u: goto label_2d9ed8;
            case 0x2D9EDCu: goto label_2d9edc;
            case 0x2D9EE0u: goto label_2d9ee0;
            case 0x2D9EE4u: goto label_2d9ee4;
            case 0x2D9EE8u: goto label_2d9ee8;
            case 0x2D9EECu: goto label_2d9eec;
            case 0x2D9EF0u: goto label_2d9ef0;
            case 0x2D9EF4u: goto label_2d9ef4;
            case 0x2D9EF8u: goto label_2d9ef8;
            case 0x2D9EFCu: goto label_2d9efc;
            case 0x2D9F00u: goto label_2d9f00;
            case 0x2D9F04u: goto label_2d9f04;
            case 0x2D9F08u: goto label_2d9f08;
            case 0x2D9F0Cu: goto label_2d9f0c;
            case 0x2D9F10u: goto label_2d9f10;
            case 0x2D9F14u: goto label_2d9f14;
            case 0x2D9F18u: goto label_2d9f18;
            case 0x2D9F1Cu: goto label_2d9f1c;
            case 0x2D9F20u: goto label_2d9f20;
            case 0x2D9F24u: goto label_2d9f24;
            case 0x2D9F28u: goto label_2d9f28;
            case 0x2D9F2Cu: goto label_2d9f2c;
            case 0x2D9F30u: goto label_2d9f30;
            case 0x2D9F34u: goto label_2d9f34;
            case 0x2D9F38u: goto label_2d9f38;
            case 0x2D9F3Cu: goto label_2d9f3c;
            case 0x2D9F40u: goto label_2d9f40;
            case 0x2D9F44u: goto label_2d9f44;
            case 0x2D9F48u: goto label_2d9f48;
            case 0x2D9F4Cu: goto label_2d9f4c;
            case 0x2D9F50u: goto label_2d9f50;
            case 0x2D9F54u: goto label_2d9f54;
            case 0x2D9F58u: goto label_2d9f58;
            case 0x2D9F5Cu: goto label_2d9f5c;
            case 0x2D9F60u: goto label_2d9f60;
            case 0x2D9F64u: goto label_2d9f64;
            case 0x2D9F68u: goto label_2d9f68;
            case 0x2D9F6Cu: goto label_2d9f6c;
            case 0x2D9F70u: goto label_2d9f70;
            case 0x2D9F74u: goto label_2d9f74;
            case 0x2D9F78u: goto label_2d9f78;
            case 0x2D9F7Cu: goto label_2d9f7c;
            case 0x2D9F80u: goto label_2d9f80;
            case 0x2D9F84u: goto label_2d9f84;
            case 0x2D9F88u: goto label_2d9f88;
            case 0x2D9F8Cu: goto label_2d9f8c;
            case 0x2D9F90u: goto label_2d9f90;
            case 0x2D9F94u: goto label_2d9f94;
            case 0x2D9F98u: goto label_2d9f98;
            case 0x2D9F9Cu: goto label_2d9f9c;
            case 0x2D9FA0u: goto label_2d9fa0;
            case 0x2D9FA4u: goto label_2d9fa4;
            case 0x2D9FA8u: goto label_2d9fa8;
            case 0x2D9FACu: goto label_2d9fac;
            case 0x2D9FB0u: goto label_2d9fb0;
            case 0x2D9FB4u: goto label_2d9fb4;
            case 0x2D9FB8u: goto label_2d9fb8;
            case 0x2D9FBCu: goto label_2d9fbc;
            case 0x2D9FC0u: goto label_2d9fc0;
            case 0x2D9FC4u: goto label_2d9fc4;
            case 0x2D9FC8u: goto label_2d9fc8;
            case 0x2D9FCCu: goto label_2d9fcc;
            case 0x2D9FD0u: goto label_2d9fd0;
            case 0x2D9FD4u: goto label_2d9fd4;
            case 0x2D9FD8u: goto label_2d9fd8;
            case 0x2D9FDCu: goto label_2d9fdc;
            case 0x2D9FE0u: goto label_2d9fe0;
            case 0x2D9FE4u: goto label_2d9fe4;
            case 0x2D9FE8u: goto label_2d9fe8;
            case 0x2D9FECu: goto label_2d9fec;
            case 0x2D9FF0u: goto label_2d9ff0;
            case 0x2D9FF4u: goto label_2d9ff4;
            case 0x2D9FF8u: goto label_2d9ff8;
            case 0x2D9FFCu: goto label_2d9ffc;
            case 0x2DA000u: goto label_2da000;
            case 0x2DA004u: goto label_2da004;
            case 0x2DA008u: goto label_2da008;
            case 0x2DA00Cu: goto label_2da00c;
            case 0x2DA010u: goto label_2da010;
            case 0x2DA014u: goto label_2da014;
            case 0x2DA018u: goto label_2da018;
            case 0x2DA01Cu: goto label_2da01c;
            case 0x2DA020u: goto label_2da020;
            case 0x2DA024u: goto label_2da024;
            case 0x2DA028u: goto label_2da028;
            case 0x2DA02Cu: goto label_2da02c;
            case 0x2DA030u: goto label_2da030;
            case 0x2DA034u: goto label_2da034;
            case 0x2DA038u: goto label_2da038;
            case 0x2DA03Cu: goto label_2da03c;
            case 0x2DA040u: goto label_2da040;
            case 0x2DA044u: goto label_2da044;
            case 0x2DA048u: goto label_2da048;
            case 0x2DA04Cu: goto label_2da04c;
            case 0x2DA050u: goto label_2da050;
            case 0x2DA054u: goto label_2da054;
            case 0x2DA058u: goto label_2da058;
            case 0x2DA05Cu: goto label_2da05c;
            case 0x2DA060u: goto label_2da060;
            case 0x2DA064u: goto label_2da064;
            case 0x2DA068u: goto label_2da068;
            case 0x2DA06Cu: goto label_2da06c;
            case 0x2DA070u: goto label_2da070;
            case 0x2DA074u: goto label_2da074;
            case 0x2DA078u: goto label_2da078;
            case 0x2DA07Cu: goto label_2da07c;
            case 0x2DA080u: goto label_2da080;
            case 0x2DA084u: goto label_2da084;
            case 0x2DA088u: goto label_2da088;
            case 0x2DA08Cu: goto label_2da08c;
            case 0x2DA090u: goto label_2da090;
            case 0x2DA094u: goto label_2da094;
            case 0x2DA098u: goto label_2da098;
            case 0x2DA09Cu: goto label_2da09c;
            case 0x2DA0A0u: goto label_2da0a0;
            case 0x2DA0A4u: goto label_2da0a4;
            case 0x2DA0A8u: goto label_2da0a8;
            case 0x2DA0ACu: goto label_2da0ac;
            case 0x2DA0B0u: goto label_2da0b0;
            case 0x2DA0B4u: goto label_2da0b4;
            case 0x2DA0B8u: goto label_2da0b8;
            case 0x2DA0BCu: goto label_2da0bc;
            case 0x2DA0C0u: goto label_2da0c0;
            case 0x2DA0C4u: goto label_2da0c4;
            case 0x2DA0C8u: goto label_2da0c8;
            case 0x2DA0CCu: goto label_2da0cc;
            case 0x2DA0D0u: goto label_2da0d0;
            case 0x2DA0D4u: goto label_2da0d4;
            case 0x2DA0D8u: goto label_2da0d8;
            case 0x2DA0DCu: goto label_2da0dc;
            case 0x2DA0E0u: goto label_2da0e0;
            case 0x2DA0E4u: goto label_2da0e4;
            case 0x2DA0E8u: goto label_2da0e8;
            case 0x2DA0ECu: goto label_2da0ec;
            case 0x2DA0F0u: goto label_2da0f0;
            case 0x2DA0F4u: goto label_2da0f4;
            case 0x2DA0F8u: goto label_2da0f8;
            case 0x2DA0FCu: goto label_2da0fc;
            case 0x2DA100u: goto label_2da100;
            case 0x2DA104u: goto label_2da104;
            case 0x2DA108u: goto label_2da108;
            case 0x2DA10Cu: goto label_2da10c;
            case 0x2DA110u: goto label_2da110;
            case 0x2DA114u: goto label_2da114;
            case 0x2DA118u: goto label_2da118;
            case 0x2DA11Cu: goto label_2da11c;
            case 0x2DA120u: goto label_2da120;
            case 0x2DA124u: goto label_2da124;
            case 0x2DA128u: goto label_2da128;
            case 0x2DA12Cu: goto label_2da12c;
            case 0x2DA130u: goto label_2da130;
            case 0x2DA134u: goto label_2da134;
            case 0x2DA138u: goto label_2da138;
            case 0x2DA13Cu: goto label_2da13c;
            case 0x2DA140u: goto label_2da140;
            case 0x2DA144u: goto label_2da144;
            case 0x2DA148u: goto label_2da148;
            case 0x2DA14Cu: goto label_2da14c;
            case 0x2DA150u: goto label_2da150;
            case 0x2DA154u: goto label_2da154;
            case 0x2DA158u: goto label_2da158;
            case 0x2DA15Cu: goto label_2da15c;
            case 0x2DA160u: goto label_2da160;
            case 0x2DA164u: goto label_2da164;
            case 0x2DA168u: goto label_2da168;
            case 0x2DA16Cu: goto label_2da16c;
            case 0x2DA170u: goto label_2da170;
            case 0x2DA174u: goto label_2da174;
            case 0x2DA178u: goto label_2da178;
            case 0x2DA17Cu: goto label_2da17c;
            case 0x2DA180u: goto label_2da180;
            case 0x2DA184u: goto label_2da184;
            case 0x2DA188u: goto label_2da188;
            case 0x2DA18Cu: goto label_2da18c;
            case 0x2DA190u: goto label_2da190;
            case 0x2DA194u: goto label_2da194;
            case 0x2DA198u: goto label_2da198;
            case 0x2DA19Cu: goto label_2da19c;
            case 0x2DA1A0u: goto label_2da1a0;
            case 0x2DA1A4u: goto label_2da1a4;
            case 0x2DA1A8u: goto label_2da1a8;
            case 0x2DA1ACu: goto label_2da1ac;
            case 0x2DA1B0u: goto label_2da1b0;
            case 0x2DA1B4u: goto label_2da1b4;
            case 0x2DA1B8u: goto label_2da1b8;
            case 0x2DA1BCu: goto label_2da1bc;
            case 0x2DA1C0u: goto label_2da1c0;
            case 0x2DA1C4u: goto label_2da1c4;
            case 0x2DA1C8u: goto label_2da1c8;
            case 0x2DA1CCu: goto label_2da1cc;
            case 0x2DA1D0u: goto label_2da1d0;
            case 0x2DA1D4u: goto label_2da1d4;
            case 0x2DA1D8u: goto label_2da1d8;
            case 0x2DA1DCu: goto label_2da1dc;
            case 0x2DA1E0u: goto label_2da1e0;
            case 0x2DA1E4u: goto label_2da1e4;
            case 0x2DA1E8u: goto label_2da1e8;
            case 0x2DA1ECu: goto label_2da1ec;
            case 0x2DA1F0u: goto label_2da1f0;
            case 0x2DA1F4u: goto label_2da1f4;
            case 0x2DA1F8u: goto label_2da1f8;
            case 0x2DA1FCu: goto label_2da1fc;
            case 0x2DA200u: goto label_2da200;
            case 0x2DA204u: goto label_2da204;
            case 0x2DA208u: goto label_2da208;
            case 0x2DA20Cu: goto label_2da20c;
            case 0x2DA210u: goto label_2da210;
            case 0x2DA214u: goto label_2da214;
            case 0x2DA218u: goto label_2da218;
            case 0x2DA21Cu: goto label_2da21c;
            case 0x2DA220u: goto label_2da220;
            case 0x2DA224u: goto label_2da224;
            case 0x2DA228u: goto label_2da228;
            case 0x2DA22Cu: goto label_2da22c;
            case 0x2DA230u: goto label_2da230;
            case 0x2DA234u: goto label_2da234;
            case 0x2DA238u: goto label_2da238;
            case 0x2DA23Cu: goto label_2da23c;
            case 0x2DA240u: goto label_2da240;
            case 0x2DA244u: goto label_2da244;
            case 0x2DA248u: goto label_2da248;
            case 0x2DA24Cu: goto label_2da24c;
            case 0x2DA250u: goto label_2da250;
            case 0x2DA254u: goto label_2da254;
            case 0x2DA258u: goto label_2da258;
            case 0x2DA25Cu: goto label_2da25c;
            case 0x2DA260u: goto label_2da260;
            case 0x2DA264u: goto label_2da264;
            case 0x2DA268u: goto label_2da268;
            case 0x2DA26Cu: goto label_2da26c;
            case 0x2DA270u: goto label_2da270;
            case 0x2DA274u: goto label_2da274;
            case 0x2DA278u: goto label_2da278;
            case 0x2DA27Cu: goto label_2da27c;
            case 0x2DA280u: goto label_2da280;
            case 0x2DA284u: goto label_2da284;
            case 0x2DA288u: goto label_2da288;
            case 0x2DA28Cu: goto label_2da28c;
            case 0x2DA290u: goto label_2da290;
            case 0x2DA294u: goto label_2da294;
            case 0x2DA298u: goto label_2da298;
            case 0x2DA29Cu: goto label_2da29c;
            case 0x2DA2A0u: goto label_2da2a0;
            case 0x2DA2A4u: goto label_2da2a4;
            case 0x2DA2A8u: goto label_2da2a8;
            case 0x2DA2ACu: goto label_2da2ac;
            case 0x2DA2B0u: goto label_2da2b0;
            case 0x2DA2B4u: goto label_2da2b4;
            case 0x2DA2B8u: goto label_2da2b8;
            case 0x2DA2BCu: goto label_2da2bc;
            case 0x2DA2C0u: goto label_2da2c0;
            case 0x2DA2C4u: goto label_2da2c4;
            case 0x2DA2C8u: goto label_2da2c8;
            case 0x2DA2CCu: goto label_2da2cc;
            case 0x2DA2D0u: goto label_2da2d0;
            case 0x2DA2D4u: goto label_2da2d4;
            case 0x2DA2D8u: goto label_2da2d8;
            case 0x2DA2DCu: goto label_2da2dc;
            case 0x2DA2E0u: goto label_2da2e0;
            case 0x2DA2E4u: goto label_2da2e4;
            case 0x2DA2E8u: goto label_2da2e8;
            case 0x2DA2ECu: goto label_2da2ec;
            case 0x2DA2F0u: goto label_2da2f0;
            case 0x2DA2F4u: goto label_2da2f4;
            case 0x2DA2F8u: goto label_2da2f8;
            case 0x2DA2FCu: goto label_2da2fc;
            case 0x2DA300u: goto label_2da300;
            case 0x2DA304u: goto label_2da304;
            case 0x2DA308u: goto label_2da308;
            case 0x2DA30Cu: goto label_2da30c;
            case 0x2DA310u: goto label_2da310;
            case 0x2DA314u: goto label_2da314;
            case 0x2DA318u: goto label_2da318;
            case 0x2DA31Cu: goto label_2da31c;
            case 0x2DA320u: goto label_2da320;
            case 0x2DA324u: goto label_2da324;
            case 0x2DA328u: goto label_2da328;
            case 0x2DA32Cu: goto label_2da32c;
            case 0x2DA330u: goto label_2da330;
            case 0x2DA334u: goto label_2da334;
            case 0x2DA338u: goto label_2da338;
            case 0x2DA33Cu: goto label_2da33c;
            case 0x2DA340u: goto label_2da340;
            case 0x2DA344u: goto label_2da344;
            case 0x2DA348u: goto label_2da348;
            case 0x2DA34Cu: goto label_2da34c;
            case 0x2DA350u: goto label_2da350;
            case 0x2DA354u: goto label_2da354;
            case 0x2DA358u: goto label_2da358;
            case 0x2DA35Cu: goto label_2da35c;
            case 0x2DA360u: goto label_2da360;
            case 0x2DA364u: goto label_2da364;
            case 0x2DA368u: goto label_2da368;
            case 0x2DA36Cu: goto label_2da36c;
            case 0x2DA370u: goto label_2da370;
            case 0x2DA374u: goto label_2da374;
            case 0x2DA378u: goto label_2da378;
            case 0x2DA37Cu: goto label_2da37c;
            case 0x2DA380u: goto label_2da380;
            case 0x2DA384u: goto label_2da384;
            case 0x2DA388u: goto label_2da388;
            case 0x2DA38Cu: goto label_2da38c;
            case 0x2DA390u: goto label_2da390;
            case 0x2DA394u: goto label_2da394;
            case 0x2DA398u: goto label_2da398;
            case 0x2DA39Cu: goto label_2da39c;
            case 0x2DA3A0u: goto label_2da3a0;
            case 0x2DA3A4u: goto label_2da3a4;
            case 0x2DA3A8u: goto label_2da3a8;
            case 0x2DA3ACu: goto label_2da3ac;
            case 0x2DA3B0u: goto label_2da3b0;
            case 0x2DA3B4u: goto label_2da3b4;
            case 0x2DA3B8u: goto label_2da3b8;
            case 0x2DA3BCu: goto label_2da3bc;
            case 0x2DA3C0u: goto label_2da3c0;
            case 0x2DA3C4u: goto label_2da3c4;
            case 0x2DA3C8u: goto label_2da3c8;
            case 0x2DA3CCu: goto label_2da3cc;
            case 0x2DA3D0u: goto label_2da3d0;
            case 0x2DA3D4u: goto label_2da3d4;
            case 0x2DA3D8u: goto label_2da3d8;
            case 0x2DA3DCu: goto label_2da3dc;
            case 0x2DA3E0u: goto label_2da3e0;
            case 0x2DA3E4u: goto label_2da3e4;
            case 0x2DA3E8u: goto label_2da3e8;
            case 0x2DA3ECu: goto label_2da3ec;
            case 0x2DA3F0u: goto label_2da3f0;
            case 0x2DA3F4u: goto label_2da3f4;
            case 0x2DA3F8u: goto label_2da3f8;
            case 0x2DA3FCu: goto label_2da3fc;
            case 0x2DA400u: goto label_2da400;
            case 0x2DA404u: goto label_2da404;
            case 0x2DA408u: goto label_2da408;
            case 0x2DA40Cu: goto label_2da40c;
            case 0x2DA410u: goto label_2da410;
            case 0x2DA414u: goto label_2da414;
            case 0x2DA418u: goto label_2da418;
            case 0x2DA41Cu: goto label_2da41c;
            case 0x2DA420u: goto label_2da420;
            case 0x2DA424u: goto label_2da424;
            case 0x2DA428u: goto label_2da428;
            case 0x2DA42Cu: goto label_2da42c;
            case 0x2DA430u: goto label_2da430;
            case 0x2DA434u: goto label_2da434;
            case 0x2DA438u: goto label_2da438;
            case 0x2DA43Cu: goto label_2da43c;
            case 0x2DA440u: goto label_2da440;
            case 0x2DA444u: goto label_2da444;
            case 0x2DA448u: goto label_2da448;
            case 0x2DA44Cu: goto label_2da44c;
            case 0x2DA450u: goto label_2da450;
            case 0x2DA454u: goto label_2da454;
            case 0x2DA458u: goto label_2da458;
            case 0x2DA45Cu: goto label_2da45c;
            case 0x2DA460u: goto label_2da460;
            case 0x2DA464u: goto label_2da464;
            case 0x2DA468u: goto label_2da468;
            case 0x2DA46Cu: goto label_2da46c;
            case 0x2DA470u: goto label_2da470;
            case 0x2DA474u: goto label_2da474;
            case 0x2DA478u: goto label_2da478;
            case 0x2DA47Cu: goto label_2da47c;
            case 0x2DA480u: goto label_2da480;
            case 0x2DA484u: goto label_2da484;
            case 0x2DA488u: goto label_2da488;
            case 0x2DA48Cu: goto label_2da48c;
            case 0x2DA490u: goto label_2da490;
            case 0x2DA494u: goto label_2da494;
            case 0x2DA498u: goto label_2da498;
            case 0x2DA5E8u:  // inflate_codes: call recompiled directly, then return (pc=2da15c) so stream[0] isn't overwritten at 2da144
                {
                    static int s_blocksCodesPath3 = 0;
                    if (s_blocksCodesPath3++ < 30) {
                        const uint32_t strm = GPR_U32(ctx, 18);
                        std::cerr << "[inflate_blocks] BEFORE inflate_codes(path3) #" << s_blocksCodesPath3 << " reg17=0x" << std::hex << GPR_U32(ctx, 17) << " reg18=0x" << strm;
                        if (strm) std::cerr << " strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4));
                        std::cerr << std::dec << "\n";
                    }
                    inflate_codes_0x2da5e8(rdram, ctx, runtime);
                    if (s_blocksCodesPath3 <= 30) {
                        const uint32_t strm = GPR_U32(ctx, 18);
                        std::cerr << "[inflate_blocks] AFTER inflate_codes(path3) reg2=0x" << std::hex << GPR_U32(ctx, 2);
                        if (strm) std::cerr << " strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4));
                        std::cerr << std::dec << "\n";
                    }
                }
                ctx->pc = 0x2DA15Cu;
                return;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA108u; }
            if (ctx->pc != 0x2DA108u) { return; }
        }
    }
    ctx->pc = 0x2DA108u;
label_2da108:
    // 0x2da108: 0xae30000c
    ctx->pc = 0x2da108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_2da10c:
    // 0x2da10c: 0x8fa20018
    ctx->pc = 0x2da10cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2da110:
    // 0x2da110: 0xae220004
    ctx->pc = 0x2da110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2da114:
    // 0x2da114: 0x8fa2001c
    ctx->pc = 0x2da114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2da118:
    // 0x2da118: 0xae220008
    ctx->pc = 0x2da118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2da11c:
    // 0x2da11c: 0x24020006
    ctx->pc = 0x2da11cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2da120:
    // 0x2da120: 0xae220000
    ctx->pc = 0x2da120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2da124:
    // 0x2da124: 0xae340020
    ctx->pc = 0x2da124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da128:
    // 0x2da128: 0xae33001c
    ctx->pc = 0x2da128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da12c:
    // 0x2da12c: 0xae570004
    ctx->pc = 0x2da12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2da130:
    // 0x2da130: 0x8e420000
    ctx->pc = 0x2da130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da134:
    // 0x2da134: 0x2a21023
    ctx->pc = 0x2da134u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da138:
    // 0x2da138: 0x8e430008
    ctx->pc = 0x2da138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da13c:
    // 0x2da13c: 0x431021
    ctx->pc = 0x2da13cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da140:
    // 0x2da140: 0xae420008
    ctx->pc = 0x2da140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da144:
    // 0x2da144: 0xae550000
    ctx->pc = 0x2da144u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da148:
    // 0x2da148: 0xae3e0030
    ctx->pc = 0x2da148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da14c:
    // 0x2da14c: 0x220202d
    ctx->pc = 0x2da14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da150:
    // 0x2da150: 0x240282d
    ctx->pc = 0x2da150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da154:
    // 0x2da154: 0xc0b697a
label_2da158:
    if (ctx->pc == 0x2DA158u) {
        ctx->pc = 0x2DA158u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA15Cu;
        goto label_2da15c;
    }
    ctx->pc = 0x2DA154u;
    SET_GPR_U32(ctx, 31, 0x2DA15Cu);
    ctx->pc = 0x2DA158u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2DA5E8u;
    {
        static int s_blocksCodesCall = 0;
        if (s_blocksCodesCall++ < 30) {
            const uint32_t strm = GPR_U32(ctx, 18);
            std::cerr << "[inflate_blocks] BEFORE inflate_codes(path1) #" << s_blocksCodesCall << " reg17=0x" << std::hex << GPR_U32(ctx, 17)
                      << " reg18=0x" << strm;
            if (strm) std::cerr << " strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4)) << " strm+8=0x" << READ32(ADD32(strm, 8));
            std::cerr << std::dec << "\n";
        }
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_0x2da5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA15Cu; }
    }
    if (ctx->pc != 0x2DA15Cu) { return; }
    ctx->pc = 0x2DA15Cu;
    {
        static int s_blocksCodesRet = 0;
        if (s_blocksCodesRet++ < 30) {
            const uint32_t strm = GPR_U32(ctx, 18);
            std::cerr << "[inflate_blocks] AFTER inflate_codes(path1) #" << s_blocksCodesRet << " reg2=0x" << std::hex << GPR_U32(ctx, 2)
                      << " reg17=0x" << GPR_U32(ctx, 17) << " reg18=0x" << strm;
            if (strm) std::cerr << " strm+0=0x" << READ32(ADD32(strm, 0)) << " strm+4=0x" << READ32(ADD32(strm, 4));
            std::cerr << std::dec << "\n";
        }
    }
label_2da15c:
    // 0x2da15c: 0xafa20020
    ctx->pc = 0x2da15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2da160:
    // 0x2da160: 0x24020001
    ctx->pc = 0x2da160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2da164:
    // 0x2da164: 0x8fa30020
    ctx->pc = 0x2da164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2da168:
    // 0x2da168: 0x10620004
label_2da16c:
    if (ctx->pc == 0x2DA16Cu) {
        ctx->pc = 0x2DA16Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA170u;
        goto label_2da170;
    }
    ctx->pc = 0x2DA168u;
    {
        const bool branch_taken_0x2da168 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DA16Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2da168) {
            ctx->pc = 0x2DA17Cu;
            goto label_2da17c;
        }
    }
    ctx->pc = 0x2DA170u;
label_2da170:
    // 0x2da170: 0x240282d
    ctx->pc = 0x2da170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da174:
    // 0x2da174: 0x100000bb
label_2da178:
    if (ctx->pc == 0x2DA178u) {
        ctx->pc = 0x2DA178u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA17Cu;
        goto label_2da17c;
    }
    ctx->pc = 0x2DA174u;
    {
        const bool branch_taken_0x2da174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA178u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2da174) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA17Cu;
label_2da17c:
    // 0x2da17c: 0xafa00020
    ctx->pc = 0x2da17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2da180:
    // 0x2da180: 0x8e24000c
    ctx->pc = 0x2da180u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2da184:
    // 0x2da184: 0xc0b6bb2
label_2da188:
    if (ctx->pc == 0x2DA188u) {
        ctx->pc = 0x2DA188u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA18Cu;
        goto label_2da18c;
    }
    ctx->pc = 0x2DA184u;
    SET_GPR_U32(ctx, 31, 0x2DA18Cu);
    ctx->pc = 0x2DA188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DAEC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_free_0x2daec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA18Cu; }
    }
    if (ctx->pc != 0x2DA18Cu) { return; }
    ctx->pc = 0x2DA18Cu;
label_2da18c:
    // 0x2da18c: 0x8e240008
    ctx->pc = 0x2da18cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2da190:
    // 0x2da190: 0xc0b6f98
label_2da194:
    if (ctx->pc == 0x2DA194u) {
        ctx->pc = 0x2DA194u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA198u;
        goto label_2da198;
    }
    ctx->pc = 0x2DA190u;
    SET_GPR_U32(ctx, 31, 0x2DA198u);
    ctx->pc = 0x2DA194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA198u; }
    }
    if (ctx->pc != 0x2DA198u) { return; }
    ctx->pc = 0x2DA198u;
label_2da198:
    // 0x2da198: 0x8e240004
    ctx->pc = 0x2da198u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2da19c:
    // 0x2da19c: 0xc0b6f98
label_2da1a0:
    if (ctx->pc == 0x2DA1A0u) {
        ctx->pc = 0x2DA1A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1A4u;
        goto label_2da1a4;
    }
    ctx->pc = 0x2DA19Cu;
    SET_GPR_U32(ctx, 31, 0x2DA1A4u);
    ctx->pc = 0x2DA1A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA1A4u; }
    }
    if (ctx->pc != 0x2DA1A4u) { return; }
    ctx->pc = 0x2DA1A4u;
label_2da1a4:
    // 0x2da1a4: 0x8e550000
    ctx->pc = 0x2da1a4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da1a8:
    // 0x2da1a8: 0x8e570004
    ctx->pc = 0x2da1a8u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2da1ac:
    // 0x2da1ac: 0x8e340020
    ctx->pc = 0x2da1acu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2da1b0:
    // 0x2da1b0: 0x8e3e0030
    ctx->pc = 0x2da1b0u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2da1b4:
    // 0x2da1b4: 0x8e23002c
    ctx->pc = 0x2da1b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2da1b8:
    // 0x2da1b8: 0x3c3102b
    ctx->pc = 0x2da1b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2da1bc:
    // 0x2da1bc: 0x10400004
label_2da1c0:
    if (ctx->pc == 0x2DA1C0u) {
        ctx->pc = 0x2DA1C0u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2DA1C4u;
        goto label_2da1c4;
    }
    ctx->pc = 0x2DA1BCu;
    {
        const bool branch_taken_0x2da1bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA1C0u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x2da1bc) {
            ctx->pc = 0x2DA1D0u;
            goto label_2da1d0;
        }
    }
    ctx->pc = 0x2DA1C4u;
label_2da1c4:
    // 0x2da1c4: 0x7eb023
    ctx->pc = 0x2da1c4u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_2da1c8:
    // 0x2da1c8: 0x10000003
label_2da1cc:
    if (ctx->pc == 0x2DA1CCu) {
        ctx->pc = 0x2DA1CCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x2DA1D0u;
        goto label_2da1d0;
    }
    ctx->pc = 0x2DA1C8u;
    {
        const bool branch_taken_0x2da1c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA1CCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
        if (branch_taken_0x2da1c8) {
            ctx->pc = 0x2DA1D8u;
            goto label_2da1d8;
        }
    }
    ctx->pc = 0x2DA1D0u;
label_2da1d0:
    // 0x2da1d0: 0x8e220028
    ctx->pc = 0x2da1d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2da1d4:
    // 0x2da1d4: 0x5eb023
    ctx->pc = 0x2da1d4u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2da1d8:
    // 0x2da1d8: 0x8e220018
    ctx->pc = 0x2da1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2da1dc:
    // 0x2da1dc: 0x14400003
label_2da1e0:
    if (ctx->pc == 0x2DA1E0u) {
        ctx->pc = 0x2DA1E0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x2DA1E4u;
        goto label_2da1e4;
    }
    ctx->pc = 0x2DA1DCu;
    {
        const bool branch_taken_0x2da1dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA1E0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 8));
        if (branch_taken_0x2da1dc) {
            ctx->pc = 0x2DA1ECu;
            goto label_2da1ec;
        }
    }
    ctx->pc = 0x2DA1E4u;
label_2da1e4:
    // 0x2da1e4: 0x1000fd60
label_2da1e8:
    if (ctx->pc == 0x2DA1E8u) {
        ctx->pc = 0x2DA1E8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2DA1ECu;
        goto label_2da1ec;
    }
    ctx->pc = 0x2DA1E4u;
    {
        const bool branch_taken_0x2da1e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA1E8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2da1e4) {
            ctx->pc = 0x2D9768u;
            goto label_2d9768;
        }
    }
    ctx->pc = 0x2DA1ECu;
label_2da1ec:
    // 0x2da1ec: 0x14400004
label_2da1f0:
    if (ctx->pc == 0x2DA1F0u) {
        ctx->pc = 0x2DA1F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2DA1F4u;
        goto label_2da1f4;
    }
    ctx->pc = 0x2DA1ECu;
    {
        const bool branch_taken_0x2da1ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DA1F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2da1ec) {
            ctx->pc = 0x2DA200u;
            goto label_2da200;
        }
    }
    ctx->pc = 0x2DA1F4u;
label_2da1f4:
    // 0x2da1f4: 0x2673fff8
    ctx->pc = 0x2da1f4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967288));
label_2da1f8:
    // 0x2da1f8: 0x26f70001
    ctx->pc = 0x2da1f8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_2da1fc:
    // 0x2da1fc: 0x26b5ffff
    ctx->pc = 0x2da1fcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_2da200:
    // 0x2da200: 0xae220000
    ctx->pc = 0x2da200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2da204:
    // 0x2da204: 0xae3e0030
    ctx->pc = 0x2da204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da208:
    // 0x2da208: 0x220202d
    ctx->pc = 0x2da208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da20c:
    // 0x2da20c: 0x240282d
    ctx->pc = 0x2da20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da210:
    // 0x2da210: 0xc0b6cac
label_2da214:
    if (ctx->pc == 0x2DA214u) {
        ctx->pc = 0x2DA214u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA218u;
        goto label_2da218;
    }
    ctx->pc = 0x2DA210u;
    SET_GPR_U32(ctx, 31, 0x2DA218u);
    ctx->pc = 0x2DA214u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2DB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x2db2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA218u; }
    }
    if (ctx->pc != 0x2DA218u) { return; }
    ctx->pc = 0x2DA218u;
label_2da218:
    // 0x2da218: 0xafa20020
    ctx->pc = 0x2da218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2da21c:
    // 0x2da21c: 0x8e22002c
    ctx->pc = 0x2da21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2da220:
    // 0x2da220: 0x8e23002c
    ctx->pc = 0x2da220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2da224:
    // 0x2da224: 0x8e220030
    ctx->pc = 0x2da224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2da228:
    // 0x2da228: 0x1062000f
label_2da22c:
    if (ctx->pc == 0x2DA22Cu) {
        ctx->pc = 0x2DA22Cu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2DA230u;
        goto label_2da230;
    }
    ctx->pc = 0x2DA228u;
    {
        const bool branch_taken_0x2da228 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DA22Cu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 17), 48)));
        if (branch_taken_0x2da228) {
            ctx->pc = 0x2DA268u;
            goto label_2da268;
        }
    }
    ctx->pc = 0x2DA230u;
label_2da230:
    // 0x2da230: 0xae340020
    // Don't overwrite blocks+32 (next_in) with invalid reg20 when coming from first-switch path
    ctx->pc = 0x2da230u;
    {
        const uint32_t r20 = GPR_U32(ctx, 20);
        if (r20 >= 0x10000u)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), r20);
    }
label_2da234:
    // 0x2da234: 0xae33001c
    ctx->pc = 0x2da234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da238:
    // 0x2da238: 0xae570004
    ctx->pc = 0x2da238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2da23c:
    // 0x2da23c: 0x8e420000
    ctx->pc = 0x2da23cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da240:
    // 0x2da240: 0x2a21023
    ctx->pc = 0x2da240u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da244:
    // 0x2da244: 0x8e430008
    ctx->pc = 0x2da244u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da248:
    // 0x2da248: 0x431021
    ctx->pc = 0x2da248u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da24c:
    // 0x2da24c: 0xae420008
    ctx->pc = 0x2da24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da250:
    // 0x2da250: 0xae550000
    // Write next_in to stream[0]. Only write when we have a valid pointer; never write 0xb etc.
    ctx->pc = 0x2da250u;
    {
        const uint32_t r21 = GPR_U32(ctx, 21);
        const uint32_t blocks_next_in = READ32(ADD32(GPR_U32(ctx, 17), 32));
        const uint32_t next_in = (r21 >= 0x10000u) ? r21 : blocks_next_in;
        if (next_in >= 0x10000u)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), next_in);
    }
label_2da254:
    // 0x2da254: 0xae3e0030
    ctx->pc = 0x2da254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da258:
    // 0x2da258: 0x220202d
    ctx->pc = 0x2da258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da25c:
    // 0x2da25c: 0x240282d
    ctx->pc = 0x2da25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da260:
    // 0x2da260: 0x10000080
label_2da264:
    if (ctx->pc == 0x2DA264u) {
        ctx->pc = 0x2DA264u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA268u;
        goto label_2da268;
    }
    ctx->pc = 0x2DA260u;
    {
        const bool branch_taken_0x2da260 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA264u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2da260) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA268u;
label_2da268:
    // 0x2da268: 0x24020008
    ctx->pc = 0x2da268u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2da26c:
    // 0x2da26c: 0xae220000 — do not overwrite state+0 (or z+0 if aliased) with small value 8
    ctx->pc = 0x2da26cu;
    { const uint32_t r2 = GPR_U32(ctx, 2); if (r2 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 17), 0), r2); }
label_2da270:
    // 0x2da270: 0xae340020
    ctx->pc = 0x2da270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da274:
    // 0x2da274: 0xae33001c
    ctx->pc = 0x2da274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da278:
    // 0x2da278: 0xae570004
    ctx->pc = 0x2da278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2da27c:
    // 0x2da27c: 0x8e420000
    ctx->pc = 0x2da27cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da280:
    // 0x2da280: 0x2a21023
    ctx->pc = 0x2da280u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da284:
    // 0x2da284: 0x8e430008
    ctx->pc = 0x2da284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da288:
    // 0x2da288: 0x431021
    ctx->pc = 0x2da288u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da28c:
    // 0x2da28c: 0xae420008
    ctx->pc = 0x2da28cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da290:
    // 0x2da290: 0xae550000 — same guard: only write next_in when valid
    ctx->pc = 0x2da290u;
    {
        const uint32_t r21 = GPR_U32(ctx, 21);
        if (r21 >= 0x10000u)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21);
    }
label_2da294:
    // 0x2da294: 0xae3e0030
    ctx->pc = 0x2da294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da298:
    // 0x2da298: 0x220202d
    ctx->pc = 0x2da298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da29c:
    // 0x2da29c: 0x240282d
    ctx->pc = 0x2da29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da2a0:
    // 0x2da2a0: 0x10000070
label_2da2a4:
    if (ctx->pc == 0x2DA2A4u) {
        ctx->pc = 0x2DA2A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DA2A8u;
        goto label_2da2a8;
    }
    ctx->pc = 0x2DA2A0u;
    {
        const bool branch_taken_0x2da2a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA2A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2da2a0) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA2A8u;
label_2da2a8:
    // 0x2da2a8: 0xae340020
    ctx->pc = 0x2da2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da2ac:
    // 0x2da2ac: 0xae33001c
    ctx->pc = 0x2da2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da2b0:
    // 0x2da2b0: 0xae570004
    ctx->pc = 0x2da2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2da2b4:
    // 0x2da2b4: 0x8e420000
    ctx->pc = 0x2da2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da2b8:
    // 0x2da2b8: 0x2a21023
    ctx->pc = 0x2da2b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da2bc:
    // 0x2da2bc: 0x8e430008
    ctx->pc = 0x2da2bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da2c0:
    // 0x2da2c0: 0x431021
    ctx->pc = 0x2da2c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da2c4:
    // 0x2da2c4: 0xae420008
    ctx->pc = 0x2da2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da2c8:
    // 0x2da2c8: 0xae550000 — only write next_in when valid pointer
    ctx->pc = 0x2da2c8u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da2cc:
    // 0x2da2cc: 0xae3e0030
    ctx->pc = 0x2da2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da2d0:
    // 0x2da2d0: 0x220202d
    ctx->pc = 0x2da2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da2d4:
    // 0x2da2d4: 0x240282d
    ctx->pc = 0x2da2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da2d8:
    // 0x2da2d8: 0x10000062
label_2da2dc:
    if (ctx->pc == 0x2DA2DCu) {
        ctx->pc = 0x2DA2DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x2DA2E0u;
        goto label_2da2e0;
    }
    ctx->pc = 0x2DA2D8u;
    {
        const bool branch_taken_0x2da2d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA2DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2da2d8) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA2E0u;
label_2da2e0:
    // 0x2da2e0: 0xae340020
    ctx->pc = 0x2da2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da2e4:
    // 0x2da2e4: 0xae33001c
    ctx->pc = 0x2da2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da2e8:
    // 0x2da2e8: 0xae400004
    ctx->pc = 0x2da2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2da2ec:
    // 0x2da2ec: 0x8e420000
    ctx->pc = 0x2da2ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da2f0:
    // 0x2da2f0: 0x2a21023
    ctx->pc = 0x2da2f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da2f4:
    // 0x2da2f4: 0x8e430008
    ctx->pc = 0x2da2f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da2f8:
    // 0x2da2f8: 0x431021
    ctx->pc = 0x2da2f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da2fc:
    // 0x2da2fc: 0xae420008
    ctx->pc = 0x2da2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da300:
    // 0x2da300: 0xae550000 — only write next_in when valid pointer
    ctx->pc = 0x2da300u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da304:
    // 0x2da304: 0xae3e0030
    ctx->pc = 0x2da304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da308:
    // 0x2da308: 0x220202d
    ctx->pc = 0x2da308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da30c:
    // 0x2da30c: 0x240282d
    ctx->pc = 0x2da30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da310:
    // 0x2da310: 0x10000054
label_2da314:
    if (ctx->pc == 0x2DA314u) {
        ctx->pc = 0x2DA314u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA318u;
        goto label_2da318;
    }
    ctx->pc = 0x2DA310u;
    {
        const bool branch_taken_0x2da310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA314u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2da310) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA318u;
label_2da318:
    // 0x2da318: 0xae340020
    ctx->pc = 0x2da318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da31c:
    // 0x2da31c: 0xae33001c
    ctx->pc = 0x2da31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da320:
    // 0x2da320: 0xae400004
    ctx->pc = 0x2da320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2da324:
    // 0x2da324: 0x8e420000
    ctx->pc = 0x2da324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da328:
    // 0x2da328: 0x2a21023
    ctx->pc = 0x2da328u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da32c:
    // 0x2da32c: 0x8e430008
    ctx->pc = 0x2da32cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da330:
    // 0x2da330: 0x431021
    ctx->pc = 0x2da330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da334:
    // 0x2da334: 0xae420008
    ctx->pc = 0x2da334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da338:
    // 0x2da338: 0xae550000 — only write next_in when valid pointer
    ctx->pc = 0x2da338u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da33c:
    // 0x2da33c: 0xae3e0030
    ctx->pc = 0x2da33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da340:
    // 0x2da340: 0x220202d
    ctx->pc = 0x2da340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da344:
    // 0x2da344: 0x240282d
    ctx->pc = 0x2da344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da348:
    // 0x2da348: 0x10000046
label_2da34c:
    if (ctx->pc == 0x2DA34Cu) {
        ctx->pc = 0x2DA34Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA350u;
        goto label_2da350;
    }
    ctx->pc = 0x2DA348u;
    {
        const bool branch_taken_0x2da348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA34Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2da348) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA350u;
label_2da350:
    // 0x2da350: 0xae340020
    ctx->pc = 0x2da350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da354:
    // 0x2da354: 0xae33001c
    ctx->pc = 0x2da354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da358:
    // 0x2da358: 0xae400004
    ctx->pc = 0x2da358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2da35c:
    // 0x2da35c: 0x8e420000
    ctx->pc = 0x2da35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da360:
    // 0x2da360: 0x2a21023
    ctx->pc = 0x2da360u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da364:
    // 0x2da364: 0x8e430008
    ctx->pc = 0x2da364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da368:
    // 0x2da368: 0x431021
    ctx->pc = 0x2da368u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da36c:
    // 0x2da36c: 0xae420008
    ctx->pc = 0x2da36cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da370:
    // 0x2da370: 0xae550000
    ctx->pc = 0x2da370u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da374:
    // 0x2da374: 0xae3e0030
    ctx->pc = 0x2da374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da378:
    // 0x2da378: 0x220202d
    ctx->pc = 0x2da378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da37c:
    // 0x2da37c: 0x240282d
    ctx->pc = 0x2da37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da380:
    // 0x2da380: 0x10000038
label_2da384:
    if (ctx->pc == 0x2DA384u) {
        ctx->pc = 0x2DA384u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA388u;
        goto label_2da388;
    }
    ctx->pc = 0x2DA380u;
    {
        const bool branch_taken_0x2da380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA384u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2da380) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA388u;
label_2da388:
    // 0x2da388: 0xae340020
    ctx->pc = 0x2da388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da38c:
    // 0x2da38c: 0xae33001c
    ctx->pc = 0x2da38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da390:
    // 0x2da390: 0xae400004
    ctx->pc = 0x2da390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2da394:
    // 0x2da394: 0x8e420000
    ctx->pc = 0x2da394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da398:
    // 0x2da398: 0x2a21023
    ctx->pc = 0x2da398u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da39c:
    // 0x2da39c: 0x8e430008
    ctx->pc = 0x2da39cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da3a0:
    // 0x2da3a0: 0x431021
    ctx->pc = 0x2da3a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da3a4:
    // 0x2da3a4: 0xae420008
    ctx->pc = 0x2da3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da3a8:
    // 0x2da3a8: 0xae550000
    ctx->pc = 0x2da3a8u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da3ac:
    // 0x2da3ac: 0xae3e0030
    ctx->pc = 0x2da3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da3b0:
    // 0x2da3b0: 0x220202d
    ctx->pc = 0x2da3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da3b4:
    // 0x2da3b4: 0x240282d
    ctx->pc = 0x2da3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da3b8:
    // 0x2da3b8: 0x1000002a
label_2da3bc:
    if (ctx->pc == 0x2DA3BCu) {
        ctx->pc = 0x2DA3BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA3C0u;
        goto label_2da3c0;
    }
    ctx->pc = 0x2DA3B8u;
    {
        const bool branch_taken_0x2da3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA3BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2da3b8) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA3C0u;
label_2da3c0:
    // 0x2da3c0: 0xae340020
    ctx->pc = 0x2da3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da3c4:
    // 0x2da3c4: 0xae33001c
    ctx->pc = 0x2da3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da3c8:
    // 0x2da3c8: 0xae400004
    ctx->pc = 0x2da3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2da3cc:
    // 0x2da3cc: 0x8e420000
    ctx->pc = 0x2da3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da3d0:
    // 0x2da3d0: 0x2a21023
    ctx->pc = 0x2da3d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da3d4:
    // 0x2da3d4: 0x8e430008
    ctx->pc = 0x2da3d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da3d8:
    // 0x2da3d8: 0x431021
    ctx->pc = 0x2da3d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da3dc:
    // 0x2da3dc: 0xae420008
    ctx->pc = 0x2da3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da3e0:
    // 0x2da3e0: 0xae550000
    ctx->pc = 0x2da3e0u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da3e4:
    // 0x2da3e4: 0xae3e0030
    ctx->pc = 0x2da3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da3e8:
    // 0x2da3e8: 0x220202d
    ctx->pc = 0x2da3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da3ec:
    // 0x2da3ec: 0x240282d
    ctx->pc = 0x2da3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da3f0:
    // 0x2da3f0: 0x1000001c
label_2da3f4:
    if (ctx->pc == 0x2DA3F4u) {
        ctx->pc = 0x2DA3F4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA3F8u;
        goto label_2da3f8;
    }
    ctx->pc = 0x2DA3F0u;
    {
        const bool branch_taken_0x2da3f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA3F4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2da3f0) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA3F8u;
label_2da3f8:
    // 0x2da3f8: 0xae340020
    ctx->pc = 0x2da3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da3fc:
    // 0x2da3fc: 0xae33001c
    ctx->pc = 0x2da3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da400:
    // 0x2da400: 0xae400004
    ctx->pc = 0x2da400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2da404:
    // 0x2da404: 0x8e420000
    ctx->pc = 0x2da404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da408:
    // 0x2da408: 0x2a21023
    ctx->pc = 0x2da408u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da40c:
    // 0x2da40c: 0x8e430008
    ctx->pc = 0x2da40cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da410:
    // 0x2da410: 0x431021
    ctx->pc = 0x2da410u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da414:
    // 0x2da414: 0xae420008
    ctx->pc = 0x2da414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da418:
    // 0x2da418: 0xae550000
    ctx->pc = 0x2da418u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da41c:
    // 0x2da41c: 0xae3e0030
    ctx->pc = 0x2da41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da420:
    // 0x2da420: 0x220202d
    ctx->pc = 0x2da420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da424:
    // 0x2da424: 0x240282d
    ctx->pc = 0x2da424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da428:
    // 0x2da428: 0x1000000e
label_2da42c:
    if (ctx->pc == 0x2DA42Cu) {
        ctx->pc = 0x2DA42Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DA430u;
        goto label_2da430;
    }
    ctx->pc = 0x2DA428u;
    {
        const bool branch_taken_0x2da428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA42Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2da428) {
            ctx->pc = 0x2DA464u;
            goto label_2da464;
        }
    }
    ctx->pc = 0x2DA430u;
label_2da430:
    // 0x2da430: 0xae340020
    ctx->pc = 0x2da430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2da434:
    // 0x2da434: 0xae33001c
    ctx->pc = 0x2da434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_2da438:
    // 0x2da438: 0xae570004
    ctx->pc = 0x2da438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
label_2da43c:
    // 0x2da43c: 0x8e420000
    ctx->pc = 0x2da43cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da440:
    // 0x2da440: 0x2a21023
    ctx->pc = 0x2da440u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2da444:
    // 0x2da444: 0x8e430008
    ctx->pc = 0x2da444u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2da448:
    // 0x2da448: 0x431021
    ctx->pc = 0x2da448u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da44c:
    // 0x2da44c: 0xae420008
    ctx->pc = 0x2da44cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2da450:
    // 0x2da450: 0xae550000
    ctx->pc = 0x2da450u;
    { const uint32_t r21 = GPR_U32(ctx, 21); if (r21 >= 0x10000u) WRITE32(ADD32(GPR_U32(ctx, 18), 0), r21); }
label_2da454:
    // 0x2da454: 0xae3e0030
    ctx->pc = 0x2da454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
label_2da458:
    // 0x2da458: 0x220202d
    ctx->pc = 0x2da458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da45c:
    // 0x2da45c: 0x240282d
    ctx->pc = 0x2da45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da460:
    // 0x2da460: 0x2406fffe
    ctx->pc = 0x2da460u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2da464:
    // 0x2da464: 0xc0b6cac
label_2da468:
    if (ctx->pc == 0x2DA468u) {
        ctx->pc = 0x2DA46Cu;
        goto label_2da46c;
    }
    ctx->pc = 0x2DA464u;
    SET_GPR_U32(ctx, 31, 0x2DA46Cu);
    ctx->pc = 0x2DB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x2db2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA46Cu; }
    }
    if (ctx->pc != 0x2DA46Cu) { return; }
    ctx->pc = 0x2DA46Cu;
label_2da46c:
    // 0x2da46c: 0xdfbf00c0
    ctx->pc = 0x2da46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2da470:
    // 0x2da470: 0xdfbe00b0
    ctx->pc = 0x2da470u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2da474:
    // 0x2da474: 0xdfb700a0
    ctx->pc = 0x2da474u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2da478:
    // 0x2da478: 0xdfb60090
    ctx->pc = 0x2da478u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2da47c:
    // 0x2da47c: 0xdfb50080
    ctx->pc = 0x2da47cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2da480:
    // 0x2da480: 0xdfb40070
    ctx->pc = 0x2da480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2da484:
    // 0x2da484: 0xdfb30060
    ctx->pc = 0x2da484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2da488:
    // 0x2da488: 0xdfb20050
    ctx->pc = 0x2da488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2da48c:
    // 0x2da48c: 0xdfb10040
    ctx->pc = 0x2da48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2da490:
    // 0x2da490: 0xdfb00030
    ctx->pc = 0x2da490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2da494:
    // 0x2da494: 0x3e00008
label_2da498:
    if (ctx->pc == 0x2DA498u) {
        ctx->pc = 0x2DA498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2DA49Cu;
        goto label_fallthrough_0x2da494;
    }
    ctx->pc = 0x2DA494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA498u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D96F8u: goto label_2d96f8;
            case 0x2D96FCu: goto label_2d96fc;
            case 0x2D9700u: goto label_2d9700;
            case 0x2D9704u: goto label_2d9704;
            case 0x2D9708u: goto label_2d9708;
            case 0x2D970Cu: goto label_2d970c;
            case 0x2D9710u: goto label_2d9710;
            case 0x2D9714u: goto label_2d9714;
            case 0x2D9718u: goto label_2d9718;
            case 0x2D971Cu: goto label_2d971c;
            case 0x2D9720u: goto label_2d9720;
            case 0x2D9724u: goto label_2d9724;
            case 0x2D9728u: goto label_2d9728;
            case 0x2D972Cu: goto label_2d972c;
            case 0x2D9730u: goto label_2d9730;
            case 0x2D9734u: goto label_2d9734;
            case 0x2D9738u: goto label_2d9738;
            case 0x2D973Cu: goto label_2d973c;
            case 0x2D9740u: goto label_2d9740;
            case 0x2D9744u: goto label_2d9744;
            case 0x2D9748u: goto label_2d9748;
            case 0x2D974Cu: goto label_2d974c;
            case 0x2D9750u: goto label_2d9750;
            case 0x2D9754u: goto label_2d9754;
            case 0x2D9758u: goto label_2d9758;
            case 0x2D975Cu: goto label_2d975c;
            case 0x2D9760u: goto label_2d9760;
            case 0x2D9764u: goto label_2d9764;
            case 0x2D9768u: goto label_2d9768;
            case 0x2D976Cu: goto label_2d976c;
            case 0x2D9770u: goto label_2d9770;
            case 0x2D9774u: goto label_2d9774;
            case 0x2D9778u: goto label_2d9778;
            case 0x2D977Cu: goto label_2d977c;
            case 0x2D9780u: goto label_2d9780;
            case 0x2D9784u: goto label_2d9784;
            case 0x2D9788u: goto label_2d9788;
            case 0x2D978Cu: goto label_2d978c;
            case 0x2D9790u: goto label_2d9790;
            case 0x2D9794u: goto label_2d9794;
            case 0x2D9798u: goto label_2d9798;
            case 0x2D979Cu: goto label_2d979c;
            case 0x2D97A0u: goto label_2d97a0;
            case 0x2D97A4u: goto label_2d97a4;
            case 0x2D97A8u: goto label_2d97a8;
            case 0x2D97ACu: goto label_2d97ac;
            case 0x2D97B0u: goto label_2d97b0;
            case 0x2D97B4u: goto label_2d97b4;
            case 0x2D97B8u: goto label_2d97b8;
            case 0x2D97BCu: goto label_2d97bc;
            case 0x2D97C0u: goto label_2d97c0;
            case 0x2D97C4u: goto label_2d97c4;
            case 0x2D97C8u: goto label_2d97c8;
            case 0x2D97CCu: goto label_2d97cc;
            case 0x2D97D0u: goto label_2d97d0;
            case 0x2D97D4u: goto label_2d97d4;
            case 0x2D97D8u: goto label_2d97d8;
            case 0x2D97DCu: goto label_2d97dc;
            case 0x2D97E0u: goto label_2d97e0;
            case 0x2D97E4u: goto label_2d97e4;
            case 0x2D97E8u: goto label_2d97e8;
            case 0x2D97ECu: goto label_2d97ec;
            case 0x2D97F0u: goto label_2d97f0;
            case 0x2D97F4u: goto label_2d97f4;
            case 0x2D97F8u: goto label_2d97f8;
            case 0x2D97FCu: goto label_2d97fc;
            case 0x2D9800u: goto label_2d9800;
            case 0x2D9804u: goto label_2d9804;
            case 0x2D9808u: goto label_2d9808;
            case 0x2D980Cu: goto label_2d980c;
            case 0x2D9810u: goto label_2d9810;
            case 0x2D9814u: goto label_2d9814;
            case 0x2D9818u: goto label_2d9818;
            case 0x2D981Cu: goto label_2d981c;
            case 0x2D9820u: goto label_2d9820;
            case 0x2D9824u: goto label_2d9824;
            case 0x2D9828u: goto label_2d9828;
            case 0x2D982Cu: goto label_2d982c;
            case 0x2D9830u: goto label_2d9830;
            case 0x2D9834u: goto label_2d9834;
            case 0x2D9838u: goto label_2d9838;
            case 0x2D983Cu: goto label_2d983c;
            case 0x2D9840u: goto label_2d9840;
            case 0x2D9844u: goto label_2d9844;
            case 0x2D9848u: goto label_2d9848;
            case 0x2D984Cu: goto label_2d984c;
            case 0x2D9850u: goto label_2d9850;
            case 0x2D9854u: goto label_2d9854;
            case 0x2D9858u: goto label_2d9858;
            case 0x2D985Cu: goto label_2d985c;
            case 0x2D9860u: goto label_2d9860;
            case 0x2D9864u: goto label_2d9864;
            case 0x2D9868u: goto label_2d9868;
            case 0x2D986Cu: goto label_2d986c;
            case 0x2D9870u: goto label_2d9870;
            case 0x2D9874u: goto label_2d9874;
            case 0x2D9878u: goto label_2d9878;
            case 0x2D987Cu: goto label_2d987c;
            case 0x2D9880u: goto label_2d9880;
            case 0x2D9884u: goto label_2d9884;
            case 0x2D9888u: goto label_2d9888;
            case 0x2D988Cu: goto label_2d988c;
            case 0x2D9890u: goto label_2d9890;
            case 0x2D9894u: goto label_2d9894;
            case 0x2D9898u: goto label_2d9898;
            case 0x2D989Cu: goto label_2d989c;
            case 0x2D98A0u: goto label_2d98a0;
            case 0x2D98A4u: goto label_2d98a4;
            case 0x2D98A8u: goto label_2d98a8;
            case 0x2D98ACu: goto label_2d98ac;
            case 0x2D98B0u: goto label_2d98b0;
            case 0x2D98B4u: goto label_2d98b4;
            case 0x2D98B8u: goto label_2d98b8;
            case 0x2D98BCu: goto label_2d98bc;
            case 0x2D98C0u: goto label_2d98c0;
            case 0x2D98C4u: goto label_2d98c4;
            case 0x2D98C8u: goto label_2d98c8;
            case 0x2D98CCu: goto label_2d98cc;
            case 0x2D98D0u: goto label_2d98d0;
            case 0x2D98D4u: goto label_2d98d4;
            case 0x2D98D8u: goto label_2d98d8;
            case 0x2D98DCu: goto label_2d98dc;
            case 0x2D98E0u: goto label_2d98e0;
            case 0x2D98E4u: goto label_2d98e4;
            case 0x2D98E8u: goto label_2d98e8;
            case 0x2D98ECu: goto label_2d98ec;
            case 0x2D98F0u: goto label_2d98f0;
            case 0x2D98F4u: goto label_2d98f4;
            case 0x2D98F8u: goto label_2d98f8;
            case 0x2D98FCu: goto label_2d98fc;
            case 0x2D9900u: goto label_2d9900;
            case 0x2D9904u: goto label_2d9904;
            case 0x2D9908u: goto label_2d9908;
            case 0x2D990Cu: goto label_2d990c;
            case 0x2D9910u: goto label_2d9910;
            case 0x2D9914u: goto label_2d9914;
            case 0x2D9918u: goto label_2d9918;
            case 0x2D991Cu: goto label_2d991c;
            case 0x2D9920u: goto label_2d9920;
            case 0x2D9924u: goto label_2d9924;
            case 0x2D9928u: goto label_2d9928;
            case 0x2D992Cu: goto label_2d992c;
            case 0x2D9930u: goto label_2d9930;
            case 0x2D9934u: goto label_2d9934;
            case 0x2D9938u: goto label_2d9938;
            case 0x2D993Cu: goto label_2d993c;
            case 0x2D9940u: goto label_2d9940;
            case 0x2D9944u: goto label_2d9944;
            case 0x2D9948u: goto label_2d9948;
            case 0x2D994Cu: goto label_2d994c;
            case 0x2D9950u: goto label_2d9950;
            case 0x2D9954u: goto label_2d9954;
            case 0x2D9958u: goto label_2d9958;
            case 0x2D995Cu: goto label_2d995c;
            case 0x2D9960u: goto label_2d9960;
            case 0x2D9964u: goto label_2d9964;
            case 0x2D9968u: goto label_2d9968;
            case 0x2D996Cu: goto label_2d996c;
            case 0x2D9970u: goto label_2d9970;
            case 0x2D9974u: goto label_2d9974;
            case 0x2D9978u: goto label_2d9978;
            case 0x2D997Cu: goto label_2d997c;
            case 0x2D9980u: goto label_2d9980;
            case 0x2D9984u: goto label_2d9984;
            case 0x2D9988u: goto label_2d9988;
            case 0x2D998Cu: goto label_2d998c;
            case 0x2D9990u: goto label_2d9990;
            case 0x2D9994u: goto label_2d9994;
            case 0x2D9998u: goto label_2d9998;
            case 0x2D999Cu: goto label_2d999c;
            case 0x2D99A0u: goto label_2d99a0;
            case 0x2D99A4u: goto label_2d99a4;
            case 0x2D99A8u: goto label_2d99a8;
            case 0x2D99ACu: goto label_2d99ac;
            case 0x2D99B0u: goto label_2d99b0;
            case 0x2D99B4u: goto label_2d99b4;
            case 0x2D99B8u: goto label_2d99b8;
            case 0x2D99BCu: goto label_2d99bc;
            case 0x2D99C0u: goto label_2d99c0;
            case 0x2D99C4u: goto label_2d99c4;
            case 0x2D99C8u: goto label_2d99c8;
            case 0x2D99CCu: goto label_2d99cc;
            case 0x2D99D0u: goto label_2d99d0;
            case 0x2D99D4u: goto label_2d99d4;
            case 0x2D99D8u: goto label_2d99d8;
            case 0x2D99DCu: goto label_2d99dc;
            case 0x2D99E0u: goto label_2d99e0;
            case 0x2D99E4u: goto label_2d99e4;
            case 0x2D99E8u: goto label_2d99e8;
            case 0x2D99ECu: goto label_2d99ec;
            case 0x2D99F0u: goto label_2d99f0;
            case 0x2D99F4u: goto label_2d99f4;
            case 0x2D99F8u: goto label_2d99f8;
            case 0x2D99FCu: goto label_2d99fc;
            case 0x2D9A00u: goto label_2d9a00;
            case 0x2D9A04u: goto label_2d9a04;
            case 0x2D9A08u: goto label_2d9a08;
            case 0x2D9A0Cu: goto label_2d9a0c;
            case 0x2D9A10u: goto label_2d9a10;
            case 0x2D9A14u: goto label_2d9a14;
            case 0x2D9A18u: goto label_2d9a18;
            case 0x2D9A1Cu: goto label_2d9a1c;
            case 0x2D9A20u: goto label_2d9a20;
            case 0x2D9A24u: goto label_2d9a24;
            case 0x2D9A28u: goto label_2d9a28;
            case 0x2D9A2Cu: goto label_2d9a2c;
            case 0x2D9A30u: goto label_2d9a30;
            case 0x2D9A34u: goto label_2d9a34;
            case 0x2D9A38u: goto label_2d9a38;
            case 0x2D9A3Cu: goto label_2d9a3c;
            case 0x2D9A40u: goto label_2d9a40;
            case 0x2D9A44u: goto label_2d9a44;
            case 0x2D9A48u: goto label_2d9a48;
            case 0x2D9A4Cu: goto label_2d9a4c;
            case 0x2D9A50u: goto label_2d9a50;
            case 0x2D9A54u: goto label_2d9a54;
            case 0x2D9A58u: goto label_2d9a58;
            case 0x2D9A5Cu: goto label_2d9a5c;
            case 0x2D9A60u: goto label_2d9a60;
            case 0x2D9A64u: goto label_2d9a64;
            case 0x2D9A68u: goto label_2d9a68;
            case 0x2D9A6Cu: goto label_2d9a6c;
            case 0x2D9A70u: goto label_2d9a70;
            case 0x2D9A74u: goto label_2d9a74;
            case 0x2D9A78u: goto label_2d9a78;
            case 0x2D9A7Cu: goto label_2d9a7c;
            case 0x2D9A80u: goto label_2d9a80;
            case 0x2D9A84u: goto label_2d9a84;
            case 0x2D9A88u: goto label_2d9a88;
            case 0x2D9A8Cu: goto label_2d9a8c;
            case 0x2D9A90u: goto label_2d9a90;
            case 0x2D9A94u: goto label_2d9a94;
            case 0x2D9A98u: goto label_2d9a98;
            case 0x2D9A9Cu: goto label_2d9a9c;
            case 0x2D9AA0u: goto label_2d9aa0;
            case 0x2D9AA4u: goto label_2d9aa4;
            case 0x2D9AA8u: goto label_2d9aa8;
            case 0x2D9AACu: goto label_2d9aac;
            case 0x2D9AB0u: goto label_2d9ab0;
            case 0x2D9AB4u: goto label_2d9ab4;
            case 0x2D9AB8u: goto label_2d9ab8;
            case 0x2D9ABCu: goto label_2d9abc;
            case 0x2D9AC0u: goto label_2d9ac0;
            case 0x2D9AC4u: goto label_2d9ac4;
            case 0x2D9AC8u: goto label_2d9ac8;
            case 0x2D9ACCu: goto label_2d9acc;
            case 0x2D9AD0u: goto label_2d9ad0;
            case 0x2D9AD4u: goto label_2d9ad4;
            case 0x2D9AD8u: goto label_2d9ad8;
            case 0x2D9ADCu: goto label_2d9adc;
            case 0x2D9AE0u: goto label_2d9ae0;
            case 0x2D9AE4u: goto label_2d9ae4;
            case 0x2D9AE8u: goto label_2d9ae8;
            case 0x2D9AECu: goto label_2d9aec;
            case 0x2D9AF0u: goto label_2d9af0;
            case 0x2D9AF4u: goto label_2d9af4;
            case 0x2D9AF8u: goto label_2d9af8;
            case 0x2D9AFCu: goto label_2d9afc;
            case 0x2D9B00u: goto label_2d9b00;
            case 0x2D9B04u: goto label_2d9b04;
            case 0x2D9B08u: goto label_2d9b08;
            case 0x2D9B0Cu: goto label_2d9b0c;
            case 0x2D9B10u: goto label_2d9b10;
            case 0x2D9B14u: goto label_2d9b14;
            case 0x2D9B18u: goto label_2d9b18;
            case 0x2D9B1Cu: goto label_2d9b1c;
            case 0x2D9B20u: goto label_2d9b20;
            case 0x2D9B24u: goto label_2d9b24;
            case 0x2D9B28u: goto label_2d9b28;
            case 0x2D9B2Cu: goto label_2d9b2c;
            case 0x2D9B30u: goto label_2d9b30;
            case 0x2D9B34u: goto label_2d9b34;
            case 0x2D9B38u: goto label_2d9b38;
            case 0x2D9B3Cu: goto label_2d9b3c;
            case 0x2D9B40u: goto label_2d9b40;
            case 0x2D9B44u: goto label_2d9b44;
            case 0x2D9B48u: goto label_2d9b48;
            case 0x2D9B4Cu: goto label_2d9b4c;
            case 0x2D9B50u: goto label_2d9b50;
            case 0x2D9B54u: goto label_2d9b54;
            case 0x2D9B58u: goto label_2d9b58;
            case 0x2D9B5Cu: goto label_2d9b5c;
            case 0x2D9B60u: goto label_2d9b60;
            case 0x2D9B64u: goto label_2d9b64;
            case 0x2D9B68u: goto label_2d9b68;
            case 0x2D9B6Cu: goto label_2d9b6c;
            case 0x2D9B70u: goto label_2d9b70;
            case 0x2D9B74u: goto label_2d9b74;
            case 0x2D9B78u: goto label_2d9b78;
            case 0x2D9B7Cu: goto label_2d9b7c;
            case 0x2D9B80u: goto label_2d9b80;
            case 0x2D9B84u: goto label_2d9b84;
            case 0x2D9B88u: goto label_2d9b88;
            case 0x2D9B8Cu: goto label_2d9b8c;
            case 0x2D9B90u: goto label_2d9b90;
            case 0x2D9B94u: goto label_2d9b94;
            case 0x2D9B98u: goto label_2d9b98;
            case 0x2D9B9Cu: goto label_2d9b9c;
            case 0x2D9BA0u: goto label_2d9ba0;
            case 0x2D9BA4u: goto label_2d9ba4;
            case 0x2D9BA8u: goto label_2d9ba8;
            case 0x2D9BACu: goto label_2d9bac;
            case 0x2D9BB0u: goto label_2d9bb0;
            case 0x2D9BB4u: goto label_2d9bb4;
            case 0x2D9BB8u: goto label_2d9bb8;
            case 0x2D9BBCu: goto label_2d9bbc;
            case 0x2D9BC0u: goto label_2d9bc0;
            case 0x2D9BC4u: goto label_2d9bc4;
            case 0x2D9BC8u: goto label_2d9bc8;
            case 0x2D9BCCu: goto label_2d9bcc;
            case 0x2D9BD0u: goto label_2d9bd0;
            case 0x2D9BD4u: goto label_2d9bd4;
            case 0x2D9BD8u: goto label_2d9bd8;
            case 0x2D9BDCu: goto label_2d9bdc;
            case 0x2D9BE0u: goto label_2d9be0;
            case 0x2D9BE4u: goto label_2d9be4;
            case 0x2D9BE8u: goto label_2d9be8;
            case 0x2D9BECu: goto label_2d9bec;
            case 0x2D9BF0u: goto label_2d9bf0;
            case 0x2D9BF4u: goto label_2d9bf4;
            case 0x2D9BF8u: goto label_2d9bf8;
            case 0x2D9BFCu: goto label_2d9bfc;
            case 0x2D9C00u: goto label_2d9c00;
            case 0x2D9C04u: goto label_2d9c04;
            case 0x2D9C08u: goto label_2d9c08;
            case 0x2D9C0Cu: goto label_2d9c0c;
            case 0x2D9C10u: goto label_2d9c10;
            case 0x2D9C14u: goto label_2d9c14;
            case 0x2D9C18u: goto label_2d9c18;
            case 0x2D9C1Cu: goto label_2d9c1c;
            case 0x2D9C20u: goto label_2d9c20;
            case 0x2D9C24u: goto label_2d9c24;
            case 0x2D9C28u: goto label_2d9c28;
            case 0x2D9C2Cu: goto label_2d9c2c;
            case 0x2D9C30u: goto label_2d9c30;
            case 0x2D9C34u: goto label_2d9c34;
            case 0x2D9C38u: goto label_2d9c38;
            case 0x2D9C3Cu: goto label_2d9c3c;
            case 0x2D9C40u: goto label_2d9c40;
            case 0x2D9C44u: goto label_2d9c44;
            case 0x2D9C48u: goto label_2d9c48;
            case 0x2D9C4Cu: goto label_2d9c4c;
            case 0x2D9C50u: goto label_2d9c50;
            case 0x2D9C54u: goto label_2d9c54;
            case 0x2D9C58u: goto label_2d9c58;
            case 0x2D9C5Cu: goto label_2d9c5c;
            case 0x2D9C60u: goto label_2d9c60;
            case 0x2D9C64u: goto label_2d9c64;
            case 0x2D9C68u: goto label_2d9c68;
            case 0x2D9C6Cu: goto label_2d9c6c;
            case 0x2D9C70u: goto label_2d9c70;
            case 0x2D9C74u: goto label_2d9c74;
            case 0x2D9C78u: goto label_2d9c78;
            case 0x2D9C7Cu: goto label_2d9c7c;
            case 0x2D9C80u: goto label_2d9c80;
            case 0x2D9C84u: goto label_2d9c84;
            case 0x2D9C88u: goto label_2d9c88;
            case 0x2D9C8Cu: goto label_2d9c8c;
            case 0x2D9C90u: goto label_2d9c90;
            case 0x2D9C94u: goto label_2d9c94;
            case 0x2D9C98u: goto label_2d9c98;
            case 0x2D9C9Cu: goto label_2d9c9c;
            case 0x2D9CA0u: goto label_2d9ca0;
            case 0x2D9CA4u: goto label_2d9ca4;
            case 0x2D9CA8u: goto label_2d9ca8;
            case 0x2D9CACu: goto label_2d9cac;
            case 0x2D9CB0u: goto label_2d9cb0;
            case 0x2D9CB4u: goto label_2d9cb4;
            case 0x2D9CB8u: goto label_2d9cb8;
            case 0x2D9CBCu: goto label_2d9cbc;
            case 0x2D9CC0u: goto label_2d9cc0;
            case 0x2D9CC4u: goto label_2d9cc4;
            case 0x2D9CC8u: goto label_2d9cc8;
            case 0x2D9CCCu: goto label_2d9ccc;
            case 0x2D9CD0u: goto label_2d9cd0;
            case 0x2D9CD4u: goto label_2d9cd4;
            case 0x2D9CD8u: goto label_2d9cd8;
            case 0x2D9CDCu: goto label_2d9cdc;
            case 0x2D9CE0u: goto label_2d9ce0;
            case 0x2D9CE4u: goto label_2d9ce4;
            case 0x2D9CE8u: goto label_2d9ce8;
            case 0x2D9CECu: goto label_2d9cec;
            case 0x2D9CF0u: goto label_2d9cf0;
            case 0x2D9CF4u: goto label_2d9cf4;
            case 0x2D9CF8u: goto label_2d9cf8;
            case 0x2D9CFCu: goto label_2d9cfc;
            case 0x2D9D00u: goto label_2d9d00;
            case 0x2D9D04u: goto label_2d9d04;
            case 0x2D9D08u: goto label_2d9d08;
            case 0x2D9D0Cu: goto label_2d9d0c;
            case 0x2D9D10u: goto label_2d9d10;
            case 0x2D9D14u: goto label_2d9d14;
            case 0x2D9D18u: goto label_2d9d18;
            case 0x2D9D1Cu: goto label_2d9d1c;
            case 0x2D9D20u: goto label_2d9d20;
            case 0x2D9D24u: goto label_2d9d24;
            case 0x2D9D28u: goto label_2d9d28;
            case 0x2D9D2Cu: goto label_2d9d2c;
            case 0x2D9D30u: goto label_2d9d30;
            case 0x2D9D34u: goto label_2d9d34;
            case 0x2D9D38u: goto label_2d9d38;
            case 0x2D9D3Cu: goto label_2d9d3c;
            case 0x2D9D40u: goto label_2d9d40;
            case 0x2D9D44u: goto label_2d9d44;
            case 0x2D9D48u: goto label_2d9d48;
            case 0x2D9D4Cu: goto label_2d9d4c;
            case 0x2D9D50u: goto label_2d9d50;
            case 0x2D9D54u: goto label_2d9d54;
            case 0x2D9D58u: goto label_2d9d58;
            case 0x2D9D5Cu: goto label_2d9d5c;
            case 0x2D9D60u: goto label_2d9d60;
            case 0x2D9D64u: goto label_2d9d64;
            case 0x2D9D68u: goto label_2d9d68;
            case 0x2D9D6Cu: goto label_2d9d6c;
            case 0x2D9D70u: goto label_2d9d70;
            case 0x2D9D74u: goto label_2d9d74;
            case 0x2D9D78u: goto label_2d9d78;
            case 0x2D9D7Cu: goto label_2d9d7c;
            case 0x2D9D80u: goto label_2d9d80;
            case 0x2D9D84u: goto label_2d9d84;
            case 0x2D9D88u: goto label_2d9d88;
            case 0x2D9D8Cu: goto label_2d9d8c;
            case 0x2D9D90u: goto label_2d9d90;
            case 0x2D9D94u: goto label_2d9d94;
            case 0x2D9D98u: goto label_2d9d98;
            case 0x2D9D9Cu: goto label_2d9d9c;
            case 0x2D9DA0u: goto label_2d9da0;
            case 0x2D9DA4u: goto label_2d9da4;
            case 0x2D9DA8u: goto label_2d9da8;
            case 0x2D9DACu: goto label_2d9dac;
            case 0x2D9DB0u: goto label_2d9db0;
            case 0x2D9DB4u: goto label_2d9db4;
            case 0x2D9DB8u: goto label_2d9db8;
            case 0x2D9DBCu: goto label_2d9dbc;
            case 0x2D9DC0u: goto label_2d9dc0;
            case 0x2D9DC4u: goto label_2d9dc4;
            case 0x2D9DC8u: goto label_2d9dc8;
            case 0x2D9DCCu: goto label_2d9dcc;
            case 0x2D9DD0u: goto label_2d9dd0;
            case 0x2D9DD4u: goto label_2d9dd4;
            case 0x2D9DD8u: goto label_2d9dd8;
            case 0x2D9DDCu: goto label_2d9ddc;
            case 0x2D9DE0u: goto label_2d9de0;
            case 0x2D9DE4u: goto label_2d9de4;
            case 0x2D9DE8u: goto label_2d9de8;
            case 0x2D9DECu: goto label_2d9dec;
            case 0x2D9DF0u: goto label_2d9df0;
            case 0x2D9DF4u: goto label_2d9df4;
            case 0x2D9DF8u: goto label_2d9df8;
            case 0x2D9DFCu: goto label_2d9dfc;
            case 0x2D9E00u: goto label_2d9e00;
            case 0x2D9E04u: goto label_2d9e04;
            case 0x2D9E08u: goto label_2d9e08;
            case 0x2D9E0Cu: goto label_2d9e0c;
            case 0x2D9E10u: goto label_2d9e10;
            case 0x2D9E14u: goto label_2d9e14;
            case 0x2D9E18u: goto label_2d9e18;
            case 0x2D9E1Cu: goto label_2d9e1c;
            case 0x2D9E20u: goto label_2d9e20;
            case 0x2D9E24u: goto label_2d9e24;
            case 0x2D9E28u: goto label_2d9e28;
            case 0x2D9E2Cu: goto label_2d9e2c;
            case 0x2D9E30u: goto label_2d9e30;
            case 0x2D9E34u: goto label_2d9e34;
            case 0x2D9E38u: goto label_2d9e38;
            case 0x2D9E3Cu: goto label_2d9e3c;
            case 0x2D9E40u: goto label_2d9e40;
            case 0x2D9E44u: goto label_2d9e44;
            case 0x2D9E48u: goto label_2d9e48;
            case 0x2D9E4Cu: goto label_2d9e4c;
            case 0x2D9E50u: goto label_2d9e50;
            case 0x2D9E54u: goto label_2d9e54;
            case 0x2D9E58u: goto label_2d9e58;
            case 0x2D9E5Cu: goto label_2d9e5c;
            case 0x2D9E60u: goto label_2d9e60;
            case 0x2D9E64u: goto label_2d9e64;
            case 0x2D9E68u: goto label_2d9e68;
            case 0x2D9E6Cu: goto label_2d9e6c;
            case 0x2D9E70u: goto label_2d9e70;
            case 0x2D9E74u: goto label_2d9e74;
            case 0x2D9E78u: goto label_2d9e78;
            case 0x2D9E7Cu: goto label_2d9e7c;
            case 0x2D9E80u: goto label_2d9e80;
            case 0x2D9E84u: goto label_2d9e84;
            case 0x2D9E88u: goto label_2d9e88;
            case 0x2D9E8Cu: goto label_2d9e8c;
            case 0x2D9E90u: goto label_2d9e90;
            case 0x2D9E94u: goto label_2d9e94;
            case 0x2D9E98u: goto label_2d9e98;
            case 0x2D9E9Cu: goto label_2d9e9c;
            case 0x2D9EA0u: goto label_2d9ea0;
            case 0x2D9EA4u: goto label_2d9ea4;
            case 0x2D9EA8u: goto label_2d9ea8;
            case 0x2D9EACu: goto label_2d9eac;
            case 0x2D9EB0u: goto label_2d9eb0;
            case 0x2D9EB4u: goto label_2d9eb4;
            case 0x2D9EB8u: goto label_2d9eb8;
            case 0x2D9EBCu: goto label_2d9ebc;
            case 0x2D9EC0u: goto label_2d9ec0;
            case 0x2D9EC4u: goto label_2d9ec4;
            case 0x2D9EC8u: goto label_2d9ec8;
            case 0x2D9ECCu: goto label_2d9ecc;
            case 0x2D9ED0u: goto label_2d9ed0;
            case 0x2D9ED4u: goto label_2d9ed4;
            case 0x2D9ED8u: goto label_2d9ed8;
            case 0x2D9EDCu: goto label_2d9edc;
            case 0x2D9EE0u: goto label_2d9ee0;
            case 0x2D9EE4u: goto label_2d9ee4;
            case 0x2D9EE8u: goto label_2d9ee8;
            case 0x2D9EECu: goto label_2d9eec;
            case 0x2D9EF0u: goto label_2d9ef0;
            case 0x2D9EF4u: goto label_2d9ef4;
            case 0x2D9EF8u: goto label_2d9ef8;
            case 0x2D9EFCu: goto label_2d9efc;
            case 0x2D9F00u: goto label_2d9f00;
            case 0x2D9F04u: goto label_2d9f04;
            case 0x2D9F08u: goto label_2d9f08;
            case 0x2D9F0Cu: goto label_2d9f0c;
            case 0x2D9F10u: goto label_2d9f10;
            case 0x2D9F14u: goto label_2d9f14;
            case 0x2D9F18u: goto label_2d9f18;
            case 0x2D9F1Cu: goto label_2d9f1c;
            case 0x2D9F20u: goto label_2d9f20;
            case 0x2D9F24u: goto label_2d9f24;
            case 0x2D9F28u: goto label_2d9f28;
            case 0x2D9F2Cu: goto label_2d9f2c;
            case 0x2D9F30u: goto label_2d9f30;
            case 0x2D9F34u: goto label_2d9f34;
            case 0x2D9F38u: goto label_2d9f38;
            case 0x2D9F3Cu: goto label_2d9f3c;
            case 0x2D9F40u: goto label_2d9f40;
            case 0x2D9F44u: goto label_2d9f44;
            case 0x2D9F48u: goto label_2d9f48;
            case 0x2D9F4Cu: goto label_2d9f4c;
            case 0x2D9F50u: goto label_2d9f50;
            case 0x2D9F54u: goto label_2d9f54;
            case 0x2D9F58u: goto label_2d9f58;
            case 0x2D9F5Cu: goto label_2d9f5c;
            case 0x2D9F60u: goto label_2d9f60;
            case 0x2D9F64u: goto label_2d9f64;
            case 0x2D9F68u: goto label_2d9f68;
            case 0x2D9F6Cu: goto label_2d9f6c;
            case 0x2D9F70u: goto label_2d9f70;
            case 0x2D9F74u: goto label_2d9f74;
            case 0x2D9F78u: goto label_2d9f78;
            case 0x2D9F7Cu: goto label_2d9f7c;
            case 0x2D9F80u: goto label_2d9f80;
            case 0x2D9F84u: goto label_2d9f84;
            case 0x2D9F88u: goto label_2d9f88;
            case 0x2D9F8Cu: goto label_2d9f8c;
            case 0x2D9F90u: goto label_2d9f90;
            case 0x2D9F94u: goto label_2d9f94;
            case 0x2D9F98u: goto label_2d9f98;
            case 0x2D9F9Cu: goto label_2d9f9c;
            case 0x2D9FA0u: goto label_2d9fa0;
            case 0x2D9FA4u: goto label_2d9fa4;
            case 0x2D9FA8u: goto label_2d9fa8;
            case 0x2D9FACu: goto label_2d9fac;
            case 0x2D9FB0u: goto label_2d9fb0;
            case 0x2D9FB4u: goto label_2d9fb4;
            case 0x2D9FB8u: goto label_2d9fb8;
            case 0x2D9FBCu: goto label_2d9fbc;
            case 0x2D9FC0u: goto label_2d9fc0;
            case 0x2D9FC4u: goto label_2d9fc4;
            case 0x2D9FC8u: goto label_2d9fc8;
            case 0x2D9FCCu: goto label_2d9fcc;
            case 0x2D9FD0u: goto label_2d9fd0;
            case 0x2D9FD4u: goto label_2d9fd4;
            case 0x2D9FD8u: goto label_2d9fd8;
            case 0x2D9FDCu: goto label_2d9fdc;
            case 0x2D9FE0u: goto label_2d9fe0;
            case 0x2D9FE4u: goto label_2d9fe4;
            case 0x2D9FE8u: goto label_2d9fe8;
            case 0x2D9FECu: goto label_2d9fec;
            case 0x2D9FF0u: goto label_2d9ff0;
            case 0x2D9FF4u: goto label_2d9ff4;
            case 0x2D9FF8u: goto label_2d9ff8;
            case 0x2D9FFCu: goto label_2d9ffc;
            case 0x2DA000u: goto label_2da000;
            case 0x2DA004u: goto label_2da004;
            case 0x2DA008u: goto label_2da008;
            case 0x2DA00Cu: goto label_2da00c;
            case 0x2DA010u: goto label_2da010;
            case 0x2DA014u: goto label_2da014;
            case 0x2DA018u: goto label_2da018;
            case 0x2DA01Cu: goto label_2da01c;
            case 0x2DA020u: goto label_2da020;
            case 0x2DA024u: goto label_2da024;
            case 0x2DA028u: goto label_2da028;
            case 0x2DA02Cu: goto label_2da02c;
            case 0x2DA030u: goto label_2da030;
            case 0x2DA034u: goto label_2da034;
            case 0x2DA038u: goto label_2da038;
            case 0x2DA03Cu: goto label_2da03c;
            case 0x2DA040u: goto label_2da040;
            case 0x2DA044u: goto label_2da044;
            case 0x2DA048u: goto label_2da048;
            case 0x2DA04Cu: goto label_2da04c;
            case 0x2DA050u: goto label_2da050;
            case 0x2DA054u: goto label_2da054;
            case 0x2DA058u: goto label_2da058;
            case 0x2DA05Cu: goto label_2da05c;
            case 0x2DA060u: goto label_2da060;
            case 0x2DA064u: goto label_2da064;
            case 0x2DA068u: goto label_2da068;
            case 0x2DA06Cu: goto label_2da06c;
            case 0x2DA070u: goto label_2da070;
            case 0x2DA074u: goto label_2da074;
            case 0x2DA078u: goto label_2da078;
            case 0x2DA07Cu: goto label_2da07c;
            case 0x2DA080u: goto label_2da080;
            case 0x2DA084u: goto label_2da084;
            case 0x2DA088u: goto label_2da088;
            case 0x2DA08Cu: goto label_2da08c;
            case 0x2DA090u: goto label_2da090;
            case 0x2DA094u: goto label_2da094;
            case 0x2DA098u: goto label_2da098;
            case 0x2DA09Cu: goto label_2da09c;
            case 0x2DA0A0u: goto label_2da0a0;
            case 0x2DA0A4u: goto label_2da0a4;
            case 0x2DA0A8u: goto label_2da0a8;
            case 0x2DA0ACu: goto label_2da0ac;
            case 0x2DA0B0u: goto label_2da0b0;
            case 0x2DA0B4u: goto label_2da0b4;
            case 0x2DA0B8u: goto label_2da0b8;
            case 0x2DA0BCu: goto label_2da0bc;
            case 0x2DA0C0u: goto label_2da0c0;
            case 0x2DA0C4u: goto label_2da0c4;
            case 0x2DA0C8u: goto label_2da0c8;
            case 0x2DA0CCu: goto label_2da0cc;
            case 0x2DA0D0u: goto label_2da0d0;
            case 0x2DA0D4u: goto label_2da0d4;
            case 0x2DA0D8u: goto label_2da0d8;
            case 0x2DA0DCu: goto label_2da0dc;
            case 0x2DA0E0u: goto label_2da0e0;
            case 0x2DA0E4u: goto label_2da0e4;
            case 0x2DA0E8u: goto label_2da0e8;
            case 0x2DA0ECu: goto label_2da0ec;
            case 0x2DA0F0u: goto label_2da0f0;
            case 0x2DA0F4u: goto label_2da0f4;
            case 0x2DA0F8u: goto label_2da0f8;
            case 0x2DA0FCu: goto label_2da0fc;
            case 0x2DA100u: goto label_2da100;
            case 0x2DA104u: goto label_2da104;
            case 0x2DA108u: goto label_2da108;
            case 0x2DA10Cu: goto label_2da10c;
            case 0x2DA110u: goto label_2da110;
            case 0x2DA114u: goto label_2da114;
            case 0x2DA118u: goto label_2da118;
            case 0x2DA11Cu: goto label_2da11c;
            case 0x2DA120u: goto label_2da120;
            case 0x2DA124u: goto label_2da124;
            case 0x2DA128u: goto label_2da128;
            case 0x2DA12Cu: goto label_2da12c;
            case 0x2DA130u: goto label_2da130;
            case 0x2DA134u: goto label_2da134;
            case 0x2DA138u: goto label_2da138;
            case 0x2DA13Cu: goto label_2da13c;
            case 0x2DA140u: goto label_2da140;
            case 0x2DA144u: goto label_2da144;
            case 0x2DA148u: goto label_2da148;
            case 0x2DA14Cu: goto label_2da14c;
            case 0x2DA150u: goto label_2da150;
            case 0x2DA154u: goto label_2da154;
            case 0x2DA158u: goto label_2da158;
            case 0x2DA15Cu: goto label_2da15c;
            case 0x2DA160u: goto label_2da160;
            case 0x2DA164u: goto label_2da164;
            case 0x2DA168u: goto label_2da168;
            case 0x2DA16Cu: goto label_2da16c;
            case 0x2DA170u: goto label_2da170;
            case 0x2DA174u: goto label_2da174;
            case 0x2DA178u: goto label_2da178;
            case 0x2DA17Cu: goto label_2da17c;
            case 0x2DA180u: goto label_2da180;
            case 0x2DA184u: goto label_2da184;
            case 0x2DA188u: goto label_2da188;
            case 0x2DA18Cu: goto label_2da18c;
            case 0x2DA190u: goto label_2da190;
            case 0x2DA194u: goto label_2da194;
            case 0x2DA198u: goto label_2da198;
            case 0x2DA19Cu: goto label_2da19c;
            case 0x2DA1A0u: goto label_2da1a0;
            case 0x2DA1A4u: goto label_2da1a4;
            case 0x2DA1A8u: goto label_2da1a8;
            case 0x2DA1ACu: goto label_2da1ac;
            case 0x2DA1B0u: goto label_2da1b0;
            case 0x2DA1B4u: goto label_2da1b4;
            case 0x2DA1B8u: goto label_2da1b8;
            case 0x2DA1BCu: goto label_2da1bc;
            case 0x2DA1C0u: goto label_2da1c0;
            case 0x2DA1C4u: goto label_2da1c4;
            case 0x2DA1C8u: goto label_2da1c8;
            case 0x2DA1CCu: goto label_2da1cc;
            case 0x2DA1D0u: goto label_2da1d0;
            case 0x2DA1D4u: goto label_2da1d4;
            case 0x2DA1D8u: goto label_2da1d8;
            case 0x2DA1DCu: goto label_2da1dc;
            case 0x2DA1E0u: goto label_2da1e0;
            case 0x2DA1E4u: goto label_2da1e4;
            case 0x2DA1E8u: goto label_2da1e8;
            case 0x2DA1ECu: goto label_2da1ec;
            case 0x2DA1F0u: goto label_2da1f0;
            case 0x2DA1F4u: goto label_2da1f4;
            case 0x2DA1F8u: goto label_2da1f8;
            case 0x2DA1FCu: goto label_2da1fc;
            case 0x2DA200u: goto label_2da200;
            case 0x2DA204u: goto label_2da204;
            case 0x2DA208u: goto label_2da208;
            case 0x2DA20Cu: goto label_2da20c;
            case 0x2DA210u: goto label_2da210;
            case 0x2DA214u: goto label_2da214;
            case 0x2DA218u: goto label_2da218;
            case 0x2DA21Cu: goto label_2da21c;
            case 0x2DA220u: goto label_2da220;
            case 0x2DA224u: goto label_2da224;
            case 0x2DA228u: goto label_2da228;
            case 0x2DA22Cu: goto label_2da22c;
            case 0x2DA230u: goto label_2da230;
            case 0x2DA234u: goto label_2da234;
            case 0x2DA238u: goto label_2da238;
            case 0x2DA23Cu: goto label_2da23c;
            case 0x2DA240u: goto label_2da240;
            case 0x2DA244u: goto label_2da244;
            case 0x2DA248u: goto label_2da248;
            case 0x2DA24Cu: goto label_2da24c;
            case 0x2DA250u: goto label_2da250;
            case 0x2DA254u: goto label_2da254;
            case 0x2DA258u: goto label_2da258;
            case 0x2DA25Cu: goto label_2da25c;
            case 0x2DA260u: goto label_2da260;
            case 0x2DA264u: goto label_2da264;
            case 0x2DA268u: goto label_2da268;
            case 0x2DA26Cu: goto label_2da26c;
            case 0x2DA270u: goto label_2da270;
            case 0x2DA274u: goto label_2da274;
            case 0x2DA278u: goto label_2da278;
            case 0x2DA27Cu: goto label_2da27c;
            case 0x2DA280u: goto label_2da280;
            case 0x2DA284u: goto label_2da284;
            case 0x2DA288u: goto label_2da288;
            case 0x2DA28Cu: goto label_2da28c;
            case 0x2DA290u: goto label_2da290;
            case 0x2DA294u: goto label_2da294;
            case 0x2DA298u: goto label_2da298;
            case 0x2DA29Cu: goto label_2da29c;
            case 0x2DA2A0u: goto label_2da2a0;
            case 0x2DA2A4u: goto label_2da2a4;
            case 0x2DA2A8u: goto label_2da2a8;
            case 0x2DA2ACu: goto label_2da2ac;
            case 0x2DA2B0u: goto label_2da2b0;
            case 0x2DA2B4u: goto label_2da2b4;
            case 0x2DA2B8u: goto label_2da2b8;
            case 0x2DA2BCu: goto label_2da2bc;
            case 0x2DA2C0u: goto label_2da2c0;
            case 0x2DA2C4u: goto label_2da2c4;
            case 0x2DA2C8u: goto label_2da2c8;
            case 0x2DA2CCu: goto label_2da2cc;
            case 0x2DA2D0u: goto label_2da2d0;
            case 0x2DA2D4u: goto label_2da2d4;
            case 0x2DA2D8u: goto label_2da2d8;
            case 0x2DA2DCu: goto label_2da2dc;
            case 0x2DA2E0u: goto label_2da2e0;
            case 0x2DA2E4u: goto label_2da2e4;
            case 0x2DA2E8u: goto label_2da2e8;
            case 0x2DA2ECu: goto label_2da2ec;
            case 0x2DA2F0u: goto label_2da2f0;
            case 0x2DA2F4u: goto label_2da2f4;
            case 0x2DA2F8u: goto label_2da2f8;
            case 0x2DA2FCu: goto label_2da2fc;
            case 0x2DA300u: goto label_2da300;
            case 0x2DA304u: goto label_2da304;
            case 0x2DA308u: goto label_2da308;
            case 0x2DA30Cu: goto label_2da30c;
            case 0x2DA310u: goto label_2da310;
            case 0x2DA314u: goto label_2da314;
            case 0x2DA318u: goto label_2da318;
            case 0x2DA31Cu: goto label_2da31c;
            case 0x2DA320u: goto label_2da320;
            case 0x2DA324u: goto label_2da324;
            case 0x2DA328u: goto label_2da328;
            case 0x2DA32Cu: goto label_2da32c;
            case 0x2DA330u: goto label_2da330;
            case 0x2DA334u: goto label_2da334;
            case 0x2DA338u: goto label_2da338;
            case 0x2DA33Cu: goto label_2da33c;
            case 0x2DA340u: goto label_2da340;
            case 0x2DA344u: goto label_2da344;
            case 0x2DA348u: goto label_2da348;
            case 0x2DA34Cu: goto label_2da34c;
            case 0x2DA350u: goto label_2da350;
            case 0x2DA354u: goto label_2da354;
            case 0x2DA358u: goto label_2da358;
            case 0x2DA35Cu: goto label_2da35c;
            case 0x2DA360u: goto label_2da360;
            case 0x2DA364u: goto label_2da364;
            case 0x2DA368u: goto label_2da368;
            case 0x2DA36Cu: goto label_2da36c;
            case 0x2DA370u: goto label_2da370;
            case 0x2DA374u: goto label_2da374;
            case 0x2DA378u: goto label_2da378;
            case 0x2DA37Cu: goto label_2da37c;
            case 0x2DA380u: goto label_2da380;
            case 0x2DA384u: goto label_2da384;
            case 0x2DA388u: goto label_2da388;
            case 0x2DA38Cu: goto label_2da38c;
            case 0x2DA390u: goto label_2da390;
            case 0x2DA394u: goto label_2da394;
            case 0x2DA398u: goto label_2da398;
            case 0x2DA39Cu: goto label_2da39c;
            case 0x2DA3A0u: goto label_2da3a0;
            case 0x2DA3A4u: goto label_2da3a4;
            case 0x2DA3A8u: goto label_2da3a8;
            case 0x2DA3ACu: goto label_2da3ac;
            case 0x2DA3B0u: goto label_2da3b0;
            case 0x2DA3B4u: goto label_2da3b4;
            case 0x2DA3B8u: goto label_2da3b8;
            case 0x2DA3BCu: goto label_2da3bc;
            case 0x2DA3C0u: goto label_2da3c0;
            case 0x2DA3C4u: goto label_2da3c4;
            case 0x2DA3C8u: goto label_2da3c8;
            case 0x2DA3CCu: goto label_2da3cc;
            case 0x2DA3D0u: goto label_2da3d0;
            case 0x2DA3D4u: goto label_2da3d4;
            case 0x2DA3D8u: goto label_2da3d8;
            case 0x2DA3DCu: goto label_2da3dc;
            case 0x2DA3E0u: goto label_2da3e0;
            case 0x2DA3E4u: goto label_2da3e4;
            case 0x2DA3E8u: goto label_2da3e8;
            case 0x2DA3ECu: goto label_2da3ec;
            case 0x2DA3F0u: goto label_2da3f0;
            case 0x2DA3F4u: goto label_2da3f4;
            case 0x2DA3F8u: goto label_2da3f8;
            case 0x2DA3FCu: goto label_2da3fc;
            case 0x2DA400u: goto label_2da400;
            case 0x2DA404u: goto label_2da404;
            case 0x2DA408u: goto label_2da408;
            case 0x2DA40Cu: goto label_2da40c;
            case 0x2DA410u: goto label_2da410;
            case 0x2DA414u: goto label_2da414;
            case 0x2DA418u: goto label_2da418;
            case 0x2DA41Cu: goto label_2da41c;
            case 0x2DA420u: goto label_2da420;
            case 0x2DA424u: goto label_2da424;
            case 0x2DA428u: goto label_2da428;
            case 0x2DA42Cu: goto label_2da42c;
            case 0x2DA430u: goto label_2da430;
            case 0x2DA434u: goto label_2da434;
            case 0x2DA438u: goto label_2da438;
            case 0x2DA43Cu: goto label_2da43c;
            case 0x2DA440u: goto label_2da440;
            case 0x2DA444u: goto label_2da444;
            case 0x2DA448u: goto label_2da448;
            case 0x2DA44Cu: goto label_2da44c;
            case 0x2DA450u: goto label_2da450;
            case 0x2DA454u: goto label_2da454;
            case 0x2DA458u: goto label_2da458;
            case 0x2DA45Cu: goto label_2da45c;
            case 0x2DA460u: goto label_2da460;
            case 0x2DA464u: goto label_2da464;
            case 0x2DA468u: goto label_2da468;
            case 0x2DA46Cu: goto label_2da46c;
            case 0x2DA470u: goto label_2da470;
            case 0x2DA474u: goto label_2da474;
            case 0x2DA478u: goto label_2da478;
            case 0x2DA47Cu: goto label_2da47c;
            case 0x2DA480u: goto label_2da480;
            case 0x2DA484u: goto label_2da484;
            case 0x2DA488u: goto label_2da488;
            case 0x2DA48Cu: goto label_2da48c;
            case 0x2DA490u: goto label_2da490;
            case 0x2DA494u: goto label_2da494;
            case 0x2DA498u: goto label_2da498;
            default: break;
        }
        return;
    }
label_fallthrough_0x2da494:
    ctx->pc = 0x2DA49Cu;
}
