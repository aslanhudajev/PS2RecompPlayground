#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_mapscreen
// Address: 0x264cb0 - 0x265188
void do_mapscreen_0x264cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x264cb0u;

label_264cb0:
    // 0x264cb0: 0x27bdff50
    ctx->pc = 0x264cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_264cb4:
    // 0x264cb4: 0xffbf0090
    ctx->pc = 0x264cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_264cb8:
    // 0x264cb8: 0xffbe0080
    ctx->pc = 0x264cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_264cbc:
    // 0x264cbc: 0xffb70070
    ctx->pc = 0x264cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_264cc0:
    // 0x264cc0: 0xffb60060
    ctx->pc = 0x264cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_264cc4:
    // 0x264cc4: 0xffb50050
    ctx->pc = 0x264cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_264cc8:
    // 0x264cc8: 0xffb40040
    ctx->pc = 0x264cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_264ccc:
    // 0x264ccc: 0xffb30030
    ctx->pc = 0x264cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_264cd0:
    // 0x264cd0: 0xffb20020
    ctx->pc = 0x264cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_264cd4:
    // 0x264cd4: 0xffb10010
    ctx->pc = 0x264cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_264cd8:
    // 0x264cd8: 0xffb00000
    ctx->pc = 0x264cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_264cdc:
    // 0x264cdc: 0xe7b400a0
    ctx->pc = 0x264cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_264ce0:
    // 0x264ce0: 0x80802d
    ctx->pc = 0x264ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264ce4:
    // 0x264ce4: 0x3c02003c
    ctx->pc = 0x264ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264ce8:
    // 0x264ce8: 0x8c433378
    ctx->pc = 0x264ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 13176)));
label_264cec:
    // 0x264cec: 0x2c620005
    ctx->pc = 0x264cecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_264cf0:
    // 0x264cf0: 0x10400037
label_264cf4:
    if (ctx->pc == 0x264CF4u) {
        ctx->pc = 0x264CF4u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x264CF8u;
        goto label_264cf8;
    }
    ctx->pc = 0x264CF0u;
    {
        const bool branch_taken_0x264cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264CF4u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x264cf0) {
            ctx->pc = 0x264DD0u;
            goto label_264dd0;
        }
    }
    ctx->pc = 0x264CF8u;
label_264cf8:
    // 0x264cf8: 0x3c02003b
    ctx->pc = 0x264cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_264cfc:
    // 0x264cfc: 0x24429ed0
    ctx->pc = 0x264cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942416));
label_264d00:
    // 0x264d00: 0x31880
    ctx->pc = 0x264d00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_264d04:
    // 0x264d04: 0x621821
    ctx->pc = 0x264d04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264d08:
    // 0x264d08: 0x8c620000
    ctx->pc = 0x264d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_264d0c:
    // 0x264d0c: 0x400008
label_264d10:
    if (ctx->pc == 0x264D10u) {
        ctx->pc = 0x264D14u;
        goto label_264d14;
    }
    ctx->pc = 0x264D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264CB0u: goto label_264cb0;
            case 0x264CB4u: goto label_264cb4;
            case 0x264CB8u: goto label_264cb8;
            case 0x264CBCu: goto label_264cbc;
            case 0x264CC0u: goto label_264cc0;
            case 0x264CC4u: goto label_264cc4;
            case 0x264CC8u: goto label_264cc8;
            case 0x264CCCu: goto label_264ccc;
            case 0x264CD0u: goto label_264cd0;
            case 0x264CD4u: goto label_264cd4;
            case 0x264CD8u: goto label_264cd8;
            case 0x264CDCu: goto label_264cdc;
            case 0x264CE0u: goto label_264ce0;
            case 0x264CE4u: goto label_264ce4;
            case 0x264CE8u: goto label_264ce8;
            case 0x264CECu: goto label_264cec;
            case 0x264CF0u: goto label_264cf0;
            case 0x264CF4u: goto label_264cf4;
            case 0x264CF8u: goto label_264cf8;
            case 0x264CFCu: goto label_264cfc;
            case 0x264D00u: goto label_264d00;
            case 0x264D04u: goto label_264d04;
            case 0x264D08u: goto label_264d08;
            case 0x264D0Cu: goto label_264d0c;
            case 0x264D10u: goto label_264d10;
            case 0x264D14u: goto label_264d14;
            case 0x264D18u: goto label_264d18;
            case 0x264D1Cu: goto label_264d1c;
            case 0x264D20u: goto label_264d20;
            case 0x264D24u: goto label_264d24;
            case 0x264D28u: goto label_264d28;
            case 0x264D2Cu: goto label_264d2c;
            case 0x264D30u: goto label_264d30;
            case 0x264D34u: goto label_264d34;
            case 0x264D38u: goto label_264d38;
            case 0x264D3Cu: goto label_264d3c;
            case 0x264D40u: goto label_264d40;
            case 0x264D44u: goto label_264d44;
            case 0x264D48u: goto label_264d48;
            case 0x264D4Cu: goto label_264d4c;
            case 0x264D50u: goto label_264d50;
            case 0x264D54u: goto label_264d54;
            case 0x264D58u: goto label_264d58;
            case 0x264D5Cu: goto label_264d5c;
            case 0x264D60u: goto label_264d60;
            case 0x264D64u: goto label_264d64;
            case 0x264D68u: goto label_264d68;
            case 0x264D6Cu: goto label_264d6c;
            case 0x264D70u: goto label_264d70;
            case 0x264D74u: goto label_264d74;
            case 0x264D78u: goto label_264d78;
            case 0x264D7Cu: goto label_264d7c;
            case 0x264D80u: goto label_264d80;
            case 0x264D84u: goto label_264d84;
            case 0x264D88u: goto label_264d88;
            case 0x264D8Cu: goto label_264d8c;
            case 0x264D90u: goto label_264d90;
            case 0x264D94u: goto label_264d94;
            case 0x264D98u: goto label_264d98;
            case 0x264D9Cu: goto label_264d9c;
            case 0x264DA0u: goto label_264da0;
            case 0x264DA4u: goto label_264da4;
            case 0x264DA8u: goto label_264da8;
            case 0x264DACu: goto label_264dac;
            case 0x264DB0u: goto label_264db0;
            case 0x264DB4u: goto label_264db4;
            case 0x264DB8u: goto label_264db8;
            case 0x264DBCu: goto label_264dbc;
            case 0x264DC0u: goto label_264dc0;
            case 0x264DC4u: goto label_264dc4;
            case 0x264DC8u: goto label_264dc8;
            case 0x264DCCu: goto label_264dcc;
            case 0x264DD0u: goto label_264dd0;
            case 0x264DD4u: goto label_264dd4;
            case 0x264DD8u: goto label_264dd8;
            case 0x264DDCu: goto label_264ddc;
            case 0x264DE0u: goto label_264de0;
            case 0x264DE4u: goto label_264de4;
            case 0x264DE8u: goto label_264de8;
            case 0x264DECu: goto label_264dec;
            case 0x264DF0u: goto label_264df0;
            case 0x264DF4u: goto label_264df4;
            case 0x264DF8u: goto label_264df8;
            case 0x264DFCu: goto label_264dfc;
            case 0x264E00u: goto label_264e00;
            case 0x264E04u: goto label_264e04;
            case 0x264E08u: goto label_264e08;
            case 0x264E0Cu: goto label_264e0c;
            case 0x264E10u: goto label_264e10;
            case 0x264E14u: goto label_264e14;
            case 0x264E18u: goto label_264e18;
            case 0x264E1Cu: goto label_264e1c;
            case 0x264E20u: goto label_264e20;
            case 0x264E24u: goto label_264e24;
            case 0x264E28u: goto label_264e28;
            case 0x264E2Cu: goto label_264e2c;
            case 0x264E30u: goto label_264e30;
            case 0x264E34u: goto label_264e34;
            case 0x264E38u: goto label_264e38;
            case 0x264E3Cu: goto label_264e3c;
            case 0x264E40u: goto label_264e40;
            case 0x264E44u: goto label_264e44;
            case 0x264E48u: goto label_264e48;
            case 0x264E4Cu: goto label_264e4c;
            case 0x264E50u: goto label_264e50;
            case 0x264E54u: goto label_264e54;
            case 0x264E58u: goto label_264e58;
            case 0x264E5Cu: goto label_264e5c;
            case 0x264E60u: goto label_264e60;
            case 0x264E64u: goto label_264e64;
            case 0x264E68u: goto label_264e68;
            case 0x264E6Cu: goto label_264e6c;
            case 0x264E70u: goto label_264e70;
            case 0x264E74u: goto label_264e74;
            case 0x264E78u: goto label_264e78;
            case 0x264E7Cu: goto label_264e7c;
            case 0x264E80u: goto label_264e80;
            case 0x264E84u: goto label_264e84;
            case 0x264E88u: goto label_264e88;
            case 0x264E8Cu: goto label_264e8c;
            case 0x264E90u: goto label_264e90;
            case 0x264E94u: goto label_264e94;
            case 0x264E98u: goto label_264e98;
            case 0x264E9Cu: goto label_264e9c;
            case 0x264EA0u: goto label_264ea0;
            case 0x264EA4u: goto label_264ea4;
            case 0x264EA8u: goto label_264ea8;
            case 0x264EACu: goto label_264eac;
            case 0x264EB0u: goto label_264eb0;
            case 0x264EB4u: goto label_264eb4;
            case 0x264EB8u: goto label_264eb8;
            case 0x264EBCu: goto label_264ebc;
            case 0x264EC0u: goto label_264ec0;
            case 0x264EC4u: goto label_264ec4;
            case 0x264EC8u: goto label_264ec8;
            case 0x264ECCu: goto label_264ecc;
            case 0x264ED0u: goto label_264ed0;
            case 0x264ED4u: goto label_264ed4;
            case 0x264ED8u: goto label_264ed8;
            case 0x264EDCu: goto label_264edc;
            case 0x264EE0u: goto label_264ee0;
            case 0x264EE4u: goto label_264ee4;
            case 0x264EE8u: goto label_264ee8;
            case 0x264EECu: goto label_264eec;
            case 0x264EF0u: goto label_264ef0;
            case 0x264EF4u: goto label_264ef4;
            case 0x264EF8u: goto label_264ef8;
            case 0x264EFCu: goto label_264efc;
            case 0x264F00u: goto label_264f00;
            case 0x264F04u: goto label_264f04;
            case 0x264F08u: goto label_264f08;
            case 0x264F0Cu: goto label_264f0c;
            case 0x264F10u: goto label_264f10;
            case 0x264F14u: goto label_264f14;
            case 0x264F18u: goto label_264f18;
            case 0x264F1Cu: goto label_264f1c;
            case 0x264F20u: goto label_264f20;
            case 0x264F24u: goto label_264f24;
            case 0x264F28u: goto label_264f28;
            case 0x264F2Cu: goto label_264f2c;
            case 0x264F30u: goto label_264f30;
            case 0x264F34u: goto label_264f34;
            case 0x264F38u: goto label_264f38;
            case 0x264F3Cu: goto label_264f3c;
            case 0x264F40u: goto label_264f40;
            case 0x264F44u: goto label_264f44;
            case 0x264F48u: goto label_264f48;
            case 0x264F4Cu: goto label_264f4c;
            case 0x264F50u: goto label_264f50;
            case 0x264F54u: goto label_264f54;
            case 0x264F58u: goto label_264f58;
            case 0x264F5Cu: goto label_264f5c;
            case 0x264F60u: goto label_264f60;
            case 0x264F64u: goto label_264f64;
            case 0x264F68u: goto label_264f68;
            case 0x264F6Cu: goto label_264f6c;
            case 0x264F70u: goto label_264f70;
            case 0x264F74u: goto label_264f74;
            case 0x264F78u: goto label_264f78;
            case 0x264F7Cu: goto label_264f7c;
            case 0x264F80u: goto label_264f80;
            case 0x264F84u: goto label_264f84;
            case 0x264F88u: goto label_264f88;
            case 0x264F8Cu: goto label_264f8c;
            case 0x264F90u: goto label_264f90;
            case 0x264F94u: goto label_264f94;
            case 0x264F98u: goto label_264f98;
            case 0x264F9Cu: goto label_264f9c;
            case 0x264FA0u: goto label_264fa0;
            case 0x264FA4u: goto label_264fa4;
            case 0x264FA8u: goto label_264fa8;
            case 0x264FACu: goto label_264fac;
            case 0x264FB0u: goto label_264fb0;
            case 0x264FB4u: goto label_264fb4;
            case 0x264FB8u: goto label_264fb8;
            case 0x264FBCu: goto label_264fbc;
            case 0x264FC0u: goto label_264fc0;
            case 0x264FC4u: goto label_264fc4;
            case 0x264FC8u: goto label_264fc8;
            case 0x264FCCu: goto label_264fcc;
            case 0x264FD0u: goto label_264fd0;
            case 0x264FD4u: goto label_264fd4;
            case 0x264FD8u: goto label_264fd8;
            case 0x264FDCu: goto label_264fdc;
            case 0x264FE0u: goto label_264fe0;
            case 0x264FE4u: goto label_264fe4;
            case 0x264FE8u: goto label_264fe8;
            case 0x264FECu: goto label_264fec;
            case 0x264FF0u: goto label_264ff0;
            case 0x264FF4u: goto label_264ff4;
            case 0x264FF8u: goto label_264ff8;
            case 0x264FFCu: goto label_264ffc;
            case 0x265000u: goto label_265000;
            case 0x265004u: goto label_265004;
            case 0x265008u: goto label_265008;
            case 0x26500Cu: goto label_26500c;
            case 0x265010u: goto label_265010;
            case 0x265014u: goto label_265014;
            case 0x265018u: goto label_265018;
            case 0x26501Cu: goto label_26501c;
            case 0x265020u: goto label_265020;
            case 0x265024u: goto label_265024;
            case 0x265028u: goto label_265028;
            case 0x26502Cu: goto label_26502c;
            case 0x265030u: goto label_265030;
            case 0x265034u: goto label_265034;
            case 0x265038u: goto label_265038;
            case 0x26503Cu: goto label_26503c;
            case 0x265040u: goto label_265040;
            case 0x265044u: goto label_265044;
            case 0x265048u: goto label_265048;
            case 0x26504Cu: goto label_26504c;
            case 0x265050u: goto label_265050;
            case 0x265054u: goto label_265054;
            case 0x265058u: goto label_265058;
            case 0x26505Cu: goto label_26505c;
            case 0x265060u: goto label_265060;
            case 0x265064u: goto label_265064;
            case 0x265068u: goto label_265068;
            case 0x26506Cu: goto label_26506c;
            case 0x265070u: goto label_265070;
            case 0x265074u: goto label_265074;
            case 0x265078u: goto label_265078;
            case 0x26507Cu: goto label_26507c;
            case 0x265080u: goto label_265080;
            case 0x265084u: goto label_265084;
            case 0x265088u: goto label_265088;
            case 0x26508Cu: goto label_26508c;
            case 0x265090u: goto label_265090;
            case 0x265094u: goto label_265094;
            case 0x265098u: goto label_265098;
            case 0x26509Cu: goto label_26509c;
            case 0x2650A0u: goto label_2650a0;
            case 0x2650A4u: goto label_2650a4;
            case 0x2650A8u: goto label_2650a8;
            case 0x2650ACu: goto label_2650ac;
            case 0x2650B0u: goto label_2650b0;
            case 0x2650B4u: goto label_2650b4;
            case 0x2650B8u: goto label_2650b8;
            case 0x2650BCu: goto label_2650bc;
            case 0x2650C0u: goto label_2650c0;
            case 0x2650C4u: goto label_2650c4;
            case 0x2650C8u: goto label_2650c8;
            case 0x2650CCu: goto label_2650cc;
            case 0x2650D0u: goto label_2650d0;
            case 0x2650D4u: goto label_2650d4;
            case 0x2650D8u: goto label_2650d8;
            case 0x2650DCu: goto label_2650dc;
            case 0x2650E0u: goto label_2650e0;
            case 0x2650E4u: goto label_2650e4;
            case 0x2650E8u: goto label_2650e8;
            case 0x2650ECu: goto label_2650ec;
            case 0x2650F0u: goto label_2650f0;
            case 0x2650F4u: goto label_2650f4;
            case 0x2650F8u: goto label_2650f8;
            case 0x2650FCu: goto label_2650fc;
            case 0x265100u: goto label_265100;
            case 0x265104u: goto label_265104;
            case 0x265108u: goto label_265108;
            case 0x26510Cu: goto label_26510c;
            case 0x265110u: goto label_265110;
            case 0x265114u: goto label_265114;
            case 0x265118u: goto label_265118;
            case 0x26511Cu: goto label_26511c;
            case 0x265120u: goto label_265120;
            case 0x265124u: goto label_265124;
            case 0x265128u: goto label_265128;
            case 0x26512Cu: goto label_26512c;
            case 0x265130u: goto label_265130;
            case 0x265134u: goto label_265134;
            case 0x265138u: goto label_265138;
            case 0x26513Cu: goto label_26513c;
            case 0x265140u: goto label_265140;
            case 0x265144u: goto label_265144;
            case 0x265148u: goto label_265148;
            case 0x26514Cu: goto label_26514c;
            case 0x265150u: goto label_265150;
            case 0x265154u: goto label_265154;
            case 0x265158u: goto label_265158;
            case 0x26515Cu: goto label_26515c;
            case 0x265160u: goto label_265160;
            case 0x265164u: goto label_265164;
            case 0x265168u: goto label_265168;
            case 0x26516Cu: goto label_26516c;
            case 0x265170u: goto label_265170;
            case 0x265174u: goto label_265174;
            case 0x265178u: goto label_265178;
            case 0x26517Cu: goto label_26517c;
            case 0x265180u: goto label_265180;
            case 0x265184u: goto label_265184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264D14u;
label_264d14:
    // 0x264d14: 0x16000004
label_264d18:
    if (ctx->pc == 0x264D18u) {
        ctx->pc = 0x264D18u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x264D1Cu;
        goto label_264d1c;
    }
    ctx->pc = 0x264D14u;
    {
        const bool branch_taken_0x264d14 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x264D18u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x264d14) {
            ctx->pc = 0x264D28u;
            goto label_264d28;
        }
    }
    ctx->pc = 0x264D1Cu;
label_264d1c:
    // 0x264d1c: 0xc0977d4
label_264d20:
    if (ctx->pc == 0x264D20u) {
        ctx->pc = 0x264D24u;
        goto label_264d24;
    }
    ctx->pc = 0x264D1Cu;
    SET_GPR_U32(ctx, 31, 0x264D24u);
    ctx->pc = 0x25DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnterNextStage_0x25df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D24u; }
    }
    if (ctx->pc != 0x264D24u) { return; }
    ctx->pc = 0x264D24u;
label_264d24:
    // 0x264d24: 0x3c03003c
    ctx->pc = 0x264d24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264d28:
    // 0x264d28: 0x8c623378
    ctx->pc = 0x264d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13176)));
label_264d2c:
    // 0x264d2c: 0x1000002a
label_264d30:
    if (ctx->pc == 0x264D30u) {
        ctx->pc = 0x264D30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x264D34u;
        goto label_264d34;
    }
    ctx->pc = 0x264D2Cu;
    {
        const bool branch_taken_0x264d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264D30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x264d2c) {
            ctx->pc = 0x264DD8u;
            goto label_264dd8;
        }
    }
    ctx->pc = 0x264D34u;
label_264d34:
    // 0x264d34: 0x3c03003c
    ctx->pc = 0x264d34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264d38:
    // 0x264d38: 0x8c623374
    ctx->pc = 0x264d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13172)));
label_264d3c:
    // 0x264d3c: 0x10400003
label_264d40:
    if (ctx->pc == 0x264D40u) {
        ctx->pc = 0x264D40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x264D44u;
        goto label_264d44;
    }
    ctx->pc = 0x264D3Cu;
    {
        const bool branch_taken_0x264d3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264D40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x264d3c) {
            ctx->pc = 0x264D4Cu;
            goto label_264d4c;
        }
    }
    ctx->pc = 0x264D44u;
label_264d44:
    // 0x264d44: 0x10000025
label_264d48:
    if (ctx->pc == 0x264D48u) {
        ctx->pc = 0x264D48u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 13172), GPR_U32(ctx, 2));
        ctx->pc = 0x264D4Cu;
        goto label_264d4c;
    }
    ctx->pc = 0x264D44u;
    {
        const bool branch_taken_0x264d44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264D48u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 13172), GPR_U32(ctx, 2));
        if (branch_taken_0x264d44) {
            ctx->pc = 0x264DDCu;
            goto label_264ddc;
        }
    }
    ctx->pc = 0x264D4Cu;
label_264d4c:
    // 0x264d4c: 0x24040001
    ctx->pc = 0x264d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_264d50:
    // 0x264d50: 0xc09908c
label_264d54:
    if (ctx->pc == 0x264D54u) {
        ctx->pc = 0x264D54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264D58u;
        goto label_264d58;
    }
    ctx->pc = 0x264D50u;
    SET_GPR_U32(ctx, 31, 0x264D58u);
    ctx->pc = 0x264D54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D58u; }
    }
    if (ctx->pc != 0x264D58u) { return; }
    ctx->pc = 0x264D58u;
label_264d58:
    // 0x264d58: 0x10400020
label_264d5c:
    if (ctx->pc == 0x264D5Cu) {
        ctx->pc = 0x264D5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x264D60u;
        goto label_264d60;
    }
    ctx->pc = 0x264D58u;
    {
        const bool branch_taken_0x264d58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264D5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x264d58) {
            ctx->pc = 0x264DDCu;
            goto label_264ddc;
        }
    }
    ctx->pc = 0x264D60u;
label_264d60:
    // 0x264d60: 0x8c623378
    ctx->pc = 0x264d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13176)));
label_264d64:
    // 0x264d64: 0x1000001c
label_264d68:
    if (ctx->pc == 0x264D68u) {
        ctx->pc = 0x264D68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x264D6Cu;
        goto label_264d6c;
    }
    ctx->pc = 0x264D64u;
    {
        const bool branch_taken_0x264d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264D68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x264d64) {
            ctx->pc = 0x264DD8u;
            goto label_264dd8;
        }
    }
    ctx->pc = 0x264D6Cu;
label_264d6c:
    // 0x264d6c: 0xc088b7e
label_264d70:
    if (ctx->pc == 0x264D70u) {
        ctx->pc = 0x264D70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x264D74u;
        goto label_264d74;
    }
    ctx->pc = 0x264D6Cu;
    SET_GPR_U32(ctx, 31, 0x264D74u);
    ctx->pc = 0x264D70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x222DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillPlaying_0x222df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264D74u; }
    }
    if (ctx->pc != 0x264D74u) { return; }
    ctx->pc = 0x264D74u;
label_264d74:
    // 0x264d74: 0x1440001a
label_264d78:
    if (ctx->pc == 0x264D78u) {
        ctx->pc = 0x264D78u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x264D7Cu;
        goto label_264d7c;
    }
    ctx->pc = 0x264D74u;
    {
        const bool branch_taken_0x264d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x264D78u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x264d74) {
            ctx->pc = 0x264DE0u;
            goto label_264de0;
        }
    }
    ctx->pc = 0x264D7Cu;
label_264d7c:
    // 0x264d7c: 0x3c03003c
    ctx->pc = 0x264d7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264d80:
    // 0x264d80: 0x8c623378
    ctx->pc = 0x264d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13176)));
label_264d84:
    // 0x264d84: 0x10000014
label_264d88:
    if (ctx->pc == 0x264D88u) {
        ctx->pc = 0x264D88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x264D8Cu;
        goto label_264d8c;
    }
    ctx->pc = 0x264D84u;
    {
        const bool branch_taken_0x264d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264D88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x264d84) {
            ctx->pc = 0x264DD8u;
            goto label_264dd8;
        }
    }
    ctx->pc = 0x264D8Cu;
label_264d8c:
    // 0x264d8c: 0x3c020034
    ctx->pc = 0x264d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264d90:
    // 0x264d90: 0x8c42e7c8
    ctx->pc = 0x264d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_264d94:
    // 0x264d94: 0x8c440064
    ctx->pc = 0x264d94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_264d98:
    // 0x264d98: 0xc0972bc
label_264d9c:
    if (ctx->pc == 0x264D9Cu) {
        ctx->pc = 0x264D9Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x264DA0u;
        goto label_264da0;
    }
    ctx->pc = 0x264D98u;
    SET_GPR_U32(ctx, 31, 0x264DA0u);
    ctx->pc = 0x264D9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25CAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadStage_0x25caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DA0u; }
    }
    if (ctx->pc != 0x264DA0u) { return; }
    ctx->pc = 0x264DA0u;
label_264da0:
    // 0x264da0: 0x3c03003c
    ctx->pc = 0x264da0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264da4:
    // 0x264da4: 0x8c623378
    ctx->pc = 0x264da4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13176)));
label_264da8:
    // 0x264da8: 0x1000000b
label_264dac:
    if (ctx->pc == 0x264DACu) {
        ctx->pc = 0x264DACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x264DB0u;
        goto label_264db0;
    }
    ctx->pc = 0x264DA8u;
    {
        const bool branch_taken_0x264da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264DACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x264da8) {
            ctx->pc = 0x264DD8u;
            goto label_264dd8;
        }
    }
    ctx->pc = 0x264DB0u;
label_264db0:
    // 0x264db0: 0xc088290
label_264db4:
    if (ctx->pc == 0x264DB4u) {
        ctx->pc = 0x264DB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x264DB8u;
        goto label_264db8;
    }
    ctx->pc = 0x264DB0u;
    SET_GPR_U32(ctx, 31, 0x264DB8u);
    ctx->pc = 0x264DB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264DB8u; }
    }
    if (ctx->pc != 0x264DB8u) { return; }
    ctx->pc = 0x264DB8u;
label_264db8:
    // 0x264db8: 0x14400009
label_264dbc:
    if (ctx->pc == 0x264DBCu) {
        ctx->pc = 0x264DBCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x264DC0u;
        goto label_264dc0;
    }
    ctx->pc = 0x264DB8u;
    {
        const bool branch_taken_0x264db8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x264DBCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x264db8) {
            ctx->pc = 0x264DE0u;
            goto label_264de0;
        }
    }
    ctx->pc = 0x264DC0u;
label_264dc0:
    // 0x264dc0: 0x3c03003c
    ctx->pc = 0x264dc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264dc4:
    // 0x264dc4: 0x8c623378
    ctx->pc = 0x264dc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13176)));
label_264dc8:
    // 0x264dc8: 0x10000003
label_264dcc:
    if (ctx->pc == 0x264DCCu) {
        ctx->pc = 0x264DCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x264DD0u;
        goto label_264dd0;
    }
    ctx->pc = 0x264DC8u;
    {
        const bool branch_taken_0x264dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264DCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x264dc8) {
            ctx->pc = 0x264DD8u;
            goto label_264dd8;
        }
    }
    ctx->pc = 0x264DD0u;
label_264dd0:
    // 0x264dd0: 0x3c03003c
    ctx->pc = 0x264dd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264dd4:
    // 0x264dd4: 0x24020063
    ctx->pc = 0x264dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_264dd8:
    // 0x264dd8: 0xac623378
    ctx->pc = 0x264dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13176), GPR_U32(ctx, 2));
label_264ddc:
    // 0x264ddc: 0x3c04003c
    ctx->pc = 0x264ddcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_264de0:
    // 0x264de0: 0x3c030031
    ctx->pc = 0x264de0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_264de4:
    // 0x264de4: 0x8c823370
    ctx->pc = 0x264de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 13168)));
label_264de8:
    // 0x264de8: 0x8c63ffbc
    ctx->pc = 0x264de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_264dec:
    // 0x264dec: 0x431021
    ctx->pc = 0x264decu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_264df0:
    // 0x264df0: 0x160000c2
label_264df4:
    if (ctx->pc == 0x264DF4u) {
        ctx->pc = 0x264DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 13168), GPR_U32(ctx, 2));
        ctx->pc = 0x264DF8u;
        goto label_264df8;
    }
    ctx->pc = 0x264DF0u;
    {
        const bool branch_taken_0x264df0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x264DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 13168), GPR_U32(ctx, 2));
        if (branch_taken_0x264df0) {
            ctx->pc = 0x2650FCu;
            goto label_2650fc;
        }
    }
    ctx->pc = 0x264DF8u;
label_264df8:
    // 0x264df8: 0x3c020034
    ctx->pc = 0x264df8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264dfc:
    // 0x264dfc: 0x8c42e7c8
    ctx->pc = 0x264dfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_264e00:
    // 0x264e00: 0x8c420068
    ctx->pc = 0x264e00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_264e04:
    // 0x264e04: 0x104000bd
label_264e08:
    if (ctx->pc == 0x264E08u) {
        ctx->pc = 0x264E08u;
        SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
        ctx->pc = 0x264E0Cu;
        goto label_264e0c;
    }
    ctx->pc = 0x264E04u;
    {
        const bool branch_taken_0x264e04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264E08u;
        SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
        if (branch_taken_0x264e04) {
            ctx->pc = 0x2650FCu;
            goto label_2650fc;
        }
    }
    ctx->pc = 0x264E0Cu;
label_264e0c:
    // 0x264e0c: 0x882d
    ctx->pc = 0x264e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264e10:
    // 0x264e10: 0x4480a000
    ctx->pc = 0x264e10u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_264e14:
    // 0x264e14: 0x3c02003c
    ctx->pc = 0x264e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264e18:
    // 0x264e18: 0x24573348
    ctx->pc = 0x264e18u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 13128));
label_264e1c:
    // 0x264e1c: 0x80b02d
    ctx->pc = 0x264e1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264e20:
    // 0x264e20: 0x3c02003c
    ctx->pc = 0x264e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264e24:
    // 0x264e24: 0x245332e0
    ctx->pc = 0x264e24u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 13024));
label_264e28:
    // 0x264e28: 0x1000002a
label_264e2c:
    if (ctx->pc == 0x264E2Cu) {
        ctx->pc = 0x264E2Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
        ctx->pc = 0x264E30u;
        goto label_264e30;
    }
    ctx->pc = 0x264E28u;
    {
        const bool branch_taken_0x264e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264E2Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
        if (branch_taken_0x264e28) {
            ctx->pc = 0x264ED4u;
            goto label_264ed4;
        }
    }
    ctx->pc = 0x264E30u;
label_264e30:
    // 0x264e30: 0x579021
    ctx->pc = 0x264e30u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_264e34:
    // 0x264e34: 0x8e420000
    ctx->pc = 0x264e34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_264e38:
    // 0x264e38: 0x54400026
label_264e3c:
    if (ctx->pc == 0x264E3Cu) {
        ctx->pc = 0x264E3Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x264E40u;
        goto label_264e40;
    }
    ctx->pc = 0x264E38u;
    {
        const bool branch_taken_0x264e38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x264e38) {
            ctx->pc = 0x264E3Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x264ED4u;
            goto label_264ed4;
        }
    }
    ctx->pc = 0x264E40u;
label_264e40:
    // 0x264e40: 0x2402001e
    ctx->pc = 0x264e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_264e44:
    // 0x264e44: 0x2221018
    ctx->pc = 0x264e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_264e48:
    // 0x264e48: 0x8ec33370
    ctx->pc = 0x264e48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 13168)));
label_264e4c:
    // 0x264e4c: 0x43102a
    ctx->pc = 0x264e4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_264e50:
    // 0x264e50: 0x10400032
label_264e54:
    if (ctx->pc == 0x264E54u) {
        ctx->pc = 0x264E54u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        ctx->pc = 0x264E58u;
        goto label_264e58;
    }
    ctx->pc = 0x264E50u;
    {
        const bool branch_taken_0x264e50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264E54u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x264e50) {
            ctx->pc = 0x264F1Cu;
            goto label_264f1c;
        }
    }
    ctx->pc = 0x264E58u;
label_264e58:
    // 0x264e58: 0x8e86e7c8
    ctx->pc = 0x264e58u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 4294961096)));
label_264e5c:
    // 0x264e5c: 0x260202d
    ctx->pc = 0x264e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_264e60:
    // 0x264e60: 0x24a59ea8
    ctx->pc = 0x264e60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942376));
label_264e64:
    // 0x264e64: 0x24c60008
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_264e68:
    // 0x264e68: 0xc0b6252
label_264e6c:
    if (ctx->pc == 0x264E6Cu) {
        ctx->pc = 0x264E6Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x264E70u;
        goto label_264e70;
    }
    ctx->pc = 0x264E68u;
    SET_GPR_U32(ctx, 31, 0x264E70u);
    ctx->pc = 0x264E6Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E70u; }
    }
    if (ctx->pc != 0x264E70u) { return; }
    ctx->pc = 0x264E70u;
label_264e70:
    // 0x264e70: 0x260202d
    ctx->pc = 0x264e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_264e74:
    // 0x264e74: 0x282d
    ctx->pc = 0x264e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264e78:
    // 0x264e78: 0x8ea63368
    ctx->pc = 0x264e78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 13160)));
label_264e7c:
    // 0x264e7c: 0xc0382d
    ctx->pc = 0x264e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_264e80:
    // 0x264e80: 0xc0b1b56
label_264e84:
    if (ctx->pc == 0x264E84u) {
        ctx->pc = 0x264E84u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x264E88u;
        goto label_264e88;
    }
    ctx->pc = 0x264E80u;
    SET_GPR_U32(ctx, 31, 0x264E88u);
    ctx->pc = 0x264E84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264E88u; }
    }
    if (ctx->pc != 0x264E88u) { return; }
    ctx->pc = 0x264E88u;
label_264e88:
    // 0x264e88: 0xc6000000
    ctx->pc = 0x264e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264e8c:
    // 0x264e8c: 0xc6010004
    ctx->pc = 0x264e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264e90:
    // 0x264e90: 0x202d
    ctx->pc = 0x264e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264e94:
    // 0x264e94: 0x40282d
    ctx->pc = 0x264e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264e98:
    // 0x264e98: 0x460000a4
    ctx->pc = 0x264e98u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
label_264e9c:
    // 0x264e9c: 0x44061000
    ctx->pc = 0x264e9cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[2]);
label_264ea0:
    // 0x264ea0: 0x46000824
    ctx->pc = 0x264ea0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_264ea4:
    // 0x264ea4: 0x44070000
    ctx->pc = 0x264ea4u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
label_264ea8:
    // 0x264ea8: 0x2408ffff
    ctx->pc = 0x264ea8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
label_264eac:
    // 0x264eac: 0xc0b0b54
label_264eb0:
    if (ctx->pc == 0x264EB0u) {
        ctx->pc = 0x264EB0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x264EB4u;
        goto label_264eb4;
    }
    ctx->pc = 0x264EACu;
    SET_GPR_U32(ctx, 31, 0x264EB4u);
    ctx->pc = 0x264EB0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264EB4u; }
    }
    if (ctx->pc != 0x264EB4u) { return; }
    ctx->pc = 0x264EB4u;
label_264eb4:
    // 0x264eb4: 0xae420000
    ctx->pc = 0x264eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_264eb8:
    // 0x264eb8: 0x3c01477a
    ctx->pc = 0x264eb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
label_264ebc:
    // 0x264ebc: 0x34213c00
    ctx->pc = 0x264ebcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15360));
label_264ec0:
    // 0x264ec0: 0x44816000
    ctx->pc = 0x264ec0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_264ec4:
    // 0x264ec4: 0xc0b0dd6
label_264ec8:
    if (ctx->pc == 0x264EC8u) {
        ctx->pc = 0x264EC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264ECCu;
        goto label_264ecc;
    }
    ctx->pc = 0x264EC4u;
    SET_GPR_U32(ctx, 31, 0x264ECCu);
    ctx->pc = 0x264EC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264ECCu; }
    }
    if (ctx->pc != 0x264ECCu) { return; }
    ctx->pc = 0x264ECCu;
label_264ecc:
    // 0x264ecc: 0xc0977fc
label_264ed0:
    if (ctx->pc == 0x264ED0u) {
        ctx->pc = 0x264ED0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x264ED4u;
        goto label_264ed4;
    }
    ctx->pc = 0x264ECCu;
    SET_GPR_U32(ctx, 31, 0x264ED4u);
    ctx->pc = 0x264ED0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x25DFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioMapDot_0x25dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264ED4u; }
    }
    if (ctx->pc != 0x264ED4u) { return; }
    ctx->pc = 0x264ED4u;
label_264ed4:
    // 0x264ed4: 0x2a220008
    ctx->pc = 0x264ed4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
label_264ed8:
    // 0x264ed8: 0x10400010
label_264edc:
    if (ctx->pc == 0x264EDCu) {
        ctx->pc = 0x264EDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294961096)));
        ctx->pc = 0x264EE0u;
        goto label_264ee0;
    }
    ctx->pc = 0x264ED8u;
    {
        const bool branch_taken_0x264ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264EDCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294961096)));
        if (branch_taken_0x264ed8) {
            ctx->pc = 0x264F1Cu;
            goto label_264f1c;
        }
    }
    ctx->pc = 0x264EE0u;
label_264ee0:
    // 0x264ee0: 0x8c430068
    ctx->pc = 0x264ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_264ee4:
    // 0x264ee4: 0x10600004
label_264ee8:
    if (ctx->pc == 0x264EE8u) {
        ctx->pc = 0x264EE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x264EECu;
        goto label_264eec;
    }
    ctx->pc = 0x264EE4u;
    {
        const bool branch_taken_0x264ee4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x264EE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
        if (branch_taken_0x264ee4) {
            ctx->pc = 0x264EF8u;
            goto label_264ef8;
        }
    }
    ctx->pc = 0x264EECu;
label_264eec:
    // 0x264eec: 0x24420008
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_264ef0:
    // 0x264ef0: 0x10000002
label_264ef4:
    if (ctx->pc == 0x264EF4u) {
        ctx->pc = 0x264EF4u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x264EF8u;
        goto label_264ef8;
    }
    ctx->pc = 0x264EF0u;
    {
        const bool branch_taken_0x264ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264EF4u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x264ef0) {
            ctx->pc = 0x264EFCu;
            goto label_264efc;
        }
    }
    ctx->pc = 0x264EF8u;
label_264ef8:
    // 0x264ef8: 0x802d
    ctx->pc = 0x264ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264efc:
    // 0x264efc: 0x52000007
label_264f00:
    if (ctx->pc == 0x264F00u) {
        ctx->pc = 0x264F00u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x264F04u;
        goto label_264f04;
    }
    ctx->pc = 0x264EFCu;
    {
        const bool branch_taken_0x264efc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x264efc) {
            ctx->pc = 0x264F00u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 8));
            ctx->pc = 0x264F1Cu;
            goto label_264f1c;
        }
    }
    ctx->pc = 0x264F04u;
label_264f04:
    // 0x264f04: 0xc6000000
    ctx->pc = 0x264f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264f08:
    // 0x264f08: 0x46140034
    ctx->pc = 0x264f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264f0c:
    // 0x264f0c: 0x0
    ctx->pc = 0x264f0cu;
    // NOP
label_264f10:
    // 0x264f10: 0x4500ffc7
label_264f14:
    if (ctx->pc == 0x264F14u) {
        ctx->pc = 0x264F14u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x264F18u;
        goto label_264f18;
    }
    ctx->pc = 0x264F10u;
    {
        const bool branch_taken_0x264f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x264F14u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x264f10) {
            ctx->pc = 0x264E30u;
            goto label_264e30;
        }
    }
    ctx->pc = 0x264F18u;
label_264f18:
    // 0x264f18: 0x24110008
    ctx->pc = 0x264f18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 8));
label_264f1c:
    // 0x264f1c: 0x3c02003c
    ctx->pc = 0x264f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264f20:
    // 0x264f20: 0x8c423344
    ctx->pc = 0x264f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 13124)));
label_264f24:
    // 0x264f24: 0x10400072
label_264f28:
    if (ctx->pc == 0x264F28u) {
        ctx->pc = 0x264F28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x264F2Cu;
        goto label_264f2c;
    }
    ctx->pc = 0x264F24u;
    {
        const bool branch_taken_0x264f24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264F28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x264f24) {
            ctx->pc = 0x2650F0u;
            goto label_2650f0;
        }
    }
    ctx->pc = 0x264F2Cu;
label_264f2c:
    // 0x264f2c: 0x16220071
label_264f30:
    if (ctx->pc == 0x264F30u) {
        ctx->pc = 0x264F30u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x264F34u;
        goto label_264f34;
    }
    ctx->pc = 0x264F2Cu;
    {
        const bool branch_taken_0x264f2c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x264F30u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x264f2c) {
            ctx->pc = 0x2650F4u;
            goto label_2650f4;
        }
    }
    ctx->pc = 0x264F34u;
label_264f34:
    // 0x264f34: 0x3c04003c
    ctx->pc = 0x264f34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_264f38:
    // 0x264f38: 0x3c020031
    ctx->pc = 0x264f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_264f3c:
    // 0x264f3c: 0x8c833380
    ctx->pc = 0x264f3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 13184)));
label_264f40:
    // 0x264f40: 0x8c42ffbc
    ctx->pc = 0x264f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_264f44:
    // 0x264f44: 0x621821
    ctx->pc = 0x264f44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264f48:
    // 0x264f48: 0xac833380
    ctx->pc = 0x264f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13184), GPR_U32(ctx, 3));
label_264f4c:
    // 0x264f4c: 0x3c020034
    ctx->pc = 0x264f4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264f50:
    // 0x264f50: 0x8c44e8d8
    ctx->pc = 0x264f50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961368)));
label_264f54:
    // 0x264f54: 0x83102a
    ctx->pc = 0x264f54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
label_264f58:
    // 0x264f58: 0x10400034
label_264f5c:
    if (ctx->pc == 0x264F5Cu) {
        ctx->pc = 0x264F5Cu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x264F60u;
        goto label_264f60;
    }
    ctx->pc = 0x264F58u;
    {
        const bool branch_taken_0x264f58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264F5Cu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x264f58) {
            ctx->pc = 0x26502Cu;
            goto label_26502c;
        }
    }
    ctx->pc = 0x264F60u;
label_264f60:
    // 0x264f60: 0x3c020034
    ctx->pc = 0x264f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264f64:
    // 0x264f64: 0x8c42e8dc
    ctx->pc = 0x264f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961372)));
label_264f68:
    // 0x264f68: 0x62102a
    ctx->pc = 0x264f68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_264f6c:
    // 0x264f6c: 0x2f00b
    ctx->pc = 0x264f6cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 0));
label_264f70:
    // 0x264f70: 0x3c02003c
    ctx->pc = 0x264f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264f74:
    // 0x264f74: 0x31880
    ctx->pc = 0x264f74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_264f78:
    // 0x264f78: 0xac433384
    ctx->pc = 0x264f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13188), GPR_U32(ctx, 3));
label_264f7c:
    // 0x264f7c: 0x4600006
label_264f80:
    if (ctx->pc == 0x264F80u) {
        ctx->pc = 0x264F80u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 13188));
        ctx->pc = 0x264F84u;
        goto label_264f84;
    }
    ctx->pc = 0x264F7Cu;
    {
        const bool branch_taken_0x264f7c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x264F80u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 13188));
        if (branch_taken_0x264f7c) {
            ctx->pc = 0x264F98u;
            goto label_264f98;
        }
    }
    ctx->pc = 0x264F84u;
label_264f84:
    // 0x264f84: 0x60202d
    ctx->pc = 0x264f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_264f88:
    // 0x264f88: 0x28830100
    ctx->pc = 0x264f88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 256));
label_264f8c:
    // 0x264f8c: 0x240200ff
    ctx->pc = 0x264f8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_264f90:
    // 0x264f90: 0x10000002
label_264f94:
    if (ctx->pc == 0x264F94u) {
        ctx->pc = 0x264F94u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        ctx->pc = 0x264F98u;
        goto label_264f98;
    }
    ctx->pc = 0x264F90u;
    {
        const bool branch_taken_0x264f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264F94u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x264f90) {
            ctx->pc = 0x264F9Cu;
            goto label_264f9c;
        }
    }
    ctx->pc = 0x264F98u;
label_264f98:
    // 0x264f98: 0x202d
    ctx->pc = 0x264f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264f9c:
    // 0x264f9c: 0xaca40000
    ctx->pc = 0x264f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_264fa0:
    // 0x264fa0: 0x3c02003c
    ctx->pc = 0x264fa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264fa4:
    // 0x264fa4: 0x3c03003c
    ctx->pc = 0x264fa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264fa8:
    // 0x264fa8: 0x8c443344
    ctx->pc = 0x264fa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 13124)));
label_264fac:
    // 0x264fac: 0xc0b0f52
label_264fb0:
    if (ctx->pc == 0x264FB0u) {
        ctx->pc = 0x264FB0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 13188)));
        ctx->pc = 0x264FB4u;
        goto label_264fb4;
    }
    ctx->pc = 0x264FACu;
    SET_GPR_U32(ctx, 31, 0x264FB4u);
    ctx->pc = 0x264FB0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 13188)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FB4u; }
    }
    if (ctx->pc != 0x264FB4u) { return; }
    ctx->pc = 0x264FB4u;
label_264fb4:
    // 0x264fb4: 0x882d
    ctx->pc = 0x264fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264fb8:
    // 0x264fb8: 0x3c02003c
    ctx->pc = 0x264fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264fbc:
    // 0x264fbc: 0x24533330
    ctx->pc = 0x264fbcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 13104));
label_264fc0:
    // 0x264fc0: 0x3c12003c
    ctx->pc = 0x264fc0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
label_264fc4:
    // 0x264fc4: 0x241000ff
    ctx->pc = 0x264fc4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 255));
label_264fc8:
    // 0x264fc8: 0x111080
    ctx->pc = 0x264fc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_264fcc:
    // 0x264fcc: 0x0
    ctx->pc = 0x264fccu;
    // NOP
label_264fd0:
    // 0x264fd0: 0x531021
    ctx->pc = 0x264fd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_264fd4:
    // 0x264fd4: 0x8e453384
    ctx->pc = 0x264fd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 13188)));
label_264fd8:
    // 0x264fd8: 0x8c440000
    ctx->pc = 0x264fd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_264fdc:
    // 0x264fdc: 0xc0b0f52
label_264fe0:
    if (ctx->pc == 0x264FE0u) {
        ctx->pc = 0x264FE0u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x264FE4u;
        goto label_264fe4;
    }
    ctx->pc = 0x264FDCu;
    SET_GPR_U32(ctx, 31, 0x264FE4u);
    ctx->pc = 0x264FE0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264FE4u; }
    }
    if (ctx->pc != 0x264FE4u) { return; }
    ctx->pc = 0x264FE4u;
label_264fe4:
    // 0x264fe4: 0x26310001
    ctx->pc = 0x264fe4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_264fe8:
    // 0x264fe8: 0x2a220004
    ctx->pc = 0x264fe8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_264fec:
    // 0x264fec: 0x1440fff8
label_264ff0:
    if (ctx->pc == 0x264FF0u) {
        ctx->pc = 0x264FF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x264FF4u;
        goto label_264ff4;
    }
    ctx->pc = 0x264FECu;
    {
        const bool branch_taken_0x264fec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x264FF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x264fec) {
            ctx->pc = 0x264FD0u;
            goto label_264fd0;
        }
    }
    ctx->pc = 0x264FF4u;
label_264ff4:
    // 0x264ff4: 0x3c02003c
    ctx->pc = 0x264ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264ff8:
    // 0x264ff8: 0x8c433384
    ctx->pc = 0x264ff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 13188)));
label_264ffc:
    // 0x264ffc: 0x240200ff
    ctx->pc = 0x264ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_265000:
    // 0x265000: 0x1462003c
label_265004:
    if (ctx->pc == 0x265004u) {
        ctx->pc = 0x265004u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x265008u;
        goto label_265008;
    }
    ctx->pc = 0x265000u;
    {
        const bool branch_taken_0x265000 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x265004u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x265000) {
            ctx->pc = 0x2650F4u;
            goto label_2650f4;
        }
    }
    ctx->pc = 0x265008u;
label_265008:
    // 0x265008: 0x24040154
    ctx->pc = 0x265008u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 340));
label_26500c:
    // 0x26500c: 0x24050140
    ctx->pc = 0x26500cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
label_265010:
    // 0x265010: 0x3c013f80
    ctx->pc = 0x265010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_265014:
    // 0x265014: 0x44816000
    ctx->pc = 0x265014u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_265018:
    // 0x265018: 0x3c06003b
    ctx->pc = 0x265018u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_26501c:
    // 0x26501c: 0xc080a9a
label_265020:
    if (ctx->pc == 0x265020u) {
        ctx->pc = 0x265020u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942392));
        ctx->pc = 0x265024u;
        goto label_265024;
    }
    ctx->pc = 0x26501Cu;
    SET_GPR_U32(ctx, 31, 0x265024u);
    ctx->pc = 0x265020u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942392));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265024u; }
    }
    if (ctx->pc != 0x265024u) { return; }
    ctx->pc = 0x265024u;
label_265024:
    // 0x265024: 0x10000036
label_265028:
    if (ctx->pc == 0x265028u) {
        ctx->pc = 0x265028u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x26502Cu;
        goto label_26502c;
    }
    ctx->pc = 0x265024u;
    {
        const bool branch_taken_0x265024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x265028u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x265024) {
            ctx->pc = 0x265100u;
            goto label_265100;
        }
    }
    ctx->pc = 0x26502Cu;
label_26502c:
    // 0x26502c: 0x3c03003c
    ctx->pc = 0x26502cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_265030:
    // 0x265030: 0x3c020034
    ctx->pc = 0x265030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265034:
    // 0x265034: 0x8c44e8d0
    ctx->pc = 0x265034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961360)));
label_265038:
    // 0x265038: 0x42040
    ctx->pc = 0x265038u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
label_26503c:
    // 0x26503c: 0x3c020034
    ctx->pc = 0x26503cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265040:
    // 0x265040: 0x8c42e8d4
    ctx->pc = 0x265040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961364)));
label_265044:
    // 0x265044: 0x821021
    ctx->pc = 0x265044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_265048:
    // 0x265048: 0x8c633380
    ctx->pc = 0x265048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 13184)));
label_26504c:
    // 0x26504c: 0x62001a
    ctx->pc = 0x26504cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_265050:
    // 0x265050: 0x1810
    ctx->pc = 0x265050u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_265054:
    // 0x265054: 0x50400001
label_265058:
    if (ctx->pc == 0x265058u) {
        ctx->pc = 0x265058u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x26505Cu;
        goto label_26505c;
    }
    ctx->pc = 0x265054u;
    {
        const bool branch_taken_0x265054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x265054) {
            ctx->pc = 0x265058u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x26505Cu;
            goto label_26505c;
        }
    }
    ctx->pc = 0x26505Cu;
label_26505c:
    // 0x26505c: 0x83202a
    ctx->pc = 0x26505cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
label_265060:
    // 0x265060: 0x10800003
label_265064:
    if (ctx->pc == 0x265064u) {
        ctx->pc = 0x265064u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x265068u;
        goto label_265068;
    }
    ctx->pc = 0x265060u;
    {
        const bool branch_taken_0x265060 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x265064u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x265060) {
            ctx->pc = 0x265070u;
            goto label_265070;
        }
    }
    ctx->pc = 0x265068u;
label_265068:
    // 0x265068: 0x10000006
label_26506c:
    if (ctx->pc == 0x26506Cu) {
        ctx->pc = 0x26506Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265070u;
        goto label_265070;
    }
    ctx->pc = 0x265068u;
    {
        const bool branch_taken_0x265068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26506Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265068) {
            ctx->pc = 0x265084u;
            goto label_265084;
        }
    }
    ctx->pc = 0x265070u;
label_265070:
    // 0x265070: 0x8c44e8d0
    ctx->pc = 0x265070u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961360)));
label_265074:
    // 0x265074: 0x83102a
    ctx->pc = 0x265074u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
label_265078:
    // 0x265078: 0x10400002
label_26507c:
    if (ctx->pc == 0x26507Cu) {
        ctx->pc = 0x26507Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x265080u;
        goto label_265080;
    }
    ctx->pc = 0x265078u;
    {
        const bool branch_taken_0x265078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26507Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x265078) {
            ctx->pc = 0x265084u;
            goto label_265084;
        }
    }
    ctx->pc = 0x265080u;
label_265080:
    // 0x265080: 0x431823
    ctx->pc = 0x265080u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_265084:
    // 0x265084: 0x31200
    ctx->pc = 0x265084u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
label_265088:
    // 0x265088: 0x438823
    ctx->pc = 0x265088u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26508c:
    // 0x26508c: 0x3c020034
    ctx->pc = 0x26508cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_265090:
    // 0x265090: 0x8c42e8d0
    ctx->pc = 0x265090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961360)));
label_265094:
    // 0x265094: 0x2228821
    ctx->pc = 0x265094u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_265098:
    // 0x265098: 0x2631ffff
    ctx->pc = 0x265098u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_26509c:
    // 0x26509c: 0x222001a
    ctx->pc = 0x26509cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2650a0:
    // 0x2650a0: 0x1812
    ctx->pc = 0x2650a0u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_2650a4:
    // 0x2650a4: 0x50400001
label_2650a8:
    if (ctx->pc == 0x2650A8u) {
        ctx->pc = 0x2650A8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2650ACu;
        goto label_2650ac;
    }
    ctx->pc = 0x2650A4u;
    {
        const bool branch_taken_0x2650a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2650a4) {
            ctx->pc = 0x2650A8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2650ACu;
            goto label_2650ac;
        }
    }
    ctx->pc = 0x2650ACu;
label_2650ac:
    // 0x2650ac: 0x60882d
    ctx->pc = 0x2650acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2650b0:
    // 0x2650b0: 0x2a220004
    ctx->pc = 0x2650b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_2650b4:
    // 0x2650b4: 0x54400005
label_2650b8:
    if (ctx->pc == 0x2650B8u) {
        ctx->pc = 0x2650B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2650BCu;
        goto label_2650bc;
    }
    ctx->pc = 0x2650B4u;
    {
        const bool branch_taken_0x2650b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2650b4) {
            ctx->pc = 0x2650B8u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
            ctx->pc = 0x2650CCu;
            goto label_2650cc;
        }
    }
    ctx->pc = 0x2650BCu;
label_2650bc:
    // 0x2650bc: 0x2a2300fb
    ctx->pc = 0x2650bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 251));
label_2650c0:
    // 0x2650c0: 0x240200fa
    ctx->pc = 0x2650c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 250));
label_2650c4:
    // 0x2650c4: 0x223100b
    ctx->pc = 0x2650c4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
label_2650c8:
    // 0x2650c8: 0x40182d
    ctx->pc = 0x2650c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2650cc:
    // 0x2650cc: 0x240200ff
    ctx->pc = 0x2650ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_2650d0:
    // 0x2650d0: 0x438823
    ctx->pc = 0x2650d0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2650d4:
    // 0x2650d4: 0x3c10003c
    ctx->pc = 0x2650d4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_2650d8:
    // 0x2650d8: 0x8e043344
    ctx->pc = 0x2650d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 13124)));
label_2650dc:
    // 0x2650dc: 0xc0b0ce8
label_2650e0:
    if (ctx->pc == 0x2650E0u) {
        ctx->pc = 0x2650E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2650E4u;
        goto label_2650e4;
    }
    ctx->pc = 0x2650DCu;
    SET_GPR_U32(ctx, 31, 0x2650E4u);
    ctx->pc = 0x2650E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650E4u; }
    }
    if (ctx->pc != 0x2650E4u) { return; }
    ctx->pc = 0x2650E4u;
label_2650e4:
    // 0x2650e4: 0x8e043344
    ctx->pc = 0x2650e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 13124)));
label_2650e8:
    // 0x2650e8: 0xc0b0f52
label_2650ec:
    if (ctx->pc == 0x2650ECu) {
        ctx->pc = 0x2650ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2650F0u;
        goto label_2650f0;
    }
    ctx->pc = 0x2650E8u;
    SET_GPR_U32(ctx, 31, 0x2650F0u);
    ctx->pc = 0x2650ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2650F0u; }
    }
    if (ctx->pc != 0x2650F0u) { return; }
    ctx->pc = 0x2650F0u;
label_2650f0:
    // 0x2650f0: 0x3c03003c
    ctx->pc = 0x2650f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2650f4:
    // 0x2650f4: 0x2402003c
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_2650f8:
    // 0x2650f8: 0xac62336c
    ctx->pc = 0x2650f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13164), GPR_U32(ctx, 2));
label_2650fc:
    // 0x2650fc: 0x3c04003c
    ctx->pc = 0x2650fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_265100:
    // 0x265100: 0x3c020031
    ctx->pc = 0x265100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_265104:
    // 0x265104: 0x8c83336c
    ctx->pc = 0x265104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 13164)));
label_265108:
    // 0x265108: 0x8c42ffbc
    ctx->pc = 0x265108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_26510c:
    // 0x26510c: 0x622823
    ctx->pc = 0x26510cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_265110:
    // 0x265110: 0xac85336c
    ctx->pc = 0x265110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13164), GPR_U32(ctx, 5));
label_265114:
    // 0x265114: 0x3c020031
    ctx->pc = 0x265114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_265118:
    // 0x265118: 0x8c42ff9c
    ctx->pc = 0x265118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_26511c:
    // 0x26511c: 0x1440000d
label_265120:
    if (ctx->pc == 0x265120u) {
        ctx->pc = 0x265120u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265124u;
        goto label_265124;
    }
    ctx->pc = 0x26511Cu;
    {
        const bool branch_taken_0x26511c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x265120u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26511c) {
            ctx->pc = 0x265154u;
            goto label_265154;
        }
    }
    ctx->pc = 0x265124u;
label_265124:
    // 0x265124: 0x3c02003c
    ctx->pc = 0x265124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_265128:
    // 0x265128: 0x8c433378
    ctx->pc = 0x265128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 13176)));
label_26512c:
    // 0x26512c: 0x24020063
    ctx->pc = 0x26512cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_265130:
    // 0x265130: 0x14620008
label_265134:
    if (ctx->pc == 0x265134u) {
        ctx->pc = 0x265134u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265138u;
        goto label_265138;
    }
    ctx->pc = 0x265130u;
    {
        const bool branch_taken_0x265130 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x265134u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265130) {
            ctx->pc = 0x265154u;
            goto label_265154;
        }
    }
    ctx->pc = 0x265138u;
label_265138:
    // 0x265138: 0x13c00007
label_26513c:
    if (ctx->pc == 0x26513Cu) {
        ctx->pc = 0x26513Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x265140u;
        goto label_265140;
    }
    ctx->pc = 0x265138u;
    {
        const bool branch_taken_0x265138 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x26513Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x265138) {
            ctx->pc = 0x265158u;
            goto label_265158;
        }
    }
    ctx->pc = 0x265140u;
label_265140:
    // 0x265140: 0x1ca00005
label_265144:
    if (ctx->pc == 0x265144u) {
        ctx->pc = 0x265148u;
        goto label_265148;
    }
    ctx->pc = 0x265140u;
    {
        const bool branch_taken_0x265140 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x265140) {
            ctx->pc = 0x265158u;
            goto label_265158;
        }
    }
    ctx->pc = 0x265148u;
label_265148:
    // 0x265148: 0xc0973f0
label_26514c:
    if (ctx->pc == 0x26514Cu) {
        ctx->pc = 0x265150u;
        goto label_265150;
    }
    ctx->pc = 0x265148u;
    SET_GPR_U32(ctx, 31, 0x265150u);
    ctx->pc = 0x25CFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MapMusicEnd_0x25cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265150u; }
    }
    if (ctx->pc != 0x265150u) { return; }
    ctx->pc = 0x265150u;
label_265150:
    // 0x265150: 0x24020001
    ctx->pc = 0x265150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_265154:
    // 0x265154: 0xdfbf0090
    ctx->pc = 0x265154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_265158:
    // 0x265158: 0xdfbe0080
    ctx->pc = 0x265158u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26515c:
    // 0x26515c: 0xdfb70070
    ctx->pc = 0x26515cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_265160:
    // 0x265160: 0xdfb60060
    ctx->pc = 0x265160u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_265164:
    // 0x265164: 0xdfb50050
    ctx->pc = 0x265164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_265168:
    // 0x265168: 0xdfb40040
    ctx->pc = 0x265168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26516c:
    // 0x26516c: 0xdfb30030
    ctx->pc = 0x26516cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_265170:
    // 0x265170: 0xdfb20020
    ctx->pc = 0x265170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_265174:
    // 0x265174: 0xdfb10010
    ctx->pc = 0x265174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_265178:
    // 0x265178: 0xdfb00000
    ctx->pc = 0x265178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26517c:
    // 0x26517c: 0xc7b400a0
    ctx->pc = 0x26517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_265180:
    // 0x265180: 0x3e00008
label_265184:
    if (ctx->pc == 0x265184u) {
        ctx->pc = 0x265184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x265188u;
        goto label_fallthrough_0x265180;
    }
    ctx->pc = 0x265180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264CB0u: goto label_264cb0;
            case 0x264CB4u: goto label_264cb4;
            case 0x264CB8u: goto label_264cb8;
            case 0x264CBCu: goto label_264cbc;
            case 0x264CC0u: goto label_264cc0;
            case 0x264CC4u: goto label_264cc4;
            case 0x264CC8u: goto label_264cc8;
            case 0x264CCCu: goto label_264ccc;
            case 0x264CD0u: goto label_264cd0;
            case 0x264CD4u: goto label_264cd4;
            case 0x264CD8u: goto label_264cd8;
            case 0x264CDCu: goto label_264cdc;
            case 0x264CE0u: goto label_264ce0;
            case 0x264CE4u: goto label_264ce4;
            case 0x264CE8u: goto label_264ce8;
            case 0x264CECu: goto label_264cec;
            case 0x264CF0u: goto label_264cf0;
            case 0x264CF4u: goto label_264cf4;
            case 0x264CF8u: goto label_264cf8;
            case 0x264CFCu: goto label_264cfc;
            case 0x264D00u: goto label_264d00;
            case 0x264D04u: goto label_264d04;
            case 0x264D08u: goto label_264d08;
            case 0x264D0Cu: goto label_264d0c;
            case 0x264D10u: goto label_264d10;
            case 0x264D14u: goto label_264d14;
            case 0x264D18u: goto label_264d18;
            case 0x264D1Cu: goto label_264d1c;
            case 0x264D20u: goto label_264d20;
            case 0x264D24u: goto label_264d24;
            case 0x264D28u: goto label_264d28;
            case 0x264D2Cu: goto label_264d2c;
            case 0x264D30u: goto label_264d30;
            case 0x264D34u: goto label_264d34;
            case 0x264D38u: goto label_264d38;
            case 0x264D3Cu: goto label_264d3c;
            case 0x264D40u: goto label_264d40;
            case 0x264D44u: goto label_264d44;
            case 0x264D48u: goto label_264d48;
            case 0x264D4Cu: goto label_264d4c;
            case 0x264D50u: goto label_264d50;
            case 0x264D54u: goto label_264d54;
            case 0x264D58u: goto label_264d58;
            case 0x264D5Cu: goto label_264d5c;
            case 0x264D60u: goto label_264d60;
            case 0x264D64u: goto label_264d64;
            case 0x264D68u: goto label_264d68;
            case 0x264D6Cu: goto label_264d6c;
            case 0x264D70u: goto label_264d70;
            case 0x264D74u: goto label_264d74;
            case 0x264D78u: goto label_264d78;
            case 0x264D7Cu: goto label_264d7c;
            case 0x264D80u: goto label_264d80;
            case 0x264D84u: goto label_264d84;
            case 0x264D88u: goto label_264d88;
            case 0x264D8Cu: goto label_264d8c;
            case 0x264D90u: goto label_264d90;
            case 0x264D94u: goto label_264d94;
            case 0x264D98u: goto label_264d98;
            case 0x264D9Cu: goto label_264d9c;
            case 0x264DA0u: goto label_264da0;
            case 0x264DA4u: goto label_264da4;
            case 0x264DA8u: goto label_264da8;
            case 0x264DACu: goto label_264dac;
            case 0x264DB0u: goto label_264db0;
            case 0x264DB4u: goto label_264db4;
            case 0x264DB8u: goto label_264db8;
            case 0x264DBCu: goto label_264dbc;
            case 0x264DC0u: goto label_264dc0;
            case 0x264DC4u: goto label_264dc4;
            case 0x264DC8u: goto label_264dc8;
            case 0x264DCCu: goto label_264dcc;
            case 0x264DD0u: goto label_264dd0;
            case 0x264DD4u: goto label_264dd4;
            case 0x264DD8u: goto label_264dd8;
            case 0x264DDCu: goto label_264ddc;
            case 0x264DE0u: goto label_264de0;
            case 0x264DE4u: goto label_264de4;
            case 0x264DE8u: goto label_264de8;
            case 0x264DECu: goto label_264dec;
            case 0x264DF0u: goto label_264df0;
            case 0x264DF4u: goto label_264df4;
            case 0x264DF8u: goto label_264df8;
            case 0x264DFCu: goto label_264dfc;
            case 0x264E00u: goto label_264e00;
            case 0x264E04u: goto label_264e04;
            case 0x264E08u: goto label_264e08;
            case 0x264E0Cu: goto label_264e0c;
            case 0x264E10u: goto label_264e10;
            case 0x264E14u: goto label_264e14;
            case 0x264E18u: goto label_264e18;
            case 0x264E1Cu: goto label_264e1c;
            case 0x264E20u: goto label_264e20;
            case 0x264E24u: goto label_264e24;
            case 0x264E28u: goto label_264e28;
            case 0x264E2Cu: goto label_264e2c;
            case 0x264E30u: goto label_264e30;
            case 0x264E34u: goto label_264e34;
            case 0x264E38u: goto label_264e38;
            case 0x264E3Cu: goto label_264e3c;
            case 0x264E40u: goto label_264e40;
            case 0x264E44u: goto label_264e44;
            case 0x264E48u: goto label_264e48;
            case 0x264E4Cu: goto label_264e4c;
            case 0x264E50u: goto label_264e50;
            case 0x264E54u: goto label_264e54;
            case 0x264E58u: goto label_264e58;
            case 0x264E5Cu: goto label_264e5c;
            case 0x264E60u: goto label_264e60;
            case 0x264E64u: goto label_264e64;
            case 0x264E68u: goto label_264e68;
            case 0x264E6Cu: goto label_264e6c;
            case 0x264E70u: goto label_264e70;
            case 0x264E74u: goto label_264e74;
            case 0x264E78u: goto label_264e78;
            case 0x264E7Cu: goto label_264e7c;
            case 0x264E80u: goto label_264e80;
            case 0x264E84u: goto label_264e84;
            case 0x264E88u: goto label_264e88;
            case 0x264E8Cu: goto label_264e8c;
            case 0x264E90u: goto label_264e90;
            case 0x264E94u: goto label_264e94;
            case 0x264E98u: goto label_264e98;
            case 0x264E9Cu: goto label_264e9c;
            case 0x264EA0u: goto label_264ea0;
            case 0x264EA4u: goto label_264ea4;
            case 0x264EA8u: goto label_264ea8;
            case 0x264EACu: goto label_264eac;
            case 0x264EB0u: goto label_264eb0;
            case 0x264EB4u: goto label_264eb4;
            case 0x264EB8u: goto label_264eb8;
            case 0x264EBCu: goto label_264ebc;
            case 0x264EC0u: goto label_264ec0;
            case 0x264EC4u: goto label_264ec4;
            case 0x264EC8u: goto label_264ec8;
            case 0x264ECCu: goto label_264ecc;
            case 0x264ED0u: goto label_264ed0;
            case 0x264ED4u: goto label_264ed4;
            case 0x264ED8u: goto label_264ed8;
            case 0x264EDCu: goto label_264edc;
            case 0x264EE0u: goto label_264ee0;
            case 0x264EE4u: goto label_264ee4;
            case 0x264EE8u: goto label_264ee8;
            case 0x264EECu: goto label_264eec;
            case 0x264EF0u: goto label_264ef0;
            case 0x264EF4u: goto label_264ef4;
            case 0x264EF8u: goto label_264ef8;
            case 0x264EFCu: goto label_264efc;
            case 0x264F00u: goto label_264f00;
            case 0x264F04u: goto label_264f04;
            case 0x264F08u: goto label_264f08;
            case 0x264F0Cu: goto label_264f0c;
            case 0x264F10u: goto label_264f10;
            case 0x264F14u: goto label_264f14;
            case 0x264F18u: goto label_264f18;
            case 0x264F1Cu: goto label_264f1c;
            case 0x264F20u: goto label_264f20;
            case 0x264F24u: goto label_264f24;
            case 0x264F28u: goto label_264f28;
            case 0x264F2Cu: goto label_264f2c;
            case 0x264F30u: goto label_264f30;
            case 0x264F34u: goto label_264f34;
            case 0x264F38u: goto label_264f38;
            case 0x264F3Cu: goto label_264f3c;
            case 0x264F40u: goto label_264f40;
            case 0x264F44u: goto label_264f44;
            case 0x264F48u: goto label_264f48;
            case 0x264F4Cu: goto label_264f4c;
            case 0x264F50u: goto label_264f50;
            case 0x264F54u: goto label_264f54;
            case 0x264F58u: goto label_264f58;
            case 0x264F5Cu: goto label_264f5c;
            case 0x264F60u: goto label_264f60;
            case 0x264F64u: goto label_264f64;
            case 0x264F68u: goto label_264f68;
            case 0x264F6Cu: goto label_264f6c;
            case 0x264F70u: goto label_264f70;
            case 0x264F74u: goto label_264f74;
            case 0x264F78u: goto label_264f78;
            case 0x264F7Cu: goto label_264f7c;
            case 0x264F80u: goto label_264f80;
            case 0x264F84u: goto label_264f84;
            case 0x264F88u: goto label_264f88;
            case 0x264F8Cu: goto label_264f8c;
            case 0x264F90u: goto label_264f90;
            case 0x264F94u: goto label_264f94;
            case 0x264F98u: goto label_264f98;
            case 0x264F9Cu: goto label_264f9c;
            case 0x264FA0u: goto label_264fa0;
            case 0x264FA4u: goto label_264fa4;
            case 0x264FA8u: goto label_264fa8;
            case 0x264FACu: goto label_264fac;
            case 0x264FB0u: goto label_264fb0;
            case 0x264FB4u: goto label_264fb4;
            case 0x264FB8u: goto label_264fb8;
            case 0x264FBCu: goto label_264fbc;
            case 0x264FC0u: goto label_264fc0;
            case 0x264FC4u: goto label_264fc4;
            case 0x264FC8u: goto label_264fc8;
            case 0x264FCCu: goto label_264fcc;
            case 0x264FD0u: goto label_264fd0;
            case 0x264FD4u: goto label_264fd4;
            case 0x264FD8u: goto label_264fd8;
            case 0x264FDCu: goto label_264fdc;
            case 0x264FE0u: goto label_264fe0;
            case 0x264FE4u: goto label_264fe4;
            case 0x264FE8u: goto label_264fe8;
            case 0x264FECu: goto label_264fec;
            case 0x264FF0u: goto label_264ff0;
            case 0x264FF4u: goto label_264ff4;
            case 0x264FF8u: goto label_264ff8;
            case 0x264FFCu: goto label_264ffc;
            case 0x265000u: goto label_265000;
            case 0x265004u: goto label_265004;
            case 0x265008u: goto label_265008;
            case 0x26500Cu: goto label_26500c;
            case 0x265010u: goto label_265010;
            case 0x265014u: goto label_265014;
            case 0x265018u: goto label_265018;
            case 0x26501Cu: goto label_26501c;
            case 0x265020u: goto label_265020;
            case 0x265024u: goto label_265024;
            case 0x265028u: goto label_265028;
            case 0x26502Cu: goto label_26502c;
            case 0x265030u: goto label_265030;
            case 0x265034u: goto label_265034;
            case 0x265038u: goto label_265038;
            case 0x26503Cu: goto label_26503c;
            case 0x265040u: goto label_265040;
            case 0x265044u: goto label_265044;
            case 0x265048u: goto label_265048;
            case 0x26504Cu: goto label_26504c;
            case 0x265050u: goto label_265050;
            case 0x265054u: goto label_265054;
            case 0x265058u: goto label_265058;
            case 0x26505Cu: goto label_26505c;
            case 0x265060u: goto label_265060;
            case 0x265064u: goto label_265064;
            case 0x265068u: goto label_265068;
            case 0x26506Cu: goto label_26506c;
            case 0x265070u: goto label_265070;
            case 0x265074u: goto label_265074;
            case 0x265078u: goto label_265078;
            case 0x26507Cu: goto label_26507c;
            case 0x265080u: goto label_265080;
            case 0x265084u: goto label_265084;
            case 0x265088u: goto label_265088;
            case 0x26508Cu: goto label_26508c;
            case 0x265090u: goto label_265090;
            case 0x265094u: goto label_265094;
            case 0x265098u: goto label_265098;
            case 0x26509Cu: goto label_26509c;
            case 0x2650A0u: goto label_2650a0;
            case 0x2650A4u: goto label_2650a4;
            case 0x2650A8u: goto label_2650a8;
            case 0x2650ACu: goto label_2650ac;
            case 0x2650B0u: goto label_2650b0;
            case 0x2650B4u: goto label_2650b4;
            case 0x2650B8u: goto label_2650b8;
            case 0x2650BCu: goto label_2650bc;
            case 0x2650C0u: goto label_2650c0;
            case 0x2650C4u: goto label_2650c4;
            case 0x2650C8u: goto label_2650c8;
            case 0x2650CCu: goto label_2650cc;
            case 0x2650D0u: goto label_2650d0;
            case 0x2650D4u: goto label_2650d4;
            case 0x2650D8u: goto label_2650d8;
            case 0x2650DCu: goto label_2650dc;
            case 0x2650E0u: goto label_2650e0;
            case 0x2650E4u: goto label_2650e4;
            case 0x2650E8u: goto label_2650e8;
            case 0x2650ECu: goto label_2650ec;
            case 0x2650F0u: goto label_2650f0;
            case 0x2650F4u: goto label_2650f4;
            case 0x2650F8u: goto label_2650f8;
            case 0x2650FCu: goto label_2650fc;
            case 0x265100u: goto label_265100;
            case 0x265104u: goto label_265104;
            case 0x265108u: goto label_265108;
            case 0x26510Cu: goto label_26510c;
            case 0x265110u: goto label_265110;
            case 0x265114u: goto label_265114;
            case 0x265118u: goto label_265118;
            case 0x26511Cu: goto label_26511c;
            case 0x265120u: goto label_265120;
            case 0x265124u: goto label_265124;
            case 0x265128u: goto label_265128;
            case 0x26512Cu: goto label_26512c;
            case 0x265130u: goto label_265130;
            case 0x265134u: goto label_265134;
            case 0x265138u: goto label_265138;
            case 0x26513Cu: goto label_26513c;
            case 0x265140u: goto label_265140;
            case 0x265144u: goto label_265144;
            case 0x265148u: goto label_265148;
            case 0x26514Cu: goto label_26514c;
            case 0x265150u: goto label_265150;
            case 0x265154u: goto label_265154;
            case 0x265158u: goto label_265158;
            case 0x26515Cu: goto label_26515c;
            case 0x265160u: goto label_265160;
            case 0x265164u: goto label_265164;
            case 0x265168u: goto label_265168;
            case 0x26516Cu: goto label_26516c;
            case 0x265170u: goto label_265170;
            case 0x265174u: goto label_265174;
            case 0x265178u: goto label_265178;
            case 0x26517Cu: goto label_26517c;
            case 0x265180u: goto label_265180;
            case 0x265184u: goto label_265184;
            default: break;
        }
        return;
    }
label_fallthrough_0x265180:
    ctx->pc = 0x265188u;
}
