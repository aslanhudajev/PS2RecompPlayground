#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSETLIGHT__13LightCtrlTaskFPUi
// Address: 0x1f0f60 - 0x1f12f0
void eSETLIGHT__13LightCtrlTaskFPUi_0x1f0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSETLIGHT__13LightCtrlTaskFPUi");


    ctx->pc = 0x1f0f60u;

label_1f0f60:
    // 0x1f0f60: 0x27bdffd0
    ctx->pc = 0x1f0f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f0f64:
    // 0x1f0f64: 0x7fbf0020
    ctx->pc = 0x1f0f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1f0f68:
    // 0x1f0f68: 0x7fb10010
    ctx->pc = 0x1f0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0f6c:
    // 0x1f0f6c: 0x7fb00000
    ctx->pc = 0x1f0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0f70:
    // 0x1f0f70: 0x8c86000c
    ctx->pc = 0x1f0f70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f0f74:
    // 0x1f0f74: 0x8ca20004
    ctx->pc = 0x1f0f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f0f78:
    // 0x1f0f78: 0x70808e28
    ctx->pc = 0x1f0f78u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1f0f7c:
    // 0x1f0f7c: 0x70a08628
    ctx->pc = 0x1f0f7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1f0f80:
    // 0x1f0f80: 0x61840
    ctx->pc = 0x1f0f80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
label_1f0f84:
    // 0x1f0f84: 0x661821
    ctx->pc = 0x1f0f84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f0f88:
    // 0x1f0f88: 0x318c0
    ctx->pc = 0x1f0f88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_1f0f8c:
    // 0x1f0f8c: 0x661823
    ctx->pc = 0x1f0f8cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f0f90:
    // 0x1f0f90: 0x31880
    ctx->pc = 0x1f0f90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1f0f94:
    // 0x1f0f94: 0x831821
    ctx->pc = 0x1f0f94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f0f98:
    // 0x1f0f98: 0x2c410012
    ctx->pc = 0x1f0f98u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 18));
label_1f0f9c:
    // 0x1f0f9c: 0x10200008
label_1f0fa0:
    if (ctx->pc == 0x1F0FA0u) {
        ctx->pc = 0x1F0FA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x1F0FA4u;
        goto label_1f0fa4;
    }
    ctx->pc = 0x1F0F9Cu;
    {
        const bool branch_taken_0x1f0f9c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0FA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1f0f9c) {
            ctx->pc = 0x1F0FC0u;
            goto label_1f0fc0;
        }
    }
    ctx->pc = 0x1F0FA4u;
label_1f0fa4:
    // 0x1f0fa4: 0x3c06002c
    ctx->pc = 0x1f0fa4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
label_1f0fa8:
    // 0x1f0fa8: 0x21080
    ctx->pc = 0x1f0fa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1f0fac:
    // 0x1f0fac: 0x24c6f8a0
    ctx->pc = 0x1f0facu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294965408));
label_1f0fb0:
    // 0x1f0fb0: 0x461021
    ctx->pc = 0x1f0fb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f0fb4:
    // 0x1f0fb4: 0x8c420000
    ctx->pc = 0x1f0fb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f0fb8:
    // 0x1f0fb8: 0x400008
label_1f0fbc:
    if (ctx->pc == 0x1F0FBCu) {
        ctx->pc = 0x1F0FC0u;
        goto label_1f0fc0;
    }
    ctx->pc = 0x1F0FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0F60u: goto label_1f0f60;
            case 0x1F0F64u: goto label_1f0f64;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F0F6Cu: goto label_1f0f6c;
            case 0x1F0F70u: goto label_1f0f70;
            case 0x1F0F74u: goto label_1f0f74;
            case 0x1F0F78u: goto label_1f0f78;
            case 0x1F0F7Cu: goto label_1f0f7c;
            case 0x1F0F80u: goto label_1f0f80;
            case 0x1F0F84u: goto label_1f0f84;
            case 0x1F0F88u: goto label_1f0f88;
            case 0x1F0F8Cu: goto label_1f0f8c;
            case 0x1F0F90u: goto label_1f0f90;
            case 0x1F0F94u: goto label_1f0f94;
            case 0x1F0F98u: goto label_1f0f98;
            case 0x1F0F9Cu: goto label_1f0f9c;
            case 0x1F0FA0u: goto label_1f0fa0;
            case 0x1F0FA4u: goto label_1f0fa4;
            case 0x1F0FA8u: goto label_1f0fa8;
            case 0x1F0FACu: goto label_1f0fac;
            case 0x1F0FB0u: goto label_1f0fb0;
            case 0x1F0FB4u: goto label_1f0fb4;
            case 0x1F0FB8u: goto label_1f0fb8;
            case 0x1F0FBCu: goto label_1f0fbc;
            case 0x1F0FC0u: goto label_1f0fc0;
            case 0x1F0FC4u: goto label_1f0fc4;
            case 0x1F0FC8u: goto label_1f0fc8;
            case 0x1F0FCCu: goto label_1f0fcc;
            case 0x1F0FD0u: goto label_1f0fd0;
            case 0x1F0FD4u: goto label_1f0fd4;
            case 0x1F0FD8u: goto label_1f0fd8;
            case 0x1F0FDCu: goto label_1f0fdc;
            case 0x1F0FE0u: goto label_1f0fe0;
            case 0x1F0FE4u: goto label_1f0fe4;
            case 0x1F0FE8u: goto label_1f0fe8;
            case 0x1F0FECu: goto label_1f0fec;
            case 0x1F0FF0u: goto label_1f0ff0;
            case 0x1F0FF4u: goto label_1f0ff4;
            case 0x1F0FF8u: goto label_1f0ff8;
            case 0x1F0FFCu: goto label_1f0ffc;
            case 0x1F1000u: goto label_1f1000;
            case 0x1F1004u: goto label_1f1004;
            case 0x1F1008u: goto label_1f1008;
            case 0x1F100Cu: goto label_1f100c;
            case 0x1F1010u: goto label_1f1010;
            case 0x1F1014u: goto label_1f1014;
            case 0x1F1018u: goto label_1f1018;
            case 0x1F101Cu: goto label_1f101c;
            case 0x1F1020u: goto label_1f1020;
            case 0x1F1024u: goto label_1f1024;
            case 0x1F1028u: goto label_1f1028;
            case 0x1F102Cu: goto label_1f102c;
            case 0x1F1030u: goto label_1f1030;
            case 0x1F1034u: goto label_1f1034;
            case 0x1F1038u: goto label_1f1038;
            case 0x1F103Cu: goto label_1f103c;
            case 0x1F1040u: goto label_1f1040;
            case 0x1F1044u: goto label_1f1044;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F104Cu: goto label_1f104c;
            case 0x1F1050u: goto label_1f1050;
            case 0x1F1054u: goto label_1f1054;
            case 0x1F1058u: goto label_1f1058;
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            case 0x1F1074u: goto label_1f1074;
            case 0x1F1078u: goto label_1f1078;
            case 0x1F107Cu: goto label_1f107c;
            case 0x1F1080u: goto label_1f1080;
            case 0x1F1084u: goto label_1f1084;
            case 0x1F1088u: goto label_1f1088;
            case 0x1F108Cu: goto label_1f108c;
            case 0x1F1090u: goto label_1f1090;
            case 0x1F1094u: goto label_1f1094;
            case 0x1F1098u: goto label_1f1098;
            case 0x1F109Cu: goto label_1f109c;
            case 0x1F10A0u: goto label_1f10a0;
            case 0x1F10A4u: goto label_1f10a4;
            case 0x1F10A8u: goto label_1f10a8;
            case 0x1F10ACu: goto label_1f10ac;
            case 0x1F10B0u: goto label_1f10b0;
            case 0x1F10B4u: goto label_1f10b4;
            case 0x1F10B8u: goto label_1f10b8;
            case 0x1F10BCu: goto label_1f10bc;
            case 0x1F10C0u: goto label_1f10c0;
            case 0x1F10C4u: goto label_1f10c4;
            case 0x1F10C8u: goto label_1f10c8;
            case 0x1F10CCu: goto label_1f10cc;
            case 0x1F10D0u: goto label_1f10d0;
            case 0x1F10D4u: goto label_1f10d4;
            case 0x1F10D8u: goto label_1f10d8;
            case 0x1F10DCu: goto label_1f10dc;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F10E8u: goto label_1f10e8;
            case 0x1F10ECu: goto label_1f10ec;
            case 0x1F10F0u: goto label_1f10f0;
            case 0x1F10F4u: goto label_1f10f4;
            case 0x1F10F8u: goto label_1f10f8;
            case 0x1F10FCu: goto label_1f10fc;
            case 0x1F1100u: goto label_1f1100;
            case 0x1F1104u: goto label_1f1104;
            case 0x1F1108u: goto label_1f1108;
            case 0x1F110Cu: goto label_1f110c;
            case 0x1F1110u: goto label_1f1110;
            case 0x1F1114u: goto label_1f1114;
            case 0x1F1118u: goto label_1f1118;
            case 0x1F111Cu: goto label_1f111c;
            case 0x1F1120u: goto label_1f1120;
            case 0x1F1124u: goto label_1f1124;
            case 0x1F1128u: goto label_1f1128;
            case 0x1F112Cu: goto label_1f112c;
            case 0x1F1130u: goto label_1f1130;
            case 0x1F1134u: goto label_1f1134;
            case 0x1F1138u: goto label_1f1138;
            case 0x1F113Cu: goto label_1f113c;
            case 0x1F1140u: goto label_1f1140;
            case 0x1F1144u: goto label_1f1144;
            case 0x1F1148u: goto label_1f1148;
            case 0x1F114Cu: goto label_1f114c;
            case 0x1F1150u: goto label_1f1150;
            case 0x1F1154u: goto label_1f1154;
            case 0x1F1158u: goto label_1f1158;
            case 0x1F115Cu: goto label_1f115c;
            case 0x1F1160u: goto label_1f1160;
            case 0x1F1164u: goto label_1f1164;
            case 0x1F1168u: goto label_1f1168;
            case 0x1F116Cu: goto label_1f116c;
            case 0x1F1170u: goto label_1f1170;
            case 0x1F1174u: goto label_1f1174;
            case 0x1F1178u: goto label_1f1178;
            case 0x1F117Cu: goto label_1f117c;
            case 0x1F1180u: goto label_1f1180;
            case 0x1F1184u: goto label_1f1184;
            case 0x1F1188u: goto label_1f1188;
            case 0x1F118Cu: goto label_1f118c;
            case 0x1F1190u: goto label_1f1190;
            case 0x1F1194u: goto label_1f1194;
            case 0x1F1198u: goto label_1f1198;
            case 0x1F119Cu: goto label_1f119c;
            case 0x1F11A0u: goto label_1f11a0;
            case 0x1F11A4u: goto label_1f11a4;
            case 0x1F11A8u: goto label_1f11a8;
            case 0x1F11ACu: goto label_1f11ac;
            case 0x1F11B0u: goto label_1f11b0;
            case 0x1F11B4u: goto label_1f11b4;
            case 0x1F11B8u: goto label_1f11b8;
            case 0x1F11BCu: goto label_1f11bc;
            case 0x1F11C0u: goto label_1f11c0;
            case 0x1F11C4u: goto label_1f11c4;
            case 0x1F11C8u: goto label_1f11c8;
            case 0x1F11CCu: goto label_1f11cc;
            case 0x1F11D0u: goto label_1f11d0;
            case 0x1F11D4u: goto label_1f11d4;
            case 0x1F11D8u: goto label_1f11d8;
            case 0x1F11DCu: goto label_1f11dc;
            case 0x1F11E0u: goto label_1f11e0;
            case 0x1F11E4u: goto label_1f11e4;
            case 0x1F11E8u: goto label_1f11e8;
            case 0x1F11ECu: goto label_1f11ec;
            case 0x1F11F0u: goto label_1f11f0;
            case 0x1F11F4u: goto label_1f11f4;
            case 0x1F11F8u: goto label_1f11f8;
            case 0x1F11FCu: goto label_1f11fc;
            case 0x1F1200u: goto label_1f1200;
            case 0x1F1204u: goto label_1f1204;
            case 0x1F1208u: goto label_1f1208;
            case 0x1F120Cu: goto label_1f120c;
            case 0x1F1210u: goto label_1f1210;
            case 0x1F1214u: goto label_1f1214;
            case 0x1F1218u: goto label_1f1218;
            case 0x1F121Cu: goto label_1f121c;
            case 0x1F1220u: goto label_1f1220;
            case 0x1F1224u: goto label_1f1224;
            case 0x1F1228u: goto label_1f1228;
            case 0x1F122Cu: goto label_1f122c;
            case 0x1F1230u: goto label_1f1230;
            case 0x1F1234u: goto label_1f1234;
            case 0x1F1238u: goto label_1f1238;
            case 0x1F123Cu: goto label_1f123c;
            case 0x1F1240u: goto label_1f1240;
            case 0x1F1244u: goto label_1f1244;
            case 0x1F1248u: goto label_1f1248;
            case 0x1F124Cu: goto label_1f124c;
            case 0x1F1250u: goto label_1f1250;
            case 0x1F1254u: goto label_1f1254;
            case 0x1F1258u: goto label_1f1258;
            case 0x1F125Cu: goto label_1f125c;
            case 0x1F1260u: goto label_1f1260;
            case 0x1F1264u: goto label_1f1264;
            case 0x1F1268u: goto label_1f1268;
            case 0x1F126Cu: goto label_1f126c;
            case 0x1F1270u: goto label_1f1270;
            case 0x1F1274u: goto label_1f1274;
            case 0x1F1278u: goto label_1f1278;
            case 0x1F127Cu: goto label_1f127c;
            case 0x1F1280u: goto label_1f1280;
            case 0x1F1284u: goto label_1f1284;
            case 0x1F1288u: goto label_1f1288;
            case 0x1F128Cu: goto label_1f128c;
            case 0x1F1290u: goto label_1f1290;
            case 0x1F1294u: goto label_1f1294;
            case 0x1F1298u: goto label_1f1298;
            case 0x1F129Cu: goto label_1f129c;
            case 0x1F12A0u: goto label_1f12a0;
            case 0x1F12A4u: goto label_1f12a4;
            case 0x1F12A8u: goto label_1f12a8;
            case 0x1F12ACu: goto label_1f12ac;
            case 0x1F12B0u: goto label_1f12b0;
            case 0x1F12B4u: goto label_1f12b4;
            case 0x1F12B8u: goto label_1f12b8;
            case 0x1F12BCu: goto label_1f12bc;
            case 0x1F12C0u: goto label_1f12c0;
            case 0x1F12C4u: goto label_1f12c4;
            case 0x1F12C8u: goto label_1f12c8;
            case 0x1F12CCu: goto label_1f12cc;
            case 0x1F12D0u: goto label_1f12d0;
            case 0x1F12D4u: goto label_1f12d4;
            case 0x1F12D8u: goto label_1f12d8;
            case 0x1F12DCu: goto label_1f12dc;
            case 0x1F12E0u: goto label_1f12e0;
            case 0x1F12E4u: goto label_1f12e4;
            case 0x1F12E8u: goto label_1f12e8;
            case 0x1F12ECu: goto label_1f12ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0FC0u;
label_1f0fc0:
    // 0x1f0fc0: 0x8e040008
    ctx->pc = 0x1f0fc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f0fc4:
    // 0x1f0fc4: 0x2602000c
    ctx->pc = 0x1f0fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1f0fc8:
    // 0x1f0fc8: 0xc4800000
    ctx->pc = 0x1f0fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0fcc:
    // 0x1f0fcc: 0xe4600004
    ctx->pc = 0x1f0fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1f0fd0:
    // 0x1f0fd0: 0x100000c2
label_1f0fd4:
    if (ctx->pc == 0x1F0FD4u) {
        ctx->pc = 0x1F0FD4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 920), bits); }
        ctx->pc = 0x1F0FD8u;
        goto label_1f0fd8;
    }
    ctx->pc = 0x1F0FD0u;
    {
        const bool branch_taken_0x1f0fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0FD4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 920), bits); }
        if (branch_taken_0x1f0fd0) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F0FD8u;
label_1f0fd8:
    // 0x1f0fd8: 0x8e040008
    ctx->pc = 0x1f0fd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f0fdc:
    // 0x1f0fdc: 0x2602000c
    ctx->pc = 0x1f0fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1f0fe0:
    // 0x1f0fe0: 0xc4800000
    ctx->pc = 0x1f0fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0fe4:
    // 0x1f0fe4: 0xe4600008
    ctx->pc = 0x1f0fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1f0fe8:
    // 0x1f0fe8: 0x100000bc
label_1f0fec:
    if (ctx->pc == 0x1F0FECu) {
        ctx->pc = 0x1F0FECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
        ctx->pc = 0x1F0FF0u;
        goto label_1f0ff0;
    }
    ctx->pc = 0x1F0FE8u;
    {
        const bool branch_taken_0x1f0fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0FECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
        if (branch_taken_0x1f0fe8) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F0FF0u;
label_1f0ff0:
    // 0x1f0ff0: 0x8e040008
    ctx->pc = 0x1f0ff0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f0ff4:
    // 0x1f0ff4: 0x2602000c
    ctx->pc = 0x1f0ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1f0ff8:
    // 0x1f0ff8: 0xc4800000
    ctx->pc = 0x1f0ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ffc:
    // 0x1f0ffc: 0xe460000c
    ctx->pc = 0x1f0ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1f1000:
    // 0x1f1000: 0x100000b6
label_1f1004:
    if (ctx->pc == 0x1F1004u) {
        ctx->pc = 0x1F1004u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 952), bits); }
        ctx->pc = 0x1F1008u;
        goto label_1f1008;
    }
    ctx->pc = 0x1F1000u;
    {
        const bool branch_taken_0x1f1000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1004u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 952), bits); }
        if (branch_taken_0x1f1000) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1008u;
label_1f1008:
    // 0x1f1008: 0x8e040008
    ctx->pc = 0x1f1008u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f100c:
    // 0x1f100c: 0x26020014
    ctx->pc = 0x1f100cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_1f1010:
    // 0x1f1010: 0xc4800000
    ctx->pc = 0x1f1010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1014:
    // 0x1f1014: 0xe4600004
    ctx->pc = 0x1f1014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1f1018:
    // 0x1f1018: 0xe6200398
    ctx->pc = 0x1f1018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 920), bits); }
label_1f101c:
    // 0x1f101c: 0x8e04000c
    ctx->pc = 0x1f101cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1020:
    // 0x1f1020: 0xc4800000
    ctx->pc = 0x1f1020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1024:
    // 0x1f1024: 0xe4600008
    ctx->pc = 0x1f1024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1f1028:
    // 0x1f1028: 0xe62003a8
    ctx->pc = 0x1f1028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
label_1f102c:
    // 0x1f102c: 0x8e040010
    ctx->pc = 0x1f102cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f1030:
    // 0x1f1030: 0xc4800000
    ctx->pc = 0x1f1030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1034:
    // 0x1f1034: 0xe460000c
    ctx->pc = 0x1f1034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1f1038:
    // 0x1f1038: 0x100000a8
label_1f103c:
    if (ctx->pc == 0x1F103Cu) {
        ctx->pc = 0x1F103Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 952), bits); }
        ctx->pc = 0x1F1040u;
        goto label_1f1040;
    }
    ctx->pc = 0x1F1038u;
    {
        const bool branch_taken_0x1f1038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F103Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 952), bits); }
        if (branch_taken_0x1f1038) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1040u;
label_1f1040:
    // 0x1f1040: 0x8e040008
    ctx->pc = 0x1f1040u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1044:
    // 0x1f1044: 0x26020014
    ctx->pc = 0x1f1044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_1f1048:
    // 0x1f1048: 0xc4800000
    ctx->pc = 0x1f1048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f104c:
    // 0x1f104c: 0xe460001c
    ctx->pc = 0x1f104cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_1f1050:
    // 0x1f1050: 0xe62003c8
    ctx->pc = 0x1f1050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 968), bits); }
label_1f1054:
    // 0x1f1054: 0x8e04000c
    ctx->pc = 0x1f1054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1058:
    // 0x1f1058: 0xc4800000
    ctx->pc = 0x1f1058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f105c:
    // 0x1f105c: 0xe4600020
    ctx->pc = 0x1f105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1f1060:
    // 0x1f1060: 0xe62003d8
    ctx->pc = 0x1f1060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 984), bits); }
label_1f1064:
    // 0x1f1064: 0x8e040010
    ctx->pc = 0x1f1064u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f1068:
    // 0x1f1068: 0xc4800000
    ctx->pc = 0x1f1068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f106c:
    // 0x1f106c: 0xe4600024
    ctx->pc = 0x1f106cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f1070:
    // 0x1f1070: 0x1000009a
label_1f1074:
    if (ctx->pc == 0x1F1074u) {
        ctx->pc = 0x1F1074u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1000), bits); }
        ctx->pc = 0x1F1078u;
        goto label_1f1078;
    }
    ctx->pc = 0x1F1070u;
    {
        const bool branch_taken_0x1f1070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1074u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1000), bits); }
        if (branch_taken_0x1f1070) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1078u;
label_1f1078:
    // 0x1f1078: 0x8e040008
    ctx->pc = 0x1f1078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f107c:
    // 0x1f107c: 0x26020014
    ctx->pc = 0x1f107cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_1f1080:
    // 0x1f1080: 0xc4800000
    ctx->pc = 0x1f1080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1084:
    // 0x1f1084: 0xe4600028
    ctx->pc = 0x1f1084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1f1088:
    // 0x1f1088: 0xe62003f8
    ctx->pc = 0x1f1088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1016), bits); }
label_1f108c:
    // 0x1f108c: 0x8e04000c
    ctx->pc = 0x1f108cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1090:
    // 0x1f1090: 0xc4800000
    ctx->pc = 0x1f1090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1094:
    // 0x1f1094: 0xe460002c
    ctx->pc = 0x1f1094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_1f1098:
    // 0x1f1098: 0xe6200408
    ctx->pc = 0x1f1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
label_1f109c:
    // 0x1f109c: 0x8e040010
    ctx->pc = 0x1f109cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f10a0:
    // 0x1f10a0: 0xc4800000
    ctx->pc = 0x1f10a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10a4:
    // 0x1f10a4: 0xe4600030
    ctx->pc = 0x1f10a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_1f10a8:
    // 0x1f10a8: 0x1000008c
label_1f10ac:
    if (ctx->pc == 0x1F10ACu) {
        ctx->pc = 0x1F10ACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1048), bits); }
        ctx->pc = 0x1F10B0u;
        goto label_1f10b0;
    }
    ctx->pc = 0x1F10A8u;
    {
        const bool branch_taken_0x1f10a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F10ACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1048), bits); }
        if (branch_taken_0x1f10a8) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F10B0u;
label_1f10b0:
    // 0x1f10b0: 0x8e040008
    ctx->pc = 0x1f10b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f10b4:
    // 0x1f10b4: 0x26020014
    ctx->pc = 0x1f10b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_1f10b8:
    // 0x1f10b8: 0xc4800000
    ctx->pc = 0x1f10b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10bc:
    // 0x1f10bc: 0xe4600034
    ctx->pc = 0x1f10bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_1f10c0:
    // 0x1f10c0: 0xe6200428
    ctx->pc = 0x1f10c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1064), bits); }
label_1f10c4:
    // 0x1f10c4: 0x8e04000c
    ctx->pc = 0x1f10c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f10c8:
    // 0x1f10c8: 0xc4800000
    ctx->pc = 0x1f10c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10cc:
    // 0x1f10cc: 0xe4600038
    ctx->pc = 0x1f10ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_1f10d0:
    // 0x1f10d0: 0xe6200438
    ctx->pc = 0x1f10d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1080), bits); }
label_1f10d4:
    // 0x1f10d4: 0x8e040010
    ctx->pc = 0x1f10d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f10d8:
    // 0x1f10d8: 0xc4800000
    ctx->pc = 0x1f10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10dc:
    // 0x1f10dc: 0xe460003c
    ctx->pc = 0x1f10dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1f10e0:
    // 0x1f10e0: 0x1000007e
label_1f10e4:
    if (ctx->pc == 0x1F10E4u) {
        ctx->pc = 0x1F10E4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1096), bits); }
        ctx->pc = 0x1F10E8u;
        goto label_1f10e8;
    }
    ctx->pc = 0x1F10E0u;
    {
        const bool branch_taken_0x1f10e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F10E4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1096), bits); }
        if (branch_taken_0x1f10e0) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F10E8u;
label_1f10e8:
    // 0x1f10e8: 0x8e040008
    ctx->pc = 0x1f10e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f10ec:
    // 0x1f10ec: 0x2602000c
    ctx->pc = 0x1f10ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
label_1f10f0:
    // 0x1f10f0: 0xc4800000
    ctx->pc = 0x1f10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f10f4:
    // 0x1f10f4: 0xe4600000
    ctx->pc = 0x1f10f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f10f8:
    // 0x1f10f8: 0x10000078
label_1f10fc:
    if (ctx->pc == 0x1F10FCu) {
        ctx->pc = 0x1F10FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1112), bits); }
        ctx->pc = 0x1F1100u;
        goto label_1f1100;
    }
    ctx->pc = 0x1F10F8u;
    {
        const bool branch_taken_0x1f10f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F10FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1112), bits); }
        if (branch_taken_0x1f10f8) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1100u;
label_1f1100:
    // 0x1f1100: 0x8e040008
    ctx->pc = 0x1f1100u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1104:
    // 0x1f1104: 0x26020010
    ctx->pc = 0x1f1104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
label_1f1108:
    // 0x1f1108: 0xac640048
    ctx->pc = 0x1f1108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
label_1f110c:
    // 0x1f110c: 0x8e04000c
    ctx->pc = 0x1f110cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1110:
    // 0x1f1110: 0xac64004c
    ctx->pc = 0x1f1110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
label_1f1114:
    // 0x1f1114: 0x10000071
label_1f1118:
    if (ctx->pc == 0x1F1118u) {
        ctx->pc = 0x1F1118u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 1132), GPR_U32(ctx, 0));
        ctx->pc = 0x1F111Cu;
        goto label_1f111c;
    }
    ctx->pc = 0x1F1114u;
    {
        const bool branch_taken_0x1f1114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1118u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 1132), GPR_U32(ctx, 0));
        if (branch_taken_0x1f1114) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F111Cu;
label_1f111c:
    // 0x1f111c: 0x8e040008
    ctx->pc = 0x1f111cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1120:
    // 0x1f1120: 0x8e05000c
    ctx->pc = 0x1f1120u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1124:
    // 0x1f1124: 0x26020010
    ctx->pc = 0x1f1124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
label_1f1128:
    // 0x1f1128: 0x418c0
    ctx->pc = 0x1f1128u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
label_1f112c:
    // 0x1f112c: 0x641821
    ctx->pc = 0x1f112cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1130:
    // 0x1f1130: 0x318c0
    ctx->pc = 0x1f1130u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_1f1134:
    // 0x1f1134: 0x2231821
    ctx->pc = 0x1f1134u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1f1138:
    // 0x1f1138: 0x10000068
label_1f113c:
    if (ctx->pc == 0x1F113Cu) {
        ctx->pc = 0x1F113Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 5));
        ctx->pc = 0x1F1140u;
        goto label_1f1140;
    }
    ctx->pc = 0x1F1138u;
    {
        const bool branch_taken_0x1f1138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F113Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 5));
        if (branch_taken_0x1f1138) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1140u;
label_1f1140:
    // 0x1f1140: 0x8e040008
    ctx->pc = 0x1f1140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1144:
    // 0x1f1144: 0x8e05000c
    ctx->pc = 0x1f1144u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1148:
    // 0x1f1148: 0x26020010
    ctx->pc = 0x1f1148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
label_1f114c:
    // 0x1f114c: 0x418c0
    ctx->pc = 0x1f114cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
label_1f1150:
    // 0x1f1150: 0x641821
    ctx->pc = 0x1f1150u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1154:
    // 0x1f1154: 0x318c0
    ctx->pc = 0x1f1154u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_1f1158:
    // 0x1f1158: 0x2231821
    ctx->pc = 0x1f1158u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1f115c:
    // 0x1f115c: 0x1000005f
label_1f1160:
    if (ctx->pc == 0x1F1160u) {
        ctx->pc = 0x1F1160u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 5));
        ctx->pc = 0x1F1164u;
        goto label_1f1164;
    }
    ctx->pc = 0x1F115Cu;
    {
        const bool branch_taken_0x1f115c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1160u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 5));
        if (branch_taken_0x1f115c) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1164u;
label_1f1164:
    // 0x1f1164: 0x8e03000c
    ctx->pc = 0x1f1164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1168:
    // 0x1f1168: 0x8e050008
    ctx->pc = 0x1f1168u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f116c:
    // 0x1f116c: 0x26020018
    ctx->pc = 0x1f116cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
label_1f1170:
    // 0x1f1170: 0xc4600000
    ctx->pc = 0x1f1170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1174:
    // 0x1f1174: 0x520c0
    ctx->pc = 0x1f1174u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
label_1f1178:
    // 0x1f1178: 0x852021
    ctx->pc = 0x1f1178u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f117c:
    // 0x1f117c: 0x420c0
    ctx->pc = 0x1f117cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_1f1180:
    // 0x1f1180: 0x2242021
    ctx->pc = 0x1f1180u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1f1184:
    // 0x1f1184: 0xe4800188
    ctx->pc = 0x1f1184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1f1188:
    // 0x1f1188: 0x8e030010
    ctx->pc = 0x1f1188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f118c:
    // 0x1f118c: 0xc4600000
    ctx->pc = 0x1f118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1190:
    // 0x1f1190: 0xe480018c
    ctx->pc = 0x1f1190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 396), bits); }
label_1f1194:
    // 0x1f1194: 0x8e030014
    ctx->pc = 0x1f1194u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f1198:
    // 0x1f1198: 0xc4600000
    ctx->pc = 0x1f1198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f119c:
    // 0x1f119c: 0x1000004f
label_1f11a0:
    if (ctx->pc == 0x1F11A0u) {
        ctx->pc = 0x1F11A0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
        ctx->pc = 0x1F11A4u;
        goto label_1f11a4;
    }
    ctx->pc = 0x1F119Cu;
    {
        const bool branch_taken_0x1f119c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F11A0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
        if (branch_taken_0x1f119c) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F11A4u;
label_1f11a4:
    // 0x1f11a4: 0x8e03000c
    ctx->pc = 0x1f11a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f11a8:
    // 0x1f11a8: 0x8e050008
    ctx->pc = 0x1f11a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f11ac:
    // 0x1f11ac: 0x26020018
    ctx->pc = 0x1f11acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
label_1f11b0:
    // 0x1f11b0: 0xc4600000
    ctx->pc = 0x1f11b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f11b4:
    // 0x1f11b4: 0x520c0
    ctx->pc = 0x1f11b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
label_1f11b8:
    // 0x1f11b8: 0x852021
    ctx->pc = 0x1f11b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f11bc:
    // 0x1f11bc: 0x420c0
    ctx->pc = 0x1f11bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_1f11c0:
    // 0x1f11c0: 0x2242021
    ctx->pc = 0x1f11c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1f11c4:
    // 0x1f11c4: 0xe4800194
    ctx->pc = 0x1f11c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
label_1f11c8:
    // 0x1f11c8: 0x8e030010
    ctx->pc = 0x1f11c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f11cc:
    // 0x1f11cc: 0xc4600000
    ctx->pc = 0x1f11ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f11d0:
    // 0x1f11d0: 0xe4800198
    ctx->pc = 0x1f11d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
label_1f11d4:
    // 0x1f11d4: 0x8e030014
    ctx->pc = 0x1f11d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f11d8:
    // 0x1f11d8: 0xc4600000
    ctx->pc = 0x1f11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f11dc:
    // 0x1f11dc: 0x1000003f
label_1f11e0:
    if (ctx->pc == 0x1F11E0u) {
        ctx->pc = 0x1F11E0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 412), bits); }
        ctx->pc = 0x1F11E4u;
        goto label_1f11e4;
    }
    ctx->pc = 0x1F11DCu;
    {
        const bool branch_taken_0x1f11dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F11E0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 412), bits); }
        if (branch_taken_0x1f11dc) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F11E4u;
label_1f11e4:
    // 0x1f11e4: 0x8e050008
    ctx->pc = 0x1f11e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f11e8:
    // 0x1f11e8: 0x8e03000c
    ctx->pc = 0x1f11e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f11ec:
    // 0x1f11ec: 0x26020014
    ctx->pc = 0x1f11ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_1f11f0:
    // 0x1f11f0: 0x520c0
    ctx->pc = 0x1f11f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
label_1f11f4:
    // 0x1f11f4: 0x852021
    ctx->pc = 0x1f11f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f11f8:
    // 0x1f11f8: 0x420c0
    ctx->pc = 0x1f11f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_1f11fc:
    // 0x1f11fc: 0x2242021
    ctx->pc = 0x1f11fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1f1200:
    // 0x1f1200: 0xac8301a0
    ctx->pc = 0x1f1200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 3));
label_1f1204:
    // 0x1f1204: 0x8e030010
    ctx->pc = 0x1f1204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f1208:
    // 0x1f1208: 0x10000034
label_1f120c:
    if (ctx->pc == 0x1F120Cu) {
        ctx->pc = 0x1F120Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->pc = 0x1F1210u;
        goto label_1f1210;
    }
    ctx->pc = 0x1F1208u;
    {
        const bool branch_taken_0x1f1208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F120Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        if (branch_taken_0x1f1208) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1210u;
label_1f1210:
    // 0x1f1210: 0x8e03000c
    ctx->pc = 0x1f1210u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1214:
    // 0x1f1214: 0x8e050008
    ctx->pc = 0x1f1214u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1218:
    // 0x1f1218: 0x26020010
    ctx->pc = 0x1f1218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
label_1f121c:
    // 0x1f121c: 0xc4600000
    ctx->pc = 0x1f121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1220:
    // 0x1f1220: 0x520c0
    ctx->pc = 0x1f1220u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
label_1f1224:
    // 0x1f1224: 0x852021
    ctx->pc = 0x1f1224u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f1228:
    // 0x1f1228: 0x420c0
    ctx->pc = 0x1f1228u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_1f122c:
    // 0x1f122c: 0x2242021
    ctx->pc = 0x1f122cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1f1230:
    // 0x1f1230: 0xe48001a8
    ctx->pc = 0x1f1230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
label_1f1234:
    // 0x1f1234: 0x8e03000c
    ctx->pc = 0x1f1234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1238:
    // 0x1f1238: 0xc4600004
    ctx->pc = 0x1f1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f123c:
    // 0x1f123c: 0xe48001ac
    ctx->pc = 0x1f123cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 428), bits); }
label_1f1240:
    // 0x1f1240: 0x8e03000c
    ctx->pc = 0x1f1240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1244:
    // 0x1f1244: 0xc4600008
    ctx->pc = 0x1f1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1248:
    // 0x1f1248: 0x10000024
label_1f124c:
    if (ctx->pc == 0x1F124Cu) {
        ctx->pc = 0x1F124Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
        ctx->pc = 0x1F1250u;
        goto label_1f1250;
    }
    ctx->pc = 0x1F1248u;
    {
        const bool branch_taken_0x1f1248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F124Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
        if (branch_taken_0x1f1248) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F1250u;
label_1f1250:
    // 0x1f1250: 0x8e02000c
    ctx->pc = 0x1f1250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1254:
    // 0x1f1254: 0xc053146
label_1f1258:
    if (ctx->pc == 0x1F1258u) {
        ctx->pc = 0x1F1258u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1F125Cu;
        goto label_1f125c;
    }
    ctx->pc = 0x1F1254u;
    SET_GPR_U32(ctx, 31, 0x1F125Cu);
    ctx->pc = 0x1F1258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F125Cu; }
        else if (ctx->pc != 0x1F125Cu) { ctx->pc = 0x1F125Cu; }
    }
    if (ctx->pc != 0x1F125Cu) { return; }
    ctx->pc = 0x1F125Cu;
label_1f125c:
    // 0x1f125c: 0x8e040008
    ctx->pc = 0x1f125cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1260:
    // 0x1f1260: 0x418c0
    ctx->pc = 0x1f1260u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
label_1f1264:
    // 0x1f1264: 0x641821
    ctx->pc = 0x1f1264u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1268:
    // 0x1f1268: 0x318c0
    ctx->pc = 0x1f1268u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_1f126c:
    // 0x1f126c: 0x2231821
    ctx->pc = 0x1f126cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1f1270:
    // 0x1f1270: 0xac6201b4
    ctx->pc = 0x1f1270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 436), GPR_U32(ctx, 2));
label_1f1274:
    // 0x1f1274: 0x10000019
label_1f1278:
    if (ctx->pc == 0x1F1278u) {
        ctx->pc = 0x1F1278u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1F127Cu;
        goto label_1f127c;
    }
    ctx->pc = 0x1F1274u;
    {
        const bool branch_taken_0x1f1274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F1278u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x1f1274) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F127Cu;
label_1f127c:
    // 0x1f127c: 0x8e040008
    ctx->pc = 0x1f127cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1280:
    // 0x1f1280: 0x8e05000c
    ctx->pc = 0x1f1280u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f1284:
    // 0x1f1284: 0x26020010
    ctx->pc = 0x1f1284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
label_1f1288:
    // 0x1f1288: 0x418c0
    ctx->pc = 0x1f1288u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
label_1f128c:
    // 0x1f128c: 0x641821
    ctx->pc = 0x1f128cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f1290:
    // 0x1f1290: 0x318c0
    ctx->pc = 0x1f1290u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_1f1294:
    // 0x1f1294: 0x2231821
    ctx->pc = 0x1f1294u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1f1298:
    // 0x1f1298: 0x10000010
label_1f129c:
    if (ctx->pc == 0x1F129Cu) {
        ctx->pc = 0x1F129Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 5));
        ctx->pc = 0x1F12A0u;
        goto label_1f12a0;
    }
    ctx->pc = 0x1F1298u;
    {
        const bool branch_taken_0x1f1298 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F129Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 5));
        if (branch_taken_0x1f1298) {
            ctx->pc = 0x1F12DCu;
            goto label_1f12dc;
        }
    }
    ctx->pc = 0x1F12A0u;
label_1f12a0:
    // 0x1f12a0: 0x8e03000c
    ctx->pc = 0x1f12a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f12a4:
    // 0x1f12a4: 0x8e050008
    ctx->pc = 0x1f12a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f12a8:
    // 0x1f12a8: 0x26020010
    ctx->pc = 0x1f12a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
label_1f12ac:
    // 0x1f12ac: 0xc4600000
    ctx->pc = 0x1f12acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f12b0:
    // 0x1f12b0: 0x520c0
    ctx->pc = 0x1f12b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
label_1f12b4:
    // 0x1f12b4: 0x852021
    ctx->pc = 0x1f12b4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f12b8:
    // 0x1f12b8: 0x420c0
    ctx->pc = 0x1f12b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_1f12bc:
    // 0x1f12bc: 0x2242021
    ctx->pc = 0x1f12bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1f12c0:
    // 0x1f12c0: 0xe48001bc
    ctx->pc = 0x1f12c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
label_1f12c4:
    // 0x1f12c4: 0x8e03000c
    ctx->pc = 0x1f12c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f12c8:
    // 0x1f12c8: 0xc4600004
    ctx->pc = 0x1f12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f12cc:
    // 0x1f12cc: 0xe48001c0
    ctx->pc = 0x1f12ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
label_1f12d0:
    // 0x1f12d0: 0x8e03000c
    ctx->pc = 0x1f12d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f12d4:
    // 0x1f12d4: 0xc4600008
    ctx->pc = 0x1f12d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f12d8:
    // 0x1f12d8: 0xe48001c4
    ctx->pc = 0x1f12d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 452), bits); }
label_1f12dc:
    // 0x1f12dc: 0x7bbf0020
    ctx->pc = 0x1f12dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f12e0:
    // 0x1f12e0: 0x7bb10010
    ctx->pc = 0x1f12e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f12e4:
    // 0x1f12e4: 0x7bb00000
    ctx->pc = 0x1f12e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f12e8:
    // 0x1f12e8: 0x3e00008
label_1f12ec:
    if (ctx->pc == 0x1F12ECu) {
        ctx->pc = 0x1F12ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F12F0u;
        goto label_fallthrough_0x1f12e8;
    }
    ctx->pc = 0x1F12E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F12ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0F60u: goto label_1f0f60;
            case 0x1F0F64u: goto label_1f0f64;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F0F6Cu: goto label_1f0f6c;
            case 0x1F0F70u: goto label_1f0f70;
            case 0x1F0F74u: goto label_1f0f74;
            case 0x1F0F78u: goto label_1f0f78;
            case 0x1F0F7Cu: goto label_1f0f7c;
            case 0x1F0F80u: goto label_1f0f80;
            case 0x1F0F84u: goto label_1f0f84;
            case 0x1F0F88u: goto label_1f0f88;
            case 0x1F0F8Cu: goto label_1f0f8c;
            case 0x1F0F90u: goto label_1f0f90;
            case 0x1F0F94u: goto label_1f0f94;
            case 0x1F0F98u: goto label_1f0f98;
            case 0x1F0F9Cu: goto label_1f0f9c;
            case 0x1F0FA0u: goto label_1f0fa0;
            case 0x1F0FA4u: goto label_1f0fa4;
            case 0x1F0FA8u: goto label_1f0fa8;
            case 0x1F0FACu: goto label_1f0fac;
            case 0x1F0FB0u: goto label_1f0fb0;
            case 0x1F0FB4u: goto label_1f0fb4;
            case 0x1F0FB8u: goto label_1f0fb8;
            case 0x1F0FBCu: goto label_1f0fbc;
            case 0x1F0FC0u: goto label_1f0fc0;
            case 0x1F0FC4u: goto label_1f0fc4;
            case 0x1F0FC8u: goto label_1f0fc8;
            case 0x1F0FCCu: goto label_1f0fcc;
            case 0x1F0FD0u: goto label_1f0fd0;
            case 0x1F0FD4u: goto label_1f0fd4;
            case 0x1F0FD8u: goto label_1f0fd8;
            case 0x1F0FDCu: goto label_1f0fdc;
            case 0x1F0FE0u: goto label_1f0fe0;
            case 0x1F0FE4u: goto label_1f0fe4;
            case 0x1F0FE8u: goto label_1f0fe8;
            case 0x1F0FECu: goto label_1f0fec;
            case 0x1F0FF0u: goto label_1f0ff0;
            case 0x1F0FF4u: goto label_1f0ff4;
            case 0x1F0FF8u: goto label_1f0ff8;
            case 0x1F0FFCu: goto label_1f0ffc;
            case 0x1F1000u: goto label_1f1000;
            case 0x1F1004u: goto label_1f1004;
            case 0x1F1008u: goto label_1f1008;
            case 0x1F100Cu: goto label_1f100c;
            case 0x1F1010u: goto label_1f1010;
            case 0x1F1014u: goto label_1f1014;
            case 0x1F1018u: goto label_1f1018;
            case 0x1F101Cu: goto label_1f101c;
            case 0x1F1020u: goto label_1f1020;
            case 0x1F1024u: goto label_1f1024;
            case 0x1F1028u: goto label_1f1028;
            case 0x1F102Cu: goto label_1f102c;
            case 0x1F1030u: goto label_1f1030;
            case 0x1F1034u: goto label_1f1034;
            case 0x1F1038u: goto label_1f1038;
            case 0x1F103Cu: goto label_1f103c;
            case 0x1F1040u: goto label_1f1040;
            case 0x1F1044u: goto label_1f1044;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F104Cu: goto label_1f104c;
            case 0x1F1050u: goto label_1f1050;
            case 0x1F1054u: goto label_1f1054;
            case 0x1F1058u: goto label_1f1058;
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            case 0x1F1074u: goto label_1f1074;
            case 0x1F1078u: goto label_1f1078;
            case 0x1F107Cu: goto label_1f107c;
            case 0x1F1080u: goto label_1f1080;
            case 0x1F1084u: goto label_1f1084;
            case 0x1F1088u: goto label_1f1088;
            case 0x1F108Cu: goto label_1f108c;
            case 0x1F1090u: goto label_1f1090;
            case 0x1F1094u: goto label_1f1094;
            case 0x1F1098u: goto label_1f1098;
            case 0x1F109Cu: goto label_1f109c;
            case 0x1F10A0u: goto label_1f10a0;
            case 0x1F10A4u: goto label_1f10a4;
            case 0x1F10A8u: goto label_1f10a8;
            case 0x1F10ACu: goto label_1f10ac;
            case 0x1F10B0u: goto label_1f10b0;
            case 0x1F10B4u: goto label_1f10b4;
            case 0x1F10B8u: goto label_1f10b8;
            case 0x1F10BCu: goto label_1f10bc;
            case 0x1F10C0u: goto label_1f10c0;
            case 0x1F10C4u: goto label_1f10c4;
            case 0x1F10C8u: goto label_1f10c8;
            case 0x1F10CCu: goto label_1f10cc;
            case 0x1F10D0u: goto label_1f10d0;
            case 0x1F10D4u: goto label_1f10d4;
            case 0x1F10D8u: goto label_1f10d8;
            case 0x1F10DCu: goto label_1f10dc;
            case 0x1F10E0u: goto label_1f10e0;
            case 0x1F10E4u: goto label_1f10e4;
            case 0x1F10E8u: goto label_1f10e8;
            case 0x1F10ECu: goto label_1f10ec;
            case 0x1F10F0u: goto label_1f10f0;
            case 0x1F10F4u: goto label_1f10f4;
            case 0x1F10F8u: goto label_1f10f8;
            case 0x1F10FCu: goto label_1f10fc;
            case 0x1F1100u: goto label_1f1100;
            case 0x1F1104u: goto label_1f1104;
            case 0x1F1108u: goto label_1f1108;
            case 0x1F110Cu: goto label_1f110c;
            case 0x1F1110u: goto label_1f1110;
            case 0x1F1114u: goto label_1f1114;
            case 0x1F1118u: goto label_1f1118;
            case 0x1F111Cu: goto label_1f111c;
            case 0x1F1120u: goto label_1f1120;
            case 0x1F1124u: goto label_1f1124;
            case 0x1F1128u: goto label_1f1128;
            case 0x1F112Cu: goto label_1f112c;
            case 0x1F1130u: goto label_1f1130;
            case 0x1F1134u: goto label_1f1134;
            case 0x1F1138u: goto label_1f1138;
            case 0x1F113Cu: goto label_1f113c;
            case 0x1F1140u: goto label_1f1140;
            case 0x1F1144u: goto label_1f1144;
            case 0x1F1148u: goto label_1f1148;
            case 0x1F114Cu: goto label_1f114c;
            case 0x1F1150u: goto label_1f1150;
            case 0x1F1154u: goto label_1f1154;
            case 0x1F1158u: goto label_1f1158;
            case 0x1F115Cu: goto label_1f115c;
            case 0x1F1160u: goto label_1f1160;
            case 0x1F1164u: goto label_1f1164;
            case 0x1F1168u: goto label_1f1168;
            case 0x1F116Cu: goto label_1f116c;
            case 0x1F1170u: goto label_1f1170;
            case 0x1F1174u: goto label_1f1174;
            case 0x1F1178u: goto label_1f1178;
            case 0x1F117Cu: goto label_1f117c;
            case 0x1F1180u: goto label_1f1180;
            case 0x1F1184u: goto label_1f1184;
            case 0x1F1188u: goto label_1f1188;
            case 0x1F118Cu: goto label_1f118c;
            case 0x1F1190u: goto label_1f1190;
            case 0x1F1194u: goto label_1f1194;
            case 0x1F1198u: goto label_1f1198;
            case 0x1F119Cu: goto label_1f119c;
            case 0x1F11A0u: goto label_1f11a0;
            case 0x1F11A4u: goto label_1f11a4;
            case 0x1F11A8u: goto label_1f11a8;
            case 0x1F11ACu: goto label_1f11ac;
            case 0x1F11B0u: goto label_1f11b0;
            case 0x1F11B4u: goto label_1f11b4;
            case 0x1F11B8u: goto label_1f11b8;
            case 0x1F11BCu: goto label_1f11bc;
            case 0x1F11C0u: goto label_1f11c0;
            case 0x1F11C4u: goto label_1f11c4;
            case 0x1F11C8u: goto label_1f11c8;
            case 0x1F11CCu: goto label_1f11cc;
            case 0x1F11D0u: goto label_1f11d0;
            case 0x1F11D4u: goto label_1f11d4;
            case 0x1F11D8u: goto label_1f11d8;
            case 0x1F11DCu: goto label_1f11dc;
            case 0x1F11E0u: goto label_1f11e0;
            case 0x1F11E4u: goto label_1f11e4;
            case 0x1F11E8u: goto label_1f11e8;
            case 0x1F11ECu: goto label_1f11ec;
            case 0x1F11F0u: goto label_1f11f0;
            case 0x1F11F4u: goto label_1f11f4;
            case 0x1F11F8u: goto label_1f11f8;
            case 0x1F11FCu: goto label_1f11fc;
            case 0x1F1200u: goto label_1f1200;
            case 0x1F1204u: goto label_1f1204;
            case 0x1F1208u: goto label_1f1208;
            case 0x1F120Cu: goto label_1f120c;
            case 0x1F1210u: goto label_1f1210;
            case 0x1F1214u: goto label_1f1214;
            case 0x1F1218u: goto label_1f1218;
            case 0x1F121Cu: goto label_1f121c;
            case 0x1F1220u: goto label_1f1220;
            case 0x1F1224u: goto label_1f1224;
            case 0x1F1228u: goto label_1f1228;
            case 0x1F122Cu: goto label_1f122c;
            case 0x1F1230u: goto label_1f1230;
            case 0x1F1234u: goto label_1f1234;
            case 0x1F1238u: goto label_1f1238;
            case 0x1F123Cu: goto label_1f123c;
            case 0x1F1240u: goto label_1f1240;
            case 0x1F1244u: goto label_1f1244;
            case 0x1F1248u: goto label_1f1248;
            case 0x1F124Cu: goto label_1f124c;
            case 0x1F1250u: goto label_1f1250;
            case 0x1F1254u: goto label_1f1254;
            case 0x1F1258u: goto label_1f1258;
            case 0x1F125Cu: goto label_1f125c;
            case 0x1F1260u: goto label_1f1260;
            case 0x1F1264u: goto label_1f1264;
            case 0x1F1268u: goto label_1f1268;
            case 0x1F126Cu: goto label_1f126c;
            case 0x1F1270u: goto label_1f1270;
            case 0x1F1274u: goto label_1f1274;
            case 0x1F1278u: goto label_1f1278;
            case 0x1F127Cu: goto label_1f127c;
            case 0x1F1280u: goto label_1f1280;
            case 0x1F1284u: goto label_1f1284;
            case 0x1F1288u: goto label_1f1288;
            case 0x1F128Cu: goto label_1f128c;
            case 0x1F1290u: goto label_1f1290;
            case 0x1F1294u: goto label_1f1294;
            case 0x1F1298u: goto label_1f1298;
            case 0x1F129Cu: goto label_1f129c;
            case 0x1F12A0u: goto label_1f12a0;
            case 0x1F12A4u: goto label_1f12a4;
            case 0x1F12A8u: goto label_1f12a8;
            case 0x1F12ACu: goto label_1f12ac;
            case 0x1F12B0u: goto label_1f12b0;
            case 0x1F12B4u: goto label_1f12b4;
            case 0x1F12B8u: goto label_1f12b8;
            case 0x1F12BCu: goto label_1f12bc;
            case 0x1F12C0u: goto label_1f12c0;
            case 0x1F12C4u: goto label_1f12c4;
            case 0x1F12C8u: goto label_1f12c8;
            case 0x1F12CCu: goto label_1f12cc;
            case 0x1F12D0u: goto label_1f12d0;
            case 0x1F12D4u: goto label_1f12d4;
            case 0x1F12D8u: goto label_1f12d8;
            case 0x1F12DCu: goto label_1f12dc;
            case 0x1F12E0u: goto label_1f12e0;
            case 0x1F12E4u: goto label_1f12e4;
            case 0x1F12E8u: goto label_1f12e8;
            case 0x1F12ECu: goto label_1f12ec;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f12e8:
    ctx->pc = 0x1F12F0u;
}
