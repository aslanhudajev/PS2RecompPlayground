#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PreDispChange__10PeopleTaskFv
// Address: 0x206f70 - 0x207950
void PreDispChange__10PeopleTaskFv_0x206f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PreDispChange__10PeopleTaskFv");


    ctx->pc = 0x206f70u;

label_206f70:
    // 0x206f70: 0x27bdff20
    ctx->pc = 0x206f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
label_206f74:
    // 0x206f74: 0x7fbf0070
    ctx->pc = 0x206f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_206f78:
    // 0x206f78: 0x7fb60060
    ctx->pc = 0x206f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_206f7c:
    // 0x206f7c: 0x7fb50050
    ctx->pc = 0x206f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_206f80:
    // 0x206f80: 0x7fb40040
    ctx->pc = 0x206f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_206f84:
    // 0x206f84: 0x7fb30030
    ctx->pc = 0x206f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_206f88:
    // 0x206f88: 0x7fb20020
    ctx->pc = 0x206f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_206f8c:
    // 0x206f8c: 0x7fb10010
    ctx->pc = 0x206f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_206f90:
    // 0x206f90: 0x7fb00000
    ctx->pc = 0x206f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206f94:
    // 0x206f94: 0x8c85000c
    ctx->pc = 0x206f94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_206f98:
    // 0x206f98: 0x2403fff1
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967281));
label_206f9c:
    // 0x206f9c: 0xa31824
    ctx->pc = 0x206f9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_206fa0:
    // 0x206fa0: 0xac83000c
    ctx->pc = 0x206fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_206fa4:
    // 0x206fa4: 0x8c831db8
    ctx->pc = 0x206fa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7608)));
label_206fa8:
    // 0x206fa8: 0x2c610007
    ctx->pc = 0x206fa8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_206fac:
    // 0x206fac: 0x102001f5
label_206fb0:
    if (ctx->pc == 0x206FB0u) {
        ctx->pc = 0x206FB0u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x206FB4u;
        goto label_206fb4;
    }
    ctx->pc = 0x206FACu;
    {
        const bool branch_taken_0x206fac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x206FB0u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206fac) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x206FB4u;
label_206fb4:
    // 0x206fb4: 0x3c04002c
    ctx->pc = 0x206fb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_206fb8:
    // 0x206fb8: 0x31880
    ctx->pc = 0x206fb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_206fbc:
    // 0x206fbc: 0x248403c0
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 960));
label_206fc0:
    // 0x206fc0: 0x641821
    ctx->pc = 0x206fc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_206fc4:
    // 0x206fc4: 0x8c630000
    ctx->pc = 0x206fc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_206fc8:
    // 0x206fc8: 0x600008
label_206fcc:
    if (ctx->pc == 0x206FCCu) {
        ctx->pc = 0x206FD0u;
        goto label_206fd0;
    }
    ctx->pc = 0x206FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206F70u: goto label_206f70;
            case 0x206F74u: goto label_206f74;
            case 0x206F78u: goto label_206f78;
            case 0x206F7Cu: goto label_206f7c;
            case 0x206F80u: goto label_206f80;
            case 0x206F84u: goto label_206f84;
            case 0x206F88u: goto label_206f88;
            case 0x206F8Cu: goto label_206f8c;
            case 0x206F90u: goto label_206f90;
            case 0x206F94u: goto label_206f94;
            case 0x206F98u: goto label_206f98;
            case 0x206F9Cu: goto label_206f9c;
            case 0x206FA0u: goto label_206fa0;
            case 0x206FA4u: goto label_206fa4;
            case 0x206FA8u: goto label_206fa8;
            case 0x206FACu: goto label_206fac;
            case 0x206FB0u: goto label_206fb0;
            case 0x206FB4u: goto label_206fb4;
            case 0x206FB8u: goto label_206fb8;
            case 0x206FBCu: goto label_206fbc;
            case 0x206FC0u: goto label_206fc0;
            case 0x206FC4u: goto label_206fc4;
            case 0x206FC8u: goto label_206fc8;
            case 0x206FCCu: goto label_206fcc;
            case 0x206FD0u: goto label_206fd0;
            case 0x206FD4u: goto label_206fd4;
            case 0x206FD8u: goto label_206fd8;
            case 0x206FDCu: goto label_206fdc;
            case 0x206FE0u: goto label_206fe0;
            case 0x206FE4u: goto label_206fe4;
            case 0x206FE8u: goto label_206fe8;
            case 0x206FECu: goto label_206fec;
            case 0x206FF0u: goto label_206ff0;
            case 0x206FF4u: goto label_206ff4;
            case 0x206FF8u: goto label_206ff8;
            case 0x206FFCu: goto label_206ffc;
            case 0x207000u: goto label_207000;
            case 0x207004u: goto label_207004;
            case 0x207008u: goto label_207008;
            case 0x20700Cu: goto label_20700c;
            case 0x207010u: goto label_207010;
            case 0x207014u: goto label_207014;
            case 0x207018u: goto label_207018;
            case 0x20701Cu: goto label_20701c;
            case 0x207020u: goto label_207020;
            case 0x207024u: goto label_207024;
            case 0x207028u: goto label_207028;
            case 0x20702Cu: goto label_20702c;
            case 0x207030u: goto label_207030;
            case 0x207034u: goto label_207034;
            case 0x207038u: goto label_207038;
            case 0x20703Cu: goto label_20703c;
            case 0x207040u: goto label_207040;
            case 0x207044u: goto label_207044;
            case 0x207048u: goto label_207048;
            case 0x20704Cu: goto label_20704c;
            case 0x207050u: goto label_207050;
            case 0x207054u: goto label_207054;
            case 0x207058u: goto label_207058;
            case 0x20705Cu: goto label_20705c;
            case 0x207060u: goto label_207060;
            case 0x207064u: goto label_207064;
            case 0x207068u: goto label_207068;
            case 0x20706Cu: goto label_20706c;
            case 0x207070u: goto label_207070;
            case 0x207074u: goto label_207074;
            case 0x207078u: goto label_207078;
            case 0x20707Cu: goto label_20707c;
            case 0x207080u: goto label_207080;
            case 0x207084u: goto label_207084;
            case 0x207088u: goto label_207088;
            case 0x20708Cu: goto label_20708c;
            case 0x207090u: goto label_207090;
            case 0x207094u: goto label_207094;
            case 0x207098u: goto label_207098;
            case 0x20709Cu: goto label_20709c;
            case 0x2070A0u: goto label_2070a0;
            case 0x2070A4u: goto label_2070a4;
            case 0x2070A8u: goto label_2070a8;
            case 0x2070ACu: goto label_2070ac;
            case 0x2070B0u: goto label_2070b0;
            case 0x2070B4u: goto label_2070b4;
            case 0x2070B8u: goto label_2070b8;
            case 0x2070BCu: goto label_2070bc;
            case 0x2070C0u: goto label_2070c0;
            case 0x2070C4u: goto label_2070c4;
            case 0x2070C8u: goto label_2070c8;
            case 0x2070CCu: goto label_2070cc;
            case 0x2070D0u: goto label_2070d0;
            case 0x2070D4u: goto label_2070d4;
            case 0x2070D8u: goto label_2070d8;
            case 0x2070DCu: goto label_2070dc;
            case 0x2070E0u: goto label_2070e0;
            case 0x2070E4u: goto label_2070e4;
            case 0x2070E8u: goto label_2070e8;
            case 0x2070ECu: goto label_2070ec;
            case 0x2070F0u: goto label_2070f0;
            case 0x2070F4u: goto label_2070f4;
            case 0x2070F8u: goto label_2070f8;
            case 0x2070FCu: goto label_2070fc;
            case 0x207100u: goto label_207100;
            case 0x207104u: goto label_207104;
            case 0x207108u: goto label_207108;
            case 0x20710Cu: goto label_20710c;
            case 0x207110u: goto label_207110;
            case 0x207114u: goto label_207114;
            case 0x207118u: goto label_207118;
            case 0x20711Cu: goto label_20711c;
            case 0x207120u: goto label_207120;
            case 0x207124u: goto label_207124;
            case 0x207128u: goto label_207128;
            case 0x20712Cu: goto label_20712c;
            case 0x207130u: goto label_207130;
            case 0x207134u: goto label_207134;
            case 0x207138u: goto label_207138;
            case 0x20713Cu: goto label_20713c;
            case 0x207140u: goto label_207140;
            case 0x207144u: goto label_207144;
            case 0x207148u: goto label_207148;
            case 0x20714Cu: goto label_20714c;
            case 0x207150u: goto label_207150;
            case 0x207154u: goto label_207154;
            case 0x207158u: goto label_207158;
            case 0x20715Cu: goto label_20715c;
            case 0x207160u: goto label_207160;
            case 0x207164u: goto label_207164;
            case 0x207168u: goto label_207168;
            case 0x20716Cu: goto label_20716c;
            case 0x207170u: goto label_207170;
            case 0x207174u: goto label_207174;
            case 0x207178u: goto label_207178;
            case 0x20717Cu: goto label_20717c;
            case 0x207180u: goto label_207180;
            case 0x207184u: goto label_207184;
            case 0x207188u: goto label_207188;
            case 0x20718Cu: goto label_20718c;
            case 0x207190u: goto label_207190;
            case 0x207194u: goto label_207194;
            case 0x207198u: goto label_207198;
            case 0x20719Cu: goto label_20719c;
            case 0x2071A0u: goto label_2071a0;
            case 0x2071A4u: goto label_2071a4;
            case 0x2071A8u: goto label_2071a8;
            case 0x2071ACu: goto label_2071ac;
            case 0x2071B0u: goto label_2071b0;
            case 0x2071B4u: goto label_2071b4;
            case 0x2071B8u: goto label_2071b8;
            case 0x2071BCu: goto label_2071bc;
            case 0x2071C0u: goto label_2071c0;
            case 0x2071C4u: goto label_2071c4;
            case 0x2071C8u: goto label_2071c8;
            case 0x2071CCu: goto label_2071cc;
            case 0x2071D0u: goto label_2071d0;
            case 0x2071D4u: goto label_2071d4;
            case 0x2071D8u: goto label_2071d8;
            case 0x2071DCu: goto label_2071dc;
            case 0x2071E0u: goto label_2071e0;
            case 0x2071E4u: goto label_2071e4;
            case 0x2071E8u: goto label_2071e8;
            case 0x2071ECu: goto label_2071ec;
            case 0x2071F0u: goto label_2071f0;
            case 0x2071F4u: goto label_2071f4;
            case 0x2071F8u: goto label_2071f8;
            case 0x2071FCu: goto label_2071fc;
            case 0x207200u: goto label_207200;
            case 0x207204u: goto label_207204;
            case 0x207208u: goto label_207208;
            case 0x20720Cu: goto label_20720c;
            case 0x207210u: goto label_207210;
            case 0x207214u: goto label_207214;
            case 0x207218u: goto label_207218;
            case 0x20721Cu: goto label_20721c;
            case 0x207220u: goto label_207220;
            case 0x207224u: goto label_207224;
            case 0x207228u: goto label_207228;
            case 0x20722Cu: goto label_20722c;
            case 0x207230u: goto label_207230;
            case 0x207234u: goto label_207234;
            case 0x207238u: goto label_207238;
            case 0x20723Cu: goto label_20723c;
            case 0x207240u: goto label_207240;
            case 0x207244u: goto label_207244;
            case 0x207248u: goto label_207248;
            case 0x20724Cu: goto label_20724c;
            case 0x207250u: goto label_207250;
            case 0x207254u: goto label_207254;
            case 0x207258u: goto label_207258;
            case 0x20725Cu: goto label_20725c;
            case 0x207260u: goto label_207260;
            case 0x207264u: goto label_207264;
            case 0x207268u: goto label_207268;
            case 0x20726Cu: goto label_20726c;
            case 0x207270u: goto label_207270;
            case 0x207274u: goto label_207274;
            case 0x207278u: goto label_207278;
            case 0x20727Cu: goto label_20727c;
            case 0x207280u: goto label_207280;
            case 0x207284u: goto label_207284;
            case 0x207288u: goto label_207288;
            case 0x20728Cu: goto label_20728c;
            case 0x207290u: goto label_207290;
            case 0x207294u: goto label_207294;
            case 0x207298u: goto label_207298;
            case 0x20729Cu: goto label_20729c;
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206FD0u;
label_206fd0:
    // 0x206fd0: 0x8e851db0
    ctx->pc = 0x206fd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 7600)));
label_206fd4:
    // 0x206fd4: 0x3c030027
    ctx->pc = 0x206fd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
label_206fd8:
    // 0x206fd8: 0x24642908
    ctx->pc = 0x206fd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 10504));
label_206fdc:
    // 0x206fdc: 0x82831e01
    ctx->pc = 0x206fdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 7681)));
label_206fe0:
    // 0x206fe0: 0xc6800044
    ctx->pc = 0x206fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206fe4:
    // 0x206fe4: 0x52880
    ctx->pc = 0x206fe4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_206fe8:
    // 0x206fe8: 0x852021
    ctx->pc = 0x206fe8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_206fec:
    // 0x206fec: 0x8c840000
    ctx->pc = 0x206fecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206ff0:
    // 0x206ff0: 0x31880
    ctx->pc = 0x206ff0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_206ff4:
    // 0x206ff4: 0x641821
    ctx->pc = 0x206ff4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_206ff8:
    // 0x206ff8: 0x8463fffe
    ctx->pc = 0x206ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
label_206ffc:
    // 0x206ffc: 0x44830800
    ctx->pc = 0x206ffcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_207000:
    // 0x207000: 0x0
    ctx->pc = 0x207000u;
    // NOP
label_207004:
    // 0x207004: 0x46800860
    ctx->pc = 0x207004u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_207008:
    // 0x207008: 0x46010034
    ctx->pc = 0x207008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20700c:
    // 0x20700c: 0x0
    ctx->pc = 0x20700cu;
    // NOP
label_207010:
    // 0x207010: 0x45010007
label_207014:
    if (ctx->pc == 0x207014u) {
        ctx->pc = 0x207014u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        ctx->pc = 0x207018u;
        goto label_207018;
    }
    ctx->pc = 0x207010u;
    {
        const bool branch_taken_0x207010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207014u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        if (branch_taken_0x207010) {
            ctx->pc = 0x207030u;
            goto label_207030;
        }
    }
    ctx->pc = 0x207018u;
label_207018:
    // 0x207018: 0xae831d78
    ctx->pc = 0x207018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7544), GPR_U32(ctx, 3));
label_20701c:
    // 0x20701c: 0x24030001
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_207020:
    // 0x207020: 0xae831db8
    ctx->pc = 0x207020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
label_207024:
    // 0x207024: 0x8e831d74
    ctx->pc = 0x207024u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7540)));
label_207028:
    // 0x207028: 0x34630010
    ctx->pc = 0x207028u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
label_20702c:
    // 0x20702c: 0xae831d74
    ctx->pc = 0x20702cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7540), GPR_U32(ctx, 3));
label_207030:
    // 0x207030: 0x8e830030
    ctx->pc = 0x207030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_207034:
    // 0x207034: 0xc461000c
    ctx->pc = 0x207034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207038:
    // 0x207038: 0xc4600000
    ctx->pc = 0x207038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20703c:
    // 0x20703c: 0x46010000
    ctx->pc = 0x20703cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_207040:
    // 0x207040: 0xe4600000
    ctx->pc = 0x207040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_207044:
    // 0x207044: 0x8e830030
    ctx->pc = 0x207044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_207048:
    // 0x207048: 0xc4610014
    ctx->pc = 0x207048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20704c:
    // 0x20704c: 0xc4600008
    ctx->pc = 0x20704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207050:
    // 0x207050: 0x46010000
    ctx->pc = 0x207050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_207054:
    // 0x207054: 0x100001cb
label_207058:
    if (ctx->pc == 0x207058u) {
        ctx->pc = 0x207058u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->pc = 0x20705Cu;
        goto label_20705c;
    }
    ctx->pc = 0x207054u;
    {
        const bool branch_taken_0x207054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207058u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        if (branch_taken_0x207054) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x20705Cu;
label_20705c:
    // 0x20705c: 0xc6811d78
    ctx->pc = 0x20705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207060:
    // 0x207060: 0x44801000
    ctx->pc = 0x207060u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_207064:
    // 0x207064: 0x0
    ctx->pc = 0x207064u;
    // NOP
label_207068:
    // 0x207068: 0x46020836
    ctx->pc = 0x207068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20706c:
    // 0x20706c: 0x0
    ctx->pc = 0x20706cu;
    // NOP
label_207070:
    // 0x207070: 0x4501000b
label_207074:
    if (ctx->pc == 0x207074u) {
        ctx->pc = 0x207074u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15523 << 16));
        ctx->pc = 0x207078u;
        goto label_207078;
    }
    ctx->pc = 0x207070u;
    {
        const bool branch_taken_0x207070 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207074u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15523 << 16));
        if (branch_taken_0x207070) {
            ctx->pc = 0x2070A0u;
            goto label_2070a0;
        }
    }
    ctx->pc = 0x207078u;
label_207078:
    // 0x207078: 0x3463d706
    ctx->pc = 0x207078u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55046));
label_20707c:
    // 0x20707c: 0x44830000
    ctx->pc = 0x20707cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_207080:
    // 0x207080: 0x0
    ctx->pc = 0x207080u;
    // NOP
label_207084:
    // 0x207084: 0x46000801
    ctx->pc = 0x207084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_207088:
    // 0x207088: 0x46020034
    ctx->pc = 0x207088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20708c:
    // 0x20708c: 0x0
    ctx->pc = 0x20708cu;
    // NOP
label_207090:
    // 0x207090: 0x450001bc
label_207094:
    if (ctx->pc == 0x207094u) {
        ctx->pc = 0x207094u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        ctx->pc = 0x207098u;
        goto label_207098;
    }
    ctx->pc = 0x207090u;
    {
        const bool branch_taken_0x207090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207094u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        if (branch_taken_0x207090) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207098u;
label_207098:
    // 0x207098: 0x100001ba
label_20709c:
    if (ctx->pc == 0x20709Cu) {
        ctx->pc = 0x20709Cu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        ctx->pc = 0x2070A0u;
        goto label_2070a0;
    }
    ctx->pc = 0x207098u;
    {
        const bool branch_taken_0x207098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20709Cu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        if (branch_taken_0x207098) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x2070A0u;
label_2070a0:
    // 0x2070a0: 0x8e881d70
    ctx->pc = 0x2070a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 7536)));
label_2070a4:
    // 0x2070a4: 0x24041e40
    ctx->pc = 0x2070a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7744));
label_2070a8:
    // 0x2070a8: 0x8d060010
    ctx->pc = 0x2070a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_2070ac:
    // 0x2070ac: 0x8cc70014
    ctx->pc = 0x2070acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2070b0:
    // 0x2070b0: 0xc069040
label_2070b4:
    if (ctx->pc == 0x2070B4u) {
        ctx->pc = 0x2070B4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2070B8u;
        goto label_2070b8;
    }
    ctx->pc = 0x2070B0u;
    SET_GPR_U32(ctx, 31, 0x2070B8u);
    ctx->pc = 0x2070B4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2070B8u; }
        else if (ctx->pc != 0x2070B8u) { ctx->pc = 0x2070B8u; }
    }
    if (ctx->pc != 0x2070B8u) { return; }
    ctx->pc = 0x2070B8u;
label_2070b8:
    // 0x2070b8: 0x70402628
    ctx->pc = 0x2070b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2070bc:
    // 0x2070bc: 0x10800004
label_2070c0:
    if (ctx->pc == 0x2070C0u) {
        ctx->pc = 0x2070C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2070C4u;
        goto label_2070c4;
    }
    ctx->pc = 0x2070BCu;
    {
        const bool branch_taken_0x2070bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2070C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2070bc) {
            ctx->pc = 0x2070D0u;
            goto label_2070d0;
        }
    }
    ctx->pc = 0x2070C4u;
label_2070c4:
    // 0x2070c4: 0xc083464
label_2070c8:
    if (ctx->pc == 0x2070C8u) {
        ctx->pc = 0x2070C8u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2070CCu;
        goto label_2070cc;
    }
    ctx->pc = 0x2070C4u;
    SET_GPR_U32(ctx, 31, 0x2070CCu);
    ctx->pc = 0x2070C8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10ErsPplTaskFP10PeopleTask_0x20d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2070CCu; }
        else if (ctx->pc != 0x2070CCu) { ctx->pc = 0x2070CCu; }
    }
    if (ctx->pc != 0x2070CCu) { return; }
    ctx->pc = 0x2070CCu;
label_2070cc:
    // 0x2070cc: 0x70402628
    ctx->pc = 0x2070ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2070d0:
    // 0x2070d0: 0xae841e70
    ctx->pc = 0x2070d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7792), GPR_U32(ctx, 4));
label_2070d4:
    // 0x2070d4: 0x3c033f80
    ctx->pc = 0x2070d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_2070d8:
    // 0x2070d8: 0xae831d78
    ctx->pc = 0x2070d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7544), GPR_U32(ctx, 3));
label_2070dc:
    // 0x2070dc: 0x24030002
    ctx->pc = 0x2070dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2070e0:
    // 0x2070e0: 0x100001a8
label_2070e4:
    if (ctx->pc == 0x2070E4u) {
        ctx->pc = 0x2070E4u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
        ctx->pc = 0x2070E8u;
        goto label_2070e8;
    }
    ctx->pc = 0x2070E0u;
    {
        const bool branch_taken_0x2070e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2070E4u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
        if (branch_taken_0x2070e0) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x2070E8u;
label_2070e8:
    // 0x2070e8: 0xc6821d78
    ctx->pc = 0x2070e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2070ec:
    // 0x2070ec: 0x3c033ca3
    ctx->pc = 0x2070ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15523 << 16));
label_2070f0:
    // 0x2070f0: 0x3463d706
    ctx->pc = 0x2070f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55046));
label_2070f4:
    // 0x2070f4: 0x44830800
    ctx->pc = 0x2070f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2070f8:
    // 0x2070f8: 0x3c033f00
    ctx->pc = 0x2070f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
label_2070fc:
    // 0x2070fc: 0x46011041
    ctx->pc = 0x2070fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_207100:
    // 0x207100: 0x44830000
    ctx->pc = 0x207100u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_207104:
    // 0x207104: 0x0
    ctx->pc = 0x207104u;
    // NOP
label_207108:
    // 0x207108: 0x46000836
    ctx->pc = 0x207108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20710c:
    // 0x20710c: 0x0
    ctx->pc = 0x20710cu;
    // NOP
label_207110:
    // 0x207110: 0x4500019c
label_207114:
    if (ctx->pc == 0x207114u) {
        ctx->pc = 0x207114u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        ctx->pc = 0x207118u;
        goto label_207118;
    }
    ctx->pc = 0x207110u;
    {
        const bool branch_taken_0x207110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207114u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        if (branch_taken_0x207110) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207118u;
label_207118:
    // 0x207118: 0xc6800044
    ctx->pc = 0x207118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20711c:
    // 0x20711c: 0x8683005c
    ctx->pc = 0x20711cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 92)));
label_207120:
    // 0x207120: 0x8e821e70
    ctx->pc = 0x207120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7792)));
label_207124:
    // 0x207124: 0x46000024
    ctx->pc = 0x207124u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_207128:
    // 0x207128: 0xa443005c
    ctx->pc = 0x207128u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
label_20712c:
    // 0x20712c: 0x8e821e70
    ctx->pc = 0x20712cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7792)));
label_207130:
    // 0x207130: 0x44160000
    ctx->pc = 0x207130u;
    SET_GPR_U32(ctx, 22, *(uint32_t*)&ctx->f[0]);
label_207134:
    // 0x207134: 0x70403628
    ctx->pc = 0x207134u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_207138:
    // 0x207138: 0x10c00003
label_20713c:
    if (ctx->pc == 0x20713Cu) {
        ctx->pc = 0x20713Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207140u;
        goto label_207140;
    }
    ctx->pc = 0x207138u;
    {
        const bool branch_taken_0x207138 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x20713Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207138) {
            ctx->pc = 0x207148u;
            goto label_207148;
        }
    }
    ctx->pc = 0x207140u;
label_207140:
    // 0x207140: 0x8cc60030
    ctx->pc = 0x207140u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_207144:
    // 0x207144: 0x0
    ctx->pc = 0x207144u;
    // NOP
label_207148:
    // 0x207148: 0x10400002
label_20714c:
    if (ctx->pc == 0x20714Cu) {
        ctx->pc = 0x20714Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x207150u;
        goto label_207150;
    }
    ctx->pc = 0x207148u;
    {
        const bool branch_taken_0x207148 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20714Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 160));
        if (branch_taken_0x207148) {
            ctx->pc = 0x207154u;
            goto label_207154;
        }
    }
    ctx->pc = 0x207150u;
label_207150:
    // 0x207150: 0x24a50030
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207154:
    // 0x207154: 0x3c02004a
    ctx->pc = 0x207154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207158:
    // 0x207158: 0xc07e3a0
label_20715c:
    if (ctx->pc == 0x20715Cu) {
        ctx->pc = 0x20715Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
        ctx->pc = 0x207160u;
        goto label_207160;
    }
    ctx->pc = 0x207158u;
    SET_GPR_U32(ctx, 31, 0x207160u);
    ctx->pc = 0x20715Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    ctx->pc = 0x1F8E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1f8e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207160u; }
        else if (ctx->pc != 0x207160u) { ctx->pc = 0x207160u; }
    }
    if (ctx->pc != 0x207160u) { return; }
    ctx->pc = 0x207160u;
label_207160:
    // 0x207160: 0x12c0000d
label_207164:
    if (ctx->pc == 0x207164u) {
        ctx->pc = 0x207164u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207168u;
        goto label_207168;
    }
    ctx->pc = 0x207160u;
    {
        const bool branch_taken_0x207160 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x207164u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x207160) {
            ctx->pc = 0x207198u;
            goto label_207198;
        }
    }
    ctx->pc = 0x207168u;
label_207168:
    // 0x207168: 0x8e821e70
    ctx->pc = 0x207168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7792)));
label_20716c:
    // 0x20716c: 0x70402e28
    ctx->pc = 0x20716cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_207170:
    // 0x207170: 0x10a00002
label_207174:
    if (ctx->pc == 0x207174u) {
        ctx->pc = 0x207178u;
        goto label_207178;
    }
    ctx->pc = 0x207170u;
    {
        const bool branch_taken_0x207170 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x207170) {
            ctx->pc = 0x20717Cu;
            goto label_20717c;
        }
    }
    ctx->pc = 0x207178u;
label_207178:
    // 0x207178: 0x24a50030
    ctx->pc = 0x207178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20717c:
    // 0x20717c: 0x8c460034
    ctx->pc = 0x20717cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_207180:
    // 0x207180: 0x72c03e28
    ctx->pc = 0x207180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_207184:
    // 0x207184: 0x70004628
    ctx->pc = 0x207184u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207188:
    // 0x207188: 0x3c02004a
    ctx->pc = 0x207188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_20718c:
    // 0x20718c: 0xc07eabc
label_207190:
    if (ctx->pc == 0x207190u) {
        ctx->pc = 0x207190u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
        ctx->pc = 0x207194u;
        goto label_207194;
    }
    ctx->pc = 0x20718Cu;
    SET_GPR_U32(ctx, 31, 0x207194u);
    ctx->pc = 0x207190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207194u; }
        else if (ctx->pc != 0x207194u) { ctx->pc = 0x207194u; }
    }
    if (ctx->pc != 0x207194u) { return; }
    ctx->pc = 0x207194u;
label_207194:
    // 0x207194: 0x24100001
    ctx->pc = 0x207194u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_207198:
    // 0x207198: 0x241200f0
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 240));
label_20719c:
    // 0x20719c: 0x8e821e70
    ctx->pc = 0x20719cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7792)));
label_2071a0:
    // 0x2071a0: 0x521021
    ctx->pc = 0x2071a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2071a4:
    // 0x2071a4: 0x8c440164
    ctx->pc = 0x2071a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 356)));
label_2071a8:
    // 0x2071a8: 0x10800003
label_2071ac:
    if (ctx->pc == 0x2071ACu) {
        ctx->pc = 0x2071ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x2071B0u;
        goto label_2071b0;
    }
    ctx->pc = 0x2071A8u;
    {
        const bool branch_taken_0x2071a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2071ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 160));
        if (branch_taken_0x2071a8) {
            ctx->pc = 0x2071B8u;
            goto label_2071b8;
        }
    }
    ctx->pc = 0x2071B0u;
label_2071b0:
    // 0x2071b0: 0xc0687c0
label_2071b4:
    if (ctx->pc == 0x2071B4u) {
        ctx->pc = 0x2071B8u;
        goto label_2071b8;
    }
    ctx->pc = 0x2071B0u;
    SET_GPR_U32(ctx, 31, 0x2071B8u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071B8u; }
        else if (ctx->pc != 0x2071B8u) { ctx->pc = 0x2071B8u; }
    }
    if (ctx->pc != 0x2071B8u) { return; }
    ctx->pc = 0x2071B8u;
label_2071b8:
    // 0x2071b8: 0x8e2200b4
    ctx->pc = 0x2071b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2071bc:
    // 0x2071bc: 0x30424000
    ctx->pc = 0x2071bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_2071c0:
    // 0x2071c0: 0x1040000d
label_2071c4:
    if (ctx->pc == 0x2071C4u) {
        ctx->pc = 0x2071C8u;
        goto label_2071c8;
    }
    ctx->pc = 0x2071C0u;
    {
        const bool branch_taken_0x2071c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2071c0) {
            ctx->pc = 0x2071F8u;
            goto label_2071f8;
        }
    }
    ctx->pc = 0x2071C8u;
label_2071c8:
    // 0x2071c8: 0x8e230000
    ctx->pc = 0x2071c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2071cc:
    // 0x2071cc: 0x2402038e
    ctx->pc = 0x2071ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 910));
label_2071d0:
    // 0x2071d0: 0x14620003
label_2071d4:
    if (ctx->pc == 0x2071D4u) {
        ctx->pc = 0x2071D8u;
        goto label_2071d8;
    }
    ctx->pc = 0x2071D0u;
    {
        const bool branch_taken_0x2071d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2071d0) {
            ctx->pc = 0x2071E0u;
            goto label_2071e0;
        }
    }
    ctx->pc = 0x2071D8u;
label_2071d8:
    // 0x2071d8: 0x10000009
label_2071dc:
    if (ctx->pc == 0x2071DCu) {
        ctx->pc = 0x2071DCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2071E0u;
        goto label_2071e0;
    }
    ctx->pc = 0x2071D8u;
    {
        const bool branch_taken_0x2071d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2071DCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2071d8) {
            ctx->pc = 0x207200u;
            goto label_207200;
        }
    }
    ctx->pc = 0x2071E0u;
label_2071e0:
    // 0x2071e0: 0x3c020027
    ctx->pc = 0x2071e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2071e4:
    // 0x2071e4: 0x31880
    ctx->pc = 0x2071e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2071e8:
    // 0x2071e8: 0x2442cfb0
    ctx->pc = 0x2071e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954928));
label_2071ec:
    // 0x2071ec: 0x431021
    ctx->pc = 0x2071ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2071f0:
    // 0x2071f0: 0x10000003
label_2071f4:
    if (ctx->pc == 0x2071F4u) {
        ctx->pc = 0x2071F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2071F8u;
        goto label_2071f8;
    }
    ctx->pc = 0x2071F0u;
    {
        const bool branch_taken_0x2071f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2071F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x2071f0) {
            ctx->pc = 0x207200u;
            goto label_207200;
        }
    }
    ctx->pc = 0x2071F8u;
label_2071f8:
    // 0x2071f8: 0x8e240000
    ctx->pc = 0x2071f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2071fc:
    // 0x2071fc: 0x0
    ctx->pc = 0x2071fcu;
    // NOP
label_207200:
    // 0x207200: 0x41403
    ctx->pc = 0x207200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
label_207204:
    // 0x207204: 0x3403ffff
    ctx->pc = 0x207204u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
label_207208:
    // 0x207208: 0x431024
    ctx->pc = 0x207208u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20720c:
    // 0x20720c: 0x21900
    ctx->pc = 0x20720cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
label_207210:
    // 0x207210: 0x3c020050
    ctx->pc = 0x207210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_207214:
    // 0x207214: 0x2442ea20
    ctx->pc = 0x207214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
label_207218:
    // 0x207218: 0x432821
    ctx->pc = 0x207218u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20721c:
    // 0x20721c: 0x8ca30000
    ctx->pc = 0x20721cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207220:
    // 0x207220: 0x3c028000
    ctx->pc = 0x207220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_207224:
    // 0x207224: 0x621024
    ctx->pc = 0x207224u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207228:
    // 0x207228: 0x10400017
label_20722c:
    if (ctx->pc == 0x20722Cu) {
        ctx->pc = 0x207230u;
        goto label_207230;
    }
    ctx->pc = 0x207228u;
    {
        const bool branch_taken_0x207228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x207228) {
            ctx->pc = 0x207288u;
            goto label_207288;
        }
    }
    ctx->pc = 0x207230u;
label_207230:
    // 0x207230: 0x10800015
label_207234:
    if (ctx->pc == 0x207234u) {
        ctx->pc = 0x207238u;
        goto label_207238;
    }
    ctx->pc = 0x207230u;
    {
        const bool branch_taken_0x207230 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x207230) {
            ctx->pc = 0x207288u;
            goto label_207288;
        }
    }
    ctx->pc = 0x207238u;
label_207238:
    // 0x207238: 0x8ca20004
    ctx->pc = 0x207238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20723c:
    // 0x20723c: 0x3084ffff
    ctx->pc = 0x20723cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
label_207240:
    // 0x207240: 0x41840
    ctx->pc = 0x207240u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_207244:
    // 0x207244: 0x641821
    ctx->pc = 0x207244u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_207248:
    // 0x207248: 0x39880
    ctx->pc = 0x207248u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 3), 2));
label_20724c:
    // 0x20724c: 0x531021
    ctx->pc = 0x20724cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_207250:
    // 0x207250: 0x8c440000
    ctx->pc = 0x207250u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207254:
    // 0x207254: 0xc06ab94
label_207258:
    if (ctx->pc == 0x207258u) {
        ctx->pc = 0x207258u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x20725Cu;
        goto label_20725c;
    }
    ctx->pc = 0x207254u;
    SET_GPR_U32(ctx, 31, 0x20725Cu);
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x1AAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjSize_0x1aae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20725Cu; }
        else if (ctx->pc != 0x20725Cu) { ctx->pc = 0x20725Cu; }
    }
    if (ctx->pc != 0x20725Cu) { return; }
    ctx->pc = 0x20725Cu;
label_20725c:
    // 0x20725c: 0x8e841d70
    ctx->pc = 0x20725cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7536)));
label_207260:
    // 0x207260: 0xc068f10
label_207264:
    if (ctx->pc == 0x207264u) {
        ctx->pc = 0x207264u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207268u;
        goto label_207268;
    }
    ctx->pc = 0x207260u;
    SET_GPR_U32(ctx, 31, 0x207268u);
    ctx->pc = 0x207264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc2__11SystemTask2Fi_0x1a3c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207268u; }
        else if (ctx->pc != 0x207268u) { ctx->pc = 0x207268u; }
    }
    if (ctx->pc != 0x207268u) { return; }
    ctx->pc = 0x207268u;
label_207268:
    // 0x207268: 0xae2200c4
    ctx->pc = 0x207268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_20726c:
    // 0x20726c: 0x8ea20000
    ctx->pc = 0x20726cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_207270:
    // 0x207270: 0x531021
    ctx->pc = 0x207270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_207274:
    // 0x207274: 0x8c450000
    ctx->pc = 0x207274u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207278:
    // 0x207278: 0xc06ab98
label_20727c:
    if (ctx->pc == 0x20727Cu) {
        ctx->pc = 0x20727Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->pc = 0x207280u;
        goto label_207280;
    }
    ctx->pc = 0x207278u;
    SET_GPR_U32(ctx, 31, 0x207280u);
    ctx->pc = 0x20727Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->pc = 0x1AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjCopy_0x1aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207280u; }
        else if (ctx->pc != 0x207280u) { ctx->pc = 0x207280u; }
    }
    if (ctx->pc != 0x207280u) { return; }
    ctx->pc = 0x207280u;
label_207280:
    // 0x207280: 0x10000004
label_207284:
    if (ctx->pc == 0x207284u) {
        ctx->pc = 0x207284u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x207288u;
        goto label_207288;
    }
    ctx->pc = 0x207280u;
    {
        const bool branch_taken_0x207280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207284u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x207280) {
            ctx->pc = 0x207294u;
            goto label_207294;
        }
    }
    ctx->pc = 0x207288u;
label_207288:
    // 0x207288: 0xae2000c4
    ctx->pc = 0x207288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_20728c:
    // 0x20728c: 0x0
    ctx->pc = 0x20728cu;
    // NOP
label_207290:
    // 0x207290: 0x26100001
    ctx->pc = 0x207290u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_207294:
    // 0x207294: 0x2a020012
    ctx->pc = 0x207294u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 18));
label_207298:
    // 0x207298: 0x1440ffc0
label_20729c:
    if (ctx->pc == 0x20729Cu) {
        ctx->pc = 0x20729Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x2072A0u;
        goto label_2072a0;
    }
    ctx->pc = 0x207298u;
    {
        const bool branch_taken_0x207298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20729Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x207298) {
            ctx->pc = 0x20719Cu;
            goto label_20719c;
        }
    }
    ctx->pc = 0x2072A0u;
label_2072a0:
    // 0x2072a0: 0x8e821de8
    ctx->pc = 0x2072a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7656)));
label_2072a4:
    // 0x2072a4: 0x72803628
    ctx->pc = 0x2072a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_2072a8:
    // 0x2072a8: 0x84420008
    ctx->pc = 0x2072a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2072ac:
    // 0x2072ac: 0x12800003
label_2072b0:
    if (ctx->pc == 0x2072B0u) {
        ctx->pc = 0x2072B0u;
        WRITE16(ADD32(GPR_U32(ctx, 20), 92), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2072B4u;
        goto label_2072b4;
    }
    ctx->pc = 0x2072ACu;
    {
        const bool branch_taken_0x2072ac = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2072B0u;
        WRITE16(ADD32(GPR_U32(ctx, 20), 92), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2072ac) {
            ctx->pc = 0x2072BCu;
            goto label_2072bc;
        }
    }
    ctx->pc = 0x2072B4u;
label_2072b4:
    // 0x2072b4: 0x8e860030
    ctx->pc = 0x2072b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2072b8:
    // 0x2072b8: 0x0
    ctx->pc = 0x2072b8u;
    // NOP
label_2072bc:
    // 0x2072bc: 0x12800002
label_2072c0:
    if (ctx->pc == 0x2072C0u) {
        ctx->pc = 0x2072C0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2072C4u;
        goto label_2072c4;
    }
    ctx->pc = 0x2072BCu;
    {
        const bool branch_taken_0x2072bc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2072C0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2072bc) {
            ctx->pc = 0x2072C8u;
            goto label_2072c8;
        }
    }
    ctx->pc = 0x2072C4u;
label_2072c4:
    // 0x2072c4: 0x24a50030
    ctx->pc = 0x2072c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_2072c8:
    // 0x2072c8: 0x3c02004a
    ctx->pc = 0x2072c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_2072cc:
    // 0x2072cc: 0x2444e8e0
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_2072d0:
    // 0x2072d0: 0xc07e3a0
label_2072d4:
    if (ctx->pc == 0x2072D4u) {
        ctx->pc = 0x2072D4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 20), 160));
        ctx->pc = 0x2072D8u;
        goto label_2072d8;
    }
    ctx->pc = 0x2072D0u;
    SET_GPR_U32(ctx, 31, 0x2072D8u);
    ctx->pc = 0x2072D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 20), 160));
    ctx->pc = 0x1F8E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1f8e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2072D8u; }
        else if (ctx->pc != 0x2072D8u) { ctx->pc = 0x2072D8u; }
    }
    if (ctx->pc != 0x2072D8u) { return; }
    ctx->pc = 0x2072D8u;
label_2072d8:
    // 0x2072d8: 0x12c0000b
label_2072dc:
    if (ctx->pc == 0x2072DCu) {
        ctx->pc = 0x2072DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2072E0u;
        goto label_2072e0;
    }
    ctx->pc = 0x2072D8u;
    {
        const bool branch_taken_0x2072d8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x2072DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2072d8) {
            ctx->pc = 0x207308u;
            goto label_207308;
        }
    }
    ctx->pc = 0x2072E0u;
label_2072e0:
    // 0x2072e0: 0x12800002
label_2072e4:
    if (ctx->pc == 0x2072E4u) {
        ctx->pc = 0x2072E4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2072E8u;
        goto label_2072e8;
    }
    ctx->pc = 0x2072E0u;
    {
        const bool branch_taken_0x2072e0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2072E4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2072e0) {
            ctx->pc = 0x2072ECu;
            goto label_2072ec;
        }
    }
    ctx->pc = 0x2072E8u;
label_2072e8:
    // 0x2072e8: 0x24a50030
    ctx->pc = 0x2072e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_2072ec:
    // 0x2072ec: 0x8e860034
    ctx->pc = 0x2072ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_2072f0:
    // 0x2072f0: 0x3c02004a
    ctx->pc = 0x2072f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_2072f4:
    // 0x2072f4: 0x72c03e28
    ctx->pc = 0x2072f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_2072f8:
    // 0x2072f8: 0x2444e8e0
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_2072fc:
    // 0x2072fc: 0xc07eabc
label_207300:
    if (ctx->pc == 0x207300u) {
        ctx->pc = 0x207300u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207304u;
        goto label_207304;
    }
    ctx->pc = 0x2072FCu;
    SET_GPR_U32(ctx, 31, 0x207304u);
    ctx->pc = 0x207300u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207304u; }
        else if (ctx->pc != 0x207304u) { ctx->pc = 0x207304u; }
    }
    if (ctx->pc != 0x207304u) { return; }
    ctx->pc = 0x207304u;
label_207304:
    // 0x207304: 0x24030003
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_207308:
    // 0x207308: 0x1000011e
label_20730c:
    if (ctx->pc == 0x20730Cu) {
        ctx->pc = 0x20730Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
        ctx->pc = 0x207310u;
        goto label_207310;
    }
    ctx->pc = 0x207308u;
    {
        const bool branch_taken_0x207308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20730Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
        if (branch_taken_0x207308) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207310u;
label_207310:
    // 0x207310: 0xc6811d78
    ctx->pc = 0x207310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207314:
    // 0x207314: 0x44801000
    ctx->pc = 0x207314u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_207318:
    // 0x207318: 0x0
    ctx->pc = 0x207318u;
    // NOP
label_20731c:
    // 0x20731c: 0x46020836
    ctx->pc = 0x20731cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207320:
    // 0x207320: 0x0
    ctx->pc = 0x207320u;
    // NOP
label_207324:
    // 0x207324: 0x4501000c
label_207328:
    if (ctx->pc == 0x207328u) {
        ctx->pc = 0x207328u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x20732Cu;
        goto label_20732c;
    }
    ctx->pc = 0x207324u;
    {
        const bool branch_taken_0x207324 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207328u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x207324) {
            ctx->pc = 0x207358u;
            goto label_207358;
        }
    }
    ctx->pc = 0x20732Cu;
label_20732c:
    // 0x20732c: 0x3c033ca3
    ctx->pc = 0x20732cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15523 << 16));
label_207330:
    // 0x207330: 0x3463d706
    ctx->pc = 0x207330u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55046));
label_207334:
    // 0x207334: 0x44830000
    ctx->pc = 0x207334u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_207338:
    // 0x207338: 0x0
    ctx->pc = 0x207338u;
    // NOP
label_20733c:
    // 0x20733c: 0x46000801
    ctx->pc = 0x20733cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_207340:
    // 0x207340: 0x46020034
    ctx->pc = 0x207340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207344:
    // 0x207344: 0x0
    ctx->pc = 0x207344u;
    // NOP
label_207348:
    // 0x207348: 0x4500010e
label_20734c:
    if (ctx->pc == 0x20734Cu) {
        ctx->pc = 0x20734Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        ctx->pc = 0x207350u;
        goto label_207350;
    }
    ctx->pc = 0x207348u;
    {
        const bool branch_taken_0x207348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20734Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        if (branch_taken_0x207348) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207350u;
label_207350:
    // 0x207350: 0x1000010c
label_207354:
    if (ctx->pc == 0x207354u) {
        ctx->pc = 0x207354u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        ctx->pc = 0x207358u;
        goto label_207358;
    }
    ctx->pc = 0x207350u;
    {
        const bool branch_taken_0x207350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x207354u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
        if (branch_taken_0x207350) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207358u;
label_207358:
    // 0x207358: 0x1000010a
label_20735c:
    if (ctx->pc == 0x20735Cu) {
        ctx->pc = 0x20735Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
        ctx->pc = 0x207360u;
        goto label_207360;
    }
    ctx->pc = 0x207358u;
    {
        const bool branch_taken_0x207358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20735Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
        if (branch_taken_0x207358) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207360u;
label_207360:
    // 0x207360: 0x8e831dac
    ctx->pc = 0x207360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7596)));
label_207364:
    // 0x207364: 0x14600107
label_207368:
    if (ctx->pc == 0x207368u) {
        ctx->pc = 0x20736Cu;
        goto label_20736c;
    }
    ctx->pc = 0x207364u;
    {
        const bool branch_taken_0x207364 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x207364) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x20736Cu;
label_20736c:
    // 0x20736c: 0x8e821d74
    ctx->pc = 0x20736cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 7540)));
label_207370:
    // 0x207370: 0x72808628
    ctx->pc = 0x207370u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_207374:
    // 0x207374: 0x34420020
    ctx->pc = 0x207374u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
label_207378:
    // 0x207378: 0x12800002
label_20737c:
    if (ctx->pc == 0x20737Cu) {
        ctx->pc = 0x20737Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7540), GPR_U32(ctx, 2));
        ctx->pc = 0x207380u;
        goto label_207380;
    }
    ctx->pc = 0x207378u;
    {
        const bool branch_taken_0x207378 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x20737Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7540), GPR_U32(ctx, 2));
        if (branch_taken_0x207378) {
            ctx->pc = 0x207384u;
            goto label_207384;
        }
    }
    ctx->pc = 0x207380u;
label_207380:
    // 0x207380: 0x26100030
    ctx->pc = 0x207380u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
label_207384:
    // 0x207384: 0x8e831db0
    ctx->pc = 0x207384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7600)));
label_207388:
    // 0x207388: 0x3c020027
    ctx->pc = 0x207388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_20738c:
    // 0x20738c: 0x244229e8
    ctx->pc = 0x20738cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_207390:
    // 0x207390: 0x72802628
    ctx->pc = 0x207390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_207394:
    // 0x207394: 0x31880
    ctx->pc = 0x207394u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207398:
    // 0x207398: 0x431021
    ctx->pc = 0x207398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20739c:
    // 0x20739c: 0x8c420000
    ctx->pc = 0x20739cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2073a0:
    // 0x2073a0: 0xc0829ac
label_2073a4:
    if (ctx->pc == 0x2073A4u) {
        ctx->pc = 0x2073A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2073A8u;
        goto label_2073a8;
    }
    ctx->pc = 0x2073A0u;
    SET_GPR_U32(ctx, 31, 0x2073A8u);
    ctx->pc = 0x2073A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073A8u; }
        else if (ctx->pc != 0x2073A8u) { ctx->pc = 0x2073A8u; }
    }
    if (ctx->pc != 0x2073A8u) { return; }
    ctx->pc = 0x2073A8u;
label_2073a8:
    // 0x2073a8: 0x2343c
    ctx->pc = 0x2073a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_2073ac:
    // 0x2073ac: 0x3c02004a
    ctx->pc = 0x2073acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_2073b0:
    // 0x2073b0: 0x72002e28
    ctx->pc = 0x2073b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2073b4:
    // 0x2073b4: 0x6343f
    ctx->pc = 0x2073b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_2073b8:
    // 0x2073b8: 0x2444e8e0
    ctx->pc = 0x2073b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_2073bc:
    // 0x2073bc: 0x70003e28
    ctx->pc = 0x2073bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2073c0:
    // 0x2073c0: 0xc07eabc
label_2073c4:
    if (ctx->pc == 0x2073C4u) {
        ctx->pc = 0x2073C4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2073C8u;
        goto label_2073c8;
    }
    ctx->pc = 0x2073C0u;
    SET_GPR_U32(ctx, 31, 0x2073C8u);
    ctx->pc = 0x2073C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073C8u; }
        else if (ctx->pc != 0x2073C8u) { ctx->pc = 0x2073C8u; }
    }
    if (ctx->pc != 0x2073C8u) { return; }
    ctx->pc = 0x2073C8u;
label_2073c8:
    // 0x2073c8: 0x2403fffe
    ctx->pc = 0x2073c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2073cc:
    // 0x2073cc: 0xae831dd0
    ctx->pc = 0x2073ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7632), GPR_U32(ctx, 3));
label_2073d0:
    // 0x2073d0: 0x2403ffff
    ctx->pc = 0x2073d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2073d4:
    // 0x2073d4: 0xae831dac
    ctx->pc = 0x2073d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7596), GPR_U32(ctx, 3));
label_2073d8:
    // 0x2073d8: 0x24030005
    ctx->pc = 0x2073d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_2073dc:
    // 0x2073dc: 0xae831db8
    ctx->pc = 0x2073dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 3));
label_2073e0:
    // 0x2073e0: 0xc6811df8
    ctx->pc = 0x2073e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2073e4:
    // 0x2073e4: 0x3c034220
    ctx->pc = 0x2073e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16928 << 16));
label_2073e8:
    // 0x2073e8: 0x44830000
    ctx->pc = 0x2073e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_2073ec:
    // 0x2073ec: 0x0
    ctx->pc = 0x2073ecu;
    // NOP
label_2073f0:
    // 0x2073f0: 0x46000836
    ctx->pc = 0x2073f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2073f4:
    // 0x2073f4: 0x0
    ctx->pc = 0x2073f4u;
    // NOP
label_2073f8:
    // 0x2073f8: 0x450100e2
label_2073fc:
    if (ctx->pc == 0x2073FCu) {
        ctx->pc = 0x207400u;
        goto label_207400;
    }
    ctx->pc = 0x2073F8u;
    {
        const bool branch_taken_0x2073f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2073f8) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207400u;
label_207400:
    // 0x207400: 0x82821e00
    ctx->pc = 0x207400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 7680)));
label_207404:
    // 0x207404: 0x2404ffff
    ctx->pc = 0x207404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207408:
    // 0x207408: 0x10440005
label_20740c:
    if (ctx->pc == 0x20740Cu) {
        ctx->pc = 0x20740Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x207410u;
        goto label_207410;
    }
    ctx->pc = 0x207408u;
    {
        const bool branch_taken_0x207408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x20740Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x207408) {
            ctx->pc = 0x207420u;
            goto label_207420;
        }
    }
    ctx->pc = 0x207410u;
label_207410:
    // 0x207410: 0x27828b60
    ctx->pc = 0x207410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
label_207414:
    // 0x207414: 0x431021
    ctx->pc = 0x207414u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207418:
    // 0x207418: 0xac400000
    ctx->pc = 0x207418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20741c:
    // 0x20741c: 0xa2841e00
    ctx->pc = 0x20741cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 4));
label_207420:
    // 0x207420: 0x8e86000c
    ctx->pc = 0x207420u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_207424:
    // 0x207424: 0x3c050008
    ctx->pc = 0x207424u;
    SET_GPR_U32(ctx, 5, ((uint32_t)8 << 16));
label_207428:
    // 0x207428: 0x3c020027
    ctx->pc = 0x207428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_20742c:
    // 0x20742c: 0x2403feff
    ctx->pc = 0x20742cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967039));
label_207430:
    // 0x207430: 0x244229e8
    ctx->pc = 0x207430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_207434:
    // 0x207434: 0xc52825
    ctx->pc = 0x207434u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_207438:
    // 0x207438: 0xae85000c
    ctx->pc = 0x207438u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
label_20743c:
    // 0x20743c: 0x8e85000c
    ctx->pc = 0x20743cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_207440:
    // 0x207440: 0xa31824
    ctx->pc = 0x207440u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_207444:
    // 0x207444: 0xae83000c
    ctx->pc = 0x207444u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_207448:
    // 0x207448: 0x8e831db0
    ctx->pc = 0x207448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7600)));
label_20744c:
    // 0x20744c: 0x31880
    ctx->pc = 0x20744cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207450:
    // 0x207450: 0x431021
    ctx->pc = 0x207450u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207454:
    // 0x207454: 0x8c450000
    ctx->pc = 0x207454u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207458:
    // 0x207458: 0xc0829ac
label_20745c:
    if (ctx->pc == 0x20745Cu) {
        ctx->pc = 0x20745Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207460u;
        goto label_207460;
    }
    ctx->pc = 0x207458u;
    SET_GPR_U32(ctx, 31, 0x207460u);
    ctx->pc = 0x20745Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207460u; }
        else if (ctx->pc != 0x207460u) { ctx->pc = 0x207460u; }
    }
    if (ctx->pc != 0x207460u) { return; }
    ctx->pc = 0x207460u;
label_207460:
    // 0x207460: 0x2143c
    ctx->pc = 0x207460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_207464:
    // 0x207464: 0x2143f
    ctx->pc = 0x207464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_207468:
    // 0x207468: 0xae821dcc
    ctx->pc = 0x207468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7628), GPR_U32(ctx, 2));
label_20746c:
    // 0x20746c: 0x12800002
label_207470:
    if (ctx->pc == 0x207470u) {
        ctx->pc = 0x207470u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207474u;
        goto label_207474;
    }
    ctx->pc = 0x20746Cu;
    {
        const bool branch_taken_0x20746c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x207470u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20746c) {
            ctx->pc = 0x207478u;
            goto label_207478;
        }
    }
    ctx->pc = 0x207474u;
label_207474:
    // 0x207474: 0x24a50030
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207478:
    // 0x207478: 0x8e861dcc
    ctx->pc = 0x207478u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 7628)));
label_20747c:
    // 0x20747c: 0x3c02004a
    ctx->pc = 0x20747cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207480:
    // 0x207480: 0x2444e8e0
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207484:
    // 0x207484: 0x70003e28
    ctx->pc = 0x207484u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207488:
    // 0x207488: 0xc07eabc
label_20748c:
    if (ctx->pc == 0x20748Cu) {
        ctx->pc = 0x20748Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207490u;
        goto label_207490;
    }
    ctx->pc = 0x207488u;
    SET_GPR_U32(ctx, 31, 0x207490u);
    ctx->pc = 0x20748Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207490u; }
        else if (ctx->pc != 0x207490u) { ctx->pc = 0x207490u; }
    }
    if (ctx->pc != 0x207490u) { return; }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0x2402ffff
    ctx->pc = 0x207490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207494:
    // 0x207494: 0xae821dac
    ctx->pc = 0x207494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7596), GPR_U32(ctx, 2));
label_207498:
    // 0x207498: 0xae821dd0
    ctx->pc = 0x207498u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7632), GPR_U32(ctx, 2));
label_20749c:
    // 0x20749c: 0x3c020027
    ctx->pc = 0x20749cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2074a0:
    // 0x2074a0: 0x24422ea8
    ctx->pc = 0x2074a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11944));
label_2074a4:
    // 0x2074a4: 0x8c450008
    ctx->pc = 0x2074a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2074a8:
    // 0x2074a8: 0x8e841d70
    ctx->pc = 0x2074a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7536)));
label_2074ac:
    // 0x2074ac: 0xc068fd8
label_2074b0:
    if (ctx->pc == 0x2074B0u) {
        ctx->pc = 0x2074B0u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2074B4u;
        goto label_2074b4;
    }
    ctx->pc = 0x2074ACu;
    SET_GPR_U32(ctx, 31, 0x2074B4u);
    ctx->pc = 0x2074B0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074B4u; }
        else if (ctx->pc != 0x2074B4u) { ctx->pc = 0x2074B4u; }
    }
    if (ctx->pc != 0x2074B4u) { return; }
    ctx->pc = 0x2074B4u;
label_2074b4:
    // 0x2074b4: 0xae801db8
    ctx->pc = 0x2074b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 0));
label_2074b8:
    // 0x2074b8: 0x8e851dcc
    ctx->pc = 0x2074b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 7628)));
label_2074bc:
    // 0x2074bc: 0x3c028888
    ctx->pc = 0x2074bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
label_2074c0:
    // 0x2074c0: 0x34448889
    ctx->pc = 0x2074c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 34953));
label_2074c4:
    // 0x2074c4: 0x3c0101fb
    ctx->pc = 0x2074c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
label_2074c8:
    // 0x2074c8: 0x2403ffff
    ctx->pc = 0x2074c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2074cc:
    // 0x2074cc: 0x24020006
    ctx->pc = 0x2074ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2074d0:
    // 0x2074d0: 0x52840
    ctx->pc = 0x2074d0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
label_2074d4:
    // 0x2074d4: 0xa10821
    ctx->pc = 0x2074d4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_2074d8:
    // 0x2074d8: 0x842673e4
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
label_2074dc:
    // 0x2074dc: 0x62880
    ctx->pc = 0x2074dcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
label_2074e0:
    // 0x2074e0: 0xa63021
    ctx->pc = 0x2074e0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2074e4:
    // 0x2074e4: 0x62880
    ctx->pc = 0x2074e4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
label_2074e8:
    // 0x2074e8: 0xc52821
    ctx->pc = 0x2074e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2074ec:
    // 0x2074ec: 0x53040
    ctx->pc = 0x2074ecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 1));
label_2074f0:
    // 0x2074f0: 0x860018
    ctx->pc = 0x2074f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_2074f4:
    // 0x2074f4: 0x62fc2
    ctx->pc = 0x2074f4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 6), 31));
label_2074f8:
    // 0x2074f8: 0x0
    ctx->pc = 0x2074f8u;
    // NOP
label_2074fc:
    // 0x2074fc: 0x2010
    ctx->pc = 0x2074fcu;
    SET_GPR_U32(ctx, 4, ctx->hi);
label_207500:
    // 0x207500: 0x862021
    ctx->pc = 0x207500u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_207504:
    // 0x207504: 0x42143
    ctx->pc = 0x207504u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_207508:
    // 0x207508: 0x852021
    ctx->pc = 0x207508u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20750c:
    // 0x20750c: 0x44840000
    ctx->pc = 0x20750cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
label_207510:
    // 0x207510: 0x0
    ctx->pc = 0x207510u;
    // NOP
label_207514:
    // 0x207514: 0x46800020
    ctx->pc = 0x207514u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_207518:
    // 0x207518: 0xe6801d78
    ctx->pc = 0x207518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7544), bits); }
label_20751c:
    // 0x20751c: 0xae831da4
    ctx->pc = 0x20751cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7588), GPR_U32(ctx, 3));
label_207520:
    // 0x207520: 0x83838ba8
    ctx->pc = 0x207520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_207524:
    // 0x207524: 0x14620005
label_207528:
    if (ctx->pc == 0x207528u) {
        ctx->pc = 0x207528u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48324 << 16));
        ctx->pc = 0x20752Cu;
        goto label_20752c;
    }
    ctx->pc = 0x207524u;
    {
        const bool branch_taken_0x207524 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x207528u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48324 << 16));
        if (branch_taken_0x207524) {
            ctx->pc = 0x20753Cu;
            goto label_20753c;
        }
    }
    ctx->pc = 0x20752Cu;
label_20752c:
    // 0x20752c: 0x8e82000c
    ctx->pc = 0x20752cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_207530:
    // 0x207530: 0x34420100
    ctx->pc = 0x207530u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
label_207534:
    // 0x207534: 0xae82000c
    ctx->pc = 0x207534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_207538:
    // 0x207538: 0x3c02bcc4
    ctx->pc = 0x207538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48324 << 16));
label_20753c:
    // 0x20753c: 0x34429ba6
    ctx->pc = 0x20753cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
label_207540:
    // 0x207540: 0xae821e30
    ctx->pc = 0x207540u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7728), GPR_U32(ctx, 2));
label_207544:
    // 0x207544: 0x24020003
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_207548:
    // 0x207548: 0xa6821e34
    ctx->pc = 0x207548u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 7732), (uint16_t)GPR_U32(ctx, 2));
label_20754c:
    // 0x20754c: 0x3c023f33
    ctx->pc = 0x20754cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16179 << 16));
label_207550:
    // 0x207550: 0xa6801e36
    ctx->pc = 0x207550u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 7734), (uint16_t)GPR_U32(ctx, 0));
label_207554:
    // 0x207554: 0x34423333
    ctx->pc = 0x207554u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
label_207558:
    // 0x207558: 0xae821e38
    ctx->pc = 0x207558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7736), GPR_U32(ctx, 2));
label_20755c:
    // 0x20755c: 0x3c010050
    ctx->pc = 0x20755cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_207560:
    // 0x207560: 0x8423e504
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_207564:
    // 0x207564: 0x2402000a
    ctx->pc = 0x207564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_207568:
    // 0x207568: 0x14620005
label_20756c:
    if (ctx->pc == 0x20756Cu) {
        ctx->pc = 0x20756Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207570u;
        goto label_207570;
    }
    ctx->pc = 0x207568u;
    {
        const bool branch_taken_0x207568 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20756Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x207568) {
            ctx->pc = 0x207580u;
            goto label_207580;
        }
    }
    ctx->pc = 0x207570u;
label_207570:
    // 0x207570: 0x8f838bcc
    ctx->pc = 0x207570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_207574:
    // 0x207574: 0x24020002
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_207578:
    // 0x207578: 0x10620019
label_20757c:
    if (ctx->pc == 0x20757Cu) {
        ctx->pc = 0x207580u;
        goto label_207580;
    }
    ctx->pc = 0x207578u;
    {
        const bool branch_taken_0x207578 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x207578) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x207580u;
label_207580:
    // 0x207580: 0x83828ba8
    ctx->pc = 0x207580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_207584:
    // 0x207584: 0x2c410007
    ctx->pc = 0x207584u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 7));
label_207588:
    // 0x207588: 0x10200015
label_20758c:
    if (ctx->pc == 0x20758Cu) {
        ctx->pc = 0x20758Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x207590u;
        goto label_207590;
    }
    ctx->pc = 0x207588u;
    {
        const bool branch_taken_0x207588 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20758Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x207588) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x207590u;
label_207590:
    // 0x207590: 0x21080
    ctx->pc = 0x207590u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_207594:
    // 0x207594: 0x246303a0
    ctx->pc = 0x207594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 928));
label_207598:
    // 0x207598: 0x431021
    ctx->pc = 0x207598u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20759c:
    // 0x20759c: 0x8c420000
    ctx->pc = 0x20759cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2075a0:
    // 0x2075a0: 0x400008
label_2075a4:
    if (ctx->pc == 0x2075A4u) {
        ctx->pc = 0x2075A8u;
        goto label_2075a8;
    }
    ctx->pc = 0x2075A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206F70u: goto label_206f70;
            case 0x206F74u: goto label_206f74;
            case 0x206F78u: goto label_206f78;
            case 0x206F7Cu: goto label_206f7c;
            case 0x206F80u: goto label_206f80;
            case 0x206F84u: goto label_206f84;
            case 0x206F88u: goto label_206f88;
            case 0x206F8Cu: goto label_206f8c;
            case 0x206F90u: goto label_206f90;
            case 0x206F94u: goto label_206f94;
            case 0x206F98u: goto label_206f98;
            case 0x206F9Cu: goto label_206f9c;
            case 0x206FA0u: goto label_206fa0;
            case 0x206FA4u: goto label_206fa4;
            case 0x206FA8u: goto label_206fa8;
            case 0x206FACu: goto label_206fac;
            case 0x206FB0u: goto label_206fb0;
            case 0x206FB4u: goto label_206fb4;
            case 0x206FB8u: goto label_206fb8;
            case 0x206FBCu: goto label_206fbc;
            case 0x206FC0u: goto label_206fc0;
            case 0x206FC4u: goto label_206fc4;
            case 0x206FC8u: goto label_206fc8;
            case 0x206FCCu: goto label_206fcc;
            case 0x206FD0u: goto label_206fd0;
            case 0x206FD4u: goto label_206fd4;
            case 0x206FD8u: goto label_206fd8;
            case 0x206FDCu: goto label_206fdc;
            case 0x206FE0u: goto label_206fe0;
            case 0x206FE4u: goto label_206fe4;
            case 0x206FE8u: goto label_206fe8;
            case 0x206FECu: goto label_206fec;
            case 0x206FF0u: goto label_206ff0;
            case 0x206FF4u: goto label_206ff4;
            case 0x206FF8u: goto label_206ff8;
            case 0x206FFCu: goto label_206ffc;
            case 0x207000u: goto label_207000;
            case 0x207004u: goto label_207004;
            case 0x207008u: goto label_207008;
            case 0x20700Cu: goto label_20700c;
            case 0x207010u: goto label_207010;
            case 0x207014u: goto label_207014;
            case 0x207018u: goto label_207018;
            case 0x20701Cu: goto label_20701c;
            case 0x207020u: goto label_207020;
            case 0x207024u: goto label_207024;
            case 0x207028u: goto label_207028;
            case 0x20702Cu: goto label_20702c;
            case 0x207030u: goto label_207030;
            case 0x207034u: goto label_207034;
            case 0x207038u: goto label_207038;
            case 0x20703Cu: goto label_20703c;
            case 0x207040u: goto label_207040;
            case 0x207044u: goto label_207044;
            case 0x207048u: goto label_207048;
            case 0x20704Cu: goto label_20704c;
            case 0x207050u: goto label_207050;
            case 0x207054u: goto label_207054;
            case 0x207058u: goto label_207058;
            case 0x20705Cu: goto label_20705c;
            case 0x207060u: goto label_207060;
            case 0x207064u: goto label_207064;
            case 0x207068u: goto label_207068;
            case 0x20706Cu: goto label_20706c;
            case 0x207070u: goto label_207070;
            case 0x207074u: goto label_207074;
            case 0x207078u: goto label_207078;
            case 0x20707Cu: goto label_20707c;
            case 0x207080u: goto label_207080;
            case 0x207084u: goto label_207084;
            case 0x207088u: goto label_207088;
            case 0x20708Cu: goto label_20708c;
            case 0x207090u: goto label_207090;
            case 0x207094u: goto label_207094;
            case 0x207098u: goto label_207098;
            case 0x20709Cu: goto label_20709c;
            case 0x2070A0u: goto label_2070a0;
            case 0x2070A4u: goto label_2070a4;
            case 0x2070A8u: goto label_2070a8;
            case 0x2070ACu: goto label_2070ac;
            case 0x2070B0u: goto label_2070b0;
            case 0x2070B4u: goto label_2070b4;
            case 0x2070B8u: goto label_2070b8;
            case 0x2070BCu: goto label_2070bc;
            case 0x2070C0u: goto label_2070c0;
            case 0x2070C4u: goto label_2070c4;
            case 0x2070C8u: goto label_2070c8;
            case 0x2070CCu: goto label_2070cc;
            case 0x2070D0u: goto label_2070d0;
            case 0x2070D4u: goto label_2070d4;
            case 0x2070D8u: goto label_2070d8;
            case 0x2070DCu: goto label_2070dc;
            case 0x2070E0u: goto label_2070e0;
            case 0x2070E4u: goto label_2070e4;
            case 0x2070E8u: goto label_2070e8;
            case 0x2070ECu: goto label_2070ec;
            case 0x2070F0u: goto label_2070f0;
            case 0x2070F4u: goto label_2070f4;
            case 0x2070F8u: goto label_2070f8;
            case 0x2070FCu: goto label_2070fc;
            case 0x207100u: goto label_207100;
            case 0x207104u: goto label_207104;
            case 0x207108u: goto label_207108;
            case 0x20710Cu: goto label_20710c;
            case 0x207110u: goto label_207110;
            case 0x207114u: goto label_207114;
            case 0x207118u: goto label_207118;
            case 0x20711Cu: goto label_20711c;
            case 0x207120u: goto label_207120;
            case 0x207124u: goto label_207124;
            case 0x207128u: goto label_207128;
            case 0x20712Cu: goto label_20712c;
            case 0x207130u: goto label_207130;
            case 0x207134u: goto label_207134;
            case 0x207138u: goto label_207138;
            case 0x20713Cu: goto label_20713c;
            case 0x207140u: goto label_207140;
            case 0x207144u: goto label_207144;
            case 0x207148u: goto label_207148;
            case 0x20714Cu: goto label_20714c;
            case 0x207150u: goto label_207150;
            case 0x207154u: goto label_207154;
            case 0x207158u: goto label_207158;
            case 0x20715Cu: goto label_20715c;
            case 0x207160u: goto label_207160;
            case 0x207164u: goto label_207164;
            case 0x207168u: goto label_207168;
            case 0x20716Cu: goto label_20716c;
            case 0x207170u: goto label_207170;
            case 0x207174u: goto label_207174;
            case 0x207178u: goto label_207178;
            case 0x20717Cu: goto label_20717c;
            case 0x207180u: goto label_207180;
            case 0x207184u: goto label_207184;
            case 0x207188u: goto label_207188;
            case 0x20718Cu: goto label_20718c;
            case 0x207190u: goto label_207190;
            case 0x207194u: goto label_207194;
            case 0x207198u: goto label_207198;
            case 0x20719Cu: goto label_20719c;
            case 0x2071A0u: goto label_2071a0;
            case 0x2071A4u: goto label_2071a4;
            case 0x2071A8u: goto label_2071a8;
            case 0x2071ACu: goto label_2071ac;
            case 0x2071B0u: goto label_2071b0;
            case 0x2071B4u: goto label_2071b4;
            case 0x2071B8u: goto label_2071b8;
            case 0x2071BCu: goto label_2071bc;
            case 0x2071C0u: goto label_2071c0;
            case 0x2071C4u: goto label_2071c4;
            case 0x2071C8u: goto label_2071c8;
            case 0x2071CCu: goto label_2071cc;
            case 0x2071D0u: goto label_2071d0;
            case 0x2071D4u: goto label_2071d4;
            case 0x2071D8u: goto label_2071d8;
            case 0x2071DCu: goto label_2071dc;
            case 0x2071E0u: goto label_2071e0;
            case 0x2071E4u: goto label_2071e4;
            case 0x2071E8u: goto label_2071e8;
            case 0x2071ECu: goto label_2071ec;
            case 0x2071F0u: goto label_2071f0;
            case 0x2071F4u: goto label_2071f4;
            case 0x2071F8u: goto label_2071f8;
            case 0x2071FCu: goto label_2071fc;
            case 0x207200u: goto label_207200;
            case 0x207204u: goto label_207204;
            case 0x207208u: goto label_207208;
            case 0x20720Cu: goto label_20720c;
            case 0x207210u: goto label_207210;
            case 0x207214u: goto label_207214;
            case 0x207218u: goto label_207218;
            case 0x20721Cu: goto label_20721c;
            case 0x207220u: goto label_207220;
            case 0x207224u: goto label_207224;
            case 0x207228u: goto label_207228;
            case 0x20722Cu: goto label_20722c;
            case 0x207230u: goto label_207230;
            case 0x207234u: goto label_207234;
            case 0x207238u: goto label_207238;
            case 0x20723Cu: goto label_20723c;
            case 0x207240u: goto label_207240;
            case 0x207244u: goto label_207244;
            case 0x207248u: goto label_207248;
            case 0x20724Cu: goto label_20724c;
            case 0x207250u: goto label_207250;
            case 0x207254u: goto label_207254;
            case 0x207258u: goto label_207258;
            case 0x20725Cu: goto label_20725c;
            case 0x207260u: goto label_207260;
            case 0x207264u: goto label_207264;
            case 0x207268u: goto label_207268;
            case 0x20726Cu: goto label_20726c;
            case 0x207270u: goto label_207270;
            case 0x207274u: goto label_207274;
            case 0x207278u: goto label_207278;
            case 0x20727Cu: goto label_20727c;
            case 0x207280u: goto label_207280;
            case 0x207284u: goto label_207284;
            case 0x207288u: goto label_207288;
            case 0x20728Cu: goto label_20728c;
            case 0x207290u: goto label_207290;
            case 0x207294u: goto label_207294;
            case 0x207298u: goto label_207298;
            case 0x20729Cu: goto label_20729c;
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2075A8u;
label_2075a8:
    // 0x2075a8: 0x3c020015
    ctx->pc = 0x2075a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)21 << 16));
label_2075ac:
    // 0x2075ac: 0x1000000c
label_2075b0:
    if (ctx->pc == 0x2075B0u) {
        ctx->pc = 0x2075B0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x2075B4u;
        goto label_2075b4;
    }
    ctx->pc = 0x2075ACu;
    {
        const bool branch_taken_0x2075ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2075B0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 15));
        if (branch_taken_0x2075ac) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x2075B4u;
label_2075b4:
    // 0x2075b4: 0x3c02000d
    ctx->pc = 0x2075b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)13 << 16));
label_2075b8:
    // 0x2075b8: 0x10000009
label_2075bc:
    if (ctx->pc == 0x2075BCu) {
        ctx->pc = 0x2075BCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 20));
        ctx->pc = 0x2075C0u;
        goto label_2075c0;
    }
    ctx->pc = 0x2075B8u;
    {
        const bool branch_taken_0x2075b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2075BCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x2075b8) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x2075C0u;
label_2075c0:
    // 0x2075c0: 0x3c020019
    ctx->pc = 0x2075c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
label_2075c4:
    // 0x2075c4: 0x10000006
label_2075c8:
    if (ctx->pc == 0x2075C8u) {
        ctx->pc = 0x2075C8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x2075CCu;
        goto label_2075cc;
    }
    ctx->pc = 0x2075C4u;
    {
        const bool branch_taken_0x2075c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2075C8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 13));
        if (branch_taken_0x2075c4) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x2075CCu;
label_2075cc:
    // 0x2075cc: 0x3c020011
    ctx->pc = 0x2075ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
label_2075d0:
    // 0x2075d0: 0x10000003
label_2075d4:
    if (ctx->pc == 0x2075D4u) {
        ctx->pc = 0x2075D4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 269));
        ctx->pc = 0x2075D8u;
        goto label_2075d8;
    }
    ctx->pc = 0x2075D0u;
    {
        const bool branch_taken_0x2075d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2075D4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 269));
        if (branch_taken_0x2075d0) {
            ctx->pc = 0x2075E0u;
            goto label_2075e0;
        }
    }
    ctx->pc = 0x2075D8u;
label_2075d8:
    // 0x2075d8: 0x3c02000a
    ctx->pc = 0x2075d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)10 << 16));
label_2075dc:
    // 0x2075dc: 0x3445000f
    ctx->pc = 0x2075dcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 15));
label_2075e0:
    // 0x2075e0: 0x10a00009
label_2075e4:
    if (ctx->pc == 0x2075E4u) {
        ctx->pc = 0x2075E4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2075E8u;
        goto label_2075e8;
    }
    ctx->pc = 0x2075E0u;
    {
        const bool branch_taken_0x2075e0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2075E4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2075e0) {
            ctx->pc = 0x207608u;
            goto label_207608;
        }
    }
    ctx->pc = 0x2075E8u;
label_2075e8:
    // 0x2075e8: 0x82830024
    ctx->pc = 0x2075e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
label_2075ec:
    // 0x2075ec: 0x3c020051
    ctx->pc = 0x2075ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_2075f0:
    // 0x2075f0: 0x244434f0
    ctx->pc = 0x2075f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_2075f4:
    // 0x2075f4: 0x70003e28
    ctx->pc = 0x2075f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2075f8:
    // 0x2075f8: 0x24080040
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_2075fc:
    // 0x2075fc: 0xc086018
label_207600:
    if (ctx->pc == 0x207600u) {
        ctx->pc = 0x207600u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x207604u;
        goto label_207604;
    }
    ctx->pc = 0x2075FCu;
    SET_GPR_U32(ctx, 31, 0x207604u);
    ctx->pc = 0x207600u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207604u; }
        else if (ctx->pc != 0x207604u) { ctx->pc = 0x207604u; }
    }
    if (ctx->pc != 0x207604u) { return; }
    ctx->pc = 0x207604u;
label_207604:
    // 0x207604: 0x72802628
    ctx->pc = 0x207604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_207608:
    // 0x207608: 0x12800002
label_20760c:
    if (ctx->pc == 0x20760Cu) {
        ctx->pc = 0x207610u;
        goto label_207610;
    }
    ctx->pc = 0x207608u;
    {
        const bool branch_taken_0x207608 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x207608) {
            ctx->pc = 0x207614u;
            goto label_207614;
        }
    }
    ctx->pc = 0x207610u;
label_207610:
    // 0x207610: 0x24841ce0
    ctx->pc = 0x207610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7392));
label_207614:
    // 0x207614: 0xc24daa0
label_207618:
    if (ctx->pc == 0x207618u) {
        ctx->pc = 0x20761Cu;
        goto label_20761c;
    }
    ctx->pc = 0x207614u;
    SET_GPR_U32(ctx, 31, 0x20761Cu);
    ctx->pc = 0x936A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeakInit__FP12ColliObjTask_0x936a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20761Cu; }
        else if (ctx->pc != 0x20761Cu) { ctx->pc = 0x20761Cu; }
    }
    if (ctx->pc != 0x20761Cu) { return; }
    ctx->pc = 0x20761Cu;
label_20761c:
    // 0x20761c: 0x3c02009b
    ctx->pc = 0x20761cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)155 << 16));
label_207620:
    // 0x207620: 0x70003628
    ctx->pc = 0x207620u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207624:
    // 0x207624: 0x70003e28
    ctx->pc = 0x207624u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207628:
    // 0x207628: 0x24050001
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_20762c:
    // 0x20762c: 0x2448ab12
    ctx->pc = 0x20762cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294945554));
label_207630:
    // 0x207630: 0x8e831db0
    ctx->pc = 0x207630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7600)));
label_207634:
    // 0x207634: 0x3c020027
    ctx->pc = 0x207634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_207638:
    // 0x207638: 0x24422a98
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10904));
label_20763c:
    // 0x20763c: 0x31880
    ctx->pc = 0x20763cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207640:
    // 0x207640: 0x431021
    ctx->pc = 0x207640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207644:
    // 0x207644: 0x8c440000
    ctx->pc = 0x207644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207648:
    // 0x207648: 0x0
    ctx->pc = 0x207648u;
    // NOP
label_20764c:
    // 0x20764c: 0x95020000
    ctx->pc = 0x20764cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_207650:
    // 0x207650: 0x821021
    ctx->pc = 0x207650u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207654:
    // 0x207654: 0x90430000
    ctx->pc = 0x207654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_207658:
    // 0x207658: 0x66102b
    ctx->pc = 0x207658u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20765c:
    // 0x20765c: 0x54400005
label_207660:
    if (ctx->pc == 0x207660u) {
        ctx->pc = 0x207660u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x207664u;
        goto label_207664;
    }
    ctx->pc = 0x20765Cu;
    {
        const bool branch_taken_0x20765c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20765c) {
            ctx->pc = 0x207660u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x207674u;
            goto label_207674;
        }
    }
    ctx->pc = 0x207664u;
label_207664:
    // 0x207664: 0x306600ff
    ctx->pc = 0x207664u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 255));
label_207668:
    // 0x207668: 0x70a03e28
    ctx->pc = 0x207668u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_20766c:
    // 0x20766c: 0x0
    ctx->pc = 0x20766cu;
    // NOP
label_207670:
    // 0x207670: 0x24a50001
    ctx->pc = 0x207670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_207674:
    // 0x207674: 0x2ca20012
    ctx->pc = 0x207674u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 18));
label_207678:
    // 0x207678: 0x1440fff4
label_20767c:
    if (ctx->pc == 0x20767Cu) {
        ctx->pc = 0x20767Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x207680u;
        goto label_207680;
    }
    ctx->pc = 0x207678u;
    {
        const bool branch_taken_0x207678 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20767Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x207678) {
            ctx->pc = 0x20764Cu;
            goto label_20764c;
        }
    }
    ctx->pc = 0x207680u;
label_207680:
    // 0x207680: 0xafa00080
    ctx->pc = 0x207680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_207684:
    // 0x207684: 0xafb40084
    ctx->pc = 0x207684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 20));
label_207688:
    // 0x207688: 0xafa0008c
    ctx->pc = 0x207688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_20768c:
    // 0x20768c: 0x71100
    ctx->pc = 0x20768cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
label_207690:
    // 0x207690: 0xafa00090
    ctx->pc = 0x207690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_207694:
    // 0x207694: 0x471023
    ctx->pc = 0x207694u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_207698:
    // 0x207698: 0xafa00094
    ctx->pc = 0x207698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_20769c:
    // 0x20769c: 0x21100
    ctx->pc = 0x20769cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_2076a0:
    // 0x2076a0: 0xafa70088
    ctx->pc = 0x2076a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
label_2076a4:
    // 0x2076a4: 0x541021
    ctx->pc = 0x2076a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2076a8:
    // 0x2076a8: 0xc4400184
    ctx->pc = 0x2076a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2076ac:
    // 0x2076ac: 0x27a40080
    ctx->pc = 0x2076acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_2076b0:
    // 0x2076b0: 0xe7a00098
    ctx->pc = 0x2076b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2076b4:
    // 0x2076b4: 0xc24dd20
label_2076b8:
    if (ctx->pc == 0x2076B8u) {
        ctx->pc = 0x2076B8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x2076BCu;
        goto label_2076bc;
    }
    ctx->pc = 0x2076B4u;
    SET_GPR_U32(ctx, 31, 0x2076BCu);
    ctx->pc = 0x2076B8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    ctx->pc = 0x937480u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjustment__12CsOptionTaskFv_0x937480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076BCu; }
        else if (ctx->pc != 0x2076BCu) { ctx->pc = 0x2076BCu; }
    }
    if (ctx->pc != 0x2076BCu) { return; }
    ctx->pc = 0x2076BCu;
label_2076bc:
    // 0x2076bc: 0x10000032
label_2076c0:
    if (ctx->pc == 0x2076C0u) {
        ctx->pc = 0x2076C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7608)));
        ctx->pc = 0x2076C4u;
        goto label_2076c4;
    }
    ctx->pc = 0x2076BCu;
    {
        const bool branch_taken_0x2076bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2076C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7608)));
        if (branch_taken_0x2076bc) {
            ctx->pc = 0x207788u;
            goto label_207788;
        }
    }
    ctx->pc = 0x2076C4u;
label_2076c4:
    // 0x2076c4: 0x8e831dac
    ctx->pc = 0x2076c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7596)));
label_2076c8:
    // 0x2076c8: 0x1460002e
label_2076cc:
    if (ctx->pc == 0x2076CCu) {
        ctx->pc = 0x2076D0u;
        goto label_2076d0;
    }
    ctx->pc = 0x2076C8u;
    {
        const bool branch_taken_0x2076c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2076c8) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x2076D0u;
label_2076d0:
    // 0x2076d0: 0x82821e00
    ctx->pc = 0x2076d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 7680)));
label_2076d4:
    // 0x2076d4: 0x2404ffff
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2076d8:
    // 0x2076d8: 0x10440005
label_2076dc:
    if (ctx->pc == 0x2076DCu) {
        ctx->pc = 0x2076DCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2076E0u;
        goto label_2076e0;
    }
    ctx->pc = 0x2076D8u;
    {
        const bool branch_taken_0x2076d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x2076DCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x2076d8) {
            ctx->pc = 0x2076F0u;
            goto label_2076f0;
        }
    }
    ctx->pc = 0x2076E0u;
label_2076e0:
    // 0x2076e0: 0x27828b60
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
label_2076e4:
    // 0x2076e4: 0x431021
    ctx->pc = 0x2076e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2076e8:
    // 0x2076e8: 0xac400000
    ctx->pc = 0x2076e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2076ec:
    // 0x2076ec: 0xa2841e00
    ctx->pc = 0x2076ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 4));
label_2076f0:
    // 0x2076f0: 0x8e85000c
    ctx->pc = 0x2076f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2076f4:
    // 0x2076f4: 0x2403feff
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967039));
label_2076f8:
    // 0x2076f8: 0x3c020027
    ctx->pc = 0x2076f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_2076fc:
    // 0x2076fc: 0x244229e8
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10728));
label_207700:
    // 0x207700: 0xa31824
    ctx->pc = 0x207700u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_207704:
    // 0x207704: 0xae83000c
    ctx->pc = 0x207704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_207708:
    // 0x207708: 0x8e831db0
    ctx->pc = 0x207708u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7600)));
label_20770c:
    // 0x20770c: 0x31880
    ctx->pc = 0x20770cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_207710:
    // 0x207710: 0x431021
    ctx->pc = 0x207710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207714:
    // 0x207714: 0x8c450000
    ctx->pc = 0x207714u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207718:
    // 0x207718: 0xc0829ac
label_20771c:
    if (ctx->pc == 0x20771Cu) {
        ctx->pc = 0x20771Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207720u;
        goto label_207720;
    }
    ctx->pc = 0x207718u;
    SET_GPR_U32(ctx, 31, 0x207720u);
    ctx->pc = 0x20771Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motionSelect__10PeopleTaskFPi_0x20a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207720u; }
        else if (ctx->pc != 0x207720u) { ctx->pc = 0x207720u; }
    }
    if (ctx->pc != 0x207720u) { return; }
    ctx->pc = 0x207720u;
label_207720:
    // 0x207720: 0x2143c
    ctx->pc = 0x207720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_207724:
    // 0x207724: 0x2143f
    ctx->pc = 0x207724u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_207728:
    // 0x207728: 0xae821dcc
    ctx->pc = 0x207728u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7628), GPR_U32(ctx, 2));
label_20772c:
    // 0x20772c: 0x12800002
label_207730:
    if (ctx->pc == 0x207730u) {
        ctx->pc = 0x207730u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207734u;
        goto label_207734;
    }
    ctx->pc = 0x20772Cu;
    {
        const bool branch_taken_0x20772c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x207730u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20772c) {
            ctx->pc = 0x207738u;
            goto label_207738;
        }
    }
    ctx->pc = 0x207734u;
label_207734:
    // 0x207734: 0x24a50030
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_207738:
    // 0x207738: 0x8e861dcc
    ctx->pc = 0x207738u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 7628)));
label_20773c:
    // 0x20773c: 0x3c02004a
    ctx->pc = 0x20773cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_207740:
    // 0x207740: 0x2444e8e0
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_207744:
    // 0x207744: 0x70003e28
    ctx->pc = 0x207744u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_207748:
    // 0x207748: 0xc07eabc
label_20774c:
    if (ctx->pc == 0x20774Cu) {
        ctx->pc = 0x20774Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207750u;
        goto label_207750;
    }
    ctx->pc = 0x207748u;
    SET_GPR_U32(ctx, 31, 0x207750u);
    ctx->pc = 0x20774Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207750u; }
        else if (ctx->pc != 0x207750u) { ctx->pc = 0x207750u; }
    }
    if (ctx->pc != 0x207750u) { return; }
    ctx->pc = 0x207750u;
label_207750:
    // 0x207750: 0x2402ffff
    ctx->pc = 0x207750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207754:
    // 0x207754: 0xae821dac
    ctx->pc = 0x207754u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7596), GPR_U32(ctx, 2));
label_207758:
    // 0x207758: 0x3c020027
    ctx->pc = 0x207758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_20775c:
    // 0x20775c: 0x24422eb8
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11960));
label_207760:
    // 0x207760: 0x8c450008
    ctx->pc = 0x207760u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_207764:
    // 0x207764: 0x8e841d70
    ctx->pc = 0x207764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7536)));
label_207768:
    // 0x207768: 0xc068fd8
label_20776c:
    if (ctx->pc == 0x20776Cu) {
        ctx->pc = 0x20776Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x207770u;
        goto label_207770;
    }
    ctx->pc = 0x207768u;
    SET_GPR_U32(ctx, 31, 0x207770u);
    ctx->pc = 0x20776Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207770u; }
        else if (ctx->pc != 0x207770u) { ctx->pc = 0x207770u; }
    }
    if (ctx->pc != 0x207770u) { return; }
    ctx->pc = 0x207770u;
label_207770:
    // 0x207770: 0x3c033f80
    ctx->pc = 0x207770u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_207774:
    // 0x207774: 0xae831d78
    ctx->pc = 0x207774u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7544), GPR_U32(ctx, 3));
label_207778:
    // 0x207778: 0xae801db8
    ctx->pc = 0x207778u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7608), GPR_U32(ctx, 0));
label_20777c:
    // 0x20777c: 0x2403ffff
    ctx->pc = 0x20777cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_207780:
    // 0x207780: 0xae831da4
    ctx->pc = 0x207780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7588), GPR_U32(ctx, 3));
label_207784:
    // 0x207784: 0x8e841db8
    ctx->pc = 0x207784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 7608)));
label_207788:
    // 0x207788: 0x28810004
    ctx->pc = 0x207788u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4));
label_20778c:
    // 0x20778c: 0x1420001b
label_207790:
    if (ctx->pc == 0x207790u) {
        ctx->pc = 0x207790u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
        ctx->pc = 0x207794u;
        goto label_207794;
    }
    ctx->pc = 0x20778Cu;
    {
        const bool branch_taken_0x20778c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x207790u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x20778c) {
            ctx->pc = 0x2077FCu;
            goto label_2077fc;
        }
    }
    ctx->pc = 0x207794u;
label_207794:
    // 0x207794: 0x4bede37d
    ctx->pc = 0x207794u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_207798:
    // 0x207798: 0x4bedeb7d
    ctx->pc = 0x207798u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_20779c:
    // 0x20779c: 0x4bedf37d
    ctx->pc = 0x20779cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_2077a0:
    // 0x2077a0: 0x4bedfb7d
    ctx->pc = 0x2077a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_2077a4:
    // 0x2077a4: 0x8f828c48
    ctx->pc = 0x2077a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_2077a8:
    // 0x2077a8: 0xc06c038
label_2077ac:
    if (ctx->pc == 0x2077ACu) {
        ctx->pc = 0x2077ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x2077B0u;
        goto label_2077b0;
    }
    ctx->pc = 0x2077A8u;
    SET_GPR_U32(ctx, 31, 0x2077B0u);
    ctx->pc = 0x2077ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077B0u; }
        else if (ctx->pc != 0x2077B0u) { ctx->pc = 0x2077B0u; }
    }
    if (ctx->pc != 0x2077B0u) { return; }
    ctx->pc = 0x2077B0u;
label_2077b0:
    // 0x2077b0: 0x3c02bf80
    ctx->pc = 0x2077b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_2077b4:
    // 0x2077b4: 0xafa200a0
    ctx->pc = 0x2077b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2077b8:
    // 0x2077b8: 0xafa200a4
    ctx->pc = 0x2077b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_2077bc:
    // 0x2077bc: 0x3c023f80
    ctx->pc = 0x2077bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2077c0:
    // 0x2077c0: 0xafa200a8
    ctx->pc = 0x2077c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_2077c4:
    // 0x2077c4: 0x27a400a0
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
label_2077c8:
    // 0x2077c8: 0xc06bf2b
label_2077cc:
    if (ctx->pc == 0x2077CCu) {
        ctx->pc = 0x2077CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2077D0u;
        goto label_2077d0;
    }
    ctx->pc = 0x2077C8u;
    SET_GPR_U32(ctx, 31, 0x2077D0u);
    ctx->pc = 0x2077CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077D0u; }
        else if (ctx->pc != 0x2077D0u) { ctx->pc = 0x2077D0u; }
    }
    if (ctx->pc != 0x2077D0u) { return; }
    ctx->pc = 0x2077D0u;
label_2077d0:
    // 0x2077d0: 0xc7ac00b0
    ctx->pc = 0x2077d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2077d4:
    // 0x2077d4: 0xc7ad00b4
    ctx->pc = 0x2077d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2077d8:
    // 0x2077d8: 0xc7ae00b8
    ctx->pc = 0x2077d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2077dc:
    // 0x2077dc: 0x26841d94
    ctx->pc = 0x2077dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 7572));
label_2077e0:
    // 0x2077e0: 0xc072348
label_2077e4:
    if (ctx->pc == 0x2077E4u) {
        ctx->pc = 0x2077E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 7576));
        ctx->pc = 0x2077E8u;
        goto label_2077e8;
    }
    ctx->pc = 0x2077E0u;
    SET_GPR_U32(ctx, 31, 0x2077E8u);
    ctx->pc = 0x2077E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 7576));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077E8u; }
        else if (ctx->pc != 0x2077E8u) { ctx->pc = 0x2077E8u; }
    }
    if (ctx->pc != 0x2077E8u) { return; }
    ctx->pc = 0x2077E8u;
label_2077e8:
    // 0x2077e8: 0x4bff6b7e
    ctx->pc = 0x2077e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2077ec:
    // 0x2077ec: 0x4bfe6b7e
    ctx->pc = 0x2077ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_2077f0:
    // 0x2077f0: 0x4bfd6b7e
    ctx->pc = 0x2077f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2077f4:
    // 0x2077f4: 0x1000004c
label_2077f8:
    if (ctx->pc == 0x2077F8u) {
        ctx->pc = 0x2077F8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->pc = 0x2077FCu;
        goto label_2077fc;
    }
    ctx->pc = 0x2077F4u;
    {
        const bool branch_taken_0x2077f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2077F8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x2077f4) {
            ctx->pc = 0x207928u;
            goto label_207928;
        }
    }
    ctx->pc = 0x2077FCu;
label_2077fc:
    // 0x2077fc: 0x1460004a
label_207800:
    if (ctx->pc == 0x207800u) {
        ctx->pc = 0x207800u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4));
        ctx->pc = 0x207804u;
        goto label_207804;
    }
    ctx->pc = 0x2077FCu;
    {
        const bool branch_taken_0x2077fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x207800u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4));
        if (branch_taken_0x2077fc) {
            ctx->pc = 0x207928u;
            goto label_207928;
        }
    }
    ctx->pc = 0x207804u;
label_207804:
    // 0x207804: 0x10200048
label_207808:
    if (ctx->pc == 0x207808u) {
        ctx->pc = 0x20780Cu;
        goto label_20780c;
    }
    ctx->pc = 0x207804u;
    {
        const bool branch_taken_0x207804 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x207804) {
            ctx->pc = 0x207928u;
            goto label_207928;
        }
    }
    ctx->pc = 0x20780Cu;
label_20780c:
    // 0x20780c: 0x3c023f00
    ctx->pc = 0x20780cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
label_207810:
    // 0x207810: 0x44821000
    ctx->pc = 0x207810u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_207814:
    // 0x207814: 0xc6811d78
    ctx->pc = 0x207814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207818:
    // 0x207818: 0x3c023f80
    ctx->pc = 0x207818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_20781c:
    // 0x20781c: 0x44821800
    ctx->pc = 0x20781cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
label_207820:
    // 0x207820: 0x0
    ctx->pc = 0x207820u;
    // NOP
label_207824:
    // 0x207824: 0x46011801
    ctx->pc = 0x207824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_207828:
    // 0x207828: 0x4600101a
    ctx->pc = 0x207828u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20782c:
    // 0x20782c: 0x4601101c
    ctx->pc = 0x20782cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_207830:
    // 0x207830: 0xe6801d88
    ctx->pc = 0x207830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7560), bits); }
label_207834:
    // 0x207834: 0xc6801d78
    ctx->pc = 0x207834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207838:
    // 0x207838: 0x4600101a
    ctx->pc = 0x207838u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20783c:
    // 0x20783c: 0x46001801
    ctx->pc = 0x20783cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_207840:
    // 0x207840: 0x4600101c
    ctx->pc = 0x207840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_207844:
    // 0x207844: 0xe6801d8c
    ctx->pc = 0x207844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7564), bits); }
label_207848:
    // 0x207848: 0xc6801d78
    ctx->pc = 0x207848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20784c:
    // 0x20784c: 0x4600101a
    ctx->pc = 0x20784cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_207850:
    // 0x207850: 0x46001801
    ctx->pc = 0x207850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_207854:
    // 0x207854: 0x4600101c
    ctx->pc = 0x207854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_207858:
    // 0x207858: 0xe6801d90
    ctx->pc = 0x207858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7568), bits); }
label_20785c:
    // 0x20785c: 0xc6801d78
    ctx->pc = 0x20785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207860:
    // 0x207860: 0x46001801
    ctx->pc = 0x207860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_207864:
    // 0x207864: 0xe6801d7c
    ctx->pc = 0x207864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7548), bits); }
label_207868:
    // 0x207868: 0xc6801d78
    ctx->pc = 0x207868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20786c:
    // 0x20786c: 0x46001042
    ctx->pc = 0x20786cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_207870:
    // 0x207870: 0x46001801
    ctx->pc = 0x207870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_207874:
    // 0x207874: 0x46000800
    ctx->pc = 0x207874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207878:
    // 0x207878: 0xe6801d80
    ctx->pc = 0x207878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7552), bits); }
label_20787c:
    // 0x20787c: 0xc6811d78
    ctx->pc = 0x20787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207880:
    // 0x207880: 0x46011801
    ctx->pc = 0x207880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_207884:
    // 0x207884: 0x46000800
    ctx->pc = 0x207884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_207888:
    // 0x207888: 0xe6801d84
    ctx->pc = 0x207888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 7556), bits); }
label_20788c:
    // 0x20788c: 0x4bede37d
    ctx->pc = 0x20788cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_207890:
    // 0x207890: 0x4bedeb7d
    ctx->pc = 0x207890u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_207894:
    // 0x207894: 0x4bedf37d
    ctx->pc = 0x207894u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_207898:
    // 0x207898: 0x4bedfb7d
    ctx->pc = 0x207898u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_20789c:
    // 0x20789c: 0x8f828c48
    ctx->pc = 0x20789cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_2078a0:
    // 0x2078a0: 0xc06c038
label_2078a4:
    if (ctx->pc == 0x2078A4u) {
        ctx->pc = 0x2078A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x2078A8u;
        goto label_2078a8;
    }
    ctx->pc = 0x2078A0u;
    SET_GPR_U32(ctx, 31, 0x2078A8u);
    ctx->pc = 0x2078A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078A8u; }
        else if (ctx->pc != 0x2078A8u) { ctx->pc = 0x2078A8u; }
    }
    if (ctx->pc != 0x2078A8u) { return; }
    ctx->pc = 0x2078A8u;
label_2078a8:
    // 0x2078a8: 0xc6801d78
    ctx->pc = 0x2078a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2078ac:
    // 0x2078ac: 0x3c02bf80
    ctx->pc = 0x2078acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_2078b0:
    // 0x2078b0: 0x44821000
    ctx->pc = 0x2078b0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_2078b4:
    // 0x2078b4: 0x27a400c0
    ctx->pc = 0x2078b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
label_2078b8:
    // 0x2078b8: 0x3c023f80
    ctx->pc = 0x2078b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_2078bc:
    // 0x2078bc: 0x44820800
    ctx->pc = 0x2078bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2078c0:
    // 0x2078c0: 0x0
    ctx->pc = 0x2078c0u;
    // NOP
label_2078c4:
    // 0x2078c4: 0x4600101a
    ctx->pc = 0x2078c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2078c8:
    // 0x2078c8: 0x46000801
    ctx->pc = 0x2078c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2078cc:
    // 0x2078cc: 0x27a500d0
    ctx->pc = 0x2078ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
label_2078d0:
    // 0x2078d0: 0x4600101c
    ctx->pc = 0x2078d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2078d4:
    // 0x2078d4: 0xe7a000c0
    ctx->pc = 0x2078d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2078d8:
    // 0x2078d8: 0xc6801d78
    ctx->pc = 0x2078d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2078dc:
    // 0x2078dc: 0x4600101a
    ctx->pc = 0x2078dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2078e0:
    // 0x2078e0: 0x46000801
    ctx->pc = 0x2078e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2078e4:
    // 0x2078e4: 0x4600101c
    ctx->pc = 0x2078e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2078e8:
    // 0x2078e8: 0xe7a000c4
    ctx->pc = 0x2078e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2078ec:
    // 0x2078ec: 0xc6821d78
    ctx->pc = 0x2078ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2078f0:
    // 0x2078f0: 0x46020801
    ctx->pc = 0x2078f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2078f4:
    // 0x2078f4: 0x46001000
    ctx->pc = 0x2078f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2078f8:
    // 0x2078f8: 0xc06bf2b
label_2078fc:
    if (ctx->pc == 0x2078FCu) {
        ctx->pc = 0x2078FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x207900u;
        goto label_207900;
    }
    ctx->pc = 0x2078F8u;
    SET_GPR_U32(ctx, 31, 0x207900u);
    ctx->pc = 0x2078FCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207900u; }
        else if (ctx->pc != 0x207900u) { ctx->pc = 0x207900u; }
    }
    if (ctx->pc != 0x207900u) { return; }
    ctx->pc = 0x207900u;
label_207900:
    // 0x207900: 0xc7ac00d0
    ctx->pc = 0x207900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_207904:
    // 0x207904: 0xc7ad00d4
    ctx->pc = 0x207904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_207908:
    // 0x207908: 0xc7ae00d8
    ctx->pc = 0x207908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_20790c:
    // 0x20790c: 0x26841d94
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 7572));
label_207910:
    // 0x207910: 0xc072348
label_207914:
    if (ctx->pc == 0x207914u) {
        ctx->pc = 0x207914u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 7576));
        ctx->pc = 0x207918u;
        goto label_207918;
    }
    ctx->pc = 0x207910u;
    SET_GPR_U32(ctx, 31, 0x207918u);
    ctx->pc = 0x207914u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 7576));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207918u; }
        else if (ctx->pc != 0x207918u) { ctx->pc = 0x207918u; }
    }
    if (ctx->pc != 0x207918u) { return; }
    ctx->pc = 0x207918u;
label_207918:
    // 0x207918: 0x4bff6b7e
    ctx->pc = 0x207918u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_20791c:
    // 0x20791c: 0x4bfe6b7e
    ctx->pc = 0x20791cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_207920:
    // 0x207920: 0x4bfd6b7e
    ctx->pc = 0x207920u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_207924:
    // 0x207924: 0x4bfc6b7e
    ctx->pc = 0x207924u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_207928:
    // 0x207928: 0x7bbf0070
    ctx->pc = 0x207928u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20792c:
    // 0x20792c: 0x7bb60060
    ctx->pc = 0x20792cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_207930:
    // 0x207930: 0x7bb50050
    ctx->pc = 0x207930u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207934:
    // 0x207934: 0x7bb40040
    ctx->pc = 0x207934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_207938:
    // 0x207938: 0x7bb30030
    ctx->pc = 0x207938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20793c:
    // 0x20793c: 0x7bb20020
    ctx->pc = 0x20793cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207940:
    // 0x207940: 0x7bb10010
    ctx->pc = 0x207940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207944:
    // 0x207944: 0x7bb00000
    ctx->pc = 0x207944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_207948:
    // 0x207948: 0x3e00008
label_20794c:
    if (ctx->pc == 0x20794Cu) {
        ctx->pc = 0x20794Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x207950u;
        goto label_fallthrough_0x207948;
    }
    ctx->pc = 0x207948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20794Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206F70u: goto label_206f70;
            case 0x206F74u: goto label_206f74;
            case 0x206F78u: goto label_206f78;
            case 0x206F7Cu: goto label_206f7c;
            case 0x206F80u: goto label_206f80;
            case 0x206F84u: goto label_206f84;
            case 0x206F88u: goto label_206f88;
            case 0x206F8Cu: goto label_206f8c;
            case 0x206F90u: goto label_206f90;
            case 0x206F94u: goto label_206f94;
            case 0x206F98u: goto label_206f98;
            case 0x206F9Cu: goto label_206f9c;
            case 0x206FA0u: goto label_206fa0;
            case 0x206FA4u: goto label_206fa4;
            case 0x206FA8u: goto label_206fa8;
            case 0x206FACu: goto label_206fac;
            case 0x206FB0u: goto label_206fb0;
            case 0x206FB4u: goto label_206fb4;
            case 0x206FB8u: goto label_206fb8;
            case 0x206FBCu: goto label_206fbc;
            case 0x206FC0u: goto label_206fc0;
            case 0x206FC4u: goto label_206fc4;
            case 0x206FC8u: goto label_206fc8;
            case 0x206FCCu: goto label_206fcc;
            case 0x206FD0u: goto label_206fd0;
            case 0x206FD4u: goto label_206fd4;
            case 0x206FD8u: goto label_206fd8;
            case 0x206FDCu: goto label_206fdc;
            case 0x206FE0u: goto label_206fe0;
            case 0x206FE4u: goto label_206fe4;
            case 0x206FE8u: goto label_206fe8;
            case 0x206FECu: goto label_206fec;
            case 0x206FF0u: goto label_206ff0;
            case 0x206FF4u: goto label_206ff4;
            case 0x206FF8u: goto label_206ff8;
            case 0x206FFCu: goto label_206ffc;
            case 0x207000u: goto label_207000;
            case 0x207004u: goto label_207004;
            case 0x207008u: goto label_207008;
            case 0x20700Cu: goto label_20700c;
            case 0x207010u: goto label_207010;
            case 0x207014u: goto label_207014;
            case 0x207018u: goto label_207018;
            case 0x20701Cu: goto label_20701c;
            case 0x207020u: goto label_207020;
            case 0x207024u: goto label_207024;
            case 0x207028u: goto label_207028;
            case 0x20702Cu: goto label_20702c;
            case 0x207030u: goto label_207030;
            case 0x207034u: goto label_207034;
            case 0x207038u: goto label_207038;
            case 0x20703Cu: goto label_20703c;
            case 0x207040u: goto label_207040;
            case 0x207044u: goto label_207044;
            case 0x207048u: goto label_207048;
            case 0x20704Cu: goto label_20704c;
            case 0x207050u: goto label_207050;
            case 0x207054u: goto label_207054;
            case 0x207058u: goto label_207058;
            case 0x20705Cu: goto label_20705c;
            case 0x207060u: goto label_207060;
            case 0x207064u: goto label_207064;
            case 0x207068u: goto label_207068;
            case 0x20706Cu: goto label_20706c;
            case 0x207070u: goto label_207070;
            case 0x207074u: goto label_207074;
            case 0x207078u: goto label_207078;
            case 0x20707Cu: goto label_20707c;
            case 0x207080u: goto label_207080;
            case 0x207084u: goto label_207084;
            case 0x207088u: goto label_207088;
            case 0x20708Cu: goto label_20708c;
            case 0x207090u: goto label_207090;
            case 0x207094u: goto label_207094;
            case 0x207098u: goto label_207098;
            case 0x20709Cu: goto label_20709c;
            case 0x2070A0u: goto label_2070a0;
            case 0x2070A4u: goto label_2070a4;
            case 0x2070A8u: goto label_2070a8;
            case 0x2070ACu: goto label_2070ac;
            case 0x2070B0u: goto label_2070b0;
            case 0x2070B4u: goto label_2070b4;
            case 0x2070B8u: goto label_2070b8;
            case 0x2070BCu: goto label_2070bc;
            case 0x2070C0u: goto label_2070c0;
            case 0x2070C4u: goto label_2070c4;
            case 0x2070C8u: goto label_2070c8;
            case 0x2070CCu: goto label_2070cc;
            case 0x2070D0u: goto label_2070d0;
            case 0x2070D4u: goto label_2070d4;
            case 0x2070D8u: goto label_2070d8;
            case 0x2070DCu: goto label_2070dc;
            case 0x2070E0u: goto label_2070e0;
            case 0x2070E4u: goto label_2070e4;
            case 0x2070E8u: goto label_2070e8;
            case 0x2070ECu: goto label_2070ec;
            case 0x2070F0u: goto label_2070f0;
            case 0x2070F4u: goto label_2070f4;
            case 0x2070F8u: goto label_2070f8;
            case 0x2070FCu: goto label_2070fc;
            case 0x207100u: goto label_207100;
            case 0x207104u: goto label_207104;
            case 0x207108u: goto label_207108;
            case 0x20710Cu: goto label_20710c;
            case 0x207110u: goto label_207110;
            case 0x207114u: goto label_207114;
            case 0x207118u: goto label_207118;
            case 0x20711Cu: goto label_20711c;
            case 0x207120u: goto label_207120;
            case 0x207124u: goto label_207124;
            case 0x207128u: goto label_207128;
            case 0x20712Cu: goto label_20712c;
            case 0x207130u: goto label_207130;
            case 0x207134u: goto label_207134;
            case 0x207138u: goto label_207138;
            case 0x20713Cu: goto label_20713c;
            case 0x207140u: goto label_207140;
            case 0x207144u: goto label_207144;
            case 0x207148u: goto label_207148;
            case 0x20714Cu: goto label_20714c;
            case 0x207150u: goto label_207150;
            case 0x207154u: goto label_207154;
            case 0x207158u: goto label_207158;
            case 0x20715Cu: goto label_20715c;
            case 0x207160u: goto label_207160;
            case 0x207164u: goto label_207164;
            case 0x207168u: goto label_207168;
            case 0x20716Cu: goto label_20716c;
            case 0x207170u: goto label_207170;
            case 0x207174u: goto label_207174;
            case 0x207178u: goto label_207178;
            case 0x20717Cu: goto label_20717c;
            case 0x207180u: goto label_207180;
            case 0x207184u: goto label_207184;
            case 0x207188u: goto label_207188;
            case 0x20718Cu: goto label_20718c;
            case 0x207190u: goto label_207190;
            case 0x207194u: goto label_207194;
            case 0x207198u: goto label_207198;
            case 0x20719Cu: goto label_20719c;
            case 0x2071A0u: goto label_2071a0;
            case 0x2071A4u: goto label_2071a4;
            case 0x2071A8u: goto label_2071a8;
            case 0x2071ACu: goto label_2071ac;
            case 0x2071B0u: goto label_2071b0;
            case 0x2071B4u: goto label_2071b4;
            case 0x2071B8u: goto label_2071b8;
            case 0x2071BCu: goto label_2071bc;
            case 0x2071C0u: goto label_2071c0;
            case 0x2071C4u: goto label_2071c4;
            case 0x2071C8u: goto label_2071c8;
            case 0x2071CCu: goto label_2071cc;
            case 0x2071D0u: goto label_2071d0;
            case 0x2071D4u: goto label_2071d4;
            case 0x2071D8u: goto label_2071d8;
            case 0x2071DCu: goto label_2071dc;
            case 0x2071E0u: goto label_2071e0;
            case 0x2071E4u: goto label_2071e4;
            case 0x2071E8u: goto label_2071e8;
            case 0x2071ECu: goto label_2071ec;
            case 0x2071F0u: goto label_2071f0;
            case 0x2071F4u: goto label_2071f4;
            case 0x2071F8u: goto label_2071f8;
            case 0x2071FCu: goto label_2071fc;
            case 0x207200u: goto label_207200;
            case 0x207204u: goto label_207204;
            case 0x207208u: goto label_207208;
            case 0x20720Cu: goto label_20720c;
            case 0x207210u: goto label_207210;
            case 0x207214u: goto label_207214;
            case 0x207218u: goto label_207218;
            case 0x20721Cu: goto label_20721c;
            case 0x207220u: goto label_207220;
            case 0x207224u: goto label_207224;
            case 0x207228u: goto label_207228;
            case 0x20722Cu: goto label_20722c;
            case 0x207230u: goto label_207230;
            case 0x207234u: goto label_207234;
            case 0x207238u: goto label_207238;
            case 0x20723Cu: goto label_20723c;
            case 0x207240u: goto label_207240;
            case 0x207244u: goto label_207244;
            case 0x207248u: goto label_207248;
            case 0x20724Cu: goto label_20724c;
            case 0x207250u: goto label_207250;
            case 0x207254u: goto label_207254;
            case 0x207258u: goto label_207258;
            case 0x20725Cu: goto label_20725c;
            case 0x207260u: goto label_207260;
            case 0x207264u: goto label_207264;
            case 0x207268u: goto label_207268;
            case 0x20726Cu: goto label_20726c;
            case 0x207270u: goto label_207270;
            case 0x207274u: goto label_207274;
            case 0x207278u: goto label_207278;
            case 0x20727Cu: goto label_20727c;
            case 0x207280u: goto label_207280;
            case 0x207284u: goto label_207284;
            case 0x207288u: goto label_207288;
            case 0x20728Cu: goto label_20728c;
            case 0x207290u: goto label_207290;
            case 0x207294u: goto label_207294;
            case 0x207298u: goto label_207298;
            case 0x20729Cu: goto label_20729c;
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            default: break;
        }
        return;
    }
label_fallthrough_0x207948:
    ctx->pc = 0x207950u;
}
