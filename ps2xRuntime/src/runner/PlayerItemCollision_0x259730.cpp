#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerItemCollision
// Address: 0x259730 - 0x259e44
void PlayerItemCollision_0x259730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x259730u;

label_259730:
    // 0x259730: 0x27bdff50
    ctx->pc = 0x259730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_259734:
    // 0x259734: 0xffbf00a0
    ctx->pc = 0x259734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_259738:
    // 0x259738: 0xffb40090
    ctx->pc = 0x259738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_25973c:
    // 0x25973c: 0xffb30080
    ctx->pc = 0x25973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_259740:
    // 0x259740: 0xffb20070
    ctx->pc = 0x259740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_259744:
    // 0x259744: 0xffb10060
    ctx->pc = 0x259744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_259748:
    // 0x259748: 0xffb00050
    ctx->pc = 0x259748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_25974c:
    // 0x25974c: 0x80882d
    ctx->pc = 0x25974cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259750:
    // 0x259750: 0xa0802d
    ctx->pc = 0x259750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259754:
    // 0x259754: 0xa02d
    ctx->pc = 0x259754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259758:
    // 0x259758: 0x8e130000
    ctx->pc = 0x259758u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25975c:
    // 0x25975c: 0x26720004
    ctx->pc = 0x25975cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 4));
label_259760:
    // 0x259760: 0x8e240000
    ctx->pc = 0x259760u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259764:
    // 0x259764: 0xc08c612
label_259768:
    if (ctx->pc == 0x259768u) {
        ctx->pc = 0x259768u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25976Cu;
        goto label_25976c;
    }
    ctx->pc = 0x259764u;
    SET_GPR_U32(ctx, 31, 0x25976Cu);
    ctx->pc = 0x259768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231848u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerPos_0x231848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25976Cu; }
    }
    if (ctx->pc != 0x25976Cu) { return; }
    ctx->pc = 0x25976Cu;
label_25976c:
    // 0x25976c: 0x200202d
    ctx->pc = 0x25976cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259770:
    // 0x259770: 0xc094e70
label_259774:
    if (ctx->pc == 0x259774u) {
        ctx->pc = 0x259774u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x259778u;
        goto label_259778;
    }
    ctx->pc = 0x259770u;
    SET_GPR_U32(ctx, 31, 0x259778u);
    ctx->pc = 0x259774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2539C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetItemPos_0x2539c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259778u; }
    }
    if (ctx->pc != 0x259778u) { return; }
    ctx->pc = 0x259778u;
label_259778:
    // 0x259778: 0x8e620000
    ctx->pc = 0x259778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25977c:
    // 0x25977c: 0x2443ffff
    ctx->pc = 0x25977cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_259780:
    // 0x259780: 0x2c62000c
    ctx->pc = 0x259780u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
label_259784:
    // 0x259784: 0x104001a6
label_259788:
    if (ctx->pc == 0x259788u) {
        ctx->pc = 0x259788u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x25978Cu;
        goto label_25978c;
    }
    ctx->pc = 0x259784u;
    {
        const bool branch_taken_0x259784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259788u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x259784) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x25978Cu;
label_25978c:
    // 0x25978c: 0x24428d30
    ctx->pc = 0x25978cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937904));
label_259790:
    // 0x259790: 0x31880
    ctx->pc = 0x259790u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_259794:
    // 0x259794: 0x621821
    ctx->pc = 0x259794u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259798:
    // 0x259798: 0x8c620000
    ctx->pc = 0x259798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25979c:
    // 0x25979c: 0x400008
label_2597a0:
    if (ctx->pc == 0x2597A0u) {
        ctx->pc = 0x2597A4u;
        goto label_2597a4;
    }
    ctx->pc = 0x25979Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259730u: goto label_259730;
            case 0x259734u: goto label_259734;
            case 0x259738u: goto label_259738;
            case 0x25973Cu: goto label_25973c;
            case 0x259740u: goto label_259740;
            case 0x259744u: goto label_259744;
            case 0x259748u: goto label_259748;
            case 0x25974Cu: goto label_25974c;
            case 0x259750u: goto label_259750;
            case 0x259754u: goto label_259754;
            case 0x259758u: goto label_259758;
            case 0x25975Cu: goto label_25975c;
            case 0x259760u: goto label_259760;
            case 0x259764u: goto label_259764;
            case 0x259768u: goto label_259768;
            case 0x25976Cu: goto label_25976c;
            case 0x259770u: goto label_259770;
            case 0x259774u: goto label_259774;
            case 0x259778u: goto label_259778;
            case 0x25977Cu: goto label_25977c;
            case 0x259780u: goto label_259780;
            case 0x259784u: goto label_259784;
            case 0x259788u: goto label_259788;
            case 0x25978Cu: goto label_25978c;
            case 0x259790u: goto label_259790;
            case 0x259794u: goto label_259794;
            case 0x259798u: goto label_259798;
            case 0x25979Cu: goto label_25979c;
            case 0x2597A0u: goto label_2597a0;
            case 0x2597A4u: goto label_2597a4;
            case 0x2597A8u: goto label_2597a8;
            case 0x2597ACu: goto label_2597ac;
            case 0x2597B0u: goto label_2597b0;
            case 0x2597B4u: goto label_2597b4;
            case 0x2597B8u: goto label_2597b8;
            case 0x2597BCu: goto label_2597bc;
            case 0x2597C0u: goto label_2597c0;
            case 0x2597C4u: goto label_2597c4;
            case 0x2597C8u: goto label_2597c8;
            case 0x2597CCu: goto label_2597cc;
            case 0x2597D0u: goto label_2597d0;
            case 0x2597D4u: goto label_2597d4;
            case 0x2597D8u: goto label_2597d8;
            case 0x2597DCu: goto label_2597dc;
            case 0x2597E0u: goto label_2597e0;
            case 0x2597E4u: goto label_2597e4;
            case 0x2597E8u: goto label_2597e8;
            case 0x2597ECu: goto label_2597ec;
            case 0x2597F0u: goto label_2597f0;
            case 0x2597F4u: goto label_2597f4;
            case 0x2597F8u: goto label_2597f8;
            case 0x2597FCu: goto label_2597fc;
            case 0x259800u: goto label_259800;
            case 0x259804u: goto label_259804;
            case 0x259808u: goto label_259808;
            case 0x25980Cu: goto label_25980c;
            case 0x259810u: goto label_259810;
            case 0x259814u: goto label_259814;
            case 0x259818u: goto label_259818;
            case 0x25981Cu: goto label_25981c;
            case 0x259820u: goto label_259820;
            case 0x259824u: goto label_259824;
            case 0x259828u: goto label_259828;
            case 0x25982Cu: goto label_25982c;
            case 0x259830u: goto label_259830;
            case 0x259834u: goto label_259834;
            case 0x259838u: goto label_259838;
            case 0x25983Cu: goto label_25983c;
            case 0x259840u: goto label_259840;
            case 0x259844u: goto label_259844;
            case 0x259848u: goto label_259848;
            case 0x25984Cu: goto label_25984c;
            case 0x259850u: goto label_259850;
            case 0x259854u: goto label_259854;
            case 0x259858u: goto label_259858;
            case 0x25985Cu: goto label_25985c;
            case 0x259860u: goto label_259860;
            case 0x259864u: goto label_259864;
            case 0x259868u: goto label_259868;
            case 0x25986Cu: goto label_25986c;
            case 0x259870u: goto label_259870;
            case 0x259874u: goto label_259874;
            case 0x259878u: goto label_259878;
            case 0x25987Cu: goto label_25987c;
            case 0x259880u: goto label_259880;
            case 0x259884u: goto label_259884;
            case 0x259888u: goto label_259888;
            case 0x25988Cu: goto label_25988c;
            case 0x259890u: goto label_259890;
            case 0x259894u: goto label_259894;
            case 0x259898u: goto label_259898;
            case 0x25989Cu: goto label_25989c;
            case 0x2598A0u: goto label_2598a0;
            case 0x2598A4u: goto label_2598a4;
            case 0x2598A8u: goto label_2598a8;
            case 0x2598ACu: goto label_2598ac;
            case 0x2598B0u: goto label_2598b0;
            case 0x2598B4u: goto label_2598b4;
            case 0x2598B8u: goto label_2598b8;
            case 0x2598BCu: goto label_2598bc;
            case 0x2598C0u: goto label_2598c0;
            case 0x2598C4u: goto label_2598c4;
            case 0x2598C8u: goto label_2598c8;
            case 0x2598CCu: goto label_2598cc;
            case 0x2598D0u: goto label_2598d0;
            case 0x2598D4u: goto label_2598d4;
            case 0x2598D8u: goto label_2598d8;
            case 0x2598DCu: goto label_2598dc;
            case 0x2598E0u: goto label_2598e0;
            case 0x2598E4u: goto label_2598e4;
            case 0x2598E8u: goto label_2598e8;
            case 0x2598ECu: goto label_2598ec;
            case 0x2598F0u: goto label_2598f0;
            case 0x2598F4u: goto label_2598f4;
            case 0x2598F8u: goto label_2598f8;
            case 0x2598FCu: goto label_2598fc;
            case 0x259900u: goto label_259900;
            case 0x259904u: goto label_259904;
            case 0x259908u: goto label_259908;
            case 0x25990Cu: goto label_25990c;
            case 0x259910u: goto label_259910;
            case 0x259914u: goto label_259914;
            case 0x259918u: goto label_259918;
            case 0x25991Cu: goto label_25991c;
            case 0x259920u: goto label_259920;
            case 0x259924u: goto label_259924;
            case 0x259928u: goto label_259928;
            case 0x25992Cu: goto label_25992c;
            case 0x259930u: goto label_259930;
            case 0x259934u: goto label_259934;
            case 0x259938u: goto label_259938;
            case 0x25993Cu: goto label_25993c;
            case 0x259940u: goto label_259940;
            case 0x259944u: goto label_259944;
            case 0x259948u: goto label_259948;
            case 0x25994Cu: goto label_25994c;
            case 0x259950u: goto label_259950;
            case 0x259954u: goto label_259954;
            case 0x259958u: goto label_259958;
            case 0x25995Cu: goto label_25995c;
            case 0x259960u: goto label_259960;
            case 0x259964u: goto label_259964;
            case 0x259968u: goto label_259968;
            case 0x25996Cu: goto label_25996c;
            case 0x259970u: goto label_259970;
            case 0x259974u: goto label_259974;
            case 0x259978u: goto label_259978;
            case 0x25997Cu: goto label_25997c;
            case 0x259980u: goto label_259980;
            case 0x259984u: goto label_259984;
            case 0x259988u: goto label_259988;
            case 0x25998Cu: goto label_25998c;
            case 0x259990u: goto label_259990;
            case 0x259994u: goto label_259994;
            case 0x259998u: goto label_259998;
            case 0x25999Cu: goto label_25999c;
            case 0x2599A0u: goto label_2599a0;
            case 0x2599A4u: goto label_2599a4;
            case 0x2599A8u: goto label_2599a8;
            case 0x2599ACu: goto label_2599ac;
            case 0x2599B0u: goto label_2599b0;
            case 0x2599B4u: goto label_2599b4;
            case 0x2599B8u: goto label_2599b8;
            case 0x2599BCu: goto label_2599bc;
            case 0x2599C0u: goto label_2599c0;
            case 0x2599C4u: goto label_2599c4;
            case 0x2599C8u: goto label_2599c8;
            case 0x2599CCu: goto label_2599cc;
            case 0x2599D0u: goto label_2599d0;
            case 0x2599D4u: goto label_2599d4;
            case 0x2599D8u: goto label_2599d8;
            case 0x2599DCu: goto label_2599dc;
            case 0x2599E0u: goto label_2599e0;
            case 0x2599E4u: goto label_2599e4;
            case 0x2599E8u: goto label_2599e8;
            case 0x2599ECu: goto label_2599ec;
            case 0x2599F0u: goto label_2599f0;
            case 0x2599F4u: goto label_2599f4;
            case 0x2599F8u: goto label_2599f8;
            case 0x2599FCu: goto label_2599fc;
            case 0x259A00u: goto label_259a00;
            case 0x259A04u: goto label_259a04;
            case 0x259A08u: goto label_259a08;
            case 0x259A0Cu: goto label_259a0c;
            case 0x259A10u: goto label_259a10;
            case 0x259A14u: goto label_259a14;
            case 0x259A18u: goto label_259a18;
            case 0x259A1Cu: goto label_259a1c;
            case 0x259A20u: goto label_259a20;
            case 0x259A24u: goto label_259a24;
            case 0x259A28u: goto label_259a28;
            case 0x259A2Cu: goto label_259a2c;
            case 0x259A30u: goto label_259a30;
            case 0x259A34u: goto label_259a34;
            case 0x259A38u: goto label_259a38;
            case 0x259A3Cu: goto label_259a3c;
            case 0x259A40u: goto label_259a40;
            case 0x259A44u: goto label_259a44;
            case 0x259A48u: goto label_259a48;
            case 0x259A4Cu: goto label_259a4c;
            case 0x259A50u: goto label_259a50;
            case 0x259A54u: goto label_259a54;
            case 0x259A58u: goto label_259a58;
            case 0x259A5Cu: goto label_259a5c;
            case 0x259A60u: goto label_259a60;
            case 0x259A64u: goto label_259a64;
            case 0x259A68u: goto label_259a68;
            case 0x259A6Cu: goto label_259a6c;
            case 0x259A70u: goto label_259a70;
            case 0x259A74u: goto label_259a74;
            case 0x259A78u: goto label_259a78;
            case 0x259A7Cu: goto label_259a7c;
            case 0x259A80u: goto label_259a80;
            case 0x259A84u: goto label_259a84;
            case 0x259A88u: goto label_259a88;
            case 0x259A8Cu: goto label_259a8c;
            case 0x259A90u: goto label_259a90;
            case 0x259A94u: goto label_259a94;
            case 0x259A98u: goto label_259a98;
            case 0x259A9Cu: goto label_259a9c;
            case 0x259AA0u: goto label_259aa0;
            case 0x259AA4u: goto label_259aa4;
            case 0x259AA8u: goto label_259aa8;
            case 0x259AACu: goto label_259aac;
            case 0x259AB0u: goto label_259ab0;
            case 0x259AB4u: goto label_259ab4;
            case 0x259AB8u: goto label_259ab8;
            case 0x259ABCu: goto label_259abc;
            case 0x259AC0u: goto label_259ac0;
            case 0x259AC4u: goto label_259ac4;
            case 0x259AC8u: goto label_259ac8;
            case 0x259ACCu: goto label_259acc;
            case 0x259AD0u: goto label_259ad0;
            case 0x259AD4u: goto label_259ad4;
            case 0x259AD8u: goto label_259ad8;
            case 0x259ADCu: goto label_259adc;
            case 0x259AE0u: goto label_259ae0;
            case 0x259AE4u: goto label_259ae4;
            case 0x259AE8u: goto label_259ae8;
            case 0x259AECu: goto label_259aec;
            case 0x259AF0u: goto label_259af0;
            case 0x259AF4u: goto label_259af4;
            case 0x259AF8u: goto label_259af8;
            case 0x259AFCu: goto label_259afc;
            case 0x259B00u: goto label_259b00;
            case 0x259B04u: goto label_259b04;
            case 0x259B08u: goto label_259b08;
            case 0x259B0Cu: goto label_259b0c;
            case 0x259B10u: goto label_259b10;
            case 0x259B14u: goto label_259b14;
            case 0x259B18u: goto label_259b18;
            case 0x259B1Cu: goto label_259b1c;
            case 0x259B20u: goto label_259b20;
            case 0x259B24u: goto label_259b24;
            case 0x259B28u: goto label_259b28;
            case 0x259B2Cu: goto label_259b2c;
            case 0x259B30u: goto label_259b30;
            case 0x259B34u: goto label_259b34;
            case 0x259B38u: goto label_259b38;
            case 0x259B3Cu: goto label_259b3c;
            case 0x259B40u: goto label_259b40;
            case 0x259B44u: goto label_259b44;
            case 0x259B48u: goto label_259b48;
            case 0x259B4Cu: goto label_259b4c;
            case 0x259B50u: goto label_259b50;
            case 0x259B54u: goto label_259b54;
            case 0x259B58u: goto label_259b58;
            case 0x259B5Cu: goto label_259b5c;
            case 0x259B60u: goto label_259b60;
            case 0x259B64u: goto label_259b64;
            case 0x259B68u: goto label_259b68;
            case 0x259B6Cu: goto label_259b6c;
            case 0x259B70u: goto label_259b70;
            case 0x259B74u: goto label_259b74;
            case 0x259B78u: goto label_259b78;
            case 0x259B7Cu: goto label_259b7c;
            case 0x259B80u: goto label_259b80;
            case 0x259B84u: goto label_259b84;
            case 0x259B88u: goto label_259b88;
            case 0x259B8Cu: goto label_259b8c;
            case 0x259B90u: goto label_259b90;
            case 0x259B94u: goto label_259b94;
            case 0x259B98u: goto label_259b98;
            case 0x259B9Cu: goto label_259b9c;
            case 0x259BA0u: goto label_259ba0;
            case 0x259BA4u: goto label_259ba4;
            case 0x259BA8u: goto label_259ba8;
            case 0x259BACu: goto label_259bac;
            case 0x259BB0u: goto label_259bb0;
            case 0x259BB4u: goto label_259bb4;
            case 0x259BB8u: goto label_259bb8;
            case 0x259BBCu: goto label_259bbc;
            case 0x259BC0u: goto label_259bc0;
            case 0x259BC4u: goto label_259bc4;
            case 0x259BC8u: goto label_259bc8;
            case 0x259BCCu: goto label_259bcc;
            case 0x259BD0u: goto label_259bd0;
            case 0x259BD4u: goto label_259bd4;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BDCu: goto label_259bdc;
            case 0x259BE0u: goto label_259be0;
            case 0x259BE4u: goto label_259be4;
            case 0x259BE8u: goto label_259be8;
            case 0x259BECu: goto label_259bec;
            case 0x259BF0u: goto label_259bf0;
            case 0x259BF4u: goto label_259bf4;
            case 0x259BF8u: goto label_259bf8;
            case 0x259BFCu: goto label_259bfc;
            case 0x259C00u: goto label_259c00;
            case 0x259C04u: goto label_259c04;
            case 0x259C08u: goto label_259c08;
            case 0x259C0Cu: goto label_259c0c;
            case 0x259C10u: goto label_259c10;
            case 0x259C14u: goto label_259c14;
            case 0x259C18u: goto label_259c18;
            case 0x259C1Cu: goto label_259c1c;
            case 0x259C20u: goto label_259c20;
            case 0x259C24u: goto label_259c24;
            case 0x259C28u: goto label_259c28;
            case 0x259C2Cu: goto label_259c2c;
            case 0x259C30u: goto label_259c30;
            case 0x259C34u: goto label_259c34;
            case 0x259C38u: goto label_259c38;
            case 0x259C3Cu: goto label_259c3c;
            case 0x259C40u: goto label_259c40;
            case 0x259C44u: goto label_259c44;
            case 0x259C48u: goto label_259c48;
            case 0x259C4Cu: goto label_259c4c;
            case 0x259C50u: goto label_259c50;
            case 0x259C54u: goto label_259c54;
            case 0x259C58u: goto label_259c58;
            case 0x259C5Cu: goto label_259c5c;
            case 0x259C60u: goto label_259c60;
            case 0x259C64u: goto label_259c64;
            case 0x259C68u: goto label_259c68;
            case 0x259C6Cu: goto label_259c6c;
            case 0x259C70u: goto label_259c70;
            case 0x259C74u: goto label_259c74;
            case 0x259C78u: goto label_259c78;
            case 0x259C7Cu: goto label_259c7c;
            case 0x259C80u: goto label_259c80;
            case 0x259C84u: goto label_259c84;
            case 0x259C88u: goto label_259c88;
            case 0x259C8Cu: goto label_259c8c;
            case 0x259C90u: goto label_259c90;
            case 0x259C94u: goto label_259c94;
            case 0x259C98u: goto label_259c98;
            case 0x259C9Cu: goto label_259c9c;
            case 0x259CA0u: goto label_259ca0;
            case 0x259CA4u: goto label_259ca4;
            case 0x259CA8u: goto label_259ca8;
            case 0x259CACu: goto label_259cac;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CB4u: goto label_259cb4;
            case 0x259CB8u: goto label_259cb8;
            case 0x259CBCu: goto label_259cbc;
            case 0x259CC0u: goto label_259cc0;
            case 0x259CC4u: goto label_259cc4;
            case 0x259CC8u: goto label_259cc8;
            case 0x259CCCu: goto label_259ccc;
            case 0x259CD0u: goto label_259cd0;
            case 0x259CD4u: goto label_259cd4;
            case 0x259CD8u: goto label_259cd8;
            case 0x259CDCu: goto label_259cdc;
            case 0x259CE0u: goto label_259ce0;
            case 0x259CE4u: goto label_259ce4;
            case 0x259CE8u: goto label_259ce8;
            case 0x259CECu: goto label_259cec;
            case 0x259CF0u: goto label_259cf0;
            case 0x259CF4u: goto label_259cf4;
            case 0x259CF8u: goto label_259cf8;
            case 0x259CFCu: goto label_259cfc;
            case 0x259D00u: goto label_259d00;
            case 0x259D04u: goto label_259d04;
            case 0x259D08u: goto label_259d08;
            case 0x259D0Cu: goto label_259d0c;
            case 0x259D10u: goto label_259d10;
            case 0x259D14u: goto label_259d14;
            case 0x259D18u: goto label_259d18;
            case 0x259D1Cu: goto label_259d1c;
            case 0x259D20u: goto label_259d20;
            case 0x259D24u: goto label_259d24;
            case 0x259D28u: goto label_259d28;
            case 0x259D2Cu: goto label_259d2c;
            case 0x259D30u: goto label_259d30;
            case 0x259D34u: goto label_259d34;
            case 0x259D38u: goto label_259d38;
            case 0x259D3Cu: goto label_259d3c;
            case 0x259D40u: goto label_259d40;
            case 0x259D44u: goto label_259d44;
            case 0x259D48u: goto label_259d48;
            case 0x259D4Cu: goto label_259d4c;
            case 0x259D50u: goto label_259d50;
            case 0x259D54u: goto label_259d54;
            case 0x259D58u: goto label_259d58;
            case 0x259D5Cu: goto label_259d5c;
            case 0x259D60u: goto label_259d60;
            case 0x259D64u: goto label_259d64;
            case 0x259D68u: goto label_259d68;
            case 0x259D6Cu: goto label_259d6c;
            case 0x259D70u: goto label_259d70;
            case 0x259D74u: goto label_259d74;
            case 0x259D78u: goto label_259d78;
            case 0x259D7Cu: goto label_259d7c;
            case 0x259D80u: goto label_259d80;
            case 0x259D84u: goto label_259d84;
            case 0x259D88u: goto label_259d88;
            case 0x259D8Cu: goto label_259d8c;
            case 0x259D90u: goto label_259d90;
            case 0x259D94u: goto label_259d94;
            case 0x259D98u: goto label_259d98;
            case 0x259D9Cu: goto label_259d9c;
            case 0x259DA0u: goto label_259da0;
            case 0x259DA4u: goto label_259da4;
            case 0x259DA8u: goto label_259da8;
            case 0x259DACu: goto label_259dac;
            case 0x259DB0u: goto label_259db0;
            case 0x259DB4u: goto label_259db4;
            case 0x259DB8u: goto label_259db8;
            case 0x259DBCu: goto label_259dbc;
            case 0x259DC0u: goto label_259dc0;
            case 0x259DC4u: goto label_259dc4;
            case 0x259DC8u: goto label_259dc8;
            case 0x259DCCu: goto label_259dcc;
            case 0x259DD0u: goto label_259dd0;
            case 0x259DD4u: goto label_259dd4;
            case 0x259DD8u: goto label_259dd8;
            case 0x259DDCu: goto label_259ddc;
            case 0x259DE0u: goto label_259de0;
            case 0x259DE4u: goto label_259de4;
            case 0x259DE8u: goto label_259de8;
            case 0x259DECu: goto label_259dec;
            case 0x259DF0u: goto label_259df0;
            case 0x259DF4u: goto label_259df4;
            case 0x259DF8u: goto label_259df8;
            case 0x259DFCu: goto label_259dfc;
            case 0x259E00u: goto label_259e00;
            case 0x259E04u: goto label_259e04;
            case 0x259E08u: goto label_259e08;
            case 0x259E0Cu: goto label_259e0c;
            case 0x259E10u: goto label_259e10;
            case 0x259E14u: goto label_259e14;
            case 0x259E18u: goto label_259e18;
            case 0x259E1Cu: goto label_259e1c;
            case 0x259E20u: goto label_259e20;
            case 0x259E24u: goto label_259e24;
            case 0x259E28u: goto label_259e28;
            case 0x259E2Cu: goto label_259e2c;
            case 0x259E30u: goto label_259e30;
            case 0x259E34u: goto label_259e34;
            case 0x259E38u: goto label_259e38;
            case 0x259E3Cu: goto label_259e3c;
            case 0x259E40u: goto label_259e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2597A4u;
label_2597a4:
    // 0x2597a4: 0x86020100
    ctx->pc = 0x2597a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
label_2597a8:
    // 0x2597a8: 0x1c40019e
label_2597ac:
    if (ctx->pc == 0x2597ACu) {
        ctx->pc = 0x2597ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2597B0u;
        goto label_2597b0;
    }
    ctx->pc = 0x2597A8u;
    {
        const bool branch_taken_0x2597a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2597ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2597a8) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x2597B0u;
label_2597b0:
    // 0x2597b0: 0x8e220888
    ctx->pc = 0x2597b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2184)));
label_2597b4:
    // 0x2597b4: 0x5040019a
label_2597b8:
    if (ctx->pc == 0x2597B8u) {
        ctx->pc = 0x2597B8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 16));
        ctx->pc = 0x2597BCu;
        goto label_2597bc;
    }
    ctx->pc = 0x2597B4u;
    {
        const bool branch_taken_0x2597b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2597b4) {
            ctx->pc = 0x2597B8u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 16));
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x2597BCu;
label_2597bc:
    // 0x2597bc: 0x10000199
label_2597c0:
    if (ctx->pc == 0x2597C0u) {
        ctx->pc = 0x2597C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2597C4u;
        goto label_2597c4;
    }
    ctx->pc = 0x2597BCu;
    {
        const bool branch_taken_0x2597bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2597C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2597bc) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x2597C4u;
label_2597c4:
    // 0x2597c4: 0x820300dc
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_2597c8:
    // 0x2597c8: 0x24020002
    ctx->pc = 0x2597c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2597cc:
    // 0x2597cc: 0x14620029
label_2597d0:
    if (ctx->pc == 0x2597D0u) {
        ctx->pc = 0x2597D0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2597D4u;
        goto label_2597d4;
    }
    ctx->pc = 0x2597CCu;
    {
        const bool branch_taken_0x2597cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2597D0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2597cc) {
            ctx->pc = 0x259874u;
            goto label_259874;
        }
    }
    ctx->pc = 0x2597D4u;
label_2597d4:
    // 0x2597d4: 0x8e630004
    ctx->pc = 0x2597d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2597d8:
    // 0x2597d8: 0x2402002f
    ctx->pc = 0x2597d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
label_2597dc:
    // 0x2597dc: 0x5462001e
label_2597e0:
    if (ctx->pc == 0x2597E0u) {
        ctx->pc = 0x2597E0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x2597E4u;
        goto label_2597e4;
    }
    ctx->pc = 0x2597DCu;
    {
        const bool branch_taken_0x2597dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2597dc) {
            ctx->pc = 0x2597E0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->pc = 0x259858u;
            goto label_259858;
        }
    }
    ctx->pc = 0x2597E4u;
label_2597e4:
    // 0x2597e4: 0x8e1200f4
    ctx->pc = 0x2597e4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_2597e8:
    // 0x2597e8: 0x2a420019
    ctx->pc = 0x2597e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 25));
label_2597ec:
    // 0x2597ec: 0x54400006
label_2597f0:
    if (ctx->pc == 0x2597F0u) {
        ctx->pc = 0x2597F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2597F4u;
        goto label_2597f4;
    }
    ctx->pc = 0x2597ECu;
    {
        const bool branch_taken_0x2597ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2597ec) {
            ctx->pc = 0x2597F0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x259808u;
            goto label_259808;
        }
    }
    ctx->pc = 0x2597F4u;
label_2597f4:
    // 0x2597f4: 0x24040011
    ctx->pc = 0x2597f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
label_2597f8:
    // 0x2597f8: 0x8e250000
    ctx->pc = 0x2597f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2597fc:
    // 0x2597fc: 0xc0a3a1c
label_259800:
    if (ctx->pc == 0x259800u) {
        ctx->pc = 0x259800u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x259804u;
        goto label_259804;
    }
    ctx->pc = 0x2597FCu;
    SET_GPR_U32(ctx, 31, 0x259804u);
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259804u; }
    }
    if (ctx->pc != 0x259804u) { return; }
    ctx->pc = 0x259804u;
label_259804:
    // 0x259804: 0x8e240000
    ctx->pc = 0x259804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259808:
    // 0x259808: 0xc08d1e2
label_25980c:
    if (ctx->pc == 0x25980Cu) {
        ctx->pc = 0x25980Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259810u;
        goto label_259810;
    }
    ctx->pc = 0x259808u;
    SET_GPR_U32(ctx, 31, 0x259810u);
    ctx->pc = 0x25980Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234788u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerGiveGold_0x234788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259810u; }
    }
    if (ctx->pc != 0x259810u) { return; }
    ctx->pc = 0x259810u;
label_259810:
    // 0x259810: 0xc098258
label_259814:
    if (ctx->pc == 0x259814u) {
        ctx->pc = 0x259814u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259818u;
        goto label_259818;
    }
    ctx->pc = 0x259810u;
    SET_GPR_U32(ctx, 31, 0x259818u);
    ctx->pc = 0x259814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x260960u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPickup_0x260960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259818u; }
    }
    if (ctx->pc != 0x259818u) { return; }
    ctx->pc = 0x259818u;
label_259818:
    // 0x259818: 0x8e240000
    ctx->pc = 0x259818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25981c:
    // 0x25981c: 0x24050001
    ctx->pc = 0x25981cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_259820:
    // 0x259820: 0xc08ac74
label_259824:
    if (ctx->pc == 0x259824u) {
        ctx->pc = 0x259824u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259828u;
        goto label_259828;
    }
    ctx->pc = 0x259820u;
    SET_GPR_U32(ctx, 31, 0x259828u);
    ctx->pc = 0x259824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_got_it_0x22b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259828u; }
    }
    if (ctx->pc != 0x259828u) { return; }
    ctx->pc = 0x259828u;
label_259828:
    // 0x259828: 0x200202d
    ctx->pc = 0x259828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25982c:
    // 0x25982c: 0xc094dfa
label_259830:
    if (ctx->pc == 0x259830u) {
        ctx->pc = 0x259830u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x259834u;
        goto label_259834;
    }
    ctx->pc = 0x25982Cu;
    SET_GPR_U32(ctx, 31, 0x259834u);
    ctx->pc = 0x259830u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2537E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpireItem_0x2537e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259834u; }
    }
    if (ctx->pc != 0x259834u) { return; }
    ctx->pc = 0x259834u;
label_259834:
    // 0x259834: 0x8e22000c
    ctx->pc = 0x259834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_259838:
    // 0x259838: 0x2403001c
    ctx->pc = 0x259838u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_25983c:
    // 0x25983c: 0x431018
    ctx->pc = 0x25983cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_259840:
    // 0x259840: 0x26230b40
    ctx->pc = 0x259840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2880));
label_259844:
    // 0x259844: 0x621821
    ctx->pc = 0x259844u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259848:
    // 0x259848: 0x8c620000
    ctx->pc = 0x259848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25984c:
    // 0x25984c: 0x2421021
    ctx->pc = 0x25984cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_259850:
    // 0x259850: 0x10000173
label_259854:
    if (ctx->pc == 0x259854u) {
        ctx->pc = 0x259854u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x259858u;
        goto label_259858;
    }
    ctx->pc = 0x259850u;
    {
        const bool branch_taken_0x259850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259854u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x259850) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259858u;
label_259858:
    // 0x259858: 0x10800172
label_25985c:
    if (ctx->pc == 0x25985Cu) {
        ctx->pc = 0x25985Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259860u;
        goto label_259860;
    }
    ctx->pc = 0x259858u;
    {
        const bool branch_taken_0x259858 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25985Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259858) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259860u;
label_259860:
    // 0x259860: 0x8e220888
    ctx->pc = 0x259860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2184)));
label_259864:
    // 0x259864: 0x1440016e
label_259868:
    if (ctx->pc == 0x259868u) {
        ctx->pc = 0x259868u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25986Cu;
        goto label_25986c;
    }
    ctx->pc = 0x259864u;
    {
        const bool branch_taken_0x259864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259868u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259864) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x25986Cu;
label_25986c:
    // 0x25986c: 0x1000016c
label_259870:
    if (ctx->pc == 0x259870u) {
        ctx->pc = 0x259870u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 4));
        ctx->pc = 0x259874u;
        goto label_259874;
    }
    ctx->pc = 0x25986Cu;
    {
        const bool branch_taken_0x25986c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259870u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 4));
        if (branch_taken_0x25986c) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259874u;
label_259874:
    // 0x259874: 0xde0200d8
    ctx->pc = 0x259874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 216)));
label_259878:
    // 0x259878: 0x240300ff
    ctx->pc = 0x259878u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
label_25987c:
    // 0x25987c: 0x3183c
    ctx->pc = 0x25987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_259880:
    // 0x259880: 0x34630011
    ctx->pc = 0x259880u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
label_259884:
    // 0x259884: 0x431024
    ctx->pc = 0x259884u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_259888:
    // 0x259888: 0x24030010
    ctx->pc = 0x259888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
label_25988c:
    // 0x25988c: 0x14430165
label_259890:
    if (ctx->pc == 0x259890u) {
        ctx->pc = 0x259890u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259894u;
        goto label_259894;
    }
    ctx->pc = 0x25988Cu;
    {
        const bool branch_taken_0x25988c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x259890u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25988c) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259894u;
label_259894:
    // 0x259894: 0xc096d38
label_259898:
    if (ctx->pc == 0x259898u) {
        ctx->pc = 0x259898u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25989Cu;
        goto label_25989c;
    }
    ctx->pc = 0x259894u;
    SET_GPR_U32(ctx, 31, 0x25989Cu);
    ctx->pc = 0x259898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25B4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        use_key_0x25b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25989Cu; }
    }
    if (ctx->pc != 0x25989Cu) { return; }
    ctx->pc = 0x25989Cu;
label_25989c:
    // 0x25989c: 0x5040000f
label_2598a0:
    if (ctx->pc == 0x2598A0u) {
        ctx->pc = 0x2598A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x2598A4u;
        goto label_2598a4;
    }
    ctx->pc = 0x25989Cu;
    {
        const bool branch_taken_0x25989c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25989c) {
            ctx->pc = 0x2598A0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 96));
            ctx->pc = 0x2598DCu;
            goto label_2598dc;
        }
    }
    ctx->pc = 0x2598A4u;
label_2598a4:
    // 0x2598a4: 0xc098252
label_2598a8:
    if (ctx->pc == 0x2598A8u) {
        ctx->pc = 0x2598A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2598ACu;
        goto label_2598ac;
    }
    ctx->pc = 0x2598A4u;
    SET_GPR_U32(ctx, 31, 0x2598ACu);
    ctx->pc = 0x2598A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x260948u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioOpenChest_0x260948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598ACu; }
    }
    if (ctx->pc != 0x2598ACu) { return; }
    ctx->pc = 0x2598ACu;
label_2598ac:
    // 0x2598ac: 0x960200d8
    ctx->pc = 0x2598acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_2598b0:
    // 0x2598b0: 0x34420001
    ctx->pc = 0x2598b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2598b4:
    // 0x2598b4: 0xa60200d8
    ctx->pc = 0x2598b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
label_2598b8:
    // 0x2598b8: 0x92220000
    ctx->pc = 0x2598b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2598bc:
    // 0x2598bc: 0xa20200df
    ctx->pc = 0x2598bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 223), (uint8_t)GPR_U32(ctx, 2));
label_2598c0:
    // 0x2598c0: 0x860200f0
    ctx->pc = 0x2598c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
label_2598c4:
    // 0x2598c4: 0x4400156
label_2598c8:
    if (ctx->pc == 0x2598C8u) {
        ctx->pc = 0x2598C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2598CCu;
        goto label_2598cc;
    }
    ctx->pc = 0x2598C4u;
    {
        const bool branch_taken_0x2598c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2598C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2598c4) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x2598CCu;
label_2598cc:
    // 0x2598cc: 0xc096234
label_2598d0:
    if (ctx->pc == 0x2598D0u) {
        ctx->pc = 0x2598D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2598D4u;
        goto label_2598d4;
    }
    ctx->pc = 0x2598CCu;
    SET_GPR_U32(ctx, 31, 0x2598D4u);
    ctx->pc = 0x2598D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2588D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OpenChest_0x2588d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598D4u; }
    }
    if (ctx->pc != 0x2598D4u) { return; }
    ctx->pc = 0x2598D4u;
label_2598d4:
    // 0x2598d4: 0x10000153
label_2598d8:
    if (ctx->pc == 0x2598D8u) {
        ctx->pc = 0x2598D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2598DCu;
        goto label_2598dc;
    }
    ctx->pc = 0x2598D4u;
    {
        const bool branch_taken_0x2598d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2598D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2598d4) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x2598DCu;
label_2598dc:
    // 0x2598dc: 0x24040002
    ctx->pc = 0x2598dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_2598e0:
    // 0x2598e0: 0x8e250000
    ctx->pc = 0x2598e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2598e4:
    // 0x2598e4: 0xc0a3a1c
label_2598e8:
    if (ctx->pc == 0x2598E8u) {
        ctx->pc = 0x2598E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2598ECu;
        goto label_2598ec;
    }
    ctx->pc = 0x2598E4u;
    SET_GPR_U32(ctx, 31, 0x2598ECu);
    ctx->pc = 0x2598E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2598ECu; }
    }
    if (ctx->pc != 0x2598ECu) { return; }
    ctx->pc = 0x2598ECu;
label_2598ec:
    // 0x2598ec: 0x1440014d
label_2598f0:
    if (ctx->pc == 0x2598F0u) {
        ctx->pc = 0x2598F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2598F4u;
        goto label_2598f4;
    }
    ctx->pc = 0x2598ECu;
    {
        const bool branch_taken_0x2598ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2598F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2598ec) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x2598F4u;
label_2598f4:
    // 0x2598f4: 0x8e430000
    ctx->pc = 0x2598f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2598f8:
    // 0x2598f8: 0x24020030
    ctx->pc = 0x2598f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_2598fc:
    // 0x2598fc: 0x14620149
label_259900:
    if (ctx->pc == 0x259900u) {
        ctx->pc = 0x259900u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259904u;
        goto label_259904;
    }
    ctx->pc = 0x2598FCu;
    {
        const bool branch_taken_0x2598fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x259900u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2598fc) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259904u;
label_259904:
    // 0x259904: 0x24040017
    ctx->pc = 0x259904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
label_259908:
    // 0x259908: 0x8e250000
    ctx->pc = 0x259908u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25990c:
    // 0x25990c: 0xc0a3a1c
label_259910:
    if (ctx->pc == 0x259910u) {
        ctx->pc = 0x259910u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259914u;
        goto label_259914;
    }
    ctx->pc = 0x25990Cu;
    SET_GPR_U32(ctx, 31, 0x259914u);
    ctx->pc = 0x259910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259914u; }
    }
    if (ctx->pc != 0x259914u) { return; }
    ctx->pc = 0x259914u;
label_259914:
    // 0x259914: 0x10000143
label_259918:
    if (ctx->pc == 0x259918u) {
        ctx->pc = 0x259918u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25991Cu;
        goto label_25991c;
    }
    ctx->pc = 0x259914u;
    {
        const bool branch_taken_0x259914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259918u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259914) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x25991Cu;
label_25991c:
    // 0x25991c: 0xc096176
label_259920:
    if (ctx->pc == 0x259920u) {
        ctx->pc = 0x259920u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259924u;
        goto label_259924;
    }
    ctx->pc = 0x25991Cu;
    SET_GPR_U32(ctx, 31, 0x259924u);
    ctx->pc = 0x259920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2585D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlatGenerator_0x2585d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259924u; }
    }
    if (ctx->pc != 0x259924u) { return; }
    ctx->pc = 0x259924u;
label_259924:
    // 0x259924: 0x1000013e
label_259928:
    if (ctx->pc == 0x259928u) {
        ctx->pc = 0x259928u;
        SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x25992Cu;
        goto label_25992c;
    }
    ctx->pc = 0x259924u;
    {
        const bool branch_taken_0x259924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259928u;
        SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x259924) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x25992Cu;
label_25992c:
    // 0x25992c: 0xc60100fc
    ctx->pc = 0x25992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259930:
    // 0x259930: 0x44800000
    ctx->pc = 0x259930u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_259934:
    // 0x259934: 0x46010036
    ctx->pc = 0x259934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259938:
    // 0x259938: 0x0
    ctx->pc = 0x259938u;
    // NOP
label_25993c:
    // 0x25993c: 0x45000005
label_259940:
    if (ctx->pc == 0x259940u) {
        ctx->pc = 0x259940u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x259944u;
        goto label_259944;
    }
    ctx->pc = 0x25993Cu;
    {
        const bool branch_taken_0x25993c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259940u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x25993c) {
            ctx->pc = 0x259954u;
            goto label_259954;
        }
    }
    ctx->pc = 0x259944u;
label_259944:
    // 0x259944: 0x8e0200f8
    ctx->pc = 0x259944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_259948:
    // 0x259948: 0x34420001
    ctx->pc = 0x259948u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_25994c:
    // 0x25994c: 0xae0200f8
    ctx->pc = 0x25994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_259950:
    // 0x259950: 0xc7ac0010
    ctx->pc = 0x259950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_259954:
    // 0x259954: 0xc7a00000
    ctx->pc = 0x259954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259958:
    // 0x259958: 0x46006301
    ctx->pc = 0x259958u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_25995c:
    // 0x25995c: 0xe7ac0020
    ctx->pc = 0x25995cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_259960:
    // 0x259960: 0xc7a00014
    ctx->pc = 0x259960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259964:
    // 0x259964: 0xc7a10004
    ctx->pc = 0x259964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259968:
    // 0x259968: 0x46010001
    ctx->pc = 0x259968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25996c:
    // 0x25996c: 0xe7a00024
    ctx->pc = 0x25996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_259970:
    // 0x259970: 0xc7ad0018
    ctx->pc = 0x259970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_259974:
    // 0x259974: 0xc7a00008
    ctx->pc = 0x259974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259978:
    // 0x259978: 0x46006b41
    ctx->pc = 0x259978u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_25997c:
    // 0x25997c: 0xc0b5c34
label_259980:
    if (ctx->pc == 0x259980u) {
        ctx->pc = 0x259980u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x259984u;
        goto label_259984;
    }
    ctx->pc = 0x25997Cu;
    SET_GPR_U32(ctx, 31, 0x259984u);
    ctx->pc = 0x259980u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259984u; }
    }
    if (ctx->pc != 0x259984u) { return; }
    ctx->pc = 0x259984u;
label_259984:
    // 0x259984: 0xc6410008
    ctx->pc = 0x259984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259988:
    // 0x259988: 0x46010036
    ctx->pc = 0x259988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25998c:
    // 0x25998c: 0x0
    ctx->pc = 0x25998cu;
    // NOP
label_259990:
    // 0x259990: 0x45000123
label_259994:
    if (ctx->pc == 0x259994u) {
        ctx->pc = 0x259994u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259998u;
        goto label_259998;
    }
    ctx->pc = 0x259990u;
    {
        const bool branch_taken_0x259990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259994u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259990) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259998u;
label_259998:
    // 0x259998: 0x10000121
label_25999c:
    if (ctx->pc == 0x25999Cu) {
        ctx->pc = 0x25999Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2599A0u;
        goto label_2599a0;
    }
    ctx->pc = 0x259998u;
    {
        const bool branch_taken_0x259998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25999Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259998) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x2599A0u;
label_2599a0:
    // 0x2599a0: 0xde0200d8
    ctx->pc = 0x2599a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 216)));
label_2599a4:
    // 0x2599a4: 0x240300ff
    ctx->pc = 0x2599a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
label_2599a8:
    // 0x2599a8: 0x3183c
    ctx->pc = 0x2599a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2599ac:
    // 0x2599ac: 0x34630001
    ctx->pc = 0x2599acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
label_2599b0:
    // 0x2599b0: 0x431024
    ctx->pc = 0x2599b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2599b4:
    // 0x2599b4: 0x5440011a
label_2599b8:
    if (ctx->pc == 0x2599B8u) {
        ctx->pc = 0x2599B8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2599BCu;
        goto label_2599bc;
    }
    ctx->pc = 0x2599B4u;
    {
        const bool branch_taken_0x2599b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2599b4) {
            ctx->pc = 0x2599B8u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x2599BCu;
label_2599bc:
    // 0x2599bc: 0xc7a60000
    ctx->pc = 0x2599bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2599c0:
    // 0x2599c0: 0xc6210854
    ctx->pc = 0x2599c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2599c4:
    // 0x2599c4: 0x46013041
    ctx->pc = 0x2599c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_2599c8:
    // 0x2599c8: 0xe7a10020
    ctx->pc = 0x2599c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2599cc:
    // 0x2599cc: 0xc7a50004
    ctx->pc = 0x2599ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2599d0:
    // 0x2599d0: 0xc6200858
    ctx->pc = 0x2599d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2599d4:
    // 0x2599d4: 0x46002801
    ctx->pc = 0x2599d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2599d8:
    // 0x2599d8: 0xe7a00024
    ctx->pc = 0x2599d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2599dc:
    // 0x2599dc: 0xc7a40008
    ctx->pc = 0x2599dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2599e0:
    // 0x2599e0: 0xc623085c
    ctx->pc = 0x2599e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2599e4:
    // 0x2599e4: 0x460320c1
    ctx->pc = 0x2599e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2599e8:
    // 0x2599e8: 0xe7a30028
    ctx->pc = 0x2599e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2599ec:
    // 0x2599ec: 0xc7a20010
    ctx->pc = 0x2599ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2599f0:
    // 0x2599f0: 0x46061081
    ctx->pc = 0x2599f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_2599f4:
    // 0x2599f4: 0xe7a20030
    ctx->pc = 0x2599f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2599f8:
    // 0x2599f8: 0xc7a00014
    ctx->pc = 0x2599f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2599fc:
    // 0x2599fc: 0x46050001
    ctx->pc = 0x2599fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_259a00:
    // 0x259a00: 0xe7a00034
    ctx->pc = 0x259a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_259a04:
    // 0x259a04: 0xc7a00018
    ctx->pc = 0x259a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259a08:
    // 0x259a08: 0x46040001
    ctx->pc = 0x259a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_259a0c:
    // 0x259a0c: 0xe7a00038
    ctx->pc = 0x259a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_259a10:
    // 0x259a10: 0x46020842
    ctx->pc = 0x259a10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_259a14:
    // 0x259a14: 0x460018c2
    ctx->pc = 0x259a14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_259a18:
    // 0x259a18: 0x46030840
    ctx->pc = 0x259a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_259a1c:
    // 0x259a1c: 0x44800000
    ctx->pc = 0x259a1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_259a20:
    // 0x259a20: 0x46000834
    ctx->pc = 0x259a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259a24:
    // 0x259a24: 0x0
    ctx->pc = 0x259a24u;
    // NOP
label_259a28:
    // 0x259a28: 0x450300fd
label_259a2c:
    if (ctx->pc == 0x259A2Cu) {
        ctx->pc = 0x259A2Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259A30u;
        goto label_259a30;
    }
    ctx->pc = 0x259A28u;
    {
        const bool branch_taken_0x259a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259a28) {
            ctx->pc = 0x259A2Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259A30u;
label_259a30:
    // 0x259a30: 0xc096d38
label_259a34:
    if (ctx->pc == 0x259A34u) {
        ctx->pc = 0x259A34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259A38u;
        goto label_259a38;
    }
    ctx->pc = 0x259A30u;
    SET_GPR_U32(ctx, 31, 0x259A38u);
    ctx->pc = 0x259A34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25B4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        use_key_0x25b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A38u; }
    }
    if (ctx->pc != 0x259A38u) { return; }
    ctx->pc = 0x259A38u;
label_259a38:
    // 0x259a38: 0x10400008
label_259a3c:
    if (ctx->pc == 0x259A3Cu) {
        ctx->pc = 0x259A3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x259A40u;
        goto label_259a40;
    }
    ctx->pc = 0x259A38u;
    {
        const bool branch_taken_0x259a38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259A3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x259a38) {
            ctx->pc = 0x259A5Cu;
            goto label_259a5c;
        }
    }
    ctx->pc = 0x259A40u;
label_259a40:
    // 0x259a40: 0x960200d8
    ctx->pc = 0x259a40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_259a44:
    // 0x259a44: 0x34420001
    ctx->pc = 0x259a44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_259a48:
    // 0x259a48: 0xa60200d8
    ctx->pc = 0x259a48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
label_259a4c:
    // 0x259a4c: 0xc098240
label_259a50:
    if (ctx->pc == 0x259A50u) {
        ctx->pc = 0x259A50u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x259A54u;
        goto label_259a54;
    }
    ctx->pc = 0x259A4Cu;
    SET_GPR_U32(ctx, 31, 0x259A54u);
    ctx->pc = 0x259A50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x260900u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioDoor_0x260900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A54u; }
    }
    if (ctx->pc != 0x259A54u) { return; }
    ctx->pc = 0x259A54u;
label_259a54:
    // 0x259a54: 0x100000f3
label_259a58:
    if (ctx->pc == 0x259A58u) {
        ctx->pc = 0x259A58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259A5Cu;
        goto label_259a5c;
    }
    ctx->pc = 0x259A54u;
    {
        const bool branch_taken_0x259a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259A58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259a54) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259A5Cu;
label_259a5c:
    // 0x259a5c: 0x24040001
    ctx->pc = 0x259a5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_259a60:
    // 0x259a60: 0x8e250000
    ctx->pc = 0x259a60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259a64:
    // 0x259a64: 0xc0a3a1c
label_259a68:
    if (ctx->pc == 0x259A68u) {
        ctx->pc = 0x259A68u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x259A6Cu;
        goto label_259a6c;
    }
    ctx->pc = 0x259A64u;
    SET_GPR_U32(ctx, 31, 0x259A6Cu);
    ctx->pc = 0x259A68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A6Cu; }
    }
    if (ctx->pc != 0x259A6Cu) { return; }
    ctx->pc = 0x259A6Cu;
label_259a6c:
    // 0x259a6c: 0x100000ec
label_259a70:
    if (ctx->pc == 0x259A70u) {
        ctx->pc = 0x259A70u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259A74u;
        goto label_259a74;
    }
    ctx->pc = 0x259A6Cu;
    {
        const bool branch_taken_0x259a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259A70u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259a6c) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259A74u;
label_259a74:
    // 0x259a74: 0x8e220138
    ctx->pc = 0x259a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_259a78:
    // 0x259a78: 0x30420001
    ctx->pc = 0x259a78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_259a7c:
    // 0x259a7c: 0x144000e9
label_259a80:
    if (ctx->pc == 0x259A80u) {
        ctx->pc = 0x259A80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259A84u;
        goto label_259a84;
    }
    ctx->pc = 0x259A7Cu;
    {
        const bool branch_taken_0x259a7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259A80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259a7c) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259A84u;
label_259a84:
    // 0x259a84: 0x3c020031
    ctx->pc = 0x259a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_259a88:
    // 0x259a88: 0xc441ffa4
    ctx->pc = 0x259a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259a8c:
    // 0x259a8c: 0xc62008c0
    ctx->pc = 0x259a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259a90:
    // 0x259a90: 0x46010036
    ctx->pc = 0x259a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259a94:
    // 0x259a94: 0x0
    ctx->pc = 0x259a94u;
    // NOP
label_259a98:
    // 0x259a98: 0x450000e2
label_259a9c:
    if (ctx->pc == 0x259A9Cu) {
        ctx->pc = 0x259A9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259AA0u;
        goto label_259aa0;
    }
    ctx->pc = 0x259A98u;
    {
        const bool branch_taken_0x259a98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259A9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259a98) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259AA0u;
label_259aa0:
    // 0x259aa0: 0xc60c00f0
    ctx->pc = 0x259aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_259aa4:
    // 0x259aa4: 0x8e62003c
    ctx->pc = 0x259aa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_259aa8:
    // 0x259aa8: 0x34460080
    ctx->pc = 0x259aa8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 128));
label_259aac:
    // 0x259aac: 0x8e520000
    ctx->pc = 0x259aacu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_259ab0:
    // 0x259ab0: 0x12400006
label_259ab4:
    if (ctx->pc == 0x259AB4u) {
        ctx->pc = 0x259AB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x259AB8u;
        goto label_259ab8;
    }
    ctx->pc = 0x259AB0u;
    {
        const bool branch_taken_0x259ab0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x259AB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x259ab0) {
            ctx->pc = 0x259ACCu;
            goto label_259acc;
        }
    }
    ctx->pc = 0x259AB8u;
label_259ab8:
    // 0x259ab8: 0x24020003
    ctx->pc = 0x259ab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_259abc:
    // 0x259abc: 0x12420003
label_259ac0:
    if (ctx->pc == 0x259AC0u) {
        ctx->pc = 0x259AC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x259AC4u;
        goto label_259ac4;
    }
    ctx->pc = 0x259ABCu;
    {
        const bool branch_taken_0x259abc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x259AC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x259abc) {
            ctx->pc = 0x259ACCu;
            goto label_259acc;
        }
    }
    ctx->pc = 0x259AC4u;
label_259ac4:
    // 0x259ac4: 0x16420003
label_259ac8:
    if (ctx->pc == 0x259AC8u) {
        ctx->pc = 0x259AC8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 48));
        ctx->pc = 0x259ACCu;
        goto label_259acc;
    }
    ctx->pc = 0x259AC4u;
    {
        const bool branch_taken_0x259ac4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x259AC8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 48));
        if (branch_taken_0x259ac4) {
            ctx->pc = 0x259AD4u;
            goto label_259ad4;
        }
    }
    ctx->pc = 0x259ACCu;
label_259acc:
    // 0x259acc: 0x24050003
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_259ad0:
    // 0x259ad0: 0x30c20030
    ctx->pc = 0x259ad0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 48));
label_259ad4:
    // 0x259ad4: 0x5040000f
label_259ad8:
    if (ctx->pc == 0x259AD8u) {
        ctx->pc = 0x259AD8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259ADCu;
        goto label_259adc;
    }
    ctx->pc = 0x259AD4u;
    {
        const bool branch_taken_0x259ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x259ad4) {
            ctx->pc = 0x259AD8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x259B14u;
            goto label_259b14;
        }
    }
    ctx->pc = 0x259ADCu;
label_259adc:
    // 0x259adc: 0xc6000030
    ctx->pc = 0x259adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259ae0:
    // 0x259ae0: 0x46000007
    ctx->pc = 0x259ae0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_259ae4:
    // 0x259ae4: 0xe7a00040
    ctx->pc = 0x259ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_259ae8:
    // 0x259ae8: 0xc6000034
    ctx->pc = 0x259ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259aec:
    // 0x259aec: 0x46000007
    ctx->pc = 0x259aecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_259af0:
    // 0x259af0: 0xe7a00044
    ctx->pc = 0x259af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_259af4:
    // 0x259af4: 0xc6000038
    ctx->pc = 0x259af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259af8:
    // 0x259af8: 0x46000007
    ctx->pc = 0x259af8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_259afc:
    // 0x259afc: 0xe7a00048
    ctx->pc = 0x259afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_259b00:
    // 0x259b00: 0x8e240000
    ctx->pc = 0x259b00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259b04:
    // 0x259b04: 0xc08c73c
label_259b08:
    if (ctx->pc == 0x259B08u) {
        ctx->pc = 0x259B08u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x259B0Cu;
        goto label_259b0c;
    }
    ctx->pc = 0x259B04u;
    SET_GPR_U32(ctx, 31, 0x259B0Cu);
    ctx->pc = 0x259B08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B0Cu; }
    }
    if (ctx->pc != 0x259B0Cu) { return; }
    ctx->pc = 0x259B0Cu;
label_259b0c:
    // 0x259b0c: 0x10000004
label_259b10:
    if (ctx->pc == 0x259B10u) {
        ctx->pc = 0x259B10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x259B14u;
        goto label_259b14;
    }
    ctx->pc = 0x259B0Cu;
    {
        const bool branch_taken_0x259b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259B10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x259b0c) {
            ctx->pc = 0x259B20u;
            goto label_259b20;
        }
    }
    ctx->pc = 0x259B14u;
label_259b14:
    // 0x259b14: 0xc08c73c
label_259b18:
    if (ctx->pc == 0x259B18u) {
        ctx->pc = 0x259B18u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259B1Cu;
        goto label_259b1c;
    }
    ctx->pc = 0x259B14u;
    SET_GPR_U32(ctx, 31, 0x259B1Cu);
    ctx->pc = 0x259B18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B1Cu; }
    }
    if (ctx->pc != 0x259B1Cu) { return; }
    ctx->pc = 0x259B1Cu;
label_259b1c:
    // 0x259b1c: 0x3c020034
    ctx->pc = 0x259b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_259b20:
    // 0x259b20: 0x8c43e7f0
    ctx->pc = 0x259b20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_259b24:
    // 0x259b24: 0x24020003
    ctx->pc = 0x259b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_259b28:
    // 0x259b28: 0x1462000a
label_259b2c:
    if (ctx->pc == 0x259B2Cu) {
        ctx->pc = 0x259B2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259B30u;
        goto label_259b30;
    }
    ctx->pc = 0x259B28u;
    {
        const bool branch_taken_0x259b28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x259B2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259b28) {
            ctx->pc = 0x259B54u;
            goto label_259b54;
        }
    }
    ctx->pc = 0x259B30u;
label_259b30:
    // 0x259b30: 0x24020001
    ctx->pc = 0x259b30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_259b34:
    // 0x259b34: 0x16420007
label_259b38:
    if (ctx->pc == 0x259B38u) {
        ctx->pc = 0x259B38u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        ctx->pc = 0x259B3Cu;
        goto label_259b3c;
    }
    ctx->pc = 0x259B34u;
    {
        const bool branch_taken_0x259b34 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x259B38u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x259b34) {
            ctx->pc = 0x259B54u;
            goto label_259b54;
        }
    }
    ctx->pc = 0x259B3Cu;
label_259b3c:
    // 0x259b3c: 0x26640028
    ctx->pc = 0x259b3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 40));
label_259b40:
    // 0x259b40: 0xc0bf270
label_259b44:
    if (ctx->pc == 0x259B44u) {
        ctx->pc = 0x259B44u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937896));
        ctx->pc = 0x259B48u;
        goto label_259b48;
    }
    ctx->pc = 0x259B40u;
    SET_GPR_U32(ctx, 31, 0x259B48u);
    ctx->pc = 0x259B44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937896));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B48u; }
    }
    if (ctx->pc != 0x259B48u) { return; }
    ctx->pc = 0x259B48u;
label_259b48:
    // 0x259b48: 0x24030006
    ctx->pc = 0x259b48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_259b4c:
    // 0x259b4c: 0x62900a
    ctx->pc = 0x259b4cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_259b50:
    // 0x259b50: 0x3a0202d
    ctx->pc = 0x259b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_259b54:
    // 0x259b54: 0xc097b90
label_259b58:
    if (ctx->pc == 0x259B58u) {
        ctx->pc = 0x259B58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259B5Cu;
        goto label_259b5c;
    }
    ctx->pc = 0x259B54u;
    SET_GPR_U32(ctx, 31, 0x259B5Cu);
    ctx->pc = 0x259B58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25EE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioDamageTile_0x25ee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B5Cu; }
    }
    if (ctx->pc != 0x259B5Cu) { return; }
    ctx->pc = 0x259B5Cu;
label_259b5c:
    // 0x259b5c: 0x3c030031
    ctx->pc = 0x259b5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_259b60:
    // 0x259b60: 0x860200da
    ctx->pc = 0x259b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 218)));
label_259b64:
    // 0x259b64: 0x24420001
    ctx->pc = 0x259b64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_259b68:
    // 0x259b68: 0x44820000
    ctx->pc = 0x259b68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_259b6c:
    // 0x259b6c: 0x46800020
    ctx->pc = 0x259b6cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_259b70:
    // 0x259b70: 0x3c013d08
    ctx->pc = 0x259b70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
label_259b74:
    // 0x259b74: 0x34218889
    ctx->pc = 0x259b74u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
label_259b78:
    // 0x259b78: 0x44810800
    ctx->pc = 0x259b78u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_259b7c:
    // 0x259b7c: 0x46010002
    ctx->pc = 0x259b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_259b80:
    // 0x259b80: 0xc461ffa4
    ctx->pc = 0x259b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259b84:
    // 0x259b84: 0x46010000
    ctx->pc = 0x259b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_259b88:
    // 0x259b88: 0xe62008c0
    ctx->pc = 0x259b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2240), bits); }
label_259b8c:
    // 0x259b8c: 0x24040015
    ctx->pc = 0x259b8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
label_259b90:
    // 0x259b90: 0x8e250000
    ctx->pc = 0x259b90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259b94:
    // 0x259b94: 0xc0a3a1c
label_259b98:
    if (ctx->pc == 0x259B98u) {
        ctx->pc = 0x259B98u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x259B9Cu;
        goto label_259b9c;
    }
    ctx->pc = 0x259B94u;
    SET_GPR_U32(ctx, 31, 0x259B9Cu);
    ctx->pc = 0x259B98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B9Cu; }
    }
    if (ctx->pc != 0x259B9Cu) { return; }
    ctx->pc = 0x259B9Cu;
label_259b9c:
    // 0x259b9c: 0x100000a1
label_259ba0:
    if (ctx->pc == 0x259BA0u) {
        ctx->pc = 0x259BA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259BA4u;
        goto label_259ba4;
    }
    ctx->pc = 0x259B9Cu;
    {
        const bool branch_taken_0x259b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259BA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259b9c) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259BA4u;
label_259ba4:
    // 0x259ba4: 0x24140002
    ctx->pc = 0x259ba4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_259ba8:
    // 0x259ba8: 0x24020001
    ctx->pc = 0x259ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_259bac:
    // 0x259bac: 0x8e230000
    ctx->pc = 0x259bacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259bb0:
    // 0x259bb0: 0x621004
    ctx->pc = 0x259bb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_259bb4:
    // 0x259bb4: 0x8e0300f4
    ctx->pc = 0x259bb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_259bb8:
    // 0x259bb8: 0x431025
    ctx->pc = 0x259bb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_259bbc:
    // 0x259bbc: 0x10000098
label_259bc0:
    if (ctx->pc == 0x259BC0u) {
        ctx->pc = 0x259BC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->pc = 0x259BC4u;
        goto label_259bc4;
    }
    ctx->pc = 0x259BBCu;
    {
        const bool branch_taken_0x259bbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259BC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x259bbc) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259BC4u;
label_259bc4:
    // 0x259bc4: 0x8e420000
    ctx->pc = 0x259bc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_259bc8:
    // 0x259bc8: 0x2443ffd8
    ctx->pc = 0x259bc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967256));
label_259bcc:
    // 0x259bcc: 0x2c62000e
    ctx->pc = 0x259bccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_259bd0:
    // 0x259bd0: 0x1040ffa6
label_259bd4:
    if (ctx->pc == 0x259BD4u) {
        ctx->pc = 0x259BD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x259BD8u;
        goto label_259bd8;
    }
    ctx->pc = 0x259BD0u;
    {
        const bool branch_taken_0x259bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259BD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x259bd0) {
            ctx->pc = 0x259A6Cu;
            goto label_259a6c;
        }
    }
    ctx->pc = 0x259BD8u;
label_259bd8:
    // 0x259bd8: 0x24428d60
    ctx->pc = 0x259bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937952));
label_259bdc:
    // 0x259bdc: 0x31880
    ctx->pc = 0x259bdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_259be0:
    // 0x259be0: 0x621821
    ctx->pc = 0x259be0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259be4:
    // 0x259be4: 0x8c620000
    ctx->pc = 0x259be4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259be8:
    // 0x259be8: 0x400008
label_259bec:
    if (ctx->pc == 0x259BECu) {
        ctx->pc = 0x259BF0u;
        goto label_259bf0;
    }
    ctx->pc = 0x259BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259730u: goto label_259730;
            case 0x259734u: goto label_259734;
            case 0x259738u: goto label_259738;
            case 0x25973Cu: goto label_25973c;
            case 0x259740u: goto label_259740;
            case 0x259744u: goto label_259744;
            case 0x259748u: goto label_259748;
            case 0x25974Cu: goto label_25974c;
            case 0x259750u: goto label_259750;
            case 0x259754u: goto label_259754;
            case 0x259758u: goto label_259758;
            case 0x25975Cu: goto label_25975c;
            case 0x259760u: goto label_259760;
            case 0x259764u: goto label_259764;
            case 0x259768u: goto label_259768;
            case 0x25976Cu: goto label_25976c;
            case 0x259770u: goto label_259770;
            case 0x259774u: goto label_259774;
            case 0x259778u: goto label_259778;
            case 0x25977Cu: goto label_25977c;
            case 0x259780u: goto label_259780;
            case 0x259784u: goto label_259784;
            case 0x259788u: goto label_259788;
            case 0x25978Cu: goto label_25978c;
            case 0x259790u: goto label_259790;
            case 0x259794u: goto label_259794;
            case 0x259798u: goto label_259798;
            case 0x25979Cu: goto label_25979c;
            case 0x2597A0u: goto label_2597a0;
            case 0x2597A4u: goto label_2597a4;
            case 0x2597A8u: goto label_2597a8;
            case 0x2597ACu: goto label_2597ac;
            case 0x2597B0u: goto label_2597b0;
            case 0x2597B4u: goto label_2597b4;
            case 0x2597B8u: goto label_2597b8;
            case 0x2597BCu: goto label_2597bc;
            case 0x2597C0u: goto label_2597c0;
            case 0x2597C4u: goto label_2597c4;
            case 0x2597C8u: goto label_2597c8;
            case 0x2597CCu: goto label_2597cc;
            case 0x2597D0u: goto label_2597d0;
            case 0x2597D4u: goto label_2597d4;
            case 0x2597D8u: goto label_2597d8;
            case 0x2597DCu: goto label_2597dc;
            case 0x2597E0u: goto label_2597e0;
            case 0x2597E4u: goto label_2597e4;
            case 0x2597E8u: goto label_2597e8;
            case 0x2597ECu: goto label_2597ec;
            case 0x2597F0u: goto label_2597f0;
            case 0x2597F4u: goto label_2597f4;
            case 0x2597F8u: goto label_2597f8;
            case 0x2597FCu: goto label_2597fc;
            case 0x259800u: goto label_259800;
            case 0x259804u: goto label_259804;
            case 0x259808u: goto label_259808;
            case 0x25980Cu: goto label_25980c;
            case 0x259810u: goto label_259810;
            case 0x259814u: goto label_259814;
            case 0x259818u: goto label_259818;
            case 0x25981Cu: goto label_25981c;
            case 0x259820u: goto label_259820;
            case 0x259824u: goto label_259824;
            case 0x259828u: goto label_259828;
            case 0x25982Cu: goto label_25982c;
            case 0x259830u: goto label_259830;
            case 0x259834u: goto label_259834;
            case 0x259838u: goto label_259838;
            case 0x25983Cu: goto label_25983c;
            case 0x259840u: goto label_259840;
            case 0x259844u: goto label_259844;
            case 0x259848u: goto label_259848;
            case 0x25984Cu: goto label_25984c;
            case 0x259850u: goto label_259850;
            case 0x259854u: goto label_259854;
            case 0x259858u: goto label_259858;
            case 0x25985Cu: goto label_25985c;
            case 0x259860u: goto label_259860;
            case 0x259864u: goto label_259864;
            case 0x259868u: goto label_259868;
            case 0x25986Cu: goto label_25986c;
            case 0x259870u: goto label_259870;
            case 0x259874u: goto label_259874;
            case 0x259878u: goto label_259878;
            case 0x25987Cu: goto label_25987c;
            case 0x259880u: goto label_259880;
            case 0x259884u: goto label_259884;
            case 0x259888u: goto label_259888;
            case 0x25988Cu: goto label_25988c;
            case 0x259890u: goto label_259890;
            case 0x259894u: goto label_259894;
            case 0x259898u: goto label_259898;
            case 0x25989Cu: goto label_25989c;
            case 0x2598A0u: goto label_2598a0;
            case 0x2598A4u: goto label_2598a4;
            case 0x2598A8u: goto label_2598a8;
            case 0x2598ACu: goto label_2598ac;
            case 0x2598B0u: goto label_2598b0;
            case 0x2598B4u: goto label_2598b4;
            case 0x2598B8u: goto label_2598b8;
            case 0x2598BCu: goto label_2598bc;
            case 0x2598C0u: goto label_2598c0;
            case 0x2598C4u: goto label_2598c4;
            case 0x2598C8u: goto label_2598c8;
            case 0x2598CCu: goto label_2598cc;
            case 0x2598D0u: goto label_2598d0;
            case 0x2598D4u: goto label_2598d4;
            case 0x2598D8u: goto label_2598d8;
            case 0x2598DCu: goto label_2598dc;
            case 0x2598E0u: goto label_2598e0;
            case 0x2598E4u: goto label_2598e4;
            case 0x2598E8u: goto label_2598e8;
            case 0x2598ECu: goto label_2598ec;
            case 0x2598F0u: goto label_2598f0;
            case 0x2598F4u: goto label_2598f4;
            case 0x2598F8u: goto label_2598f8;
            case 0x2598FCu: goto label_2598fc;
            case 0x259900u: goto label_259900;
            case 0x259904u: goto label_259904;
            case 0x259908u: goto label_259908;
            case 0x25990Cu: goto label_25990c;
            case 0x259910u: goto label_259910;
            case 0x259914u: goto label_259914;
            case 0x259918u: goto label_259918;
            case 0x25991Cu: goto label_25991c;
            case 0x259920u: goto label_259920;
            case 0x259924u: goto label_259924;
            case 0x259928u: goto label_259928;
            case 0x25992Cu: goto label_25992c;
            case 0x259930u: goto label_259930;
            case 0x259934u: goto label_259934;
            case 0x259938u: goto label_259938;
            case 0x25993Cu: goto label_25993c;
            case 0x259940u: goto label_259940;
            case 0x259944u: goto label_259944;
            case 0x259948u: goto label_259948;
            case 0x25994Cu: goto label_25994c;
            case 0x259950u: goto label_259950;
            case 0x259954u: goto label_259954;
            case 0x259958u: goto label_259958;
            case 0x25995Cu: goto label_25995c;
            case 0x259960u: goto label_259960;
            case 0x259964u: goto label_259964;
            case 0x259968u: goto label_259968;
            case 0x25996Cu: goto label_25996c;
            case 0x259970u: goto label_259970;
            case 0x259974u: goto label_259974;
            case 0x259978u: goto label_259978;
            case 0x25997Cu: goto label_25997c;
            case 0x259980u: goto label_259980;
            case 0x259984u: goto label_259984;
            case 0x259988u: goto label_259988;
            case 0x25998Cu: goto label_25998c;
            case 0x259990u: goto label_259990;
            case 0x259994u: goto label_259994;
            case 0x259998u: goto label_259998;
            case 0x25999Cu: goto label_25999c;
            case 0x2599A0u: goto label_2599a0;
            case 0x2599A4u: goto label_2599a4;
            case 0x2599A8u: goto label_2599a8;
            case 0x2599ACu: goto label_2599ac;
            case 0x2599B0u: goto label_2599b0;
            case 0x2599B4u: goto label_2599b4;
            case 0x2599B8u: goto label_2599b8;
            case 0x2599BCu: goto label_2599bc;
            case 0x2599C0u: goto label_2599c0;
            case 0x2599C4u: goto label_2599c4;
            case 0x2599C8u: goto label_2599c8;
            case 0x2599CCu: goto label_2599cc;
            case 0x2599D0u: goto label_2599d0;
            case 0x2599D4u: goto label_2599d4;
            case 0x2599D8u: goto label_2599d8;
            case 0x2599DCu: goto label_2599dc;
            case 0x2599E0u: goto label_2599e0;
            case 0x2599E4u: goto label_2599e4;
            case 0x2599E8u: goto label_2599e8;
            case 0x2599ECu: goto label_2599ec;
            case 0x2599F0u: goto label_2599f0;
            case 0x2599F4u: goto label_2599f4;
            case 0x2599F8u: goto label_2599f8;
            case 0x2599FCu: goto label_2599fc;
            case 0x259A00u: goto label_259a00;
            case 0x259A04u: goto label_259a04;
            case 0x259A08u: goto label_259a08;
            case 0x259A0Cu: goto label_259a0c;
            case 0x259A10u: goto label_259a10;
            case 0x259A14u: goto label_259a14;
            case 0x259A18u: goto label_259a18;
            case 0x259A1Cu: goto label_259a1c;
            case 0x259A20u: goto label_259a20;
            case 0x259A24u: goto label_259a24;
            case 0x259A28u: goto label_259a28;
            case 0x259A2Cu: goto label_259a2c;
            case 0x259A30u: goto label_259a30;
            case 0x259A34u: goto label_259a34;
            case 0x259A38u: goto label_259a38;
            case 0x259A3Cu: goto label_259a3c;
            case 0x259A40u: goto label_259a40;
            case 0x259A44u: goto label_259a44;
            case 0x259A48u: goto label_259a48;
            case 0x259A4Cu: goto label_259a4c;
            case 0x259A50u: goto label_259a50;
            case 0x259A54u: goto label_259a54;
            case 0x259A58u: goto label_259a58;
            case 0x259A5Cu: goto label_259a5c;
            case 0x259A60u: goto label_259a60;
            case 0x259A64u: goto label_259a64;
            case 0x259A68u: goto label_259a68;
            case 0x259A6Cu: goto label_259a6c;
            case 0x259A70u: goto label_259a70;
            case 0x259A74u: goto label_259a74;
            case 0x259A78u: goto label_259a78;
            case 0x259A7Cu: goto label_259a7c;
            case 0x259A80u: goto label_259a80;
            case 0x259A84u: goto label_259a84;
            case 0x259A88u: goto label_259a88;
            case 0x259A8Cu: goto label_259a8c;
            case 0x259A90u: goto label_259a90;
            case 0x259A94u: goto label_259a94;
            case 0x259A98u: goto label_259a98;
            case 0x259A9Cu: goto label_259a9c;
            case 0x259AA0u: goto label_259aa0;
            case 0x259AA4u: goto label_259aa4;
            case 0x259AA8u: goto label_259aa8;
            case 0x259AACu: goto label_259aac;
            case 0x259AB0u: goto label_259ab0;
            case 0x259AB4u: goto label_259ab4;
            case 0x259AB8u: goto label_259ab8;
            case 0x259ABCu: goto label_259abc;
            case 0x259AC0u: goto label_259ac0;
            case 0x259AC4u: goto label_259ac4;
            case 0x259AC8u: goto label_259ac8;
            case 0x259ACCu: goto label_259acc;
            case 0x259AD0u: goto label_259ad0;
            case 0x259AD4u: goto label_259ad4;
            case 0x259AD8u: goto label_259ad8;
            case 0x259ADCu: goto label_259adc;
            case 0x259AE0u: goto label_259ae0;
            case 0x259AE4u: goto label_259ae4;
            case 0x259AE8u: goto label_259ae8;
            case 0x259AECu: goto label_259aec;
            case 0x259AF0u: goto label_259af0;
            case 0x259AF4u: goto label_259af4;
            case 0x259AF8u: goto label_259af8;
            case 0x259AFCu: goto label_259afc;
            case 0x259B00u: goto label_259b00;
            case 0x259B04u: goto label_259b04;
            case 0x259B08u: goto label_259b08;
            case 0x259B0Cu: goto label_259b0c;
            case 0x259B10u: goto label_259b10;
            case 0x259B14u: goto label_259b14;
            case 0x259B18u: goto label_259b18;
            case 0x259B1Cu: goto label_259b1c;
            case 0x259B20u: goto label_259b20;
            case 0x259B24u: goto label_259b24;
            case 0x259B28u: goto label_259b28;
            case 0x259B2Cu: goto label_259b2c;
            case 0x259B30u: goto label_259b30;
            case 0x259B34u: goto label_259b34;
            case 0x259B38u: goto label_259b38;
            case 0x259B3Cu: goto label_259b3c;
            case 0x259B40u: goto label_259b40;
            case 0x259B44u: goto label_259b44;
            case 0x259B48u: goto label_259b48;
            case 0x259B4Cu: goto label_259b4c;
            case 0x259B50u: goto label_259b50;
            case 0x259B54u: goto label_259b54;
            case 0x259B58u: goto label_259b58;
            case 0x259B5Cu: goto label_259b5c;
            case 0x259B60u: goto label_259b60;
            case 0x259B64u: goto label_259b64;
            case 0x259B68u: goto label_259b68;
            case 0x259B6Cu: goto label_259b6c;
            case 0x259B70u: goto label_259b70;
            case 0x259B74u: goto label_259b74;
            case 0x259B78u: goto label_259b78;
            case 0x259B7Cu: goto label_259b7c;
            case 0x259B80u: goto label_259b80;
            case 0x259B84u: goto label_259b84;
            case 0x259B88u: goto label_259b88;
            case 0x259B8Cu: goto label_259b8c;
            case 0x259B90u: goto label_259b90;
            case 0x259B94u: goto label_259b94;
            case 0x259B98u: goto label_259b98;
            case 0x259B9Cu: goto label_259b9c;
            case 0x259BA0u: goto label_259ba0;
            case 0x259BA4u: goto label_259ba4;
            case 0x259BA8u: goto label_259ba8;
            case 0x259BACu: goto label_259bac;
            case 0x259BB0u: goto label_259bb0;
            case 0x259BB4u: goto label_259bb4;
            case 0x259BB8u: goto label_259bb8;
            case 0x259BBCu: goto label_259bbc;
            case 0x259BC0u: goto label_259bc0;
            case 0x259BC4u: goto label_259bc4;
            case 0x259BC8u: goto label_259bc8;
            case 0x259BCCu: goto label_259bcc;
            case 0x259BD0u: goto label_259bd0;
            case 0x259BD4u: goto label_259bd4;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BDCu: goto label_259bdc;
            case 0x259BE0u: goto label_259be0;
            case 0x259BE4u: goto label_259be4;
            case 0x259BE8u: goto label_259be8;
            case 0x259BECu: goto label_259bec;
            case 0x259BF0u: goto label_259bf0;
            case 0x259BF4u: goto label_259bf4;
            case 0x259BF8u: goto label_259bf8;
            case 0x259BFCu: goto label_259bfc;
            case 0x259C00u: goto label_259c00;
            case 0x259C04u: goto label_259c04;
            case 0x259C08u: goto label_259c08;
            case 0x259C0Cu: goto label_259c0c;
            case 0x259C10u: goto label_259c10;
            case 0x259C14u: goto label_259c14;
            case 0x259C18u: goto label_259c18;
            case 0x259C1Cu: goto label_259c1c;
            case 0x259C20u: goto label_259c20;
            case 0x259C24u: goto label_259c24;
            case 0x259C28u: goto label_259c28;
            case 0x259C2Cu: goto label_259c2c;
            case 0x259C30u: goto label_259c30;
            case 0x259C34u: goto label_259c34;
            case 0x259C38u: goto label_259c38;
            case 0x259C3Cu: goto label_259c3c;
            case 0x259C40u: goto label_259c40;
            case 0x259C44u: goto label_259c44;
            case 0x259C48u: goto label_259c48;
            case 0x259C4Cu: goto label_259c4c;
            case 0x259C50u: goto label_259c50;
            case 0x259C54u: goto label_259c54;
            case 0x259C58u: goto label_259c58;
            case 0x259C5Cu: goto label_259c5c;
            case 0x259C60u: goto label_259c60;
            case 0x259C64u: goto label_259c64;
            case 0x259C68u: goto label_259c68;
            case 0x259C6Cu: goto label_259c6c;
            case 0x259C70u: goto label_259c70;
            case 0x259C74u: goto label_259c74;
            case 0x259C78u: goto label_259c78;
            case 0x259C7Cu: goto label_259c7c;
            case 0x259C80u: goto label_259c80;
            case 0x259C84u: goto label_259c84;
            case 0x259C88u: goto label_259c88;
            case 0x259C8Cu: goto label_259c8c;
            case 0x259C90u: goto label_259c90;
            case 0x259C94u: goto label_259c94;
            case 0x259C98u: goto label_259c98;
            case 0x259C9Cu: goto label_259c9c;
            case 0x259CA0u: goto label_259ca0;
            case 0x259CA4u: goto label_259ca4;
            case 0x259CA8u: goto label_259ca8;
            case 0x259CACu: goto label_259cac;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CB4u: goto label_259cb4;
            case 0x259CB8u: goto label_259cb8;
            case 0x259CBCu: goto label_259cbc;
            case 0x259CC0u: goto label_259cc0;
            case 0x259CC4u: goto label_259cc4;
            case 0x259CC8u: goto label_259cc8;
            case 0x259CCCu: goto label_259ccc;
            case 0x259CD0u: goto label_259cd0;
            case 0x259CD4u: goto label_259cd4;
            case 0x259CD8u: goto label_259cd8;
            case 0x259CDCu: goto label_259cdc;
            case 0x259CE0u: goto label_259ce0;
            case 0x259CE4u: goto label_259ce4;
            case 0x259CE8u: goto label_259ce8;
            case 0x259CECu: goto label_259cec;
            case 0x259CF0u: goto label_259cf0;
            case 0x259CF4u: goto label_259cf4;
            case 0x259CF8u: goto label_259cf8;
            case 0x259CFCu: goto label_259cfc;
            case 0x259D00u: goto label_259d00;
            case 0x259D04u: goto label_259d04;
            case 0x259D08u: goto label_259d08;
            case 0x259D0Cu: goto label_259d0c;
            case 0x259D10u: goto label_259d10;
            case 0x259D14u: goto label_259d14;
            case 0x259D18u: goto label_259d18;
            case 0x259D1Cu: goto label_259d1c;
            case 0x259D20u: goto label_259d20;
            case 0x259D24u: goto label_259d24;
            case 0x259D28u: goto label_259d28;
            case 0x259D2Cu: goto label_259d2c;
            case 0x259D30u: goto label_259d30;
            case 0x259D34u: goto label_259d34;
            case 0x259D38u: goto label_259d38;
            case 0x259D3Cu: goto label_259d3c;
            case 0x259D40u: goto label_259d40;
            case 0x259D44u: goto label_259d44;
            case 0x259D48u: goto label_259d48;
            case 0x259D4Cu: goto label_259d4c;
            case 0x259D50u: goto label_259d50;
            case 0x259D54u: goto label_259d54;
            case 0x259D58u: goto label_259d58;
            case 0x259D5Cu: goto label_259d5c;
            case 0x259D60u: goto label_259d60;
            case 0x259D64u: goto label_259d64;
            case 0x259D68u: goto label_259d68;
            case 0x259D6Cu: goto label_259d6c;
            case 0x259D70u: goto label_259d70;
            case 0x259D74u: goto label_259d74;
            case 0x259D78u: goto label_259d78;
            case 0x259D7Cu: goto label_259d7c;
            case 0x259D80u: goto label_259d80;
            case 0x259D84u: goto label_259d84;
            case 0x259D88u: goto label_259d88;
            case 0x259D8Cu: goto label_259d8c;
            case 0x259D90u: goto label_259d90;
            case 0x259D94u: goto label_259d94;
            case 0x259D98u: goto label_259d98;
            case 0x259D9Cu: goto label_259d9c;
            case 0x259DA0u: goto label_259da0;
            case 0x259DA4u: goto label_259da4;
            case 0x259DA8u: goto label_259da8;
            case 0x259DACu: goto label_259dac;
            case 0x259DB0u: goto label_259db0;
            case 0x259DB4u: goto label_259db4;
            case 0x259DB8u: goto label_259db8;
            case 0x259DBCu: goto label_259dbc;
            case 0x259DC0u: goto label_259dc0;
            case 0x259DC4u: goto label_259dc4;
            case 0x259DC8u: goto label_259dc8;
            case 0x259DCCu: goto label_259dcc;
            case 0x259DD0u: goto label_259dd0;
            case 0x259DD4u: goto label_259dd4;
            case 0x259DD8u: goto label_259dd8;
            case 0x259DDCu: goto label_259ddc;
            case 0x259DE0u: goto label_259de0;
            case 0x259DE4u: goto label_259de4;
            case 0x259DE8u: goto label_259de8;
            case 0x259DECu: goto label_259dec;
            case 0x259DF0u: goto label_259df0;
            case 0x259DF4u: goto label_259df4;
            case 0x259DF8u: goto label_259df8;
            case 0x259DFCu: goto label_259dfc;
            case 0x259E00u: goto label_259e00;
            case 0x259E04u: goto label_259e04;
            case 0x259E08u: goto label_259e08;
            case 0x259E0Cu: goto label_259e0c;
            case 0x259E10u: goto label_259e10;
            case 0x259E14u: goto label_259e14;
            case 0x259E18u: goto label_259e18;
            case 0x259E1Cu: goto label_259e1c;
            case 0x259E20u: goto label_259e20;
            case 0x259E24u: goto label_259e24;
            case 0x259E28u: goto label_259e28;
            case 0x259E2Cu: goto label_259e2c;
            case 0x259E30u: goto label_259e30;
            case 0x259E34u: goto label_259e34;
            case 0x259E38u: goto label_259e38;
            case 0x259E3Cu: goto label_259e3c;
            case 0x259E40u: goto label_259e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259BF0u;
label_259bf0:
    // 0x259bf0: 0x960200d8
    ctx->pc = 0x259bf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_259bf4:
    // 0x259bf4: 0x30420001
    ctx->pc = 0x259bf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_259bf8:
    // 0x259bf8: 0x1440008a
label_259bfc:
    if (ctx->pc == 0x259BFCu) {
        ctx->pc = 0x259BFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259C00u;
        goto label_259c00;
    }
    ctx->pc = 0x259BF8u;
    {
        const bool branch_taken_0x259bf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259BFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259bf8) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259C00u;
label_259c00:
    // 0x259c00: 0xc097fee
label_259c04:
    if (ctx->pc == 0x259C04u) {
        ctx->pc = 0x259C04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x259C08u;
        goto label_259c08;
    }
    ctx->pc = 0x259C00u;
    SET_GPR_U32(ctx, 31, 0x259C08u);
    ctx->pc = 0x259C04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x25FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLeafFall_0x25ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C08u; }
    }
    if (ctx->pc != 0x259C08u) { return; }
    ctx->pc = 0x259C08u;
label_259c08:
    // 0x259c08: 0x10000008
label_259c0c:
    if (ctx->pc == 0x259C0Cu) {
        ctx->pc = 0x259C0Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x259C10u;
        goto label_259c10;
    }
    ctx->pc = 0x259C08u;
    {
        const bool branch_taken_0x259c08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259C0Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
        if (branch_taken_0x259c08) {
            ctx->pc = 0x259C2Cu;
            goto label_259c2c;
        }
    }
    ctx->pc = 0x259C10u;
label_259c10:
    // 0x259c10: 0x960200d8
    ctx->pc = 0x259c10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_259c14:
    // 0x259c14: 0x30420001
    ctx->pc = 0x259c14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_259c18:
    // 0x259c18: 0x14400082
label_259c1c:
    if (ctx->pc == 0x259C1Cu) {
        ctx->pc = 0x259C1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259C20u;
        goto label_259c20;
    }
    ctx->pc = 0x259C18u;
    {
        const bool branch_taken_0x259c18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259C1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259c18) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259C20u;
label_259c20:
    // 0x259c20: 0xc097fcc
label_259c24:
    if (ctx->pc == 0x259C24u) {
        ctx->pc = 0x259C24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x259C28u;
        goto label_259c28;
    }
    ctx->pc = 0x259C20u;
    SET_GPR_U32(ctx, 31, 0x259C28u);
    ctx->pc = 0x259C24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x25FF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRockFall_0x25ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C28u; }
    }
    if (ctx->pc != 0x259C28u) { return; }
    ctx->pc = 0x259C28u;
label_259c28:
    // 0x259c28: 0x960200d8
    ctx->pc = 0x259c28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_259c2c:
    // 0x259c2c: 0x34420001
    ctx->pc = 0x259c2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_259c30:
    // 0x259c30: 0x1000007b
label_259c34:
    if (ctx->pc == 0x259C34u) {
        ctx->pc = 0x259C34u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x259C38u;
        goto label_259c38;
    }
    ctx->pc = 0x259C30u;
    {
        const bool branch_taken_0x259c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259C34u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x259c30) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259C38u;
label_259c38:
    // 0x259c38: 0x860200f2
    ctx->pc = 0x259c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_259c3c:
    // 0x259c3c: 0x24030001
    ctx->pc = 0x259c3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_259c40:
    // 0x259c40: 0x28420001
    ctx->pc = 0x259c40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
label_259c44:
    // 0x259c44: 0x10000076
label_259c48:
    if (ctx->pc == 0x259C48u) {
        ctx->pc = 0x259C48u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
        ctx->pc = 0x259C4Cu;
        goto label_259c4c;
    }
    ctx->pc = 0x259C44u;
    {
        const bool branch_taken_0x259c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259C48u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
        if (branch_taken_0x259c44) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259C4Cu;
label_259c4c:
    // 0x259c4c: 0x8e020000
    ctx->pc = 0x259c4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_259c50:
    // 0x259c50: 0x8c430004
    ctx->pc = 0x259c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_259c54:
    // 0x259c54: 0x24020002
    ctx->pc = 0x259c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_259c58:
    // 0x259c58: 0x14620072
label_259c5c:
    if (ctx->pc == 0x259C5Cu) {
        ctx->pc = 0x259C5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259C60u;
        goto label_259c60;
    }
    ctx->pc = 0x259C58u;
    {
        const bool branch_taken_0x259c58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x259C5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259c58) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259C60u;
label_259c60:
    // 0x259c60: 0x960300d8
    ctx->pc = 0x259c60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_259c64:
    // 0x259c64: 0x30620001
    ctx->pc = 0x259c64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_259c68:
    // 0x259c68: 0x1440006e
label_259c6c:
    if (ctx->pc == 0x259C6Cu) {
        ctx->pc = 0x259C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259C70u;
        goto label_259c70;
    }
    ctx->pc = 0x259C68u;
    {
        const bool branch_taken_0x259c68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259c68) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259C70u;
label_259c70:
    // 0x259c70: 0x34620001
    ctx->pc = 0x259c70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
label_259c74:
    // 0x259c74: 0x1000006a
label_259c78:
    if (ctx->pc == 0x259C78u) {
        ctx->pc = 0x259C78u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x259C7Cu;
        goto label_259c7c;
    }
    ctx->pc = 0x259C74u;
    {
        const bool branch_taken_0x259c74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259C78u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x259c74) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259C7Cu;
label_259c7c:
    // 0x259c7c: 0x10000068
label_259c80:
    if (ctx->pc == 0x259C80u) {
        ctx->pc = 0x259C80u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x259C84u;
        goto label_259c84;
    }
    ctx->pc = 0x259C7Cu;
    {
        const bool branch_taken_0x259c7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259C80u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x259c7c) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259C84u;
label_259c84:
    // 0x259c84: 0x960200f4
    ctx->pc = 0x259c84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
label_259c88:
    // 0x259c88: 0x30420100
    ctx->pc = 0x259c88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
label_259c8c:
    // 0x259c8c: 0x50400029
label_259c90:
    if (ctx->pc == 0x259C90u) {
        ctx->pc = 0x259C90u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
        ctx->pc = 0x259C94u;
        goto label_259c94;
    }
    ctx->pc = 0x259C8Cu;
    {
        const bool branch_taken_0x259c8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x259c8c) {
            ctx->pc = 0x259C90u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
            ctx->pc = 0x259D34u;
            goto label_259d34;
        }
    }
    ctx->pc = 0x259C94u;
label_259c94:
    // 0x259c94: 0x8e0300f0
    ctx->pc = 0x259c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_259c98:
    // 0x259c98: 0x50600017
label_259c9c:
    if (ctx->pc == 0x259C9Cu) {
        ctx->pc = 0x259C9Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
        ctx->pc = 0x259CA0u;
        goto label_259ca0;
    }
    ctx->pc = 0x259C98u;
    {
        const bool branch_taken_0x259c98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x259c98) {
            ctx->pc = 0x259C9Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
            ctx->pc = 0x259CF8u;
            goto label_259cf8;
        }
    }
    ctx->pc = 0x259CA0u;
label_259ca0:
    // 0x259ca0: 0x8e22089c
    ctx->pc = 0x259ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
label_259ca4:
    // 0x259ca4: 0x50430014
label_259ca8:
    if (ctx->pc == 0x259CA8u) {
        ctx->pc = 0x259CA8u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
        ctx->pc = 0x259CACu;
        goto label_259cac;
    }
    ctx->pc = 0x259CA4u;
    {
        const bool branch_taken_0x259ca4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x259ca4) {
            ctx->pc = 0x259CA8u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
            ctx->pc = 0x259CF8u;
            goto label_259cf8;
        }
    }
    ctx->pc = 0x259CACu;
label_259cac:
    // 0x259cac: 0x8463002e
    ctx->pc = 0x259cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
label_259cb0:
    // 0x259cb0: 0x460000d
label_259cb4:
    if (ctx->pc == 0x259CB4u) {
        ctx->pc = 0x259CB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259CB8u;
        goto label_259cb8;
    }
    ctx->pc = 0x259CB0u;
    {
        const bool branch_taken_0x259cb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x259CB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259cb0) {
            ctx->pc = 0x259CE8u;
            goto label_259ce8;
        }
    }
    ctx->pc = 0x259CB8u;
label_259cb8:
    // 0x259cb8: 0x3c020032
    ctx->pc = 0x259cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_259cbc:
    // 0x259cbc: 0x2405003c
    ctx->pc = 0x259cbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
label_259cc0:
    // 0x259cc0: 0x8c48f9fc
    ctx->pc = 0x259cc0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294965756)));
label_259cc4:
    // 0x259cc4: 0x8e24089c
    ctx->pc = 0x259cc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
label_259cc8:
    // 0x259cc8: 0x653818
    ctx->pc = 0x259cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_259ccc:
    // 0x259ccc: 0x0
    ctx->pc = 0x259cccu;
    // NOP
label_259cd0:
    // 0x259cd0: 0xe81021
    ctx->pc = 0x259cd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_259cd4:
    // 0x259cd4: 0x50440004
label_259cd8:
    if (ctx->pc == 0x259CD8u) {
        ctx->pc = 0x259CD8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259CDCu;
        goto label_259cdc;
    }
    ctx->pc = 0x259CD4u;
    {
        const bool branch_taken_0x259cd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x259cd4) {
            ctx->pc = 0x259CD8u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x259CE8u;
            goto label_259ce8;
        }
    }
    ctx->pc = 0x259CDCu;
label_259cdc:
    // 0x259cdc: 0x8443002c
    ctx->pc = 0x259cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_259ce0:
    // 0x259ce0: 0x461fffb
label_259ce4:
    if (ctx->pc == 0x259CE4u) {
        ctx->pc = 0x259CE4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x259CE8u;
        goto label_259ce8;
    }
    ctx->pc = 0x259CE0u;
    {
        const bool branch_taken_0x259ce0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x259CE4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x259ce0) {
            ctx->pc = 0x259CD0u;
            goto label_259cd0;
        }
    }
    ctx->pc = 0x259CE8u;
label_259ce8:
    // 0x259ce8: 0x54c00003
label_259cec:
    if (ctx->pc == 0x259CECu) {
        ctx->pc = 0x259CECu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
        ctx->pc = 0x259CF0u;
        goto label_259cf0;
    }
    ctx->pc = 0x259CE8u;
    {
        const bool branch_taken_0x259ce8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x259ce8) {
            ctx->pc = 0x259CECu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
            ctx->pc = 0x259CF8u;
            goto label_259cf8;
        }
    }
    ctx->pc = 0x259CF0u;
label_259cf0:
    // 0x259cf0: 0x1000004b
label_259cf4:
    if (ctx->pc == 0x259CF4u) {
        ctx->pc = 0x259CF4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259CF8u;
        goto label_259cf8;
    }
    ctx->pc = 0x259CF0u;
    {
        const bool branch_taken_0x259cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259CF4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259cf0) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259CF8u;
label_259cf8:
    // 0x259cf8: 0x5440001c
label_259cfc:
    if (ctx->pc == 0x259CFCu) {
        ctx->pc = 0x259CFCu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x259D00u;
        goto label_259d00;
    }
    ctx->pc = 0x259CF8u;
    {
        const bool branch_taken_0x259cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x259cf8) {
            ctx->pc = 0x259CFCu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->pc = 0x259D6Cu;
            goto label_259d6c;
        }
    }
    ctx->pc = 0x259D00u;
label_259d00:
    // 0x259d00: 0x3c020031
    ctx->pc = 0x259d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_259d04:
    // 0x259d04: 0x8c420028
    ctx->pc = 0x259d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_259d08:
    // 0x259d08: 0x28420002
    ctx->pc = 0x259d08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_259d0c:
    // 0x259d0c: 0x14400017
label_259d10:
    if (ctx->pc == 0x259D10u) {
        ctx->pc = 0x259D10u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x259D14u;
        goto label_259d14;
    }
    ctx->pc = 0x259D0Cu;
    {
        const bool branch_taken_0x259d0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259D10u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        if (branch_taken_0x259d0c) {
            ctx->pc = 0x259D6Cu;
            goto label_259d6c;
        }
    }
    ctx->pc = 0x259D14u;
label_259d14:
    // 0x259d14: 0x30420400
    ctx->pc = 0x259d14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_259d18:
    // 0x259d18: 0x10400013
label_259d1c:
    if (ctx->pc == 0x259D1Cu) {
        ctx->pc = 0x259D1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 126));
        ctx->pc = 0x259D20u;
        goto label_259d20;
    }
    ctx->pc = 0x259D18u;
    {
        const bool branch_taken_0x259d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259D1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 126));
        if (branch_taken_0x259d18) {
            ctx->pc = 0x259D68u;
            goto label_259d68;
        }
    }
    ctx->pc = 0x259D20u;
label_259d20:
    // 0x259d20: 0x8e250000
    ctx->pc = 0x259d20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259d24:
    // 0x259d24: 0xc0a3a1c
label_259d28:
    if (ctx->pc == 0x259D28u) {
        ctx->pc = 0x259D28u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x259D2Cu;
        goto label_259d2c;
    }
    ctx->pc = 0x259D24u;
    SET_GPR_U32(ctx, 31, 0x259D2Cu);
    ctx->pc = 0x259D28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D2Cu; }
    }
    if (ctx->pc != 0x259D2Cu) { return; }
    ctx->pc = 0x259D2Cu;
label_259d2c:
    // 0x259d2c: 0x1000000f
label_259d30:
    if (ctx->pc == 0x259D30u) {
        ctx->pc = 0x259D30u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x259D34u;
        goto label_259d34;
    }
    ctx->pc = 0x259D2Cu;
    {
        const bool branch_taken_0x259d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259D30u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        if (branch_taken_0x259d2c) {
            ctx->pc = 0x259D6Cu;
            goto label_259d6c;
        }
    }
    ctx->pc = 0x259D34u;
label_259d34:
    // 0x259d34: 0x5440000d
label_259d38:
    if (ctx->pc == 0x259D38u) {
        ctx->pc = 0x259D38u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x259D3Cu;
        goto label_259d3c;
    }
    ctx->pc = 0x259D34u;
    {
        const bool branch_taken_0x259d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x259d34) {
            ctx->pc = 0x259D38u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->pc = 0x259D6Cu;
            goto label_259d6c;
        }
    }
    ctx->pc = 0x259D3Cu;
label_259d3c:
    // 0x259d3c: 0x3c020031
    ctx->pc = 0x259d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_259d40:
    // 0x259d40: 0x8c420028
    ctx->pc = 0x259d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_259d44:
    // 0x259d44: 0x28420002
    ctx->pc = 0x259d44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_259d48:
    // 0x259d48: 0x14400008
label_259d4c:
    if (ctx->pc == 0x259D4Cu) {
        ctx->pc = 0x259D4Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->pc = 0x259D50u;
        goto label_259d50;
    }
    ctx->pc = 0x259D48u;
    {
        const bool branch_taken_0x259d48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259D4Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        if (branch_taken_0x259d48) {
            ctx->pc = 0x259D6Cu;
            goto label_259d6c;
        }
    }
    ctx->pc = 0x259D50u;
label_259d50:
    // 0x259d50: 0x30420400
    ctx->pc = 0x259d50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
label_259d54:
    // 0x259d54: 0x10400004
label_259d58:
    if (ctx->pc == 0x259D58u) {
        ctx->pc = 0x259D58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x259D5Cu;
        goto label_259d5c;
    }
    ctx->pc = 0x259D54u;
    {
        const bool branch_taken_0x259d54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259D58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x259d54) {
            ctx->pc = 0x259D68u;
            goto label_259d68;
        }
    }
    ctx->pc = 0x259D5Cu;
label_259d5c:
    // 0x259d5c: 0x8e250000
    ctx->pc = 0x259d5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259d60:
    // 0x259d60: 0xc0a3a1c
label_259d64:
    if (ctx->pc == 0x259D64u) {
        ctx->pc = 0x259D64u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x259D68u;
        goto label_259d68;
    }
    ctx->pc = 0x259D60u;
    SET_GPR_U32(ctx, 31, 0x259D68u);
    ctx->pc = 0x259D64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D68u; }
    }
    if (ctx->pc != 0x259D68u) { return; }
    ctx->pc = 0x259D68u;
label_259d68:
    // 0x259d68: 0x960200f4
    ctx->pc = 0x259d68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
label_259d6c:
    // 0x259d6c: 0x30420040
    ctx->pc = 0x259d6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_259d70:
    // 0x259d70: 0x10400007
label_259d74:
    if (ctx->pc == 0x259D74u) {
        ctx->pc = 0x259D74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259D78u;
        goto label_259d78;
    }
    ctx->pc = 0x259D70u;
    {
        const bool branch_taken_0x259d70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259D74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259d70) {
            ctx->pc = 0x259D90u;
            goto label_259d90;
        }
    }
    ctx->pc = 0x259D78u;
label_259d78:
    // 0x259d78: 0x8e230000
    ctx->pc = 0x259d78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259d7c:
    // 0x259d7c: 0x621004
    ctx->pc = 0x259d7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_259d80:
    // 0x259d80: 0x920300e2
    ctx->pc = 0x259d80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
label_259d84:
    // 0x259d84: 0x621825
    ctx->pc = 0x259d84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259d88:
    // 0x259d88: 0x1000000d
label_259d8c:
    if (ctx->pc == 0x259D8Cu) {
        ctx->pc = 0x259D8Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 226), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x259D90u;
        goto label_259d90;
    }
    ctx->pc = 0x259D88u;
    {
        const bool branch_taken_0x259d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259D8Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 226), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x259d88) {
            ctx->pc = 0x259DC0u;
            goto label_259dc0;
        }
    }
    ctx->pc = 0x259D90u;
label_259d90:
    // 0x259d90: 0x1200000b
label_259d94:
    if (ctx->pc == 0x259D94u) {
        ctx->pc = 0x259D94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259D98u;
        goto label_259d98;
    }
    ctx->pc = 0x259D90u;
    {
        const bool branch_taken_0x259d90 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x259D94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259d90) {
            ctx->pc = 0x259DC0u;
            goto label_259dc0;
        }
    }
    ctx->pc = 0x259D98u;
label_259d98:
    // 0x259d98: 0x24050001
    ctx->pc = 0x259d98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_259d9c:
    // 0x259d9c: 0x0
    ctx->pc = 0x259d9cu;
    // NOP
label_259da0:
    // 0x259da0: 0x8e230000
    ctx->pc = 0x259da0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259da4:
    // 0x259da4: 0x651804
    ctx->pc = 0x259da4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_259da8:
    // 0x259da8: 0x908200e2
    ctx->pc = 0x259da8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 226)));
label_259dac:
    // 0x259dac: 0x431025
    ctx->pc = 0x259dacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_259db0:
    // 0x259db0: 0xa08200e2
    ctx->pc = 0x259db0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 226), (uint8_t)GPR_U32(ctx, 2));
label_259db4:
    // 0x259db4: 0x8c8400f8
    ctx->pc = 0x259db4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_259db8:
    // 0x259db8: 0x1480fff9
label_259dbc:
    if (ctx->pc == 0x259DBCu) {
        ctx->pc = 0x259DC0u;
        goto label_259dc0;
    }
    ctx->pc = 0x259DB8u;
    {
        const bool branch_taken_0x259db8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x259db8) {
            ctx->pc = 0x259DA0u;
            goto label_259da0;
        }
    }
    ctx->pc = 0x259DC0u;
label_259dc0:
    // 0x259dc0: 0x3c020034
    ctx->pc = 0x259dc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_259dc4:
    // 0x259dc4: 0x8c43e7f0
    ctx->pc = 0x259dc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_259dc8:
    // 0x259dc8: 0x2402000d
    ctx->pc = 0x259dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_259dcc:
    // 0x259dcc: 0x14620015
label_259dd0:
    if (ctx->pc == 0x259DD0u) {
        ctx->pc = 0x259DD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259DD4u;
        goto label_259dd4;
    }
    ctx->pc = 0x259DCCu;
    {
        const bool branch_taken_0x259dcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x259DD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259dcc) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259DD4u;
label_259dd4:
    // 0x259dd4: 0x920300f6
    ctx->pc = 0x259dd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
label_259dd8:
    // 0x259dd8: 0x240200f0
    ctx->pc = 0x259dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_259ddc:
    // 0x259ddc: 0x14620011
label_259de0:
    if (ctx->pc == 0x259DE0u) {
        ctx->pc = 0x259DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259DE4u;
        goto label_259de4;
    }
    ctx->pc = 0x259DDCu;
    {
        const bool branch_taken_0x259ddc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x259DE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259ddc) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259DE4u;
label_259de4:
    // 0x259de4: 0x920300e2
    ctx->pc = 0x259de4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
label_259de8:
    // 0x259de8: 0x3062000f
    ctx->pc = 0x259de8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
label_259dec:
    // 0x259dec: 0x1040000b
label_259df0:
    if (ctx->pc == 0x259DF0u) {
        ctx->pc = 0x259DF0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x259DF4u;
        goto label_259df4;
    }
    ctx->pc = 0x259DECu;
    {
        const bool branch_taken_0x259dec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259DF0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x259dec) {
            ctx->pc = 0x259E1Cu;
            goto label_259e1c;
        }
    }
    ctx->pc = 0x259DF4u;
label_259df4:
    // 0x259df4: 0x1440000b
label_259df8:
    if (ctx->pc == 0x259DF8u) {
        ctx->pc = 0x259DF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259DFCu;
        goto label_259dfc;
    }
    ctx->pc = 0x259DF4u;
    {
        const bool branch_taken_0x259df4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x259DF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259df4) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259DFCu;
label_259dfc:
    // 0x259dfc: 0xc09d20a
label_259e00:
    if (ctx->pc == 0x259E00u) {
        ctx->pc = 0x259E00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x259E04u;
        goto label_259e04;
    }
    ctx->pc = 0x259DFCu;
    SET_GPR_U32(ctx, 31, 0x259E04u);
    ctx->pc = 0x259E00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x274828u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerHintsActivate_0x274828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E04u; }
    }
    if (ctx->pc != 0x259E04u) { return; }
    ctx->pc = 0x259E04u;
label_259e04:
    // 0x259e04: 0x10400007
label_259e08:
    if (ctx->pc == 0x259E08u) {
        ctx->pc = 0x259E08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259E0Cu;
        goto label_259e0c;
    }
    ctx->pc = 0x259E04u;
    {
        const bool branch_taken_0x259e04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259E08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259e04) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259E0Cu;
label_259e0c:
    // 0x259e0c: 0x920200e2
    ctx->pc = 0x259e0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
label_259e10:
    // 0x259e10: 0x34420010
    ctx->pc = 0x259e10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
label_259e14:
    // 0x259e14: 0x10000002
label_259e18:
    if (ctx->pc == 0x259E18u) {
        ctx->pc = 0x259E18u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 226), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x259E1Cu;
        goto label_259e1c;
    }
    ctx->pc = 0x259E14u;
    {
        const bool branch_taken_0x259e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259E18u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 226), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x259e14) {
            ctx->pc = 0x259E20u;
            goto label_259e20;
        }
    }
    ctx->pc = 0x259E1Cu;
label_259e1c:
    // 0x259e1c: 0xa20000e2
    ctx->pc = 0x259e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 226), (uint8_t)GPR_U32(ctx, 0));
label_259e20:
    // 0x259e20: 0x280102d
    ctx->pc = 0x259e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259e24:
    // 0x259e24: 0xdfbf00a0
    ctx->pc = 0x259e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_259e28:
    // 0x259e28: 0xdfb40090
    ctx->pc = 0x259e28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_259e2c:
    // 0x259e2c: 0xdfb30080
    ctx->pc = 0x259e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_259e30:
    // 0x259e30: 0xdfb20070
    ctx->pc = 0x259e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_259e34:
    // 0x259e34: 0xdfb10060
    ctx->pc = 0x259e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_259e38:
    // 0x259e38: 0xdfb00050
    ctx->pc = 0x259e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_259e3c:
    // 0x259e3c: 0x3e00008
label_259e40:
    if (ctx->pc == 0x259E40u) {
        ctx->pc = 0x259E40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x259E44u;
        goto label_fallthrough_0x259e3c;
    }
    ctx->pc = 0x259E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259E40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259730u: goto label_259730;
            case 0x259734u: goto label_259734;
            case 0x259738u: goto label_259738;
            case 0x25973Cu: goto label_25973c;
            case 0x259740u: goto label_259740;
            case 0x259744u: goto label_259744;
            case 0x259748u: goto label_259748;
            case 0x25974Cu: goto label_25974c;
            case 0x259750u: goto label_259750;
            case 0x259754u: goto label_259754;
            case 0x259758u: goto label_259758;
            case 0x25975Cu: goto label_25975c;
            case 0x259760u: goto label_259760;
            case 0x259764u: goto label_259764;
            case 0x259768u: goto label_259768;
            case 0x25976Cu: goto label_25976c;
            case 0x259770u: goto label_259770;
            case 0x259774u: goto label_259774;
            case 0x259778u: goto label_259778;
            case 0x25977Cu: goto label_25977c;
            case 0x259780u: goto label_259780;
            case 0x259784u: goto label_259784;
            case 0x259788u: goto label_259788;
            case 0x25978Cu: goto label_25978c;
            case 0x259790u: goto label_259790;
            case 0x259794u: goto label_259794;
            case 0x259798u: goto label_259798;
            case 0x25979Cu: goto label_25979c;
            case 0x2597A0u: goto label_2597a0;
            case 0x2597A4u: goto label_2597a4;
            case 0x2597A8u: goto label_2597a8;
            case 0x2597ACu: goto label_2597ac;
            case 0x2597B0u: goto label_2597b0;
            case 0x2597B4u: goto label_2597b4;
            case 0x2597B8u: goto label_2597b8;
            case 0x2597BCu: goto label_2597bc;
            case 0x2597C0u: goto label_2597c0;
            case 0x2597C4u: goto label_2597c4;
            case 0x2597C8u: goto label_2597c8;
            case 0x2597CCu: goto label_2597cc;
            case 0x2597D0u: goto label_2597d0;
            case 0x2597D4u: goto label_2597d4;
            case 0x2597D8u: goto label_2597d8;
            case 0x2597DCu: goto label_2597dc;
            case 0x2597E0u: goto label_2597e0;
            case 0x2597E4u: goto label_2597e4;
            case 0x2597E8u: goto label_2597e8;
            case 0x2597ECu: goto label_2597ec;
            case 0x2597F0u: goto label_2597f0;
            case 0x2597F4u: goto label_2597f4;
            case 0x2597F8u: goto label_2597f8;
            case 0x2597FCu: goto label_2597fc;
            case 0x259800u: goto label_259800;
            case 0x259804u: goto label_259804;
            case 0x259808u: goto label_259808;
            case 0x25980Cu: goto label_25980c;
            case 0x259810u: goto label_259810;
            case 0x259814u: goto label_259814;
            case 0x259818u: goto label_259818;
            case 0x25981Cu: goto label_25981c;
            case 0x259820u: goto label_259820;
            case 0x259824u: goto label_259824;
            case 0x259828u: goto label_259828;
            case 0x25982Cu: goto label_25982c;
            case 0x259830u: goto label_259830;
            case 0x259834u: goto label_259834;
            case 0x259838u: goto label_259838;
            case 0x25983Cu: goto label_25983c;
            case 0x259840u: goto label_259840;
            case 0x259844u: goto label_259844;
            case 0x259848u: goto label_259848;
            case 0x25984Cu: goto label_25984c;
            case 0x259850u: goto label_259850;
            case 0x259854u: goto label_259854;
            case 0x259858u: goto label_259858;
            case 0x25985Cu: goto label_25985c;
            case 0x259860u: goto label_259860;
            case 0x259864u: goto label_259864;
            case 0x259868u: goto label_259868;
            case 0x25986Cu: goto label_25986c;
            case 0x259870u: goto label_259870;
            case 0x259874u: goto label_259874;
            case 0x259878u: goto label_259878;
            case 0x25987Cu: goto label_25987c;
            case 0x259880u: goto label_259880;
            case 0x259884u: goto label_259884;
            case 0x259888u: goto label_259888;
            case 0x25988Cu: goto label_25988c;
            case 0x259890u: goto label_259890;
            case 0x259894u: goto label_259894;
            case 0x259898u: goto label_259898;
            case 0x25989Cu: goto label_25989c;
            case 0x2598A0u: goto label_2598a0;
            case 0x2598A4u: goto label_2598a4;
            case 0x2598A8u: goto label_2598a8;
            case 0x2598ACu: goto label_2598ac;
            case 0x2598B0u: goto label_2598b0;
            case 0x2598B4u: goto label_2598b4;
            case 0x2598B8u: goto label_2598b8;
            case 0x2598BCu: goto label_2598bc;
            case 0x2598C0u: goto label_2598c0;
            case 0x2598C4u: goto label_2598c4;
            case 0x2598C8u: goto label_2598c8;
            case 0x2598CCu: goto label_2598cc;
            case 0x2598D0u: goto label_2598d0;
            case 0x2598D4u: goto label_2598d4;
            case 0x2598D8u: goto label_2598d8;
            case 0x2598DCu: goto label_2598dc;
            case 0x2598E0u: goto label_2598e0;
            case 0x2598E4u: goto label_2598e4;
            case 0x2598E8u: goto label_2598e8;
            case 0x2598ECu: goto label_2598ec;
            case 0x2598F0u: goto label_2598f0;
            case 0x2598F4u: goto label_2598f4;
            case 0x2598F8u: goto label_2598f8;
            case 0x2598FCu: goto label_2598fc;
            case 0x259900u: goto label_259900;
            case 0x259904u: goto label_259904;
            case 0x259908u: goto label_259908;
            case 0x25990Cu: goto label_25990c;
            case 0x259910u: goto label_259910;
            case 0x259914u: goto label_259914;
            case 0x259918u: goto label_259918;
            case 0x25991Cu: goto label_25991c;
            case 0x259920u: goto label_259920;
            case 0x259924u: goto label_259924;
            case 0x259928u: goto label_259928;
            case 0x25992Cu: goto label_25992c;
            case 0x259930u: goto label_259930;
            case 0x259934u: goto label_259934;
            case 0x259938u: goto label_259938;
            case 0x25993Cu: goto label_25993c;
            case 0x259940u: goto label_259940;
            case 0x259944u: goto label_259944;
            case 0x259948u: goto label_259948;
            case 0x25994Cu: goto label_25994c;
            case 0x259950u: goto label_259950;
            case 0x259954u: goto label_259954;
            case 0x259958u: goto label_259958;
            case 0x25995Cu: goto label_25995c;
            case 0x259960u: goto label_259960;
            case 0x259964u: goto label_259964;
            case 0x259968u: goto label_259968;
            case 0x25996Cu: goto label_25996c;
            case 0x259970u: goto label_259970;
            case 0x259974u: goto label_259974;
            case 0x259978u: goto label_259978;
            case 0x25997Cu: goto label_25997c;
            case 0x259980u: goto label_259980;
            case 0x259984u: goto label_259984;
            case 0x259988u: goto label_259988;
            case 0x25998Cu: goto label_25998c;
            case 0x259990u: goto label_259990;
            case 0x259994u: goto label_259994;
            case 0x259998u: goto label_259998;
            case 0x25999Cu: goto label_25999c;
            case 0x2599A0u: goto label_2599a0;
            case 0x2599A4u: goto label_2599a4;
            case 0x2599A8u: goto label_2599a8;
            case 0x2599ACu: goto label_2599ac;
            case 0x2599B0u: goto label_2599b0;
            case 0x2599B4u: goto label_2599b4;
            case 0x2599B8u: goto label_2599b8;
            case 0x2599BCu: goto label_2599bc;
            case 0x2599C0u: goto label_2599c0;
            case 0x2599C4u: goto label_2599c4;
            case 0x2599C8u: goto label_2599c8;
            case 0x2599CCu: goto label_2599cc;
            case 0x2599D0u: goto label_2599d0;
            case 0x2599D4u: goto label_2599d4;
            case 0x2599D8u: goto label_2599d8;
            case 0x2599DCu: goto label_2599dc;
            case 0x2599E0u: goto label_2599e0;
            case 0x2599E4u: goto label_2599e4;
            case 0x2599E8u: goto label_2599e8;
            case 0x2599ECu: goto label_2599ec;
            case 0x2599F0u: goto label_2599f0;
            case 0x2599F4u: goto label_2599f4;
            case 0x2599F8u: goto label_2599f8;
            case 0x2599FCu: goto label_2599fc;
            case 0x259A00u: goto label_259a00;
            case 0x259A04u: goto label_259a04;
            case 0x259A08u: goto label_259a08;
            case 0x259A0Cu: goto label_259a0c;
            case 0x259A10u: goto label_259a10;
            case 0x259A14u: goto label_259a14;
            case 0x259A18u: goto label_259a18;
            case 0x259A1Cu: goto label_259a1c;
            case 0x259A20u: goto label_259a20;
            case 0x259A24u: goto label_259a24;
            case 0x259A28u: goto label_259a28;
            case 0x259A2Cu: goto label_259a2c;
            case 0x259A30u: goto label_259a30;
            case 0x259A34u: goto label_259a34;
            case 0x259A38u: goto label_259a38;
            case 0x259A3Cu: goto label_259a3c;
            case 0x259A40u: goto label_259a40;
            case 0x259A44u: goto label_259a44;
            case 0x259A48u: goto label_259a48;
            case 0x259A4Cu: goto label_259a4c;
            case 0x259A50u: goto label_259a50;
            case 0x259A54u: goto label_259a54;
            case 0x259A58u: goto label_259a58;
            case 0x259A5Cu: goto label_259a5c;
            case 0x259A60u: goto label_259a60;
            case 0x259A64u: goto label_259a64;
            case 0x259A68u: goto label_259a68;
            case 0x259A6Cu: goto label_259a6c;
            case 0x259A70u: goto label_259a70;
            case 0x259A74u: goto label_259a74;
            case 0x259A78u: goto label_259a78;
            case 0x259A7Cu: goto label_259a7c;
            case 0x259A80u: goto label_259a80;
            case 0x259A84u: goto label_259a84;
            case 0x259A88u: goto label_259a88;
            case 0x259A8Cu: goto label_259a8c;
            case 0x259A90u: goto label_259a90;
            case 0x259A94u: goto label_259a94;
            case 0x259A98u: goto label_259a98;
            case 0x259A9Cu: goto label_259a9c;
            case 0x259AA0u: goto label_259aa0;
            case 0x259AA4u: goto label_259aa4;
            case 0x259AA8u: goto label_259aa8;
            case 0x259AACu: goto label_259aac;
            case 0x259AB0u: goto label_259ab0;
            case 0x259AB4u: goto label_259ab4;
            case 0x259AB8u: goto label_259ab8;
            case 0x259ABCu: goto label_259abc;
            case 0x259AC0u: goto label_259ac0;
            case 0x259AC4u: goto label_259ac4;
            case 0x259AC8u: goto label_259ac8;
            case 0x259ACCu: goto label_259acc;
            case 0x259AD0u: goto label_259ad0;
            case 0x259AD4u: goto label_259ad4;
            case 0x259AD8u: goto label_259ad8;
            case 0x259ADCu: goto label_259adc;
            case 0x259AE0u: goto label_259ae0;
            case 0x259AE4u: goto label_259ae4;
            case 0x259AE8u: goto label_259ae8;
            case 0x259AECu: goto label_259aec;
            case 0x259AF0u: goto label_259af0;
            case 0x259AF4u: goto label_259af4;
            case 0x259AF8u: goto label_259af8;
            case 0x259AFCu: goto label_259afc;
            case 0x259B00u: goto label_259b00;
            case 0x259B04u: goto label_259b04;
            case 0x259B08u: goto label_259b08;
            case 0x259B0Cu: goto label_259b0c;
            case 0x259B10u: goto label_259b10;
            case 0x259B14u: goto label_259b14;
            case 0x259B18u: goto label_259b18;
            case 0x259B1Cu: goto label_259b1c;
            case 0x259B20u: goto label_259b20;
            case 0x259B24u: goto label_259b24;
            case 0x259B28u: goto label_259b28;
            case 0x259B2Cu: goto label_259b2c;
            case 0x259B30u: goto label_259b30;
            case 0x259B34u: goto label_259b34;
            case 0x259B38u: goto label_259b38;
            case 0x259B3Cu: goto label_259b3c;
            case 0x259B40u: goto label_259b40;
            case 0x259B44u: goto label_259b44;
            case 0x259B48u: goto label_259b48;
            case 0x259B4Cu: goto label_259b4c;
            case 0x259B50u: goto label_259b50;
            case 0x259B54u: goto label_259b54;
            case 0x259B58u: goto label_259b58;
            case 0x259B5Cu: goto label_259b5c;
            case 0x259B60u: goto label_259b60;
            case 0x259B64u: goto label_259b64;
            case 0x259B68u: goto label_259b68;
            case 0x259B6Cu: goto label_259b6c;
            case 0x259B70u: goto label_259b70;
            case 0x259B74u: goto label_259b74;
            case 0x259B78u: goto label_259b78;
            case 0x259B7Cu: goto label_259b7c;
            case 0x259B80u: goto label_259b80;
            case 0x259B84u: goto label_259b84;
            case 0x259B88u: goto label_259b88;
            case 0x259B8Cu: goto label_259b8c;
            case 0x259B90u: goto label_259b90;
            case 0x259B94u: goto label_259b94;
            case 0x259B98u: goto label_259b98;
            case 0x259B9Cu: goto label_259b9c;
            case 0x259BA0u: goto label_259ba0;
            case 0x259BA4u: goto label_259ba4;
            case 0x259BA8u: goto label_259ba8;
            case 0x259BACu: goto label_259bac;
            case 0x259BB0u: goto label_259bb0;
            case 0x259BB4u: goto label_259bb4;
            case 0x259BB8u: goto label_259bb8;
            case 0x259BBCu: goto label_259bbc;
            case 0x259BC0u: goto label_259bc0;
            case 0x259BC4u: goto label_259bc4;
            case 0x259BC8u: goto label_259bc8;
            case 0x259BCCu: goto label_259bcc;
            case 0x259BD0u: goto label_259bd0;
            case 0x259BD4u: goto label_259bd4;
            case 0x259BD8u: goto label_259bd8;
            case 0x259BDCu: goto label_259bdc;
            case 0x259BE0u: goto label_259be0;
            case 0x259BE4u: goto label_259be4;
            case 0x259BE8u: goto label_259be8;
            case 0x259BECu: goto label_259bec;
            case 0x259BF0u: goto label_259bf0;
            case 0x259BF4u: goto label_259bf4;
            case 0x259BF8u: goto label_259bf8;
            case 0x259BFCu: goto label_259bfc;
            case 0x259C00u: goto label_259c00;
            case 0x259C04u: goto label_259c04;
            case 0x259C08u: goto label_259c08;
            case 0x259C0Cu: goto label_259c0c;
            case 0x259C10u: goto label_259c10;
            case 0x259C14u: goto label_259c14;
            case 0x259C18u: goto label_259c18;
            case 0x259C1Cu: goto label_259c1c;
            case 0x259C20u: goto label_259c20;
            case 0x259C24u: goto label_259c24;
            case 0x259C28u: goto label_259c28;
            case 0x259C2Cu: goto label_259c2c;
            case 0x259C30u: goto label_259c30;
            case 0x259C34u: goto label_259c34;
            case 0x259C38u: goto label_259c38;
            case 0x259C3Cu: goto label_259c3c;
            case 0x259C40u: goto label_259c40;
            case 0x259C44u: goto label_259c44;
            case 0x259C48u: goto label_259c48;
            case 0x259C4Cu: goto label_259c4c;
            case 0x259C50u: goto label_259c50;
            case 0x259C54u: goto label_259c54;
            case 0x259C58u: goto label_259c58;
            case 0x259C5Cu: goto label_259c5c;
            case 0x259C60u: goto label_259c60;
            case 0x259C64u: goto label_259c64;
            case 0x259C68u: goto label_259c68;
            case 0x259C6Cu: goto label_259c6c;
            case 0x259C70u: goto label_259c70;
            case 0x259C74u: goto label_259c74;
            case 0x259C78u: goto label_259c78;
            case 0x259C7Cu: goto label_259c7c;
            case 0x259C80u: goto label_259c80;
            case 0x259C84u: goto label_259c84;
            case 0x259C88u: goto label_259c88;
            case 0x259C8Cu: goto label_259c8c;
            case 0x259C90u: goto label_259c90;
            case 0x259C94u: goto label_259c94;
            case 0x259C98u: goto label_259c98;
            case 0x259C9Cu: goto label_259c9c;
            case 0x259CA0u: goto label_259ca0;
            case 0x259CA4u: goto label_259ca4;
            case 0x259CA8u: goto label_259ca8;
            case 0x259CACu: goto label_259cac;
            case 0x259CB0u: goto label_259cb0;
            case 0x259CB4u: goto label_259cb4;
            case 0x259CB8u: goto label_259cb8;
            case 0x259CBCu: goto label_259cbc;
            case 0x259CC0u: goto label_259cc0;
            case 0x259CC4u: goto label_259cc4;
            case 0x259CC8u: goto label_259cc8;
            case 0x259CCCu: goto label_259ccc;
            case 0x259CD0u: goto label_259cd0;
            case 0x259CD4u: goto label_259cd4;
            case 0x259CD8u: goto label_259cd8;
            case 0x259CDCu: goto label_259cdc;
            case 0x259CE0u: goto label_259ce0;
            case 0x259CE4u: goto label_259ce4;
            case 0x259CE8u: goto label_259ce8;
            case 0x259CECu: goto label_259cec;
            case 0x259CF0u: goto label_259cf0;
            case 0x259CF4u: goto label_259cf4;
            case 0x259CF8u: goto label_259cf8;
            case 0x259CFCu: goto label_259cfc;
            case 0x259D00u: goto label_259d00;
            case 0x259D04u: goto label_259d04;
            case 0x259D08u: goto label_259d08;
            case 0x259D0Cu: goto label_259d0c;
            case 0x259D10u: goto label_259d10;
            case 0x259D14u: goto label_259d14;
            case 0x259D18u: goto label_259d18;
            case 0x259D1Cu: goto label_259d1c;
            case 0x259D20u: goto label_259d20;
            case 0x259D24u: goto label_259d24;
            case 0x259D28u: goto label_259d28;
            case 0x259D2Cu: goto label_259d2c;
            case 0x259D30u: goto label_259d30;
            case 0x259D34u: goto label_259d34;
            case 0x259D38u: goto label_259d38;
            case 0x259D3Cu: goto label_259d3c;
            case 0x259D40u: goto label_259d40;
            case 0x259D44u: goto label_259d44;
            case 0x259D48u: goto label_259d48;
            case 0x259D4Cu: goto label_259d4c;
            case 0x259D50u: goto label_259d50;
            case 0x259D54u: goto label_259d54;
            case 0x259D58u: goto label_259d58;
            case 0x259D5Cu: goto label_259d5c;
            case 0x259D60u: goto label_259d60;
            case 0x259D64u: goto label_259d64;
            case 0x259D68u: goto label_259d68;
            case 0x259D6Cu: goto label_259d6c;
            case 0x259D70u: goto label_259d70;
            case 0x259D74u: goto label_259d74;
            case 0x259D78u: goto label_259d78;
            case 0x259D7Cu: goto label_259d7c;
            case 0x259D80u: goto label_259d80;
            case 0x259D84u: goto label_259d84;
            case 0x259D88u: goto label_259d88;
            case 0x259D8Cu: goto label_259d8c;
            case 0x259D90u: goto label_259d90;
            case 0x259D94u: goto label_259d94;
            case 0x259D98u: goto label_259d98;
            case 0x259D9Cu: goto label_259d9c;
            case 0x259DA0u: goto label_259da0;
            case 0x259DA4u: goto label_259da4;
            case 0x259DA8u: goto label_259da8;
            case 0x259DACu: goto label_259dac;
            case 0x259DB0u: goto label_259db0;
            case 0x259DB4u: goto label_259db4;
            case 0x259DB8u: goto label_259db8;
            case 0x259DBCu: goto label_259dbc;
            case 0x259DC0u: goto label_259dc0;
            case 0x259DC4u: goto label_259dc4;
            case 0x259DC8u: goto label_259dc8;
            case 0x259DCCu: goto label_259dcc;
            case 0x259DD0u: goto label_259dd0;
            case 0x259DD4u: goto label_259dd4;
            case 0x259DD8u: goto label_259dd8;
            case 0x259DDCu: goto label_259ddc;
            case 0x259DE0u: goto label_259de0;
            case 0x259DE4u: goto label_259de4;
            case 0x259DE8u: goto label_259de8;
            case 0x259DECu: goto label_259dec;
            case 0x259DF0u: goto label_259df0;
            case 0x259DF4u: goto label_259df4;
            case 0x259DF8u: goto label_259df8;
            case 0x259DFCu: goto label_259dfc;
            case 0x259E00u: goto label_259e00;
            case 0x259E04u: goto label_259e04;
            case 0x259E08u: goto label_259e08;
            case 0x259E0Cu: goto label_259e0c;
            case 0x259E10u: goto label_259e10;
            case 0x259E14u: goto label_259e14;
            case 0x259E18u: goto label_259e18;
            case 0x259E1Cu: goto label_259e1c;
            case 0x259E20u: goto label_259e20;
            case 0x259E24u: goto label_259e24;
            case 0x259E28u: goto label_259e28;
            case 0x259E2Cu: goto label_259e2c;
            case 0x259E30u: goto label_259e30;
            case 0x259E34u: goto label_259e34;
            case 0x259E38u: goto label_259e38;
            case 0x259E3Cu: goto label_259e3c;
            case 0x259E40u: goto label_259e40;
            default: break;
        }
        return;
    }
label_fallthrough_0x259e3c:
    ctx->pc = 0x259E44u;
}
