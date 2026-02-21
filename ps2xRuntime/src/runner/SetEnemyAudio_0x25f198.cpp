#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetEnemyAudio
// Address: 0x25f198 - 0x25f9b0
void SetEnemyAudio_0x25f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25f198u;

label_25f198:
    // 0x25f198: 0x27bdff50
    ctx->pc = 0x25f198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_25f19c:
    // 0x25f19c: 0xffbf00a0
    ctx->pc = 0x25f19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_25f1a0:
    // 0x25f1a0: 0xffb50090
    ctx->pc = 0x25f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_25f1a4:
    // 0x25f1a4: 0xffb40080
    ctx->pc = 0x25f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_25f1a8:
    // 0x25f1a8: 0xffb30070
    ctx->pc = 0x25f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_25f1ac:
    // 0x25f1ac: 0xffb20060
    ctx->pc = 0x25f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_25f1b0:
    // 0x25f1b0: 0xffb10050
    ctx->pc = 0x25f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_25f1b4:
    // 0x25f1b4: 0xffb00040
    ctx->pc = 0x25f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_25f1b8:
    // 0x25f1b8: 0x80982d
    ctx->pc = 0x25f1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f1bc:
    // 0x25f1bc: 0xa0882d
    ctx->pc = 0x25f1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f1c0:
    // 0x25f1c0: 0x3c02003b
    ctx->pc = 0x25f1c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_25f1c4:
    // 0x25f1c4: 0x245494b0
    ctx->pc = 0x25f1c4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294939824));
label_25f1c8:
    // 0x25f1c8: 0x3c030034
    ctx->pc = 0x25f1c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_25f1cc:
    // 0x25f1cc: 0x2463e820
    ctx->pc = 0x25f1ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961184));
label_25f1d0:
    // 0x25f1d0: 0x131080
    ctx->pc = 0x25f1d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_25f1d4:
    // 0x25f1d4: 0x431021
    ctx->pc = 0x25f1d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25f1d8:
    // 0x25f1d8: 0x12200004
label_25f1dc:
    if (ctx->pc == 0x25F1DCu) {
        ctx->pc = 0x25F1DCu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x25F1E0u;
        goto label_25f1e0;
    }
    ctx->pc = 0x25F1D8u;
    {
        const bool branch_taken_0x25f1d8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F1DCu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x25f1d8) {
            ctx->pc = 0x25F1ECu;
            goto label_25f1ec;
        }
    }
    ctx->pc = 0x25F1E0u;
label_25f1e0:
    // 0x25f1e0: 0x82220000
    ctx->pc = 0x25f1e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_25f1e4:
    // 0x25f1e4: 0x14400003
label_25f1e8:
    if (ctx->pc == 0x25F1E8u) {
        ctx->pc = 0x25F1E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x25F1ECu;
        goto label_25f1ec;
    }
    ctx->pc = 0x25F1E4u;
    {
        const bool branch_taken_0x25f1e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25F1E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x25f1e4) {
            ctx->pc = 0x25F1F4u;
            goto label_25f1f4;
        }
    }
    ctx->pc = 0x25F1ECu;
label_25f1ec:
    // 0x25f1ec: 0x2413ffff
    ctx->pc = 0x25f1ecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f1f0:
    // 0x25f1f0: 0x3c02003c
    ctx->pc = 0x25f1f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_25f1f4:
    // 0x25f1f4: 0x24422f88
    ctx->pc = 0x25f1f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12168));
label_25f1f8:
    // 0x25f1f8: 0x121880
    ctx->pc = 0x25f1f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_25f1fc:
    // 0x25f1fc: 0x621021
    ctx->pc = 0x25f1fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25f200:
    // 0x25f200: 0xac530000
    ctx->pc = 0x25f200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_25f204:
    // 0x25f204: 0x2e42001e
    ctx->pc = 0x25f204u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 30));
label_25f208:
    // 0x25f208: 0x10400041
label_25f20c:
    if (ctx->pc == 0x25F20Cu) {
        ctx->pc = 0x25F20Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F210u;
        goto label_25f210;
    }
    ctx->pc = 0x25F208u;
    {
        const bool branch_taken_0x25f208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F20Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25f208) {
            ctx->pc = 0x25F310u;
            goto label_25f310;
        }
    }
    ctx->pc = 0x25F210u;
label_25f210:
    // 0x25f210: 0x3c02003b
    ctx->pc = 0x25f210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_25f214:
    // 0x25f214: 0x244295b0
    ctx->pc = 0x25f214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940080));
label_25f218:
    // 0x25f218: 0x621021
    ctx->pc = 0x25f218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25f21c:
    // 0x25f21c: 0x8c420000
    ctx->pc = 0x25f21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f220:
    // 0x25f220: 0x400008
label_25f224:
    if (ctx->pc == 0x25F224u) {
        ctx->pc = 0x25F228u;
        goto label_25f228;
    }
    ctx->pc = 0x25F220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F198u: goto label_25f198;
            case 0x25F19Cu: goto label_25f19c;
            case 0x25F1A0u: goto label_25f1a0;
            case 0x25F1A4u: goto label_25f1a4;
            case 0x25F1A8u: goto label_25f1a8;
            case 0x25F1ACu: goto label_25f1ac;
            case 0x25F1B0u: goto label_25f1b0;
            case 0x25F1B4u: goto label_25f1b4;
            case 0x25F1B8u: goto label_25f1b8;
            case 0x25F1BCu: goto label_25f1bc;
            case 0x25F1C0u: goto label_25f1c0;
            case 0x25F1C4u: goto label_25f1c4;
            case 0x25F1C8u: goto label_25f1c8;
            case 0x25F1CCu: goto label_25f1cc;
            case 0x25F1D0u: goto label_25f1d0;
            case 0x25F1D4u: goto label_25f1d4;
            case 0x25F1D8u: goto label_25f1d8;
            case 0x25F1DCu: goto label_25f1dc;
            case 0x25F1E0u: goto label_25f1e0;
            case 0x25F1E4u: goto label_25f1e4;
            case 0x25F1E8u: goto label_25f1e8;
            case 0x25F1ECu: goto label_25f1ec;
            case 0x25F1F0u: goto label_25f1f0;
            case 0x25F1F4u: goto label_25f1f4;
            case 0x25F1F8u: goto label_25f1f8;
            case 0x25F1FCu: goto label_25f1fc;
            case 0x25F200u: goto label_25f200;
            case 0x25F204u: goto label_25f204;
            case 0x25F208u: goto label_25f208;
            case 0x25F20Cu: goto label_25f20c;
            case 0x25F210u: goto label_25f210;
            case 0x25F214u: goto label_25f214;
            case 0x25F218u: goto label_25f218;
            case 0x25F21Cu: goto label_25f21c;
            case 0x25F220u: goto label_25f220;
            case 0x25F224u: goto label_25f224;
            case 0x25F228u: goto label_25f228;
            case 0x25F22Cu: goto label_25f22c;
            case 0x25F230u: goto label_25f230;
            case 0x25F234u: goto label_25f234;
            case 0x25F238u: goto label_25f238;
            case 0x25F23Cu: goto label_25f23c;
            case 0x25F240u: goto label_25f240;
            case 0x25F244u: goto label_25f244;
            case 0x25F248u: goto label_25f248;
            case 0x25F24Cu: goto label_25f24c;
            case 0x25F250u: goto label_25f250;
            case 0x25F254u: goto label_25f254;
            case 0x25F258u: goto label_25f258;
            case 0x25F25Cu: goto label_25f25c;
            case 0x25F260u: goto label_25f260;
            case 0x25F264u: goto label_25f264;
            case 0x25F268u: goto label_25f268;
            case 0x25F26Cu: goto label_25f26c;
            case 0x25F270u: goto label_25f270;
            case 0x25F274u: goto label_25f274;
            case 0x25F278u: goto label_25f278;
            case 0x25F27Cu: goto label_25f27c;
            case 0x25F280u: goto label_25f280;
            case 0x25F284u: goto label_25f284;
            case 0x25F288u: goto label_25f288;
            case 0x25F28Cu: goto label_25f28c;
            case 0x25F290u: goto label_25f290;
            case 0x25F294u: goto label_25f294;
            case 0x25F298u: goto label_25f298;
            case 0x25F29Cu: goto label_25f29c;
            case 0x25F2A0u: goto label_25f2a0;
            case 0x25F2A4u: goto label_25f2a4;
            case 0x25F2A8u: goto label_25f2a8;
            case 0x25F2ACu: goto label_25f2ac;
            case 0x25F2B0u: goto label_25f2b0;
            case 0x25F2B4u: goto label_25f2b4;
            case 0x25F2B8u: goto label_25f2b8;
            case 0x25F2BCu: goto label_25f2bc;
            case 0x25F2C0u: goto label_25f2c0;
            case 0x25F2C4u: goto label_25f2c4;
            case 0x25F2C8u: goto label_25f2c8;
            case 0x25F2CCu: goto label_25f2cc;
            case 0x25F2D0u: goto label_25f2d0;
            case 0x25F2D4u: goto label_25f2d4;
            case 0x25F2D8u: goto label_25f2d8;
            case 0x25F2DCu: goto label_25f2dc;
            case 0x25F2E0u: goto label_25f2e0;
            case 0x25F2E4u: goto label_25f2e4;
            case 0x25F2E8u: goto label_25f2e8;
            case 0x25F2ECu: goto label_25f2ec;
            case 0x25F2F0u: goto label_25f2f0;
            case 0x25F2F4u: goto label_25f2f4;
            case 0x25F2F8u: goto label_25f2f8;
            case 0x25F2FCu: goto label_25f2fc;
            case 0x25F300u: goto label_25f300;
            case 0x25F304u: goto label_25f304;
            case 0x25F308u: goto label_25f308;
            case 0x25F30Cu: goto label_25f30c;
            case 0x25F310u: goto label_25f310;
            case 0x25F314u: goto label_25f314;
            case 0x25F318u: goto label_25f318;
            case 0x25F31Cu: goto label_25f31c;
            case 0x25F320u: goto label_25f320;
            case 0x25F324u: goto label_25f324;
            case 0x25F328u: goto label_25f328;
            case 0x25F32Cu: goto label_25f32c;
            case 0x25F330u: goto label_25f330;
            case 0x25F334u: goto label_25f334;
            case 0x25F338u: goto label_25f338;
            case 0x25F33Cu: goto label_25f33c;
            case 0x25F340u: goto label_25f340;
            case 0x25F344u: goto label_25f344;
            case 0x25F348u: goto label_25f348;
            case 0x25F34Cu: goto label_25f34c;
            case 0x25F350u: goto label_25f350;
            case 0x25F354u: goto label_25f354;
            case 0x25F358u: goto label_25f358;
            case 0x25F35Cu: goto label_25f35c;
            case 0x25F360u: goto label_25f360;
            case 0x25F364u: goto label_25f364;
            case 0x25F368u: goto label_25f368;
            case 0x25F36Cu: goto label_25f36c;
            case 0x25F370u: goto label_25f370;
            case 0x25F374u: goto label_25f374;
            case 0x25F378u: goto label_25f378;
            case 0x25F37Cu: goto label_25f37c;
            case 0x25F380u: goto label_25f380;
            case 0x25F384u: goto label_25f384;
            case 0x25F388u: goto label_25f388;
            case 0x25F38Cu: goto label_25f38c;
            case 0x25F390u: goto label_25f390;
            case 0x25F394u: goto label_25f394;
            case 0x25F398u: goto label_25f398;
            case 0x25F39Cu: goto label_25f39c;
            case 0x25F3A0u: goto label_25f3a0;
            case 0x25F3A4u: goto label_25f3a4;
            case 0x25F3A8u: goto label_25f3a8;
            case 0x25F3ACu: goto label_25f3ac;
            case 0x25F3B0u: goto label_25f3b0;
            case 0x25F3B4u: goto label_25f3b4;
            case 0x25F3B8u: goto label_25f3b8;
            case 0x25F3BCu: goto label_25f3bc;
            case 0x25F3C0u: goto label_25f3c0;
            case 0x25F3C4u: goto label_25f3c4;
            case 0x25F3C8u: goto label_25f3c8;
            case 0x25F3CCu: goto label_25f3cc;
            case 0x25F3D0u: goto label_25f3d0;
            case 0x25F3D4u: goto label_25f3d4;
            case 0x25F3D8u: goto label_25f3d8;
            case 0x25F3DCu: goto label_25f3dc;
            case 0x25F3E0u: goto label_25f3e0;
            case 0x25F3E4u: goto label_25f3e4;
            case 0x25F3E8u: goto label_25f3e8;
            case 0x25F3ECu: goto label_25f3ec;
            case 0x25F3F0u: goto label_25f3f0;
            case 0x25F3F4u: goto label_25f3f4;
            case 0x25F3F8u: goto label_25f3f8;
            case 0x25F3FCu: goto label_25f3fc;
            case 0x25F400u: goto label_25f400;
            case 0x25F404u: goto label_25f404;
            case 0x25F408u: goto label_25f408;
            case 0x25F40Cu: goto label_25f40c;
            case 0x25F410u: goto label_25f410;
            case 0x25F414u: goto label_25f414;
            case 0x25F418u: goto label_25f418;
            case 0x25F41Cu: goto label_25f41c;
            case 0x25F420u: goto label_25f420;
            case 0x25F424u: goto label_25f424;
            case 0x25F428u: goto label_25f428;
            case 0x25F42Cu: goto label_25f42c;
            case 0x25F430u: goto label_25f430;
            case 0x25F434u: goto label_25f434;
            case 0x25F438u: goto label_25f438;
            case 0x25F43Cu: goto label_25f43c;
            case 0x25F440u: goto label_25f440;
            case 0x25F444u: goto label_25f444;
            case 0x25F448u: goto label_25f448;
            case 0x25F44Cu: goto label_25f44c;
            case 0x25F450u: goto label_25f450;
            case 0x25F454u: goto label_25f454;
            case 0x25F458u: goto label_25f458;
            case 0x25F45Cu: goto label_25f45c;
            case 0x25F460u: goto label_25f460;
            case 0x25F464u: goto label_25f464;
            case 0x25F468u: goto label_25f468;
            case 0x25F46Cu: goto label_25f46c;
            case 0x25F470u: goto label_25f470;
            case 0x25F474u: goto label_25f474;
            case 0x25F478u: goto label_25f478;
            case 0x25F47Cu: goto label_25f47c;
            case 0x25F480u: goto label_25f480;
            case 0x25F484u: goto label_25f484;
            case 0x25F488u: goto label_25f488;
            case 0x25F48Cu: goto label_25f48c;
            case 0x25F490u: goto label_25f490;
            case 0x25F494u: goto label_25f494;
            case 0x25F498u: goto label_25f498;
            case 0x25F49Cu: goto label_25f49c;
            case 0x25F4A0u: goto label_25f4a0;
            case 0x25F4A4u: goto label_25f4a4;
            case 0x25F4A8u: goto label_25f4a8;
            case 0x25F4ACu: goto label_25f4ac;
            case 0x25F4B0u: goto label_25f4b0;
            case 0x25F4B4u: goto label_25f4b4;
            case 0x25F4B8u: goto label_25f4b8;
            case 0x25F4BCu: goto label_25f4bc;
            case 0x25F4C0u: goto label_25f4c0;
            case 0x25F4C4u: goto label_25f4c4;
            case 0x25F4C8u: goto label_25f4c8;
            case 0x25F4CCu: goto label_25f4cc;
            case 0x25F4D0u: goto label_25f4d0;
            case 0x25F4D4u: goto label_25f4d4;
            case 0x25F4D8u: goto label_25f4d8;
            case 0x25F4DCu: goto label_25f4dc;
            case 0x25F4E0u: goto label_25f4e0;
            case 0x25F4E4u: goto label_25f4e4;
            case 0x25F4E8u: goto label_25f4e8;
            case 0x25F4ECu: goto label_25f4ec;
            case 0x25F4F0u: goto label_25f4f0;
            case 0x25F4F4u: goto label_25f4f4;
            case 0x25F4F8u: goto label_25f4f8;
            case 0x25F4FCu: goto label_25f4fc;
            case 0x25F500u: goto label_25f500;
            case 0x25F504u: goto label_25f504;
            case 0x25F508u: goto label_25f508;
            case 0x25F50Cu: goto label_25f50c;
            case 0x25F510u: goto label_25f510;
            case 0x25F514u: goto label_25f514;
            case 0x25F518u: goto label_25f518;
            case 0x25F51Cu: goto label_25f51c;
            case 0x25F520u: goto label_25f520;
            case 0x25F524u: goto label_25f524;
            case 0x25F528u: goto label_25f528;
            case 0x25F52Cu: goto label_25f52c;
            case 0x25F530u: goto label_25f530;
            case 0x25F534u: goto label_25f534;
            case 0x25F538u: goto label_25f538;
            case 0x25F53Cu: goto label_25f53c;
            case 0x25F540u: goto label_25f540;
            case 0x25F544u: goto label_25f544;
            case 0x25F548u: goto label_25f548;
            case 0x25F54Cu: goto label_25f54c;
            case 0x25F550u: goto label_25f550;
            case 0x25F554u: goto label_25f554;
            case 0x25F558u: goto label_25f558;
            case 0x25F55Cu: goto label_25f55c;
            case 0x25F560u: goto label_25f560;
            case 0x25F564u: goto label_25f564;
            case 0x25F568u: goto label_25f568;
            case 0x25F56Cu: goto label_25f56c;
            case 0x25F570u: goto label_25f570;
            case 0x25F574u: goto label_25f574;
            case 0x25F578u: goto label_25f578;
            case 0x25F57Cu: goto label_25f57c;
            case 0x25F580u: goto label_25f580;
            case 0x25F584u: goto label_25f584;
            case 0x25F588u: goto label_25f588;
            case 0x25F58Cu: goto label_25f58c;
            case 0x25F590u: goto label_25f590;
            case 0x25F594u: goto label_25f594;
            case 0x25F598u: goto label_25f598;
            case 0x25F59Cu: goto label_25f59c;
            case 0x25F5A0u: goto label_25f5a0;
            case 0x25F5A4u: goto label_25f5a4;
            case 0x25F5A8u: goto label_25f5a8;
            case 0x25F5ACu: goto label_25f5ac;
            case 0x25F5B0u: goto label_25f5b0;
            case 0x25F5B4u: goto label_25f5b4;
            case 0x25F5B8u: goto label_25f5b8;
            case 0x25F5BCu: goto label_25f5bc;
            case 0x25F5C0u: goto label_25f5c0;
            case 0x25F5C4u: goto label_25f5c4;
            case 0x25F5C8u: goto label_25f5c8;
            case 0x25F5CCu: goto label_25f5cc;
            case 0x25F5D0u: goto label_25f5d0;
            case 0x25F5D4u: goto label_25f5d4;
            case 0x25F5D8u: goto label_25f5d8;
            case 0x25F5DCu: goto label_25f5dc;
            case 0x25F5E0u: goto label_25f5e0;
            case 0x25F5E4u: goto label_25f5e4;
            case 0x25F5E8u: goto label_25f5e8;
            case 0x25F5ECu: goto label_25f5ec;
            case 0x25F5F0u: goto label_25f5f0;
            case 0x25F5F4u: goto label_25f5f4;
            case 0x25F5F8u: goto label_25f5f8;
            case 0x25F5FCu: goto label_25f5fc;
            case 0x25F600u: goto label_25f600;
            case 0x25F604u: goto label_25f604;
            case 0x25F608u: goto label_25f608;
            case 0x25F60Cu: goto label_25f60c;
            case 0x25F610u: goto label_25f610;
            case 0x25F614u: goto label_25f614;
            case 0x25F618u: goto label_25f618;
            case 0x25F61Cu: goto label_25f61c;
            case 0x25F620u: goto label_25f620;
            case 0x25F624u: goto label_25f624;
            case 0x25F628u: goto label_25f628;
            case 0x25F62Cu: goto label_25f62c;
            case 0x25F630u: goto label_25f630;
            case 0x25F634u: goto label_25f634;
            case 0x25F638u: goto label_25f638;
            case 0x25F63Cu: goto label_25f63c;
            case 0x25F640u: goto label_25f640;
            case 0x25F644u: goto label_25f644;
            case 0x25F648u: goto label_25f648;
            case 0x25F64Cu: goto label_25f64c;
            case 0x25F650u: goto label_25f650;
            case 0x25F654u: goto label_25f654;
            case 0x25F658u: goto label_25f658;
            case 0x25F65Cu: goto label_25f65c;
            case 0x25F660u: goto label_25f660;
            case 0x25F664u: goto label_25f664;
            case 0x25F668u: goto label_25f668;
            case 0x25F66Cu: goto label_25f66c;
            case 0x25F670u: goto label_25f670;
            case 0x25F674u: goto label_25f674;
            case 0x25F678u: goto label_25f678;
            case 0x25F67Cu: goto label_25f67c;
            case 0x25F680u: goto label_25f680;
            case 0x25F684u: goto label_25f684;
            case 0x25F688u: goto label_25f688;
            case 0x25F68Cu: goto label_25f68c;
            case 0x25F690u: goto label_25f690;
            case 0x25F694u: goto label_25f694;
            case 0x25F698u: goto label_25f698;
            case 0x25F69Cu: goto label_25f69c;
            case 0x25F6A0u: goto label_25f6a0;
            case 0x25F6A4u: goto label_25f6a4;
            case 0x25F6A8u: goto label_25f6a8;
            case 0x25F6ACu: goto label_25f6ac;
            case 0x25F6B0u: goto label_25f6b0;
            case 0x25F6B4u: goto label_25f6b4;
            case 0x25F6B8u: goto label_25f6b8;
            case 0x25F6BCu: goto label_25f6bc;
            case 0x25F6C0u: goto label_25f6c0;
            case 0x25F6C4u: goto label_25f6c4;
            case 0x25F6C8u: goto label_25f6c8;
            case 0x25F6CCu: goto label_25f6cc;
            case 0x25F6D0u: goto label_25f6d0;
            case 0x25F6D4u: goto label_25f6d4;
            case 0x25F6D8u: goto label_25f6d8;
            case 0x25F6DCu: goto label_25f6dc;
            case 0x25F6E0u: goto label_25f6e0;
            case 0x25F6E4u: goto label_25f6e4;
            case 0x25F6E8u: goto label_25f6e8;
            case 0x25F6ECu: goto label_25f6ec;
            case 0x25F6F0u: goto label_25f6f0;
            case 0x25F6F4u: goto label_25f6f4;
            case 0x25F6F8u: goto label_25f6f8;
            case 0x25F6FCu: goto label_25f6fc;
            case 0x25F700u: goto label_25f700;
            case 0x25F704u: goto label_25f704;
            case 0x25F708u: goto label_25f708;
            case 0x25F70Cu: goto label_25f70c;
            case 0x25F710u: goto label_25f710;
            case 0x25F714u: goto label_25f714;
            case 0x25F718u: goto label_25f718;
            case 0x25F71Cu: goto label_25f71c;
            case 0x25F720u: goto label_25f720;
            case 0x25F724u: goto label_25f724;
            case 0x25F728u: goto label_25f728;
            case 0x25F72Cu: goto label_25f72c;
            case 0x25F730u: goto label_25f730;
            case 0x25F734u: goto label_25f734;
            case 0x25F738u: goto label_25f738;
            case 0x25F73Cu: goto label_25f73c;
            case 0x25F740u: goto label_25f740;
            case 0x25F744u: goto label_25f744;
            case 0x25F748u: goto label_25f748;
            case 0x25F74Cu: goto label_25f74c;
            case 0x25F750u: goto label_25f750;
            case 0x25F754u: goto label_25f754;
            case 0x25F758u: goto label_25f758;
            case 0x25F75Cu: goto label_25f75c;
            case 0x25F760u: goto label_25f760;
            case 0x25F764u: goto label_25f764;
            case 0x25F768u: goto label_25f768;
            case 0x25F76Cu: goto label_25f76c;
            case 0x25F770u: goto label_25f770;
            case 0x25F774u: goto label_25f774;
            case 0x25F778u: goto label_25f778;
            case 0x25F77Cu: goto label_25f77c;
            case 0x25F780u: goto label_25f780;
            case 0x25F784u: goto label_25f784;
            case 0x25F788u: goto label_25f788;
            case 0x25F78Cu: goto label_25f78c;
            case 0x25F790u: goto label_25f790;
            case 0x25F794u: goto label_25f794;
            case 0x25F798u: goto label_25f798;
            case 0x25F79Cu: goto label_25f79c;
            case 0x25F7A0u: goto label_25f7a0;
            case 0x25F7A4u: goto label_25f7a4;
            case 0x25F7A8u: goto label_25f7a8;
            case 0x25F7ACu: goto label_25f7ac;
            case 0x25F7B0u: goto label_25f7b0;
            case 0x25F7B4u: goto label_25f7b4;
            case 0x25F7B8u: goto label_25f7b8;
            case 0x25F7BCu: goto label_25f7bc;
            case 0x25F7C0u: goto label_25f7c0;
            case 0x25F7C4u: goto label_25f7c4;
            case 0x25F7C8u: goto label_25f7c8;
            case 0x25F7CCu: goto label_25f7cc;
            case 0x25F7D0u: goto label_25f7d0;
            case 0x25F7D4u: goto label_25f7d4;
            case 0x25F7D8u: goto label_25f7d8;
            case 0x25F7DCu: goto label_25f7dc;
            case 0x25F7E0u: goto label_25f7e0;
            case 0x25F7E4u: goto label_25f7e4;
            case 0x25F7E8u: goto label_25f7e8;
            case 0x25F7ECu: goto label_25f7ec;
            case 0x25F7F0u: goto label_25f7f0;
            case 0x25F7F4u: goto label_25f7f4;
            case 0x25F7F8u: goto label_25f7f8;
            case 0x25F7FCu: goto label_25f7fc;
            case 0x25F800u: goto label_25f800;
            case 0x25F804u: goto label_25f804;
            case 0x25F808u: goto label_25f808;
            case 0x25F80Cu: goto label_25f80c;
            case 0x25F810u: goto label_25f810;
            case 0x25F814u: goto label_25f814;
            case 0x25F818u: goto label_25f818;
            case 0x25F81Cu: goto label_25f81c;
            case 0x25F820u: goto label_25f820;
            case 0x25F824u: goto label_25f824;
            case 0x25F828u: goto label_25f828;
            case 0x25F82Cu: goto label_25f82c;
            case 0x25F830u: goto label_25f830;
            case 0x25F834u: goto label_25f834;
            case 0x25F838u: goto label_25f838;
            case 0x25F83Cu: goto label_25f83c;
            case 0x25F840u: goto label_25f840;
            case 0x25F844u: goto label_25f844;
            case 0x25F848u: goto label_25f848;
            case 0x25F84Cu: goto label_25f84c;
            case 0x25F850u: goto label_25f850;
            case 0x25F854u: goto label_25f854;
            case 0x25F858u: goto label_25f858;
            case 0x25F85Cu: goto label_25f85c;
            case 0x25F860u: goto label_25f860;
            case 0x25F864u: goto label_25f864;
            case 0x25F868u: goto label_25f868;
            case 0x25F86Cu: goto label_25f86c;
            case 0x25F870u: goto label_25f870;
            case 0x25F874u: goto label_25f874;
            case 0x25F878u: goto label_25f878;
            case 0x25F87Cu: goto label_25f87c;
            case 0x25F880u: goto label_25f880;
            case 0x25F884u: goto label_25f884;
            case 0x25F888u: goto label_25f888;
            case 0x25F88Cu: goto label_25f88c;
            case 0x25F890u: goto label_25f890;
            case 0x25F894u: goto label_25f894;
            case 0x25F898u: goto label_25f898;
            case 0x25F89Cu: goto label_25f89c;
            case 0x25F8A0u: goto label_25f8a0;
            case 0x25F8A4u: goto label_25f8a4;
            case 0x25F8A8u: goto label_25f8a8;
            case 0x25F8ACu: goto label_25f8ac;
            case 0x25F8B0u: goto label_25f8b0;
            case 0x25F8B4u: goto label_25f8b4;
            case 0x25F8B8u: goto label_25f8b8;
            case 0x25F8BCu: goto label_25f8bc;
            case 0x25F8C0u: goto label_25f8c0;
            case 0x25F8C4u: goto label_25f8c4;
            case 0x25F8C8u: goto label_25f8c8;
            case 0x25F8CCu: goto label_25f8cc;
            case 0x25F8D0u: goto label_25f8d0;
            case 0x25F8D4u: goto label_25f8d4;
            case 0x25F8D8u: goto label_25f8d8;
            case 0x25F8DCu: goto label_25f8dc;
            case 0x25F8E0u: goto label_25f8e0;
            case 0x25F8E4u: goto label_25f8e4;
            case 0x25F8E8u: goto label_25f8e8;
            case 0x25F8ECu: goto label_25f8ec;
            case 0x25F8F0u: goto label_25f8f0;
            case 0x25F8F4u: goto label_25f8f4;
            case 0x25F8F8u: goto label_25f8f8;
            case 0x25F8FCu: goto label_25f8fc;
            case 0x25F900u: goto label_25f900;
            case 0x25F904u: goto label_25f904;
            case 0x25F908u: goto label_25f908;
            case 0x25F90Cu: goto label_25f90c;
            case 0x25F910u: goto label_25f910;
            case 0x25F914u: goto label_25f914;
            case 0x25F918u: goto label_25f918;
            case 0x25F91Cu: goto label_25f91c;
            case 0x25F920u: goto label_25f920;
            case 0x25F924u: goto label_25f924;
            case 0x25F928u: goto label_25f928;
            case 0x25F92Cu: goto label_25f92c;
            case 0x25F930u: goto label_25f930;
            case 0x25F934u: goto label_25f934;
            case 0x25F938u: goto label_25f938;
            case 0x25F93Cu: goto label_25f93c;
            case 0x25F940u: goto label_25f940;
            case 0x25F944u: goto label_25f944;
            case 0x25F948u: goto label_25f948;
            case 0x25F94Cu: goto label_25f94c;
            case 0x25F950u: goto label_25f950;
            case 0x25F954u: goto label_25f954;
            case 0x25F958u: goto label_25f958;
            case 0x25F95Cu: goto label_25f95c;
            case 0x25F960u: goto label_25f960;
            case 0x25F964u: goto label_25f964;
            case 0x25F968u: goto label_25f968;
            case 0x25F96Cu: goto label_25f96c;
            case 0x25F970u: goto label_25f970;
            case 0x25F974u: goto label_25f974;
            case 0x25F978u: goto label_25f978;
            case 0x25F97Cu: goto label_25f97c;
            case 0x25F980u: goto label_25f980;
            case 0x25F984u: goto label_25f984;
            case 0x25F988u: goto label_25f988;
            case 0x25F98Cu: goto label_25f98c;
            case 0x25F990u: goto label_25f990;
            case 0x25F994u: goto label_25f994;
            case 0x25F998u: goto label_25f998;
            case 0x25F99Cu: goto label_25f99c;
            case 0x25F9A0u: goto label_25f9a0;
            case 0x25F9A4u: goto label_25f9a4;
            case 0x25F9A8u: goto label_25f9a8;
            case 0x25F9ACu: goto label_25f9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25F228u;
label_25f228:
    // 0x25f228: 0xc0989a8
label_25f22c:
    if (ctx->pc == 0x25F22Cu) {
        ctx->pc = 0x25F22Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F230u;
        goto label_25f230;
    }
    ctx->pc = 0x25F228u;
    SET_GPR_U32(ctx, 31, 0x25F230u);
    ctx->pc = 0x25F22Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F230u; }
    }
    if (ctx->pc != 0x25F230u) { return; }
    ctx->pc = 0x25F230u;
label_25f230:
    // 0x25f230: 0x3a0202d
    ctx->pc = 0x25f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f234:
    // 0x25f234: 0x3c11003b
    ctx->pc = 0x25f234u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
label_25f238:
    // 0x25f238: 0x262594b8
    ctx->pc = 0x25f238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294939832));
label_25f23c:
    // 0x25f23c: 0xc0b6252
label_25f240:
    if (ctx->pc == 0x25F240u) {
        ctx->pc = 0x25F240u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F244u;
        goto label_25f244;
    }
    ctx->pc = 0x25F23Cu;
    SET_GPR_U32(ctx, 31, 0x25F244u);
    ctx->pc = 0x25F240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F244u; }
    }
    if (ctx->pc != 0x25F244u) { return; }
    ctx->pc = 0x25F244u;
label_25f244:
    // 0x25f244: 0x27b00020
    ctx->pc = 0x25f244u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
label_25f248:
    // 0x25f248: 0xc0989a8
label_25f24c:
    if (ctx->pc == 0x25F24Cu) {
        ctx->pc = 0x25F24Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F250u;
        goto label_25f250;
    }
    ctx->pc = 0x25F248u;
    SET_GPR_U32(ctx, 31, 0x25F250u);
    ctx->pc = 0x25F24Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F250u; }
    }
    if (ctx->pc != 0x25F250u) { return; }
    ctx->pc = 0x25F250u;
label_25f250:
    // 0x25f250: 0x200202d
    ctx->pc = 0x25f250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f254:
    // 0x25f254: 0x262594b8
    ctx->pc = 0x25f254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294939832));
label_25f258:
    // 0x25f258: 0xc0b6252
label_25f25c:
    if (ctx->pc == 0x25F25Cu) {
        ctx->pc = 0x25F25Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F260u;
        goto label_25f260;
    }
    ctx->pc = 0x25F258u;
    SET_GPR_U32(ctx, 31, 0x25F260u);
    ctx->pc = 0x25F25Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F260u; }
    }
    if (ctx->pc != 0x25F260u) { return; }
    ctx->pc = 0x25F260u;
label_25f260:
    // 0x25f260: 0x882d
    ctx->pc = 0x25f260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f264:
    // 0x25f264: 0xc0989a8
label_25f268:
    if (ctx->pc == 0x25F268u) {
        ctx->pc = 0x25F268u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F26Cu;
        goto label_25f26c;
    }
    ctx->pc = 0x25F264u;
    SET_GPR_U32(ctx, 31, 0x25F26Cu);
    ctx->pc = 0x25F268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F26Cu; }
    }
    if (ctx->pc != 0x25F26Cu) { return; }
    ctx->pc = 0x25F26Cu;
label_25f26c:
    // 0x25f26c: 0x3c10003c
    ctx->pc = 0x25f26cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f270:
    // 0x25f270: 0x26042ad0
    ctx->pc = 0x25f270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f274:
    // 0x25f274: 0x3c05003b
    ctx->pc = 0x25f274u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f278:
    // 0x25f278: 0x24a594c0
    ctx->pc = 0x25f278u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939840));
label_25f27c:
    // 0x25f27c: 0xc0b6252
label_25f280:
    if (ctx->pc == 0x25F280u) {
        ctx->pc = 0x25F280u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F284u;
        goto label_25f284;
    }
    ctx->pc = 0x25F27Cu;
    SET_GPR_U32(ctx, 31, 0x25F284u);
    ctx->pc = 0x25F280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F284u; }
    }
    if (ctx->pc != 0x25F284u) { return; }
    ctx->pc = 0x25F284u;
label_25f284:
    // 0x25f284: 0x26042ad0
    ctx->pc = 0x25f284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f288:
    // 0x25f288: 0x2405ffff
    ctx->pc = 0x25f288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f28c:
    // 0x25f28c: 0xc088108
label_25f290:
    if (ctx->pc == 0x25F290u) {
        ctx->pc = 0x25F290u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F294u;
        goto label_25f294;
    }
    ctx->pc = 0x25F28Cu;
    SET_GPR_U32(ctx, 31, 0x25F294u);
    ctx->pc = 0x25F290u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F294u; }
    }
    if (ctx->pc != 0x25F294u) { return; }
    ctx->pc = 0x25F294u;
label_25f294:
    // 0x25f294: 0x3c030034
    ctx->pc = 0x25f294u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_25f298:
    // 0x25f298: 0xac62dab0
    ctx->pc = 0x25f298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957744), GPR_U32(ctx, 2));
label_25f29c:
    // 0x25f29c: 0xc0989a8
label_25f2a0:
    if (ctx->pc == 0x25F2A0u) {
        ctx->pc = 0x25F2A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F2A4u;
        goto label_25f2a4;
    }
    ctx->pc = 0x25F29Cu;
    SET_GPR_U32(ctx, 31, 0x25F2A4u);
    ctx->pc = 0x25F2A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F2A4u; }
    }
    if (ctx->pc != 0x25F2A4u) { return; }
    ctx->pc = 0x25F2A4u;
label_25f2a4:
    // 0x25f2a4: 0x26042ad0
    ctx->pc = 0x25f2a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f2a8:
    // 0x25f2a8: 0x3c05003b
    ctx->pc = 0x25f2a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f2ac:
    // 0x25f2ac: 0x24a594d0
    ctx->pc = 0x25f2acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939856));
label_25f2b0:
    // 0x25f2b0: 0xc0b6252
label_25f2b4:
    if (ctx->pc == 0x25F2B4u) {
        ctx->pc = 0x25F2B4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F2B8u;
        goto label_25f2b8;
    }
    ctx->pc = 0x25F2B0u;
    SET_GPR_U32(ctx, 31, 0x25F2B8u);
    ctx->pc = 0x25F2B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F2B8u; }
    }
    if (ctx->pc != 0x25F2B8u) { return; }
    ctx->pc = 0x25F2B8u;
label_25f2b8:
    // 0x25f2b8: 0x26042ad0
    ctx->pc = 0x25f2b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f2bc:
    // 0x25f2bc: 0x2405ffff
    ctx->pc = 0x25f2bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f2c0:
    // 0x25f2c0: 0xc088108
label_25f2c4:
    if (ctx->pc == 0x25F2C4u) {
        ctx->pc = 0x25F2C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F2C8u;
        goto label_25f2c8;
    }
    ctx->pc = 0x25F2C0u;
    SET_GPR_U32(ctx, 31, 0x25F2C8u);
    ctx->pc = 0x25F2C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F2C8u; }
    }
    if (ctx->pc != 0x25F2C8u) { return; }
    ctx->pc = 0x25F2C8u;
label_25f2c8:
    // 0x25f2c8: 0x3c030034
    ctx->pc = 0x25f2c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_25f2cc:
    // 0x25f2cc: 0xac62dab4
    ctx->pc = 0x25f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957748), GPR_U32(ctx, 2));
label_25f2d0:
    // 0x25f2d0: 0xc0989a8
label_25f2d4:
    if (ctx->pc == 0x25F2D4u) {
        ctx->pc = 0x25F2D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F2D8u;
        goto label_25f2d8;
    }
    ctx->pc = 0x25F2D0u;
    SET_GPR_U32(ctx, 31, 0x25F2D8u);
    ctx->pc = 0x25F2D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F2D8u; }
    }
    if (ctx->pc != 0x25F2D8u) { return; }
    ctx->pc = 0x25F2D8u;
label_25f2d8:
    // 0x25f2d8: 0x26042ad0
    ctx->pc = 0x25f2d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f2dc:
    // 0x25f2dc: 0x3c05003b
    ctx->pc = 0x25f2dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f2e0:
    // 0x25f2e0: 0x24a594e0
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939872));
label_25f2e4:
    // 0x25f2e4: 0xc0b6252
label_25f2e8:
    if (ctx->pc == 0x25F2E8u) {
        ctx->pc = 0x25F2E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F2ECu;
        goto label_25f2ec;
    }
    ctx->pc = 0x25F2E4u;
    SET_GPR_U32(ctx, 31, 0x25F2ECu);
    ctx->pc = 0x25F2E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F2ECu; }
    }
    if (ctx->pc != 0x25F2ECu) { return; }
    ctx->pc = 0x25F2ECu;
label_25f2ec:
    // 0x25f2ec: 0x26042ad0
    ctx->pc = 0x25f2ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f2f0:
    // 0x25f2f0: 0x2405ffff
    ctx->pc = 0x25f2f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f2f4:
    // 0x25f2f4: 0xc088108
label_25f2f8:
    if (ctx->pc == 0x25F2F8u) {
        ctx->pc = 0x25F2F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F2FCu;
        goto label_25f2fc;
    }
    ctx->pc = 0x25F2F4u;
    SET_GPR_U32(ctx, 31, 0x25F2FCu);
    ctx->pc = 0x25F2F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F2FCu; }
    }
    if (ctx->pc != 0x25F2FCu) { return; }
    ctx->pc = 0x25F2FCu;
label_25f2fc:
    // 0x25f2fc: 0x3c030034
    ctx->pc = 0x25f2fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_25f300:
    // 0x25f300: 0xac62dab8
    ctx->pc = 0x25f300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957752), GPR_U32(ctx, 2));
label_25f304:
    // 0x25f304: 0x3c02003b
    ctx->pc = 0x25f304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_25f308:
    // 0x25f308: 0x10000048
label_25f30c:
    if (ctx->pc == 0x25F30Cu) {
        ctx->pc = 0x25F30Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294939888));
        ctx->pc = 0x25F310u;
        goto label_25f310;
    }
    ctx->pc = 0x25F308u;
    {
        const bool branch_taken_0x25f308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F30Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294939888));
        if (branch_taken_0x25f308) {
            ctx->pc = 0x25F42Cu;
            goto label_25f42c;
        }
    }
    ctx->pc = 0x25F310u;
label_25f310:
    // 0x25f310: 0x3a0202d
    ctx->pc = 0x25f310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f314:
    // 0x25f314: 0xc0bf2c1
label_25f318:
    if (ctx->pc == 0x25F318u) {
        ctx->pc = 0x25F318u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F31Cu;
        goto label_25f31c;
    }
    ctx->pc = 0x25F314u;
    SET_GPR_U32(ctx, 31, 0x25F31Cu);
    ctx->pc = 0x25F318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F31Cu; }
    }
    if (ctx->pc != 0x25F31Cu) { return; }
    ctx->pc = 0x25F31Cu;
label_25f31c:
    // 0x25f31c: 0x27a40020
    ctx->pc = 0x25f31cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_25f320:
    // 0x25f320: 0xc0bf2c1
label_25f324:
    if (ctx->pc == 0x25F324u) {
        ctx->pc = 0x25F324u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F328u;
        goto label_25f328;
    }
    ctx->pc = 0x25F320u;
    SET_GPR_U32(ctx, 31, 0x25F328u);
    ctx->pc = 0x25F324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F328u; }
    }
    if (ctx->pc != 0x25F328u) { return; }
    ctx->pc = 0x25F328u;
label_25f328:
    // 0x25f328: 0x882d
    ctx->pc = 0x25f328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f32c:
    // 0x25f32c: 0x24030001
    ctx->pc = 0x25f32cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_25f330:
    // 0x25f330: 0x3a42001d
    ctx->pc = 0x25f330u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 29));
label_25f334:
    // 0x25f334: 0x1000003d
label_25f338:
    if (ctx->pc == 0x25F338u) {
        ctx->pc = 0x25F338u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
        ctx->pc = 0x25F33Cu;
        goto label_25f33c;
    }
    ctx->pc = 0x25F334u;
    {
        const bool branch_taken_0x25f334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F338u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
        if (branch_taken_0x25f334) {
            ctx->pc = 0x25F42Cu;
            goto label_25f42c;
        }
    }
    ctx->pc = 0x25F33Cu;
label_25f33c:
    // 0x25f33c: 0x3c020034
    ctx->pc = 0x25f33cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25f340:
    // 0x25f340: 0x2442e860
    ctx->pc = 0x25f340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961248));
label_25f344:
    // 0x25f344: 0x131880
    ctx->pc = 0x25f344u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f348:
    // 0x25f348: 0x621821
    ctx->pc = 0x25f348u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25f34c:
    // 0x25f34c: 0x8c620000
    ctx->pc = 0x25f34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f350:
    // 0x25f350: 0x2842000a
    ctx->pc = 0x25f350u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
label_25f354:
    // 0x25f354: 0x10400004
label_25f358:
    if (ctx->pc == 0x25F358u) {
        ctx->pc = 0x25F358u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x25F35Cu;
        goto label_25f35c;
    }
    ctx->pc = 0x25F354u;
    {
        const bool branch_taken_0x25f354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F358u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x25f354) {
            ctx->pc = 0x25F368u;
            goto label_25f368;
        }
    }
    ctx->pc = 0x25F35Cu;
label_25f35c:
    // 0x25f35c: 0x8c42d934
    ctx->pc = 0x25f35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f360:
    // 0x25f360: 0x440000c
label_25f364:
    if (ctx->pc == 0x25F364u) {
        ctx->pc = 0x25F364u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F368u;
        goto label_25f368;
    }
    ctx->pc = 0x25F360u;
    {
        const bool branch_taken_0x25f360 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25F364u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25f360) {
            ctx->pc = 0x25F394u;
            goto label_25f394;
        }
    }
    ctx->pc = 0x25F368u;
label_25f368:
    // 0x25f368: 0x3a0202d
    ctx->pc = 0x25f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f36c:
    // 0x25f36c: 0x3c10003b
    ctx->pc = 0x25f36cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_25f370:
    // 0x25f370: 0x260594f8
    ctx->pc = 0x25f370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294939896));
label_25f374:
    // 0x25f374: 0xc0b6252
label_25f378:
    if (ctx->pc == 0x25F378u) {
        ctx->pc = 0x25F378u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F37Cu;
        goto label_25f37c;
    }
    ctx->pc = 0x25F374u;
    SET_GPR_U32(ctx, 31, 0x25F37Cu);
    ctx->pc = 0x25F378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F37Cu; }
    }
    if (ctx->pc != 0x25F37Cu) { return; }
    ctx->pc = 0x25F37Cu;
label_25f37c:
    // 0x25f37c: 0x27a40020
    ctx->pc = 0x25f37cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_25f380:
    // 0x25f380: 0x260594f8
    ctx->pc = 0x25f380u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294939896));
label_25f384:
    // 0x25f384: 0xc0b6252
label_25f388:
    if (ctx->pc == 0x25F388u) {
        ctx->pc = 0x25F388u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F38Cu;
        goto label_25f38c;
    }
    ctx->pc = 0x25F384u;
    SET_GPR_U32(ctx, 31, 0x25F38Cu);
    ctx->pc = 0x25F388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F38Cu; }
    }
    if (ctx->pc != 0x25F38Cu) { return; }
    ctx->pc = 0x25F38Cu;
label_25f38c:
    // 0x25f38c: 0x1000000b
label_25f390:
    if (ctx->pc == 0x25F390u) {
        ctx->pc = 0x25F390u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25F394u;
        goto label_25f394;
    }
    ctx->pc = 0x25F38Cu;
    {
        const bool branch_taken_0x25f38c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F390u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25f38c) {
            ctx->pc = 0x25F3BCu;
            goto label_25f3bc;
        }
    }
    ctx->pc = 0x25F394u;
label_25f394:
    // 0x25f394: 0x3c05003b
    ctx->pc = 0x25f394u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f398:
    // 0x25f398: 0x24a59500
    ctx->pc = 0x25f398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939904));
label_25f39c:
    // 0x25f39c: 0xc0b6252
label_25f3a0:
    if (ctx->pc == 0x25F3A0u) {
        ctx->pc = 0x25F3A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F3A4u;
        goto label_25f3a4;
    }
    ctx->pc = 0x25F39Cu;
    SET_GPR_U32(ctx, 31, 0x25F3A4u);
    ctx->pc = 0x25F3A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3A4u; }
    }
    if (ctx->pc != 0x25F3A4u) { return; }
    ctx->pc = 0x25F3A4u;
label_25f3a4:
    // 0x25f3a4: 0x27a40020
    ctx->pc = 0x25f3a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_25f3a8:
    // 0x25f3a8: 0x3c05003b
    ctx->pc = 0x25f3a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f3ac:
    // 0x25f3ac: 0x24a594f8
    ctx->pc = 0x25f3acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939896));
label_25f3b0:
    // 0x25f3b0: 0xc0b6252
label_25f3b4:
    if (ctx->pc == 0x25F3B4u) {
        ctx->pc = 0x25F3B4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F3B8u;
        goto label_25f3b8;
    }
    ctx->pc = 0x25F3B0u;
    SET_GPR_U32(ctx, 31, 0x25F3B8u);
    ctx->pc = 0x25F3B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3B8u; }
    }
    if (ctx->pc != 0x25F3B8u) { return; }
    ctx->pc = 0x25F3B8u;
label_25f3b8:
    // 0x25f3b8: 0x24110001
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_25f3bc:
    // 0x25f3bc: 0x24020002
    ctx->pc = 0x25f3bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_25f3c0:
    // 0x25f3c0: 0x1242000b
label_25f3c4:
    if (ctx->pc == 0x25F3C4u) {
        ctx->pc = 0x25F3C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x25F3C8u;
        goto label_25f3c8;
    }
    ctx->pc = 0x25F3C0u;
    {
        const bool branch_taken_0x25f3c0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x25F3C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x25f3c0) {
            ctx->pc = 0x25F3F0u;
            goto label_25f3f0;
        }
    }
    ctx->pc = 0x25F3C8u;
label_25f3c8:
    // 0x25f3c8: 0x12420009
label_25f3cc:
    if (ctx->pc == 0x25F3CCu) {
        ctx->pc = 0x25F3CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x25F3D0u;
        goto label_25f3d0;
    }
    ctx->pc = 0x25F3C8u;
    {
        const bool branch_taken_0x25f3c8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x25F3CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x25f3c8) {
            ctx->pc = 0x25F3F0u;
            goto label_25f3f0;
        }
    }
    ctx->pc = 0x25F3D0u;
label_25f3d0:
    // 0x25f3d0: 0x12420007
label_25f3d4:
    if (ctx->pc == 0x25F3D4u) {
        ctx->pc = 0x25F3D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x25F3D8u;
        goto label_25f3d8;
    }
    ctx->pc = 0x25F3D0u;
    {
        const bool branch_taken_0x25f3d0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x25F3D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x25f3d0) {
            ctx->pc = 0x25F3F0u;
            goto label_25f3f0;
        }
    }
    ctx->pc = 0x25F3D8u;
label_25f3d8:
    // 0x25f3d8: 0x12420005
label_25f3dc:
    if (ctx->pc == 0x25F3DCu) {
        ctx->pc = 0x25F3DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x25F3E0u;
        goto label_25f3e0;
    }
    ctx->pc = 0x25F3D8u;
    {
        const bool branch_taken_0x25f3d8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x25F3DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x25f3d8) {
            ctx->pc = 0x25F3F0u;
            goto label_25f3f0;
        }
    }
    ctx->pc = 0x25F3E0u;
label_25f3e0:
    // 0x25f3e0: 0x12420003
label_25f3e4:
    if (ctx->pc == 0x25F3E4u) {
        ctx->pc = 0x25F3E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x25F3E8u;
        goto label_25f3e8;
    }
    ctx->pc = 0x25F3E0u;
    {
        const bool branch_taken_0x25f3e0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x25F3E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x25f3e0) {
            ctx->pc = 0x25F3F0u;
            goto label_25f3f0;
        }
    }
    ctx->pc = 0x25F3E8u;
label_25f3e8:
    // 0x25f3e8: 0x16420003
label_25f3ec:
    if (ctx->pc == 0x25F3ECu) {
        ctx->pc = 0x25F3ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25F3F0u;
        goto label_25f3f0;
    }
    ctx->pc = 0x25F3E8u;
    {
        const bool branch_taken_0x25f3e8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x25F3ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25f3e8) {
            ctx->pc = 0x25F3F8u;
            goto label_25f3f8;
        }
    }
    ctx->pc = 0x25F3F0u;
label_25f3f0:
    // 0x25f3f0: 0x1000000e
label_25f3f4:
    if (ctx->pc == 0x25F3F4u) {
        ctx->pc = 0x25F3F4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F3F8u;
        goto label_25f3f8;
    }
    ctx->pc = 0x25F3F0u;
    {
        const bool branch_taken_0x25f3f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F3F4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25f3f0) {
            ctx->pc = 0x25F42Cu;
            goto label_25f42c;
        }
    }
    ctx->pc = 0x25F3F8u;
label_25f3f8:
    // 0x25f3f8: 0x3a42000b
    ctx->pc = 0x25f3f8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 11));
label_25f3fc:
    // 0x25f3fc: 0x1000000b
label_25f400:
    if (ctx->pc == 0x25F400u) {
        ctx->pc = 0x25F400u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
        ctx->pc = 0x25F404u;
        goto label_25f404;
    }
    ctx->pc = 0x25F3FCu;
    {
        const bool branch_taken_0x25f3fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F400u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
        if (branch_taken_0x25f3fc) {
            ctx->pc = 0x25F42Cu;
            goto label_25f42c;
        }
    }
    ctx->pc = 0x25F404u;
label_25f404:
    // 0x25f404: 0x3a0202d
    ctx->pc = 0x25f404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f408:
    // 0x25f408: 0x3c10003b
    ctx->pc = 0x25f408u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_25f40c:
    // 0x25f40c: 0x26059500
    ctx->pc = 0x25f40cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294939904));
label_25f410:
    // 0x25f410: 0xc0b6252
label_25f414:
    if (ctx->pc == 0x25F414u) {
        ctx->pc = 0x25F414u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F418u;
        goto label_25f418;
    }
    ctx->pc = 0x25F410u;
    SET_GPR_U32(ctx, 31, 0x25F418u);
    ctx->pc = 0x25F414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F418u; }
    }
    if (ctx->pc != 0x25F418u) { return; }
    ctx->pc = 0x25F418u;
label_25f418:
    // 0x25f418: 0x27a40020
    ctx->pc = 0x25f418u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_25f41c:
    // 0x25f41c: 0x26059500
    ctx->pc = 0x25f41cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294939904));
label_25f420:
    // 0x25f420: 0xc0b6252
label_25f424:
    if (ctx->pc == 0x25F424u) {
        ctx->pc = 0x25F424u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F428u;
        goto label_25f428;
    }
    ctx->pc = 0x25F420u;
    SET_GPR_U32(ctx, 31, 0x25F428u);
    ctx->pc = 0x25F424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F428u; }
    }
    if (ctx->pc != 0x25F428u) { return; }
    ctx->pc = 0x25F428u;
label_25f428:
    // 0x25f428: 0x882d
    ctx->pc = 0x25f428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f42c:
    // 0x25f42c: 0x3c10003c
    ctx->pc = 0x25f42cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f430:
    // 0x25f430: 0x26042ad0
    ctx->pc = 0x25f430u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f434:
    // 0x25f434: 0x3c05003b
    ctx->pc = 0x25f434u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f438:
    // 0x25f438: 0x24a59508
    ctx->pc = 0x25f438u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939912));
label_25f43c:
    // 0x25f43c: 0x3a0302d
    ctx->pc = 0x25f43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f440:
    // 0x25f440: 0xc0b6252
label_25f444:
    if (ctx->pc == 0x25F444u) {
        ctx->pc = 0x25F444u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F448u;
        goto label_25f448;
    }
    ctx->pc = 0x25F440u;
    SET_GPR_U32(ctx, 31, 0x25F448u);
    ctx->pc = 0x25F444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F448u; }
    }
    if (ctx->pc != 0x25F448u) { return; }
    ctx->pc = 0x25F448u;
label_25f448:
    // 0x25f448: 0x3c020036
    ctx->pc = 0x25f448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f44c:
    // 0x25f44c: 0x8c42d934
    ctx->pc = 0x25f44cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f450:
    // 0x25f450: 0x58400004
label_25f454:
    if (ctx->pc == 0x25F454u) {
        ctx->pc = 0x25F454u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F458u;
        goto label_25f458;
    }
    ctx->pc = 0x25F450u;
    {
        const bool branch_taken_0x25f450 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f450) {
            ctx->pc = 0x25F454u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F464u;
            goto label_25f464;
        }
    }
    ctx->pc = 0x25F458u;
label_25f458:
    // 0x25f458: 0xc097c4e
label_25f45c:
    if (ctx->pc == 0x25F45Cu) {
        ctx->pc = 0x25F45Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F460u;
        goto label_25f460;
    }
    ctx->pc = 0x25F458u;
    SET_GPR_U32(ctx, 31, 0x25F460u);
    ctx->pc = 0x25F45Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F460u; }
    }
    if (ctx->pc != 0x25F460u) { return; }
    ctx->pc = 0x25F460u;
label_25f460:
    // 0x25f460: 0x3c10003c
    ctx->pc = 0x25f460u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f464:
    // 0x25f464: 0x26042ad0
    ctx->pc = 0x25f464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f468:
    // 0x25f468: 0x2405ffff
    ctx->pc = 0x25f468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f46c:
    // 0x25f46c: 0xc088108
label_25f470:
    if (ctx->pc == 0x25F470u) {
        ctx->pc = 0x25F470u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F474u;
        goto label_25f474;
    }
    ctx->pc = 0x25F46Cu;
    SET_GPR_U32(ctx, 31, 0x25F474u);
    ctx->pc = 0x25F470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F474u; }
    }
    if (ctx->pc != 0x25F474u) { return; }
    ctx->pc = 0x25F474u;
label_25f474:
    // 0x25f474: 0x3c04003c
    ctx->pc = 0x25f474u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f478:
    // 0x25f478: 0x24843040
    ctx->pc = 0x25f478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12352));
label_25f47c:
    // 0x25f47c: 0x131880
    ctx->pc = 0x25f47cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f480:
    // 0x25f480: 0x641821
    ctx->pc = 0x25f480u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f484:
    // 0x25f484: 0xac620000
    ctx->pc = 0x25f484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f488:
    // 0x25f488: 0x26042ad0
    ctx->pc = 0x25f488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f48c:
    // 0x25f48c: 0x3c05003b
    ctx->pc = 0x25f48cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f490:
    // 0x25f490: 0x24a59508
    ctx->pc = 0x25f490u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939912));
label_25f494:
    // 0x25f494: 0x27a60020
    ctx->pc = 0x25f494u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
label_25f498:
    // 0x25f498: 0xc0b6252
label_25f49c:
    if (ctx->pc == 0x25F49Cu) {
        ctx->pc = 0x25F49Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F4A0u;
        goto label_25f4a0;
    }
    ctx->pc = 0x25F498u;
    SET_GPR_U32(ctx, 31, 0x25F4A0u);
    ctx->pc = 0x25F49Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F4A0u; }
    }
    if (ctx->pc != 0x25F4A0u) { return; }
    ctx->pc = 0x25F4A0u;
label_25f4a0:
    // 0x25f4a0: 0x3c020036
    ctx->pc = 0x25f4a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f4a4:
    // 0x25f4a4: 0x8c42d934
    ctx->pc = 0x25f4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f4a8:
    // 0x25f4a8: 0x58400004
label_25f4ac:
    if (ctx->pc == 0x25F4ACu) {
        ctx->pc = 0x25F4ACu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F4B0u;
        goto label_25f4b0;
    }
    ctx->pc = 0x25F4A8u;
    {
        const bool branch_taken_0x25f4a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f4a8) {
            ctx->pc = 0x25F4ACu;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F4BCu;
            goto label_25f4bc;
        }
    }
    ctx->pc = 0x25F4B0u;
label_25f4b0:
    // 0x25f4b0: 0xc097c4e
label_25f4b4:
    if (ctx->pc == 0x25F4B4u) {
        ctx->pc = 0x25F4B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F4B8u;
        goto label_25f4b8;
    }
    ctx->pc = 0x25F4B0u;
    SET_GPR_U32(ctx, 31, 0x25F4B8u);
    ctx->pc = 0x25F4B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F4B8u; }
    }
    if (ctx->pc != 0x25F4B8u) { return; }
    ctx->pc = 0x25F4B8u;
label_25f4b8:
    // 0x25f4b8: 0x3c10003c
    ctx->pc = 0x25f4b8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f4bc:
    // 0x25f4bc: 0x26042ad0
    ctx->pc = 0x25f4bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f4c0:
    // 0x25f4c0: 0x2405ffff
    ctx->pc = 0x25f4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f4c4:
    // 0x25f4c4: 0xc088108
label_25f4c8:
    if (ctx->pc == 0x25F4C8u) {
        ctx->pc = 0x25F4C8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F4CCu;
        goto label_25f4cc;
    }
    ctx->pc = 0x25F4C4u;
    SET_GPR_U32(ctx, 31, 0x25F4CCu);
    ctx->pc = 0x25F4C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F4CCu; }
    }
    if (ctx->pc != 0x25F4CCu) { return; }
    ctx->pc = 0x25F4CCu;
label_25f4cc:
    // 0x25f4cc: 0x3c04003c
    ctx->pc = 0x25f4ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f4d0:
    // 0x25f4d0: 0x24843060
    ctx->pc = 0x25f4d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12384));
label_25f4d4:
    // 0x25f4d4: 0x131880
    ctx->pc = 0x25f4d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f4d8:
    // 0x25f4d8: 0x641821
    ctx->pc = 0x25f4d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f4dc:
    // 0x25f4dc: 0xac620000
    ctx->pc = 0x25f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f4e0:
    // 0x25f4e0: 0x26042ad0
    ctx->pc = 0x25f4e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f4e4:
    // 0x25f4e4: 0x3c05003b
    ctx->pc = 0x25f4e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f4e8:
    // 0x25f4e8: 0x24a59518
    ctx->pc = 0x25f4e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939928));
label_25f4ec:
    // 0x25f4ec: 0x3a0302d
    ctx->pc = 0x25f4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f4f0:
    // 0x25f4f0: 0xc0b6252
label_25f4f4:
    if (ctx->pc == 0x25F4F4u) {
        ctx->pc = 0x25F4F4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F4F8u;
        goto label_25f4f8;
    }
    ctx->pc = 0x25F4F0u;
    SET_GPR_U32(ctx, 31, 0x25F4F8u);
    ctx->pc = 0x25F4F4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F4F8u; }
    }
    if (ctx->pc != 0x25F4F8u) { return; }
    ctx->pc = 0x25F4F8u;
label_25f4f8:
    // 0x25f4f8: 0x3c020036
    ctx->pc = 0x25f4f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f4fc:
    // 0x25f4fc: 0x8c42d934
    ctx->pc = 0x25f4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f500:
    // 0x25f500: 0x58400004
label_25f504:
    if (ctx->pc == 0x25F504u) {
        ctx->pc = 0x25F504u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F508u;
        goto label_25f508;
    }
    ctx->pc = 0x25F500u;
    {
        const bool branch_taken_0x25f500 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f500) {
            ctx->pc = 0x25F504u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F514u;
            goto label_25f514;
        }
    }
    ctx->pc = 0x25F508u;
label_25f508:
    // 0x25f508: 0xc097c4e
label_25f50c:
    if (ctx->pc == 0x25F50Cu) {
        ctx->pc = 0x25F50Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F510u;
        goto label_25f510;
    }
    ctx->pc = 0x25F508u;
    SET_GPR_U32(ctx, 31, 0x25F510u);
    ctx->pc = 0x25F50Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F510u; }
    }
    if (ctx->pc != 0x25F510u) { return; }
    ctx->pc = 0x25F510u;
label_25f510:
    // 0x25f510: 0x3c10003c
    ctx->pc = 0x25f510u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f514:
    // 0x25f514: 0x26042ad0
    ctx->pc = 0x25f514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f518:
    // 0x25f518: 0x2405ffff
    ctx->pc = 0x25f518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f51c:
    // 0x25f51c: 0xc088108
label_25f520:
    if (ctx->pc == 0x25F520u) {
        ctx->pc = 0x25F520u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F524u;
        goto label_25f524;
    }
    ctx->pc = 0x25F51Cu;
    SET_GPR_U32(ctx, 31, 0x25F524u);
    ctx->pc = 0x25F520u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F524u; }
    }
    if (ctx->pc != 0x25F524u) { return; }
    ctx->pc = 0x25F524u;
label_25f524:
    // 0x25f524: 0x3c04003c
    ctx->pc = 0x25f524u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f528:
    // 0x25f528: 0x24843080
    ctx->pc = 0x25f528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12416));
label_25f52c:
    // 0x25f52c: 0x131880
    ctx->pc = 0x25f52cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f530:
    // 0x25f530: 0x641821
    ctx->pc = 0x25f530u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f534:
    // 0x25f534: 0xac620000
    ctx->pc = 0x25f534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f538:
    // 0x25f538: 0x26042ad0
    ctx->pc = 0x25f538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f53c:
    // 0x25f53c: 0x3c05003b
    ctx->pc = 0x25f53cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f540:
    // 0x25f540: 0x24a59518
    ctx->pc = 0x25f540u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939928));
label_25f544:
    // 0x25f544: 0x27a60020
    ctx->pc = 0x25f544u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
label_25f548:
    // 0x25f548: 0xc0b6252
label_25f54c:
    if (ctx->pc == 0x25F54Cu) {
        ctx->pc = 0x25F54Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F550u;
        goto label_25f550;
    }
    ctx->pc = 0x25F548u;
    SET_GPR_U32(ctx, 31, 0x25F550u);
    ctx->pc = 0x25F54Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F550u; }
    }
    if (ctx->pc != 0x25F550u) { return; }
    ctx->pc = 0x25F550u;
label_25f550:
    // 0x25f550: 0x3c020036
    ctx->pc = 0x25f550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f554:
    // 0x25f554: 0x8c42d934
    ctx->pc = 0x25f554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f558:
    // 0x25f558: 0x58400004
label_25f55c:
    if (ctx->pc == 0x25F55Cu) {
        ctx->pc = 0x25F55Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F560u;
        goto label_25f560;
    }
    ctx->pc = 0x25F558u;
    {
        const bool branch_taken_0x25f558 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f558) {
            ctx->pc = 0x25F55Cu;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F56Cu;
            goto label_25f56c;
        }
    }
    ctx->pc = 0x25F560u;
label_25f560:
    // 0x25f560: 0xc097c4e
label_25f564:
    if (ctx->pc == 0x25F564u) {
        ctx->pc = 0x25F564u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F568u;
        goto label_25f568;
    }
    ctx->pc = 0x25F560u;
    SET_GPR_U32(ctx, 31, 0x25F568u);
    ctx->pc = 0x25F564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F568u; }
    }
    if (ctx->pc != 0x25F568u) { return; }
    ctx->pc = 0x25F568u;
label_25f568:
    // 0x25f568: 0x3c10003c
    ctx->pc = 0x25f568u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f56c:
    // 0x25f56c: 0x26042ad0
    ctx->pc = 0x25f56cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f570:
    // 0x25f570: 0x2405ffff
    ctx->pc = 0x25f570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f574:
    // 0x25f574: 0xc088108
label_25f578:
    if (ctx->pc == 0x25F578u) {
        ctx->pc = 0x25F578u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F57Cu;
        goto label_25f57c;
    }
    ctx->pc = 0x25F574u;
    SET_GPR_U32(ctx, 31, 0x25F57Cu);
    ctx->pc = 0x25F578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F57Cu; }
    }
    if (ctx->pc != 0x25F57Cu) { return; }
    ctx->pc = 0x25F57Cu;
label_25f57c:
    // 0x25f57c: 0x3c03003c
    ctx->pc = 0x25f57cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_25f580:
    // 0x25f580: 0x246330a0
    ctx->pc = 0x25f580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12448));
label_25f584:
    // 0x25f584: 0x132080
    ctx->pc = 0x25f584u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
label_25f588:
    // 0x25f588: 0x832021
    ctx->pc = 0x25f588u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25f58c:
    // 0x25f58c: 0xac820000
    ctx->pc = 0x25f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_25f590:
    // 0x25f590: 0x2a220002
    ctx->pc = 0x25f590u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
label_25f594:
    // 0x25f594: 0x1040002a
label_25f598:
    if (ctx->pc == 0x25F598u) {
        ctx->pc = 0x25F598u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F59Cu;
        goto label_25f59c;
    }
    ctx->pc = 0x25F594u;
    {
        const bool branch_taken_0x25f594 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F598u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        if (branch_taken_0x25f594) {
            ctx->pc = 0x25F640u;
            goto label_25f640;
        }
    }
    ctx->pc = 0x25F59Cu;
label_25f59c:
    // 0x25f59c: 0x3c05003b
    ctx->pc = 0x25f59cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f5a0:
    // 0x25f5a0: 0x24a59528
    ctx->pc = 0x25f5a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939944));
label_25f5a4:
    // 0x25f5a4: 0xc0b6252
label_25f5a8:
    if (ctx->pc == 0x25F5A8u) {
        ctx->pc = 0x25F5A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F5ACu;
        goto label_25f5ac;
    }
    ctx->pc = 0x25F5A4u;
    SET_GPR_U32(ctx, 31, 0x25F5ACu);
    ctx->pc = 0x25F5A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F5ACu; }
    }
    if (ctx->pc != 0x25F5ACu) { return; }
    ctx->pc = 0x25F5ACu;
label_25f5ac:
    // 0x25f5ac: 0x3c020036
    ctx->pc = 0x25f5acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f5b0:
    // 0x25f5b0: 0x8c42d934
    ctx->pc = 0x25f5b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f5b4:
    // 0x25f5b4: 0x58400004
label_25f5b8:
    if (ctx->pc == 0x25F5B8u) {
        ctx->pc = 0x25F5B8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F5BCu;
        goto label_25f5bc;
    }
    ctx->pc = 0x25F5B4u;
    {
        const bool branch_taken_0x25f5b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f5b4) {
            ctx->pc = 0x25F5B8u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F5C8u;
            goto label_25f5c8;
        }
    }
    ctx->pc = 0x25F5BCu;
label_25f5bc:
    // 0x25f5bc: 0xc097c4e
label_25f5c0:
    if (ctx->pc == 0x25F5C0u) {
        ctx->pc = 0x25F5C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F5C4u;
        goto label_25f5c4;
    }
    ctx->pc = 0x25F5BCu;
    SET_GPR_U32(ctx, 31, 0x25F5C4u);
    ctx->pc = 0x25F5C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F5C4u; }
    }
    if (ctx->pc != 0x25F5C4u) { return; }
    ctx->pc = 0x25F5C4u;
label_25f5c4:
    // 0x25f5c4: 0x3c10003c
    ctx->pc = 0x25f5c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f5c8:
    // 0x25f5c8: 0x26042ad0
    ctx->pc = 0x25f5c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f5cc:
    // 0x25f5cc: 0x2405ffff
    ctx->pc = 0x25f5ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f5d0:
    // 0x25f5d0: 0xc088108
label_25f5d4:
    if (ctx->pc == 0x25F5D4u) {
        ctx->pc = 0x25F5D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F5D8u;
        goto label_25f5d8;
    }
    ctx->pc = 0x25F5D0u;
    SET_GPR_U32(ctx, 31, 0x25F5D8u);
    ctx->pc = 0x25F5D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F5D8u; }
    }
    if (ctx->pc != 0x25F5D8u) { return; }
    ctx->pc = 0x25F5D8u;
label_25f5d8:
    // 0x25f5d8: 0x3c04003c
    ctx->pc = 0x25f5d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f5dc:
    // 0x25f5dc: 0x248430c0
    ctx->pc = 0x25f5dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12480));
label_25f5e0:
    // 0x25f5e0: 0x131880
    ctx->pc = 0x25f5e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f5e4:
    // 0x25f5e4: 0x641821
    ctx->pc = 0x25f5e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f5e8:
    // 0x25f5e8: 0xac620000
    ctx->pc = 0x25f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f5ec:
    // 0x25f5ec: 0x26042ad0
    ctx->pc = 0x25f5ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f5f0:
    // 0x25f5f0: 0x3c05003b
    ctx->pc = 0x25f5f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f5f4:
    // 0x25f5f4: 0x24a59538
    ctx->pc = 0x25f5f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939960));
label_25f5f8:
    // 0x25f5f8: 0xc0b6252
label_25f5fc:
    if (ctx->pc == 0x25F5FCu) {
        ctx->pc = 0x25F5FCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F600u;
        goto label_25f600;
    }
    ctx->pc = 0x25F5F8u;
    SET_GPR_U32(ctx, 31, 0x25F600u);
    ctx->pc = 0x25F5FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F600u; }
    }
    if (ctx->pc != 0x25F600u) { return; }
    ctx->pc = 0x25F600u;
label_25f600:
    // 0x25f600: 0x3c020036
    ctx->pc = 0x25f600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f604:
    // 0x25f604: 0x8c42d934
    ctx->pc = 0x25f604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f608:
    // 0x25f608: 0x18400004
label_25f60c:
    if (ctx->pc == 0x25F60Cu) {
        ctx->pc = 0x25F60Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x25F610u;
        goto label_25f610;
    }
    ctx->pc = 0x25F608u;
    {
        const bool branch_taken_0x25f608 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25F60Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x25f608) {
            ctx->pc = 0x25F61Cu;
            goto label_25f61c;
        }
    }
    ctx->pc = 0x25F610u;
label_25f610:
    // 0x25f610: 0xc097c4e
label_25f614:
    if (ctx->pc == 0x25F614u) {
        ctx->pc = 0x25F614u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F618u;
        goto label_25f618;
    }
    ctx->pc = 0x25F610u;
    SET_GPR_U32(ctx, 31, 0x25F618u);
    ctx->pc = 0x25F614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F618u; }
    }
    if (ctx->pc != 0x25F618u) { return; }
    ctx->pc = 0x25F618u;
label_25f618:
    // 0x25f618: 0x3c04003c
    ctx->pc = 0x25f618u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f61c:
    // 0x25f61c: 0x24842ad0
    ctx->pc = 0x25f61cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10960));
label_25f620:
    // 0x25f620: 0x2405ffff
    ctx->pc = 0x25f620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f624:
    // 0x25f624: 0xc088108
label_25f628:
    if (ctx->pc == 0x25F628u) {
        ctx->pc = 0x25F628u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F62Cu;
        goto label_25f62c;
    }
    ctx->pc = 0x25F624u;
    SET_GPR_U32(ctx, 31, 0x25F62Cu);
    ctx->pc = 0x25F628u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F62Cu; }
    }
    if (ctx->pc != 0x25F62Cu) { return; }
    ctx->pc = 0x25F62Cu;
label_25f62c:
    // 0x25f62c: 0x3c04003c
    ctx->pc = 0x25f62cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f630:
    // 0x25f630: 0x248430e0
    ctx->pc = 0x25f630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12512));
label_25f634:
    // 0x25f634: 0x131880
    ctx->pc = 0x25f634u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f638:
    // 0x25f638: 0x641821
    ctx->pc = 0x25f638u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f63c:
    // 0x25f63c: 0xac620000
    ctx->pc = 0x25f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f640:
    // 0x25f640: 0x12200056
label_25f644:
    if (ctx->pc == 0x25F644u) {
        ctx->pc = 0x25F644u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F648u;
        goto label_25f648;
    }
    ctx->pc = 0x25F640u;
    {
        const bool branch_taken_0x25f640 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F644u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x25f640) {
            ctx->pc = 0x25F79Cu;
            goto label_25f79c;
        }
    }
    ctx->pc = 0x25F648u;
label_25f648:
    // 0x25f648: 0x26042ad0
    ctx->pc = 0x25f648u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f64c:
    // 0x25f64c: 0x3c05003b
    ctx->pc = 0x25f64cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f650:
    // 0x25f650: 0x24a59548
    ctx->pc = 0x25f650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939976));
label_25f654:
    // 0x25f654: 0xc0b6252
label_25f658:
    if (ctx->pc == 0x25F658u) {
        ctx->pc = 0x25F658u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25F65Cu;
        goto label_25f65c;
    }
    ctx->pc = 0x25F654u;
    SET_GPR_U32(ctx, 31, 0x25F65Cu);
    ctx->pc = 0x25F658u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F65Cu; }
    }
    if (ctx->pc != 0x25F65Cu) { return; }
    ctx->pc = 0x25F65Cu;
label_25f65c:
    // 0x25f65c: 0x3c020036
    ctx->pc = 0x25f65cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f660:
    // 0x25f660: 0x8c42d934
    ctx->pc = 0x25f660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f664:
    // 0x25f664: 0x58400004
label_25f668:
    if (ctx->pc == 0x25F668u) {
        ctx->pc = 0x25F668u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F66Cu;
        goto label_25f66c;
    }
    ctx->pc = 0x25F664u;
    {
        const bool branch_taken_0x25f664 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f664) {
            ctx->pc = 0x25F668u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F678u;
            goto label_25f678;
        }
    }
    ctx->pc = 0x25F66Cu;
label_25f66c:
    // 0x25f66c: 0xc097c4e
label_25f670:
    if (ctx->pc == 0x25F670u) {
        ctx->pc = 0x25F670u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F674u;
        goto label_25f674;
    }
    ctx->pc = 0x25F66Cu;
    SET_GPR_U32(ctx, 31, 0x25F674u);
    ctx->pc = 0x25F670u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F674u; }
    }
    if (ctx->pc != 0x25F674u) { return; }
    ctx->pc = 0x25F674u;
label_25f674:
    // 0x25f674: 0x3c10003c
    ctx->pc = 0x25f674u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f678:
    // 0x25f678: 0x26042ad0
    ctx->pc = 0x25f678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f67c:
    // 0x25f67c: 0x2405ffff
    ctx->pc = 0x25f67cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f680:
    // 0x25f680: 0xc088108
label_25f684:
    if (ctx->pc == 0x25F684u) {
        ctx->pc = 0x25F684u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F688u;
        goto label_25f688;
    }
    ctx->pc = 0x25F680u;
    SET_GPR_U32(ctx, 31, 0x25F688u);
    ctx->pc = 0x25F684u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F688u; }
    }
    if (ctx->pc != 0x25F688u) { return; }
    ctx->pc = 0x25F688u;
label_25f688:
    // 0x25f688: 0x3c04003c
    ctx->pc = 0x25f688u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f68c:
    // 0x25f68c: 0x24843100
    ctx->pc = 0x25f68cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12544));
label_25f690:
    // 0x25f690: 0x131880
    ctx->pc = 0x25f690u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f694:
    // 0x25f694: 0x641821
    ctx->pc = 0x25f694u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f698:
    // 0x25f698: 0xac620000
    ctx->pc = 0x25f698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f69c:
    // 0x25f69c: 0x26042ad0
    ctx->pc = 0x25f69cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f6a0:
    // 0x25f6a0: 0x3c05003b
    ctx->pc = 0x25f6a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f6a4:
    // 0x25f6a4: 0x24a59558
    ctx->pc = 0x25f6a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939992));
label_25f6a8:
    // 0x25f6a8: 0xc0b6252
label_25f6ac:
    if (ctx->pc == 0x25F6ACu) {
        ctx->pc = 0x25F6ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25F6B0u;
        goto label_25f6b0;
    }
    ctx->pc = 0x25F6A8u;
    SET_GPR_U32(ctx, 31, 0x25F6B0u);
    ctx->pc = 0x25F6ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6B0u; }
    }
    if (ctx->pc != 0x25F6B0u) { return; }
    ctx->pc = 0x25F6B0u;
label_25f6b0:
    // 0x25f6b0: 0x3c020036
    ctx->pc = 0x25f6b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f6b4:
    // 0x25f6b4: 0x8c42d934
    ctx->pc = 0x25f6b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f6b8:
    // 0x25f6b8: 0x58400004
label_25f6bc:
    if (ctx->pc == 0x25F6BCu) {
        ctx->pc = 0x25F6BCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F6C0u;
        goto label_25f6c0;
    }
    ctx->pc = 0x25F6B8u;
    {
        const bool branch_taken_0x25f6b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f6b8) {
            ctx->pc = 0x25F6BCu;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F6CCu;
            goto label_25f6cc;
        }
    }
    ctx->pc = 0x25F6C0u;
label_25f6c0:
    // 0x25f6c0: 0xc097c4e
label_25f6c4:
    if (ctx->pc == 0x25F6C4u) {
        ctx->pc = 0x25F6C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F6C8u;
        goto label_25f6c8;
    }
    ctx->pc = 0x25F6C0u;
    SET_GPR_U32(ctx, 31, 0x25F6C8u);
    ctx->pc = 0x25F6C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6C8u; }
    }
    if (ctx->pc != 0x25F6C8u) { return; }
    ctx->pc = 0x25F6C8u;
label_25f6c8:
    // 0x25f6c8: 0x3c10003c
    ctx->pc = 0x25f6c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f6cc:
    // 0x25f6cc: 0x26042ad0
    ctx->pc = 0x25f6ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f6d0:
    // 0x25f6d0: 0x2405ffff
    ctx->pc = 0x25f6d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f6d4:
    // 0x25f6d4: 0xc088108
label_25f6d8:
    if (ctx->pc == 0x25F6D8u) {
        ctx->pc = 0x25F6D8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F6DCu;
        goto label_25f6dc;
    }
    ctx->pc = 0x25F6D4u;
    SET_GPR_U32(ctx, 31, 0x25F6DCu);
    ctx->pc = 0x25F6D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6DCu; }
    }
    if (ctx->pc != 0x25F6DCu) { return; }
    ctx->pc = 0x25F6DCu;
label_25f6dc:
    // 0x25f6dc: 0x3c04003c
    ctx->pc = 0x25f6dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f6e0:
    // 0x25f6e0: 0x24843120
    ctx->pc = 0x25f6e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12576));
label_25f6e4:
    // 0x25f6e4: 0x131880
    ctx->pc = 0x25f6e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f6e8:
    // 0x25f6e8: 0x641821
    ctx->pc = 0x25f6e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f6ec:
    // 0x25f6ec: 0xac620000
    ctx->pc = 0x25f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f6f0:
    // 0x25f6f0: 0x26042ad0
    ctx->pc = 0x25f6f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f6f4:
    // 0x25f6f4: 0x3c05003b
    ctx->pc = 0x25f6f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f6f8:
    // 0x25f6f8: 0x24a59568
    ctx->pc = 0x25f6f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940008));
label_25f6fc:
    // 0x25f6fc: 0xc0b6252
label_25f700:
    if (ctx->pc == 0x25F700u) {
        ctx->pc = 0x25F700u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25F704u;
        goto label_25f704;
    }
    ctx->pc = 0x25F6FCu;
    SET_GPR_U32(ctx, 31, 0x25F704u);
    ctx->pc = 0x25F700u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F704u; }
    }
    if (ctx->pc != 0x25F704u) { return; }
    ctx->pc = 0x25F704u;
label_25f704:
    // 0x25f704: 0x3c020036
    ctx->pc = 0x25f704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f708:
    // 0x25f708: 0x8c42d934
    ctx->pc = 0x25f708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f70c:
    // 0x25f70c: 0x58400004
label_25f710:
    if (ctx->pc == 0x25F710u) {
        ctx->pc = 0x25F710u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F714u;
        goto label_25f714;
    }
    ctx->pc = 0x25F70Cu;
    {
        const bool branch_taken_0x25f70c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f70c) {
            ctx->pc = 0x25F710u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F720u;
            goto label_25f720;
        }
    }
    ctx->pc = 0x25F714u;
label_25f714:
    // 0x25f714: 0xc097c4e
label_25f718:
    if (ctx->pc == 0x25F718u) {
        ctx->pc = 0x25F718u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F71Cu;
        goto label_25f71c;
    }
    ctx->pc = 0x25F714u;
    SET_GPR_U32(ctx, 31, 0x25F71Cu);
    ctx->pc = 0x25F718u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F71Cu; }
    }
    if (ctx->pc != 0x25F71Cu) { return; }
    ctx->pc = 0x25F71Cu;
label_25f71c:
    // 0x25f71c: 0x3c10003c
    ctx->pc = 0x25f71cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f720:
    // 0x25f720: 0x26042ad0
    ctx->pc = 0x25f720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f724:
    // 0x25f724: 0x2405ffff
    ctx->pc = 0x25f724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f728:
    // 0x25f728: 0xc088108
label_25f72c:
    if (ctx->pc == 0x25F72Cu) {
        ctx->pc = 0x25F72Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F730u;
        goto label_25f730;
    }
    ctx->pc = 0x25F728u;
    SET_GPR_U32(ctx, 31, 0x25F730u);
    ctx->pc = 0x25F72Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F730u; }
    }
    if (ctx->pc != 0x25F730u) { return; }
    ctx->pc = 0x25F730u;
label_25f730:
    // 0x25f730: 0x3c04003c
    ctx->pc = 0x25f730u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f734:
    // 0x25f734: 0x24843140
    ctx->pc = 0x25f734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12608));
label_25f738:
    // 0x25f738: 0x131880
    ctx->pc = 0x25f738u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f73c:
    // 0x25f73c: 0x641821
    ctx->pc = 0x25f73cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f740:
    // 0x25f740: 0xac620000
    ctx->pc = 0x25f740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f744:
    // 0x25f744: 0x26042ad0
    ctx->pc = 0x25f744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f748:
    // 0x25f748: 0x3c05003b
    ctx->pc = 0x25f748u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f74c:
    // 0x25f74c: 0x24a59578
    ctx->pc = 0x25f74cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940024));
label_25f750:
    // 0x25f750: 0xc0b6252
label_25f754:
    if (ctx->pc == 0x25F754u) {
        ctx->pc = 0x25F754u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25F758u;
        goto label_25f758;
    }
    ctx->pc = 0x25F750u;
    SET_GPR_U32(ctx, 31, 0x25F758u);
    ctx->pc = 0x25F754u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F758u; }
    }
    if (ctx->pc != 0x25F758u) { return; }
    ctx->pc = 0x25F758u;
label_25f758:
    // 0x25f758: 0x3c020036
    ctx->pc = 0x25f758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f75c:
    // 0x25f75c: 0x8c42d934
    ctx->pc = 0x25f75cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f760:
    // 0x25f760: 0x18400004
label_25f764:
    if (ctx->pc == 0x25F764u) {
        ctx->pc = 0x25F764u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x25F768u;
        goto label_25f768;
    }
    ctx->pc = 0x25F760u;
    {
        const bool branch_taken_0x25f760 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25F764u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x25f760) {
            ctx->pc = 0x25F774u;
            goto label_25f774;
        }
    }
    ctx->pc = 0x25F768u;
label_25f768:
    // 0x25f768: 0xc097c4e
label_25f76c:
    if (ctx->pc == 0x25F76Cu) {
        ctx->pc = 0x25F76Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F770u;
        goto label_25f770;
    }
    ctx->pc = 0x25F768u;
    SET_GPR_U32(ctx, 31, 0x25F770u);
    ctx->pc = 0x25F76Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F770u; }
    }
    if (ctx->pc != 0x25F770u) { return; }
    ctx->pc = 0x25F770u;
label_25f770:
    // 0x25f770: 0x3c04003c
    ctx->pc = 0x25f770u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f774:
    // 0x25f774: 0x24842ad0
    ctx->pc = 0x25f774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10960));
label_25f778:
    // 0x25f778: 0x2405ffff
    ctx->pc = 0x25f778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f77c:
    // 0x25f77c: 0xc088108
label_25f780:
    if (ctx->pc == 0x25F780u) {
        ctx->pc = 0x25F780u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F784u;
        goto label_25f784;
    }
    ctx->pc = 0x25F77Cu;
    SET_GPR_U32(ctx, 31, 0x25F784u);
    ctx->pc = 0x25F780u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F784u; }
    }
    if (ctx->pc != 0x25F784u) { return; }
    ctx->pc = 0x25F784u;
label_25f784:
    // 0x25f784: 0x3c04003c
    ctx->pc = 0x25f784u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f788:
    // 0x25f788: 0x24843160
    ctx->pc = 0x25f788u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12640));
label_25f78c:
    // 0x25f78c: 0x131880
    ctx->pc = 0x25f78cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f790:
    // 0x25f790: 0x641821
    ctx->pc = 0x25f790u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f794:
    // 0x25f794: 0x10000033
label_25f798:
    if (ctx->pc == 0x25F798u) {
        ctx->pc = 0x25F798u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x25F79Cu;
        goto label_25f79c;
    }
    ctx->pc = 0x25F794u;
    {
        const bool branch_taken_0x25f794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F798u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x25f794) {
            ctx->pc = 0x25F864u;
            goto label_25f864;
        }
    }
    ctx->pc = 0x25F79Cu;
label_25f79c:
    // 0x25f79c: 0x26042ad0
    ctx->pc = 0x25f79cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f7a0:
    // 0x25f7a0: 0x3c05003b
    ctx->pc = 0x25f7a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f7a4:
    // 0x25f7a4: 0x24a59528
    ctx->pc = 0x25f7a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939944));
label_25f7a8:
    // 0x25f7a8: 0xc0b6252
label_25f7ac:
    if (ctx->pc == 0x25F7ACu) {
        ctx->pc = 0x25F7ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25F7B0u;
        goto label_25f7b0;
    }
    ctx->pc = 0x25F7A8u;
    SET_GPR_U32(ctx, 31, 0x25F7B0u);
    ctx->pc = 0x25F7ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F7B0u; }
    }
    if (ctx->pc != 0x25F7B0u) { return; }
    ctx->pc = 0x25F7B0u;
label_25f7b0:
    // 0x25f7b0: 0x3c020036
    ctx->pc = 0x25f7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f7b4:
    // 0x25f7b4: 0x8c42d934
    ctx->pc = 0x25f7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f7b8:
    // 0x25f7b8: 0x58400004
label_25f7bc:
    if (ctx->pc == 0x25F7BCu) {
        ctx->pc = 0x25F7BCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F7C0u;
        goto label_25f7c0;
    }
    ctx->pc = 0x25F7B8u;
    {
        const bool branch_taken_0x25f7b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f7b8) {
            ctx->pc = 0x25F7BCu;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F7CCu;
            goto label_25f7cc;
        }
    }
    ctx->pc = 0x25F7C0u;
label_25f7c0:
    // 0x25f7c0: 0xc097c4e
label_25f7c4:
    if (ctx->pc == 0x25F7C4u) {
        ctx->pc = 0x25F7C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F7C8u;
        goto label_25f7c8;
    }
    ctx->pc = 0x25F7C0u;
    SET_GPR_U32(ctx, 31, 0x25F7C8u);
    ctx->pc = 0x25F7C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F7C8u; }
    }
    if (ctx->pc != 0x25F7C8u) { return; }
    ctx->pc = 0x25F7C8u;
label_25f7c8:
    // 0x25f7c8: 0x3c10003c
    ctx->pc = 0x25f7c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f7cc:
    // 0x25f7cc: 0x26042ad0
    ctx->pc = 0x25f7ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f7d0:
    // 0x25f7d0: 0x2405ffff
    ctx->pc = 0x25f7d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f7d4:
    // 0x25f7d4: 0xc088108
label_25f7d8:
    if (ctx->pc == 0x25F7D8u) {
        ctx->pc = 0x25F7D8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F7DCu;
        goto label_25f7dc;
    }
    ctx->pc = 0x25F7D4u;
    SET_GPR_U32(ctx, 31, 0x25F7DCu);
    ctx->pc = 0x25F7D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F7DCu; }
    }
    if (ctx->pc != 0x25F7DCu) { return; }
    ctx->pc = 0x25F7DCu;
label_25f7dc:
    // 0x25f7dc: 0x3c03003c
    ctx->pc = 0x25f7dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_25f7e0:
    // 0x25f7e0: 0x24633100
    ctx->pc = 0x25f7e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12544));
label_25f7e4:
    // 0x25f7e4: 0x132080
    ctx->pc = 0x25f7e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
label_25f7e8:
    // 0x25f7e8: 0x831821
    ctx->pc = 0x25f7e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25f7ec:
    // 0x25f7ec: 0xac620000
    ctx->pc = 0x25f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f7f0:
    // 0x25f7f0: 0x3c03003c
    ctx->pc = 0x25f7f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_25f7f4:
    // 0x25f7f4: 0x24633120
    ctx->pc = 0x25f7f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12576));
label_25f7f8:
    // 0x25f7f8: 0x832021
    ctx->pc = 0x25f7f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25f7fc:
    // 0x25f7fc: 0xac820000
    ctx->pc = 0x25f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_25f800:
    // 0x25f800: 0x26042ad0
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f804:
    // 0x25f804: 0x3c05003b
    ctx->pc = 0x25f804u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f808:
    // 0x25f808: 0x24a59538
    ctx->pc = 0x25f808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939960));
label_25f80c:
    // 0x25f80c: 0xc0b6252
label_25f810:
    if (ctx->pc == 0x25F810u) {
        ctx->pc = 0x25F810u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25F814u;
        goto label_25f814;
    }
    ctx->pc = 0x25F80Cu;
    SET_GPR_U32(ctx, 31, 0x25F814u);
    ctx->pc = 0x25F810u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F814u; }
    }
    if (ctx->pc != 0x25F814u) { return; }
    ctx->pc = 0x25F814u;
label_25f814:
    // 0x25f814: 0x3c020036
    ctx->pc = 0x25f814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f818:
    // 0x25f818: 0x8c42d934
    ctx->pc = 0x25f818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f81c:
    // 0x25f81c: 0x18400004
label_25f820:
    if (ctx->pc == 0x25F820u) {
        ctx->pc = 0x25F820u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x25F824u;
        goto label_25f824;
    }
    ctx->pc = 0x25F81Cu;
    {
        const bool branch_taken_0x25f81c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25F820u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x25f81c) {
            ctx->pc = 0x25F830u;
            goto label_25f830;
        }
    }
    ctx->pc = 0x25F824u;
label_25f824:
    // 0x25f824: 0xc097c4e
label_25f828:
    if (ctx->pc == 0x25F828u) {
        ctx->pc = 0x25F828u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F82Cu;
        goto label_25f82c;
    }
    ctx->pc = 0x25F824u;
    SET_GPR_U32(ctx, 31, 0x25F82Cu);
    ctx->pc = 0x25F828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F82Cu; }
    }
    if (ctx->pc != 0x25F82Cu) { return; }
    ctx->pc = 0x25F82Cu;
label_25f82c:
    // 0x25f82c: 0x3c04003c
    ctx->pc = 0x25f82cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f830:
    // 0x25f830: 0x24842ad0
    ctx->pc = 0x25f830u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10960));
label_25f834:
    // 0x25f834: 0x2405ffff
    ctx->pc = 0x25f834u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f838:
    // 0x25f838: 0xc088108
label_25f83c:
    if (ctx->pc == 0x25F83Cu) {
        ctx->pc = 0x25F83Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F840u;
        goto label_25f840;
    }
    ctx->pc = 0x25F838u;
    SET_GPR_U32(ctx, 31, 0x25F840u);
    ctx->pc = 0x25F83Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F840u; }
    }
    if (ctx->pc != 0x25F840u) { return; }
    ctx->pc = 0x25F840u;
label_25f840:
    // 0x25f840: 0x3c03003c
    ctx->pc = 0x25f840u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_25f844:
    // 0x25f844: 0x24633140
    ctx->pc = 0x25f844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12608));
label_25f848:
    // 0x25f848: 0x132080
    ctx->pc = 0x25f848u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
label_25f84c:
    // 0x25f84c: 0x831821
    ctx->pc = 0x25f84cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25f850:
    // 0x25f850: 0xac620000
    ctx->pc = 0x25f850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f854:
    // 0x25f854: 0x3c03003c
    ctx->pc = 0x25f854u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_25f858:
    // 0x25f858: 0x24633160
    ctx->pc = 0x25f858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12640));
label_25f85c:
    // 0x25f85c: 0x832021
    ctx->pc = 0x25f85cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25f860:
    // 0x25f860: 0xac820000
    ctx->pc = 0x25f860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_25f864:
    // 0x25f864: 0x24020002
    ctx->pc = 0x25f864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_25f868:
    // 0x25f868: 0x16a2001b
label_25f86c:
    if (ctx->pc == 0x25F86Cu) {
        ctx->pc = 0x25F86Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F870u;
        goto label_25f870;
    }
    ctx->pc = 0x25F868u;
    {
        const bool branch_taken_0x25f868 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x25F86Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25f868) {
            ctx->pc = 0x25F8D8u;
            goto label_25f8d8;
        }
    }
    ctx->pc = 0x25F870u;
label_25f870:
    // 0x25f870: 0x3c10003c
    ctx->pc = 0x25f870u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f874:
    // 0x25f874: 0x26042ad0
    ctx->pc = 0x25f874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f878:
    // 0x25f878: 0x3c05003b
    ctx->pc = 0x25f878u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f87c:
    // 0x25f87c: 0x24a59588
    ctx->pc = 0x25f87cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940040));
label_25f880:
    // 0x25f880: 0xc0b6252
label_25f884:
    if (ctx->pc == 0x25F884u) {
        ctx->pc = 0x25F884u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F888u;
        goto label_25f888;
    }
    ctx->pc = 0x25F880u;
    SET_GPR_U32(ctx, 31, 0x25F888u);
    ctx->pc = 0x25F884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F888u; }
    }
    if (ctx->pc != 0x25F888u) { return; }
    ctx->pc = 0x25F888u;
label_25f888:
    // 0x25f888: 0x3c020036
    ctx->pc = 0x25f888u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f88c:
    // 0x25f88c: 0x8c42d934
    ctx->pc = 0x25f88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f890:
    // 0x25f890: 0x58400004
label_25f894:
    if (ctx->pc == 0x25F894u) {
        ctx->pc = 0x25F894u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F898u;
        goto label_25f898;
    }
    ctx->pc = 0x25F890u;
    {
        const bool branch_taken_0x25f890 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f890) {
            ctx->pc = 0x25F894u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F8A4u;
            goto label_25f8a4;
        }
    }
    ctx->pc = 0x25F898u;
label_25f898:
    // 0x25f898: 0xc097c4e
label_25f89c:
    if (ctx->pc == 0x25F89Cu) {
        ctx->pc = 0x25F89Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F8A0u;
        goto label_25f8a0;
    }
    ctx->pc = 0x25F898u;
    SET_GPR_U32(ctx, 31, 0x25F8A0u);
    ctx->pc = 0x25F89Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F8A0u; }
    }
    if (ctx->pc != 0x25F8A0u) { return; }
    ctx->pc = 0x25F8A0u;
label_25f8a0:
    // 0x25f8a0: 0x3c10003c
    ctx->pc = 0x25f8a0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f8a4:
    // 0x25f8a4: 0x26042ad0
    ctx->pc = 0x25f8a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f8a8:
    // 0x25f8a8: 0x2405ffff
    ctx->pc = 0x25f8a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f8ac:
    // 0x25f8ac: 0xc088108
label_25f8b0:
    if (ctx->pc == 0x25F8B0u) {
        ctx->pc = 0x25F8B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F8B4u;
        goto label_25f8b4;
    }
    ctx->pc = 0x25F8ACu;
    SET_GPR_U32(ctx, 31, 0x25F8B4u);
    ctx->pc = 0x25F8B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F8B4u; }
    }
    if (ctx->pc != 0x25F8B4u) { return; }
    ctx->pc = 0x25F8B4u;
label_25f8b4:
    // 0x25f8b4: 0x3c04003c
    ctx->pc = 0x25f8b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f8b8:
    // 0x25f8b8: 0x24843180
    ctx->pc = 0x25f8b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12672));
label_25f8bc:
    // 0x25f8bc: 0x131880
    ctx->pc = 0x25f8bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f8c0:
    // 0x25f8c0: 0x641821
    ctx->pc = 0x25f8c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f8c4:
    // 0x25f8c4: 0xac620000
    ctx->pc = 0x25f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f8c8:
    // 0x25f8c8: 0x26042ad0
    ctx->pc = 0x25f8c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f8cc:
    // 0x25f8cc: 0x3c05003b
    ctx->pc = 0x25f8ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f8d0:
    // 0x25f8d0: 0x1000001c
label_25f8d4:
    if (ctx->pc == 0x25F8D4u) {
        ctx->pc = 0x25F8D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940040));
        ctx->pc = 0x25F8D8u;
        goto label_25f8d8;
    }
    ctx->pc = 0x25F8D0u;
    {
        const bool branch_taken_0x25f8d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F8D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940040));
        if (branch_taken_0x25f8d0) {
            ctx->pc = 0x25F944u;
            goto label_25f944;
        }
    }
    ctx->pc = 0x25F8D8u;
label_25f8d8:
    // 0x25f8d8: 0x16a2002d
label_25f8dc:
    if (ctx->pc == 0x25F8DCu) {
        ctx->pc = 0x25F8DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x25F8E0u;
        goto label_25f8e0;
    }
    ctx->pc = 0x25F8D8u;
    {
        const bool branch_taken_0x25f8d8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x25F8DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x25f8d8) {
            ctx->pc = 0x25F990u;
            goto label_25f990;
        }
    }
    ctx->pc = 0x25F8E0u;
label_25f8e0:
    // 0x25f8e0: 0x3c10003c
    ctx->pc = 0x25f8e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f8e4:
    // 0x25f8e4: 0x26042ad0
    ctx->pc = 0x25f8e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f8e8:
    // 0x25f8e8: 0x3c05003b
    ctx->pc = 0x25f8e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f8ec:
    // 0x25f8ec: 0x24a59598
    ctx->pc = 0x25f8ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940056));
label_25f8f0:
    // 0x25f8f0: 0xc0b6252
label_25f8f4:
    if (ctx->pc == 0x25F8F4u) {
        ctx->pc = 0x25F8F4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F8F8u;
        goto label_25f8f8;
    }
    ctx->pc = 0x25F8F0u;
    SET_GPR_U32(ctx, 31, 0x25F8F8u);
    ctx->pc = 0x25F8F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F8F8u; }
    }
    if (ctx->pc != 0x25F8F8u) { return; }
    ctx->pc = 0x25F8F8u;
label_25f8f8:
    // 0x25f8f8: 0x3c020036
    ctx->pc = 0x25f8f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f8fc:
    // 0x25f8fc: 0x8c42d934
    ctx->pc = 0x25f8fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f900:
    // 0x25f900: 0x58400004
label_25f904:
    if (ctx->pc == 0x25F904u) {
        ctx->pc = 0x25F904u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x25F908u;
        goto label_25f908;
    }
    ctx->pc = 0x25F900u;
    {
        const bool branch_taken_0x25f900 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f900) {
            ctx->pc = 0x25F904u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x25F914u;
            goto label_25f914;
        }
    }
    ctx->pc = 0x25F908u;
label_25f908:
    // 0x25f908: 0xc097c4e
label_25f90c:
    if (ctx->pc == 0x25F90Cu) {
        ctx->pc = 0x25F90Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F910u;
        goto label_25f910;
    }
    ctx->pc = 0x25F908u;
    SET_GPR_U32(ctx, 31, 0x25F910u);
    ctx->pc = 0x25F90Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F910u; }
    }
    if (ctx->pc != 0x25F910u) { return; }
    ctx->pc = 0x25F910u;
label_25f910:
    // 0x25f910: 0x3c10003c
    ctx->pc = 0x25f910u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_25f914:
    // 0x25f914: 0x26042ad0
    ctx->pc = 0x25f914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f918:
    // 0x25f918: 0x2405ffff
    ctx->pc = 0x25f918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f91c:
    // 0x25f91c: 0xc088108
label_25f920:
    if (ctx->pc == 0x25F920u) {
        ctx->pc = 0x25F920u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F924u;
        goto label_25f924;
    }
    ctx->pc = 0x25F91Cu;
    SET_GPR_U32(ctx, 31, 0x25F924u);
    ctx->pc = 0x25F920u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F924u; }
    }
    if (ctx->pc != 0x25F924u) { return; }
    ctx->pc = 0x25F924u;
label_25f924:
    // 0x25f924: 0x3c04003c
    ctx->pc = 0x25f924u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f928:
    // 0x25f928: 0x24843180
    ctx->pc = 0x25f928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12672));
label_25f92c:
    // 0x25f92c: 0x131880
    ctx->pc = 0x25f92cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f930:
    // 0x25f930: 0x641821
    ctx->pc = 0x25f930u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f934:
    // 0x25f934: 0xac620000
    ctx->pc = 0x25f934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f938:
    // 0x25f938: 0x26042ad0
    ctx->pc = 0x25f938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
label_25f93c:
    // 0x25f93c: 0x3c05003b
    ctx->pc = 0x25f93cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_25f940:
    // 0x25f940: 0x24a59598
    ctx->pc = 0x25f940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940056));
label_25f944:
    // 0x25f944: 0xc0b6252
label_25f948:
    if (ctx->pc == 0x25F948u) {
        ctx->pc = 0x25F948u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x25F94Cu;
        goto label_25f94c;
    }
    ctx->pc = 0x25F944u;
    SET_GPR_U32(ctx, 31, 0x25F94Cu);
    ctx->pc = 0x25F948u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F94Cu; }
    }
    if (ctx->pc != 0x25F94Cu) { return; }
    ctx->pc = 0x25F94Cu;
label_25f94c:
    // 0x25f94c: 0x3c020036
    ctx->pc = 0x25f94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_25f950:
    // 0x25f950: 0x8c42d934
    ctx->pc = 0x25f950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_25f954:
    // 0x25f954: 0x18400004
label_25f958:
    if (ctx->pc == 0x25F958u) {
        ctx->pc = 0x25F958u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x25F95Cu;
        goto label_25f95c;
    }
    ctx->pc = 0x25F954u;
    {
        const bool branch_taken_0x25f954 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25F958u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x25f954) {
            ctx->pc = 0x25F968u;
            goto label_25f968;
        }
    }
    ctx->pc = 0x25F95Cu;
label_25f95c:
    // 0x25f95c: 0xc097c4e
label_25f960:
    if (ctx->pc == 0x25F960u) {
        ctx->pc = 0x25F960u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
        ctx->pc = 0x25F964u;
        goto label_25f964;
    }
    ctx->pc = 0x25F95Cu;
    SET_GPR_U32(ctx, 31, 0x25F964u);
    ctx->pc = 0x25F960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x25F138u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_boss_ene_0x25f138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F964u; }
    }
    if (ctx->pc != 0x25F964u) { return; }
    ctx->pc = 0x25F964u;
label_25f964:
    // 0x25f964: 0x3c04003c
    ctx->pc = 0x25f964u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f968:
    // 0x25f968: 0x24842ad0
    ctx->pc = 0x25f968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10960));
label_25f96c:
    // 0x25f96c: 0x2405ffff
    ctx->pc = 0x25f96cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f970:
    // 0x25f970: 0xc088108
label_25f974:
    if (ctx->pc == 0x25F974u) {
        ctx->pc = 0x25F974u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F978u;
        goto label_25f978;
    }
    ctx->pc = 0x25F970u;
    SET_GPR_U32(ctx, 31, 0x25F978u);
    ctx->pc = 0x25F974u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F978u; }
    }
    if (ctx->pc != 0x25F978u) { return; }
    ctx->pc = 0x25F978u;
label_25f978:
    // 0x25f978: 0x3c04003c
    ctx->pc = 0x25f978u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25f97c:
    // 0x25f97c: 0x248431a0
    ctx->pc = 0x25f97cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12704));
label_25f980:
    // 0x25f980: 0x131880
    ctx->pc = 0x25f980u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_25f984:
    // 0x25f984: 0x641821
    ctx->pc = 0x25f984u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25f988:
    // 0x25f988: 0xac620000
    ctx->pc = 0x25f988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25f98c:
    // 0x25f98c: 0xdfbf00a0
    ctx->pc = 0x25f98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25f990:
    // 0x25f990: 0xdfb50090
    ctx->pc = 0x25f990u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25f994:
    // 0x25f994: 0xdfb40080
    ctx->pc = 0x25f994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25f998:
    // 0x25f998: 0xdfb30070
    ctx->pc = 0x25f998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25f99c:
    // 0x25f99c: 0xdfb20060
    ctx->pc = 0x25f99cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25f9a0:
    // 0x25f9a0: 0xdfb10050
    ctx->pc = 0x25f9a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25f9a4:
    // 0x25f9a4: 0xdfb00040
    ctx->pc = 0x25f9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25f9a8:
    // 0x25f9a8: 0x3e00008
label_25f9ac:
    if (ctx->pc == 0x25F9ACu) {
        ctx->pc = 0x25F9ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x25F9B0u;
        goto label_fallthrough_0x25f9a8;
    }
    ctx->pc = 0x25F9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F9ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F198u: goto label_25f198;
            case 0x25F19Cu: goto label_25f19c;
            case 0x25F1A0u: goto label_25f1a0;
            case 0x25F1A4u: goto label_25f1a4;
            case 0x25F1A8u: goto label_25f1a8;
            case 0x25F1ACu: goto label_25f1ac;
            case 0x25F1B0u: goto label_25f1b0;
            case 0x25F1B4u: goto label_25f1b4;
            case 0x25F1B8u: goto label_25f1b8;
            case 0x25F1BCu: goto label_25f1bc;
            case 0x25F1C0u: goto label_25f1c0;
            case 0x25F1C4u: goto label_25f1c4;
            case 0x25F1C8u: goto label_25f1c8;
            case 0x25F1CCu: goto label_25f1cc;
            case 0x25F1D0u: goto label_25f1d0;
            case 0x25F1D4u: goto label_25f1d4;
            case 0x25F1D8u: goto label_25f1d8;
            case 0x25F1DCu: goto label_25f1dc;
            case 0x25F1E0u: goto label_25f1e0;
            case 0x25F1E4u: goto label_25f1e4;
            case 0x25F1E8u: goto label_25f1e8;
            case 0x25F1ECu: goto label_25f1ec;
            case 0x25F1F0u: goto label_25f1f0;
            case 0x25F1F4u: goto label_25f1f4;
            case 0x25F1F8u: goto label_25f1f8;
            case 0x25F1FCu: goto label_25f1fc;
            case 0x25F200u: goto label_25f200;
            case 0x25F204u: goto label_25f204;
            case 0x25F208u: goto label_25f208;
            case 0x25F20Cu: goto label_25f20c;
            case 0x25F210u: goto label_25f210;
            case 0x25F214u: goto label_25f214;
            case 0x25F218u: goto label_25f218;
            case 0x25F21Cu: goto label_25f21c;
            case 0x25F220u: goto label_25f220;
            case 0x25F224u: goto label_25f224;
            case 0x25F228u: goto label_25f228;
            case 0x25F22Cu: goto label_25f22c;
            case 0x25F230u: goto label_25f230;
            case 0x25F234u: goto label_25f234;
            case 0x25F238u: goto label_25f238;
            case 0x25F23Cu: goto label_25f23c;
            case 0x25F240u: goto label_25f240;
            case 0x25F244u: goto label_25f244;
            case 0x25F248u: goto label_25f248;
            case 0x25F24Cu: goto label_25f24c;
            case 0x25F250u: goto label_25f250;
            case 0x25F254u: goto label_25f254;
            case 0x25F258u: goto label_25f258;
            case 0x25F25Cu: goto label_25f25c;
            case 0x25F260u: goto label_25f260;
            case 0x25F264u: goto label_25f264;
            case 0x25F268u: goto label_25f268;
            case 0x25F26Cu: goto label_25f26c;
            case 0x25F270u: goto label_25f270;
            case 0x25F274u: goto label_25f274;
            case 0x25F278u: goto label_25f278;
            case 0x25F27Cu: goto label_25f27c;
            case 0x25F280u: goto label_25f280;
            case 0x25F284u: goto label_25f284;
            case 0x25F288u: goto label_25f288;
            case 0x25F28Cu: goto label_25f28c;
            case 0x25F290u: goto label_25f290;
            case 0x25F294u: goto label_25f294;
            case 0x25F298u: goto label_25f298;
            case 0x25F29Cu: goto label_25f29c;
            case 0x25F2A0u: goto label_25f2a0;
            case 0x25F2A4u: goto label_25f2a4;
            case 0x25F2A8u: goto label_25f2a8;
            case 0x25F2ACu: goto label_25f2ac;
            case 0x25F2B0u: goto label_25f2b0;
            case 0x25F2B4u: goto label_25f2b4;
            case 0x25F2B8u: goto label_25f2b8;
            case 0x25F2BCu: goto label_25f2bc;
            case 0x25F2C0u: goto label_25f2c0;
            case 0x25F2C4u: goto label_25f2c4;
            case 0x25F2C8u: goto label_25f2c8;
            case 0x25F2CCu: goto label_25f2cc;
            case 0x25F2D0u: goto label_25f2d0;
            case 0x25F2D4u: goto label_25f2d4;
            case 0x25F2D8u: goto label_25f2d8;
            case 0x25F2DCu: goto label_25f2dc;
            case 0x25F2E0u: goto label_25f2e0;
            case 0x25F2E4u: goto label_25f2e4;
            case 0x25F2E8u: goto label_25f2e8;
            case 0x25F2ECu: goto label_25f2ec;
            case 0x25F2F0u: goto label_25f2f0;
            case 0x25F2F4u: goto label_25f2f4;
            case 0x25F2F8u: goto label_25f2f8;
            case 0x25F2FCu: goto label_25f2fc;
            case 0x25F300u: goto label_25f300;
            case 0x25F304u: goto label_25f304;
            case 0x25F308u: goto label_25f308;
            case 0x25F30Cu: goto label_25f30c;
            case 0x25F310u: goto label_25f310;
            case 0x25F314u: goto label_25f314;
            case 0x25F318u: goto label_25f318;
            case 0x25F31Cu: goto label_25f31c;
            case 0x25F320u: goto label_25f320;
            case 0x25F324u: goto label_25f324;
            case 0x25F328u: goto label_25f328;
            case 0x25F32Cu: goto label_25f32c;
            case 0x25F330u: goto label_25f330;
            case 0x25F334u: goto label_25f334;
            case 0x25F338u: goto label_25f338;
            case 0x25F33Cu: goto label_25f33c;
            case 0x25F340u: goto label_25f340;
            case 0x25F344u: goto label_25f344;
            case 0x25F348u: goto label_25f348;
            case 0x25F34Cu: goto label_25f34c;
            case 0x25F350u: goto label_25f350;
            case 0x25F354u: goto label_25f354;
            case 0x25F358u: goto label_25f358;
            case 0x25F35Cu: goto label_25f35c;
            case 0x25F360u: goto label_25f360;
            case 0x25F364u: goto label_25f364;
            case 0x25F368u: goto label_25f368;
            case 0x25F36Cu: goto label_25f36c;
            case 0x25F370u: goto label_25f370;
            case 0x25F374u: goto label_25f374;
            case 0x25F378u: goto label_25f378;
            case 0x25F37Cu: goto label_25f37c;
            case 0x25F380u: goto label_25f380;
            case 0x25F384u: goto label_25f384;
            case 0x25F388u: goto label_25f388;
            case 0x25F38Cu: goto label_25f38c;
            case 0x25F390u: goto label_25f390;
            case 0x25F394u: goto label_25f394;
            case 0x25F398u: goto label_25f398;
            case 0x25F39Cu: goto label_25f39c;
            case 0x25F3A0u: goto label_25f3a0;
            case 0x25F3A4u: goto label_25f3a4;
            case 0x25F3A8u: goto label_25f3a8;
            case 0x25F3ACu: goto label_25f3ac;
            case 0x25F3B0u: goto label_25f3b0;
            case 0x25F3B4u: goto label_25f3b4;
            case 0x25F3B8u: goto label_25f3b8;
            case 0x25F3BCu: goto label_25f3bc;
            case 0x25F3C0u: goto label_25f3c0;
            case 0x25F3C4u: goto label_25f3c4;
            case 0x25F3C8u: goto label_25f3c8;
            case 0x25F3CCu: goto label_25f3cc;
            case 0x25F3D0u: goto label_25f3d0;
            case 0x25F3D4u: goto label_25f3d4;
            case 0x25F3D8u: goto label_25f3d8;
            case 0x25F3DCu: goto label_25f3dc;
            case 0x25F3E0u: goto label_25f3e0;
            case 0x25F3E4u: goto label_25f3e4;
            case 0x25F3E8u: goto label_25f3e8;
            case 0x25F3ECu: goto label_25f3ec;
            case 0x25F3F0u: goto label_25f3f0;
            case 0x25F3F4u: goto label_25f3f4;
            case 0x25F3F8u: goto label_25f3f8;
            case 0x25F3FCu: goto label_25f3fc;
            case 0x25F400u: goto label_25f400;
            case 0x25F404u: goto label_25f404;
            case 0x25F408u: goto label_25f408;
            case 0x25F40Cu: goto label_25f40c;
            case 0x25F410u: goto label_25f410;
            case 0x25F414u: goto label_25f414;
            case 0x25F418u: goto label_25f418;
            case 0x25F41Cu: goto label_25f41c;
            case 0x25F420u: goto label_25f420;
            case 0x25F424u: goto label_25f424;
            case 0x25F428u: goto label_25f428;
            case 0x25F42Cu: goto label_25f42c;
            case 0x25F430u: goto label_25f430;
            case 0x25F434u: goto label_25f434;
            case 0x25F438u: goto label_25f438;
            case 0x25F43Cu: goto label_25f43c;
            case 0x25F440u: goto label_25f440;
            case 0x25F444u: goto label_25f444;
            case 0x25F448u: goto label_25f448;
            case 0x25F44Cu: goto label_25f44c;
            case 0x25F450u: goto label_25f450;
            case 0x25F454u: goto label_25f454;
            case 0x25F458u: goto label_25f458;
            case 0x25F45Cu: goto label_25f45c;
            case 0x25F460u: goto label_25f460;
            case 0x25F464u: goto label_25f464;
            case 0x25F468u: goto label_25f468;
            case 0x25F46Cu: goto label_25f46c;
            case 0x25F470u: goto label_25f470;
            case 0x25F474u: goto label_25f474;
            case 0x25F478u: goto label_25f478;
            case 0x25F47Cu: goto label_25f47c;
            case 0x25F480u: goto label_25f480;
            case 0x25F484u: goto label_25f484;
            case 0x25F488u: goto label_25f488;
            case 0x25F48Cu: goto label_25f48c;
            case 0x25F490u: goto label_25f490;
            case 0x25F494u: goto label_25f494;
            case 0x25F498u: goto label_25f498;
            case 0x25F49Cu: goto label_25f49c;
            case 0x25F4A0u: goto label_25f4a0;
            case 0x25F4A4u: goto label_25f4a4;
            case 0x25F4A8u: goto label_25f4a8;
            case 0x25F4ACu: goto label_25f4ac;
            case 0x25F4B0u: goto label_25f4b0;
            case 0x25F4B4u: goto label_25f4b4;
            case 0x25F4B8u: goto label_25f4b8;
            case 0x25F4BCu: goto label_25f4bc;
            case 0x25F4C0u: goto label_25f4c0;
            case 0x25F4C4u: goto label_25f4c4;
            case 0x25F4C8u: goto label_25f4c8;
            case 0x25F4CCu: goto label_25f4cc;
            case 0x25F4D0u: goto label_25f4d0;
            case 0x25F4D4u: goto label_25f4d4;
            case 0x25F4D8u: goto label_25f4d8;
            case 0x25F4DCu: goto label_25f4dc;
            case 0x25F4E0u: goto label_25f4e0;
            case 0x25F4E4u: goto label_25f4e4;
            case 0x25F4E8u: goto label_25f4e8;
            case 0x25F4ECu: goto label_25f4ec;
            case 0x25F4F0u: goto label_25f4f0;
            case 0x25F4F4u: goto label_25f4f4;
            case 0x25F4F8u: goto label_25f4f8;
            case 0x25F4FCu: goto label_25f4fc;
            case 0x25F500u: goto label_25f500;
            case 0x25F504u: goto label_25f504;
            case 0x25F508u: goto label_25f508;
            case 0x25F50Cu: goto label_25f50c;
            case 0x25F510u: goto label_25f510;
            case 0x25F514u: goto label_25f514;
            case 0x25F518u: goto label_25f518;
            case 0x25F51Cu: goto label_25f51c;
            case 0x25F520u: goto label_25f520;
            case 0x25F524u: goto label_25f524;
            case 0x25F528u: goto label_25f528;
            case 0x25F52Cu: goto label_25f52c;
            case 0x25F530u: goto label_25f530;
            case 0x25F534u: goto label_25f534;
            case 0x25F538u: goto label_25f538;
            case 0x25F53Cu: goto label_25f53c;
            case 0x25F540u: goto label_25f540;
            case 0x25F544u: goto label_25f544;
            case 0x25F548u: goto label_25f548;
            case 0x25F54Cu: goto label_25f54c;
            case 0x25F550u: goto label_25f550;
            case 0x25F554u: goto label_25f554;
            case 0x25F558u: goto label_25f558;
            case 0x25F55Cu: goto label_25f55c;
            case 0x25F560u: goto label_25f560;
            case 0x25F564u: goto label_25f564;
            case 0x25F568u: goto label_25f568;
            case 0x25F56Cu: goto label_25f56c;
            case 0x25F570u: goto label_25f570;
            case 0x25F574u: goto label_25f574;
            case 0x25F578u: goto label_25f578;
            case 0x25F57Cu: goto label_25f57c;
            case 0x25F580u: goto label_25f580;
            case 0x25F584u: goto label_25f584;
            case 0x25F588u: goto label_25f588;
            case 0x25F58Cu: goto label_25f58c;
            case 0x25F590u: goto label_25f590;
            case 0x25F594u: goto label_25f594;
            case 0x25F598u: goto label_25f598;
            case 0x25F59Cu: goto label_25f59c;
            case 0x25F5A0u: goto label_25f5a0;
            case 0x25F5A4u: goto label_25f5a4;
            case 0x25F5A8u: goto label_25f5a8;
            case 0x25F5ACu: goto label_25f5ac;
            case 0x25F5B0u: goto label_25f5b0;
            case 0x25F5B4u: goto label_25f5b4;
            case 0x25F5B8u: goto label_25f5b8;
            case 0x25F5BCu: goto label_25f5bc;
            case 0x25F5C0u: goto label_25f5c0;
            case 0x25F5C4u: goto label_25f5c4;
            case 0x25F5C8u: goto label_25f5c8;
            case 0x25F5CCu: goto label_25f5cc;
            case 0x25F5D0u: goto label_25f5d0;
            case 0x25F5D4u: goto label_25f5d4;
            case 0x25F5D8u: goto label_25f5d8;
            case 0x25F5DCu: goto label_25f5dc;
            case 0x25F5E0u: goto label_25f5e0;
            case 0x25F5E4u: goto label_25f5e4;
            case 0x25F5E8u: goto label_25f5e8;
            case 0x25F5ECu: goto label_25f5ec;
            case 0x25F5F0u: goto label_25f5f0;
            case 0x25F5F4u: goto label_25f5f4;
            case 0x25F5F8u: goto label_25f5f8;
            case 0x25F5FCu: goto label_25f5fc;
            case 0x25F600u: goto label_25f600;
            case 0x25F604u: goto label_25f604;
            case 0x25F608u: goto label_25f608;
            case 0x25F60Cu: goto label_25f60c;
            case 0x25F610u: goto label_25f610;
            case 0x25F614u: goto label_25f614;
            case 0x25F618u: goto label_25f618;
            case 0x25F61Cu: goto label_25f61c;
            case 0x25F620u: goto label_25f620;
            case 0x25F624u: goto label_25f624;
            case 0x25F628u: goto label_25f628;
            case 0x25F62Cu: goto label_25f62c;
            case 0x25F630u: goto label_25f630;
            case 0x25F634u: goto label_25f634;
            case 0x25F638u: goto label_25f638;
            case 0x25F63Cu: goto label_25f63c;
            case 0x25F640u: goto label_25f640;
            case 0x25F644u: goto label_25f644;
            case 0x25F648u: goto label_25f648;
            case 0x25F64Cu: goto label_25f64c;
            case 0x25F650u: goto label_25f650;
            case 0x25F654u: goto label_25f654;
            case 0x25F658u: goto label_25f658;
            case 0x25F65Cu: goto label_25f65c;
            case 0x25F660u: goto label_25f660;
            case 0x25F664u: goto label_25f664;
            case 0x25F668u: goto label_25f668;
            case 0x25F66Cu: goto label_25f66c;
            case 0x25F670u: goto label_25f670;
            case 0x25F674u: goto label_25f674;
            case 0x25F678u: goto label_25f678;
            case 0x25F67Cu: goto label_25f67c;
            case 0x25F680u: goto label_25f680;
            case 0x25F684u: goto label_25f684;
            case 0x25F688u: goto label_25f688;
            case 0x25F68Cu: goto label_25f68c;
            case 0x25F690u: goto label_25f690;
            case 0x25F694u: goto label_25f694;
            case 0x25F698u: goto label_25f698;
            case 0x25F69Cu: goto label_25f69c;
            case 0x25F6A0u: goto label_25f6a0;
            case 0x25F6A4u: goto label_25f6a4;
            case 0x25F6A8u: goto label_25f6a8;
            case 0x25F6ACu: goto label_25f6ac;
            case 0x25F6B0u: goto label_25f6b0;
            case 0x25F6B4u: goto label_25f6b4;
            case 0x25F6B8u: goto label_25f6b8;
            case 0x25F6BCu: goto label_25f6bc;
            case 0x25F6C0u: goto label_25f6c0;
            case 0x25F6C4u: goto label_25f6c4;
            case 0x25F6C8u: goto label_25f6c8;
            case 0x25F6CCu: goto label_25f6cc;
            case 0x25F6D0u: goto label_25f6d0;
            case 0x25F6D4u: goto label_25f6d4;
            case 0x25F6D8u: goto label_25f6d8;
            case 0x25F6DCu: goto label_25f6dc;
            case 0x25F6E0u: goto label_25f6e0;
            case 0x25F6E4u: goto label_25f6e4;
            case 0x25F6E8u: goto label_25f6e8;
            case 0x25F6ECu: goto label_25f6ec;
            case 0x25F6F0u: goto label_25f6f0;
            case 0x25F6F4u: goto label_25f6f4;
            case 0x25F6F8u: goto label_25f6f8;
            case 0x25F6FCu: goto label_25f6fc;
            case 0x25F700u: goto label_25f700;
            case 0x25F704u: goto label_25f704;
            case 0x25F708u: goto label_25f708;
            case 0x25F70Cu: goto label_25f70c;
            case 0x25F710u: goto label_25f710;
            case 0x25F714u: goto label_25f714;
            case 0x25F718u: goto label_25f718;
            case 0x25F71Cu: goto label_25f71c;
            case 0x25F720u: goto label_25f720;
            case 0x25F724u: goto label_25f724;
            case 0x25F728u: goto label_25f728;
            case 0x25F72Cu: goto label_25f72c;
            case 0x25F730u: goto label_25f730;
            case 0x25F734u: goto label_25f734;
            case 0x25F738u: goto label_25f738;
            case 0x25F73Cu: goto label_25f73c;
            case 0x25F740u: goto label_25f740;
            case 0x25F744u: goto label_25f744;
            case 0x25F748u: goto label_25f748;
            case 0x25F74Cu: goto label_25f74c;
            case 0x25F750u: goto label_25f750;
            case 0x25F754u: goto label_25f754;
            case 0x25F758u: goto label_25f758;
            case 0x25F75Cu: goto label_25f75c;
            case 0x25F760u: goto label_25f760;
            case 0x25F764u: goto label_25f764;
            case 0x25F768u: goto label_25f768;
            case 0x25F76Cu: goto label_25f76c;
            case 0x25F770u: goto label_25f770;
            case 0x25F774u: goto label_25f774;
            case 0x25F778u: goto label_25f778;
            case 0x25F77Cu: goto label_25f77c;
            case 0x25F780u: goto label_25f780;
            case 0x25F784u: goto label_25f784;
            case 0x25F788u: goto label_25f788;
            case 0x25F78Cu: goto label_25f78c;
            case 0x25F790u: goto label_25f790;
            case 0x25F794u: goto label_25f794;
            case 0x25F798u: goto label_25f798;
            case 0x25F79Cu: goto label_25f79c;
            case 0x25F7A0u: goto label_25f7a0;
            case 0x25F7A4u: goto label_25f7a4;
            case 0x25F7A8u: goto label_25f7a8;
            case 0x25F7ACu: goto label_25f7ac;
            case 0x25F7B0u: goto label_25f7b0;
            case 0x25F7B4u: goto label_25f7b4;
            case 0x25F7B8u: goto label_25f7b8;
            case 0x25F7BCu: goto label_25f7bc;
            case 0x25F7C0u: goto label_25f7c0;
            case 0x25F7C4u: goto label_25f7c4;
            case 0x25F7C8u: goto label_25f7c8;
            case 0x25F7CCu: goto label_25f7cc;
            case 0x25F7D0u: goto label_25f7d0;
            case 0x25F7D4u: goto label_25f7d4;
            case 0x25F7D8u: goto label_25f7d8;
            case 0x25F7DCu: goto label_25f7dc;
            case 0x25F7E0u: goto label_25f7e0;
            case 0x25F7E4u: goto label_25f7e4;
            case 0x25F7E8u: goto label_25f7e8;
            case 0x25F7ECu: goto label_25f7ec;
            case 0x25F7F0u: goto label_25f7f0;
            case 0x25F7F4u: goto label_25f7f4;
            case 0x25F7F8u: goto label_25f7f8;
            case 0x25F7FCu: goto label_25f7fc;
            case 0x25F800u: goto label_25f800;
            case 0x25F804u: goto label_25f804;
            case 0x25F808u: goto label_25f808;
            case 0x25F80Cu: goto label_25f80c;
            case 0x25F810u: goto label_25f810;
            case 0x25F814u: goto label_25f814;
            case 0x25F818u: goto label_25f818;
            case 0x25F81Cu: goto label_25f81c;
            case 0x25F820u: goto label_25f820;
            case 0x25F824u: goto label_25f824;
            case 0x25F828u: goto label_25f828;
            case 0x25F82Cu: goto label_25f82c;
            case 0x25F830u: goto label_25f830;
            case 0x25F834u: goto label_25f834;
            case 0x25F838u: goto label_25f838;
            case 0x25F83Cu: goto label_25f83c;
            case 0x25F840u: goto label_25f840;
            case 0x25F844u: goto label_25f844;
            case 0x25F848u: goto label_25f848;
            case 0x25F84Cu: goto label_25f84c;
            case 0x25F850u: goto label_25f850;
            case 0x25F854u: goto label_25f854;
            case 0x25F858u: goto label_25f858;
            case 0x25F85Cu: goto label_25f85c;
            case 0x25F860u: goto label_25f860;
            case 0x25F864u: goto label_25f864;
            case 0x25F868u: goto label_25f868;
            case 0x25F86Cu: goto label_25f86c;
            case 0x25F870u: goto label_25f870;
            case 0x25F874u: goto label_25f874;
            case 0x25F878u: goto label_25f878;
            case 0x25F87Cu: goto label_25f87c;
            case 0x25F880u: goto label_25f880;
            case 0x25F884u: goto label_25f884;
            case 0x25F888u: goto label_25f888;
            case 0x25F88Cu: goto label_25f88c;
            case 0x25F890u: goto label_25f890;
            case 0x25F894u: goto label_25f894;
            case 0x25F898u: goto label_25f898;
            case 0x25F89Cu: goto label_25f89c;
            case 0x25F8A0u: goto label_25f8a0;
            case 0x25F8A4u: goto label_25f8a4;
            case 0x25F8A8u: goto label_25f8a8;
            case 0x25F8ACu: goto label_25f8ac;
            case 0x25F8B0u: goto label_25f8b0;
            case 0x25F8B4u: goto label_25f8b4;
            case 0x25F8B8u: goto label_25f8b8;
            case 0x25F8BCu: goto label_25f8bc;
            case 0x25F8C0u: goto label_25f8c0;
            case 0x25F8C4u: goto label_25f8c4;
            case 0x25F8C8u: goto label_25f8c8;
            case 0x25F8CCu: goto label_25f8cc;
            case 0x25F8D0u: goto label_25f8d0;
            case 0x25F8D4u: goto label_25f8d4;
            case 0x25F8D8u: goto label_25f8d8;
            case 0x25F8DCu: goto label_25f8dc;
            case 0x25F8E0u: goto label_25f8e0;
            case 0x25F8E4u: goto label_25f8e4;
            case 0x25F8E8u: goto label_25f8e8;
            case 0x25F8ECu: goto label_25f8ec;
            case 0x25F8F0u: goto label_25f8f0;
            case 0x25F8F4u: goto label_25f8f4;
            case 0x25F8F8u: goto label_25f8f8;
            case 0x25F8FCu: goto label_25f8fc;
            case 0x25F900u: goto label_25f900;
            case 0x25F904u: goto label_25f904;
            case 0x25F908u: goto label_25f908;
            case 0x25F90Cu: goto label_25f90c;
            case 0x25F910u: goto label_25f910;
            case 0x25F914u: goto label_25f914;
            case 0x25F918u: goto label_25f918;
            case 0x25F91Cu: goto label_25f91c;
            case 0x25F920u: goto label_25f920;
            case 0x25F924u: goto label_25f924;
            case 0x25F928u: goto label_25f928;
            case 0x25F92Cu: goto label_25f92c;
            case 0x25F930u: goto label_25f930;
            case 0x25F934u: goto label_25f934;
            case 0x25F938u: goto label_25f938;
            case 0x25F93Cu: goto label_25f93c;
            case 0x25F940u: goto label_25f940;
            case 0x25F944u: goto label_25f944;
            case 0x25F948u: goto label_25f948;
            case 0x25F94Cu: goto label_25f94c;
            case 0x25F950u: goto label_25f950;
            case 0x25F954u: goto label_25f954;
            case 0x25F958u: goto label_25f958;
            case 0x25F95Cu: goto label_25f95c;
            case 0x25F960u: goto label_25f960;
            case 0x25F964u: goto label_25f964;
            case 0x25F968u: goto label_25f968;
            case 0x25F96Cu: goto label_25f96c;
            case 0x25F970u: goto label_25f970;
            case 0x25F974u: goto label_25f974;
            case 0x25F978u: goto label_25f978;
            case 0x25F97Cu: goto label_25f97c;
            case 0x25F980u: goto label_25f980;
            case 0x25F984u: goto label_25f984;
            case 0x25F988u: goto label_25f988;
            case 0x25F98Cu: goto label_25f98c;
            case 0x25F990u: goto label_25f990;
            case 0x25F994u: goto label_25f994;
            case 0x25F998u: goto label_25f998;
            case 0x25F99Cu: goto label_25f99c;
            case 0x25F9A0u: goto label_25f9a0;
            case 0x25F9A4u: goto label_25f9a4;
            case 0x25F9A8u: goto label_25f9a8;
            case 0x25F9ACu: goto label_25f9ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x25f9a8:
    ctx->pc = 0x25F9B0u;
}
