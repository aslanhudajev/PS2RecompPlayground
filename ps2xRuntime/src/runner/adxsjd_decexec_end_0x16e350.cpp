#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsjd_decexec_end
// Address: 0x16e350 - 0x16e538
void adxsjd_decexec_end_0x16e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsjd_decexec_end");


    ctx->pc = 0x16e350u;

label_16e350:
    // 0x16e350: 0x27bdff30
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_16e354:
    // 0x16e354: 0xffbe00b0
    ctx->pc = 0x16e354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_16e358:
    // 0x16e358: 0xffb700a0
    ctx->pc = 0x16e358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_16e35c:
    // 0x16e35c: 0xffb60090
    ctx->pc = 0x16e35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_16e360:
    // 0x16e360: 0xb82d
    ctx->pc = 0x16e360u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e364:
    // 0x16e364: 0xffb50080
    ctx->pc = 0x16e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_16e368:
    // 0x16e368: 0xffb40070
    ctx->pc = 0x16e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_16e36c:
    // 0x16e36c: 0xffb30060
    ctx->pc = 0x16e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_16e370:
    // 0x16e370: 0xffb20050
    ctx->pc = 0x16e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_16e374:
    // 0x16e374: 0xffb00030
    ctx->pc = 0x16e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_16e378:
    // 0x16e378: 0x80902d
    ctx->pc = 0x16e378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e37c:
    // 0x16e37c: 0xffbf00c0
    ctx->pc = 0x16e37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_16e380:
    // 0x16e380: 0x2654000c
    ctx->pc = 0x16e380u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 12));
label_16e384:
    // 0x16e384: 0xffb10040
    ctx->pc = 0x16e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_16e388:
    // 0x16e388: 0x2655001c
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 28));
label_16e38c:
    // 0x16e38c: 0x8e420004
    ctx->pc = 0x16e38cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16e390:
    // 0x16e390: 0xafa20020
    ctx->pc = 0x16e390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_16e394:
    // 0x16e394: 0x40202d
    ctx->pc = 0x16e394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e398:
    // 0x16e398: 0xc05a01e
label_16e39c:
    if (ctx->pc == 0x16E39Cu) {
        ctx->pc = 0x16E39Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x16E3A0u;
        goto label_16e3a0;
    }
    ctx->pc = 0x16E398u;
    SET_GPR_U32(ctx, 31, 0x16E3A0u);
    ctx->pc = 0x16E39Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x168078u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetTotalNumSmpl_0x168078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3A0u; }
        else if (ctx->pc != 0x16E3A0u) { ctx->pc = 0x16E3A0u; }
    }
    if (ctx->pc != 0x16E3A0u) { return; }
    ctx->pc = 0x16E3A0u;
label_16e3a0:
    // 0x16e3a0: 0x8fa40020
    ctx->pc = 0x16e3a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16e3a4:
    // 0x16e3a4: 0xc05a074
label_16e3a8:
    if (ctx->pc == 0x16E3A8u) {
        ctx->pc = 0x16E3A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E3ACu;
        goto label_16e3ac;
    }
    ctx->pc = 0x16E3A4u;
    SET_GPR_U32(ctx, 31, 0x16E3ACu);
    ctx->pc = 0x16E3A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1681D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetDecDtLen_0x1681d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3ACu; }
        else if (ctx->pc != 0x16E3ACu) { ctx->pc = 0x16E3ACu; }
    }
    if (ctx->pc != 0x16E3ACu) { return; }
    ctx->pc = 0x16E3ACu;
label_16e3ac:
    // 0x16e3ac: 0x8fa40020
    ctx->pc = 0x16e3acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16e3b0:
    // 0x16e3b0: 0xc05a076
label_16e3b4:
    if (ctx->pc == 0x16E3B4u) {
        ctx->pc = 0x16E3B4u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E3B8u;
        goto label_16e3b8;
    }
    ctx->pc = 0x16E3B0u;
    SET_GPR_U32(ctx, 31, 0x16E3B8u);
    ctx->pc = 0x16E3B4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1681D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetDecNumSmpl_0x1681d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3B8u; }
        else if (ctx->pc != 0x16E3B8u) { ctx->pc = 0x16E3B8u; }
    }
    if (ctx->pc != 0x16E3B8u) { return; }
    ctx->pc = 0x16E3B8u;
label_16e3b8:
    // 0x16e3b8: 0x8e430034
    ctx->pc = 0x16e3b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_16e3bc:
    // 0x16e3bc: 0x40982d
    ctx->pc = 0x16e3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e3c0:
    // 0x16e3c0: 0x27b60010
    ctx->pc = 0x16e3c0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 16));
label_16e3c4:
    // 0x16e3c4: 0x26440014
    ctx->pc = 0x16e3c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 20));
label_16e3c8:
    // 0x16e3c8: 0x2038023
    ctx->pc = 0x16e3c8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_16e3cc:
    // 0x16e3cc: 0x3c0282d
    ctx->pc = 0x16e3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16e3d0:
    // 0x16e3d0: 0x270102a
    ctx->pc = 0x16e3d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 16)));
label_16e3d4:
    // 0x16e3d4: 0x3a0302d
    ctx->pc = 0x16e3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16e3d8:
    // 0x16e3d8: 0x202980a
    ctx->pc = 0x16e3d8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 16));
label_16e3dc:
    // 0x16e3dc: 0xc05f4b0
label_16e3e0:
    if (ctx->pc == 0x16E3E0u) {
        ctx->pc = 0x16E3E0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E3E4u;
        goto label_16e3e4;
    }
    ctx->pc = 0x16E3DCu;
    SET_GPR_U32(ctx, 31, 0x16E3E4u);
    ctx->pc = 0x16E3E0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3E4u; }
        else if (ctx->pc != 0x16E3E4u) { ctx->pc = 0x16E3E4u; }
    }
    if (ctx->pc != 0x16E3E4u) { return; }
    ctx->pc = 0x16E3E4u;
label_16e3e4:
    // 0x16e3e4: 0x8e230000
    ctx->pc = 0x16e3e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e3e8:
    // 0x16e3e8: 0x220202d
    ctx->pc = 0x16e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e3ec:
    // 0x16e3ec: 0x282d
    ctx->pc = 0x16e3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e3f0:
    // 0x16e3f0: 0x8c620020
    ctx->pc = 0x16e3f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16e3f4:
    // 0x16e3f4: 0x40f809
label_16e3f8:
    if (ctx->pc == 0x16E3F8u) {
        ctx->pc = 0x16E3F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E3FCu;
        goto label_16e3fc;
    }
    ctx->pc = 0x16E3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E3FCu);
        ctx->pc = 0x16E3F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E350u: goto label_16e350;
            case 0x16E354u: goto label_16e354;
            case 0x16E358u: goto label_16e358;
            case 0x16E35Cu: goto label_16e35c;
            case 0x16E360u: goto label_16e360;
            case 0x16E364u: goto label_16e364;
            case 0x16E368u: goto label_16e368;
            case 0x16E36Cu: goto label_16e36c;
            case 0x16E370u: goto label_16e370;
            case 0x16E374u: goto label_16e374;
            case 0x16E378u: goto label_16e378;
            case 0x16E37Cu: goto label_16e37c;
            case 0x16E380u: goto label_16e380;
            case 0x16E384u: goto label_16e384;
            case 0x16E388u: goto label_16e388;
            case 0x16E38Cu: goto label_16e38c;
            case 0x16E390u: goto label_16e390;
            case 0x16E394u: goto label_16e394;
            case 0x16E398u: goto label_16e398;
            case 0x16E39Cu: goto label_16e39c;
            case 0x16E3A0u: goto label_16e3a0;
            case 0x16E3A4u: goto label_16e3a4;
            case 0x16E3A8u: goto label_16e3a8;
            case 0x16E3ACu: goto label_16e3ac;
            case 0x16E3B0u: goto label_16e3b0;
            case 0x16E3B4u: goto label_16e3b4;
            case 0x16E3B8u: goto label_16e3b8;
            case 0x16E3BCu: goto label_16e3bc;
            case 0x16E3C0u: goto label_16e3c0;
            case 0x16E3C4u: goto label_16e3c4;
            case 0x16E3C8u: goto label_16e3c8;
            case 0x16E3CCu: goto label_16e3cc;
            case 0x16E3D0u: goto label_16e3d0;
            case 0x16E3D4u: goto label_16e3d4;
            case 0x16E3D8u: goto label_16e3d8;
            case 0x16E3DCu: goto label_16e3dc;
            case 0x16E3E0u: goto label_16e3e0;
            case 0x16E3E4u: goto label_16e3e4;
            case 0x16E3E8u: goto label_16e3e8;
            case 0x16E3ECu: goto label_16e3ec;
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E3F8u: goto label_16e3f8;
            case 0x16E3FCu: goto label_16e3fc;
            case 0x16E400u: goto label_16e400;
            case 0x16E404u: goto label_16e404;
            case 0x16E408u: goto label_16e408;
            case 0x16E40Cu: goto label_16e40c;
            case 0x16E410u: goto label_16e410;
            case 0x16E414u: goto label_16e414;
            case 0x16E418u: goto label_16e418;
            case 0x16E41Cu: goto label_16e41c;
            case 0x16E420u: goto label_16e420;
            case 0x16E424u: goto label_16e424;
            case 0x16E428u: goto label_16e428;
            case 0x16E42Cu: goto label_16e42c;
            case 0x16E430u: goto label_16e430;
            case 0x16E434u: goto label_16e434;
            case 0x16E438u: goto label_16e438;
            case 0x16E43Cu: goto label_16e43c;
            case 0x16E440u: goto label_16e440;
            case 0x16E444u: goto label_16e444;
            case 0x16E448u: goto label_16e448;
            case 0x16E44Cu: goto label_16e44c;
            case 0x16E450u: goto label_16e450;
            case 0x16E454u: goto label_16e454;
            case 0x16E458u: goto label_16e458;
            case 0x16E45Cu: goto label_16e45c;
            case 0x16E460u: goto label_16e460;
            case 0x16E464u: goto label_16e464;
            case 0x16E468u: goto label_16e468;
            case 0x16E46Cu: goto label_16e46c;
            case 0x16E470u: goto label_16e470;
            case 0x16E474u: goto label_16e474;
            case 0x16E478u: goto label_16e478;
            case 0x16E47Cu: goto label_16e47c;
            case 0x16E480u: goto label_16e480;
            case 0x16E484u: goto label_16e484;
            case 0x16E488u: goto label_16e488;
            case 0x16E48Cu: goto label_16e48c;
            case 0x16E490u: goto label_16e490;
            case 0x16E494u: goto label_16e494;
            case 0x16E498u: goto label_16e498;
            case 0x16E49Cu: goto label_16e49c;
            case 0x16E4A0u: goto label_16e4a0;
            case 0x16E4A4u: goto label_16e4a4;
            case 0x16E4A8u: goto label_16e4a8;
            case 0x16E4ACu: goto label_16e4ac;
            case 0x16E4B0u: goto label_16e4b0;
            case 0x16E4B4u: goto label_16e4b4;
            case 0x16E4B8u: goto label_16e4b8;
            case 0x16E4BCu: goto label_16e4bc;
            case 0x16E4C0u: goto label_16e4c0;
            case 0x16E4C4u: goto label_16e4c4;
            case 0x16E4C8u: goto label_16e4c8;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E4D0u: goto label_16e4d0;
            case 0x16E4D4u: goto label_16e4d4;
            case 0x16E4D8u: goto label_16e4d8;
            case 0x16E4DCu: goto label_16e4dc;
            case 0x16E4E0u: goto label_16e4e0;
            case 0x16E4E4u: goto label_16e4e4;
            case 0x16E4E8u: goto label_16e4e8;
            case 0x16E4ECu: goto label_16e4ec;
            case 0x16E4F0u: goto label_16e4f0;
            case 0x16E4F4u: goto label_16e4f4;
            case 0x16E4F8u: goto label_16e4f8;
            case 0x16E4FCu: goto label_16e4fc;
            case 0x16E500u: goto label_16e500;
            case 0x16E504u: goto label_16e504;
            case 0x16E508u: goto label_16e508;
            case 0x16E50Cu: goto label_16e50c;
            case 0x16E510u: goto label_16e510;
            case 0x16E514u: goto label_16e514;
            case 0x16E518u: goto label_16e518;
            case 0x16E51Cu: goto label_16e51c;
            case 0x16E520u: goto label_16e520;
            case 0x16E524u: goto label_16e524;
            case 0x16E528u: goto label_16e528;
            case 0x16E52Cu: goto label_16e52c;
            case 0x16E530u: goto label_16e530;
            case 0x16E534u: goto label_16e534;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E3FCu; }
            if (ctx->pc != 0x16E3FCu) { return; }
        }
    }
    ctx->pc = 0x16E3FCu;
label_16e3fc:
    // 0x16e3fc: 0x8e230000
    ctx->pc = 0x16e3fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e400:
    // 0x16e400: 0x220202d
    ctx->pc = 0x16e400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e404:
    // 0x16e404: 0x24050001
    ctx->pc = 0x16e404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16e408:
    // 0x16e408: 0x8c62001c
    ctx->pc = 0x16e408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16e40c:
    // 0x16e40c: 0x40f809
label_16e410:
    if (ctx->pc == 0x16E410u) {
        ctx->pc = 0x16E410u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E414u;
        goto label_16e414;
    }
    ctx->pc = 0x16E40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E414u);
        ctx->pc = 0x16E410u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E350u: goto label_16e350;
            case 0x16E354u: goto label_16e354;
            case 0x16E358u: goto label_16e358;
            case 0x16E35Cu: goto label_16e35c;
            case 0x16E360u: goto label_16e360;
            case 0x16E364u: goto label_16e364;
            case 0x16E368u: goto label_16e368;
            case 0x16E36Cu: goto label_16e36c;
            case 0x16E370u: goto label_16e370;
            case 0x16E374u: goto label_16e374;
            case 0x16E378u: goto label_16e378;
            case 0x16E37Cu: goto label_16e37c;
            case 0x16E380u: goto label_16e380;
            case 0x16E384u: goto label_16e384;
            case 0x16E388u: goto label_16e388;
            case 0x16E38Cu: goto label_16e38c;
            case 0x16E390u: goto label_16e390;
            case 0x16E394u: goto label_16e394;
            case 0x16E398u: goto label_16e398;
            case 0x16E39Cu: goto label_16e39c;
            case 0x16E3A0u: goto label_16e3a0;
            case 0x16E3A4u: goto label_16e3a4;
            case 0x16E3A8u: goto label_16e3a8;
            case 0x16E3ACu: goto label_16e3ac;
            case 0x16E3B0u: goto label_16e3b0;
            case 0x16E3B4u: goto label_16e3b4;
            case 0x16E3B8u: goto label_16e3b8;
            case 0x16E3BCu: goto label_16e3bc;
            case 0x16E3C0u: goto label_16e3c0;
            case 0x16E3C4u: goto label_16e3c4;
            case 0x16E3C8u: goto label_16e3c8;
            case 0x16E3CCu: goto label_16e3cc;
            case 0x16E3D0u: goto label_16e3d0;
            case 0x16E3D4u: goto label_16e3d4;
            case 0x16E3D8u: goto label_16e3d8;
            case 0x16E3DCu: goto label_16e3dc;
            case 0x16E3E0u: goto label_16e3e0;
            case 0x16E3E4u: goto label_16e3e4;
            case 0x16E3E8u: goto label_16e3e8;
            case 0x16E3ECu: goto label_16e3ec;
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E3F8u: goto label_16e3f8;
            case 0x16E3FCu: goto label_16e3fc;
            case 0x16E400u: goto label_16e400;
            case 0x16E404u: goto label_16e404;
            case 0x16E408u: goto label_16e408;
            case 0x16E40Cu: goto label_16e40c;
            case 0x16E410u: goto label_16e410;
            case 0x16E414u: goto label_16e414;
            case 0x16E418u: goto label_16e418;
            case 0x16E41Cu: goto label_16e41c;
            case 0x16E420u: goto label_16e420;
            case 0x16E424u: goto label_16e424;
            case 0x16E428u: goto label_16e428;
            case 0x16E42Cu: goto label_16e42c;
            case 0x16E430u: goto label_16e430;
            case 0x16E434u: goto label_16e434;
            case 0x16E438u: goto label_16e438;
            case 0x16E43Cu: goto label_16e43c;
            case 0x16E440u: goto label_16e440;
            case 0x16E444u: goto label_16e444;
            case 0x16E448u: goto label_16e448;
            case 0x16E44Cu: goto label_16e44c;
            case 0x16E450u: goto label_16e450;
            case 0x16E454u: goto label_16e454;
            case 0x16E458u: goto label_16e458;
            case 0x16E45Cu: goto label_16e45c;
            case 0x16E460u: goto label_16e460;
            case 0x16E464u: goto label_16e464;
            case 0x16E468u: goto label_16e468;
            case 0x16E46Cu: goto label_16e46c;
            case 0x16E470u: goto label_16e470;
            case 0x16E474u: goto label_16e474;
            case 0x16E478u: goto label_16e478;
            case 0x16E47Cu: goto label_16e47c;
            case 0x16E480u: goto label_16e480;
            case 0x16E484u: goto label_16e484;
            case 0x16E488u: goto label_16e488;
            case 0x16E48Cu: goto label_16e48c;
            case 0x16E490u: goto label_16e490;
            case 0x16E494u: goto label_16e494;
            case 0x16E498u: goto label_16e498;
            case 0x16E49Cu: goto label_16e49c;
            case 0x16E4A0u: goto label_16e4a0;
            case 0x16E4A4u: goto label_16e4a4;
            case 0x16E4A8u: goto label_16e4a8;
            case 0x16E4ACu: goto label_16e4ac;
            case 0x16E4B0u: goto label_16e4b0;
            case 0x16E4B4u: goto label_16e4b4;
            case 0x16E4B8u: goto label_16e4b8;
            case 0x16E4BCu: goto label_16e4bc;
            case 0x16E4C0u: goto label_16e4c0;
            case 0x16E4C4u: goto label_16e4c4;
            case 0x16E4C8u: goto label_16e4c8;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E4D0u: goto label_16e4d0;
            case 0x16E4D4u: goto label_16e4d4;
            case 0x16E4D8u: goto label_16e4d8;
            case 0x16E4DCu: goto label_16e4dc;
            case 0x16E4E0u: goto label_16e4e0;
            case 0x16E4E4u: goto label_16e4e4;
            case 0x16E4E8u: goto label_16e4e8;
            case 0x16E4ECu: goto label_16e4ec;
            case 0x16E4F0u: goto label_16e4f0;
            case 0x16E4F4u: goto label_16e4f4;
            case 0x16E4F8u: goto label_16e4f8;
            case 0x16E4FCu: goto label_16e4fc;
            case 0x16E500u: goto label_16e500;
            case 0x16E504u: goto label_16e504;
            case 0x16E508u: goto label_16e508;
            case 0x16E50Cu: goto label_16e50c;
            case 0x16E510u: goto label_16e510;
            case 0x16E514u: goto label_16e514;
            case 0x16E518u: goto label_16e518;
            case 0x16E51Cu: goto label_16e51c;
            case 0x16E520u: goto label_16e520;
            case 0x16E524u: goto label_16e524;
            case 0x16E528u: goto label_16e528;
            case 0x16E52Cu: goto label_16e52c;
            case 0x16E530u: goto label_16e530;
            case 0x16E534u: goto label_16e534;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E414u; }
            if (ctx->pc != 0x16E414u) { return; }
        }
    }
    ctx->pc = 0x16E414u;
label_16e414:
    // 0x16e414: 0x1000001c
label_16e418:
    if (ctx->pc == 0x16E418u) {
        ctx->pc = 0x16E41Cu;
        goto label_16e41c;
    }
    ctx->pc = 0x16E414u;
    {
        const bool branch_taken_0x16e414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e414) {
            ctx->pc = 0x16E488u;
            goto label_16e488;
        }
    }
    ctx->pc = 0x16E41Cu;
label_16e41c:
    // 0x16e41c: 0x0
    ctx->pc = 0x16e41cu;
    // NOP
label_16e420:
    // 0x16e420: 0x132840
    ctx->pc = 0x16e420u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 1));
label_16e424:
    // 0x16e424: 0x3a0302d
    ctx->pc = 0x16e424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16e428:
    // 0x16e428: 0xc05f4b0
label_16e42c:
    if (ctx->pc == 0x16E42Cu) {
        ctx->pc = 0x16E42Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16E430u;
        goto label_16e430;
    }
    ctx->pc = 0x16E428u;
    SET_GPR_U32(ctx, 31, 0x16E430u);
    ctx->pc = 0x16E42Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E430u; }
        else if (ctx->pc != 0x16E430u) { ctx->pc = 0x16E430u; }
    }
    if (ctx->pc != 0x16E430u) { return; }
    ctx->pc = 0x16E430u;
label_16e430:
    // 0x16e430: 0x8e420050
    ctx->pc = 0x16e430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_16e434:
    // 0x16e434: 0x10400005
label_16e438:
    if (ctx->pc == 0x16E438u) {
        ctx->pc = 0x16E438u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E43Cu;
        goto label_16e43c;
    }
    ctx->pc = 0x16E434u;
    {
        const bool branch_taken_0x16e434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E438u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e434) {
            ctx->pc = 0x16E44Cu;
            goto label_16e44c;
        }
    }
    ctx->pc = 0x16E43Cu;
label_16e43c:
    // 0x16e43c: 0x8e440054
    ctx->pc = 0x16e43cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_16e440:
    // 0x16e440: 0x8fa60000
    ctx->pc = 0x16e440u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16e444:
    // 0x16e444: 0x40f809
label_16e448:
    if (ctx->pc == 0x16E448u) {
        ctx->pc = 0x16E448u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x16E44Cu;
        goto label_16e44c;
    }
    ctx->pc = 0x16E444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E44Cu);
        ctx->pc = 0x16E448u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E350u: goto label_16e350;
            case 0x16E354u: goto label_16e354;
            case 0x16E358u: goto label_16e358;
            case 0x16E35Cu: goto label_16e35c;
            case 0x16E360u: goto label_16e360;
            case 0x16E364u: goto label_16e364;
            case 0x16E368u: goto label_16e368;
            case 0x16E36Cu: goto label_16e36c;
            case 0x16E370u: goto label_16e370;
            case 0x16E374u: goto label_16e374;
            case 0x16E378u: goto label_16e378;
            case 0x16E37Cu: goto label_16e37c;
            case 0x16E380u: goto label_16e380;
            case 0x16E384u: goto label_16e384;
            case 0x16E388u: goto label_16e388;
            case 0x16E38Cu: goto label_16e38c;
            case 0x16E390u: goto label_16e390;
            case 0x16E394u: goto label_16e394;
            case 0x16E398u: goto label_16e398;
            case 0x16E39Cu: goto label_16e39c;
            case 0x16E3A0u: goto label_16e3a0;
            case 0x16E3A4u: goto label_16e3a4;
            case 0x16E3A8u: goto label_16e3a8;
            case 0x16E3ACu: goto label_16e3ac;
            case 0x16E3B0u: goto label_16e3b0;
            case 0x16E3B4u: goto label_16e3b4;
            case 0x16E3B8u: goto label_16e3b8;
            case 0x16E3BCu: goto label_16e3bc;
            case 0x16E3C0u: goto label_16e3c0;
            case 0x16E3C4u: goto label_16e3c4;
            case 0x16E3C8u: goto label_16e3c8;
            case 0x16E3CCu: goto label_16e3cc;
            case 0x16E3D0u: goto label_16e3d0;
            case 0x16E3D4u: goto label_16e3d4;
            case 0x16E3D8u: goto label_16e3d8;
            case 0x16E3DCu: goto label_16e3dc;
            case 0x16E3E0u: goto label_16e3e0;
            case 0x16E3E4u: goto label_16e3e4;
            case 0x16E3E8u: goto label_16e3e8;
            case 0x16E3ECu: goto label_16e3ec;
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E3F8u: goto label_16e3f8;
            case 0x16E3FCu: goto label_16e3fc;
            case 0x16E400u: goto label_16e400;
            case 0x16E404u: goto label_16e404;
            case 0x16E408u: goto label_16e408;
            case 0x16E40Cu: goto label_16e40c;
            case 0x16E410u: goto label_16e410;
            case 0x16E414u: goto label_16e414;
            case 0x16E418u: goto label_16e418;
            case 0x16E41Cu: goto label_16e41c;
            case 0x16E420u: goto label_16e420;
            case 0x16E424u: goto label_16e424;
            case 0x16E428u: goto label_16e428;
            case 0x16E42Cu: goto label_16e42c;
            case 0x16E430u: goto label_16e430;
            case 0x16E434u: goto label_16e434;
            case 0x16E438u: goto label_16e438;
            case 0x16E43Cu: goto label_16e43c;
            case 0x16E440u: goto label_16e440;
            case 0x16E444u: goto label_16e444;
            case 0x16E448u: goto label_16e448;
            case 0x16E44Cu: goto label_16e44c;
            case 0x16E450u: goto label_16e450;
            case 0x16E454u: goto label_16e454;
            case 0x16E458u: goto label_16e458;
            case 0x16E45Cu: goto label_16e45c;
            case 0x16E460u: goto label_16e460;
            case 0x16E464u: goto label_16e464;
            case 0x16E468u: goto label_16e468;
            case 0x16E46Cu: goto label_16e46c;
            case 0x16E470u: goto label_16e470;
            case 0x16E474u: goto label_16e474;
            case 0x16E478u: goto label_16e478;
            case 0x16E47Cu: goto label_16e47c;
            case 0x16E480u: goto label_16e480;
            case 0x16E484u: goto label_16e484;
            case 0x16E488u: goto label_16e488;
            case 0x16E48Cu: goto label_16e48c;
            case 0x16E490u: goto label_16e490;
            case 0x16E494u: goto label_16e494;
            case 0x16E498u: goto label_16e498;
            case 0x16E49Cu: goto label_16e49c;
            case 0x16E4A0u: goto label_16e4a0;
            case 0x16E4A4u: goto label_16e4a4;
            case 0x16E4A8u: goto label_16e4a8;
            case 0x16E4ACu: goto label_16e4ac;
            case 0x16E4B0u: goto label_16e4b0;
            case 0x16E4B4u: goto label_16e4b4;
            case 0x16E4B8u: goto label_16e4b8;
            case 0x16E4BCu: goto label_16e4bc;
            case 0x16E4C0u: goto label_16e4c0;
            case 0x16E4C4u: goto label_16e4c4;
            case 0x16E4C8u: goto label_16e4c8;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E4D0u: goto label_16e4d0;
            case 0x16E4D4u: goto label_16e4d4;
            case 0x16E4D8u: goto label_16e4d8;
            case 0x16E4DCu: goto label_16e4dc;
            case 0x16E4E0u: goto label_16e4e0;
            case 0x16E4E4u: goto label_16e4e4;
            case 0x16E4E8u: goto label_16e4e8;
            case 0x16E4ECu: goto label_16e4ec;
            case 0x16E4F0u: goto label_16e4f0;
            case 0x16E4F4u: goto label_16e4f4;
            case 0x16E4F8u: goto label_16e4f8;
            case 0x16E4FCu: goto label_16e4fc;
            case 0x16E500u: goto label_16e500;
            case 0x16E504u: goto label_16e504;
            case 0x16E508u: goto label_16e508;
            case 0x16E50Cu: goto label_16e50c;
            case 0x16E510u: goto label_16e510;
            case 0x16E514u: goto label_16e514;
            case 0x16E518u: goto label_16e518;
            case 0x16E51Cu: goto label_16e51c;
            case 0x16E520u: goto label_16e520;
            case 0x16E524u: goto label_16e524;
            case 0x16E528u: goto label_16e528;
            case 0x16E52Cu: goto label_16e52c;
            case 0x16E530u: goto label_16e530;
            case 0x16E534u: goto label_16e534;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E44Cu; }
            if (ctx->pc != 0x16E44Cu) { return; }
        }
    }
    ctx->pc = 0x16E44Cu;
label_16e44c:
    // 0x16e44c: 0x8e840000
    ctx->pc = 0x16e44cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16e450:
    // 0x16e450: 0x24050001
    ctx->pc = 0x16e450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16e454:
    // 0x16e454: 0x3a0302d
    ctx->pc = 0x16e454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16e458:
    // 0x16e458: 0x26b50008
    ctx->pc = 0x16e458u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 8));
label_16e45c:
    // 0x16e45c: 0x8c830000
    ctx->pc = 0x16e45cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e460:
    // 0x16e460: 0x8c620020
    ctx->pc = 0x16e460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16e464:
    // 0x16e464: 0x40f809
label_16e468:
    if (ctx->pc == 0x16E468u) {
        ctx->pc = 0x16E468u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x16E46Cu;
        goto label_16e46c;
    }
    ctx->pc = 0x16E464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E46Cu);
        ctx->pc = 0x16E468u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E350u: goto label_16e350;
            case 0x16E354u: goto label_16e354;
            case 0x16E358u: goto label_16e358;
            case 0x16E35Cu: goto label_16e35c;
            case 0x16E360u: goto label_16e360;
            case 0x16E364u: goto label_16e364;
            case 0x16E368u: goto label_16e368;
            case 0x16E36Cu: goto label_16e36c;
            case 0x16E370u: goto label_16e370;
            case 0x16E374u: goto label_16e374;
            case 0x16E378u: goto label_16e378;
            case 0x16E37Cu: goto label_16e37c;
            case 0x16E380u: goto label_16e380;
            case 0x16E384u: goto label_16e384;
            case 0x16E388u: goto label_16e388;
            case 0x16E38Cu: goto label_16e38c;
            case 0x16E390u: goto label_16e390;
            case 0x16E394u: goto label_16e394;
            case 0x16E398u: goto label_16e398;
            case 0x16E39Cu: goto label_16e39c;
            case 0x16E3A0u: goto label_16e3a0;
            case 0x16E3A4u: goto label_16e3a4;
            case 0x16E3A8u: goto label_16e3a8;
            case 0x16E3ACu: goto label_16e3ac;
            case 0x16E3B0u: goto label_16e3b0;
            case 0x16E3B4u: goto label_16e3b4;
            case 0x16E3B8u: goto label_16e3b8;
            case 0x16E3BCu: goto label_16e3bc;
            case 0x16E3C0u: goto label_16e3c0;
            case 0x16E3C4u: goto label_16e3c4;
            case 0x16E3C8u: goto label_16e3c8;
            case 0x16E3CCu: goto label_16e3cc;
            case 0x16E3D0u: goto label_16e3d0;
            case 0x16E3D4u: goto label_16e3d4;
            case 0x16E3D8u: goto label_16e3d8;
            case 0x16E3DCu: goto label_16e3dc;
            case 0x16E3E0u: goto label_16e3e0;
            case 0x16E3E4u: goto label_16e3e4;
            case 0x16E3E8u: goto label_16e3e8;
            case 0x16E3ECu: goto label_16e3ec;
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E3F8u: goto label_16e3f8;
            case 0x16E3FCu: goto label_16e3fc;
            case 0x16E400u: goto label_16e400;
            case 0x16E404u: goto label_16e404;
            case 0x16E408u: goto label_16e408;
            case 0x16E40Cu: goto label_16e40c;
            case 0x16E410u: goto label_16e410;
            case 0x16E414u: goto label_16e414;
            case 0x16E418u: goto label_16e418;
            case 0x16E41Cu: goto label_16e41c;
            case 0x16E420u: goto label_16e420;
            case 0x16E424u: goto label_16e424;
            case 0x16E428u: goto label_16e428;
            case 0x16E42Cu: goto label_16e42c;
            case 0x16E430u: goto label_16e430;
            case 0x16E434u: goto label_16e434;
            case 0x16E438u: goto label_16e438;
            case 0x16E43Cu: goto label_16e43c;
            case 0x16E440u: goto label_16e440;
            case 0x16E444u: goto label_16e444;
            case 0x16E448u: goto label_16e448;
            case 0x16E44Cu: goto label_16e44c;
            case 0x16E450u: goto label_16e450;
            case 0x16E454u: goto label_16e454;
            case 0x16E458u: goto label_16e458;
            case 0x16E45Cu: goto label_16e45c;
            case 0x16E460u: goto label_16e460;
            case 0x16E464u: goto label_16e464;
            case 0x16E468u: goto label_16e468;
            case 0x16E46Cu: goto label_16e46c;
            case 0x16E470u: goto label_16e470;
            case 0x16E474u: goto label_16e474;
            case 0x16E478u: goto label_16e478;
            case 0x16E47Cu: goto label_16e47c;
            case 0x16E480u: goto label_16e480;
            case 0x16E484u: goto label_16e484;
            case 0x16E488u: goto label_16e488;
            case 0x16E48Cu: goto label_16e48c;
            case 0x16E490u: goto label_16e490;
            case 0x16E494u: goto label_16e494;
            case 0x16E498u: goto label_16e498;
            case 0x16E49Cu: goto label_16e49c;
            case 0x16E4A0u: goto label_16e4a0;
            case 0x16E4A4u: goto label_16e4a4;
            case 0x16E4A8u: goto label_16e4a8;
            case 0x16E4ACu: goto label_16e4ac;
            case 0x16E4B0u: goto label_16e4b0;
            case 0x16E4B4u: goto label_16e4b4;
            case 0x16E4B8u: goto label_16e4b8;
            case 0x16E4BCu: goto label_16e4bc;
            case 0x16E4C0u: goto label_16e4c0;
            case 0x16E4C4u: goto label_16e4c4;
            case 0x16E4C8u: goto label_16e4c8;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E4D0u: goto label_16e4d0;
            case 0x16E4D4u: goto label_16e4d4;
            case 0x16E4D8u: goto label_16e4d8;
            case 0x16E4DCu: goto label_16e4dc;
            case 0x16E4E0u: goto label_16e4e0;
            case 0x16E4E4u: goto label_16e4e4;
            case 0x16E4E8u: goto label_16e4e8;
            case 0x16E4ECu: goto label_16e4ec;
            case 0x16E4F0u: goto label_16e4f0;
            case 0x16E4F4u: goto label_16e4f4;
            case 0x16E4F8u: goto label_16e4f8;
            case 0x16E4FCu: goto label_16e4fc;
            case 0x16E500u: goto label_16e500;
            case 0x16E504u: goto label_16e504;
            case 0x16E508u: goto label_16e508;
            case 0x16E50Cu: goto label_16e50c;
            case 0x16E510u: goto label_16e510;
            case 0x16E514u: goto label_16e514;
            case 0x16E518u: goto label_16e518;
            case 0x16E51Cu: goto label_16e51c;
            case 0x16E520u: goto label_16e520;
            case 0x16E524u: goto label_16e524;
            case 0x16E528u: goto label_16e528;
            case 0x16E52Cu: goto label_16e52c;
            case 0x16E530u: goto label_16e530;
            case 0x16E534u: goto label_16e534;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E46Cu; }
            if (ctx->pc != 0x16E46Cu) { return; }
        }
    }
    ctx->pc = 0x16E46Cu;
label_16e46c:
    // 0x16e46c: 0x8e840000
    ctx->pc = 0x16e46cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16e470:
    // 0x16e470: 0x282d
    ctx->pc = 0x16e470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e474:
    // 0x16e474: 0x2c0302d
    ctx->pc = 0x16e474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16e478:
    // 0x16e478: 0x8c830000
    ctx->pc = 0x16e478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e47c:
    // 0x16e47c: 0x8c62001c
    ctx->pc = 0x16e47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16e480:
    // 0x16e480: 0x40f809
label_16e484:
    if (ctx->pc == 0x16E484u) {
        ctx->pc = 0x16E484u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x16E488u;
        goto label_16e488;
    }
    ctx->pc = 0x16E480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E488u);
        ctx->pc = 0x16E484u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E350u: goto label_16e350;
            case 0x16E354u: goto label_16e354;
            case 0x16E358u: goto label_16e358;
            case 0x16E35Cu: goto label_16e35c;
            case 0x16E360u: goto label_16e360;
            case 0x16E364u: goto label_16e364;
            case 0x16E368u: goto label_16e368;
            case 0x16E36Cu: goto label_16e36c;
            case 0x16E370u: goto label_16e370;
            case 0x16E374u: goto label_16e374;
            case 0x16E378u: goto label_16e378;
            case 0x16E37Cu: goto label_16e37c;
            case 0x16E380u: goto label_16e380;
            case 0x16E384u: goto label_16e384;
            case 0x16E388u: goto label_16e388;
            case 0x16E38Cu: goto label_16e38c;
            case 0x16E390u: goto label_16e390;
            case 0x16E394u: goto label_16e394;
            case 0x16E398u: goto label_16e398;
            case 0x16E39Cu: goto label_16e39c;
            case 0x16E3A0u: goto label_16e3a0;
            case 0x16E3A4u: goto label_16e3a4;
            case 0x16E3A8u: goto label_16e3a8;
            case 0x16E3ACu: goto label_16e3ac;
            case 0x16E3B0u: goto label_16e3b0;
            case 0x16E3B4u: goto label_16e3b4;
            case 0x16E3B8u: goto label_16e3b8;
            case 0x16E3BCu: goto label_16e3bc;
            case 0x16E3C0u: goto label_16e3c0;
            case 0x16E3C4u: goto label_16e3c4;
            case 0x16E3C8u: goto label_16e3c8;
            case 0x16E3CCu: goto label_16e3cc;
            case 0x16E3D0u: goto label_16e3d0;
            case 0x16E3D4u: goto label_16e3d4;
            case 0x16E3D8u: goto label_16e3d8;
            case 0x16E3DCu: goto label_16e3dc;
            case 0x16E3E0u: goto label_16e3e0;
            case 0x16E3E4u: goto label_16e3e4;
            case 0x16E3E8u: goto label_16e3e8;
            case 0x16E3ECu: goto label_16e3ec;
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E3F8u: goto label_16e3f8;
            case 0x16E3FCu: goto label_16e3fc;
            case 0x16E400u: goto label_16e400;
            case 0x16E404u: goto label_16e404;
            case 0x16E408u: goto label_16e408;
            case 0x16E40Cu: goto label_16e40c;
            case 0x16E410u: goto label_16e410;
            case 0x16E414u: goto label_16e414;
            case 0x16E418u: goto label_16e418;
            case 0x16E41Cu: goto label_16e41c;
            case 0x16E420u: goto label_16e420;
            case 0x16E424u: goto label_16e424;
            case 0x16E428u: goto label_16e428;
            case 0x16E42Cu: goto label_16e42c;
            case 0x16E430u: goto label_16e430;
            case 0x16E434u: goto label_16e434;
            case 0x16E438u: goto label_16e438;
            case 0x16E43Cu: goto label_16e43c;
            case 0x16E440u: goto label_16e440;
            case 0x16E444u: goto label_16e444;
            case 0x16E448u: goto label_16e448;
            case 0x16E44Cu: goto label_16e44c;
            case 0x16E450u: goto label_16e450;
            case 0x16E454u: goto label_16e454;
            case 0x16E458u: goto label_16e458;
            case 0x16E45Cu: goto label_16e45c;
            case 0x16E460u: goto label_16e460;
            case 0x16E464u: goto label_16e464;
            case 0x16E468u: goto label_16e468;
            case 0x16E46Cu: goto label_16e46c;
            case 0x16E470u: goto label_16e470;
            case 0x16E474u: goto label_16e474;
            case 0x16E478u: goto label_16e478;
            case 0x16E47Cu: goto label_16e47c;
            case 0x16E480u: goto label_16e480;
            case 0x16E484u: goto label_16e484;
            case 0x16E488u: goto label_16e488;
            case 0x16E48Cu: goto label_16e48c;
            case 0x16E490u: goto label_16e490;
            case 0x16E494u: goto label_16e494;
            case 0x16E498u: goto label_16e498;
            case 0x16E49Cu: goto label_16e49c;
            case 0x16E4A0u: goto label_16e4a0;
            case 0x16E4A4u: goto label_16e4a4;
            case 0x16E4A8u: goto label_16e4a8;
            case 0x16E4ACu: goto label_16e4ac;
            case 0x16E4B0u: goto label_16e4b0;
            case 0x16E4B4u: goto label_16e4b4;
            case 0x16E4B8u: goto label_16e4b8;
            case 0x16E4BCu: goto label_16e4bc;
            case 0x16E4C0u: goto label_16e4c0;
            case 0x16E4C4u: goto label_16e4c4;
            case 0x16E4C8u: goto label_16e4c8;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E4D0u: goto label_16e4d0;
            case 0x16E4D4u: goto label_16e4d4;
            case 0x16E4D8u: goto label_16e4d8;
            case 0x16E4DCu: goto label_16e4dc;
            case 0x16E4E0u: goto label_16e4e0;
            case 0x16E4E4u: goto label_16e4e4;
            case 0x16E4E8u: goto label_16e4e8;
            case 0x16E4ECu: goto label_16e4ec;
            case 0x16E4F0u: goto label_16e4f0;
            case 0x16E4F4u: goto label_16e4f4;
            case 0x16E4F8u: goto label_16e4f8;
            case 0x16E4FCu: goto label_16e4fc;
            case 0x16E500u: goto label_16e500;
            case 0x16E504u: goto label_16e504;
            case 0x16E508u: goto label_16e508;
            case 0x16E50Cu: goto label_16e50c;
            case 0x16E510u: goto label_16e510;
            case 0x16E514u: goto label_16e514;
            case 0x16E518u: goto label_16e518;
            case 0x16E51Cu: goto label_16e51c;
            case 0x16E520u: goto label_16e520;
            case 0x16E524u: goto label_16e524;
            case 0x16E528u: goto label_16e528;
            case 0x16E52Cu: goto label_16e52c;
            case 0x16E530u: goto label_16e530;
            case 0x16E534u: goto label_16e534;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E488u; }
            if (ctx->pc != 0x16E488u) { return; }
        }
    }
    ctx->pc = 0x16E488u;
label_16e488:
    // 0x16e488: 0xc059ffe
label_16e48c:
    if (ctx->pc == 0x16E48Cu) {
        ctx->pc = 0x16E48Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x16E490u;
        goto label_16e490;
    }
    ctx->pc = 0x16E488u;
    SET_GPR_U32(ctx, 31, 0x16E490u);
    ctx->pc = 0x16E48Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x167FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetNumChan_0x167ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E490u; }
        else if (ctx->pc != 0x16E490u) { ctx->pc = 0x16E490u; }
    }
    if (ctx->pc != 0x16E490u) { return; }
    ctx->pc = 0x16E490u;
label_16e490:
    // 0x16e490: 0x2e2102a
    ctx->pc = 0x16e490u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 2)));
label_16e494:
    // 0x16e494: 0x1440ffe2
label_16e498:
    if (ctx->pc == 0x16E498u) {
        ctx->pc = 0x16E498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E49Cu;
        goto label_16e49c;
    }
    ctx->pc = 0x16E494u;
    {
        const bool branch_taken_0x16e494 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e494) {
            ctx->pc = 0x16E420u;
            goto label_16e420;
        }
    }
    ctx->pc = 0x16E49Cu;
label_16e49c:
    // 0x16e49c: 0x8e460040
    ctx->pc = 0x16e49cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_16e4a0:
    // 0x16e4a0: 0x8e43002c
    ctx->pc = 0x16e4a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_16e4a4:
    // 0x16e4a4: 0x8e440030
    ctx->pc = 0x16e4a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_16e4a8:
    // 0x16e4a8: 0xd33821
    ctx->pc = 0x16e4a8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_16e4ac:
    // 0x16e4ac: 0x8e450034
    ctx->pc = 0x16e4acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_16e4b0:
    // 0x16e4b0: 0x731821
    ctx->pc = 0x16e4b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_16e4b4:
    // 0x16e4b4: 0x8e420044
    ctx->pc = 0x16e4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_16e4b8:
    // 0x16e4b8: 0x9e2021
    ctx->pc = 0x16e4b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_16e4bc:
    // 0x16e4bc: 0xb32821
    ctx->pc = 0x16e4bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_16e4c0:
    // 0x16e4c0: 0x8e46003c
    ctx->pc = 0x16e4c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_16e4c4:
    // 0x16e4c4: 0x5e1021
    ctx->pc = 0x16e4c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_16e4c8:
    // 0x16e4c8: 0xae43002c
    ctx->pc = 0x16e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_16e4cc:
    // 0x16e4cc: 0xae440030
    ctx->pc = 0x16e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
label_16e4d0:
    // 0x16e4d0: 0xae450034
    ctx->pc = 0x16e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 5));
label_16e4d4:
    // 0x16e4d4: 0xae420044
    ctx->pc = 0x16e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_16e4d8:
    // 0x16e4d8: 0x4c00009
label_16e4dc:
    if (ctx->pc == 0x16E4DCu) {
        ctx->pc = 0x16E4DCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 7));
        ctx->pc = 0x16E4E0u;
        goto label_16e4e0;
    }
    ctx->pc = 0x16E4D8u;
    {
        const bool branch_taken_0x16e4d8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16E4DCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 7));
        if (branch_taken_0x16e4d8) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E4E0u;
label_16e4e0:
    // 0x16e4e0: 0xe6102a
    ctx->pc = 0x16e4e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
label_16e4e4:
    // 0x16e4e4: 0x14400006
label_16e4e8:
    if (ctx->pc == 0x16E4E8u) {
        ctx->pc = 0x16E4ECu;
        goto label_16e4ec;
    }
    ctx->pc = 0x16E4E4u;
    {
        const bool branch_taken_0x16e4e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e4e4) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E4ECu;
label_16e4ec:
    // 0x16e4ec: 0x8e420048
    ctx->pc = 0x16e4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_16e4f0:
    // 0x16e4f0: 0x10400003
label_16e4f4:
    if (ctx->pc == 0x16E4F4u) {
        ctx->pc = 0x16E4F8u;
        goto label_16e4f8;
    }
    ctx->pc = 0x16E4F0u;
    {
        const bool branch_taken_0x16e4f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e4f0) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E4F8u;
label_16e4f8:
    // 0x16e4f8: 0x40f809
label_16e4fc:
    if (ctx->pc == 0x16E4FCu) {
        ctx->pc = 0x16E4FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->pc = 0x16E500u;
        goto label_16e500;
    }
    ctx->pc = 0x16E4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E500u);
        ctx->pc = 0x16E4FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E350u: goto label_16e350;
            case 0x16E354u: goto label_16e354;
            case 0x16E358u: goto label_16e358;
            case 0x16E35Cu: goto label_16e35c;
            case 0x16E360u: goto label_16e360;
            case 0x16E364u: goto label_16e364;
            case 0x16E368u: goto label_16e368;
            case 0x16E36Cu: goto label_16e36c;
            case 0x16E370u: goto label_16e370;
            case 0x16E374u: goto label_16e374;
            case 0x16E378u: goto label_16e378;
            case 0x16E37Cu: goto label_16e37c;
            case 0x16E380u: goto label_16e380;
            case 0x16E384u: goto label_16e384;
            case 0x16E388u: goto label_16e388;
            case 0x16E38Cu: goto label_16e38c;
            case 0x16E390u: goto label_16e390;
            case 0x16E394u: goto label_16e394;
            case 0x16E398u: goto label_16e398;
            case 0x16E39Cu: goto label_16e39c;
            case 0x16E3A0u: goto label_16e3a0;
            case 0x16E3A4u: goto label_16e3a4;
            case 0x16E3A8u: goto label_16e3a8;
            case 0x16E3ACu: goto label_16e3ac;
            case 0x16E3B0u: goto label_16e3b0;
            case 0x16E3B4u: goto label_16e3b4;
            case 0x16E3B8u: goto label_16e3b8;
            case 0x16E3BCu: goto label_16e3bc;
            case 0x16E3C0u: goto label_16e3c0;
            case 0x16E3C4u: goto label_16e3c4;
            case 0x16E3C8u: goto label_16e3c8;
            case 0x16E3CCu: goto label_16e3cc;
            case 0x16E3D0u: goto label_16e3d0;
            case 0x16E3D4u: goto label_16e3d4;
            case 0x16E3D8u: goto label_16e3d8;
            case 0x16E3DCu: goto label_16e3dc;
            case 0x16E3E0u: goto label_16e3e0;
            case 0x16E3E4u: goto label_16e3e4;
            case 0x16E3E8u: goto label_16e3e8;
            case 0x16E3ECu: goto label_16e3ec;
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E3F8u: goto label_16e3f8;
            case 0x16E3FCu: goto label_16e3fc;
            case 0x16E400u: goto label_16e400;
            case 0x16E404u: goto label_16e404;
            case 0x16E408u: goto label_16e408;
            case 0x16E40Cu: goto label_16e40c;
            case 0x16E410u: goto label_16e410;
            case 0x16E414u: goto label_16e414;
            case 0x16E418u: goto label_16e418;
            case 0x16E41Cu: goto label_16e41c;
            case 0x16E420u: goto label_16e420;
            case 0x16E424u: goto label_16e424;
            case 0x16E428u: goto label_16e428;
            case 0x16E42Cu: goto label_16e42c;
            case 0x16E430u: goto label_16e430;
            case 0x16E434u: goto label_16e434;
            case 0x16E438u: goto label_16e438;
            case 0x16E43Cu: goto label_16e43c;
            case 0x16E440u: goto label_16e440;
            case 0x16E444u: goto label_16e444;
            case 0x16E448u: goto label_16e448;
            case 0x16E44Cu: goto label_16e44c;
            case 0x16E450u: goto label_16e450;
            case 0x16E454u: goto label_16e454;
            case 0x16E458u: goto label_16e458;
            case 0x16E45Cu: goto label_16e45c;
            case 0x16E460u: goto label_16e460;
            case 0x16E464u: goto label_16e464;
            case 0x16E468u: goto label_16e468;
            case 0x16E46Cu: goto label_16e46c;
            case 0x16E470u: goto label_16e470;
            case 0x16E474u: goto label_16e474;
            case 0x16E478u: goto label_16e478;
            case 0x16E47Cu: goto label_16e47c;
            case 0x16E480u: goto label_16e480;
            case 0x16E484u: goto label_16e484;
            case 0x16E488u: goto label_16e488;
            case 0x16E48Cu: goto label_16e48c;
            case 0x16E490u: goto label_16e490;
            case 0x16E494u: goto label_16e494;
            case 0x16E498u: goto label_16e498;
            case 0x16E49Cu: goto label_16e49c;
            case 0x16E4A0u: goto label_16e4a0;
            case 0x16E4A4u: goto label_16e4a4;
            case 0x16E4A8u: goto label_16e4a8;
            case 0x16E4ACu: goto label_16e4ac;
            case 0x16E4B0u: goto label_16e4b0;
            case 0x16E4B4u: goto label_16e4b4;
            case 0x16E4B8u: goto label_16e4b8;
            case 0x16E4BCu: goto label_16e4bc;
            case 0x16E4C0u: goto label_16e4c0;
            case 0x16E4C4u: goto label_16e4c4;
            case 0x16E4C8u: goto label_16e4c8;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E4D0u: goto label_16e4d0;
            case 0x16E4D4u: goto label_16e4d4;
            case 0x16E4D8u: goto label_16e4d8;
            case 0x16E4DCu: goto label_16e4dc;
            case 0x16E4E0u: goto label_16e4e0;
            case 0x16E4E4u: goto label_16e4e4;
            case 0x16E4E8u: goto label_16e4e8;
            case 0x16E4ECu: goto label_16e4ec;
            case 0x16E4F0u: goto label_16e4f0;
            case 0x16E4F4u: goto label_16e4f4;
            case 0x16E4F8u: goto label_16e4f8;
            case 0x16E4FCu: goto label_16e4fc;
            case 0x16E500u: goto label_16e500;
            case 0x16E504u: goto label_16e504;
            case 0x16E508u: goto label_16e508;
            case 0x16E50Cu: goto label_16e50c;
            case 0x16E510u: goto label_16e510;
            case 0x16E514u: goto label_16e514;
            case 0x16E518u: goto label_16e518;
            case 0x16E51Cu: goto label_16e51c;
            case 0x16E520u: goto label_16e520;
            case 0x16E524u: goto label_16e524;
            case 0x16E528u: goto label_16e528;
            case 0x16E52Cu: goto label_16e52c;
            case 0x16E530u: goto label_16e530;
            case 0x16E534u: goto label_16e534;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E500u; }
            if (ctx->pc != 0x16E500u) { return; }
        }
    }
    ctx->pc = 0x16E500u;
label_16e500:
    // 0x16e500: 0xc05a064
label_16e504:
    if (ctx->pc == 0x16E504u) {
        ctx->pc = 0x16E504u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16E508u;
        goto label_16e508;
    }
    ctx->pc = 0x16E500u;
    SET_GPR_U32(ctx, 31, 0x16E508u);
    ctx->pc = 0x16E504u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x168190u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_Reset_0x168190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E508u; }
        else if (ctx->pc != 0x16E508u) { ctx->pc = 0x16E508u; }
    }
    if (ctx->pc != 0x16E508u) { return; }
    ctx->pc = 0x16E508u;
label_16e508:
    // 0x16e508: 0xdfbf00c0
    ctx->pc = 0x16e508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_16e50c:
    // 0x16e50c: 0xdfbe00b0
    ctx->pc = 0x16e50cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_16e510:
    // 0x16e510: 0xdfb700a0
    ctx->pc = 0x16e510u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_16e514:
    // 0x16e514: 0xdfb60090
    ctx->pc = 0x16e514u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16e518:
    // 0x16e518: 0xdfb50080
    ctx->pc = 0x16e518u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16e51c:
    // 0x16e51c: 0xdfb40070
    ctx->pc = 0x16e51cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16e520:
    // 0x16e520: 0xdfb30060
    ctx->pc = 0x16e520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16e524:
    // 0x16e524: 0xdfb20050
    ctx->pc = 0x16e524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16e528:
    // 0x16e528: 0xdfb10040
    ctx->pc = 0x16e528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16e52c:
    // 0x16e52c: 0xdfb00030
    ctx->pc = 0x16e52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e530:
    // 0x16e530: 0x3e00008
label_16e534:
    if (ctx->pc == 0x16E534u) {
        ctx->pc = 0x16E534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x16E538u;
        goto label_fallthrough_0x16e530;
    }
    ctx->pc = 0x16E530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E350u: goto label_16e350;
            case 0x16E354u: goto label_16e354;
            case 0x16E358u: goto label_16e358;
            case 0x16E35Cu: goto label_16e35c;
            case 0x16E360u: goto label_16e360;
            case 0x16E364u: goto label_16e364;
            case 0x16E368u: goto label_16e368;
            case 0x16E36Cu: goto label_16e36c;
            case 0x16E370u: goto label_16e370;
            case 0x16E374u: goto label_16e374;
            case 0x16E378u: goto label_16e378;
            case 0x16E37Cu: goto label_16e37c;
            case 0x16E380u: goto label_16e380;
            case 0x16E384u: goto label_16e384;
            case 0x16E388u: goto label_16e388;
            case 0x16E38Cu: goto label_16e38c;
            case 0x16E390u: goto label_16e390;
            case 0x16E394u: goto label_16e394;
            case 0x16E398u: goto label_16e398;
            case 0x16E39Cu: goto label_16e39c;
            case 0x16E3A0u: goto label_16e3a0;
            case 0x16E3A4u: goto label_16e3a4;
            case 0x16E3A8u: goto label_16e3a8;
            case 0x16E3ACu: goto label_16e3ac;
            case 0x16E3B0u: goto label_16e3b0;
            case 0x16E3B4u: goto label_16e3b4;
            case 0x16E3B8u: goto label_16e3b8;
            case 0x16E3BCu: goto label_16e3bc;
            case 0x16E3C0u: goto label_16e3c0;
            case 0x16E3C4u: goto label_16e3c4;
            case 0x16E3C8u: goto label_16e3c8;
            case 0x16E3CCu: goto label_16e3cc;
            case 0x16E3D0u: goto label_16e3d0;
            case 0x16E3D4u: goto label_16e3d4;
            case 0x16E3D8u: goto label_16e3d8;
            case 0x16E3DCu: goto label_16e3dc;
            case 0x16E3E0u: goto label_16e3e0;
            case 0x16E3E4u: goto label_16e3e4;
            case 0x16E3E8u: goto label_16e3e8;
            case 0x16E3ECu: goto label_16e3ec;
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E3F8u: goto label_16e3f8;
            case 0x16E3FCu: goto label_16e3fc;
            case 0x16E400u: goto label_16e400;
            case 0x16E404u: goto label_16e404;
            case 0x16E408u: goto label_16e408;
            case 0x16E40Cu: goto label_16e40c;
            case 0x16E410u: goto label_16e410;
            case 0x16E414u: goto label_16e414;
            case 0x16E418u: goto label_16e418;
            case 0x16E41Cu: goto label_16e41c;
            case 0x16E420u: goto label_16e420;
            case 0x16E424u: goto label_16e424;
            case 0x16E428u: goto label_16e428;
            case 0x16E42Cu: goto label_16e42c;
            case 0x16E430u: goto label_16e430;
            case 0x16E434u: goto label_16e434;
            case 0x16E438u: goto label_16e438;
            case 0x16E43Cu: goto label_16e43c;
            case 0x16E440u: goto label_16e440;
            case 0x16E444u: goto label_16e444;
            case 0x16E448u: goto label_16e448;
            case 0x16E44Cu: goto label_16e44c;
            case 0x16E450u: goto label_16e450;
            case 0x16E454u: goto label_16e454;
            case 0x16E458u: goto label_16e458;
            case 0x16E45Cu: goto label_16e45c;
            case 0x16E460u: goto label_16e460;
            case 0x16E464u: goto label_16e464;
            case 0x16E468u: goto label_16e468;
            case 0x16E46Cu: goto label_16e46c;
            case 0x16E470u: goto label_16e470;
            case 0x16E474u: goto label_16e474;
            case 0x16E478u: goto label_16e478;
            case 0x16E47Cu: goto label_16e47c;
            case 0x16E480u: goto label_16e480;
            case 0x16E484u: goto label_16e484;
            case 0x16E488u: goto label_16e488;
            case 0x16E48Cu: goto label_16e48c;
            case 0x16E490u: goto label_16e490;
            case 0x16E494u: goto label_16e494;
            case 0x16E498u: goto label_16e498;
            case 0x16E49Cu: goto label_16e49c;
            case 0x16E4A0u: goto label_16e4a0;
            case 0x16E4A4u: goto label_16e4a4;
            case 0x16E4A8u: goto label_16e4a8;
            case 0x16E4ACu: goto label_16e4ac;
            case 0x16E4B0u: goto label_16e4b0;
            case 0x16E4B4u: goto label_16e4b4;
            case 0x16E4B8u: goto label_16e4b8;
            case 0x16E4BCu: goto label_16e4bc;
            case 0x16E4C0u: goto label_16e4c0;
            case 0x16E4C4u: goto label_16e4c4;
            case 0x16E4C8u: goto label_16e4c8;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E4D0u: goto label_16e4d0;
            case 0x16E4D4u: goto label_16e4d4;
            case 0x16E4D8u: goto label_16e4d8;
            case 0x16E4DCu: goto label_16e4dc;
            case 0x16E4E0u: goto label_16e4e0;
            case 0x16E4E4u: goto label_16e4e4;
            case 0x16E4E8u: goto label_16e4e8;
            case 0x16E4ECu: goto label_16e4ec;
            case 0x16E4F0u: goto label_16e4f0;
            case 0x16E4F4u: goto label_16e4f4;
            case 0x16E4F8u: goto label_16e4f8;
            case 0x16E4FCu: goto label_16e4fc;
            case 0x16E500u: goto label_16e500;
            case 0x16E504u: goto label_16e504;
            case 0x16E508u: goto label_16e508;
            case 0x16E50Cu: goto label_16e50c;
            case 0x16E510u: goto label_16e510;
            case 0x16E514u: goto label_16e514;
            case 0x16E518u: goto label_16e518;
            case 0x16E51Cu: goto label_16e51c;
            case 0x16E520u: goto label_16e520;
            case 0x16E524u: goto label_16e524;
            case 0x16E528u: goto label_16e528;
            case 0x16E52Cu: goto label_16e52c;
            case 0x16E530u: goto label_16e530;
            case 0x16E534u: goto label_16e534;
            default: break;
        }
        return;
    }
label_fallthrough_0x16e530:
    ctx->pc = 0x16E538u;
}
