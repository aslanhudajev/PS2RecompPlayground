#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GunAdjust__FiP11Gun_Act_tag
// Address: 0x1eb050 - 0x1eb458
void GunAdjust__FiP11Gun_Act_tag_0x1eb050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GunAdjust__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb050u;

label_1eb050:
    // 0x1eb050: 0x27bdffd0
    ctx->pc = 0x1eb050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eb054:
    // 0x1eb054: 0x7fbf0020
    ctx->pc = 0x1eb054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1eb058:
    // 0x1eb058: 0x7fb10010
    ctx->pc = 0x1eb058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb05c:
    // 0x1eb05c: 0x7fb00000
    ctx->pc = 0x1eb05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb060:
    // 0x1eb060: 0x8f868dcc
    ctx->pc = 0x1eb060u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb064:
    // 0x1eb064: 0x70808e28
    ctx->pc = 0x1eb064u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1eb068:
    // 0x1eb068: 0x2cc10008
    ctx->pc = 0x1eb068u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 6), 8));
label_1eb06c:
    // 0x1eb06c: 0x102000ee
label_1eb070:
    if (ctx->pc == 0x1EB070u) {
        ctx->pc = 0x1EB070u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB074u;
        goto label_1eb074;
    }
    ctx->pc = 0x1EB06Cu;
    {
        const bool branch_taken_0x1eb06c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB070u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb06c) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB074u;
label_1eb074:
    // 0x1eb074: 0x3c02002c
    ctx->pc = 0x1eb074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1eb078:
    // 0x1eb078: 0x2443f7c0
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965184));
label_1eb07c:
    // 0x1eb07c: 0x61080
    ctx->pc = 0x1eb07cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
label_1eb080:
    // 0x1eb080: 0x431021
    ctx->pc = 0x1eb080u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb084:
    // 0x1eb084: 0x8c420000
    ctx->pc = 0x1eb084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eb088:
    // 0x1eb088: 0x400008
label_1eb08c:
    if (ctx->pc == 0x1EB08Cu) {
        ctx->pc = 0x1EB090u;
        goto label_1eb090;
    }
    ctx->pc = 0x1EB088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB050u: goto label_1eb050;
            case 0x1EB054u: goto label_1eb054;
            case 0x1EB058u: goto label_1eb058;
            case 0x1EB05Cu: goto label_1eb05c;
            case 0x1EB060u: goto label_1eb060;
            case 0x1EB064u: goto label_1eb064;
            case 0x1EB068u: goto label_1eb068;
            case 0x1EB06Cu: goto label_1eb06c;
            case 0x1EB070u: goto label_1eb070;
            case 0x1EB074u: goto label_1eb074;
            case 0x1EB078u: goto label_1eb078;
            case 0x1EB07Cu: goto label_1eb07c;
            case 0x1EB080u: goto label_1eb080;
            case 0x1EB084u: goto label_1eb084;
            case 0x1EB088u: goto label_1eb088;
            case 0x1EB08Cu: goto label_1eb08c;
            case 0x1EB090u: goto label_1eb090;
            case 0x1EB094u: goto label_1eb094;
            case 0x1EB098u: goto label_1eb098;
            case 0x1EB09Cu: goto label_1eb09c;
            case 0x1EB0A0u: goto label_1eb0a0;
            case 0x1EB0A4u: goto label_1eb0a4;
            case 0x1EB0A8u: goto label_1eb0a8;
            case 0x1EB0ACu: goto label_1eb0ac;
            case 0x1EB0B0u: goto label_1eb0b0;
            case 0x1EB0B4u: goto label_1eb0b4;
            case 0x1EB0B8u: goto label_1eb0b8;
            case 0x1EB0BCu: goto label_1eb0bc;
            case 0x1EB0C0u: goto label_1eb0c0;
            case 0x1EB0C4u: goto label_1eb0c4;
            case 0x1EB0C8u: goto label_1eb0c8;
            case 0x1EB0CCu: goto label_1eb0cc;
            case 0x1EB0D0u: goto label_1eb0d0;
            case 0x1EB0D4u: goto label_1eb0d4;
            case 0x1EB0D8u: goto label_1eb0d8;
            case 0x1EB0DCu: goto label_1eb0dc;
            case 0x1EB0E0u: goto label_1eb0e0;
            case 0x1EB0E4u: goto label_1eb0e4;
            case 0x1EB0E8u: goto label_1eb0e8;
            case 0x1EB0ECu: goto label_1eb0ec;
            case 0x1EB0F0u: goto label_1eb0f0;
            case 0x1EB0F4u: goto label_1eb0f4;
            case 0x1EB0F8u: goto label_1eb0f8;
            case 0x1EB0FCu: goto label_1eb0fc;
            case 0x1EB100u: goto label_1eb100;
            case 0x1EB104u: goto label_1eb104;
            case 0x1EB108u: goto label_1eb108;
            case 0x1EB10Cu: goto label_1eb10c;
            case 0x1EB110u: goto label_1eb110;
            case 0x1EB114u: goto label_1eb114;
            case 0x1EB118u: goto label_1eb118;
            case 0x1EB11Cu: goto label_1eb11c;
            case 0x1EB120u: goto label_1eb120;
            case 0x1EB124u: goto label_1eb124;
            case 0x1EB128u: goto label_1eb128;
            case 0x1EB12Cu: goto label_1eb12c;
            case 0x1EB130u: goto label_1eb130;
            case 0x1EB134u: goto label_1eb134;
            case 0x1EB138u: goto label_1eb138;
            case 0x1EB13Cu: goto label_1eb13c;
            case 0x1EB140u: goto label_1eb140;
            case 0x1EB144u: goto label_1eb144;
            case 0x1EB148u: goto label_1eb148;
            case 0x1EB14Cu: goto label_1eb14c;
            case 0x1EB150u: goto label_1eb150;
            case 0x1EB154u: goto label_1eb154;
            case 0x1EB158u: goto label_1eb158;
            case 0x1EB15Cu: goto label_1eb15c;
            case 0x1EB160u: goto label_1eb160;
            case 0x1EB164u: goto label_1eb164;
            case 0x1EB168u: goto label_1eb168;
            case 0x1EB16Cu: goto label_1eb16c;
            case 0x1EB170u: goto label_1eb170;
            case 0x1EB174u: goto label_1eb174;
            case 0x1EB178u: goto label_1eb178;
            case 0x1EB17Cu: goto label_1eb17c;
            case 0x1EB180u: goto label_1eb180;
            case 0x1EB184u: goto label_1eb184;
            case 0x1EB188u: goto label_1eb188;
            case 0x1EB18Cu: goto label_1eb18c;
            case 0x1EB190u: goto label_1eb190;
            case 0x1EB194u: goto label_1eb194;
            case 0x1EB198u: goto label_1eb198;
            case 0x1EB19Cu: goto label_1eb19c;
            case 0x1EB1A0u: goto label_1eb1a0;
            case 0x1EB1A4u: goto label_1eb1a4;
            case 0x1EB1A8u: goto label_1eb1a8;
            case 0x1EB1ACu: goto label_1eb1ac;
            case 0x1EB1B0u: goto label_1eb1b0;
            case 0x1EB1B4u: goto label_1eb1b4;
            case 0x1EB1B8u: goto label_1eb1b8;
            case 0x1EB1BCu: goto label_1eb1bc;
            case 0x1EB1C0u: goto label_1eb1c0;
            case 0x1EB1C4u: goto label_1eb1c4;
            case 0x1EB1C8u: goto label_1eb1c8;
            case 0x1EB1CCu: goto label_1eb1cc;
            case 0x1EB1D0u: goto label_1eb1d0;
            case 0x1EB1D4u: goto label_1eb1d4;
            case 0x1EB1D8u: goto label_1eb1d8;
            case 0x1EB1DCu: goto label_1eb1dc;
            case 0x1EB1E0u: goto label_1eb1e0;
            case 0x1EB1E4u: goto label_1eb1e4;
            case 0x1EB1E8u: goto label_1eb1e8;
            case 0x1EB1ECu: goto label_1eb1ec;
            case 0x1EB1F0u: goto label_1eb1f0;
            case 0x1EB1F4u: goto label_1eb1f4;
            case 0x1EB1F8u: goto label_1eb1f8;
            case 0x1EB1FCu: goto label_1eb1fc;
            case 0x1EB200u: goto label_1eb200;
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB208u: goto label_1eb208;
            case 0x1EB20Cu: goto label_1eb20c;
            case 0x1EB210u: goto label_1eb210;
            case 0x1EB214u: goto label_1eb214;
            case 0x1EB218u: goto label_1eb218;
            case 0x1EB21Cu: goto label_1eb21c;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB224u: goto label_1eb224;
            case 0x1EB228u: goto label_1eb228;
            case 0x1EB22Cu: goto label_1eb22c;
            case 0x1EB230u: goto label_1eb230;
            case 0x1EB234u: goto label_1eb234;
            case 0x1EB238u: goto label_1eb238;
            case 0x1EB23Cu: goto label_1eb23c;
            case 0x1EB240u: goto label_1eb240;
            case 0x1EB244u: goto label_1eb244;
            case 0x1EB248u: goto label_1eb248;
            case 0x1EB24Cu: goto label_1eb24c;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB254u: goto label_1eb254;
            case 0x1EB258u: goto label_1eb258;
            case 0x1EB25Cu: goto label_1eb25c;
            case 0x1EB260u: goto label_1eb260;
            case 0x1EB264u: goto label_1eb264;
            case 0x1EB268u: goto label_1eb268;
            case 0x1EB26Cu: goto label_1eb26c;
            case 0x1EB270u: goto label_1eb270;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB278u: goto label_1eb278;
            case 0x1EB27Cu: goto label_1eb27c;
            case 0x1EB280u: goto label_1eb280;
            case 0x1EB284u: goto label_1eb284;
            case 0x1EB288u: goto label_1eb288;
            case 0x1EB28Cu: goto label_1eb28c;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB294u: goto label_1eb294;
            case 0x1EB298u: goto label_1eb298;
            case 0x1EB29Cu: goto label_1eb29c;
            case 0x1EB2A0u: goto label_1eb2a0;
            case 0x1EB2A4u: goto label_1eb2a4;
            case 0x1EB2A8u: goto label_1eb2a8;
            case 0x1EB2ACu: goto label_1eb2ac;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2B4u: goto label_1eb2b4;
            case 0x1EB2B8u: goto label_1eb2b8;
            case 0x1EB2BCu: goto label_1eb2bc;
            case 0x1EB2C0u: goto label_1eb2c0;
            case 0x1EB2C4u: goto label_1eb2c4;
            case 0x1EB2C8u: goto label_1eb2c8;
            case 0x1EB2CCu: goto label_1eb2cc;
            case 0x1EB2D0u: goto label_1eb2d0;
            case 0x1EB2D4u: goto label_1eb2d4;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB2DCu: goto label_1eb2dc;
            case 0x1EB2E0u: goto label_1eb2e0;
            case 0x1EB2E4u: goto label_1eb2e4;
            case 0x1EB2E8u: goto label_1eb2e8;
            case 0x1EB2ECu: goto label_1eb2ec;
            case 0x1EB2F0u: goto label_1eb2f0;
            case 0x1EB2F4u: goto label_1eb2f4;
            case 0x1EB2F8u: goto label_1eb2f8;
            case 0x1EB2FCu: goto label_1eb2fc;
            case 0x1EB300u: goto label_1eb300;
            case 0x1EB304u: goto label_1eb304;
            case 0x1EB308u: goto label_1eb308;
            case 0x1EB30Cu: goto label_1eb30c;
            case 0x1EB310u: goto label_1eb310;
            case 0x1EB314u: goto label_1eb314;
            case 0x1EB318u: goto label_1eb318;
            case 0x1EB31Cu: goto label_1eb31c;
            case 0x1EB320u: goto label_1eb320;
            case 0x1EB324u: goto label_1eb324;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB32Cu: goto label_1eb32c;
            case 0x1EB330u: goto label_1eb330;
            case 0x1EB334u: goto label_1eb334;
            case 0x1EB338u: goto label_1eb338;
            case 0x1EB33Cu: goto label_1eb33c;
            case 0x1EB340u: goto label_1eb340;
            case 0x1EB344u: goto label_1eb344;
            case 0x1EB348u: goto label_1eb348;
            case 0x1EB34Cu: goto label_1eb34c;
            case 0x1EB350u: goto label_1eb350;
            case 0x1EB354u: goto label_1eb354;
            case 0x1EB358u: goto label_1eb358;
            case 0x1EB35Cu: goto label_1eb35c;
            case 0x1EB360u: goto label_1eb360;
            case 0x1EB364u: goto label_1eb364;
            case 0x1EB368u: goto label_1eb368;
            case 0x1EB36Cu: goto label_1eb36c;
            case 0x1EB370u: goto label_1eb370;
            case 0x1EB374u: goto label_1eb374;
            case 0x1EB378u: goto label_1eb378;
            case 0x1EB37Cu: goto label_1eb37c;
            case 0x1EB380u: goto label_1eb380;
            case 0x1EB384u: goto label_1eb384;
            case 0x1EB388u: goto label_1eb388;
            case 0x1EB38Cu: goto label_1eb38c;
            case 0x1EB390u: goto label_1eb390;
            case 0x1EB394u: goto label_1eb394;
            case 0x1EB398u: goto label_1eb398;
            case 0x1EB39Cu: goto label_1eb39c;
            case 0x1EB3A0u: goto label_1eb3a0;
            case 0x1EB3A4u: goto label_1eb3a4;
            case 0x1EB3A8u: goto label_1eb3a8;
            case 0x1EB3ACu: goto label_1eb3ac;
            case 0x1EB3B0u: goto label_1eb3b0;
            case 0x1EB3B4u: goto label_1eb3b4;
            case 0x1EB3B8u: goto label_1eb3b8;
            case 0x1EB3BCu: goto label_1eb3bc;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3C8u: goto label_1eb3c8;
            case 0x1EB3CCu: goto label_1eb3cc;
            case 0x1EB3D0u: goto label_1eb3d0;
            case 0x1EB3D4u: goto label_1eb3d4;
            case 0x1EB3D8u: goto label_1eb3d8;
            case 0x1EB3DCu: goto label_1eb3dc;
            case 0x1EB3E0u: goto label_1eb3e0;
            case 0x1EB3E4u: goto label_1eb3e4;
            case 0x1EB3E8u: goto label_1eb3e8;
            case 0x1EB3ECu: goto label_1eb3ec;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB3F8u: goto label_1eb3f8;
            case 0x1EB3FCu: goto label_1eb3fc;
            case 0x1EB400u: goto label_1eb400;
            case 0x1EB404u: goto label_1eb404;
            case 0x1EB408u: goto label_1eb408;
            case 0x1EB40Cu: goto label_1eb40c;
            case 0x1EB410u: goto label_1eb410;
            case 0x1EB414u: goto label_1eb414;
            case 0x1EB418u: goto label_1eb418;
            case 0x1EB41Cu: goto label_1eb41c;
            case 0x1EB420u: goto label_1eb420;
            case 0x1EB424u: goto label_1eb424;
            case 0x1EB428u: goto label_1eb428;
            case 0x1EB42Cu: goto label_1eb42c;
            case 0x1EB430u: goto label_1eb430;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB438u: goto label_1eb438;
            case 0x1EB43Cu: goto label_1eb43c;
            case 0x1EB440u: goto label_1eb440;
            case 0x1EB444u: goto label_1eb444;
            case 0x1EB448u: goto label_1eb448;
            case 0x1EB44Cu: goto label_1eb44c;
            case 0x1EB450u: goto label_1eb450;
            case 0x1EB454u: goto label_1eb454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB090u;
label_1eb090:
    // 0x1eb090: 0x8e040000
    ctx->pc = 0x1eb090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb094:
    // 0x1eb094: 0x3c020050
    ctx->pc = 0x1eb094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1eb098:
    // 0x1eb098: 0x24430db0
    ctx->pc = 0x1eb098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 3504));
label_1eb09c:
    // 0x1eb09c: 0x3c020050
    ctx->pc = 0x1eb09cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1eb0a0:
    // 0x1eb0a0: 0x24450db4
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 3508));
label_1eb0a4:
    // 0x1eb0a4: 0x2406000a
    ctx->pc = 0x1eb0a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_1eb0a8:
    // 0x1eb0a8: 0x41140
    ctx->pc = 0x1eb0a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
label_1eb0ac:
    // 0x1eb0ac: 0x621021
    ctx->pc = 0x1eb0acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eb0b0:
    // 0x1eb0b0: 0xac460000
    ctx->pc = 0x1eb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_1eb0b4:
    // 0x1eb0b4: 0x8e070000
    ctx->pc = 0x1eb0b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb0b8:
    // 0x1eb0b8: 0x3c020050
    ctx->pc = 0x1eb0b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1eb0bc:
    // 0x1eb0bc: 0x24430db8
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 3512));
label_1eb0c0:
    // 0x1eb0c0: 0x3c020050
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1eb0c4:
    // 0x1eb0c4: 0x2408003c
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 60));
label_1eb0c8:
    // 0x1eb0c8: 0x240600d3
    ctx->pc = 0x1eb0c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 211));
label_1eb0cc:
    // 0x1eb0cc: 0x73940
    ctx->pc = 0x1eb0ccu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 5));
label_1eb0d0:
    // 0x1eb0d0: 0xa72821
    ctx->pc = 0x1eb0d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1eb0d4:
    // 0x1eb0d4: 0xaca80000
    ctx->pc = 0x1eb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_1eb0d8:
    // 0x1eb0d8: 0x8e050000
    ctx->pc = 0x1eb0d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb0dc:
    // 0x1eb0dc: 0x24420dbc
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3516));
label_1eb0e0:
    // 0x1eb0e0: 0x24040044
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 68));
label_1eb0e4:
    // 0x1eb0e4: 0x52940
    ctx->pc = 0x1eb0e4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 5));
label_1eb0e8:
    // 0x1eb0e8: 0x651821
    ctx->pc = 0x1eb0e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1eb0ec:
    // 0x1eb0ec: 0xac660000
    ctx->pc = 0x1eb0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1eb0f0:
    // 0x1eb0f0: 0x8e030000
    ctx->pc = 0x1eb0f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb0f4:
    // 0x1eb0f4: 0x31940
    ctx->pc = 0x1eb0f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_1eb0f8:
    // 0x1eb0f8: 0x431021
    ctx->pc = 0x1eb0f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb0fc:
    // 0x1eb0fc: 0xac440000
    ctx->pc = 0x1eb0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1eb100:
    // 0x1eb100: 0x8e050000
    ctx->pc = 0x1eb100u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb104:
    // 0x1eb104: 0xc07b660
label_1eb108:
    if (ctx->pc == 0x1EB108u) {
        ctx->pc = 0x1EB108u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x1EB10Cu;
        goto label_1eb10c;
    }
    ctx->pc = 0x1EB104u;
    SET_GPR_U32(ctx, 31, 0x1EB10Cu);
    ctx->pc = 0x1EB108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB10Cu; }
        else if (ctx->pc != 0x1EB10Cu) { ctx->pc = 0x1EB10Cu; }
    }
    if (ctx->pc != 0x1EB10Cu) { return; }
    ctx->pc = 0x1EB10Cu;
label_1eb10c:
    // 0x1eb10c: 0x8f828dec
    ctx->pc = 0x1eb10cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938092)));
label_1eb110:
    // 0x1eb110: 0x10400004
label_1eb114:
    if (ctx->pc == 0x1EB114u) {
        ctx->pc = 0x1EB114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EB118u;
        goto label_1eb118;
    }
    ctx->pc = 0x1EB110u;
    {
        const bool branch_taken_0x1eb110 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eb110) {
            ctx->pc = 0x1EB124u;
            goto label_1eb124;
        }
    }
    ctx->pc = 0x1EB118u;
label_1eb118:
    // 0x1eb118: 0x24020004
    ctx->pc = 0x1eb118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1eb11c:
    // 0x1eb11c: 0x100000c2
label_1eb120:
    if (ctx->pc == 0x1EB120u) {
        ctx->pc = 0x1EB120u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB124u;
        goto label_1eb124;
    }
    ctx->pc = 0x1EB11Cu;
    {
        const bool branch_taken_0x1eb11c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB120u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb11c) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB124u;
label_1eb124:
    // 0x1eb124: 0x100000c0
label_1eb128:
    if (ctx->pc == 0x1EB128u) {
        ctx->pc = 0x1EB128u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB12Cu;
        goto label_1eb12c;
    }
    ctx->pc = 0x1EB124u;
    {
        const bool branch_taken_0x1eb124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB128u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb124) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB12Cu;
label_1eb12c:
    // 0x1eb12c: 0x8f828dc8
    ctx->pc = 0x1eb12cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb130:
    // 0x1eb130: 0x14400004
label_1eb134:
    if (ctx->pc == 0x1EB134u) {
        ctx->pc = 0x1EB134u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        ctx->pc = 0x1EB138u;
        goto label_1eb138;
    }
    ctx->pc = 0x1EB130u;
    {
        const bool branch_taken_0x1eb130 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB134u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        if (branch_taken_0x1eb130) {
            ctx->pc = 0x1EB144u;
            goto label_1eb144;
        }
    }
    ctx->pc = 0x1EB138u;
label_1eb138:
    // 0x1eb138: 0x24c20001
    ctx->pc = 0x1eb138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
label_1eb13c:
    // 0x1eb13c: 0x100000ba
label_1eb140:
    if (ctx->pc == 0x1EB140u) {
        ctx->pc = 0x1EB140u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB144u;
        goto label_1eb144;
    }
    ctx->pc = 0x1EB13Cu;
    {
        const bool branch_taken_0x1eb13c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB140u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb13c) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB144u;
label_1eb144:
    // 0x1eb144: 0xc07adcc
label_1eb148:
    if (ctx->pc == 0x1EB148u) {
        ctx->pc = 0x1EB14Cu;
        goto label_1eb14c;
    }
    ctx->pc = 0x1EB144u;
    SET_GPR_U32(ctx, 31, 0x1EB14Cu);
    ctx->pc = 0x1EB730u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust0__FiP11Gun_Act_tag_0x1eb730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB14Cu; }
        else if (ctx->pc != 0x1EB14Cu) { ctx->pc = 0x1EB14Cu; }
    }
    if (ctx->pc != 0x1EB14Cu) { return; }
    ctx->pc = 0x1EB14Cu;
label_1eb14c:
    // 0x1eb14c: 0x10400004
label_1eb150:
    if (ctx->pc == 0x1EB150u) {
        ctx->pc = 0x1EB150u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB154u;
        goto label_1eb154;
    }
    ctx->pc = 0x1EB14Cu;
    {
        const bool branch_taken_0x1eb14c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB150u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb14c) {
            ctx->pc = 0x1EB160u;
            goto label_1eb160;
        }
    }
    ctx->pc = 0x1EB154u;
label_1eb154:
    // 0x1eb154: 0x8f828dcc
    ctx->pc = 0x1eb154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb158:
    // 0x1eb158: 0x24420001
    ctx->pc = 0x1eb158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1eb15c:
    // 0x1eb15c: 0xaf828dcc
    ctx->pc = 0x1eb15cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1eb160:
    // 0x1eb160: 0xc07ad18
label_1eb164:
    if (ctx->pc == 0x1EB164u) {
        ctx->pc = 0x1EB168u;
        goto label_1eb168;
    }
    ctx->pc = 0x1EB160u;
    SET_GPR_U32(ctx, 31, 0x1EB168u);
    ctx->pc = 0x1EB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide__FP11Gun_Act_tag_0x1eb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB168u; }
        else if (ctx->pc != 0x1EB168u) { ctx->pc = 0x1EB168u; }
    }
    if (ctx->pc != 0x1EB168u) { return; }
    ctx->pc = 0x1EB168u;
label_1eb168:
    // 0x1eb168: 0x104000b0
label_1eb16c:
    if (ctx->pc == 0x1EB16Cu) {
        ctx->pc = 0x1EB16Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB170u;
        goto label_1eb170;
    }
    ctx->pc = 0x1EB168u;
    {
        const bool branch_taken_0x1eb168 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB16Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb168) {
            ctx->pc = 0x1EB42Cu;
            goto label_1eb42c;
        }
    }
    ctx->pc = 0x1EB170u;
label_1eb170:
    // 0x1eb170: 0x72202628
    ctx->pc = 0x1eb170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1eb174:
    // 0x1eb174: 0xc07ad2c
label_1eb178:
    if (ctx->pc == 0x1EB178u) {
        ctx->pc = 0x1EB178u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB17Cu;
        goto label_1eb17c;
    }
    ctx->pc = 0x1EB174u;
    SET_GPR_U32(ctx, 31, 0x1EB17Cu);
    ctx->pc = 0x1EB178u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide_mode__Fii_0x1eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB17Cu; }
        else if (ctx->pc != 0x1EB17Cu) { ctx->pc = 0x1EB17Cu; }
    }
    if (ctx->pc != 0x1EB17Cu) { return; }
    ctx->pc = 0x1EB17Cu;
label_1eb17c:
    // 0x1eb17c: 0x100000aa
label_1eb180:
    if (ctx->pc == 0x1EB180u) {
        ctx->pc = 0x1EB184u;
        goto label_1eb184;
    }
    ctx->pc = 0x1EB17Cu;
    {
        const bool branch_taken_0x1eb17c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb17c) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB184u;
label_1eb184:
    // 0x1eb184: 0xc07add4
label_1eb188:
    if (ctx->pc == 0x1EB188u) {
        ctx->pc = 0x1EB18Cu;
        goto label_1eb18c;
    }
    ctx->pc = 0x1EB184u;
    SET_GPR_U32(ctx, 31, 0x1EB18Cu);
    ctx->pc = 0x1EB750u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust1__FiP11Gun_Act_tag_0x1eb750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB18Cu; }
        else if (ctx->pc != 0x1EB18Cu) { ctx->pc = 0x1EB18Cu; }
    }
    if (ctx->pc != 0x1EB18Cu) { return; }
    ctx->pc = 0x1EB18Cu;
label_1eb18c:
    // 0x1eb18c: 0x10400004
label_1eb190:
    if (ctx->pc == 0x1EB190u) {
        ctx->pc = 0x1EB190u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB194u;
        goto label_1eb194;
    }
    ctx->pc = 0x1EB18Cu;
    {
        const bool branch_taken_0x1eb18c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB190u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb18c) {
            ctx->pc = 0x1EB1A0u;
            goto label_1eb1a0;
        }
    }
    ctx->pc = 0x1EB194u;
label_1eb194:
    // 0x1eb194: 0x8f828dcc
    ctx->pc = 0x1eb194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb198:
    // 0x1eb198: 0x24420001
    ctx->pc = 0x1eb198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1eb19c:
    // 0x1eb19c: 0xaf828dcc
    ctx->pc = 0x1eb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1eb1a0:
    // 0x1eb1a0: 0xc07ad18
label_1eb1a4:
    if (ctx->pc == 0x1EB1A4u) {
        ctx->pc = 0x1EB1A8u;
        goto label_1eb1a8;
    }
    ctx->pc = 0x1EB1A0u;
    SET_GPR_U32(ctx, 31, 0x1EB1A8u);
    ctx->pc = 0x1EB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide__FP11Gun_Act_tag_0x1eb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB1A8u; }
        else if (ctx->pc != 0x1EB1A8u) { ctx->pc = 0x1EB1A8u; }
    }
    if (ctx->pc != 0x1EB1A8u) { return; }
    ctx->pc = 0x1EB1A8u;
label_1eb1a8:
    // 0x1eb1a8: 0x10400006
label_1eb1ac:
    if (ctx->pc == 0x1EB1ACu) {
        ctx->pc = 0x1EB1B0u;
        goto label_1eb1b0;
    }
    ctx->pc = 0x1EB1A8u;
    {
        const bool branch_taken_0x1eb1a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb1a8) {
            ctx->pc = 0x1EB1C4u;
            goto label_1eb1c4;
        }
    }
    ctx->pc = 0x1EB1B0u;
label_1eb1b0:
    // 0x1eb1b0: 0x8f828dc8
    ctx->pc = 0x1eb1b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb1b4:
    // 0x1eb1b4: 0x10400003
label_1eb1b8:
    if (ctx->pc == 0x1EB1B8u) {
        ctx->pc = 0x1EB1B8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB1BCu;
        goto label_1eb1bc;
    }
    ctx->pc = 0x1EB1B4u;
    {
        const bool branch_taken_0x1eb1b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB1B8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb1b4) {
            ctx->pc = 0x1EB1C4u;
            goto label_1eb1c4;
        }
    }
    ctx->pc = 0x1EB1BCu;
label_1eb1bc:
    // 0x1eb1bc: 0xc07ad2c
label_1eb1c0:
    if (ctx->pc == 0x1EB1C0u) {
        ctx->pc = 0x1EB1C0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB1C4u;
        goto label_1eb1c4;
    }
    ctx->pc = 0x1EB1BCu;
    SET_GPR_U32(ctx, 31, 0x1EB1C4u);
    ctx->pc = 0x1EB1C0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide_mode__Fii_0x1eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB1C4u; }
        else if (ctx->pc != 0x1EB1C4u) { ctx->pc = 0x1EB1C4u; }
    }
    if (ctx->pc != 0x1EB1C4u) { return; }
    ctx->pc = 0x1EB1C4u;
label_1eb1c4:
    // 0x1eb1c4: 0x8f828dc8
    ctx->pc = 0x1eb1c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb1c8:
    // 0x1eb1c8: 0x10400097
label_1eb1cc:
    if (ctx->pc == 0x1EB1CCu) {
        ctx->pc = 0x1EB1CCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB1D0u;
        goto label_1eb1d0;
    }
    ctx->pc = 0x1EB1C8u;
    {
        const bool branch_taken_0x1eb1c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB1CCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb1c8) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB1D0u;
label_1eb1d0:
    // 0x1eb1d0: 0xc07ad90
label_1eb1d4:
    if (ctx->pc == 0x1EB1D4u) {
        ctx->pc = 0x1EB1D8u;
        goto label_1eb1d8;
    }
    ctx->pc = 0x1EB1D0u;
    SET_GPR_U32(ctx, 31, 0x1EB1D8u);
    ctx->pc = 0x1EB640u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_monitor__FP11Gun_Act_tag_0x1eb640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB1D8u; }
        else if (ctx->pc != 0x1EB1D8u) { ctx->pc = 0x1EB1D8u; }
    }
    if (ctx->pc != 0x1EB1D8u) { return; }
    ctx->pc = 0x1EB1D8u;
label_1eb1d8:
    // 0x1eb1d8: 0x10000093
label_1eb1dc:
    if (ctx->pc == 0x1EB1DCu) {
        ctx->pc = 0x1EB1E0u;
        goto label_1eb1e0;
    }
    ctx->pc = 0x1EB1D8u;
    {
        const bool branch_taken_0x1eb1d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb1d8) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB1E0u;
label_1eb1e0:
    // 0x1eb1e0: 0xc07adec
label_1eb1e4:
    if (ctx->pc == 0x1EB1E4u) {
        ctx->pc = 0x1EB1E8u;
        goto label_1eb1e8;
    }
    ctx->pc = 0x1EB1E0u;
    SET_GPR_U32(ctx, 31, 0x1EB1E8u);
    ctx->pc = 0x1EB7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust2__FiP11Gun_Act_tag_0x1eb7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB1E8u; }
        else if (ctx->pc != 0x1EB1E8u) { ctx->pc = 0x1EB1E8u; }
    }
    if (ctx->pc != 0x1EB1E8u) { return; }
    ctx->pc = 0x1EB1E8u;
label_1eb1e8:
    // 0x1eb1e8: 0x10400003
label_1eb1ec:
    if (ctx->pc == 0x1EB1ECu) {
        ctx->pc = 0x1EB1ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1EB1F0u;
        goto label_1eb1f0;
    }
    ctx->pc = 0x1EB1E8u;
    {
        const bool branch_taken_0x1eb1e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB1ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1eb1e8) {
            ctx->pc = 0x1EB1F8u;
            goto label_1eb1f8;
        }
    }
    ctx->pc = 0x1EB1F0u;
label_1eb1f0:
    // 0x1eb1f0: 0x10000008
label_1eb1f4:
    if (ctx->pc == 0x1EB1F4u) {
        ctx->pc = 0x1EB1F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB1F8u;
        goto label_1eb1f8;
    }
    ctx->pc = 0x1EB1F0u;
    {
        const bool branch_taken_0x1eb1f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB1F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb1f0) {
            ctx->pc = 0x1EB214u;
            goto label_1eb214;
        }
    }
    ctx->pc = 0x1EB1F8u;
label_1eb1f8:
    // 0x1eb1f8: 0x8f828df8
    ctx->pc = 0x1eb1f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1eb1fc:
    // 0x1eb1fc: 0x28420005
    ctx->pc = 0x1eb1fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_1eb200:
    // 0x1eb200: 0x14400005
label_1eb204:
    if (ctx->pc == 0x1EB204u) {
        ctx->pc = 0x1EB204u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB208u;
        goto label_1eb208;
    }
    ctx->pc = 0x1EB200u;
    {
        const bool branch_taken_0x1eb200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB204u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb200) {
            ctx->pc = 0x1EB218u;
            goto label_1eb218;
        }
    }
    ctx->pc = 0x1EB208u;
label_1eb208:
    // 0x1eb208: 0x72202628
    ctx->pc = 0x1eb208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1eb20c:
    // 0x1eb20c: 0xc07ad58
label_1eb210:
    if (ctx->pc == 0x1EB210u) {
        ctx->pc = 0x1EB210u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB214u;
        goto label_1eb214;
    }
    ctx->pc = 0x1EB20Cu;
    SET_GPR_U32(ctx, 31, 0x1EB214u);
    ctx->pc = 0x1EB210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_normal_mode__Fii_0x1eb560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB214u; }
        else if (ctx->pc != 0x1EB214u) { ctx->pc = 0x1EB214u; }
    }
    if (ctx->pc != 0x1EB214u) { return; }
    ctx->pc = 0x1EB214u;
label_1eb214:
    // 0x1eb214: 0x72002628
    ctx->pc = 0x1eb214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1eb218:
    // 0x1eb218: 0xc07ad18
label_1eb21c:
    if (ctx->pc == 0x1EB21Cu) {
        ctx->pc = 0x1EB220u;
        goto label_1eb220;
    }
    ctx->pc = 0x1EB218u;
    SET_GPR_U32(ctx, 31, 0x1EB220u);
    ctx->pc = 0x1EB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide__FP11Gun_Act_tag_0x1eb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB220u; }
        else if (ctx->pc != 0x1EB220u) { ctx->pc = 0x1EB220u; }
    }
    if (ctx->pc != 0x1EB220u) { return; }
    ctx->pc = 0x1EB220u;
label_1eb220:
    // 0x1eb220: 0x10400006
label_1eb224:
    if (ctx->pc == 0x1EB224u) {
        ctx->pc = 0x1EB228u;
        goto label_1eb228;
    }
    ctx->pc = 0x1EB220u;
    {
        const bool branch_taken_0x1eb220 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb220) {
            ctx->pc = 0x1EB23Cu;
            goto label_1eb23c;
        }
    }
    ctx->pc = 0x1EB228u;
label_1eb228:
    // 0x1eb228: 0x8f828dc8
    ctx->pc = 0x1eb228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb22c:
    // 0x1eb22c: 0x10400003
label_1eb230:
    if (ctx->pc == 0x1EB230u) {
        ctx->pc = 0x1EB230u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB234u;
        goto label_1eb234;
    }
    ctx->pc = 0x1EB22Cu;
    {
        const bool branch_taken_0x1eb22c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB230u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb22c) {
            ctx->pc = 0x1EB23Cu;
            goto label_1eb23c;
        }
    }
    ctx->pc = 0x1EB234u;
label_1eb234:
    // 0x1eb234: 0xc07ad2c
label_1eb238:
    if (ctx->pc == 0x1EB238u) {
        ctx->pc = 0x1EB238u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB23Cu;
        goto label_1eb23c;
    }
    ctx->pc = 0x1EB234u;
    SET_GPR_U32(ctx, 31, 0x1EB23Cu);
    ctx->pc = 0x1EB238u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide_mode__Fii_0x1eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB23Cu; }
        else if (ctx->pc != 0x1EB23Cu) { ctx->pc = 0x1EB23Cu; }
    }
    if (ctx->pc != 0x1EB23Cu) { return; }
    ctx->pc = 0x1EB23Cu;
label_1eb23c:
    // 0x1eb23c: 0x8f828dc8
    ctx->pc = 0x1eb23cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb240:
    // 0x1eb240: 0x10400079
label_1eb244:
    if (ctx->pc == 0x1EB244u) {
        ctx->pc = 0x1EB244u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB248u;
        goto label_1eb248;
    }
    ctx->pc = 0x1EB240u;
    {
        const bool branch_taken_0x1eb240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB244u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb240) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB248u;
label_1eb248:
    // 0x1eb248: 0xc07ad90
label_1eb24c:
    if (ctx->pc == 0x1EB24Cu) {
        ctx->pc = 0x1EB250u;
        goto label_1eb250;
    }
    ctx->pc = 0x1EB248u;
    SET_GPR_U32(ctx, 31, 0x1EB250u);
    ctx->pc = 0x1EB640u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_monitor__FP11Gun_Act_tag_0x1eb640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB250u; }
        else if (ctx->pc != 0x1EB250u) { ctx->pc = 0x1EB250u; }
    }
    if (ctx->pc != 0x1EB250u) { return; }
    ctx->pc = 0x1EB250u;
label_1eb250:
    // 0x1eb250: 0x10000075
label_1eb254:
    if (ctx->pc == 0x1EB254u) {
        ctx->pc = 0x1EB258u;
        goto label_1eb258;
    }
    ctx->pc = 0x1EB250u;
    {
        const bool branch_taken_0x1eb250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb250) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB258u;
label_1eb258:
    // 0x1eb258: 0x8f828dc8
    ctx->pc = 0x1eb258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb25c:
    // 0x1eb25c: 0x14400004
label_1eb260:
    if (ctx->pc == 0x1EB260u) {
        ctx->pc = 0x1EB260u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        ctx->pc = 0x1EB264u;
        goto label_1eb264;
    }
    ctx->pc = 0x1EB25Cu;
    {
        const bool branch_taken_0x1eb25c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB260u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        if (branch_taken_0x1eb25c) {
            ctx->pc = 0x1EB270u;
            goto label_1eb270;
        }
    }
    ctx->pc = 0x1EB264u;
label_1eb264:
    // 0x1eb264: 0x24c20001
    ctx->pc = 0x1eb264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
label_1eb268:
    // 0x1eb268: 0x1000006f
label_1eb26c:
    if (ctx->pc == 0x1EB26Cu) {
        ctx->pc = 0x1EB26Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB270u;
        goto label_1eb270;
    }
    ctx->pc = 0x1EB268u;
    {
        const bool branch_taken_0x1eb268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB26Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb268) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB270u;
label_1eb270:
    // 0x1eb270: 0xc07ae00
label_1eb274:
    if (ctx->pc == 0x1EB274u) {
        ctx->pc = 0x1EB278u;
        goto label_1eb278;
    }
    ctx->pc = 0x1EB270u;
    SET_GPR_U32(ctx, 31, 0x1EB278u);
    ctx->pc = 0x1EB800u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_W0__FiP11Gun_Act_tag_0x1eb800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB278u; }
        else if (ctx->pc != 0x1EB278u) { ctx->pc = 0x1EB278u; }
    }
    if (ctx->pc != 0x1EB278u) { return; }
    ctx->pc = 0x1EB278u;
label_1eb278:
    // 0x1eb278: 0x10400004
label_1eb27c:
    if (ctx->pc == 0x1EB27Cu) {
        ctx->pc = 0x1EB27Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB280u;
        goto label_1eb280;
    }
    ctx->pc = 0x1EB278u;
    {
        const bool branch_taken_0x1eb278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB27Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb278) {
            ctx->pc = 0x1EB28Cu;
            goto label_1eb28c;
        }
    }
    ctx->pc = 0x1EB280u;
label_1eb280:
    // 0x1eb280: 0x8f828dcc
    ctx->pc = 0x1eb280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb284:
    // 0x1eb284: 0x24420001
    ctx->pc = 0x1eb284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1eb288:
    // 0x1eb288: 0xaf828dcc
    ctx->pc = 0x1eb288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1eb28c:
    // 0x1eb28c: 0xc07ad18
label_1eb290:
    if (ctx->pc == 0x1EB290u) {
        ctx->pc = 0x1EB294u;
        goto label_1eb294;
    }
    ctx->pc = 0x1EB28Cu;
    SET_GPR_U32(ctx, 31, 0x1EB294u);
    ctx->pc = 0x1EB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide__FP11Gun_Act_tag_0x1eb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB294u; }
        else if (ctx->pc != 0x1EB294u) { ctx->pc = 0x1EB294u; }
    }
    if (ctx->pc != 0x1EB294u) { return; }
    ctx->pc = 0x1EB294u;
label_1eb294:
    // 0x1eb294: 0x10400064
label_1eb298:
    if (ctx->pc == 0x1EB298u) {
        ctx->pc = 0x1EB29Cu;
        goto label_1eb29c;
    }
    ctx->pc = 0x1EB294u;
    {
        const bool branch_taken_0x1eb294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb294) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB29Cu;
label_1eb29c:
    // 0x1eb29c: 0x8f828dc8
    ctx->pc = 0x1eb29cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb2a0:
    // 0x1eb2a0: 0x10400061
label_1eb2a4:
    if (ctx->pc == 0x1EB2A4u) {
        ctx->pc = 0x1EB2A4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB2A8u;
        goto label_1eb2a8;
    }
    ctx->pc = 0x1EB2A0u;
    {
        const bool branch_taken_0x1eb2a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB2A4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb2a0) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB2A8u;
label_1eb2a8:
    // 0x1eb2a8: 0xc07ad58
label_1eb2ac:
    if (ctx->pc == 0x1EB2ACu) {
        ctx->pc = 0x1EB2ACu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB2B0u;
        goto label_1eb2b0;
    }
    ctx->pc = 0x1EB2A8u;
    SET_GPR_U32(ctx, 31, 0x1EB2B0u);
    ctx->pc = 0x1EB2ACu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_normal_mode__Fii_0x1eb560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B0u; }
        else if (ctx->pc != 0x1EB2B0u) { ctx->pc = 0x1EB2B0u; }
    }
    if (ctx->pc != 0x1EB2B0u) { return; }
    ctx->pc = 0x1EB2B0u;
label_1eb2b0:
    // 0x1eb2b0: 0x1000005d
label_1eb2b4:
    if (ctx->pc == 0x1EB2B4u) {
        ctx->pc = 0x1EB2B8u;
        goto label_1eb2b8;
    }
    ctx->pc = 0x1EB2B0u;
    {
        const bool branch_taken_0x1eb2b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb2b0) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB2B8u;
label_1eb2b8:
    // 0x1eb2b8: 0xc07ae08
label_1eb2bc:
    if (ctx->pc == 0x1EB2BCu) {
        ctx->pc = 0x1EB2C0u;
        goto label_1eb2c0;
    }
    ctx->pc = 0x1EB2B8u;
    SET_GPR_U32(ctx, 31, 0x1EB2C0u);
    ctx->pc = 0x1EB820u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_W1__FiP11Gun_Act_tag_0x1eb820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2C0u; }
        else if (ctx->pc != 0x1EB2C0u) { ctx->pc = 0x1EB2C0u; }
    }
    if (ctx->pc != 0x1EB2C0u) { return; }
    ctx->pc = 0x1EB2C0u;
label_1eb2c0:
    // 0x1eb2c0: 0x10400006
label_1eb2c4:
    if (ctx->pc == 0x1EB2C4u) {
        ctx->pc = 0x1EB2C8u;
        goto label_1eb2c8;
    }
    ctx->pc = 0x1EB2C0u;
    {
        const bool branch_taken_0x1eb2c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb2c0) {
            ctx->pc = 0x1EB2DCu;
            goto label_1eb2dc;
        }
    }
    ctx->pc = 0x1EB2C8u;
label_1eb2c8:
    // 0x1eb2c8: 0x8f828dcc
    ctx->pc = 0x1eb2c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb2cc:
    // 0x1eb2cc: 0xaf808df8
    ctx->pc = 0x1eb2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
label_1eb2d0:
    // 0x1eb2d0: 0x24420001
    ctx->pc = 0x1eb2d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1eb2d4:
    // 0x1eb2d4: 0x10000008
label_1eb2d8:
    if (ctx->pc == 0x1EB2D8u) {
        ctx->pc = 0x1EB2D8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB2DCu;
        goto label_1eb2dc;
    }
    ctx->pc = 0x1EB2D4u;
    {
        const bool branch_taken_0x1eb2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB2D8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb2d4) {
            ctx->pc = 0x1EB2F8u;
            goto label_1eb2f8;
        }
    }
    ctx->pc = 0x1EB2DCu;
label_1eb2dc:
    // 0x1eb2dc: 0x8f828df8
    ctx->pc = 0x1eb2dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1eb2e0:
    // 0x1eb2e0: 0x28420005
    ctx->pc = 0x1eb2e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_1eb2e4:
    // 0x1eb2e4: 0x14400005
label_1eb2e8:
    if (ctx->pc == 0x1EB2E8u) {
        ctx->pc = 0x1EB2E8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB2ECu;
        goto label_1eb2ec;
    }
    ctx->pc = 0x1EB2E4u;
    {
        const bool branch_taken_0x1eb2e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB2E8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb2e4) {
            ctx->pc = 0x1EB2FCu;
            goto label_1eb2fc;
        }
    }
    ctx->pc = 0x1EB2ECu;
label_1eb2ec:
    // 0x1eb2ec: 0x72202628
    ctx->pc = 0x1eb2ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1eb2f0:
    // 0x1eb2f0: 0xc07ad2c
label_1eb2f4:
    if (ctx->pc == 0x1EB2F4u) {
        ctx->pc = 0x1EB2F4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB2F8u;
        goto label_1eb2f8;
    }
    ctx->pc = 0x1EB2F0u;
    SET_GPR_U32(ctx, 31, 0x1EB2F8u);
    ctx->pc = 0x1EB2F4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide_mode__Fii_0x1eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2F8u; }
        else if (ctx->pc != 0x1EB2F8u) { ctx->pc = 0x1EB2F8u; }
    }
    if (ctx->pc != 0x1EB2F8u) { return; }
    ctx->pc = 0x1EB2F8u;
label_1eb2f8:
    // 0x1eb2f8: 0x72002628
    ctx->pc = 0x1eb2f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1eb2fc:
    // 0x1eb2fc: 0xc07ad18
label_1eb300:
    if (ctx->pc == 0x1EB300u) {
        ctx->pc = 0x1EB304u;
        goto label_1eb304;
    }
    ctx->pc = 0x1EB2FCu;
    SET_GPR_U32(ctx, 31, 0x1EB304u);
    ctx->pc = 0x1EB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide__FP11Gun_Act_tag_0x1eb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB304u; }
        else if (ctx->pc != 0x1EB304u) { ctx->pc = 0x1EB304u; }
    }
    if (ctx->pc != 0x1EB304u) { return; }
    ctx->pc = 0x1EB304u;
label_1eb304:
    // 0x1eb304: 0x10400006
label_1eb308:
    if (ctx->pc == 0x1EB308u) {
        ctx->pc = 0x1EB30Cu;
        goto label_1eb30c;
    }
    ctx->pc = 0x1EB304u;
    {
        const bool branch_taken_0x1eb304 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb304) {
            ctx->pc = 0x1EB320u;
            goto label_1eb320;
        }
    }
    ctx->pc = 0x1EB30Cu;
label_1eb30c:
    // 0x1eb30c: 0x8f828dc8
    ctx->pc = 0x1eb30cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb310:
    // 0x1eb310: 0x10400003
label_1eb314:
    if (ctx->pc == 0x1EB314u) {
        ctx->pc = 0x1EB314u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB318u;
        goto label_1eb318;
    }
    ctx->pc = 0x1EB310u;
    {
        const bool branch_taken_0x1eb310 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB314u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb310) {
            ctx->pc = 0x1EB320u;
            goto label_1eb320;
        }
    }
    ctx->pc = 0x1EB318u;
label_1eb318:
    // 0x1eb318: 0xc07ad58
label_1eb31c:
    if (ctx->pc == 0x1EB31Cu) {
        ctx->pc = 0x1EB31Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB320u;
        goto label_1eb320;
    }
    ctx->pc = 0x1EB318u;
    SET_GPR_U32(ctx, 31, 0x1EB320u);
    ctx->pc = 0x1EB31Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_normal_mode__Fii_0x1eb560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB320u; }
        else if (ctx->pc != 0x1EB320u) { ctx->pc = 0x1EB320u; }
    }
    if (ctx->pc != 0x1EB320u) { return; }
    ctx->pc = 0x1EB320u;
label_1eb320:
    // 0x1eb320: 0x8f828dc8
    ctx->pc = 0x1eb320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb324:
    // 0x1eb324: 0x10400040
label_1eb328:
    if (ctx->pc == 0x1EB328u) {
        ctx->pc = 0x1EB328u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB32Cu;
        goto label_1eb32c;
    }
    ctx->pc = 0x1EB324u;
    {
        const bool branch_taken_0x1eb324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB328u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb324) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB32Cu;
label_1eb32c:
    // 0x1eb32c: 0xc07ad90
label_1eb330:
    if (ctx->pc == 0x1EB330u) {
        ctx->pc = 0x1EB334u;
        goto label_1eb334;
    }
    ctx->pc = 0x1EB32Cu;
    SET_GPR_U32(ctx, 31, 0x1EB334u);
    ctx->pc = 0x1EB640u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_monitor__FP11Gun_Act_tag_0x1eb640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB334u; }
        else if (ctx->pc != 0x1EB334u) { ctx->pc = 0x1EB334u; }
    }
    if (ctx->pc != 0x1EB334u) { return; }
    ctx->pc = 0x1EB334u;
label_1eb334:
    // 0x1eb334: 0x1000003c
label_1eb338:
    if (ctx->pc == 0x1EB338u) {
        ctx->pc = 0x1EB33Cu;
        goto label_1eb33c;
    }
    ctx->pc = 0x1EB334u;
    {
        const bool branch_taken_0x1eb334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb334) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB33Cu;
label_1eb33c:
    // 0x1eb33c: 0xc07ae20
label_1eb340:
    if (ctx->pc == 0x1EB340u) {
        ctx->pc = 0x1EB344u;
        goto label_1eb344;
    }
    ctx->pc = 0x1EB33Cu;
    SET_GPR_U32(ctx, 31, 0x1EB344u);
    ctx->pc = 0x1EB880u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_W2__FiP11Gun_Act_tag_0x1eb880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB344u; }
        else if (ctx->pc != 0x1EB344u) { ctx->pc = 0x1EB344u; }
    }
    if (ctx->pc != 0x1EB344u) { return; }
    ctx->pc = 0x1EB344u;
label_1eb344:
    // 0x1eb344: 0x10400005
label_1eb348:
    if (ctx->pc == 0x1EB348u) {
        ctx->pc = 0x1EB34Cu;
        goto label_1eb34c;
    }
    ctx->pc = 0x1EB344u;
    {
        const bool branch_taken_0x1eb344 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb344) {
            ctx->pc = 0x1EB35Cu;
            goto label_1eb35c;
        }
    }
    ctx->pc = 0x1EB34Cu;
label_1eb34c:
    // 0x1eb34c: 0x8f828dcc
    ctx->pc = 0x1eb34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb350:
    // 0x1eb350: 0x24420001
    ctx->pc = 0x1eb350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1eb354:
    // 0x1eb354: 0x10000008
label_1eb358:
    if (ctx->pc == 0x1EB358u) {
        ctx->pc = 0x1EB358u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EB35Cu;
        goto label_1eb35c;
    }
    ctx->pc = 0x1EB354u;
    {
        const bool branch_taken_0x1eb354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB358u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb354) {
            ctx->pc = 0x1EB378u;
            goto label_1eb378;
        }
    }
    ctx->pc = 0x1EB35Cu;
label_1eb35c:
    // 0x1eb35c: 0x8f828df8
    ctx->pc = 0x1eb35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1eb360:
    // 0x1eb360: 0x28420005
    ctx->pc = 0x1eb360u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_1eb364:
    // 0x1eb364: 0x14400005
label_1eb368:
    if (ctx->pc == 0x1EB368u) {
        ctx->pc = 0x1EB368u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB36Cu;
        goto label_1eb36c;
    }
    ctx->pc = 0x1EB364u;
    {
        const bool branch_taken_0x1eb364 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB368u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb364) {
            ctx->pc = 0x1EB37Cu;
            goto label_1eb37c;
        }
    }
    ctx->pc = 0x1EB36Cu;
label_1eb36c:
    // 0x1eb36c: 0x72202628
    ctx->pc = 0x1eb36cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1eb370:
    // 0x1eb370: 0xc07ad2c
label_1eb374:
    if (ctx->pc == 0x1EB374u) {
        ctx->pc = 0x1EB374u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB378u;
        goto label_1eb378;
    }
    ctx->pc = 0x1EB370u;
    SET_GPR_U32(ctx, 31, 0x1EB378u);
    ctx->pc = 0x1EB374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide_mode__Fii_0x1eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB378u; }
        else if (ctx->pc != 0x1EB378u) { ctx->pc = 0x1EB378u; }
    }
    if (ctx->pc != 0x1EB378u) { return; }
    ctx->pc = 0x1EB378u;
label_1eb378:
    // 0x1eb378: 0x72002628
    ctx->pc = 0x1eb378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1eb37c:
    // 0x1eb37c: 0xc07ad18
label_1eb380:
    if (ctx->pc == 0x1EB380u) {
        ctx->pc = 0x1EB384u;
        goto label_1eb384;
    }
    ctx->pc = 0x1EB37Cu;
    SET_GPR_U32(ctx, 31, 0x1EB384u);
    ctx->pc = 0x1EB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide__FP11Gun_Act_tag_0x1eb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB384u; }
        else if (ctx->pc != 0x1EB384u) { ctx->pc = 0x1EB384u; }
    }
    if (ctx->pc != 0x1EB384u) { return; }
    ctx->pc = 0x1EB384u;
label_1eb384:
    // 0x1eb384: 0x10400006
label_1eb388:
    if (ctx->pc == 0x1EB388u) {
        ctx->pc = 0x1EB38Cu;
        goto label_1eb38c;
    }
    ctx->pc = 0x1EB384u;
    {
        const bool branch_taken_0x1eb384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb384) {
            ctx->pc = 0x1EB3A0u;
            goto label_1eb3a0;
        }
    }
    ctx->pc = 0x1EB38Cu;
label_1eb38c:
    // 0x1eb38c: 0x8f828dc8
    ctx->pc = 0x1eb38cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb390:
    // 0x1eb390: 0x10400003
label_1eb394:
    if (ctx->pc == 0x1EB394u) {
        ctx->pc = 0x1EB394u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB398u;
        goto label_1eb398;
    }
    ctx->pc = 0x1EB390u;
    {
        const bool branch_taken_0x1eb390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB394u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb390) {
            ctx->pc = 0x1EB3A0u;
            goto label_1eb3a0;
        }
    }
    ctx->pc = 0x1EB398u;
label_1eb398:
    // 0x1eb398: 0xc07ad58
label_1eb39c:
    if (ctx->pc == 0x1EB39Cu) {
        ctx->pc = 0x1EB39Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB3A0u;
        goto label_1eb3a0;
    }
    ctx->pc = 0x1EB398u;
    SET_GPR_U32(ctx, 31, 0x1EB3A0u);
    ctx->pc = 0x1EB39Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_normal_mode__Fii_0x1eb560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3A0u; }
        else if (ctx->pc != 0x1EB3A0u) { ctx->pc = 0x1EB3A0u; }
    }
    if (ctx->pc != 0x1EB3A0u) { return; }
    ctx->pc = 0x1EB3A0u;
label_1eb3a0:
    // 0x1eb3a0: 0x8f828dc8
    ctx->pc = 0x1eb3a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb3a4:
    // 0x1eb3a4: 0x10400020
label_1eb3a8:
    if (ctx->pc == 0x1EB3A8u) {
        ctx->pc = 0x1EB3A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB3ACu;
        goto label_1eb3ac;
    }
    ctx->pc = 0x1EB3A4u;
    {
        const bool branch_taken_0x1eb3a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB3A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb3a4) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB3ACu;
label_1eb3ac:
    // 0x1eb3ac: 0xc07ad90
label_1eb3b0:
    if (ctx->pc == 0x1EB3B0u) {
        ctx->pc = 0x1EB3B4u;
        goto label_1eb3b4;
    }
    ctx->pc = 0x1EB3ACu;
    SET_GPR_U32(ctx, 31, 0x1EB3B4u);
    ctx->pc = 0x1EB640u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_monitor__FP11Gun_Act_tag_0x1eb640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3B4u; }
        else if (ctx->pc != 0x1EB3B4u) { ctx->pc = 0x1EB3B4u; }
    }
    if (ctx->pc != 0x1EB3B4u) { return; }
    ctx->pc = 0x1EB3B4u;
label_1eb3b4:
    // 0x1eb3b4: 0x1000001c
label_1eb3b8:
    if (ctx->pc == 0x1EB3B8u) {
        ctx->pc = 0x1EB3BCu;
        goto label_1eb3bc;
    }
    ctx->pc = 0x1EB3B4u;
    {
        const bool branch_taken_0x1eb3b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb3b4) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB3BCu;
label_1eb3bc:
    // 0x1eb3bc: 0xc07ae34
label_1eb3c0:
    if (ctx->pc == 0x1EB3C0u) {
        ctx->pc = 0x1EB3C4u;
        goto label_1eb3c4;
    }
    ctx->pc = 0x1EB3BCu;
    SET_GPR_U32(ctx, 31, 0x1EB3C4u);
    ctx->pc = 0x1EB8D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_W3__FiP11Gun_Act_tag_0x1eb8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3C4u; }
        else if (ctx->pc != 0x1EB3C4u) { ctx->pc = 0x1EB3C4u; }
    }
    if (ctx->pc != 0x1EB3C4u) { return; }
    ctx->pc = 0x1EB3C4u;
label_1eb3c4:
    // 0x1eb3c4: 0x24030001
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1eb3c8:
    // 0x1eb3c8: 0x14430004
label_1eb3cc:
    if (ctx->pc == 0x1EB3CCu) {
        ctx->pc = 0x1EB3CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1EB3D0u;
        goto label_1eb3d0;
    }
    ctx->pc = 0x1EB3C8u;
    {
        const bool branch_taken_0x1eb3c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EB3CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1eb3c8) {
            ctx->pc = 0x1EB3DCu;
            goto label_1eb3dc;
        }
    }
    ctx->pc = 0x1EB3D0u;
label_1eb3d0:
    // 0x1eb3d0: 0x24030008
    ctx->pc = 0x1eb3d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_1eb3d4:
    // 0x1eb3d4: 0xaf838dcc
    ctx->pc = 0x1eb3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 3));
label_1eb3d8:
    // 0x1eb3d8: 0x24030002
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1eb3dc:
    // 0x1eb3dc: 0x14430004
label_1eb3e0:
    if (ctx->pc == 0x1EB3E0u) {
        ctx->pc = 0x1EB3E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB3E4u;
        goto label_1eb3e4;
    }
    ctx->pc = 0x1EB3DCu;
    {
        const bool branch_taken_0x1eb3dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EB3E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb3dc) {
            ctx->pc = 0x1EB3F0u;
            goto label_1eb3f0;
        }
    }
    ctx->pc = 0x1EB3E4u;
label_1eb3e4:
    // 0x1eb3e4: 0x8f828dcc
    ctx->pc = 0x1eb3e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb3e8:
    // 0x1eb3e8: 0x2442ffff
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1eb3ec:
    // 0x1eb3ec: 0xaf828dcc
    ctx->pc = 0x1eb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1eb3f0:
    // 0x1eb3f0: 0xc07ad18
label_1eb3f4:
    if (ctx->pc == 0x1EB3F4u) {
        ctx->pc = 0x1EB3F8u;
        goto label_1eb3f8;
    }
    ctx->pc = 0x1EB3F0u;
    SET_GPR_U32(ctx, 31, 0x1EB3F8u);
    ctx->pc = 0x1EB460u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide__FP11Gun_Act_tag_0x1eb460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3F8u; }
        else if (ctx->pc != 0x1EB3F8u) { ctx->pc = 0x1EB3F8u; }
    }
    if (ctx->pc != 0x1EB3F8u) { return; }
    ctx->pc = 0x1EB3F8u;
label_1eb3f8:
    // 0x1eb3f8: 0x10400006
label_1eb3fc:
    if (ctx->pc == 0x1EB3FCu) {
        ctx->pc = 0x1EB400u;
        goto label_1eb400;
    }
    ctx->pc = 0x1EB3F8u;
    {
        const bool branch_taken_0x1eb3f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb3f8) {
            ctx->pc = 0x1EB414u;
            goto label_1eb414;
        }
    }
    ctx->pc = 0x1EB400u;
label_1eb400:
    // 0x1eb400: 0x8f828dc8
    ctx->pc = 0x1eb400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb404:
    // 0x1eb404: 0x10400003
label_1eb408:
    if (ctx->pc == 0x1EB408u) {
        ctx->pc = 0x1EB408u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB40Cu;
        goto label_1eb40c;
    }
    ctx->pc = 0x1EB404u;
    {
        const bool branch_taken_0x1eb404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB408u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb404) {
            ctx->pc = 0x1EB414u;
            goto label_1eb414;
        }
    }
    ctx->pc = 0x1EB40Cu;
label_1eb40c:
    // 0x1eb40c: 0xc07ad58
label_1eb410:
    if (ctx->pc == 0x1EB410u) {
        ctx->pc = 0x1EB410u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB414u;
        goto label_1eb414;
    }
    ctx->pc = 0x1EB40Cu;
    SET_GPR_U32(ctx, 31, 0x1EB414u);
    ctx->pc = 0x1EB410u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_normal_mode__Fii_0x1eb560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB414u; }
        else if (ctx->pc != 0x1EB414u) { ctx->pc = 0x1EB414u; }
    }
    if (ctx->pc != 0x1EB414u) { return; }
    ctx->pc = 0x1EB414u;
label_1eb414:
    // 0x1eb414: 0x8f828dc8
    ctx->pc = 0x1eb414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1eb418:
    // 0x1eb418: 0x10400003
label_1eb41c:
    if (ctx->pc == 0x1EB41Cu) {
        ctx->pc = 0x1EB41Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB420u;
        goto label_1eb420;
    }
    ctx->pc = 0x1EB418u;
    {
        const bool branch_taken_0x1eb418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB41Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb418) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB420u;
label_1eb420:
    // 0x1eb420: 0xc07ad90
label_1eb424:
    if (ctx->pc == 0x1EB424u) {
        ctx->pc = 0x1EB428u;
        goto label_1eb428;
    }
    ctx->pc = 0x1EB420u;
    SET_GPR_U32(ctx, 31, 0x1EB428u);
    ctx->pc = 0x1EB640u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_monitor__FP11Gun_Act_tag_0x1eb640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB428u; }
        else if (ctx->pc != 0x1EB428u) { ctx->pc = 0x1EB428u; }
    }
    if (ctx->pc != 0x1EB428u) { return; }
    ctx->pc = 0x1EB428u;
label_1eb428:
    // 0x1eb428: 0x72202628
    ctx->pc = 0x1eb428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1eb42c:
    // 0x1eb42c: 0xc07b34c
label_1eb430:
    if (ctx->pc == 0x1EB430u) {
        ctx->pc = 0x1EB430u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EB434u;
        goto label_1eb434;
    }
    ctx->pc = 0x1EB42Cu;
    SET_GPR_U32(ctx, 31, 0x1EB434u);
    ctx->pc = 0x1EB430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ECD30u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispAdjustMsg__Fii_0x1ecd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB434u; }
        else if (ctx->pc != 0x1EB434u) { ctx->pc = 0x1EB434u; }
    }
    if (ctx->pc != 0x1EB434u) { return; }
    ctx->pc = 0x1EB434u;
label_1eb434:
    // 0x1eb434: 0x8f828dcc
    ctx->pc = 0x1eb434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1eb438:
    // 0x1eb438: 0x7bbf0020
    ctx->pc = 0x1eb438u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb43c:
    // 0x1eb43c: 0x7bb10010
    ctx->pc = 0x1eb43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb440:
    // 0x1eb440: 0x7bb00000
    ctx->pc = 0x1eb440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb444:
    // 0x1eb444: 0x38420008
    ctx->pc = 0x1eb444u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 8));
label_1eb448:
    // 0x1eb448: 0x2c420001
    ctx->pc = 0x1eb448u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1eb44c:
    // 0x1eb44c: 0x38420001
    ctx->pc = 0x1eb44cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_1eb450:
    // 0x1eb450: 0x3e00008
label_1eb454:
    if (ctx->pc == 0x1EB454u) {
        ctx->pc = 0x1EB454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EB458u;
        goto label_fallthrough_0x1eb450;
    }
    ctx->pc = 0x1EB450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB050u: goto label_1eb050;
            case 0x1EB054u: goto label_1eb054;
            case 0x1EB058u: goto label_1eb058;
            case 0x1EB05Cu: goto label_1eb05c;
            case 0x1EB060u: goto label_1eb060;
            case 0x1EB064u: goto label_1eb064;
            case 0x1EB068u: goto label_1eb068;
            case 0x1EB06Cu: goto label_1eb06c;
            case 0x1EB070u: goto label_1eb070;
            case 0x1EB074u: goto label_1eb074;
            case 0x1EB078u: goto label_1eb078;
            case 0x1EB07Cu: goto label_1eb07c;
            case 0x1EB080u: goto label_1eb080;
            case 0x1EB084u: goto label_1eb084;
            case 0x1EB088u: goto label_1eb088;
            case 0x1EB08Cu: goto label_1eb08c;
            case 0x1EB090u: goto label_1eb090;
            case 0x1EB094u: goto label_1eb094;
            case 0x1EB098u: goto label_1eb098;
            case 0x1EB09Cu: goto label_1eb09c;
            case 0x1EB0A0u: goto label_1eb0a0;
            case 0x1EB0A4u: goto label_1eb0a4;
            case 0x1EB0A8u: goto label_1eb0a8;
            case 0x1EB0ACu: goto label_1eb0ac;
            case 0x1EB0B0u: goto label_1eb0b0;
            case 0x1EB0B4u: goto label_1eb0b4;
            case 0x1EB0B8u: goto label_1eb0b8;
            case 0x1EB0BCu: goto label_1eb0bc;
            case 0x1EB0C0u: goto label_1eb0c0;
            case 0x1EB0C4u: goto label_1eb0c4;
            case 0x1EB0C8u: goto label_1eb0c8;
            case 0x1EB0CCu: goto label_1eb0cc;
            case 0x1EB0D0u: goto label_1eb0d0;
            case 0x1EB0D4u: goto label_1eb0d4;
            case 0x1EB0D8u: goto label_1eb0d8;
            case 0x1EB0DCu: goto label_1eb0dc;
            case 0x1EB0E0u: goto label_1eb0e0;
            case 0x1EB0E4u: goto label_1eb0e4;
            case 0x1EB0E8u: goto label_1eb0e8;
            case 0x1EB0ECu: goto label_1eb0ec;
            case 0x1EB0F0u: goto label_1eb0f0;
            case 0x1EB0F4u: goto label_1eb0f4;
            case 0x1EB0F8u: goto label_1eb0f8;
            case 0x1EB0FCu: goto label_1eb0fc;
            case 0x1EB100u: goto label_1eb100;
            case 0x1EB104u: goto label_1eb104;
            case 0x1EB108u: goto label_1eb108;
            case 0x1EB10Cu: goto label_1eb10c;
            case 0x1EB110u: goto label_1eb110;
            case 0x1EB114u: goto label_1eb114;
            case 0x1EB118u: goto label_1eb118;
            case 0x1EB11Cu: goto label_1eb11c;
            case 0x1EB120u: goto label_1eb120;
            case 0x1EB124u: goto label_1eb124;
            case 0x1EB128u: goto label_1eb128;
            case 0x1EB12Cu: goto label_1eb12c;
            case 0x1EB130u: goto label_1eb130;
            case 0x1EB134u: goto label_1eb134;
            case 0x1EB138u: goto label_1eb138;
            case 0x1EB13Cu: goto label_1eb13c;
            case 0x1EB140u: goto label_1eb140;
            case 0x1EB144u: goto label_1eb144;
            case 0x1EB148u: goto label_1eb148;
            case 0x1EB14Cu: goto label_1eb14c;
            case 0x1EB150u: goto label_1eb150;
            case 0x1EB154u: goto label_1eb154;
            case 0x1EB158u: goto label_1eb158;
            case 0x1EB15Cu: goto label_1eb15c;
            case 0x1EB160u: goto label_1eb160;
            case 0x1EB164u: goto label_1eb164;
            case 0x1EB168u: goto label_1eb168;
            case 0x1EB16Cu: goto label_1eb16c;
            case 0x1EB170u: goto label_1eb170;
            case 0x1EB174u: goto label_1eb174;
            case 0x1EB178u: goto label_1eb178;
            case 0x1EB17Cu: goto label_1eb17c;
            case 0x1EB180u: goto label_1eb180;
            case 0x1EB184u: goto label_1eb184;
            case 0x1EB188u: goto label_1eb188;
            case 0x1EB18Cu: goto label_1eb18c;
            case 0x1EB190u: goto label_1eb190;
            case 0x1EB194u: goto label_1eb194;
            case 0x1EB198u: goto label_1eb198;
            case 0x1EB19Cu: goto label_1eb19c;
            case 0x1EB1A0u: goto label_1eb1a0;
            case 0x1EB1A4u: goto label_1eb1a4;
            case 0x1EB1A8u: goto label_1eb1a8;
            case 0x1EB1ACu: goto label_1eb1ac;
            case 0x1EB1B0u: goto label_1eb1b0;
            case 0x1EB1B4u: goto label_1eb1b4;
            case 0x1EB1B8u: goto label_1eb1b8;
            case 0x1EB1BCu: goto label_1eb1bc;
            case 0x1EB1C0u: goto label_1eb1c0;
            case 0x1EB1C4u: goto label_1eb1c4;
            case 0x1EB1C8u: goto label_1eb1c8;
            case 0x1EB1CCu: goto label_1eb1cc;
            case 0x1EB1D0u: goto label_1eb1d0;
            case 0x1EB1D4u: goto label_1eb1d4;
            case 0x1EB1D8u: goto label_1eb1d8;
            case 0x1EB1DCu: goto label_1eb1dc;
            case 0x1EB1E0u: goto label_1eb1e0;
            case 0x1EB1E4u: goto label_1eb1e4;
            case 0x1EB1E8u: goto label_1eb1e8;
            case 0x1EB1ECu: goto label_1eb1ec;
            case 0x1EB1F0u: goto label_1eb1f0;
            case 0x1EB1F4u: goto label_1eb1f4;
            case 0x1EB1F8u: goto label_1eb1f8;
            case 0x1EB1FCu: goto label_1eb1fc;
            case 0x1EB200u: goto label_1eb200;
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB208u: goto label_1eb208;
            case 0x1EB20Cu: goto label_1eb20c;
            case 0x1EB210u: goto label_1eb210;
            case 0x1EB214u: goto label_1eb214;
            case 0x1EB218u: goto label_1eb218;
            case 0x1EB21Cu: goto label_1eb21c;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB224u: goto label_1eb224;
            case 0x1EB228u: goto label_1eb228;
            case 0x1EB22Cu: goto label_1eb22c;
            case 0x1EB230u: goto label_1eb230;
            case 0x1EB234u: goto label_1eb234;
            case 0x1EB238u: goto label_1eb238;
            case 0x1EB23Cu: goto label_1eb23c;
            case 0x1EB240u: goto label_1eb240;
            case 0x1EB244u: goto label_1eb244;
            case 0x1EB248u: goto label_1eb248;
            case 0x1EB24Cu: goto label_1eb24c;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB254u: goto label_1eb254;
            case 0x1EB258u: goto label_1eb258;
            case 0x1EB25Cu: goto label_1eb25c;
            case 0x1EB260u: goto label_1eb260;
            case 0x1EB264u: goto label_1eb264;
            case 0x1EB268u: goto label_1eb268;
            case 0x1EB26Cu: goto label_1eb26c;
            case 0x1EB270u: goto label_1eb270;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB278u: goto label_1eb278;
            case 0x1EB27Cu: goto label_1eb27c;
            case 0x1EB280u: goto label_1eb280;
            case 0x1EB284u: goto label_1eb284;
            case 0x1EB288u: goto label_1eb288;
            case 0x1EB28Cu: goto label_1eb28c;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB294u: goto label_1eb294;
            case 0x1EB298u: goto label_1eb298;
            case 0x1EB29Cu: goto label_1eb29c;
            case 0x1EB2A0u: goto label_1eb2a0;
            case 0x1EB2A4u: goto label_1eb2a4;
            case 0x1EB2A8u: goto label_1eb2a8;
            case 0x1EB2ACu: goto label_1eb2ac;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2B4u: goto label_1eb2b4;
            case 0x1EB2B8u: goto label_1eb2b8;
            case 0x1EB2BCu: goto label_1eb2bc;
            case 0x1EB2C0u: goto label_1eb2c0;
            case 0x1EB2C4u: goto label_1eb2c4;
            case 0x1EB2C8u: goto label_1eb2c8;
            case 0x1EB2CCu: goto label_1eb2cc;
            case 0x1EB2D0u: goto label_1eb2d0;
            case 0x1EB2D4u: goto label_1eb2d4;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB2DCu: goto label_1eb2dc;
            case 0x1EB2E0u: goto label_1eb2e0;
            case 0x1EB2E4u: goto label_1eb2e4;
            case 0x1EB2E8u: goto label_1eb2e8;
            case 0x1EB2ECu: goto label_1eb2ec;
            case 0x1EB2F0u: goto label_1eb2f0;
            case 0x1EB2F4u: goto label_1eb2f4;
            case 0x1EB2F8u: goto label_1eb2f8;
            case 0x1EB2FCu: goto label_1eb2fc;
            case 0x1EB300u: goto label_1eb300;
            case 0x1EB304u: goto label_1eb304;
            case 0x1EB308u: goto label_1eb308;
            case 0x1EB30Cu: goto label_1eb30c;
            case 0x1EB310u: goto label_1eb310;
            case 0x1EB314u: goto label_1eb314;
            case 0x1EB318u: goto label_1eb318;
            case 0x1EB31Cu: goto label_1eb31c;
            case 0x1EB320u: goto label_1eb320;
            case 0x1EB324u: goto label_1eb324;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB32Cu: goto label_1eb32c;
            case 0x1EB330u: goto label_1eb330;
            case 0x1EB334u: goto label_1eb334;
            case 0x1EB338u: goto label_1eb338;
            case 0x1EB33Cu: goto label_1eb33c;
            case 0x1EB340u: goto label_1eb340;
            case 0x1EB344u: goto label_1eb344;
            case 0x1EB348u: goto label_1eb348;
            case 0x1EB34Cu: goto label_1eb34c;
            case 0x1EB350u: goto label_1eb350;
            case 0x1EB354u: goto label_1eb354;
            case 0x1EB358u: goto label_1eb358;
            case 0x1EB35Cu: goto label_1eb35c;
            case 0x1EB360u: goto label_1eb360;
            case 0x1EB364u: goto label_1eb364;
            case 0x1EB368u: goto label_1eb368;
            case 0x1EB36Cu: goto label_1eb36c;
            case 0x1EB370u: goto label_1eb370;
            case 0x1EB374u: goto label_1eb374;
            case 0x1EB378u: goto label_1eb378;
            case 0x1EB37Cu: goto label_1eb37c;
            case 0x1EB380u: goto label_1eb380;
            case 0x1EB384u: goto label_1eb384;
            case 0x1EB388u: goto label_1eb388;
            case 0x1EB38Cu: goto label_1eb38c;
            case 0x1EB390u: goto label_1eb390;
            case 0x1EB394u: goto label_1eb394;
            case 0x1EB398u: goto label_1eb398;
            case 0x1EB39Cu: goto label_1eb39c;
            case 0x1EB3A0u: goto label_1eb3a0;
            case 0x1EB3A4u: goto label_1eb3a4;
            case 0x1EB3A8u: goto label_1eb3a8;
            case 0x1EB3ACu: goto label_1eb3ac;
            case 0x1EB3B0u: goto label_1eb3b0;
            case 0x1EB3B4u: goto label_1eb3b4;
            case 0x1EB3B8u: goto label_1eb3b8;
            case 0x1EB3BCu: goto label_1eb3bc;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3C8u: goto label_1eb3c8;
            case 0x1EB3CCu: goto label_1eb3cc;
            case 0x1EB3D0u: goto label_1eb3d0;
            case 0x1EB3D4u: goto label_1eb3d4;
            case 0x1EB3D8u: goto label_1eb3d8;
            case 0x1EB3DCu: goto label_1eb3dc;
            case 0x1EB3E0u: goto label_1eb3e0;
            case 0x1EB3E4u: goto label_1eb3e4;
            case 0x1EB3E8u: goto label_1eb3e8;
            case 0x1EB3ECu: goto label_1eb3ec;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB3F8u: goto label_1eb3f8;
            case 0x1EB3FCu: goto label_1eb3fc;
            case 0x1EB400u: goto label_1eb400;
            case 0x1EB404u: goto label_1eb404;
            case 0x1EB408u: goto label_1eb408;
            case 0x1EB40Cu: goto label_1eb40c;
            case 0x1EB410u: goto label_1eb410;
            case 0x1EB414u: goto label_1eb414;
            case 0x1EB418u: goto label_1eb418;
            case 0x1EB41Cu: goto label_1eb41c;
            case 0x1EB420u: goto label_1eb420;
            case 0x1EB424u: goto label_1eb424;
            case 0x1EB428u: goto label_1eb428;
            case 0x1EB42Cu: goto label_1eb42c;
            case 0x1EB430u: goto label_1eb430;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB438u: goto label_1eb438;
            case 0x1EB43Cu: goto label_1eb43c;
            case 0x1EB440u: goto label_1eb440;
            case 0x1EB444u: goto label_1eb444;
            case 0x1EB448u: goto label_1eb448;
            case 0x1EB44Cu: goto label_1eb44c;
            case 0x1EB450u: goto label_1eb450;
            case 0x1EB454u: goto label_1eb454;
            default: break;
        }
        return;
    }
label_fallthrough_0x1eb450:
    ctx->pc = 0x1EB458u;
}
