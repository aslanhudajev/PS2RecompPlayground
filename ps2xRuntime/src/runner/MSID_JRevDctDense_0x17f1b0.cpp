#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MSID_JRevDctDense
// Address: 0x17f1b0 - 0x17f900
void MSID_JRevDctDense_0x17f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MSID_JRevDctDense");


    ctx->pc = 0x17f1b0u;

label_17f1b0:
    // 0x17f1b0: 0x27bdff80
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_17f1b4:
    // 0x17f1b4: 0x3c02002c
    ctx->pc = 0x17f1b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_17f1b8:
    // 0x17f1b8: 0xffb50050
    ctx->pc = 0x17f1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_17f1bc:
    // 0x17f1bc: 0x52900
    ctx->pc = 0x17f1bcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
label_17f1c0:
    // 0x17f1c0: 0xffb20020
    ctx->pc = 0x17f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17f1c4:
    // 0x17f1c4: 0x2442c1d0
    ctx->pc = 0x17f1c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951376));
label_17f1c8:
    // 0x17f1c8: 0xffbf0070
    ctx->pc = 0x17f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17f1cc:
    // 0x17f1cc: 0xa22821
    ctx->pc = 0x17f1ccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17f1d0:
    // 0x17f1d0: 0xffb60060
    ctx->pc = 0x17f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_17f1d4:
    // 0x17f1d4: 0x80a82d
    ctx->pc = 0x17f1d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f1d8:
    // 0x17f1d8: 0xffb40040
    ctx->pc = 0x17f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_17f1dc:
    // 0x17f1dc: 0x2a0582d
    ctx->pc = 0x17f1dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17f1e0:
    // 0x17f1e0: 0xffb10010
    ctx->pc = 0x17f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17f1e4:
    // 0x17f1e4: 0x24b20002
    ctx->pc = 0x17f1e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 5), 2));
label_17f1e8:
    // 0x17f1e8: 0xffb00000
    ctx->pc = 0x17f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17f1ec:
    // 0x17f1ec: 0xc82d
    ctx->pc = 0x17f1ecu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f1f0:
    // 0x17f1f0: 0xffb30030
    ctx->pc = 0x17f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17f1f4:
    // 0x17f1f4: 0x80b30001
    ctx->pc = 0x17f1f4u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_17f1f8:
    // 0x17f1f8: 0x1a6001a8
label_17f1fc:
    if (ctx->pc == 0x17F1FCu) {
        ctx->pc = 0x17F1FCu;
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x17F200u;
        goto label_17f200;
    }
    ctx->pc = 0x17F1F8u;
    {
        const bool branch_taken_0x17f1f8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17F1FCu;
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x17f1f8) {
            ctx->pc = 0x17F89Cu;
            goto label_17f89c;
        }
    }
    ctx->pc = 0x17F200u;
label_17f200:
    // 0x17f200: 0x3c16002c
    ctx->pc = 0x17f200u;
    SET_GPR_U32(ctx, 22, ((uint32_t)44 << 16));
label_17f204:
    // 0x17f204: 0x0
    ctx->pc = 0x17f204u;
    // NOP
label_17f208:
    // 0x17f208: 0x82480000
    ctx->pc = 0x17f208u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_17f20c:
    // 0x17f20c: 0x702d
    ctx->pc = 0x17f20cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f210:
    // 0x17f210: 0x382d
    ctx->pc = 0x17f210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f214:
    // 0x17f214: 0x682d
    ctx->pc = 0x17f214u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f218:
    // 0x17f218: 0x2d020008
    ctx->pc = 0x17f218u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), 8));
label_17f21c:
    // 0x17f21c: 0x10400081
label_17f220:
    if (ctx->pc == 0x17F220u) {
        ctx->pc = 0x17F220u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x17F224u;
        goto label_17f224;
    }
    ctx->pc = 0x17F21Cu;
    {
        const bool branch_taken_0x17f21c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F220u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x17f21c) {
            ctx->pc = 0x17F424u;
            goto label_17f424;
        }
    }
    ctx->pc = 0x17F224u;
label_17f224:
    // 0x17f224: 0x3c02002c
    ctx->pc = 0x17f224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_17f228:
    // 0x17f228: 0x81880
    ctx->pc = 0x17f228u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
label_17f22c:
    // 0x17f22c: 0x2442c6d0
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952656));
label_17f230:
    // 0x17f230: 0x621821
    ctx->pc = 0x17f230u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17f234:
    // 0x17f234: 0x8c640000
    ctx->pc = 0x17f234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17f238:
    // 0x17f238: 0x800008
label_17f23c:
    if (ctx->pc == 0x17F23Cu) {
        ctx->pc = 0x17F240u;
        goto label_17f240;
    }
    ctx->pc = 0x17F238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F1B0u: goto label_17f1b0;
            case 0x17F1B4u: goto label_17f1b4;
            case 0x17F1B8u: goto label_17f1b8;
            case 0x17F1BCu: goto label_17f1bc;
            case 0x17F1C0u: goto label_17f1c0;
            case 0x17F1C4u: goto label_17f1c4;
            case 0x17F1C8u: goto label_17f1c8;
            case 0x17F1CCu: goto label_17f1cc;
            case 0x17F1D0u: goto label_17f1d0;
            case 0x17F1D4u: goto label_17f1d4;
            case 0x17F1D8u: goto label_17f1d8;
            case 0x17F1DCu: goto label_17f1dc;
            case 0x17F1E0u: goto label_17f1e0;
            case 0x17F1E4u: goto label_17f1e4;
            case 0x17F1E8u: goto label_17f1e8;
            case 0x17F1ECu: goto label_17f1ec;
            case 0x17F1F0u: goto label_17f1f0;
            case 0x17F1F4u: goto label_17f1f4;
            case 0x17F1F8u: goto label_17f1f8;
            case 0x17F1FCu: goto label_17f1fc;
            case 0x17F200u: goto label_17f200;
            case 0x17F204u: goto label_17f204;
            case 0x17F208u: goto label_17f208;
            case 0x17F20Cu: goto label_17f20c;
            case 0x17F210u: goto label_17f210;
            case 0x17F214u: goto label_17f214;
            case 0x17F218u: goto label_17f218;
            case 0x17F21Cu: goto label_17f21c;
            case 0x17F220u: goto label_17f220;
            case 0x17F224u: goto label_17f224;
            case 0x17F228u: goto label_17f228;
            case 0x17F22Cu: goto label_17f22c;
            case 0x17F230u: goto label_17f230;
            case 0x17F234u: goto label_17f234;
            case 0x17F238u: goto label_17f238;
            case 0x17F23Cu: goto label_17f23c;
            case 0x17F240u: goto label_17f240;
            case 0x17F244u: goto label_17f244;
            case 0x17F248u: goto label_17f248;
            case 0x17F24Cu: goto label_17f24c;
            case 0x17F250u: goto label_17f250;
            case 0x17F254u: goto label_17f254;
            case 0x17F258u: goto label_17f258;
            case 0x17F25Cu: goto label_17f25c;
            case 0x17F260u: goto label_17f260;
            case 0x17F264u: goto label_17f264;
            case 0x17F268u: goto label_17f268;
            case 0x17F26Cu: goto label_17f26c;
            case 0x17F270u: goto label_17f270;
            case 0x17F274u: goto label_17f274;
            case 0x17F278u: goto label_17f278;
            case 0x17F27Cu: goto label_17f27c;
            case 0x17F280u: goto label_17f280;
            case 0x17F284u: goto label_17f284;
            case 0x17F288u: goto label_17f288;
            case 0x17F28Cu: goto label_17f28c;
            case 0x17F290u: goto label_17f290;
            case 0x17F294u: goto label_17f294;
            case 0x17F298u: goto label_17f298;
            case 0x17F29Cu: goto label_17f29c;
            case 0x17F2A0u: goto label_17f2a0;
            case 0x17F2A4u: goto label_17f2a4;
            case 0x17F2A8u: goto label_17f2a8;
            case 0x17F2ACu: goto label_17f2ac;
            case 0x17F2B0u: goto label_17f2b0;
            case 0x17F2B4u: goto label_17f2b4;
            case 0x17F2B8u: goto label_17f2b8;
            case 0x17F2BCu: goto label_17f2bc;
            case 0x17F2C0u: goto label_17f2c0;
            case 0x17F2C4u: goto label_17f2c4;
            case 0x17F2C8u: goto label_17f2c8;
            case 0x17F2CCu: goto label_17f2cc;
            case 0x17F2D0u: goto label_17f2d0;
            case 0x17F2D4u: goto label_17f2d4;
            case 0x17F2D8u: goto label_17f2d8;
            case 0x17F2DCu: goto label_17f2dc;
            case 0x17F2E0u: goto label_17f2e0;
            case 0x17F2E4u: goto label_17f2e4;
            case 0x17F2E8u: goto label_17f2e8;
            case 0x17F2ECu: goto label_17f2ec;
            case 0x17F2F0u: goto label_17f2f0;
            case 0x17F2F4u: goto label_17f2f4;
            case 0x17F2F8u: goto label_17f2f8;
            case 0x17F2FCu: goto label_17f2fc;
            case 0x17F300u: goto label_17f300;
            case 0x17F304u: goto label_17f304;
            case 0x17F308u: goto label_17f308;
            case 0x17F30Cu: goto label_17f30c;
            case 0x17F310u: goto label_17f310;
            case 0x17F314u: goto label_17f314;
            case 0x17F318u: goto label_17f318;
            case 0x17F31Cu: goto label_17f31c;
            case 0x17F320u: goto label_17f320;
            case 0x17F324u: goto label_17f324;
            case 0x17F328u: goto label_17f328;
            case 0x17F32Cu: goto label_17f32c;
            case 0x17F330u: goto label_17f330;
            case 0x17F334u: goto label_17f334;
            case 0x17F338u: goto label_17f338;
            case 0x17F33Cu: goto label_17f33c;
            case 0x17F340u: goto label_17f340;
            case 0x17F344u: goto label_17f344;
            case 0x17F348u: goto label_17f348;
            case 0x17F34Cu: goto label_17f34c;
            case 0x17F350u: goto label_17f350;
            case 0x17F354u: goto label_17f354;
            case 0x17F358u: goto label_17f358;
            case 0x17F35Cu: goto label_17f35c;
            case 0x17F360u: goto label_17f360;
            case 0x17F364u: goto label_17f364;
            case 0x17F368u: goto label_17f368;
            case 0x17F36Cu: goto label_17f36c;
            case 0x17F370u: goto label_17f370;
            case 0x17F374u: goto label_17f374;
            case 0x17F378u: goto label_17f378;
            case 0x17F37Cu: goto label_17f37c;
            case 0x17F380u: goto label_17f380;
            case 0x17F384u: goto label_17f384;
            case 0x17F388u: goto label_17f388;
            case 0x17F38Cu: goto label_17f38c;
            case 0x17F390u: goto label_17f390;
            case 0x17F394u: goto label_17f394;
            case 0x17F398u: goto label_17f398;
            case 0x17F39Cu: goto label_17f39c;
            case 0x17F3A0u: goto label_17f3a0;
            case 0x17F3A4u: goto label_17f3a4;
            case 0x17F3A8u: goto label_17f3a8;
            case 0x17F3ACu: goto label_17f3ac;
            case 0x17F3B0u: goto label_17f3b0;
            case 0x17F3B4u: goto label_17f3b4;
            case 0x17F3B8u: goto label_17f3b8;
            case 0x17F3BCu: goto label_17f3bc;
            case 0x17F3C0u: goto label_17f3c0;
            case 0x17F3C4u: goto label_17f3c4;
            case 0x17F3C8u: goto label_17f3c8;
            case 0x17F3CCu: goto label_17f3cc;
            case 0x17F3D0u: goto label_17f3d0;
            case 0x17F3D4u: goto label_17f3d4;
            case 0x17F3D8u: goto label_17f3d8;
            case 0x17F3DCu: goto label_17f3dc;
            case 0x17F3E0u: goto label_17f3e0;
            case 0x17F3E4u: goto label_17f3e4;
            case 0x17F3E8u: goto label_17f3e8;
            case 0x17F3ECu: goto label_17f3ec;
            case 0x17F3F0u: goto label_17f3f0;
            case 0x17F3F4u: goto label_17f3f4;
            case 0x17F3F8u: goto label_17f3f8;
            case 0x17F3FCu: goto label_17f3fc;
            case 0x17F400u: goto label_17f400;
            case 0x17F404u: goto label_17f404;
            case 0x17F408u: goto label_17f408;
            case 0x17F40Cu: goto label_17f40c;
            case 0x17F410u: goto label_17f410;
            case 0x17F414u: goto label_17f414;
            case 0x17F418u: goto label_17f418;
            case 0x17F41Cu: goto label_17f41c;
            case 0x17F420u: goto label_17f420;
            case 0x17F424u: goto label_17f424;
            case 0x17F428u: goto label_17f428;
            case 0x17F42Cu: goto label_17f42c;
            case 0x17F430u: goto label_17f430;
            case 0x17F434u: goto label_17f434;
            case 0x17F438u: goto label_17f438;
            case 0x17F43Cu: goto label_17f43c;
            case 0x17F440u: goto label_17f440;
            case 0x17F444u: goto label_17f444;
            case 0x17F448u: goto label_17f448;
            case 0x17F44Cu: goto label_17f44c;
            case 0x17F450u: goto label_17f450;
            case 0x17F454u: goto label_17f454;
            case 0x17F458u: goto label_17f458;
            case 0x17F45Cu: goto label_17f45c;
            case 0x17F460u: goto label_17f460;
            case 0x17F464u: goto label_17f464;
            case 0x17F468u: goto label_17f468;
            case 0x17F46Cu: goto label_17f46c;
            case 0x17F470u: goto label_17f470;
            case 0x17F474u: goto label_17f474;
            case 0x17F478u: goto label_17f478;
            case 0x17F47Cu: goto label_17f47c;
            case 0x17F480u: goto label_17f480;
            case 0x17F484u: goto label_17f484;
            case 0x17F488u: goto label_17f488;
            case 0x17F48Cu: goto label_17f48c;
            case 0x17F490u: goto label_17f490;
            case 0x17F494u: goto label_17f494;
            case 0x17F498u: goto label_17f498;
            case 0x17F49Cu: goto label_17f49c;
            case 0x17F4A0u: goto label_17f4a0;
            case 0x17F4A4u: goto label_17f4a4;
            case 0x17F4A8u: goto label_17f4a8;
            case 0x17F4ACu: goto label_17f4ac;
            case 0x17F4B0u: goto label_17f4b0;
            case 0x17F4B4u: goto label_17f4b4;
            case 0x17F4B8u: goto label_17f4b8;
            case 0x17F4BCu: goto label_17f4bc;
            case 0x17F4C0u: goto label_17f4c0;
            case 0x17F4C4u: goto label_17f4c4;
            case 0x17F4C8u: goto label_17f4c8;
            case 0x17F4CCu: goto label_17f4cc;
            case 0x17F4D0u: goto label_17f4d0;
            case 0x17F4D4u: goto label_17f4d4;
            case 0x17F4D8u: goto label_17f4d8;
            case 0x17F4DCu: goto label_17f4dc;
            case 0x17F4E0u: goto label_17f4e0;
            case 0x17F4E4u: goto label_17f4e4;
            case 0x17F4E8u: goto label_17f4e8;
            case 0x17F4ECu: goto label_17f4ec;
            case 0x17F4F0u: goto label_17f4f0;
            case 0x17F4F4u: goto label_17f4f4;
            case 0x17F4F8u: goto label_17f4f8;
            case 0x17F4FCu: goto label_17f4fc;
            case 0x17F500u: goto label_17f500;
            case 0x17F504u: goto label_17f504;
            case 0x17F508u: goto label_17f508;
            case 0x17F50Cu: goto label_17f50c;
            case 0x17F510u: goto label_17f510;
            case 0x17F514u: goto label_17f514;
            case 0x17F518u: goto label_17f518;
            case 0x17F51Cu: goto label_17f51c;
            case 0x17F520u: goto label_17f520;
            case 0x17F524u: goto label_17f524;
            case 0x17F528u: goto label_17f528;
            case 0x17F52Cu: goto label_17f52c;
            case 0x17F530u: goto label_17f530;
            case 0x17F534u: goto label_17f534;
            case 0x17F538u: goto label_17f538;
            case 0x17F53Cu: goto label_17f53c;
            case 0x17F540u: goto label_17f540;
            case 0x17F544u: goto label_17f544;
            case 0x17F548u: goto label_17f548;
            case 0x17F54Cu: goto label_17f54c;
            case 0x17F550u: goto label_17f550;
            case 0x17F554u: goto label_17f554;
            case 0x17F558u: goto label_17f558;
            case 0x17F55Cu: goto label_17f55c;
            case 0x17F560u: goto label_17f560;
            case 0x17F564u: goto label_17f564;
            case 0x17F568u: goto label_17f568;
            case 0x17F56Cu: goto label_17f56c;
            case 0x17F570u: goto label_17f570;
            case 0x17F574u: goto label_17f574;
            case 0x17F578u: goto label_17f578;
            case 0x17F57Cu: goto label_17f57c;
            case 0x17F580u: goto label_17f580;
            case 0x17F584u: goto label_17f584;
            case 0x17F588u: goto label_17f588;
            case 0x17F58Cu: goto label_17f58c;
            case 0x17F590u: goto label_17f590;
            case 0x17F594u: goto label_17f594;
            case 0x17F598u: goto label_17f598;
            case 0x17F59Cu: goto label_17f59c;
            case 0x17F5A0u: goto label_17f5a0;
            case 0x17F5A4u: goto label_17f5a4;
            case 0x17F5A8u: goto label_17f5a8;
            case 0x17F5ACu: goto label_17f5ac;
            case 0x17F5B0u: goto label_17f5b0;
            case 0x17F5B4u: goto label_17f5b4;
            case 0x17F5B8u: goto label_17f5b8;
            case 0x17F5BCu: goto label_17f5bc;
            case 0x17F5C0u: goto label_17f5c0;
            case 0x17F5C4u: goto label_17f5c4;
            case 0x17F5C8u: goto label_17f5c8;
            case 0x17F5CCu: goto label_17f5cc;
            case 0x17F5D0u: goto label_17f5d0;
            case 0x17F5D4u: goto label_17f5d4;
            case 0x17F5D8u: goto label_17f5d8;
            case 0x17F5DCu: goto label_17f5dc;
            case 0x17F5E0u: goto label_17f5e0;
            case 0x17F5E4u: goto label_17f5e4;
            case 0x17F5E8u: goto label_17f5e8;
            case 0x17F5ECu: goto label_17f5ec;
            case 0x17F5F0u: goto label_17f5f0;
            case 0x17F5F4u: goto label_17f5f4;
            case 0x17F5F8u: goto label_17f5f8;
            case 0x17F5FCu: goto label_17f5fc;
            case 0x17F600u: goto label_17f600;
            case 0x17F604u: goto label_17f604;
            case 0x17F608u: goto label_17f608;
            case 0x17F60Cu: goto label_17f60c;
            case 0x17F610u: goto label_17f610;
            case 0x17F614u: goto label_17f614;
            case 0x17F618u: goto label_17f618;
            case 0x17F61Cu: goto label_17f61c;
            case 0x17F620u: goto label_17f620;
            case 0x17F624u: goto label_17f624;
            case 0x17F628u: goto label_17f628;
            case 0x17F62Cu: goto label_17f62c;
            case 0x17F630u: goto label_17f630;
            case 0x17F634u: goto label_17f634;
            case 0x17F638u: goto label_17f638;
            case 0x17F63Cu: goto label_17f63c;
            case 0x17F640u: goto label_17f640;
            case 0x17F644u: goto label_17f644;
            case 0x17F648u: goto label_17f648;
            case 0x17F64Cu: goto label_17f64c;
            case 0x17F650u: goto label_17f650;
            case 0x17F654u: goto label_17f654;
            case 0x17F658u: goto label_17f658;
            case 0x17F65Cu: goto label_17f65c;
            case 0x17F660u: goto label_17f660;
            case 0x17F664u: goto label_17f664;
            case 0x17F668u: goto label_17f668;
            case 0x17F66Cu: goto label_17f66c;
            case 0x17F670u: goto label_17f670;
            case 0x17F674u: goto label_17f674;
            case 0x17F678u: goto label_17f678;
            case 0x17F67Cu: goto label_17f67c;
            case 0x17F680u: goto label_17f680;
            case 0x17F684u: goto label_17f684;
            case 0x17F688u: goto label_17f688;
            case 0x17F68Cu: goto label_17f68c;
            case 0x17F690u: goto label_17f690;
            case 0x17F694u: goto label_17f694;
            case 0x17F698u: goto label_17f698;
            case 0x17F69Cu: goto label_17f69c;
            case 0x17F6A0u: goto label_17f6a0;
            case 0x17F6A4u: goto label_17f6a4;
            case 0x17F6A8u: goto label_17f6a8;
            case 0x17F6ACu: goto label_17f6ac;
            case 0x17F6B0u: goto label_17f6b0;
            case 0x17F6B4u: goto label_17f6b4;
            case 0x17F6B8u: goto label_17f6b8;
            case 0x17F6BCu: goto label_17f6bc;
            case 0x17F6C0u: goto label_17f6c0;
            case 0x17F6C4u: goto label_17f6c4;
            case 0x17F6C8u: goto label_17f6c8;
            case 0x17F6CCu: goto label_17f6cc;
            case 0x17F6D0u: goto label_17f6d0;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6D8u: goto label_17f6d8;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F6E0u: goto label_17f6e0;
            case 0x17F6E4u: goto label_17f6e4;
            case 0x17F6E8u: goto label_17f6e8;
            case 0x17F6ECu: goto label_17f6ec;
            case 0x17F6F0u: goto label_17f6f0;
            case 0x17F6F4u: goto label_17f6f4;
            case 0x17F6F8u: goto label_17f6f8;
            case 0x17F6FCu: goto label_17f6fc;
            case 0x17F700u: goto label_17f700;
            case 0x17F704u: goto label_17f704;
            case 0x17F708u: goto label_17f708;
            case 0x17F70Cu: goto label_17f70c;
            case 0x17F710u: goto label_17f710;
            case 0x17F714u: goto label_17f714;
            case 0x17F718u: goto label_17f718;
            case 0x17F71Cu: goto label_17f71c;
            case 0x17F720u: goto label_17f720;
            case 0x17F724u: goto label_17f724;
            case 0x17F728u: goto label_17f728;
            case 0x17F72Cu: goto label_17f72c;
            case 0x17F730u: goto label_17f730;
            case 0x17F734u: goto label_17f734;
            case 0x17F738u: goto label_17f738;
            case 0x17F73Cu: goto label_17f73c;
            case 0x17F740u: goto label_17f740;
            case 0x17F744u: goto label_17f744;
            case 0x17F748u: goto label_17f748;
            case 0x17F74Cu: goto label_17f74c;
            case 0x17F750u: goto label_17f750;
            case 0x17F754u: goto label_17f754;
            case 0x17F758u: goto label_17f758;
            case 0x17F75Cu: goto label_17f75c;
            case 0x17F760u: goto label_17f760;
            case 0x17F764u: goto label_17f764;
            case 0x17F768u: goto label_17f768;
            case 0x17F76Cu: goto label_17f76c;
            case 0x17F770u: goto label_17f770;
            case 0x17F774u: goto label_17f774;
            case 0x17F778u: goto label_17f778;
            case 0x17F77Cu: goto label_17f77c;
            case 0x17F780u: goto label_17f780;
            case 0x17F784u: goto label_17f784;
            case 0x17F788u: goto label_17f788;
            case 0x17F78Cu: goto label_17f78c;
            case 0x17F790u: goto label_17f790;
            case 0x17F794u: goto label_17f794;
            case 0x17F798u: goto label_17f798;
            case 0x17F79Cu: goto label_17f79c;
            case 0x17F7A0u: goto label_17f7a0;
            case 0x17F7A4u: goto label_17f7a4;
            case 0x17F7A8u: goto label_17f7a8;
            case 0x17F7ACu: goto label_17f7ac;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F7B4u: goto label_17f7b4;
            case 0x17F7B8u: goto label_17f7b8;
            case 0x17F7BCu: goto label_17f7bc;
            case 0x17F7C0u: goto label_17f7c0;
            case 0x17F7C4u: goto label_17f7c4;
            case 0x17F7C8u: goto label_17f7c8;
            case 0x17F7CCu: goto label_17f7cc;
            case 0x17F7D0u: goto label_17f7d0;
            case 0x17F7D4u: goto label_17f7d4;
            case 0x17F7D8u: goto label_17f7d8;
            case 0x17F7DCu: goto label_17f7dc;
            case 0x17F7E0u: goto label_17f7e0;
            case 0x17F7E4u: goto label_17f7e4;
            case 0x17F7E8u: goto label_17f7e8;
            case 0x17F7ECu: goto label_17f7ec;
            case 0x17F7F0u: goto label_17f7f0;
            case 0x17F7F4u: goto label_17f7f4;
            case 0x17F7F8u: goto label_17f7f8;
            case 0x17F7FCu: goto label_17f7fc;
            case 0x17F800u: goto label_17f800;
            case 0x17F804u: goto label_17f804;
            case 0x17F808u: goto label_17f808;
            case 0x17F80Cu: goto label_17f80c;
            case 0x17F810u: goto label_17f810;
            case 0x17F814u: goto label_17f814;
            case 0x17F818u: goto label_17f818;
            case 0x17F81Cu: goto label_17f81c;
            case 0x17F820u: goto label_17f820;
            case 0x17F824u: goto label_17f824;
            case 0x17F828u: goto label_17f828;
            case 0x17F82Cu: goto label_17f82c;
            case 0x17F830u: goto label_17f830;
            case 0x17F834u: goto label_17f834;
            case 0x17F838u: goto label_17f838;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17F840u: goto label_17f840;
            case 0x17F844u: goto label_17f844;
            case 0x17F848u: goto label_17f848;
            case 0x17F84Cu: goto label_17f84c;
            case 0x17F850u: goto label_17f850;
            case 0x17F854u: goto label_17f854;
            case 0x17F858u: goto label_17f858;
            case 0x17F85Cu: goto label_17f85c;
            case 0x17F860u: goto label_17f860;
            case 0x17F864u: goto label_17f864;
            case 0x17F868u: goto label_17f868;
            case 0x17F86Cu: goto label_17f86c;
            case 0x17F870u: goto label_17f870;
            case 0x17F874u: goto label_17f874;
            case 0x17F878u: goto label_17f878;
            case 0x17F87Cu: goto label_17f87c;
            case 0x17F880u: goto label_17f880;
            case 0x17F884u: goto label_17f884;
            case 0x17F888u: goto label_17f888;
            case 0x17F88Cu: goto label_17f88c;
            case 0x17F890u: goto label_17f890;
            case 0x17F894u: goto label_17f894;
            case 0x17F898u: goto label_17f898;
            case 0x17F89Cu: goto label_17f89c;
            case 0x17F8A0u: goto label_17f8a0;
            case 0x17F8A4u: goto label_17f8a4;
            case 0x17F8A8u: goto label_17f8a8;
            case 0x17F8ACu: goto label_17f8ac;
            case 0x17F8B0u: goto label_17f8b0;
            case 0x17F8B4u: goto label_17f8b4;
            case 0x17F8B8u: goto label_17f8b8;
            case 0x17F8BCu: goto label_17f8bc;
            case 0x17F8C0u: goto label_17f8c0;
            case 0x17F8C4u: goto label_17f8c4;
            case 0x17F8C8u: goto label_17f8c8;
            case 0x17F8CCu: goto label_17f8cc;
            case 0x17F8D0u: goto label_17f8d0;
            case 0x17F8D4u: goto label_17f8d4;
            case 0x17F8D8u: goto label_17f8d8;
            case 0x17F8DCu: goto label_17f8dc;
            case 0x17F8E0u: goto label_17f8e0;
            case 0x17F8E4u: goto label_17f8e4;
            case 0x17F8E8u: goto label_17f8e8;
            case 0x17F8ECu: goto label_17f8ec;
            case 0x17F8F0u: goto label_17f8f0;
            case 0x17F8F4u: goto label_17f8f4;
            case 0x17F8F8u: goto label_17f8f8;
            case 0x17F8FCu: goto label_17f8fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F240u;
label_17f240:
    // 0x17f240: 0x856c0000
    ctx->pc = 0x17f240u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f244:
    // 0x17f244: 0x1580012a
label_17f248:
    if (ctx->pc == 0x17F248u) {
        ctx->pc = 0x17F248u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 12), 65535));
        ctx->pc = 0x17F24Cu;
        goto label_17f24c;
    }
    ctx->pc = 0x17F244u;
    {
        const bool branch_taken_0x17f244 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x17F248u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 12), 65535));
        if (branch_taken_0x17f244) {
            ctx->pc = 0x17F6F0u;
            goto label_17f6f0;
        }
    }
    ctx->pc = 0x17F24Cu;
label_17f24c:
    // 0x17f24c: 0x10000136
label_17f250:
    if (ctx->pc == 0x17F250u) {
        ctx->pc = 0x17F250u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        ctx->pc = 0x17F254u;
        goto label_17f254;
    }
    ctx->pc = 0x17F24Cu;
    {
        const bool branch_taken_0x17f24c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F250u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x17f24c) {
            ctx->pc = 0x17F728u;
            goto label_17f728;
        }
    }
    ctx->pc = 0x17F254u;
label_17f254:
    // 0x17f254: 0x856c0000
    ctx->pc = 0x17f254u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f258:
    // 0x17f258: 0x256b0002
    ctx->pc = 0x17f258u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f25c:
    // 0x17f25c: 0x856f0000
    ctx->pc = 0x17f25cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f260:
    // 0x17f260: 0x11e0fff8
label_17f264:
    if (ctx->pc == 0x17F264u) {
        ctx->pc = 0x17F264u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967294));
        ctx->pc = 0x17F268u;
        goto label_17f268;
    }
    ctx->pc = 0x17F260u;
    {
        const bool branch_taken_0x17f260 = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F264u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967294));
        if (branch_taken_0x17f260) {
            ctx->pc = 0x17F244u;
            goto label_17f244;
        }
    }
    ctx->pc = 0x17F268u;
label_17f268:
    // 0x17f268: 0x2d820001
    ctx->pc = 0x17f268u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), 1));
label_17f26c:
    // 0x17f26c: 0xa02d
    ctx->pc = 0x17f26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f270:
    // 0x17f270: 0x344a000e
    ctx->pc = 0x17f270u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 2), 14));
label_17f274:
    // 0x17f274: 0x882d
    ctx->pc = 0x17f274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f278:
    // 0x17f278: 0xc02d
    ctx->pc = 0x17f278u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f27c:
    // 0x17f27c: 0x10000086
label_17f280:
    if (ctx->pc == 0x17F280u) {
        ctx->pc = 0x17F280u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17F284u;
        goto label_17f284;
    }
    ctx->pc = 0x17F27Cu;
    {
        const bool branch_taken_0x17f27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F280u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17f27c) {
            ctx->pc = 0x17F498u;
            goto label_17f498;
        }
    }
    ctx->pc = 0x17F284u;
label_17f284:
    // 0x17f284: 0x856c0000
    ctx->pc = 0x17f284u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f288:
    // 0x17f288: 0xa02d
    ctx->pc = 0x17f288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f28c:
    // 0x17f28c: 0x256b0002
    ctx->pc = 0x17f28cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f290:
    // 0x17f290: 0x882d
    ctx->pc = 0x17f290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f294:
    // 0x17f294: 0x856f0000
    ctx->pc = 0x17f294u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f298:
    // 0x17f298: 0x2d830001
    ctx->pc = 0x17f298u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 12), 1));
label_17f29c:
    // 0x17f29c: 0x256b0002
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f2a0:
    // 0x17f2a0: 0xc02d
    ctx->pc = 0x17f2a0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f2a4:
    // 0x17f2a4: 0x856d0000
    ctx->pc = 0x17f2a4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f2a8:
    // 0x17f2a8: 0x1e0402d
    ctx->pc = 0x17f2a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_17f2ac:
    // 0x17f2ac: 0x256bfffc
    ctx->pc = 0x17f2acu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967292));
label_17f2b0:
    // 0x17f2b0: 0x2da20001
    ctx->pc = 0x17f2b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 13), 1));
label_17f2b4:
    // 0x17f2b4: 0x344a0006
    ctx->pc = 0x17f2b4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 2), 6));
label_17f2b8:
    // 0x17f2b8: 0xa5040
    ctx->pc = 0x17f2b8u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f2bc:
    // 0x17f2bc: 0x10000076
label_17f2c0:
    if (ctx->pc == 0x17F2C0u) {
        ctx->pc = 0x17F2C0u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->pc = 0x17F2C4u;
        goto label_17f2c4;
    }
    ctx->pc = 0x17F2BCu;
    {
        const bool branch_taken_0x17f2bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F2C0u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        if (branch_taken_0x17f2bc) {
            ctx->pc = 0x17F498u;
            goto label_17f498;
        }
    }
    ctx->pc = 0x17F2C4u;
label_17f2c4:
    // 0x17f2c4: 0x856c0000
    ctx->pc = 0x17f2c4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f2c8:
    // 0x17f2c8: 0xa02d
    ctx->pc = 0x17f2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f2cc:
    // 0x17f2cc: 0x256b0002
    ctx->pc = 0x17f2ccu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f2d0:
    // 0x17f2d0: 0x882d
    ctx->pc = 0x17f2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f2d4:
    // 0x17f2d4: 0x856f0000
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f2d8:
    // 0x17f2d8: 0x2d830001
    ctx->pc = 0x17f2d8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 12), 1));
label_17f2dc:
    // 0x17f2dc: 0x256b0002
    ctx->pc = 0x17f2dcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f2e0:
    // 0x17f2e0: 0x856d0000
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f2e4:
    // 0x17f2e4: 0x256b0002
    ctx->pc = 0x17f2e4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f2e8:
    // 0x17f2e8: 0x2da20001
    ctx->pc = 0x17f2e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 13), 1));
label_17f2ec:
    // 0x17f2ec: 0x85780000
    ctx->pc = 0x17f2ecu;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f2f0:
    // 0x17f2f0: 0x344a0006
    ctx->pc = 0x17f2f0u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 2), 6));
label_17f2f4:
    // 0x17f2f4: 0x256bfffa
    ctx->pc = 0x17f2f4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967290));
label_17f2f8:
    // 0x17f2f8: 0xa5040
    ctx->pc = 0x17f2f8u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f2fc:
    // 0x17f2fc: 0x1f84025
    ctx->pc = 0x17f2fcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_17f300:
    // 0x17f300: 0x10000065
label_17f304:
    if (ctx->pc == 0x17F304u) {
        ctx->pc = 0x17F304u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->pc = 0x17F308u;
        goto label_17f308;
    }
    ctx->pc = 0x17F300u;
    {
        const bool branch_taken_0x17f300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F304u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        if (branch_taken_0x17f300) {
            ctx->pc = 0x17F498u;
            goto label_17f498;
        }
    }
    ctx->pc = 0x17F308u;
label_17f308:
    // 0x17f308: 0x856c0000
    ctx->pc = 0x17f308u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f30c:
    // 0x17f30c: 0xa02d
    ctx->pc = 0x17f30cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f310:
    // 0x17f310: 0x256b0002
    ctx->pc = 0x17f310u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f314:
    // 0x17f314: 0x882d
    ctx->pc = 0x17f314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f318:
    // 0x17f318: 0x856f0000
    ctx->pc = 0x17f318u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f31c:
    // 0x17f31c: 0x2d840001
    ctx->pc = 0x17f31cu;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 12), 1));
label_17f320:
    // 0x17f320: 0x256b0002
    ctx->pc = 0x17f320u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f324:
    // 0x17f324: 0x856d0000
    ctx->pc = 0x17f324u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f328:
    // 0x17f328: 0x256b0002
    ctx->pc = 0x17f328u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f32c:
    // 0x17f32c: 0x85780000
    ctx->pc = 0x17f32cu;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f330:
    // 0x17f330: 0x2da30001
    ctx->pc = 0x17f330u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 13), 1));
label_17f334:
    // 0x17f334: 0x256b0002
    ctx->pc = 0x17f334u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f338:
    // 0x17f338: 0x85670000
    ctx->pc = 0x17f338u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f33c:
    // 0x17f33c: 0x1f84025
    ctx->pc = 0x17f33cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_17f340:
    // 0x17f340: 0x256bfff8
    ctx->pc = 0x17f340u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967288));
label_17f344:
    // 0x17f344: 0x2ce20001
    ctx->pc = 0x17f344u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 1));
label_17f348:
    // 0x17f348: 0x344a0002
    ctx->pc = 0x17f348u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 2), 2));
label_17f34c:
    // 0x17f34c: 0xa5040
    ctx->pc = 0x17f34cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f350:
    // 0x17f350: 0x1435025
    ctx->pc = 0x17f350u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_17f354:
    // 0x17f354: 0xa5040
    ctx->pc = 0x17f354u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f358:
    // 0x17f358: 0x1000004f
label_17f35c:
    if (ctx->pc == 0x17F35Cu) {
        ctx->pc = 0x17F35Cu;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->pc = 0x17F360u;
        goto label_17f360;
    }
    ctx->pc = 0x17F358u;
    {
        const bool branch_taken_0x17f358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F35Cu;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        if (branch_taken_0x17f358) {
            ctx->pc = 0x17F498u;
            goto label_17f498;
        }
    }
    ctx->pc = 0x17F360u;
label_17f360:
    // 0x17f360: 0x856c0000
    ctx->pc = 0x17f360u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f364:
    // 0x17f364: 0xa02d
    ctx->pc = 0x17f364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f368:
    // 0x17f368: 0x256b0002
    ctx->pc = 0x17f368u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f36c:
    // 0x17f36c: 0x856f0000
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f370:
    // 0x17f370: 0x2d850001
    ctx->pc = 0x17f370u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 12), 1));
label_17f374:
    // 0x17f374: 0x256b0002
    ctx->pc = 0x17f374u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f378:
    // 0x17f378: 0x856d0000
    ctx->pc = 0x17f378u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f37c:
    // 0x17f37c: 0x256b0002
    ctx->pc = 0x17f37cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f380:
    // 0x17f380: 0x85780000
    ctx->pc = 0x17f380u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f384:
    // 0x17f384: 0x2da40001
    ctx->pc = 0x17f384u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 13), 1));
label_17f388:
    // 0x17f388: 0x256b0002
    ctx->pc = 0x17f388u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f38c:
    // 0x17f38c: 0x85670000
    ctx->pc = 0x17f38cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f390:
    // 0x17f390: 0x1f81825
    ctx->pc = 0x17f390u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_17f394:
    // 0x17f394: 0x256b0002
    ctx->pc = 0x17f394u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f398:
    // 0x17f398: 0x2ce20001
    ctx->pc = 0x17f398u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 1));
label_17f39c:
    // 0x17f39c: 0x85710000
    ctx->pc = 0x17f39cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3a0:
    // 0x17f3a0: 0x344a0002
    ctx->pc = 0x17f3a0u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 2), 2));
label_17f3a4:
    // 0x17f3a4: 0x256bfff6
    ctx->pc = 0x17f3a4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967286));
label_17f3a8:
    // 0x17f3a8: 0xa5040
    ctx->pc = 0x17f3a8u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f3ac:
    // 0x17f3ac: 0x10000019
label_17f3b0:
    if (ctx->pc == 0x17F3B0u) {
        ctx->pc = 0x17F3B0u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->pc = 0x17F3B4u;
        goto label_17f3b4;
    }
    ctx->pc = 0x17F3ACu;
    {
        const bool branch_taken_0x17f3ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F3B0u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        if (branch_taken_0x17f3ac) {
            ctx->pc = 0x17F414u;
            goto label_17f414;
        }
    }
    ctx->pc = 0x17F3B4u;
label_17f3b4:
    // 0x17f3b4: 0x856c0000
    ctx->pc = 0x17f3b4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3b8:
    // 0x17f3b8: 0xa02d
    ctx->pc = 0x17f3b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f3bc:
    // 0x17f3bc: 0x256b0002
    ctx->pc = 0x17f3bcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f3c0:
    // 0x17f3c0: 0x856f0000
    ctx->pc = 0x17f3c0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3c4:
    // 0x17f3c4: 0x2d850001
    ctx->pc = 0x17f3c4u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 12), 1));
label_17f3c8:
    // 0x17f3c8: 0x256b0002
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f3cc:
    // 0x17f3cc: 0x856d0000
    ctx->pc = 0x17f3ccu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3d0:
    // 0x17f3d0: 0x256b0002
    ctx->pc = 0x17f3d0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f3d4:
    // 0x17f3d4: 0x85780000
    ctx->pc = 0x17f3d4u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3d8:
    // 0x17f3d8: 0x2da40001
    ctx->pc = 0x17f3d8u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 13), 1));
label_17f3dc:
    // 0x17f3dc: 0x256b0002
    ctx->pc = 0x17f3dcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f3e0:
    // 0x17f3e0: 0x85670000
    ctx->pc = 0x17f3e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3e4:
    // 0x17f3e4: 0x1f81025
    ctx->pc = 0x17f3e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_17f3e8:
    // 0x17f3e8: 0x256b0002
    ctx->pc = 0x17f3e8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f3ec:
    // 0x17f3ec: 0x85710000
    ctx->pc = 0x17f3ecu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3f0:
    // 0x17f3f0: 0x2ce30001
    ctx->pc = 0x17f3f0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), 1));
label_17f3f4:
    // 0x17f3f4: 0x256b0002
    ctx->pc = 0x17f3f4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f3f8:
    // 0x17f3f8: 0x856e0000
    ctx->pc = 0x17f3f8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f3fc:
    // 0x17f3fc: 0x514025
    ctx->pc = 0x17f3fcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17f400:
    // 0x17f400: 0x256bfff4
    ctx->pc = 0x17f400u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967284));
label_17f404:
    // 0x17f404: 0x2dca0001
    ctx->pc = 0x17f404u;
    SET_GPR_U32(ctx, 10, SLTU32(GPR_U32(ctx, 14), 1));
label_17f408:
    // 0x17f408: 0xa5040
    ctx->pc = 0x17f408u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f40c:
    // 0x17f40c: 0x1435025
    ctx->pc = 0x17f40cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_17f410:
    // 0x17f410: 0xa5040
    ctx->pc = 0x17f410u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f414:
    // 0x17f414: 0x1445025
    ctx->pc = 0x17f414u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_17f418:
    // 0x17f418: 0xa5040
    ctx->pc = 0x17f418u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f41c:
    // 0x17f41c: 0x1000001e
label_17f420:
    if (ctx->pc == 0x17F420u) {
        ctx->pc = 0x17F420u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->pc = 0x17F424u;
        goto label_17f424;
    }
    ctx->pc = 0x17F41Cu;
    {
        const bool branch_taken_0x17f41c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F420u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        if (branch_taken_0x17f41c) {
            ctx->pc = 0x17F498u;
            goto label_17f498;
        }
    }
    ctx->pc = 0x17F424u;
label_17f424:
    // 0x17f424: 0x856c0000
    ctx->pc = 0x17f424u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f428:
    // 0x17f428: 0x256b0002
    ctx->pc = 0x17f428u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f42c:
    // 0x17f42c: 0x856f0000
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f430:
    // 0x17f430: 0x2d860001
    ctx->pc = 0x17f430u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 12), 1));
label_17f434:
    // 0x17f434: 0x256b0002
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f438:
    // 0x17f438: 0x856d0000
    ctx->pc = 0x17f438u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f43c:
    // 0x17f43c: 0x256b0002
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f440:
    // 0x17f440: 0x85780000
    ctx->pc = 0x17f440u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f444:
    // 0x17f444: 0x2da50001
    ctx->pc = 0x17f444u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 13), 1));
label_17f448:
    // 0x17f448: 0x256b0002
    ctx->pc = 0x17f448u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f44c:
    // 0x17f44c: 0x85670000
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f450:
    // 0x17f450: 0x256b0002
    ctx->pc = 0x17f450u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f454:
    // 0x17f454: 0x85710000
    ctx->pc = 0x17f454u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f458:
    // 0x17f458: 0x2ce30001
    ctx->pc = 0x17f458u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), 1));
label_17f45c:
    // 0x17f45c: 0x256b0002
    ctx->pc = 0x17f45cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f460:
    // 0x17f460: 0x856e0000
    ctx->pc = 0x17f460u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f464:
    // 0x17f464: 0x2382025
    ctx->pc = 0x17f464u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
label_17f468:
    // 0x17f468: 0x256b0002
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_17f46c:
    // 0x17f46c: 0x2dca0001
    ctx->pc = 0x17f46cu;
    SET_GPR_U32(ctx, 10, SLTU32(GPR_U32(ctx, 14), 1));
label_17f470:
    // 0x17f470: 0x85740000
    ctx->pc = 0x17f470u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_17f474:
    // 0x17f474: 0xa5040
    ctx->pc = 0x17f474u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f478:
    // 0x17f478: 0x256bfff2
    ctx->pc = 0x17f478u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967282));
label_17f47c:
    // 0x17f47c: 0x1435025
    ctx->pc = 0x17f47cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_17f480:
    // 0x17f480: 0x1f41025
    ctx->pc = 0x17f480u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_17f484:
    // 0x17f484: 0xa5040
    ctx->pc = 0x17f484u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f488:
    // 0x17f488: 0x444025
    ctx->pc = 0x17f488u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17f48c:
    // 0x17f48c: 0x1455025
    ctx->pc = 0x17f48cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_17f490:
    // 0x17f490: 0xa5040
    ctx->pc = 0x17f490u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
label_17f494:
    // 0x17f494: 0x1465025
    ctx->pc = 0x17f494u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_17f498:
    // 0x17f498: 0x2d420010
    ctx->pc = 0x17f498u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 16));
label_17f49c:
    // 0x17f49c: 0x1040009f
label_17f4a0:
    if (ctx->pc == 0x17F4A0u) {
        ctx->pc = 0x17F4A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        ctx->pc = 0x17F4A4u;
        goto label_17f4a4;
    }
    ctx->pc = 0x17F49Cu;
    {
        const bool branch_taken_0x17f49c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F4A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x17f49c) {
            ctx->pc = 0x17F71Cu;
            goto label_17f71c;
        }
    }
    ctx->pc = 0x17F4A4u;
label_17f4a4:
    // 0x17f4a4: 0xa1880
    ctx->pc = 0x17f4a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), 2));
label_17f4a8:
    // 0x17f4a8: 0x2442c6f0
    ctx->pc = 0x17f4a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952688));
label_17f4ac:
    // 0x17f4ac: 0x621821
    ctx->pc = 0x17f4acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17f4b0:
    // 0x17f4b0: 0x8c640000
    ctx->pc = 0x17f4b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17f4b4:
    // 0x17f4b4: 0x800008
label_17f4b8:
    if (ctx->pc == 0x17F4B8u) {
        ctx->pc = 0x17F4BCu;
        goto label_17f4bc;
    }
    ctx->pc = 0x17F4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F1B0u: goto label_17f1b0;
            case 0x17F1B4u: goto label_17f1b4;
            case 0x17F1B8u: goto label_17f1b8;
            case 0x17F1BCu: goto label_17f1bc;
            case 0x17F1C0u: goto label_17f1c0;
            case 0x17F1C4u: goto label_17f1c4;
            case 0x17F1C8u: goto label_17f1c8;
            case 0x17F1CCu: goto label_17f1cc;
            case 0x17F1D0u: goto label_17f1d0;
            case 0x17F1D4u: goto label_17f1d4;
            case 0x17F1D8u: goto label_17f1d8;
            case 0x17F1DCu: goto label_17f1dc;
            case 0x17F1E0u: goto label_17f1e0;
            case 0x17F1E4u: goto label_17f1e4;
            case 0x17F1E8u: goto label_17f1e8;
            case 0x17F1ECu: goto label_17f1ec;
            case 0x17F1F0u: goto label_17f1f0;
            case 0x17F1F4u: goto label_17f1f4;
            case 0x17F1F8u: goto label_17f1f8;
            case 0x17F1FCu: goto label_17f1fc;
            case 0x17F200u: goto label_17f200;
            case 0x17F204u: goto label_17f204;
            case 0x17F208u: goto label_17f208;
            case 0x17F20Cu: goto label_17f20c;
            case 0x17F210u: goto label_17f210;
            case 0x17F214u: goto label_17f214;
            case 0x17F218u: goto label_17f218;
            case 0x17F21Cu: goto label_17f21c;
            case 0x17F220u: goto label_17f220;
            case 0x17F224u: goto label_17f224;
            case 0x17F228u: goto label_17f228;
            case 0x17F22Cu: goto label_17f22c;
            case 0x17F230u: goto label_17f230;
            case 0x17F234u: goto label_17f234;
            case 0x17F238u: goto label_17f238;
            case 0x17F23Cu: goto label_17f23c;
            case 0x17F240u: goto label_17f240;
            case 0x17F244u: goto label_17f244;
            case 0x17F248u: goto label_17f248;
            case 0x17F24Cu: goto label_17f24c;
            case 0x17F250u: goto label_17f250;
            case 0x17F254u: goto label_17f254;
            case 0x17F258u: goto label_17f258;
            case 0x17F25Cu: goto label_17f25c;
            case 0x17F260u: goto label_17f260;
            case 0x17F264u: goto label_17f264;
            case 0x17F268u: goto label_17f268;
            case 0x17F26Cu: goto label_17f26c;
            case 0x17F270u: goto label_17f270;
            case 0x17F274u: goto label_17f274;
            case 0x17F278u: goto label_17f278;
            case 0x17F27Cu: goto label_17f27c;
            case 0x17F280u: goto label_17f280;
            case 0x17F284u: goto label_17f284;
            case 0x17F288u: goto label_17f288;
            case 0x17F28Cu: goto label_17f28c;
            case 0x17F290u: goto label_17f290;
            case 0x17F294u: goto label_17f294;
            case 0x17F298u: goto label_17f298;
            case 0x17F29Cu: goto label_17f29c;
            case 0x17F2A0u: goto label_17f2a0;
            case 0x17F2A4u: goto label_17f2a4;
            case 0x17F2A8u: goto label_17f2a8;
            case 0x17F2ACu: goto label_17f2ac;
            case 0x17F2B0u: goto label_17f2b0;
            case 0x17F2B4u: goto label_17f2b4;
            case 0x17F2B8u: goto label_17f2b8;
            case 0x17F2BCu: goto label_17f2bc;
            case 0x17F2C0u: goto label_17f2c0;
            case 0x17F2C4u: goto label_17f2c4;
            case 0x17F2C8u: goto label_17f2c8;
            case 0x17F2CCu: goto label_17f2cc;
            case 0x17F2D0u: goto label_17f2d0;
            case 0x17F2D4u: goto label_17f2d4;
            case 0x17F2D8u: goto label_17f2d8;
            case 0x17F2DCu: goto label_17f2dc;
            case 0x17F2E0u: goto label_17f2e0;
            case 0x17F2E4u: goto label_17f2e4;
            case 0x17F2E8u: goto label_17f2e8;
            case 0x17F2ECu: goto label_17f2ec;
            case 0x17F2F0u: goto label_17f2f0;
            case 0x17F2F4u: goto label_17f2f4;
            case 0x17F2F8u: goto label_17f2f8;
            case 0x17F2FCu: goto label_17f2fc;
            case 0x17F300u: goto label_17f300;
            case 0x17F304u: goto label_17f304;
            case 0x17F308u: goto label_17f308;
            case 0x17F30Cu: goto label_17f30c;
            case 0x17F310u: goto label_17f310;
            case 0x17F314u: goto label_17f314;
            case 0x17F318u: goto label_17f318;
            case 0x17F31Cu: goto label_17f31c;
            case 0x17F320u: goto label_17f320;
            case 0x17F324u: goto label_17f324;
            case 0x17F328u: goto label_17f328;
            case 0x17F32Cu: goto label_17f32c;
            case 0x17F330u: goto label_17f330;
            case 0x17F334u: goto label_17f334;
            case 0x17F338u: goto label_17f338;
            case 0x17F33Cu: goto label_17f33c;
            case 0x17F340u: goto label_17f340;
            case 0x17F344u: goto label_17f344;
            case 0x17F348u: goto label_17f348;
            case 0x17F34Cu: goto label_17f34c;
            case 0x17F350u: goto label_17f350;
            case 0x17F354u: goto label_17f354;
            case 0x17F358u: goto label_17f358;
            case 0x17F35Cu: goto label_17f35c;
            case 0x17F360u: goto label_17f360;
            case 0x17F364u: goto label_17f364;
            case 0x17F368u: goto label_17f368;
            case 0x17F36Cu: goto label_17f36c;
            case 0x17F370u: goto label_17f370;
            case 0x17F374u: goto label_17f374;
            case 0x17F378u: goto label_17f378;
            case 0x17F37Cu: goto label_17f37c;
            case 0x17F380u: goto label_17f380;
            case 0x17F384u: goto label_17f384;
            case 0x17F388u: goto label_17f388;
            case 0x17F38Cu: goto label_17f38c;
            case 0x17F390u: goto label_17f390;
            case 0x17F394u: goto label_17f394;
            case 0x17F398u: goto label_17f398;
            case 0x17F39Cu: goto label_17f39c;
            case 0x17F3A0u: goto label_17f3a0;
            case 0x17F3A4u: goto label_17f3a4;
            case 0x17F3A8u: goto label_17f3a8;
            case 0x17F3ACu: goto label_17f3ac;
            case 0x17F3B0u: goto label_17f3b0;
            case 0x17F3B4u: goto label_17f3b4;
            case 0x17F3B8u: goto label_17f3b8;
            case 0x17F3BCu: goto label_17f3bc;
            case 0x17F3C0u: goto label_17f3c0;
            case 0x17F3C4u: goto label_17f3c4;
            case 0x17F3C8u: goto label_17f3c8;
            case 0x17F3CCu: goto label_17f3cc;
            case 0x17F3D0u: goto label_17f3d0;
            case 0x17F3D4u: goto label_17f3d4;
            case 0x17F3D8u: goto label_17f3d8;
            case 0x17F3DCu: goto label_17f3dc;
            case 0x17F3E0u: goto label_17f3e0;
            case 0x17F3E4u: goto label_17f3e4;
            case 0x17F3E8u: goto label_17f3e8;
            case 0x17F3ECu: goto label_17f3ec;
            case 0x17F3F0u: goto label_17f3f0;
            case 0x17F3F4u: goto label_17f3f4;
            case 0x17F3F8u: goto label_17f3f8;
            case 0x17F3FCu: goto label_17f3fc;
            case 0x17F400u: goto label_17f400;
            case 0x17F404u: goto label_17f404;
            case 0x17F408u: goto label_17f408;
            case 0x17F40Cu: goto label_17f40c;
            case 0x17F410u: goto label_17f410;
            case 0x17F414u: goto label_17f414;
            case 0x17F418u: goto label_17f418;
            case 0x17F41Cu: goto label_17f41c;
            case 0x17F420u: goto label_17f420;
            case 0x17F424u: goto label_17f424;
            case 0x17F428u: goto label_17f428;
            case 0x17F42Cu: goto label_17f42c;
            case 0x17F430u: goto label_17f430;
            case 0x17F434u: goto label_17f434;
            case 0x17F438u: goto label_17f438;
            case 0x17F43Cu: goto label_17f43c;
            case 0x17F440u: goto label_17f440;
            case 0x17F444u: goto label_17f444;
            case 0x17F448u: goto label_17f448;
            case 0x17F44Cu: goto label_17f44c;
            case 0x17F450u: goto label_17f450;
            case 0x17F454u: goto label_17f454;
            case 0x17F458u: goto label_17f458;
            case 0x17F45Cu: goto label_17f45c;
            case 0x17F460u: goto label_17f460;
            case 0x17F464u: goto label_17f464;
            case 0x17F468u: goto label_17f468;
            case 0x17F46Cu: goto label_17f46c;
            case 0x17F470u: goto label_17f470;
            case 0x17F474u: goto label_17f474;
            case 0x17F478u: goto label_17f478;
            case 0x17F47Cu: goto label_17f47c;
            case 0x17F480u: goto label_17f480;
            case 0x17F484u: goto label_17f484;
            case 0x17F488u: goto label_17f488;
            case 0x17F48Cu: goto label_17f48c;
            case 0x17F490u: goto label_17f490;
            case 0x17F494u: goto label_17f494;
            case 0x17F498u: goto label_17f498;
            case 0x17F49Cu: goto label_17f49c;
            case 0x17F4A0u: goto label_17f4a0;
            case 0x17F4A4u: goto label_17f4a4;
            case 0x17F4A8u: goto label_17f4a8;
            case 0x17F4ACu: goto label_17f4ac;
            case 0x17F4B0u: goto label_17f4b0;
            case 0x17F4B4u: goto label_17f4b4;
            case 0x17F4B8u: goto label_17f4b8;
            case 0x17F4BCu: goto label_17f4bc;
            case 0x17F4C0u: goto label_17f4c0;
            case 0x17F4C4u: goto label_17f4c4;
            case 0x17F4C8u: goto label_17f4c8;
            case 0x17F4CCu: goto label_17f4cc;
            case 0x17F4D0u: goto label_17f4d0;
            case 0x17F4D4u: goto label_17f4d4;
            case 0x17F4D8u: goto label_17f4d8;
            case 0x17F4DCu: goto label_17f4dc;
            case 0x17F4E0u: goto label_17f4e0;
            case 0x17F4E4u: goto label_17f4e4;
            case 0x17F4E8u: goto label_17f4e8;
            case 0x17F4ECu: goto label_17f4ec;
            case 0x17F4F0u: goto label_17f4f0;
            case 0x17F4F4u: goto label_17f4f4;
            case 0x17F4F8u: goto label_17f4f8;
            case 0x17F4FCu: goto label_17f4fc;
            case 0x17F500u: goto label_17f500;
            case 0x17F504u: goto label_17f504;
            case 0x17F508u: goto label_17f508;
            case 0x17F50Cu: goto label_17f50c;
            case 0x17F510u: goto label_17f510;
            case 0x17F514u: goto label_17f514;
            case 0x17F518u: goto label_17f518;
            case 0x17F51Cu: goto label_17f51c;
            case 0x17F520u: goto label_17f520;
            case 0x17F524u: goto label_17f524;
            case 0x17F528u: goto label_17f528;
            case 0x17F52Cu: goto label_17f52c;
            case 0x17F530u: goto label_17f530;
            case 0x17F534u: goto label_17f534;
            case 0x17F538u: goto label_17f538;
            case 0x17F53Cu: goto label_17f53c;
            case 0x17F540u: goto label_17f540;
            case 0x17F544u: goto label_17f544;
            case 0x17F548u: goto label_17f548;
            case 0x17F54Cu: goto label_17f54c;
            case 0x17F550u: goto label_17f550;
            case 0x17F554u: goto label_17f554;
            case 0x17F558u: goto label_17f558;
            case 0x17F55Cu: goto label_17f55c;
            case 0x17F560u: goto label_17f560;
            case 0x17F564u: goto label_17f564;
            case 0x17F568u: goto label_17f568;
            case 0x17F56Cu: goto label_17f56c;
            case 0x17F570u: goto label_17f570;
            case 0x17F574u: goto label_17f574;
            case 0x17F578u: goto label_17f578;
            case 0x17F57Cu: goto label_17f57c;
            case 0x17F580u: goto label_17f580;
            case 0x17F584u: goto label_17f584;
            case 0x17F588u: goto label_17f588;
            case 0x17F58Cu: goto label_17f58c;
            case 0x17F590u: goto label_17f590;
            case 0x17F594u: goto label_17f594;
            case 0x17F598u: goto label_17f598;
            case 0x17F59Cu: goto label_17f59c;
            case 0x17F5A0u: goto label_17f5a0;
            case 0x17F5A4u: goto label_17f5a4;
            case 0x17F5A8u: goto label_17f5a8;
            case 0x17F5ACu: goto label_17f5ac;
            case 0x17F5B0u: goto label_17f5b0;
            case 0x17F5B4u: goto label_17f5b4;
            case 0x17F5B8u: goto label_17f5b8;
            case 0x17F5BCu: goto label_17f5bc;
            case 0x17F5C0u: goto label_17f5c0;
            case 0x17F5C4u: goto label_17f5c4;
            case 0x17F5C8u: goto label_17f5c8;
            case 0x17F5CCu: goto label_17f5cc;
            case 0x17F5D0u: goto label_17f5d0;
            case 0x17F5D4u: goto label_17f5d4;
            case 0x17F5D8u: goto label_17f5d8;
            case 0x17F5DCu: goto label_17f5dc;
            case 0x17F5E0u: goto label_17f5e0;
            case 0x17F5E4u: goto label_17f5e4;
            case 0x17F5E8u: goto label_17f5e8;
            case 0x17F5ECu: goto label_17f5ec;
            case 0x17F5F0u: goto label_17f5f0;
            case 0x17F5F4u: goto label_17f5f4;
            case 0x17F5F8u: goto label_17f5f8;
            case 0x17F5FCu: goto label_17f5fc;
            case 0x17F600u: goto label_17f600;
            case 0x17F604u: goto label_17f604;
            case 0x17F608u: goto label_17f608;
            case 0x17F60Cu: goto label_17f60c;
            case 0x17F610u: goto label_17f610;
            case 0x17F614u: goto label_17f614;
            case 0x17F618u: goto label_17f618;
            case 0x17F61Cu: goto label_17f61c;
            case 0x17F620u: goto label_17f620;
            case 0x17F624u: goto label_17f624;
            case 0x17F628u: goto label_17f628;
            case 0x17F62Cu: goto label_17f62c;
            case 0x17F630u: goto label_17f630;
            case 0x17F634u: goto label_17f634;
            case 0x17F638u: goto label_17f638;
            case 0x17F63Cu: goto label_17f63c;
            case 0x17F640u: goto label_17f640;
            case 0x17F644u: goto label_17f644;
            case 0x17F648u: goto label_17f648;
            case 0x17F64Cu: goto label_17f64c;
            case 0x17F650u: goto label_17f650;
            case 0x17F654u: goto label_17f654;
            case 0x17F658u: goto label_17f658;
            case 0x17F65Cu: goto label_17f65c;
            case 0x17F660u: goto label_17f660;
            case 0x17F664u: goto label_17f664;
            case 0x17F668u: goto label_17f668;
            case 0x17F66Cu: goto label_17f66c;
            case 0x17F670u: goto label_17f670;
            case 0x17F674u: goto label_17f674;
            case 0x17F678u: goto label_17f678;
            case 0x17F67Cu: goto label_17f67c;
            case 0x17F680u: goto label_17f680;
            case 0x17F684u: goto label_17f684;
            case 0x17F688u: goto label_17f688;
            case 0x17F68Cu: goto label_17f68c;
            case 0x17F690u: goto label_17f690;
            case 0x17F694u: goto label_17f694;
            case 0x17F698u: goto label_17f698;
            case 0x17F69Cu: goto label_17f69c;
            case 0x17F6A0u: goto label_17f6a0;
            case 0x17F6A4u: goto label_17f6a4;
            case 0x17F6A8u: goto label_17f6a8;
            case 0x17F6ACu: goto label_17f6ac;
            case 0x17F6B0u: goto label_17f6b0;
            case 0x17F6B4u: goto label_17f6b4;
            case 0x17F6B8u: goto label_17f6b8;
            case 0x17F6BCu: goto label_17f6bc;
            case 0x17F6C0u: goto label_17f6c0;
            case 0x17F6C4u: goto label_17f6c4;
            case 0x17F6C8u: goto label_17f6c8;
            case 0x17F6CCu: goto label_17f6cc;
            case 0x17F6D0u: goto label_17f6d0;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6D8u: goto label_17f6d8;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F6E0u: goto label_17f6e0;
            case 0x17F6E4u: goto label_17f6e4;
            case 0x17F6E8u: goto label_17f6e8;
            case 0x17F6ECu: goto label_17f6ec;
            case 0x17F6F0u: goto label_17f6f0;
            case 0x17F6F4u: goto label_17f6f4;
            case 0x17F6F8u: goto label_17f6f8;
            case 0x17F6FCu: goto label_17f6fc;
            case 0x17F700u: goto label_17f700;
            case 0x17F704u: goto label_17f704;
            case 0x17F708u: goto label_17f708;
            case 0x17F70Cu: goto label_17f70c;
            case 0x17F710u: goto label_17f710;
            case 0x17F714u: goto label_17f714;
            case 0x17F718u: goto label_17f718;
            case 0x17F71Cu: goto label_17f71c;
            case 0x17F720u: goto label_17f720;
            case 0x17F724u: goto label_17f724;
            case 0x17F728u: goto label_17f728;
            case 0x17F72Cu: goto label_17f72c;
            case 0x17F730u: goto label_17f730;
            case 0x17F734u: goto label_17f734;
            case 0x17F738u: goto label_17f738;
            case 0x17F73Cu: goto label_17f73c;
            case 0x17F740u: goto label_17f740;
            case 0x17F744u: goto label_17f744;
            case 0x17F748u: goto label_17f748;
            case 0x17F74Cu: goto label_17f74c;
            case 0x17F750u: goto label_17f750;
            case 0x17F754u: goto label_17f754;
            case 0x17F758u: goto label_17f758;
            case 0x17F75Cu: goto label_17f75c;
            case 0x17F760u: goto label_17f760;
            case 0x17F764u: goto label_17f764;
            case 0x17F768u: goto label_17f768;
            case 0x17F76Cu: goto label_17f76c;
            case 0x17F770u: goto label_17f770;
            case 0x17F774u: goto label_17f774;
            case 0x17F778u: goto label_17f778;
            case 0x17F77Cu: goto label_17f77c;
            case 0x17F780u: goto label_17f780;
            case 0x17F784u: goto label_17f784;
            case 0x17F788u: goto label_17f788;
            case 0x17F78Cu: goto label_17f78c;
            case 0x17F790u: goto label_17f790;
            case 0x17F794u: goto label_17f794;
            case 0x17F798u: goto label_17f798;
            case 0x17F79Cu: goto label_17f79c;
            case 0x17F7A0u: goto label_17f7a0;
            case 0x17F7A4u: goto label_17f7a4;
            case 0x17F7A8u: goto label_17f7a8;
            case 0x17F7ACu: goto label_17f7ac;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F7B4u: goto label_17f7b4;
            case 0x17F7B8u: goto label_17f7b8;
            case 0x17F7BCu: goto label_17f7bc;
            case 0x17F7C0u: goto label_17f7c0;
            case 0x17F7C4u: goto label_17f7c4;
            case 0x17F7C8u: goto label_17f7c8;
            case 0x17F7CCu: goto label_17f7cc;
            case 0x17F7D0u: goto label_17f7d0;
            case 0x17F7D4u: goto label_17f7d4;
            case 0x17F7D8u: goto label_17f7d8;
            case 0x17F7DCu: goto label_17f7dc;
            case 0x17F7E0u: goto label_17f7e0;
            case 0x17F7E4u: goto label_17f7e4;
            case 0x17F7E8u: goto label_17f7e8;
            case 0x17F7ECu: goto label_17f7ec;
            case 0x17F7F0u: goto label_17f7f0;
            case 0x17F7F4u: goto label_17f7f4;
            case 0x17F7F8u: goto label_17f7f8;
            case 0x17F7FCu: goto label_17f7fc;
            case 0x17F800u: goto label_17f800;
            case 0x17F804u: goto label_17f804;
            case 0x17F808u: goto label_17f808;
            case 0x17F80Cu: goto label_17f80c;
            case 0x17F810u: goto label_17f810;
            case 0x17F814u: goto label_17f814;
            case 0x17F818u: goto label_17f818;
            case 0x17F81Cu: goto label_17f81c;
            case 0x17F820u: goto label_17f820;
            case 0x17F824u: goto label_17f824;
            case 0x17F828u: goto label_17f828;
            case 0x17F82Cu: goto label_17f82c;
            case 0x17F830u: goto label_17f830;
            case 0x17F834u: goto label_17f834;
            case 0x17F838u: goto label_17f838;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17F840u: goto label_17f840;
            case 0x17F844u: goto label_17f844;
            case 0x17F848u: goto label_17f848;
            case 0x17F84Cu: goto label_17f84c;
            case 0x17F850u: goto label_17f850;
            case 0x17F854u: goto label_17f854;
            case 0x17F858u: goto label_17f858;
            case 0x17F85Cu: goto label_17f85c;
            case 0x17F860u: goto label_17f860;
            case 0x17F864u: goto label_17f864;
            case 0x17F868u: goto label_17f868;
            case 0x17F86Cu: goto label_17f86c;
            case 0x17F870u: goto label_17f870;
            case 0x17F874u: goto label_17f874;
            case 0x17F878u: goto label_17f878;
            case 0x17F87Cu: goto label_17f87c;
            case 0x17F880u: goto label_17f880;
            case 0x17F884u: goto label_17f884;
            case 0x17F888u: goto label_17f888;
            case 0x17F88Cu: goto label_17f88c;
            case 0x17F890u: goto label_17f890;
            case 0x17F894u: goto label_17f894;
            case 0x17F898u: goto label_17f898;
            case 0x17F89Cu: goto label_17f89c;
            case 0x17F8A0u: goto label_17f8a0;
            case 0x17F8A4u: goto label_17f8a4;
            case 0x17F8A8u: goto label_17f8a8;
            case 0x17F8ACu: goto label_17f8ac;
            case 0x17F8B0u: goto label_17f8b0;
            case 0x17F8B4u: goto label_17f8b4;
            case 0x17F8B8u: goto label_17f8b8;
            case 0x17F8BCu: goto label_17f8bc;
            case 0x17F8C0u: goto label_17f8c0;
            case 0x17F8C4u: goto label_17f8c4;
            case 0x17F8C8u: goto label_17f8c8;
            case 0x17F8CCu: goto label_17f8cc;
            case 0x17F8D0u: goto label_17f8d0;
            case 0x17F8D4u: goto label_17f8d4;
            case 0x17F8D8u: goto label_17f8d8;
            case 0x17F8DCu: goto label_17f8dc;
            case 0x17F8E0u: goto label_17f8e0;
            case 0x17F8E4u: goto label_17f8e4;
            case 0x17F8E8u: goto label_17f8e8;
            case 0x17F8ECu: goto label_17f8ec;
            case 0x17F8F0u: goto label_17f8f0;
            case 0x17F8F4u: goto label_17f8f4;
            case 0x17F8F8u: goto label_17f8f8;
            case 0x17F8FCu: goto label_17f8fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F4BCu;
label_17f4bc:
    // 0x17f4bc: 0x1cd5023
    ctx->pc = 0x17f4bcu;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f4c0:
    // 0x17f4c0: 0x3c020001
    ctx->pc = 0x17f4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f4c4:
    // 0x17f4c4: 0x1cd7021
    ctx->pc = 0x17f4c4u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f4c8:
    // 0x17f4c8: 0x34426a0a
    ctx->pc = 0x17f4c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f4cc:
    // 0x17f4cc: 0x1426818
    ctx->pc = 0x17f4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f4d0:
    // 0x17f4d0: 0xc6400
    ctx->pc = 0x17f4d0u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
label_17f4d4:
    // 0x17f4d4: 0x73c00
    ctx->pc = 0x17f4d4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_17f4d8:
    // 0x17f4d8: 0xe7400
    ctx->pc = 0x17f4d8u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
label_17f4dc:
    // 0x17f4dc: 0x1875021
    ctx->pc = 0x17f4dcu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_17f4e0:
    // 0x17f4e0: 0xec3823
    ctx->pc = 0x17f4e0u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_17f4e4:
    // 0x17f4e4: 0x1ae6821
    ctx->pc = 0x17f4e4u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_17f4e8:
    // 0x17f4e8: 0x14e6021
    ctx->pc = 0x17f4e8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_17f4ec:
    // 0x17f4ec: 0xed1021
    ctx->pc = 0x17f4ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_17f4f0:
    // 0x17f4f0: 0x10000056
label_17f4f4:
    if (ctx->pc == 0x17F4F4u) {
        ctx->pc = 0x17F4F4u;
        SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->pc = 0x17F4F8u;
        goto label_17f4f8;
    }
    ctx->pc = 0x17F4F0u;
    {
        const bool branch_taken_0x17f4f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F4F4u;
        SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        if (branch_taken_0x17f4f0) {
            ctx->pc = 0x17F64Cu;
            goto label_17f64c;
        }
    }
    ctx->pc = 0x17F4F8u;
label_17f4f8:
    // 0x17f4f8: 0x1cd5023
    ctx->pc = 0x17f4f8u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f4fc:
    // 0x17f4fc: 0x3c020001
    ctx->pc = 0x17f4fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f500:
    // 0x17f500: 0x1cd7021
    ctx->pc = 0x17f500u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f504:
    // 0x17f504: 0x34426a0a
    ctx->pc = 0x17f504u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f508:
    // 0x17f508: 0x1426818
    ctx->pc = 0x17f508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f50c:
    // 0x17f50c: 0x1000004a
label_17f510:
    if (ctx->pc == 0x17F510u) {
        ctx->pc = 0x17F510u;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
        ctx->pc = 0x17F514u;
        goto label_17f514;
    }
    ctx->pc = 0x17F50Cu;
    {
        const bool branch_taken_0x17f50c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F510u;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
        if (branch_taken_0x17f50c) {
            ctx->pc = 0x17F638u;
            goto label_17f638;
        }
    }
    ctx->pc = 0x17F514u;
label_17f514:
    // 0x17f514: 0x3c020001
    ctx->pc = 0x17f514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f518:
    // 0x17f518: 0xc6400
    ctx->pc = 0x17f518u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
label_17f51c:
    // 0x17f51c: 0x34426a0a
    ctx->pc = 0x17f51cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f520:
    // 0x17f520: 0x73c00
    ctx->pc = 0x17f520u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_17f524:
    // 0x17f524: 0x1c26818
    ctx->pc = 0x17f524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f528:
    // 0x17f528: 0x1875021
    ctx->pc = 0x17f528u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_17f52c:
    // 0x17f52c: 0xec3823
    ctx->pc = 0x17f52cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_17f530:
    // 0x17f530: 0xe7400
    ctx->pc = 0x17f530u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
label_17f534:
    // 0x17f534: 0x14e6021
    ctx->pc = 0x17f534u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_17f538:
    // 0x17f538: 0x1ae6821
    ctx->pc = 0x17f538u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_17f53c:
    // 0x17f53c: 0xed1021
    ctx->pc = 0x17f53cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_17f540:
    // 0x17f540: 0x10000042
label_17f544:
    if (ctx->pc == 0x17F544u) {
        ctx->pc = 0x17F544u;
        SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->pc = 0x17F548u;
        goto label_17f548;
    }
    ctx->pc = 0x17F540u;
    {
        const bool branch_taken_0x17f540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F544u;
        SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        if (branch_taken_0x17f540) {
            ctx->pc = 0x17F64Cu;
            goto label_17f64c;
        }
    }
    ctx->pc = 0x17F548u;
label_17f548:
    // 0x17f548: 0x3c020001
    ctx->pc = 0x17f548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f54c:
    // 0x17f54c: 0x73c00
    ctx->pc = 0x17f54cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_17f550:
    // 0x17f550: 0x34426a0a
    ctx->pc = 0x17f550u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f554:
    // 0x17f554: 0x1c26818
    ctx->pc = 0x17f554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f558:
    // 0x17f558: 0x10000038
label_17f55c:
    if (ctx->pc == 0x17F55Cu) {
        ctx->pc = 0x17F55Cu;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
        ctx->pc = 0x17F560u;
        goto label_17f560;
    }
    ctx->pc = 0x17F558u;
    {
        const bool branch_taken_0x17f558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F55Cu;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
        if (branch_taken_0x17f558) {
            ctx->pc = 0x17F63Cu;
            goto label_17f63c;
        }
    }
    ctx->pc = 0x17F560u;
label_17f560:
    // 0x17f560: 0x1cd5023
    ctx->pc = 0x17f560u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f564:
    // 0x17f564: 0x3c020001
    ctx->pc = 0x17f564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f568:
    // 0x17f568: 0x1cd7021
    ctx->pc = 0x17f568u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f56c:
    // 0x17f56c: 0x34426a0a
    ctx->pc = 0x17f56cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f570:
    // 0x17f570: 0x1426818
    ctx->pc = 0x17f570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f574:
    // 0x17f574: 0x1000004a
label_17f578:
    if (ctx->pc == 0x17F578u) {
        ctx->pc = 0x17F578u;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
        ctx->pc = 0x17F57Cu;
        goto label_17f57c;
    }
    ctx->pc = 0x17F574u;
    {
        const bool branch_taken_0x17f574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F578u;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
        if (branch_taken_0x17f574) {
            ctx->pc = 0x17F6A0u;
            goto label_17f6a0;
        }
    }
    ctx->pc = 0x17F57Cu;
label_17f57c:
    // 0x17f57c: 0x1cd5023
    ctx->pc = 0x17f57cu;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f580:
    // 0x17f580: 0x3c020001
    ctx->pc = 0x17f580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f584:
    // 0x17f584: 0x1cd7021
    ctx->pc = 0x17f584u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_17f588:
    // 0x17f588: 0x34426a0a
    ctx->pc = 0x17f588u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f58c:
    // 0x17f58c: 0x1426818
    ctx->pc = 0x17f58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f590:
    // 0x17f590: 0xe7400
    ctx->pc = 0x17f590u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
label_17f594:
    // 0x17f594: 0x1c0602d
    ctx->pc = 0x17f594u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_17f598:
    // 0x17f598: 0x1ae6821
    ctx->pc = 0x17f598u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_17f59c:
    // 0x17f59c: 0xc7023
    ctx->pc = 0x17f59cu;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_17f5a0:
    // 0x17f5a0: 0x1000006b
label_17f5a4:
    if (ctx->pc == 0x17F5A4u) {
        ctx->pc = 0x17F5A4u;
        SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
        ctx->pc = 0x17F5A8u;
        goto label_17f5a8;
    }
    ctx->pc = 0x17F5A0u;
    {
        const bool branch_taken_0x17f5a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F5A4u;
        SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
        if (branch_taken_0x17f5a0) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F5A8u;
label_17f5a8:
    // 0x17f5a8: 0x3c020001
    ctx->pc = 0x17f5a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f5ac:
    // 0x17f5ac: 0xc6400
    ctx->pc = 0x17f5acu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
label_17f5b0:
    // 0x17f5b0: 0x34426a0a
    ctx->pc = 0x17f5b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f5b4:
    // 0x17f5b4: 0x180182d
    ctx->pc = 0x17f5b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_17f5b8:
    // 0x17f5b8: 0x1c26818
    ctx->pc = 0x17f5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f5bc:
    // 0x17f5bc: 0xe7400
    ctx->pc = 0x17f5bcu;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
label_17f5c0:
    // 0x17f5c0: 0x18e6021
    ctx->pc = 0x17f5c0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_17f5c4:
    // 0x17f5c4: 0x1ae6821
    ctx->pc = 0x17f5c4u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_17f5c8:
    // 0x17f5c8: 0x6d5023
    ctx->pc = 0x17f5c8u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_17f5cc:
    // 0x17f5cc: 0x6e7023
    ctx->pc = 0x17f5ccu;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_17f5d0:
    // 0x17f5d0: 0x1000005f
label_17f5d4:
    if (ctx->pc == 0x17F5D4u) {
        ctx->pc = 0x17F5D4u;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        ctx->pc = 0x17F5D8u;
        goto label_17f5d8;
    }
    ctx->pc = 0x17F5D0u;
    {
        const bool branch_taken_0x17f5d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F5D4u;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        if (branch_taken_0x17f5d0) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F5D8u;
label_17f5d8:
    // 0x17f5d8: 0x3c020001
    ctx->pc = 0x17f5d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f5dc:
    // 0x17f5dc: 0xe6400
    ctx->pc = 0x17f5dcu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 14), 16));
label_17f5e0:
    // 0x17f5e0: 0x34426a0a
    ctx->pc = 0x17f5e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f5e4:
    // 0x17f5e4: 0x1000003b
label_17f5e8:
    if (ctx->pc == 0x17F5E8u) {
        ctx->pc = 0x17F5E8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
        ctx->pc = 0x17F5ECu;
        goto label_17f5ec;
    }
    ctx->pc = 0x17F5E4u;
    {
        const bool branch_taken_0x17f5e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F5E8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
        if (branch_taken_0x17f5e4) {
            ctx->pc = 0x17F6D4u;
            goto label_17f6d4;
        }
    }
    ctx->pc = 0x17F5ECu;
label_17f5ec:
    // 0x17f5ec: 0x3c02fffe
    ctx->pc = 0x17f5ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
label_17f5f0:
    // 0x17f5f0: 0x1a0702d
    ctx->pc = 0x17f5f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_17f5f4:
    // 0x17f5f4: 0x344295f6
    ctx->pc = 0x17f5f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38390));
label_17f5f8:
    // 0x17f5f8: 0xc6400
    ctx->pc = 0x17f5f8u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
label_17f5fc:
    // 0x17f5fc: 0x1a26818
    ctx->pc = 0x17f5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f600:
    // 0x17f600: 0x73c00
    ctx->pc = 0x17f600u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_17f604:
    // 0x17f604: 0x1875021
    ctx->pc = 0x17f604u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_17f608:
    // 0x17f608: 0xe7400
    ctx->pc = 0x17f608u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
label_17f60c:
    // 0x17f60c: 0xec3823
    ctx->pc = 0x17f60cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_17f610:
    // 0x17f610: 0x14e6021
    ctx->pc = 0x17f610u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_17f614:
    // 0x17f614: 0x1ae6821
    ctx->pc = 0x17f614u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_17f618:
    // 0x17f618: 0xed1021
    ctx->pc = 0x17f618u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_17f61c:
    // 0x17f61c: 0x1000000b
label_17f620:
    if (ctx->pc == 0x17F620u) {
        ctx->pc = 0x17F620u;
        SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->pc = 0x17F624u;
        goto label_17f624;
    }
    ctx->pc = 0x17F61Cu;
    {
        const bool branch_taken_0x17f61c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F620u;
        SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        if (branch_taken_0x17f61c) {
            ctx->pc = 0x17F64Cu;
            goto label_17f64c;
        }
    }
    ctx->pc = 0x17F624u;
label_17f624:
    // 0x17f624: 0x3c02fffe
    ctx->pc = 0x17f624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
label_17f628:
    // 0x17f628: 0x1a0702d
    ctx->pc = 0x17f628u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_17f62c:
    // 0x17f62c: 0x344295f6
    ctx->pc = 0x17f62cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38390));
label_17f630:
    // 0x17f630: 0xe7400
    ctx->pc = 0x17f630u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
label_17f634:
    // 0x17f634: 0x1a26818
    ctx->pc = 0x17f634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f638:
    // 0x17f638: 0x73c00
    ctx->pc = 0x17f638u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_17f63c:
    // 0x17f63c: 0xee6021
    ctx->pc = 0x17f63cu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_17f640:
    // 0x17f640: 0x1ae6821
    ctx->pc = 0x17f640u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_17f644:
    // 0x17f644: 0xed1021
    ctx->pc = 0x17f644u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_17f648:
    // 0x17f648: 0xee7023
    ctx->pc = 0x17f648u;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_17f64c:
    // 0x17f64c: 0x25023
    ctx->pc = 0x17f64cu;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_17f650:
    // 0x17f650: 0x1000003f
label_17f654:
    if (ctx->pc == 0x17F654u) {
        ctx->pc = 0x17F654u;
        SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->pc = 0x17F658u;
        goto label_17f658;
    }
    ctx->pc = 0x17F650u;
    {
        const bool branch_taken_0x17f650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F654u;
        SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        if (branch_taken_0x17f650) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F658u;
label_17f658:
    // 0x17f658: 0xc6400
    ctx->pc = 0x17f658u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
label_17f65c:
    // 0x17f65c: 0x73c00
    ctx->pc = 0x17f65cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_17f660:
    // 0x17f660: 0x1877021
    ctx->pc = 0x17f660u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_17f664:
    // 0x17f664: 0xec3823
    ctx->pc = 0x17f664u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_17f668:
    // 0x17f668: 0x75023
    ctx->pc = 0x17f668u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_17f66c:
    // 0x17f66c: 0x1c0602d
    ctx->pc = 0x17f66cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_17f670:
    // 0x17f670: 0x10000037
label_17f674:
    if (ctx->pc == 0x17F674u) {
        ctx->pc = 0x17F674u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17F678u;
        goto label_17f678;
    }
    ctx->pc = 0x17F670u;
    {
        const bool branch_taken_0x17f670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F674u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17f670) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F678u;
label_17f678:
    // 0x17f678: 0x76400
    ctx->pc = 0x17f678u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 7), 16));
label_17f67c:
    // 0x17f67c: 0xc5023
    ctx->pc = 0x17f67cu;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_17f680:
    // 0x17f680: 0x180702d
    ctx->pc = 0x17f680u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_17f684:
    // 0x17f684: 0x10000032
label_17f688:
    if (ctx->pc == 0x17F688u) {
        ctx->pc = 0x17F688u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17F68Cu;
        goto label_17f68c;
    }
    ctx->pc = 0x17F684u;
    {
        const bool branch_taken_0x17f684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F688u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17f684) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F68Cu;
label_17f68c:
    // 0x17f68c: 0x3c02fffe
    ctx->pc = 0x17f68cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
label_17f690:
    // 0x17f690: 0x1a0702d
    ctx->pc = 0x17f690u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_17f694:
    // 0x17f694: 0x344295f6
    ctx->pc = 0x17f694u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38390));
label_17f698:
    // 0x17f698: 0xe7400
    ctx->pc = 0x17f698u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 16));
label_17f69c:
    // 0x17f69c: 0x1a26818
    ctx->pc = 0x17f69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f6a0:
    // 0x17f6a0: 0xc6400
    ctx->pc = 0x17f6a0u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
label_17f6a4:
    // 0x17f6a4: 0x180102d
    ctx->pc = 0x17f6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_17f6a8:
    // 0x17f6a8: 0x18e6021
    ctx->pc = 0x17f6a8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_17f6ac:
    // 0x17f6ac: 0x1ae6821
    ctx->pc = 0x17f6acu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_17f6b0:
    // 0x17f6b0: 0x4d5023
    ctx->pc = 0x17f6b0u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_17f6b4:
    // 0x17f6b4: 0x4e7023
    ctx->pc = 0x17f6b4u;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_17f6b8:
    // 0x17f6b8: 0x10000025
label_17f6bc:
    if (ctx->pc == 0x17F6BCu) {
        ctx->pc = 0x17F6BCu;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        ctx->pc = 0x17F6C0u;
        goto label_17f6c0;
    }
    ctx->pc = 0x17F6B8u;
    {
        const bool branch_taken_0x17f6b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F6BCu;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        if (branch_taken_0x17f6b8) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F6C0u;
label_17f6c0:
    // 0x17f6c0: 0x3c02fffe
    ctx->pc = 0x17f6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
label_17f6c4:
    // 0x17f6c4: 0x1a0702d
    ctx->pc = 0x17f6c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_17f6c8:
    // 0x17f6c8: 0x344295f6
    ctx->pc = 0x17f6c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38390));
label_17f6cc:
    // 0x17f6cc: 0xe6400
    ctx->pc = 0x17f6ccu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 14), 16));
label_17f6d0:
    // 0x17f6d0: 0x1a26818
    ctx->pc = 0x17f6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
label_17f6d4:
    // 0x17f6d4: 0xc7023
    ctx->pc = 0x17f6d4u;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_17f6d8:
    // 0x17f6d8: 0x1ac6821
    ctx->pc = 0x17f6d8u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_17f6dc:
    // 0x17f6dc: 0x1000001c
label_17f6e0:
    if (ctx->pc == 0x17F6E0u) {
        ctx->pc = 0x17F6E0u;
        SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
        ctx->pc = 0x17F6E4u;
        goto label_17f6e4;
    }
    ctx->pc = 0x17F6DCu;
    {
        const bool branch_taken_0x17f6dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F6E0u;
        SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
        if (branch_taken_0x17f6dc) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F6E4u;
label_17f6e4:
    // 0x17f6e4: 0x55000009
label_17f6e8:
    if (ctx->pc == 0x17F6E8u) {
        ctx->pc = 0x17F6E8u;
        SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
        ctx->pc = 0x17F6ECu;
        goto label_17f6ec;
    }
    ctx->pc = 0x17F6E4u;
    {
        const bool branch_taken_0x17f6e4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x17f6e4) {
            ctx->pc = 0x17F6E8u;
            SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 16));
            ctx->pc = 0x17F70Cu;
            goto label_17f70c;
        }
    }
    ctx->pc = 0x17F6ECu;
label_17f6ec:
    // 0x17f6ec: 0x3183ffff
    ctx->pc = 0x17f6ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 12), 65535));
label_17f6f0:
    // 0x17f6f0: 0xc1400
    ctx->pc = 0x17f6f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 12), 16));
label_17f6f4:
    // 0x17f6f4: 0x431025
    ctx->pc = 0x17f6f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17f6f8:
    // 0x17f6f8: 0xad62000c
    ctx->pc = 0x17f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 2));
label_17f6fc:
    // 0x17f6fc: 0xad620000
    ctx->pc = 0x17f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_17f700:
    // 0x17f700: 0xad620004
    ctx->pc = 0x17f700u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
label_17f704:
    // 0x17f704: 0x1000005f
label_17f708:
    if (ctx->pc == 0x17F708u) {
        ctx->pc = 0x17F708u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x17F70Cu;
        goto label_17f70c;
    }
    ctx->pc = 0x17F704u;
    {
        const bool branch_taken_0x17f704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F708u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x17f704) {
            ctx->pc = 0x17F884u;
            goto label_17f884;
        }
    }
    ctx->pc = 0x17F70Cu;
label_17f70c:
    // 0x17f70c: 0x180702d
    ctx->pc = 0x17f70cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_17f710:
    // 0x17f710: 0x180502d
    ctx->pc = 0x17f710u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_17f714:
    // 0x17f714: 0x1000000e
label_17f718:
    if (ctx->pc == 0x17F718u) {
        ctx->pc = 0x17F718u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17F71Cu;
        goto label_17f71c;
    }
    ctx->pc = 0x17F714u;
    {
        const bool branch_taken_0x17f714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F718u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17f714) {
            ctx->pc = 0x17F750u;
            goto label_17f750;
        }
    }
    ctx->pc = 0x17F71Cu;
label_17f71c:
    // 0x17f71c: 0x15000009
label_17f720:
    if (ctx->pc == 0x17F720u) {
        ctx->pc = 0x17F720u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17F724u;
        goto label_17f724;
    }
    ctx->pc = 0x17F71Cu;
    {
        const bool branch_taken_0x17f71c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17F720u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17f71c) {
            ctx->pc = 0x17F744u;
            goto label_17f744;
        }
    }
    ctx->pc = 0x17F724u;
label_17f724:
    // 0x17f724: 0x3c02002c
    ctx->pc = 0x17f724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_17f728:
    // 0x17f728: 0x2442c650
    ctx->pc = 0x17f728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952528));
label_17f72c:
    // 0x17f72c: 0x3221021
    ctx->pc = 0x17f72cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_17f730:
    // 0x17f730: 0x90430000
    ctx->pc = 0x17f730u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17f734:
    // 0x17f734: 0x2031824
    ctx->pc = 0x17f734u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_17f738:
    // 0x17f738: 0x31e00
    ctx->pc = 0x17f738u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
label_17f73c:
    // 0x17f73c: 0x10000051
label_17f740:
    if (ctx->pc == 0x17F740u) {
        ctx->pc = 0x17F740u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 24));
        ctx->pc = 0x17F744u;
        goto label_17f744;
    }
    ctx->pc = 0x17F73Cu;
    {
        const bool branch_taken_0x17f73c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F740u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 24));
        if (branch_taken_0x17f73c) {
            ctx->pc = 0x17F884u;
            goto label_17f884;
        }
    }
    ctx->pc = 0x17F744u;
label_17f744:
    // 0x17f744: 0x502d
    ctx->pc = 0x17f744u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f748:
    // 0x17f748: 0x702d
    ctx->pc = 0x17f748u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f74c:
    // 0x17f74c: 0x602d
    ctx->pc = 0x17f74cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f750:
    // 0x17f750: 0x15000013
label_17f754:
    if (ctx->pc == 0x17F754u) {
        ctx->pc = 0x17F754u;
        SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
        ctx->pc = 0x17F758u;
        goto label_17f758;
    }
    ctx->pc = 0x17F750u;
    {
        const bool branch_taken_0x17f750 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17F754u;
        SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
        if (branch_taken_0x17f750) {
            ctx->pc = 0x17F7A0u;
            goto label_17f7a0;
        }
    }
    ctx->pc = 0x17F758u;
label_17f758:
    // 0x17f758: 0x34028000
    ctx->pc = 0x17f758u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_17f75c:
    // 0x17f75c: 0x1c22821
    ctx->pc = 0x17f75cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_17f760:
    // 0x17f760: 0x1821821
    ctx->pc = 0x17f760u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_17f764:
    // 0x17f764: 0x1422021
    ctx->pc = 0x17f764u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_17f768:
    // 0x17f768: 0x36403
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
label_17f76c:
    // 0x17f76c: 0x1a21021
    ctx->pc = 0x17f76cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_17f770:
    // 0x17f770: 0x45403
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 16));
label_17f774:
    // 0x17f774: 0x26c03
    ctx->pc = 0x17f774u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), 16));
label_17f778:
    // 0x17f778: 0x57403
    ctx->pc = 0x17f778u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 5), 16));
label_17f77c:
    // 0x17f77c: 0xa56c000e
    ctx->pc = 0x17f77cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 12));
label_17f780:
    // 0x17f780: 0xa56a000c
    ctx->pc = 0x17f780u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 10));
label_17f784:
    // 0x17f784: 0xa56d000a
    ctx->pc = 0x17f784u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 13));
label_17f788:
    // 0x17f788: 0xa56e0008
    ctx->pc = 0x17f788u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 14));
label_17f78c:
    // 0x17f78c: 0xa56c0000
    ctx->pc = 0x17f78cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 12));
label_17f790:
    // 0x17f790: 0xa56a0002
    ctx->pc = 0x17f790u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 10));
label_17f794:
    // 0x17f794: 0xa56d0004
    ctx->pc = 0x17f794u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 13));
label_17f798:
    // 0x17f798: 0x1000003a
label_17f79c:
    if (ctx->pc == 0x17F79Cu) {
        ctx->pc = 0x17F79Cu;
        WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 14));
        ctx->pc = 0x17F7A0u;
        goto label_17f7a0;
    }
    ctx->pc = 0x17F798u;
    {
        const bool branch_taken_0x17f798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F79Cu;
        WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 14));
        if (branch_taken_0x17f798) {
            ctx->pc = 0x17F884u;
            goto label_17f884;
        }
    }
    ctx->pc = 0x17F7A0u;
label_17f7a0:
    // 0x17f7a0: 0x1f43821
    ctx->pc = 0x17f7a0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_17f7a4:
    // 0x17f7a4: 0x28fa023
    ctx->pc = 0x17f7a4u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
label_17f7a8:
    // 0x17f7a8: 0x311c021
    ctx->pc = 0x17f7a8u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 17)));
label_17f7ac:
    // 0x17f7ac: 0xf87823
    ctx->pc = 0x17f7acu;
    SET_GPR_U32(ctx, 15, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_17f7b0:
    // 0x17f7b0: 0x3c02ffff
    ctx->pc = 0x17f7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_17f7b4:
    // 0x17f7b4: 0x1141821
    ctx->pc = 0x17f7b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
label_17f7b8:
    // 0x17f7b8: 0x307c021
    ctx->pc = 0x17f7b8u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
label_17f7bc:
    // 0x17f7bc: 0x34423c11
    ctx->pc = 0x17f7bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15377));
label_17f7c0:
    // 0x17f7c0: 0x3c05fffe
    ctx->pc = 0x17f7c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65534 << 16));
label_17f7c4:
    // 0x17f7c4: 0x623818
    ctx->pc = 0x17f7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
label_17f7c8:
    // 0x17f7c8: 0x34a5eae8
    ctx->pc = 0x17f7c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 60136));
label_17f7cc:
    // 0x17f7cc: 0x3c020001
    ctx->pc = 0x17f7ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_17f7d0:
    // 0x17f7d0: 0x3c040002
    ctx->pc = 0x17f7d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
label_17f7d4:
    // 0x17f7d4: 0x34426a0a
    ctx->pc = 0x17f7d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27146));
label_17f7d8:
    // 0x17f7d8: 0x34849cf6
    ctx->pc = 0x17f7d8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 40182));
label_17f7dc:
    // 0x17f7dc: 0x71e27818
    ctx->pc = 0x17f7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
label_17f7e0:
    // 0x17f7e0: 0x1042018
    ctx->pc = 0x17f7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_17f7e4:
    // 0x17f7e4: 0x18c400
    ctx->pc = 0x17f7e4u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 24), 16));
label_17f7e8:
    // 0x17f7e8: 0x34038000
    ctx->pc = 0x17f7e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_17f7ec:
    // 0x17f7ec: 0x2851018
    ctx->pc = 0x17f7ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_17f7f0:
    // 0x17f7f0: 0x1984823
    ctx->pc = 0x17f7f0u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
label_17f7f4:
    // 0x17f7f4: 0x1234821
    ctx->pc = 0x17f7f4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_17f7f8:
    // 0x17f7f8: 0xe48821
    ctx->pc = 0x17f7f8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_17f7fc:
    // 0x17f7fc: 0x94c03
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
label_17f800:
    // 0x17f800: 0xa569000e
    ctx->pc = 0x17f800u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 9));
label_17f804:
    // 0x17f804: 0x47a021
    ctx->pc = 0x17f804u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_17f808:
    // 0x17f808: 0x1981021
    ctx->pc = 0x17f808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
label_17f80c:
    // 0x17f80c: 0x298a023
    ctx->pc = 0x17f80cu;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
label_17f810:
    // 0x17f810: 0x431021
    ctx->pc = 0x17f810u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17f814:
    // 0x17f814: 0x1f47823
    ctx->pc = 0x17f814u;
    SET_GPR_U32(ctx, 15, SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_17f818:
    // 0x17f818: 0x21403
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17f81c:
    // 0x17f81c: 0x22f8823
    ctx->pc = 0x17f81cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
label_17f820:
    // 0x17f820: 0xa5620000
    ctx->pc = 0x17f820u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
label_17f824:
    // 0x17f824: 0x1544023
    ctx->pc = 0x17f824u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
label_17f828:
    // 0x17f828: 0x1af3823
    ctx->pc = 0x17f828u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_17f82c:
    // 0x17f82c: 0x1d13023
    ctx->pc = 0x17f82cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
label_17f830:
    // 0x17f830: 0x1541021
    ctx->pc = 0x17f830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
label_17f834:
    // 0x17f834: 0x1af2021
    ctx->pc = 0x17f834u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_17f838:
    // 0x17f838: 0x1d12821
    ctx->pc = 0x17f838u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
label_17f83c:
    // 0x17f83c: 0x431021
    ctx->pc = 0x17f83cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17f840:
    // 0x17f840: 0x832021
    ctx->pc = 0x17f840u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17f844:
    // 0x17f844: 0xa32821
    ctx->pc = 0x17f844u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_17f848:
    // 0x17f848: 0xc33021
    ctx->pc = 0x17f848u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_17f84c:
    // 0x17f84c: 0xe33821
    ctx->pc = 0x17f84cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_17f850:
    // 0x17f850: 0x1034021
    ctx->pc = 0x17f850u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_17f854:
    // 0x17f854: 0x21403
    ctx->pc = 0x17f854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17f858:
    // 0x17f858: 0x42403
    ctx->pc = 0x17f858u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_17f85c:
    // 0x17f85c: 0x52c03
    ctx->pc = 0x17f85cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_17f860:
    // 0x17f860: 0x63403
    ctx->pc = 0x17f860u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_17f864:
    // 0x17f864: 0x73c03
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_17f868:
    // 0x17f868: 0x84403
    ctx->pc = 0x17f868u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
label_17f86c:
    // 0x17f86c: 0xa5620002
    ctx->pc = 0x17f86cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 2));
label_17f870:
    // 0x17f870: 0xa5640004
    ctx->pc = 0x17f870u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 4));
label_17f874:
    // 0x17f874: 0xa5650006
    ctx->pc = 0x17f874u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 5));
label_17f878:
    // 0x17f878: 0xa5660008
    ctx->pc = 0x17f878u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 6));
label_17f87c:
    // 0x17f87c: 0xa567000a
    ctx->pc = 0x17f87cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 7));
label_17f880:
    // 0x17f880: 0xa568000c
    ctx->pc = 0x17f880u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 8));
label_17f884:
    // 0x17f884: 0x27390001
    ctx->pc = 0x17f884u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 1));
label_17f888:
    // 0x17f888: 0x333102a
    ctx->pc = 0x17f888u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 19)));
label_17f88c:
    // 0x17f88c: 0x1440fe5e
label_17f890:
    if (ctx->pc == 0x17F890u) {
        ctx->pc = 0x17F890u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 16));
        ctx->pc = 0x17F894u;
        goto label_17f894;
    }
    ctx->pc = 0x17F88Cu;
    {
        const bool branch_taken_0x17f88c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17F890u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 16));
        if (branch_taken_0x17f88c) {
            ctx->pc = 0x17F208u;
            goto label_17f208;
        }
    }
    ctx->pc = 0x17F894u;
label_17f894:
    // 0x17f894: 0x10000003
label_17f898:
    if (ctx->pc == 0x17F898u) {
        ctx->pc = 0x17F898u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 255));
        ctx->pc = 0x17F89Cu;
        goto label_17f89c;
    }
    ctx->pc = 0x17F894u;
    {
        const bool branch_taken_0x17f894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F898u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 255));
        if (branch_taken_0x17f894) {
            ctx->pc = 0x17F8A4u;
            goto label_17f8a4;
        }
    }
    ctx->pc = 0x17F89Cu;
label_17f89c:
    // 0x17f89c: 0x3c16002c
    ctx->pc = 0x17f89cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)44 << 16));
label_17f8a0:
    // 0x17f8a0: 0x320200ff
    ctx->pc = 0x17f8a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 255));
label_17f8a4:
    // 0x17f8a4: 0x3203000f
    ctx->pc = 0x17f8a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 15));
label_17f8a8:
    // 0x17f8a8: 0x21102
    ctx->pc = 0x17f8a8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
label_17f8ac:
    // 0x17f8ac: 0x14600003
label_17f8b0:
    if (ctx->pc == 0x17F8B0u) {
        ctx->pc = 0x17F8B0u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x17F8B4u;
        goto label_17f8b4;
    }
    ctx->pc = 0x17F8ACu;
    {
        const bool branch_taken_0x17f8ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17F8B0u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x17f8ac) {
            ctx->pc = 0x17F8BCu;
            goto label_17f8bc;
        }
    }
    ctx->pc = 0x17F8B4u;
label_17f8b4:
    // 0x17f8b4: 0x10000002
label_17f8b8:
    if (ctx->pc == 0x17F8B8u) {
        ctx->pc = 0x17F8B8u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x17F8BCu;
        goto label_17f8bc;
    }
    ctx->pc = 0x17F8B4u;
    {
        const bool branch_taken_0x17f8b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F8B8u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x17f8b4) {
            ctx->pc = 0x17F8C0u;
            goto label_17f8c0;
        }
    }
    ctx->pc = 0x17F8BCu;
label_17f8bc:
    // 0x17f8bc: 0x21840
    ctx->pc = 0x17f8bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
label_17f8c0:
    // 0x17f8c0: 0x26c2c5d0
    ctx->pc = 0x17f8c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294952400));
label_17f8c4:
    // 0x17f8c4: 0x31880
    ctx->pc = 0x17f8c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_17f8c8:
    // 0x17f8c8: 0x621821
    ctx->pc = 0x17f8c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17f8cc:
    // 0x17f8cc: 0x8c620000
    ctx->pc = 0x17f8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17f8d0:
    // 0x17f8d0: 0x40f809
label_17f8d4:
    if (ctx->pc == 0x17F8D4u) {
        ctx->pc = 0x17F8D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17F8D8u;
        goto label_17f8d8;
    }
    ctx->pc = 0x17F8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F8D8u);
        ctx->pc = 0x17F8D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F1B0u: goto label_17f1b0;
            case 0x17F1B4u: goto label_17f1b4;
            case 0x17F1B8u: goto label_17f1b8;
            case 0x17F1BCu: goto label_17f1bc;
            case 0x17F1C0u: goto label_17f1c0;
            case 0x17F1C4u: goto label_17f1c4;
            case 0x17F1C8u: goto label_17f1c8;
            case 0x17F1CCu: goto label_17f1cc;
            case 0x17F1D0u: goto label_17f1d0;
            case 0x17F1D4u: goto label_17f1d4;
            case 0x17F1D8u: goto label_17f1d8;
            case 0x17F1DCu: goto label_17f1dc;
            case 0x17F1E0u: goto label_17f1e0;
            case 0x17F1E4u: goto label_17f1e4;
            case 0x17F1E8u: goto label_17f1e8;
            case 0x17F1ECu: goto label_17f1ec;
            case 0x17F1F0u: goto label_17f1f0;
            case 0x17F1F4u: goto label_17f1f4;
            case 0x17F1F8u: goto label_17f1f8;
            case 0x17F1FCu: goto label_17f1fc;
            case 0x17F200u: goto label_17f200;
            case 0x17F204u: goto label_17f204;
            case 0x17F208u: goto label_17f208;
            case 0x17F20Cu: goto label_17f20c;
            case 0x17F210u: goto label_17f210;
            case 0x17F214u: goto label_17f214;
            case 0x17F218u: goto label_17f218;
            case 0x17F21Cu: goto label_17f21c;
            case 0x17F220u: goto label_17f220;
            case 0x17F224u: goto label_17f224;
            case 0x17F228u: goto label_17f228;
            case 0x17F22Cu: goto label_17f22c;
            case 0x17F230u: goto label_17f230;
            case 0x17F234u: goto label_17f234;
            case 0x17F238u: goto label_17f238;
            case 0x17F23Cu: goto label_17f23c;
            case 0x17F240u: goto label_17f240;
            case 0x17F244u: goto label_17f244;
            case 0x17F248u: goto label_17f248;
            case 0x17F24Cu: goto label_17f24c;
            case 0x17F250u: goto label_17f250;
            case 0x17F254u: goto label_17f254;
            case 0x17F258u: goto label_17f258;
            case 0x17F25Cu: goto label_17f25c;
            case 0x17F260u: goto label_17f260;
            case 0x17F264u: goto label_17f264;
            case 0x17F268u: goto label_17f268;
            case 0x17F26Cu: goto label_17f26c;
            case 0x17F270u: goto label_17f270;
            case 0x17F274u: goto label_17f274;
            case 0x17F278u: goto label_17f278;
            case 0x17F27Cu: goto label_17f27c;
            case 0x17F280u: goto label_17f280;
            case 0x17F284u: goto label_17f284;
            case 0x17F288u: goto label_17f288;
            case 0x17F28Cu: goto label_17f28c;
            case 0x17F290u: goto label_17f290;
            case 0x17F294u: goto label_17f294;
            case 0x17F298u: goto label_17f298;
            case 0x17F29Cu: goto label_17f29c;
            case 0x17F2A0u: goto label_17f2a0;
            case 0x17F2A4u: goto label_17f2a4;
            case 0x17F2A8u: goto label_17f2a8;
            case 0x17F2ACu: goto label_17f2ac;
            case 0x17F2B0u: goto label_17f2b0;
            case 0x17F2B4u: goto label_17f2b4;
            case 0x17F2B8u: goto label_17f2b8;
            case 0x17F2BCu: goto label_17f2bc;
            case 0x17F2C0u: goto label_17f2c0;
            case 0x17F2C4u: goto label_17f2c4;
            case 0x17F2C8u: goto label_17f2c8;
            case 0x17F2CCu: goto label_17f2cc;
            case 0x17F2D0u: goto label_17f2d0;
            case 0x17F2D4u: goto label_17f2d4;
            case 0x17F2D8u: goto label_17f2d8;
            case 0x17F2DCu: goto label_17f2dc;
            case 0x17F2E0u: goto label_17f2e0;
            case 0x17F2E4u: goto label_17f2e4;
            case 0x17F2E8u: goto label_17f2e8;
            case 0x17F2ECu: goto label_17f2ec;
            case 0x17F2F0u: goto label_17f2f0;
            case 0x17F2F4u: goto label_17f2f4;
            case 0x17F2F8u: goto label_17f2f8;
            case 0x17F2FCu: goto label_17f2fc;
            case 0x17F300u: goto label_17f300;
            case 0x17F304u: goto label_17f304;
            case 0x17F308u: goto label_17f308;
            case 0x17F30Cu: goto label_17f30c;
            case 0x17F310u: goto label_17f310;
            case 0x17F314u: goto label_17f314;
            case 0x17F318u: goto label_17f318;
            case 0x17F31Cu: goto label_17f31c;
            case 0x17F320u: goto label_17f320;
            case 0x17F324u: goto label_17f324;
            case 0x17F328u: goto label_17f328;
            case 0x17F32Cu: goto label_17f32c;
            case 0x17F330u: goto label_17f330;
            case 0x17F334u: goto label_17f334;
            case 0x17F338u: goto label_17f338;
            case 0x17F33Cu: goto label_17f33c;
            case 0x17F340u: goto label_17f340;
            case 0x17F344u: goto label_17f344;
            case 0x17F348u: goto label_17f348;
            case 0x17F34Cu: goto label_17f34c;
            case 0x17F350u: goto label_17f350;
            case 0x17F354u: goto label_17f354;
            case 0x17F358u: goto label_17f358;
            case 0x17F35Cu: goto label_17f35c;
            case 0x17F360u: goto label_17f360;
            case 0x17F364u: goto label_17f364;
            case 0x17F368u: goto label_17f368;
            case 0x17F36Cu: goto label_17f36c;
            case 0x17F370u: goto label_17f370;
            case 0x17F374u: goto label_17f374;
            case 0x17F378u: goto label_17f378;
            case 0x17F37Cu: goto label_17f37c;
            case 0x17F380u: goto label_17f380;
            case 0x17F384u: goto label_17f384;
            case 0x17F388u: goto label_17f388;
            case 0x17F38Cu: goto label_17f38c;
            case 0x17F390u: goto label_17f390;
            case 0x17F394u: goto label_17f394;
            case 0x17F398u: goto label_17f398;
            case 0x17F39Cu: goto label_17f39c;
            case 0x17F3A0u: goto label_17f3a0;
            case 0x17F3A4u: goto label_17f3a4;
            case 0x17F3A8u: goto label_17f3a8;
            case 0x17F3ACu: goto label_17f3ac;
            case 0x17F3B0u: goto label_17f3b0;
            case 0x17F3B4u: goto label_17f3b4;
            case 0x17F3B8u: goto label_17f3b8;
            case 0x17F3BCu: goto label_17f3bc;
            case 0x17F3C0u: goto label_17f3c0;
            case 0x17F3C4u: goto label_17f3c4;
            case 0x17F3C8u: goto label_17f3c8;
            case 0x17F3CCu: goto label_17f3cc;
            case 0x17F3D0u: goto label_17f3d0;
            case 0x17F3D4u: goto label_17f3d4;
            case 0x17F3D8u: goto label_17f3d8;
            case 0x17F3DCu: goto label_17f3dc;
            case 0x17F3E0u: goto label_17f3e0;
            case 0x17F3E4u: goto label_17f3e4;
            case 0x17F3E8u: goto label_17f3e8;
            case 0x17F3ECu: goto label_17f3ec;
            case 0x17F3F0u: goto label_17f3f0;
            case 0x17F3F4u: goto label_17f3f4;
            case 0x17F3F8u: goto label_17f3f8;
            case 0x17F3FCu: goto label_17f3fc;
            case 0x17F400u: goto label_17f400;
            case 0x17F404u: goto label_17f404;
            case 0x17F408u: goto label_17f408;
            case 0x17F40Cu: goto label_17f40c;
            case 0x17F410u: goto label_17f410;
            case 0x17F414u: goto label_17f414;
            case 0x17F418u: goto label_17f418;
            case 0x17F41Cu: goto label_17f41c;
            case 0x17F420u: goto label_17f420;
            case 0x17F424u: goto label_17f424;
            case 0x17F428u: goto label_17f428;
            case 0x17F42Cu: goto label_17f42c;
            case 0x17F430u: goto label_17f430;
            case 0x17F434u: goto label_17f434;
            case 0x17F438u: goto label_17f438;
            case 0x17F43Cu: goto label_17f43c;
            case 0x17F440u: goto label_17f440;
            case 0x17F444u: goto label_17f444;
            case 0x17F448u: goto label_17f448;
            case 0x17F44Cu: goto label_17f44c;
            case 0x17F450u: goto label_17f450;
            case 0x17F454u: goto label_17f454;
            case 0x17F458u: goto label_17f458;
            case 0x17F45Cu: goto label_17f45c;
            case 0x17F460u: goto label_17f460;
            case 0x17F464u: goto label_17f464;
            case 0x17F468u: goto label_17f468;
            case 0x17F46Cu: goto label_17f46c;
            case 0x17F470u: goto label_17f470;
            case 0x17F474u: goto label_17f474;
            case 0x17F478u: goto label_17f478;
            case 0x17F47Cu: goto label_17f47c;
            case 0x17F480u: goto label_17f480;
            case 0x17F484u: goto label_17f484;
            case 0x17F488u: goto label_17f488;
            case 0x17F48Cu: goto label_17f48c;
            case 0x17F490u: goto label_17f490;
            case 0x17F494u: goto label_17f494;
            case 0x17F498u: goto label_17f498;
            case 0x17F49Cu: goto label_17f49c;
            case 0x17F4A0u: goto label_17f4a0;
            case 0x17F4A4u: goto label_17f4a4;
            case 0x17F4A8u: goto label_17f4a8;
            case 0x17F4ACu: goto label_17f4ac;
            case 0x17F4B0u: goto label_17f4b0;
            case 0x17F4B4u: goto label_17f4b4;
            case 0x17F4B8u: goto label_17f4b8;
            case 0x17F4BCu: goto label_17f4bc;
            case 0x17F4C0u: goto label_17f4c0;
            case 0x17F4C4u: goto label_17f4c4;
            case 0x17F4C8u: goto label_17f4c8;
            case 0x17F4CCu: goto label_17f4cc;
            case 0x17F4D0u: goto label_17f4d0;
            case 0x17F4D4u: goto label_17f4d4;
            case 0x17F4D8u: goto label_17f4d8;
            case 0x17F4DCu: goto label_17f4dc;
            case 0x17F4E0u: goto label_17f4e0;
            case 0x17F4E4u: goto label_17f4e4;
            case 0x17F4E8u: goto label_17f4e8;
            case 0x17F4ECu: goto label_17f4ec;
            case 0x17F4F0u: goto label_17f4f0;
            case 0x17F4F4u: goto label_17f4f4;
            case 0x17F4F8u: goto label_17f4f8;
            case 0x17F4FCu: goto label_17f4fc;
            case 0x17F500u: goto label_17f500;
            case 0x17F504u: goto label_17f504;
            case 0x17F508u: goto label_17f508;
            case 0x17F50Cu: goto label_17f50c;
            case 0x17F510u: goto label_17f510;
            case 0x17F514u: goto label_17f514;
            case 0x17F518u: goto label_17f518;
            case 0x17F51Cu: goto label_17f51c;
            case 0x17F520u: goto label_17f520;
            case 0x17F524u: goto label_17f524;
            case 0x17F528u: goto label_17f528;
            case 0x17F52Cu: goto label_17f52c;
            case 0x17F530u: goto label_17f530;
            case 0x17F534u: goto label_17f534;
            case 0x17F538u: goto label_17f538;
            case 0x17F53Cu: goto label_17f53c;
            case 0x17F540u: goto label_17f540;
            case 0x17F544u: goto label_17f544;
            case 0x17F548u: goto label_17f548;
            case 0x17F54Cu: goto label_17f54c;
            case 0x17F550u: goto label_17f550;
            case 0x17F554u: goto label_17f554;
            case 0x17F558u: goto label_17f558;
            case 0x17F55Cu: goto label_17f55c;
            case 0x17F560u: goto label_17f560;
            case 0x17F564u: goto label_17f564;
            case 0x17F568u: goto label_17f568;
            case 0x17F56Cu: goto label_17f56c;
            case 0x17F570u: goto label_17f570;
            case 0x17F574u: goto label_17f574;
            case 0x17F578u: goto label_17f578;
            case 0x17F57Cu: goto label_17f57c;
            case 0x17F580u: goto label_17f580;
            case 0x17F584u: goto label_17f584;
            case 0x17F588u: goto label_17f588;
            case 0x17F58Cu: goto label_17f58c;
            case 0x17F590u: goto label_17f590;
            case 0x17F594u: goto label_17f594;
            case 0x17F598u: goto label_17f598;
            case 0x17F59Cu: goto label_17f59c;
            case 0x17F5A0u: goto label_17f5a0;
            case 0x17F5A4u: goto label_17f5a4;
            case 0x17F5A8u: goto label_17f5a8;
            case 0x17F5ACu: goto label_17f5ac;
            case 0x17F5B0u: goto label_17f5b0;
            case 0x17F5B4u: goto label_17f5b4;
            case 0x17F5B8u: goto label_17f5b8;
            case 0x17F5BCu: goto label_17f5bc;
            case 0x17F5C0u: goto label_17f5c0;
            case 0x17F5C4u: goto label_17f5c4;
            case 0x17F5C8u: goto label_17f5c8;
            case 0x17F5CCu: goto label_17f5cc;
            case 0x17F5D0u: goto label_17f5d0;
            case 0x17F5D4u: goto label_17f5d4;
            case 0x17F5D8u: goto label_17f5d8;
            case 0x17F5DCu: goto label_17f5dc;
            case 0x17F5E0u: goto label_17f5e0;
            case 0x17F5E4u: goto label_17f5e4;
            case 0x17F5E8u: goto label_17f5e8;
            case 0x17F5ECu: goto label_17f5ec;
            case 0x17F5F0u: goto label_17f5f0;
            case 0x17F5F4u: goto label_17f5f4;
            case 0x17F5F8u: goto label_17f5f8;
            case 0x17F5FCu: goto label_17f5fc;
            case 0x17F600u: goto label_17f600;
            case 0x17F604u: goto label_17f604;
            case 0x17F608u: goto label_17f608;
            case 0x17F60Cu: goto label_17f60c;
            case 0x17F610u: goto label_17f610;
            case 0x17F614u: goto label_17f614;
            case 0x17F618u: goto label_17f618;
            case 0x17F61Cu: goto label_17f61c;
            case 0x17F620u: goto label_17f620;
            case 0x17F624u: goto label_17f624;
            case 0x17F628u: goto label_17f628;
            case 0x17F62Cu: goto label_17f62c;
            case 0x17F630u: goto label_17f630;
            case 0x17F634u: goto label_17f634;
            case 0x17F638u: goto label_17f638;
            case 0x17F63Cu: goto label_17f63c;
            case 0x17F640u: goto label_17f640;
            case 0x17F644u: goto label_17f644;
            case 0x17F648u: goto label_17f648;
            case 0x17F64Cu: goto label_17f64c;
            case 0x17F650u: goto label_17f650;
            case 0x17F654u: goto label_17f654;
            case 0x17F658u: goto label_17f658;
            case 0x17F65Cu: goto label_17f65c;
            case 0x17F660u: goto label_17f660;
            case 0x17F664u: goto label_17f664;
            case 0x17F668u: goto label_17f668;
            case 0x17F66Cu: goto label_17f66c;
            case 0x17F670u: goto label_17f670;
            case 0x17F674u: goto label_17f674;
            case 0x17F678u: goto label_17f678;
            case 0x17F67Cu: goto label_17f67c;
            case 0x17F680u: goto label_17f680;
            case 0x17F684u: goto label_17f684;
            case 0x17F688u: goto label_17f688;
            case 0x17F68Cu: goto label_17f68c;
            case 0x17F690u: goto label_17f690;
            case 0x17F694u: goto label_17f694;
            case 0x17F698u: goto label_17f698;
            case 0x17F69Cu: goto label_17f69c;
            case 0x17F6A0u: goto label_17f6a0;
            case 0x17F6A4u: goto label_17f6a4;
            case 0x17F6A8u: goto label_17f6a8;
            case 0x17F6ACu: goto label_17f6ac;
            case 0x17F6B0u: goto label_17f6b0;
            case 0x17F6B4u: goto label_17f6b4;
            case 0x17F6B8u: goto label_17f6b8;
            case 0x17F6BCu: goto label_17f6bc;
            case 0x17F6C0u: goto label_17f6c0;
            case 0x17F6C4u: goto label_17f6c4;
            case 0x17F6C8u: goto label_17f6c8;
            case 0x17F6CCu: goto label_17f6cc;
            case 0x17F6D0u: goto label_17f6d0;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6D8u: goto label_17f6d8;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F6E0u: goto label_17f6e0;
            case 0x17F6E4u: goto label_17f6e4;
            case 0x17F6E8u: goto label_17f6e8;
            case 0x17F6ECu: goto label_17f6ec;
            case 0x17F6F0u: goto label_17f6f0;
            case 0x17F6F4u: goto label_17f6f4;
            case 0x17F6F8u: goto label_17f6f8;
            case 0x17F6FCu: goto label_17f6fc;
            case 0x17F700u: goto label_17f700;
            case 0x17F704u: goto label_17f704;
            case 0x17F708u: goto label_17f708;
            case 0x17F70Cu: goto label_17f70c;
            case 0x17F710u: goto label_17f710;
            case 0x17F714u: goto label_17f714;
            case 0x17F718u: goto label_17f718;
            case 0x17F71Cu: goto label_17f71c;
            case 0x17F720u: goto label_17f720;
            case 0x17F724u: goto label_17f724;
            case 0x17F728u: goto label_17f728;
            case 0x17F72Cu: goto label_17f72c;
            case 0x17F730u: goto label_17f730;
            case 0x17F734u: goto label_17f734;
            case 0x17F738u: goto label_17f738;
            case 0x17F73Cu: goto label_17f73c;
            case 0x17F740u: goto label_17f740;
            case 0x17F744u: goto label_17f744;
            case 0x17F748u: goto label_17f748;
            case 0x17F74Cu: goto label_17f74c;
            case 0x17F750u: goto label_17f750;
            case 0x17F754u: goto label_17f754;
            case 0x17F758u: goto label_17f758;
            case 0x17F75Cu: goto label_17f75c;
            case 0x17F760u: goto label_17f760;
            case 0x17F764u: goto label_17f764;
            case 0x17F768u: goto label_17f768;
            case 0x17F76Cu: goto label_17f76c;
            case 0x17F770u: goto label_17f770;
            case 0x17F774u: goto label_17f774;
            case 0x17F778u: goto label_17f778;
            case 0x17F77Cu: goto label_17f77c;
            case 0x17F780u: goto label_17f780;
            case 0x17F784u: goto label_17f784;
            case 0x17F788u: goto label_17f788;
            case 0x17F78Cu: goto label_17f78c;
            case 0x17F790u: goto label_17f790;
            case 0x17F794u: goto label_17f794;
            case 0x17F798u: goto label_17f798;
            case 0x17F79Cu: goto label_17f79c;
            case 0x17F7A0u: goto label_17f7a0;
            case 0x17F7A4u: goto label_17f7a4;
            case 0x17F7A8u: goto label_17f7a8;
            case 0x17F7ACu: goto label_17f7ac;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F7B4u: goto label_17f7b4;
            case 0x17F7B8u: goto label_17f7b8;
            case 0x17F7BCu: goto label_17f7bc;
            case 0x17F7C0u: goto label_17f7c0;
            case 0x17F7C4u: goto label_17f7c4;
            case 0x17F7C8u: goto label_17f7c8;
            case 0x17F7CCu: goto label_17f7cc;
            case 0x17F7D0u: goto label_17f7d0;
            case 0x17F7D4u: goto label_17f7d4;
            case 0x17F7D8u: goto label_17f7d8;
            case 0x17F7DCu: goto label_17f7dc;
            case 0x17F7E0u: goto label_17f7e0;
            case 0x17F7E4u: goto label_17f7e4;
            case 0x17F7E8u: goto label_17f7e8;
            case 0x17F7ECu: goto label_17f7ec;
            case 0x17F7F0u: goto label_17f7f0;
            case 0x17F7F4u: goto label_17f7f4;
            case 0x17F7F8u: goto label_17f7f8;
            case 0x17F7FCu: goto label_17f7fc;
            case 0x17F800u: goto label_17f800;
            case 0x17F804u: goto label_17f804;
            case 0x17F808u: goto label_17f808;
            case 0x17F80Cu: goto label_17f80c;
            case 0x17F810u: goto label_17f810;
            case 0x17F814u: goto label_17f814;
            case 0x17F818u: goto label_17f818;
            case 0x17F81Cu: goto label_17f81c;
            case 0x17F820u: goto label_17f820;
            case 0x17F824u: goto label_17f824;
            case 0x17F828u: goto label_17f828;
            case 0x17F82Cu: goto label_17f82c;
            case 0x17F830u: goto label_17f830;
            case 0x17F834u: goto label_17f834;
            case 0x17F838u: goto label_17f838;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17F840u: goto label_17f840;
            case 0x17F844u: goto label_17f844;
            case 0x17F848u: goto label_17f848;
            case 0x17F84Cu: goto label_17f84c;
            case 0x17F850u: goto label_17f850;
            case 0x17F854u: goto label_17f854;
            case 0x17F858u: goto label_17f858;
            case 0x17F85Cu: goto label_17f85c;
            case 0x17F860u: goto label_17f860;
            case 0x17F864u: goto label_17f864;
            case 0x17F868u: goto label_17f868;
            case 0x17F86Cu: goto label_17f86c;
            case 0x17F870u: goto label_17f870;
            case 0x17F874u: goto label_17f874;
            case 0x17F878u: goto label_17f878;
            case 0x17F87Cu: goto label_17f87c;
            case 0x17F880u: goto label_17f880;
            case 0x17F884u: goto label_17f884;
            case 0x17F888u: goto label_17f888;
            case 0x17F88Cu: goto label_17f88c;
            case 0x17F890u: goto label_17f890;
            case 0x17F894u: goto label_17f894;
            case 0x17F898u: goto label_17f898;
            case 0x17F89Cu: goto label_17f89c;
            case 0x17F8A0u: goto label_17f8a0;
            case 0x17F8A4u: goto label_17f8a4;
            case 0x17F8A8u: goto label_17f8a8;
            case 0x17F8ACu: goto label_17f8ac;
            case 0x17F8B0u: goto label_17f8b0;
            case 0x17F8B4u: goto label_17f8b4;
            case 0x17F8B8u: goto label_17f8b8;
            case 0x17F8BCu: goto label_17f8bc;
            case 0x17F8C0u: goto label_17f8c0;
            case 0x17F8C4u: goto label_17f8c4;
            case 0x17F8C8u: goto label_17f8c8;
            case 0x17F8CCu: goto label_17f8cc;
            case 0x17F8D0u: goto label_17f8d0;
            case 0x17F8D4u: goto label_17f8d4;
            case 0x17F8D8u: goto label_17f8d8;
            case 0x17F8DCu: goto label_17f8dc;
            case 0x17F8E0u: goto label_17f8e0;
            case 0x17F8E4u: goto label_17f8e4;
            case 0x17F8E8u: goto label_17f8e8;
            case 0x17F8ECu: goto label_17f8ec;
            case 0x17F8F0u: goto label_17f8f0;
            case 0x17F8F4u: goto label_17f8f4;
            case 0x17F8F8u: goto label_17f8f8;
            case 0x17F8FCu: goto label_17f8fc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17F8D8u; }
            if (ctx->pc != 0x17F8D8u) { return; }
        }
    }
    ctx->pc = 0x17F8D8u;
label_17f8d8:
    // 0x17f8d8: 0xdfbf0070
    ctx->pc = 0x17f8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17f8dc:
    // 0x17f8dc: 0xdfb60060
    ctx->pc = 0x17f8dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17f8e0:
    // 0x17f8e0: 0xdfb50050
    ctx->pc = 0x17f8e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17f8e4:
    // 0x17f8e4: 0xdfb40040
    ctx->pc = 0x17f8e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17f8e8:
    // 0x17f8e8: 0xdfb30030
    ctx->pc = 0x17f8e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17f8ec:
    // 0x17f8ec: 0xdfb20020
    ctx->pc = 0x17f8ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17f8f0:
    // 0x17f8f0: 0xdfb10010
    ctx->pc = 0x17f8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17f8f4:
    // 0x17f8f4: 0xdfb00000
    ctx->pc = 0x17f8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f8f8:
    // 0x17f8f8: 0x3e00008
label_17f8fc:
    if (ctx->pc == 0x17F8FCu) {
        ctx->pc = 0x17F8FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x17F900u;
        goto label_fallthrough_0x17f8f8;
    }
    ctx->pc = 0x17F8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F8FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F1B0u: goto label_17f1b0;
            case 0x17F1B4u: goto label_17f1b4;
            case 0x17F1B8u: goto label_17f1b8;
            case 0x17F1BCu: goto label_17f1bc;
            case 0x17F1C0u: goto label_17f1c0;
            case 0x17F1C4u: goto label_17f1c4;
            case 0x17F1C8u: goto label_17f1c8;
            case 0x17F1CCu: goto label_17f1cc;
            case 0x17F1D0u: goto label_17f1d0;
            case 0x17F1D4u: goto label_17f1d4;
            case 0x17F1D8u: goto label_17f1d8;
            case 0x17F1DCu: goto label_17f1dc;
            case 0x17F1E0u: goto label_17f1e0;
            case 0x17F1E4u: goto label_17f1e4;
            case 0x17F1E8u: goto label_17f1e8;
            case 0x17F1ECu: goto label_17f1ec;
            case 0x17F1F0u: goto label_17f1f0;
            case 0x17F1F4u: goto label_17f1f4;
            case 0x17F1F8u: goto label_17f1f8;
            case 0x17F1FCu: goto label_17f1fc;
            case 0x17F200u: goto label_17f200;
            case 0x17F204u: goto label_17f204;
            case 0x17F208u: goto label_17f208;
            case 0x17F20Cu: goto label_17f20c;
            case 0x17F210u: goto label_17f210;
            case 0x17F214u: goto label_17f214;
            case 0x17F218u: goto label_17f218;
            case 0x17F21Cu: goto label_17f21c;
            case 0x17F220u: goto label_17f220;
            case 0x17F224u: goto label_17f224;
            case 0x17F228u: goto label_17f228;
            case 0x17F22Cu: goto label_17f22c;
            case 0x17F230u: goto label_17f230;
            case 0x17F234u: goto label_17f234;
            case 0x17F238u: goto label_17f238;
            case 0x17F23Cu: goto label_17f23c;
            case 0x17F240u: goto label_17f240;
            case 0x17F244u: goto label_17f244;
            case 0x17F248u: goto label_17f248;
            case 0x17F24Cu: goto label_17f24c;
            case 0x17F250u: goto label_17f250;
            case 0x17F254u: goto label_17f254;
            case 0x17F258u: goto label_17f258;
            case 0x17F25Cu: goto label_17f25c;
            case 0x17F260u: goto label_17f260;
            case 0x17F264u: goto label_17f264;
            case 0x17F268u: goto label_17f268;
            case 0x17F26Cu: goto label_17f26c;
            case 0x17F270u: goto label_17f270;
            case 0x17F274u: goto label_17f274;
            case 0x17F278u: goto label_17f278;
            case 0x17F27Cu: goto label_17f27c;
            case 0x17F280u: goto label_17f280;
            case 0x17F284u: goto label_17f284;
            case 0x17F288u: goto label_17f288;
            case 0x17F28Cu: goto label_17f28c;
            case 0x17F290u: goto label_17f290;
            case 0x17F294u: goto label_17f294;
            case 0x17F298u: goto label_17f298;
            case 0x17F29Cu: goto label_17f29c;
            case 0x17F2A0u: goto label_17f2a0;
            case 0x17F2A4u: goto label_17f2a4;
            case 0x17F2A8u: goto label_17f2a8;
            case 0x17F2ACu: goto label_17f2ac;
            case 0x17F2B0u: goto label_17f2b0;
            case 0x17F2B4u: goto label_17f2b4;
            case 0x17F2B8u: goto label_17f2b8;
            case 0x17F2BCu: goto label_17f2bc;
            case 0x17F2C0u: goto label_17f2c0;
            case 0x17F2C4u: goto label_17f2c4;
            case 0x17F2C8u: goto label_17f2c8;
            case 0x17F2CCu: goto label_17f2cc;
            case 0x17F2D0u: goto label_17f2d0;
            case 0x17F2D4u: goto label_17f2d4;
            case 0x17F2D8u: goto label_17f2d8;
            case 0x17F2DCu: goto label_17f2dc;
            case 0x17F2E0u: goto label_17f2e0;
            case 0x17F2E4u: goto label_17f2e4;
            case 0x17F2E8u: goto label_17f2e8;
            case 0x17F2ECu: goto label_17f2ec;
            case 0x17F2F0u: goto label_17f2f0;
            case 0x17F2F4u: goto label_17f2f4;
            case 0x17F2F8u: goto label_17f2f8;
            case 0x17F2FCu: goto label_17f2fc;
            case 0x17F300u: goto label_17f300;
            case 0x17F304u: goto label_17f304;
            case 0x17F308u: goto label_17f308;
            case 0x17F30Cu: goto label_17f30c;
            case 0x17F310u: goto label_17f310;
            case 0x17F314u: goto label_17f314;
            case 0x17F318u: goto label_17f318;
            case 0x17F31Cu: goto label_17f31c;
            case 0x17F320u: goto label_17f320;
            case 0x17F324u: goto label_17f324;
            case 0x17F328u: goto label_17f328;
            case 0x17F32Cu: goto label_17f32c;
            case 0x17F330u: goto label_17f330;
            case 0x17F334u: goto label_17f334;
            case 0x17F338u: goto label_17f338;
            case 0x17F33Cu: goto label_17f33c;
            case 0x17F340u: goto label_17f340;
            case 0x17F344u: goto label_17f344;
            case 0x17F348u: goto label_17f348;
            case 0x17F34Cu: goto label_17f34c;
            case 0x17F350u: goto label_17f350;
            case 0x17F354u: goto label_17f354;
            case 0x17F358u: goto label_17f358;
            case 0x17F35Cu: goto label_17f35c;
            case 0x17F360u: goto label_17f360;
            case 0x17F364u: goto label_17f364;
            case 0x17F368u: goto label_17f368;
            case 0x17F36Cu: goto label_17f36c;
            case 0x17F370u: goto label_17f370;
            case 0x17F374u: goto label_17f374;
            case 0x17F378u: goto label_17f378;
            case 0x17F37Cu: goto label_17f37c;
            case 0x17F380u: goto label_17f380;
            case 0x17F384u: goto label_17f384;
            case 0x17F388u: goto label_17f388;
            case 0x17F38Cu: goto label_17f38c;
            case 0x17F390u: goto label_17f390;
            case 0x17F394u: goto label_17f394;
            case 0x17F398u: goto label_17f398;
            case 0x17F39Cu: goto label_17f39c;
            case 0x17F3A0u: goto label_17f3a0;
            case 0x17F3A4u: goto label_17f3a4;
            case 0x17F3A8u: goto label_17f3a8;
            case 0x17F3ACu: goto label_17f3ac;
            case 0x17F3B0u: goto label_17f3b0;
            case 0x17F3B4u: goto label_17f3b4;
            case 0x17F3B8u: goto label_17f3b8;
            case 0x17F3BCu: goto label_17f3bc;
            case 0x17F3C0u: goto label_17f3c0;
            case 0x17F3C4u: goto label_17f3c4;
            case 0x17F3C8u: goto label_17f3c8;
            case 0x17F3CCu: goto label_17f3cc;
            case 0x17F3D0u: goto label_17f3d0;
            case 0x17F3D4u: goto label_17f3d4;
            case 0x17F3D8u: goto label_17f3d8;
            case 0x17F3DCu: goto label_17f3dc;
            case 0x17F3E0u: goto label_17f3e0;
            case 0x17F3E4u: goto label_17f3e4;
            case 0x17F3E8u: goto label_17f3e8;
            case 0x17F3ECu: goto label_17f3ec;
            case 0x17F3F0u: goto label_17f3f0;
            case 0x17F3F4u: goto label_17f3f4;
            case 0x17F3F8u: goto label_17f3f8;
            case 0x17F3FCu: goto label_17f3fc;
            case 0x17F400u: goto label_17f400;
            case 0x17F404u: goto label_17f404;
            case 0x17F408u: goto label_17f408;
            case 0x17F40Cu: goto label_17f40c;
            case 0x17F410u: goto label_17f410;
            case 0x17F414u: goto label_17f414;
            case 0x17F418u: goto label_17f418;
            case 0x17F41Cu: goto label_17f41c;
            case 0x17F420u: goto label_17f420;
            case 0x17F424u: goto label_17f424;
            case 0x17F428u: goto label_17f428;
            case 0x17F42Cu: goto label_17f42c;
            case 0x17F430u: goto label_17f430;
            case 0x17F434u: goto label_17f434;
            case 0x17F438u: goto label_17f438;
            case 0x17F43Cu: goto label_17f43c;
            case 0x17F440u: goto label_17f440;
            case 0x17F444u: goto label_17f444;
            case 0x17F448u: goto label_17f448;
            case 0x17F44Cu: goto label_17f44c;
            case 0x17F450u: goto label_17f450;
            case 0x17F454u: goto label_17f454;
            case 0x17F458u: goto label_17f458;
            case 0x17F45Cu: goto label_17f45c;
            case 0x17F460u: goto label_17f460;
            case 0x17F464u: goto label_17f464;
            case 0x17F468u: goto label_17f468;
            case 0x17F46Cu: goto label_17f46c;
            case 0x17F470u: goto label_17f470;
            case 0x17F474u: goto label_17f474;
            case 0x17F478u: goto label_17f478;
            case 0x17F47Cu: goto label_17f47c;
            case 0x17F480u: goto label_17f480;
            case 0x17F484u: goto label_17f484;
            case 0x17F488u: goto label_17f488;
            case 0x17F48Cu: goto label_17f48c;
            case 0x17F490u: goto label_17f490;
            case 0x17F494u: goto label_17f494;
            case 0x17F498u: goto label_17f498;
            case 0x17F49Cu: goto label_17f49c;
            case 0x17F4A0u: goto label_17f4a0;
            case 0x17F4A4u: goto label_17f4a4;
            case 0x17F4A8u: goto label_17f4a8;
            case 0x17F4ACu: goto label_17f4ac;
            case 0x17F4B0u: goto label_17f4b0;
            case 0x17F4B4u: goto label_17f4b4;
            case 0x17F4B8u: goto label_17f4b8;
            case 0x17F4BCu: goto label_17f4bc;
            case 0x17F4C0u: goto label_17f4c0;
            case 0x17F4C4u: goto label_17f4c4;
            case 0x17F4C8u: goto label_17f4c8;
            case 0x17F4CCu: goto label_17f4cc;
            case 0x17F4D0u: goto label_17f4d0;
            case 0x17F4D4u: goto label_17f4d4;
            case 0x17F4D8u: goto label_17f4d8;
            case 0x17F4DCu: goto label_17f4dc;
            case 0x17F4E0u: goto label_17f4e0;
            case 0x17F4E4u: goto label_17f4e4;
            case 0x17F4E8u: goto label_17f4e8;
            case 0x17F4ECu: goto label_17f4ec;
            case 0x17F4F0u: goto label_17f4f0;
            case 0x17F4F4u: goto label_17f4f4;
            case 0x17F4F8u: goto label_17f4f8;
            case 0x17F4FCu: goto label_17f4fc;
            case 0x17F500u: goto label_17f500;
            case 0x17F504u: goto label_17f504;
            case 0x17F508u: goto label_17f508;
            case 0x17F50Cu: goto label_17f50c;
            case 0x17F510u: goto label_17f510;
            case 0x17F514u: goto label_17f514;
            case 0x17F518u: goto label_17f518;
            case 0x17F51Cu: goto label_17f51c;
            case 0x17F520u: goto label_17f520;
            case 0x17F524u: goto label_17f524;
            case 0x17F528u: goto label_17f528;
            case 0x17F52Cu: goto label_17f52c;
            case 0x17F530u: goto label_17f530;
            case 0x17F534u: goto label_17f534;
            case 0x17F538u: goto label_17f538;
            case 0x17F53Cu: goto label_17f53c;
            case 0x17F540u: goto label_17f540;
            case 0x17F544u: goto label_17f544;
            case 0x17F548u: goto label_17f548;
            case 0x17F54Cu: goto label_17f54c;
            case 0x17F550u: goto label_17f550;
            case 0x17F554u: goto label_17f554;
            case 0x17F558u: goto label_17f558;
            case 0x17F55Cu: goto label_17f55c;
            case 0x17F560u: goto label_17f560;
            case 0x17F564u: goto label_17f564;
            case 0x17F568u: goto label_17f568;
            case 0x17F56Cu: goto label_17f56c;
            case 0x17F570u: goto label_17f570;
            case 0x17F574u: goto label_17f574;
            case 0x17F578u: goto label_17f578;
            case 0x17F57Cu: goto label_17f57c;
            case 0x17F580u: goto label_17f580;
            case 0x17F584u: goto label_17f584;
            case 0x17F588u: goto label_17f588;
            case 0x17F58Cu: goto label_17f58c;
            case 0x17F590u: goto label_17f590;
            case 0x17F594u: goto label_17f594;
            case 0x17F598u: goto label_17f598;
            case 0x17F59Cu: goto label_17f59c;
            case 0x17F5A0u: goto label_17f5a0;
            case 0x17F5A4u: goto label_17f5a4;
            case 0x17F5A8u: goto label_17f5a8;
            case 0x17F5ACu: goto label_17f5ac;
            case 0x17F5B0u: goto label_17f5b0;
            case 0x17F5B4u: goto label_17f5b4;
            case 0x17F5B8u: goto label_17f5b8;
            case 0x17F5BCu: goto label_17f5bc;
            case 0x17F5C0u: goto label_17f5c0;
            case 0x17F5C4u: goto label_17f5c4;
            case 0x17F5C8u: goto label_17f5c8;
            case 0x17F5CCu: goto label_17f5cc;
            case 0x17F5D0u: goto label_17f5d0;
            case 0x17F5D4u: goto label_17f5d4;
            case 0x17F5D8u: goto label_17f5d8;
            case 0x17F5DCu: goto label_17f5dc;
            case 0x17F5E0u: goto label_17f5e0;
            case 0x17F5E4u: goto label_17f5e4;
            case 0x17F5E8u: goto label_17f5e8;
            case 0x17F5ECu: goto label_17f5ec;
            case 0x17F5F0u: goto label_17f5f0;
            case 0x17F5F4u: goto label_17f5f4;
            case 0x17F5F8u: goto label_17f5f8;
            case 0x17F5FCu: goto label_17f5fc;
            case 0x17F600u: goto label_17f600;
            case 0x17F604u: goto label_17f604;
            case 0x17F608u: goto label_17f608;
            case 0x17F60Cu: goto label_17f60c;
            case 0x17F610u: goto label_17f610;
            case 0x17F614u: goto label_17f614;
            case 0x17F618u: goto label_17f618;
            case 0x17F61Cu: goto label_17f61c;
            case 0x17F620u: goto label_17f620;
            case 0x17F624u: goto label_17f624;
            case 0x17F628u: goto label_17f628;
            case 0x17F62Cu: goto label_17f62c;
            case 0x17F630u: goto label_17f630;
            case 0x17F634u: goto label_17f634;
            case 0x17F638u: goto label_17f638;
            case 0x17F63Cu: goto label_17f63c;
            case 0x17F640u: goto label_17f640;
            case 0x17F644u: goto label_17f644;
            case 0x17F648u: goto label_17f648;
            case 0x17F64Cu: goto label_17f64c;
            case 0x17F650u: goto label_17f650;
            case 0x17F654u: goto label_17f654;
            case 0x17F658u: goto label_17f658;
            case 0x17F65Cu: goto label_17f65c;
            case 0x17F660u: goto label_17f660;
            case 0x17F664u: goto label_17f664;
            case 0x17F668u: goto label_17f668;
            case 0x17F66Cu: goto label_17f66c;
            case 0x17F670u: goto label_17f670;
            case 0x17F674u: goto label_17f674;
            case 0x17F678u: goto label_17f678;
            case 0x17F67Cu: goto label_17f67c;
            case 0x17F680u: goto label_17f680;
            case 0x17F684u: goto label_17f684;
            case 0x17F688u: goto label_17f688;
            case 0x17F68Cu: goto label_17f68c;
            case 0x17F690u: goto label_17f690;
            case 0x17F694u: goto label_17f694;
            case 0x17F698u: goto label_17f698;
            case 0x17F69Cu: goto label_17f69c;
            case 0x17F6A0u: goto label_17f6a0;
            case 0x17F6A4u: goto label_17f6a4;
            case 0x17F6A8u: goto label_17f6a8;
            case 0x17F6ACu: goto label_17f6ac;
            case 0x17F6B0u: goto label_17f6b0;
            case 0x17F6B4u: goto label_17f6b4;
            case 0x17F6B8u: goto label_17f6b8;
            case 0x17F6BCu: goto label_17f6bc;
            case 0x17F6C0u: goto label_17f6c0;
            case 0x17F6C4u: goto label_17f6c4;
            case 0x17F6C8u: goto label_17f6c8;
            case 0x17F6CCu: goto label_17f6cc;
            case 0x17F6D0u: goto label_17f6d0;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6D8u: goto label_17f6d8;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F6E0u: goto label_17f6e0;
            case 0x17F6E4u: goto label_17f6e4;
            case 0x17F6E8u: goto label_17f6e8;
            case 0x17F6ECu: goto label_17f6ec;
            case 0x17F6F0u: goto label_17f6f0;
            case 0x17F6F4u: goto label_17f6f4;
            case 0x17F6F8u: goto label_17f6f8;
            case 0x17F6FCu: goto label_17f6fc;
            case 0x17F700u: goto label_17f700;
            case 0x17F704u: goto label_17f704;
            case 0x17F708u: goto label_17f708;
            case 0x17F70Cu: goto label_17f70c;
            case 0x17F710u: goto label_17f710;
            case 0x17F714u: goto label_17f714;
            case 0x17F718u: goto label_17f718;
            case 0x17F71Cu: goto label_17f71c;
            case 0x17F720u: goto label_17f720;
            case 0x17F724u: goto label_17f724;
            case 0x17F728u: goto label_17f728;
            case 0x17F72Cu: goto label_17f72c;
            case 0x17F730u: goto label_17f730;
            case 0x17F734u: goto label_17f734;
            case 0x17F738u: goto label_17f738;
            case 0x17F73Cu: goto label_17f73c;
            case 0x17F740u: goto label_17f740;
            case 0x17F744u: goto label_17f744;
            case 0x17F748u: goto label_17f748;
            case 0x17F74Cu: goto label_17f74c;
            case 0x17F750u: goto label_17f750;
            case 0x17F754u: goto label_17f754;
            case 0x17F758u: goto label_17f758;
            case 0x17F75Cu: goto label_17f75c;
            case 0x17F760u: goto label_17f760;
            case 0x17F764u: goto label_17f764;
            case 0x17F768u: goto label_17f768;
            case 0x17F76Cu: goto label_17f76c;
            case 0x17F770u: goto label_17f770;
            case 0x17F774u: goto label_17f774;
            case 0x17F778u: goto label_17f778;
            case 0x17F77Cu: goto label_17f77c;
            case 0x17F780u: goto label_17f780;
            case 0x17F784u: goto label_17f784;
            case 0x17F788u: goto label_17f788;
            case 0x17F78Cu: goto label_17f78c;
            case 0x17F790u: goto label_17f790;
            case 0x17F794u: goto label_17f794;
            case 0x17F798u: goto label_17f798;
            case 0x17F79Cu: goto label_17f79c;
            case 0x17F7A0u: goto label_17f7a0;
            case 0x17F7A4u: goto label_17f7a4;
            case 0x17F7A8u: goto label_17f7a8;
            case 0x17F7ACu: goto label_17f7ac;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F7B4u: goto label_17f7b4;
            case 0x17F7B8u: goto label_17f7b8;
            case 0x17F7BCu: goto label_17f7bc;
            case 0x17F7C0u: goto label_17f7c0;
            case 0x17F7C4u: goto label_17f7c4;
            case 0x17F7C8u: goto label_17f7c8;
            case 0x17F7CCu: goto label_17f7cc;
            case 0x17F7D0u: goto label_17f7d0;
            case 0x17F7D4u: goto label_17f7d4;
            case 0x17F7D8u: goto label_17f7d8;
            case 0x17F7DCu: goto label_17f7dc;
            case 0x17F7E0u: goto label_17f7e0;
            case 0x17F7E4u: goto label_17f7e4;
            case 0x17F7E8u: goto label_17f7e8;
            case 0x17F7ECu: goto label_17f7ec;
            case 0x17F7F0u: goto label_17f7f0;
            case 0x17F7F4u: goto label_17f7f4;
            case 0x17F7F8u: goto label_17f7f8;
            case 0x17F7FCu: goto label_17f7fc;
            case 0x17F800u: goto label_17f800;
            case 0x17F804u: goto label_17f804;
            case 0x17F808u: goto label_17f808;
            case 0x17F80Cu: goto label_17f80c;
            case 0x17F810u: goto label_17f810;
            case 0x17F814u: goto label_17f814;
            case 0x17F818u: goto label_17f818;
            case 0x17F81Cu: goto label_17f81c;
            case 0x17F820u: goto label_17f820;
            case 0x17F824u: goto label_17f824;
            case 0x17F828u: goto label_17f828;
            case 0x17F82Cu: goto label_17f82c;
            case 0x17F830u: goto label_17f830;
            case 0x17F834u: goto label_17f834;
            case 0x17F838u: goto label_17f838;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17F840u: goto label_17f840;
            case 0x17F844u: goto label_17f844;
            case 0x17F848u: goto label_17f848;
            case 0x17F84Cu: goto label_17f84c;
            case 0x17F850u: goto label_17f850;
            case 0x17F854u: goto label_17f854;
            case 0x17F858u: goto label_17f858;
            case 0x17F85Cu: goto label_17f85c;
            case 0x17F860u: goto label_17f860;
            case 0x17F864u: goto label_17f864;
            case 0x17F868u: goto label_17f868;
            case 0x17F86Cu: goto label_17f86c;
            case 0x17F870u: goto label_17f870;
            case 0x17F874u: goto label_17f874;
            case 0x17F878u: goto label_17f878;
            case 0x17F87Cu: goto label_17f87c;
            case 0x17F880u: goto label_17f880;
            case 0x17F884u: goto label_17f884;
            case 0x17F888u: goto label_17f888;
            case 0x17F88Cu: goto label_17f88c;
            case 0x17F890u: goto label_17f890;
            case 0x17F894u: goto label_17f894;
            case 0x17F898u: goto label_17f898;
            case 0x17F89Cu: goto label_17f89c;
            case 0x17F8A0u: goto label_17f8a0;
            case 0x17F8A4u: goto label_17f8a4;
            case 0x17F8A8u: goto label_17f8a8;
            case 0x17F8ACu: goto label_17f8ac;
            case 0x17F8B0u: goto label_17f8b0;
            case 0x17F8B4u: goto label_17f8b4;
            case 0x17F8B8u: goto label_17f8b8;
            case 0x17F8BCu: goto label_17f8bc;
            case 0x17F8C0u: goto label_17f8c0;
            case 0x17F8C4u: goto label_17f8c4;
            case 0x17F8C8u: goto label_17f8c8;
            case 0x17F8CCu: goto label_17f8cc;
            case 0x17F8D0u: goto label_17f8d0;
            case 0x17F8D4u: goto label_17f8d4;
            case 0x17F8D8u: goto label_17f8d8;
            case 0x17F8DCu: goto label_17f8dc;
            case 0x17F8E0u: goto label_17f8e0;
            case 0x17F8E4u: goto label_17f8e4;
            case 0x17F8E8u: goto label_17f8e8;
            case 0x17F8ECu: goto label_17f8ec;
            case 0x17F8F0u: goto label_17f8f0;
            case 0x17F8F4u: goto label_17f8f4;
            case 0x17F8F8u: goto label_17f8f8;
            case 0x17F8FCu: goto label_17f8fc;
            default: break;
        }
        return;
    }
label_fallthrough_0x17f8f8:
    ctx->pc = 0x17F900u;
}
