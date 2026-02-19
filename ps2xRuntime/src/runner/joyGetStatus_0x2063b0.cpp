#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: joyGetStatus
// Address: 0x2063b0 - 0x2068c0
void joyGetStatus_0x2063b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2063b0u;

label_2063b0:
    // 0x2063b0: 0x27bdff70
    ctx->pc = 0x2063b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_2063b4:
    // 0x2063b4: 0xffbf0080
    ctx->pc = 0x2063b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2063b8:
    // 0x2063b8: 0xffb60070
    ctx->pc = 0x2063b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2063bc:
    // 0x2063bc: 0xffb50060
    ctx->pc = 0x2063bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2063c0:
    // 0x2063c0: 0xffb40050
    ctx->pc = 0x2063c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2063c4:
    // 0x2063c4: 0xffb30040
    ctx->pc = 0x2063c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2063c8:
    // 0x2063c8: 0xffb20030
    ctx->pc = 0x2063c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2063cc:
    // 0x2063cc: 0xffb10020
    ctx->pc = 0x2063ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2063d0:
    // 0x2063d0: 0xffb00010
    ctx->pc = 0x2063d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2063d4:
    // 0x2063d4: 0x80a02d
    ctx->pc = 0x2063d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2063d8:
    // 0x2063d8: 0xa0b02d
    ctx->pc = 0x2063d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2063dc:
    // 0x2063dc: 0x26830003
    ctx->pc = 0x2063dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 3));
label_2063e0:
    // 0x2063e0: 0x2402ffff
    ctx->pc = 0x2063e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2063e4:
    // 0x2063e4: 0x54102a
    ctx->pc = 0x2063e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
label_2063e8:
    // 0x2063e8: 0x282180b
    ctx->pc = 0x2063e8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 20));
label_2063ec:
    // 0x2063ec: 0x39083
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
label_2063f0:
    // 0x2063f0: 0x3c030031
    ctx->pc = 0x2063f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2063f4:
    // 0x2063f4: 0x24631c80
    ctx->pc = 0x2063f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7296));
label_2063f8:
    // 0x2063f8: 0x121080
    ctx->pc = 0x2063f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2063fc:
    // 0x2063fc: 0x431021
    ctx->pc = 0x2063fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206400:
    // 0x206400: 0x8c430000
    ctx->pc = 0x206400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206404:
    // 0x206404: 0x24020003
    ctx->pc = 0x206404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_206408:
    // 0x206408: 0x14620003
label_20640c:
    if (ctx->pc == 0x20640Cu) {
        ctx->pc = 0x20640Cu;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 20), 3));
        ctx->pc = 0x206410u;
        goto label_206410;
    }
    ctx->pc = 0x206408u;
    {
        const bool branch_taken_0x206408 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20640Cu;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 20), 3));
        if (branch_taken_0x206408) {
            ctx->pc = 0x206418u;
            goto label_206418;
        }
    }
    ctx->pc = 0x206410u;
label_206410:
    // 0x206410: 0x1e600121
label_206414:
    if (ctx->pc == 0x206414u) {
        ctx->pc = 0x206414u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206418u;
        goto label_206418;
    }
    ctx->pc = 0x206410u;
    {
        const bool branch_taken_0x206410 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x206414u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x206410) {
            ctx->pc = 0x206898u;
            goto label_206898;
        }
    }
    ctx->pc = 0x206418u;
label_206418:
    // 0x206418: 0x3c040031
    ctx->pc = 0x206418u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_20641c:
    // 0x20641c: 0x24840ee8
    ctx->pc = 0x20641cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3816));
label_206420:
    // 0x206420: 0x131080
    ctx->pc = 0x206420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_206424:
    // 0x206424: 0x121900
    ctx->pc = 0x206424u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 4));
label_206428:
    // 0x206428: 0x431021
    ctx->pc = 0x206428u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20642c:
    // 0x20642c: 0x441021
    ctx->pc = 0x20642cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_206430:
    // 0x206430: 0x8c420000
    ctx->pc = 0x206430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206434:
    // 0x206434: 0x10400117
label_206438:
    if (ctx->pc == 0x206438u) {
        ctx->pc = 0x206438u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        ctx->pc = 0x20643Cu;
        goto label_20643c;
    }
    ctx->pc = 0x206434u;
    {
        const bool branch_taken_0x206434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206438u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x206434) {
            ctx->pc = 0x206894u;
            goto label_206894;
        }
    }
    ctx->pc = 0x20643Cu;
label_20643c:
    // 0x20643c: 0x240202bc
    ctx->pc = 0x20643cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 700));
label_206440:
    // 0x206440: 0xac620f0c
    ctx->pc = 0x206440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
label_206444:
    // 0x206444: 0x3c020031
    ctx->pc = 0x206444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_206448:
    // 0x206448: 0x8c420f08
    ctx->pc = 0x206448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3848)));
label_20644c:
    // 0x20644c: 0x14400112
label_206450:
    if (ctx->pc == 0x206450u) {
        ctx->pc = 0x206450u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206454u;
        goto label_206454;
    }
    ctx->pc = 0x20644Cu;
    {
        const bool branch_taken_0x20644c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206450u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20644c) {
            ctx->pc = 0x206898u;
            goto label_206898;
        }
    }
    ctx->pc = 0x206454u;
label_206454:
    // 0x206454: 0x3c020031
    ctx->pc = 0x206454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_206458:
    // 0x206458: 0x24100001
    ctx->pc = 0x206458u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_20645c:
    // 0x20645c: 0xac500f08
    ctx->pc = 0x20645cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3848), GPR_U32(ctx, 16));
label_206460:
    // 0x206460: 0x240202d
    ctx->pc = 0x206460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206464:
    // 0x206464: 0xc0b90c0
label_206468:
    if (ctx->pc == 0x206468u) {
        ctx->pc = 0x206468u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20646Cu;
        goto label_20646c;
    }
    ctx->pc = 0x206464u;
    SET_GPR_U32(ctx, 31, 0x20646Cu);
    ctx->pc = 0x206468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4300u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x2e4300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20646Cu; }
    }
    if (ctx->pc != 0x20646Cu) { return; }
    ctx->pc = 0x20646Cu;
label_20646c:
    // 0x20646c: 0x40a82d
    ctx->pc = 0x20646cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206470:
    // 0x206470: 0x3c02003c
    ctx->pc = 0x206470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_206474:
    // 0x206474: 0x2442bd40
    ctx->pc = 0x206474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950208));
label_206478:
    // 0x206478: 0x141880
    ctx->pc = 0x206478u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_20647c:
    // 0x20647c: 0x621021
    ctx->pc = 0x20647cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206480:
    // 0x206480: 0x16a00023
label_206484:
    if (ctx->pc == 0x206484u) {
        ctx->pc = 0x206484u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x206488u;
        goto label_206488;
    }
    ctx->pc = 0x206480u;
    {
        const bool branch_taken_0x206480 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x206484u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x206480) {
            ctx->pc = 0x206510u;
            goto label_206510;
        }
    }
    ctx->pc = 0x206488u;
label_206488:
    // 0x206488: 0x3c060031
    ctx->pc = 0x206488u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
label_20648c:
    // 0x20648c: 0x8cc50e4c
    ctx->pc = 0x20648cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 3660)));
label_206490:
    // 0x206490: 0x30a20f00
    ctx->pc = 0x206490u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 3840));
label_206494:
    // 0x206494: 0x1440001e
label_206498:
    if (ctx->pc == 0x206498u) {
        ctx->pc = 0x206498u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20649Cu;
        goto label_20649c;
    }
    ctx->pc = 0x206494u;
    {
        const bool branch_taken_0x206494 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206498u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x206494) {
            ctx->pc = 0x206510u;
            goto label_206510;
        }
    }
    ctx->pc = 0x20649Cu;
label_20649c:
    // 0x20649c: 0x3c020031
    ctx->pc = 0x20649cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2064a0:
    // 0x2064a0: 0x24420ec0
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3776));
label_2064a4:
    // 0x2064a4: 0x621021
    ctx->pc = 0x2064a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2064a8:
    // 0x2064a8: 0x8c420000
    ctx->pc = 0x2064a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2064ac:
    // 0x2064ac: 0x2842003c
    ctx->pc = 0x2064acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 60));
label_2064b0:
    // 0x2064b0: 0x14400011
label_2064b4:
    if (ctx->pc == 0x2064B4u) {
        ctx->pc = 0x2064B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2064B8u;
        goto label_2064b8;
    }
    ctx->pc = 0x2064B0u;
    {
        const bool branch_taken_0x2064b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2064B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2064b0) {
            ctx->pc = 0x2064F8u;
            goto label_2064f8;
        }
    }
    ctx->pc = 0x2064B8u;
label_2064b8:
    // 0x2064b8: 0x3c020031
    ctx->pc = 0x2064b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2064bc:
    // 0x2064bc: 0x24420ea0
    ctx->pc = 0x2064bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3744));
label_2064c0:
    // 0x2064c0: 0x622021
    ctx->pc = 0x2064c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2064c4:
    // 0x2064c4: 0x8c830000
    ctx->pc = 0x2064c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2064c8:
    // 0x2064c8: 0x4600011
label_2064cc:
    if (ctx->pc == 0x2064CCu) {
        ctx->pc = 0x2064CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
        ctx->pc = 0x2064D0u;
        goto label_2064d0;
    }
    ctx->pc = 0x2064C8u;
    {
        const bool branch_taken_0x2064c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2064CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x2064c8) {
            ctx->pc = 0x206510u;
            goto label_206510;
        }
    }
    ctx->pc = 0x2064D0u;
label_2064d0:
    // 0x2064d0: 0x451025
    ctx->pc = 0x2064d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2064d4:
    // 0x2064d4: 0xacc20e4c
    ctx->pc = 0x2064d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3660), GPR_U32(ctx, 2));
label_2064d8:
    // 0x2064d8: 0x3c020031
    ctx->pc = 0x2064d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2064dc:
    // 0x2064dc: 0x24420e90
    ctx->pc = 0x2064dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3728));
label_2064e0:
    // 0x2064e0: 0x31880
    ctx->pc = 0x2064e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2064e4:
    // 0x2064e4: 0x621821
    ctx->pc = 0x2064e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2064e8:
    // 0x2064e8: 0x2402ffff
    ctx->pc = 0x2064e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2064ec:
    // 0x2064ec: 0xac620000
    ctx->pc = 0x2064ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2064f0:
    // 0x2064f0: 0x10000007
label_2064f4:
    if (ctx->pc == 0x2064F4u) {
        ctx->pc = 0x2064F4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2064F8u;
        goto label_2064f8;
    }
    ctx->pc = 0x2064F0u;
    {
        const bool branch_taken_0x2064f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2064F4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2064f0) {
            ctx->pc = 0x206510u;
            goto label_206510;
        }
    }
    ctx->pc = 0x2064F8u;
label_2064f8:
    // 0x2064f8: 0x24420ec0
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3776));
label_2064fc:
    // 0x2064fc: 0x141880
    ctx->pc = 0x2064fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206500:
    // 0x206500: 0x621821
    ctx->pc = 0x206500u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206504:
    // 0x206504: 0x8c620000
    ctx->pc = 0x206504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_206508:
    // 0x206508: 0x24420001
    ctx->pc = 0x206508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_20650c:
    // 0x20650c: 0xac620000
    ctx->pc = 0x20650cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_206510:
    // 0x206510: 0x2e22004e
    ctx->pc = 0x206510u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 78));
label_206514:
    // 0x206514: 0x104000b3
label_206518:
    if (ctx->pc == 0x206518u) {
        ctx->pc = 0x206518u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20651Cu;
        goto label_20651c;
    }
    ctx->pc = 0x206514u;
    {
        const bool branch_taken_0x206514 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206518u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x206514) {
            ctx->pc = 0x2067E4u;
            goto label_2067e4;
        }
    }
    ctx->pc = 0x20651Cu;
label_20651c:
    // 0x20651c: 0x24424a90
    ctx->pc = 0x20651cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19088));
label_206520:
    // 0x206520: 0x111880
    ctx->pc = 0x206520u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_206524:
    // 0x206524: 0x621821
    ctx->pc = 0x206524u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206528:
    // 0x206528: 0x8c620000
    ctx->pc = 0x206528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20652c:
    // 0x20652c: 0x400008
label_206530:
    if (ctx->pc == 0x206530u) {
        ctx->pc = 0x206534u;
        goto label_206534;
    }
    ctx->pc = 0x20652Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2063B0u: goto label_2063b0;
            case 0x2063B4u: goto label_2063b4;
            case 0x2063B8u: goto label_2063b8;
            case 0x2063BCu: goto label_2063bc;
            case 0x2063C0u: goto label_2063c0;
            case 0x2063C4u: goto label_2063c4;
            case 0x2063C8u: goto label_2063c8;
            case 0x2063CCu: goto label_2063cc;
            case 0x2063D0u: goto label_2063d0;
            case 0x2063D4u: goto label_2063d4;
            case 0x2063D8u: goto label_2063d8;
            case 0x2063DCu: goto label_2063dc;
            case 0x2063E0u: goto label_2063e0;
            case 0x2063E4u: goto label_2063e4;
            case 0x2063E8u: goto label_2063e8;
            case 0x2063ECu: goto label_2063ec;
            case 0x2063F0u: goto label_2063f0;
            case 0x2063F4u: goto label_2063f4;
            case 0x2063F8u: goto label_2063f8;
            case 0x2063FCu: goto label_2063fc;
            case 0x206400u: goto label_206400;
            case 0x206404u: goto label_206404;
            case 0x206408u: goto label_206408;
            case 0x20640Cu: goto label_20640c;
            case 0x206410u: goto label_206410;
            case 0x206414u: goto label_206414;
            case 0x206418u: goto label_206418;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206424u: goto label_206424;
            case 0x206428u: goto label_206428;
            case 0x20642Cu: goto label_20642c;
            case 0x206430u: goto label_206430;
            case 0x206434u: goto label_206434;
            case 0x206438u: goto label_206438;
            case 0x20643Cu: goto label_20643c;
            case 0x206440u: goto label_206440;
            case 0x206444u: goto label_206444;
            case 0x206448u: goto label_206448;
            case 0x20644Cu: goto label_20644c;
            case 0x206450u: goto label_206450;
            case 0x206454u: goto label_206454;
            case 0x206458u: goto label_206458;
            case 0x20645Cu: goto label_20645c;
            case 0x206460u: goto label_206460;
            case 0x206464u: goto label_206464;
            case 0x206468u: goto label_206468;
            case 0x20646Cu: goto label_20646c;
            case 0x206470u: goto label_206470;
            case 0x206474u: goto label_206474;
            case 0x206478u: goto label_206478;
            case 0x20647Cu: goto label_20647c;
            case 0x206480u: goto label_206480;
            case 0x206484u: goto label_206484;
            case 0x206488u: goto label_206488;
            case 0x20648Cu: goto label_20648c;
            case 0x206490u: goto label_206490;
            case 0x206494u: goto label_206494;
            case 0x206498u: goto label_206498;
            case 0x20649Cu: goto label_20649c;
            case 0x2064A0u: goto label_2064a0;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064A8u: goto label_2064a8;
            case 0x2064ACu: goto label_2064ac;
            case 0x2064B0u: goto label_2064b0;
            case 0x2064B4u: goto label_2064b4;
            case 0x2064B8u: goto label_2064b8;
            case 0x2064BCu: goto label_2064bc;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064C4u: goto label_2064c4;
            case 0x2064C8u: goto label_2064c8;
            case 0x2064CCu: goto label_2064cc;
            case 0x2064D0u: goto label_2064d0;
            case 0x2064D4u: goto label_2064d4;
            case 0x2064D8u: goto label_2064d8;
            case 0x2064DCu: goto label_2064dc;
            case 0x2064E0u: goto label_2064e0;
            case 0x2064E4u: goto label_2064e4;
            case 0x2064E8u: goto label_2064e8;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F0u: goto label_2064f0;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x2064FCu: goto label_2064fc;
            case 0x206500u: goto label_206500;
            case 0x206504u: goto label_206504;
            case 0x206508u: goto label_206508;
            case 0x20650Cu: goto label_20650c;
            case 0x206510u: goto label_206510;
            case 0x206514u: goto label_206514;
            case 0x206518u: goto label_206518;
            case 0x20651Cu: goto label_20651c;
            case 0x206520u: goto label_206520;
            case 0x206524u: goto label_206524;
            case 0x206528u: goto label_206528;
            case 0x20652Cu: goto label_20652c;
            case 0x206530u: goto label_206530;
            case 0x206534u: goto label_206534;
            case 0x206538u: goto label_206538;
            case 0x20653Cu: goto label_20653c;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206548u: goto label_206548;
            case 0x20654Cu: goto label_20654c;
            case 0x206550u: goto label_206550;
            case 0x206554u: goto label_206554;
            case 0x206558u: goto label_206558;
            case 0x20655Cu: goto label_20655c;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206568u: goto label_206568;
            case 0x20656Cu: goto label_20656c;
            case 0x206570u: goto label_206570;
            case 0x206574u: goto label_206574;
            case 0x206578u: goto label_206578;
            case 0x20657Cu: goto label_20657c;
            case 0x206580u: goto label_206580;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            case 0x20658Cu: goto label_20658c;
            case 0x206590u: goto label_206590;
            case 0x206594u: goto label_206594;
            case 0x206598u: goto label_206598;
            case 0x20659Cu: goto label_20659c;
            case 0x2065A0u: goto label_2065a0;
            case 0x2065A4u: goto label_2065a4;
            case 0x2065A8u: goto label_2065a8;
            case 0x2065ACu: goto label_2065ac;
            case 0x2065B0u: goto label_2065b0;
            case 0x2065B4u: goto label_2065b4;
            case 0x2065B8u: goto label_2065b8;
            case 0x2065BCu: goto label_2065bc;
            case 0x2065C0u: goto label_2065c0;
            case 0x2065C4u: goto label_2065c4;
            case 0x2065C8u: goto label_2065c8;
            case 0x2065CCu: goto label_2065cc;
            case 0x2065D0u: goto label_2065d0;
            case 0x2065D4u: goto label_2065d4;
            case 0x2065D8u: goto label_2065d8;
            case 0x2065DCu: goto label_2065dc;
            case 0x2065E0u: goto label_2065e0;
            case 0x2065E4u: goto label_2065e4;
            case 0x2065E8u: goto label_2065e8;
            case 0x2065ECu: goto label_2065ec;
            case 0x2065F0u: goto label_2065f0;
            case 0x2065F4u: goto label_2065f4;
            case 0x2065F8u: goto label_2065f8;
            case 0x2065FCu: goto label_2065fc;
            case 0x206600u: goto label_206600;
            case 0x206604u: goto label_206604;
            case 0x206608u: goto label_206608;
            case 0x20660Cu: goto label_20660c;
            case 0x206610u: goto label_206610;
            case 0x206614u: goto label_206614;
            case 0x206618u: goto label_206618;
            case 0x20661Cu: goto label_20661c;
            case 0x206620u: goto label_206620;
            case 0x206624u: goto label_206624;
            case 0x206628u: goto label_206628;
            case 0x20662Cu: goto label_20662c;
            case 0x206630u: goto label_206630;
            case 0x206634u: goto label_206634;
            case 0x206638u: goto label_206638;
            case 0x20663Cu: goto label_20663c;
            case 0x206640u: goto label_206640;
            case 0x206644u: goto label_206644;
            case 0x206648u: goto label_206648;
            case 0x20664Cu: goto label_20664c;
            case 0x206650u: goto label_206650;
            case 0x206654u: goto label_206654;
            case 0x206658u: goto label_206658;
            case 0x20665Cu: goto label_20665c;
            case 0x206660u: goto label_206660;
            case 0x206664u: goto label_206664;
            case 0x206668u: goto label_206668;
            case 0x20666Cu: goto label_20666c;
            case 0x206670u: goto label_206670;
            case 0x206674u: goto label_206674;
            case 0x206678u: goto label_206678;
            case 0x20667Cu: goto label_20667c;
            case 0x206680u: goto label_206680;
            case 0x206684u: goto label_206684;
            case 0x206688u: goto label_206688;
            case 0x20668Cu: goto label_20668c;
            case 0x206690u: goto label_206690;
            case 0x206694u: goto label_206694;
            case 0x206698u: goto label_206698;
            case 0x20669Cu: goto label_20669c;
            case 0x2066A0u: goto label_2066a0;
            case 0x2066A4u: goto label_2066a4;
            case 0x2066A8u: goto label_2066a8;
            case 0x2066ACu: goto label_2066ac;
            case 0x2066B0u: goto label_2066b0;
            case 0x2066B4u: goto label_2066b4;
            case 0x2066B8u: goto label_2066b8;
            case 0x2066BCu: goto label_2066bc;
            case 0x2066C0u: goto label_2066c0;
            case 0x2066C4u: goto label_2066c4;
            case 0x2066C8u: goto label_2066c8;
            case 0x2066CCu: goto label_2066cc;
            case 0x2066D0u: goto label_2066d0;
            case 0x2066D4u: goto label_2066d4;
            case 0x2066D8u: goto label_2066d8;
            case 0x2066DCu: goto label_2066dc;
            case 0x2066E0u: goto label_2066e0;
            case 0x2066E4u: goto label_2066e4;
            case 0x2066E8u: goto label_2066e8;
            case 0x2066ECu: goto label_2066ec;
            case 0x2066F0u: goto label_2066f0;
            case 0x2066F4u: goto label_2066f4;
            case 0x2066F8u: goto label_2066f8;
            case 0x2066FCu: goto label_2066fc;
            case 0x206700u: goto label_206700;
            case 0x206704u: goto label_206704;
            case 0x206708u: goto label_206708;
            case 0x20670Cu: goto label_20670c;
            case 0x206710u: goto label_206710;
            case 0x206714u: goto label_206714;
            case 0x206718u: goto label_206718;
            case 0x20671Cu: goto label_20671c;
            case 0x206720u: goto label_206720;
            case 0x206724u: goto label_206724;
            case 0x206728u: goto label_206728;
            case 0x20672Cu: goto label_20672c;
            case 0x206730u: goto label_206730;
            case 0x206734u: goto label_206734;
            case 0x206738u: goto label_206738;
            case 0x20673Cu: goto label_20673c;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206748u: goto label_206748;
            case 0x20674Cu: goto label_20674c;
            case 0x206750u: goto label_206750;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x20675Cu: goto label_20675c;
            case 0x206760u: goto label_206760;
            case 0x206764u: goto label_206764;
            case 0x206768u: goto label_206768;
            case 0x20676Cu: goto label_20676c;
            case 0x206770u: goto label_206770;
            case 0x206774u: goto label_206774;
            case 0x206778u: goto label_206778;
            case 0x20677Cu: goto label_20677c;
            case 0x206780u: goto label_206780;
            case 0x206784u: goto label_206784;
            case 0x206788u: goto label_206788;
            case 0x20678Cu: goto label_20678c;
            case 0x206790u: goto label_206790;
            case 0x206794u: goto label_206794;
            case 0x206798u: goto label_206798;
            case 0x20679Cu: goto label_20679c;
            case 0x2067A0u: goto label_2067a0;
            case 0x2067A4u: goto label_2067a4;
            case 0x2067A8u: goto label_2067a8;
            case 0x2067ACu: goto label_2067ac;
            case 0x2067B0u: goto label_2067b0;
            case 0x2067B4u: goto label_2067b4;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067BCu: goto label_2067bc;
            case 0x2067C0u: goto label_2067c0;
            case 0x2067C4u: goto label_2067c4;
            case 0x2067C8u: goto label_2067c8;
            case 0x2067CCu: goto label_2067cc;
            case 0x2067D0u: goto label_2067d0;
            case 0x2067D4u: goto label_2067d4;
            case 0x2067D8u: goto label_2067d8;
            case 0x2067DCu: goto label_2067dc;
            case 0x2067E0u: goto label_2067e0;
            case 0x2067E4u: goto label_2067e4;
            case 0x2067E8u: goto label_2067e8;
            case 0x2067ECu: goto label_2067ec;
            case 0x2067F0u: goto label_2067f0;
            case 0x2067F4u: goto label_2067f4;
            case 0x2067F8u: goto label_2067f8;
            case 0x2067FCu: goto label_2067fc;
            case 0x206800u: goto label_206800;
            case 0x206804u: goto label_206804;
            case 0x206808u: goto label_206808;
            case 0x20680Cu: goto label_20680c;
            case 0x206810u: goto label_206810;
            case 0x206814u: goto label_206814;
            case 0x206818u: goto label_206818;
            case 0x20681Cu: goto label_20681c;
            case 0x206820u: goto label_206820;
            case 0x206824u: goto label_206824;
            case 0x206828u: goto label_206828;
            case 0x20682Cu: goto label_20682c;
            case 0x206830u: goto label_206830;
            case 0x206834u: goto label_206834;
            case 0x206838u: goto label_206838;
            case 0x20683Cu: goto label_20683c;
            case 0x206840u: goto label_206840;
            case 0x206844u: goto label_206844;
            case 0x206848u: goto label_206848;
            case 0x20684Cu: goto label_20684c;
            case 0x206850u: goto label_206850;
            case 0x206854u: goto label_206854;
            case 0x206858u: goto label_206858;
            case 0x20685Cu: goto label_20685c;
            case 0x206860u: goto label_206860;
            case 0x206864u: goto label_206864;
            case 0x206868u: goto label_206868;
            case 0x20686Cu: goto label_20686c;
            case 0x206870u: goto label_206870;
            case 0x206874u: goto label_206874;
            case 0x206878u: goto label_206878;
            case 0x20687Cu: goto label_20687c;
            case 0x206880u: goto label_206880;
            case 0x206884u: goto label_206884;
            case 0x206888u: goto label_206888;
            case 0x20688Cu: goto label_20688c;
            case 0x206890u: goto label_206890;
            case 0x206894u: goto label_206894;
            case 0x206898u: goto label_206898;
            case 0x20689Cu: goto label_20689c;
            case 0x2068A0u: goto label_2068a0;
            case 0x2068A4u: goto label_2068a4;
            case 0x2068A8u: goto label_2068a8;
            case 0x2068ACu: goto label_2068ac;
            case 0x2068B0u: goto label_2068b0;
            case 0x2068B4u: goto label_2068b4;
            case 0x2068B8u: goto label_2068b8;
            case 0x2068BCu: goto label_2068bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206534u;
label_206534:
    // 0x206534: 0x3c02003c
    ctx->pc = 0x206534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_206538:
    // 0x206538: 0x2442bda0
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
label_20653c:
    // 0x20653c: 0x141880
    ctx->pc = 0x20653cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206540:
    // 0x206540: 0x621021
    ctx->pc = 0x206540u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206544:
    // 0x206544: 0xac400000
    ctx->pc = 0x206544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_206548:
    // 0x206548: 0x3c02003c
    ctx->pc = 0x206548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20654c:
    // 0x20654c: 0x2442bdc0
    ctx->pc = 0x20654cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950336));
label_206550:
    // 0x206550: 0x621821
    ctx->pc = 0x206550u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206554:
    // 0x206554: 0x24020006
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_206558:
    // 0x206558: 0x12a20004
label_20655c:
    if (ctx->pc == 0x20655Cu) {
        ctx->pc = 0x20655Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x206560u;
        goto label_206560;
    }
    ctx->pc = 0x206558u;
    {
        const bool branch_taken_0x206558 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x20655Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x206558) {
            ctx->pc = 0x20656Cu;
            goto label_20656c;
        }
    }
    ctx->pc = 0x206560u;
label_206560:
    // 0x206560: 0x24020002
    ctx->pc = 0x206560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_206564:
    // 0x206564: 0x16a200be
label_206568:
    if (ctx->pc == 0x206568u) {
        ctx->pc = 0x206568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x20656Cu;
        goto label_20656c;
    }
    ctx->pc = 0x206564u;
    {
        const bool branch_taken_0x206564 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x206568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x206564) {
            ctx->pc = 0x206860u;
            goto label_206860;
        }
    }
    ctx->pc = 0x20656Cu;
label_20656c:
    // 0x20656c: 0x240202d
    ctx->pc = 0x20656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206570:
    // 0x206570: 0x260282d
    ctx->pc = 0x206570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206574:
    // 0x206574: 0x24060001
    ctx->pc = 0x206574u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_206578:
    // 0x206578: 0xc0b91b8
label_20657c:
    if (ctx->pc == 0x20657Cu) {
        ctx->pc = 0x20657Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206580u;
        goto label_206580;
    }
    ctx->pc = 0x206578u;
    SET_GPR_U32(ctx, 31, 0x206580u);
    ctx->pc = 0x20657Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E46E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoMode_0x2e46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206580u; }
    }
    if (ctx->pc != 0x206580u) { return; }
    ctx->pc = 0x206580u;
label_206580:
    // 0x206580: 0x40802d
    ctx->pc = 0x206580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206584:
    // 0x206584: 0x120000b5
label_206588:
    if (ctx->pc == 0x206588u) {
        ctx->pc = 0x206588u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20658Cu;
        goto label_20658c;
    }
    ctx->pc = 0x206584u;
    {
        const bool branch_taken_0x206584 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x206588u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x206584) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x20658Cu;
label_20658c:
    // 0x20658c: 0x260282d
    ctx->pc = 0x20658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206590:
    // 0x206590: 0x24060002
    ctx->pc = 0x206590u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_206594:
    // 0x206594: 0xc0b91b8
label_206598:
    if (ctx->pc == 0x206598u) {
        ctx->pc = 0x206598u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20659Cu;
        goto label_20659c;
    }
    ctx->pc = 0x206594u;
    SET_GPR_U32(ctx, 31, 0x20659Cu);
    ctx->pc = 0x206598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E46E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoMode_0x2e46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20659Cu; }
    }
    if (ctx->pc != 0x20659Cu) { return; }
    ctx->pc = 0x20659Cu;
label_20659c:
    // 0x20659c: 0x28430001
    ctx->pc = 0x20659cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 1));
label_2065a0:
    // 0x2065a0: 0x43800a
    ctx->pc = 0x2065a0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
label_2065a4:
    // 0x2065a4: 0x24020004
    ctx->pc = 0x2065a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2065a8:
    // 0x2065a8: 0x12020014
label_2065ac:
    if (ctx->pc == 0x2065ACu) {
        ctx->pc = 0x2065ACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 5));
        ctx->pc = 0x2065B0u;
        goto label_2065b0;
    }
    ctx->pc = 0x2065A8u;
    {
        const bool branch_taken_0x2065a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2065ACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x2065a8) {
            ctx->pc = 0x2065FCu;
            goto label_2065fc;
        }
    }
    ctx->pc = 0x2065B0u;
label_2065b0:
    // 0x2065b0: 0x10400005
label_2065b4:
    if (ctx->pc == 0x2065B4u) {
        ctx->pc = 0x2065B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2065B8u;
        goto label_2065b8;
    }
    ctx->pc = 0x2065B0u;
    {
        const bool branch_taken_0x2065b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2065B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2065b0) {
            ctx->pc = 0x2065C8u;
            goto label_2065c8;
        }
    }
    ctx->pc = 0x2065B8u;
label_2065b8:
    // 0x2065b8: 0x1202000b
label_2065bc:
    if (ctx->pc == 0x2065BCu) {
        ctx->pc = 0x2065BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2065C0u;
        goto label_2065c0;
    }
    ctx->pc = 0x2065B8u;
    {
        const bool branch_taken_0x2065b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2065BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2065b8) {
            ctx->pc = 0x2065E8u;
            goto label_2065e8;
        }
    }
    ctx->pc = 0x2065C0u;
label_2065c0:
    // 0x2065c0: 0x10000022
label_2065c4:
    if (ctx->pc == 0x2065C4u) {
        ctx->pc = 0x2065C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
        ctx->pc = 0x2065C8u;
        goto label_2065c8;
    }
    ctx->pc = 0x2065C0u;
    {
        const bool branch_taken_0x2065c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2065C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
        if (branch_taken_0x2065c0) {
            ctx->pc = 0x20664Cu;
            goto label_20664c;
        }
    }
    ctx->pc = 0x2065C8u;
label_2065c8:
    // 0x2065c8: 0x24020005
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2065cc:
    // 0x2065cc: 0x12020013
label_2065d0:
    if (ctx->pc == 0x2065D0u) {
        ctx->pc = 0x2065D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2065D4u;
        goto label_2065d4;
    }
    ctx->pc = 0x2065CCu;
    {
        const bool branch_taken_0x2065cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2065D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2065cc) {
            ctx->pc = 0x20661Cu;
            goto label_20661c;
        }
    }
    ctx->pc = 0x2065D4u;
label_2065d4:
    // 0x2065d4: 0x24020007
    ctx->pc = 0x2065d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2065d8:
    // 0x2065d8: 0x12020015
label_2065dc:
    if (ctx->pc == 0x2065DCu) {
        ctx->pc = 0x2065DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2065E0u;
        goto label_2065e0;
    }
    ctx->pc = 0x2065D8u;
    {
        const bool branch_taken_0x2065d8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2065DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2065d8) {
            ctx->pc = 0x206630u;
            goto label_206630;
        }
    }
    ctx->pc = 0x2065E0u;
label_2065e0:
    // 0x2065e0: 0x1000001a
label_2065e4:
    if (ctx->pc == 0x2065E4u) {
        ctx->pc = 0x2065E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
        ctx->pc = 0x2065E8u;
        goto label_2065e8;
    }
    ctx->pc = 0x2065E0u;
    {
        const bool branch_taken_0x2065e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2065E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
        if (branch_taken_0x2065e0) {
            ctx->pc = 0x20664Cu;
            goto label_20664c;
        }
    }
    ctx->pc = 0x2065E8u;
label_2065e8:
    // 0x2065e8: 0x2442bda0
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
label_2065ec:
    // 0x2065ec: 0x141880
    ctx->pc = 0x2065ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_2065f0:
    // 0x2065f0: 0x621821
    ctx->pc = 0x2065f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2065f4:
    // 0x2065f4: 0x10000078
label_2065f8:
    if (ctx->pc == 0x2065F8u) {
        ctx->pc = 0x2065F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2065FCu;
        goto label_2065fc;
    }
    ctx->pc = 0x2065F4u;
    {
        const bool branch_taken_0x2065f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2065F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2065f4) {
            ctx->pc = 0x2067D8u;
            goto label_2067d8;
        }
    }
    ctx->pc = 0x2065FCu;
label_2065fc:
    // 0x2065fc: 0x3c02003c
    ctx->pc = 0x2065fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_206600:
    // 0x206600: 0x2442bda0
    ctx->pc = 0x206600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
label_206604:
    // 0x206604: 0x141880
    ctx->pc = 0x206604u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206608:
    // 0x206608: 0x621821
    ctx->pc = 0x206608u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20660c:
    // 0x20660c: 0x24020001
    ctx->pc = 0x20660cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206610:
    // 0x206610: 0xac620000
    ctx->pc = 0x206610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_206614:
    // 0x206614: 0x10000091
label_206618:
    if (ctx->pc == 0x206618u) {
        ctx->pc = 0x206618u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x20661Cu;
        goto label_20661c;
    }
    ctx->pc = 0x206614u;
    {
        const bool branch_taken_0x206614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206618u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x206614) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x20661Cu;
label_20661c:
    // 0x20661c: 0x2442bda0
    ctx->pc = 0x20661cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
label_206620:
    // 0x206620: 0x141880
    ctx->pc = 0x206620u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206624:
    // 0x206624: 0x621821
    ctx->pc = 0x206624u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206628:
    // 0x206628: 0x1000006b
label_20662c:
    if (ctx->pc == 0x20662Cu) {
        ctx->pc = 0x20662Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x206630u;
        goto label_206630;
    }
    ctx->pc = 0x206628u;
    {
        const bool branch_taken_0x206628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20662Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x206628) {
            ctx->pc = 0x2067D8u;
            goto label_2067d8;
        }
    }
    ctx->pc = 0x206630u;
label_206630:
    // 0x206630: 0x2442bda0
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
label_206634:
    // 0x206634: 0x141880
    ctx->pc = 0x206634u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206638:
    // 0x206638: 0x621821
    ctx->pc = 0x206638u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20663c:
    // 0x20663c: 0x24020002
    ctx->pc = 0x20663cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_206640:
    // 0x206640: 0xac620000
    ctx->pc = 0x206640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_206644:
    // 0x206644: 0x10000085
label_206648:
    if (ctx->pc == 0x206648u) {
        ctx->pc = 0x206648u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x20664Cu;
        goto label_20664c;
    }
    ctx->pc = 0x206644u;
    {
        const bool branch_taken_0x206644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206648u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 70));
        if (branch_taken_0x206644) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x20664Cu;
label_20664c:
    // 0x20664c: 0x141880
    ctx->pc = 0x20664cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206650:
    // 0x206650: 0x621821
    ctx->pc = 0x206650u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206654:
    // 0x206654: 0x10000060
label_206658:
    if (ctx->pc == 0x206658u) {
        ctx->pc = 0x206658u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20665Cu;
        goto label_20665c;
    }
    ctx->pc = 0x206654u;
    {
        const bool branch_taken_0x206654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206658u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x206654) {
            ctx->pc = 0x2067D8u;
            goto label_2067d8;
        }
    }
    ctx->pc = 0x20665Cu;
label_20665c:
    // 0x20665c: 0x240202d
    ctx->pc = 0x20665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206660:
    // 0x206660: 0x260282d
    ctx->pc = 0x206660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206664:
    // 0x206664: 0x24060004
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_206668:
    // 0x206668: 0xc0b91b8
label_20666c:
    if (ctx->pc == 0x20666Cu) {
        ctx->pc = 0x20666Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x206670u;
        goto label_206670;
    }
    ctx->pc = 0x206668u;
    SET_GPR_U32(ctx, 31, 0x206670u);
    ctx->pc = 0x20666Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2E46E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoMode_0x2e46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206670u; }
    }
    if (ctx->pc != 0x206670u) { return; }
    ctx->pc = 0x206670u;
label_206670:
    // 0x206670: 0x14400003
label_206674:
    if (ctx->pc == 0x206674u) {
        ctx->pc = 0x206674u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x206678u;
        goto label_206678;
    }
    ctx->pc = 0x206670u;
    {
        const bool branch_taken_0x206670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206674u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x206670) {
            ctx->pc = 0x206680u;
            goto label_206680;
        }
    }
    ctx->pc = 0x206678u;
label_206678:
    // 0x206678: 0x10000078
label_20667c:
    if (ctx->pc == 0x20667Cu) {
        ctx->pc = 0x20667Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x206680u;
        goto label_206680;
    }
    ctx->pc = 0x206678u;
    {
        const bool branch_taken_0x206678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20667Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x206678) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x206680u;
label_206680:
    // 0x206680: 0x240202d
    ctx->pc = 0x206680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206684:
    // 0x206684: 0x260282d
    ctx->pc = 0x206684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206688:
    // 0x206688: 0x24060001
    ctx->pc = 0x206688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_20668c:
    // 0x20668c: 0xc0b9206
label_206690:
    if (ctx->pc == 0x206690u) {
        ctx->pc = 0x206690u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x206694u;
        goto label_206694;
    }
    ctx->pc = 0x20668Cu;
    SET_GPR_U32(ctx, 31, 0x206694u);
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2E4818u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetMainMode_0x2e4818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206694u; }
    }
    if (ctx->pc != 0x206694u) { return; }
    ctx->pc = 0x206694u;
label_206694:
    // 0x206694: 0x1000003d
label_206698:
    if (ctx->pc == 0x206698u) {
        ctx->pc = 0x206698u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x20669Cu;
        goto label_20669c;
    }
    ctx->pc = 0x206694u;
    {
        const bool branch_taken_0x206694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206698u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x206694) {
            ctx->pc = 0x20678Cu;
            goto label_20678c;
        }
    }
    ctx->pc = 0x20669Cu;
label_20669c:
    // 0x20669c: 0x240202d
    ctx->pc = 0x20669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2066a0:
    // 0x2066a0: 0xc0b9106
label_2066a4:
    if (ctx->pc == 0x2066A4u) {
        ctx->pc = 0x2066A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2066A8u;
        goto label_2066a8;
    }
    ctx->pc = 0x2066A0u;
    SET_GPR_U32(ctx, 31, 0x2066A8u);
    ctx->pc = 0x2066A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4418u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetReqState_0x2e4418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066A8u; }
    }
    if (ctx->pc != 0x2066A8u) { return; }
    ctx->pc = 0x2066A8u;
label_2066a8:
    // 0x2066a8: 0x2623ffff
    ctx->pc = 0x2066a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2066ac:
    // 0x2066ac: 0x38420001
    ctx->pc = 0x2066acu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_2066b0:
    // 0x2066b0: 0x62880a
    ctx->pc = 0x2066b0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2066b4:
    // 0x2066b4: 0x240202d
    ctx->pc = 0x2066b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2066b8:
    // 0x2066b8: 0xc0b9106
label_2066bc:
    if (ctx->pc == 0x2066BCu) {
        ctx->pc = 0x2066BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2066C0u;
        goto label_2066c0;
    }
    ctx->pc = 0x2066B8u;
    SET_GPR_U32(ctx, 31, 0x2066C0u);
    ctx->pc = 0x2066BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4418u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetReqState_0x2e4418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066C0u; }
    }
    if (ctx->pc != 0x2066C0u) { return; }
    ctx->pc = 0x2066C0u;
label_2066c0:
    // 0x2066c0: 0x10000066
label_2066c4:
    if (ctx->pc == 0x2066C4u) {
        ctx->pc = 0x2066C4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
        ctx->pc = 0x2066C8u;
        goto label_2066c8;
    }
    ctx->pc = 0x2066C0u;
    {
        const bool branch_taken_0x2066c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2066C4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
        if (branch_taken_0x2066c0) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x2066C8u;
label_2066c8:
    // 0x2066c8: 0x240202d
    ctx->pc = 0x2066c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2066cc:
    // 0x2066cc: 0x260282d
    ctx->pc = 0x2066ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2066d0:
    // 0x2066d0: 0x2406ffff
    ctx->pc = 0x2066d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2066d4:
    // 0x2066d4: 0xc0b9128
label_2066d8:
    if (ctx->pc == 0x2066D8u) {
        ctx->pc = 0x2066D8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2066DCu;
        goto label_2066dc;
    }
    ctx->pc = 0x2066D4u;
    SET_GPR_U32(ctx, 31, 0x2066DCu);
    ctx->pc = 0x2066D8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E44A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoAct_0x2e44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066DCu; }
    }
    if (ctx->pc != 0x2066DCu) { return; }
    ctx->pc = 0x2066DCu;
label_2066dc:
    // 0x2066dc: 0x2403004b
    ctx->pc = 0x2066dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 75));
label_2066e0:
    // 0x2066e0: 0x62880a
    ctx->pc = 0x2066e0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2066e4:
    // 0x2066e4: 0xa3a00000
    ctx->pc = 0x2066e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_2066e8:
    // 0x2066e8: 0x24020001
    ctx->pc = 0x2066e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2066ec:
    // 0x2066ec: 0xa3a20001
    ctx->pc = 0x2066ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2066f0:
    // 0x2066f0: 0x24030002
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2066f4:
    // 0x2066f4: 0x240400ff
    ctx->pc = 0x2066f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
label_2066f8:
    // 0x2066f8: 0x3a31021
    ctx->pc = 0x2066f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_2066fc:
    // 0x2066fc: 0xa0440000
    ctx->pc = 0x2066fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_206700:
    // 0x206700: 0x24630001
    ctx->pc = 0x206700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_206704:
    // 0x206704: 0x28620006
    ctx->pc = 0x206704u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 6));
label_206708:
    // 0x206708: 0x0
    ctx->pc = 0x206708u;
    // NOP
label_20670c:
    // 0x20670c: 0x1440fffa
label_206710:
    if (ctx->pc == 0x206710u) {
        ctx->pc = 0x206714u;
        goto label_206714;
    }
    ctx->pc = 0x20670Cu;
    {
        const bool branch_taken_0x20670c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20670c) {
            ctx->pc = 0x2066F8u;
            goto label_2066f8;
        }
    }
    ctx->pc = 0x206714u;
label_206714:
    // 0x206714: 0x240202d
    ctx->pc = 0x206714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206718:
    // 0x206718: 0x260282d
    ctx->pc = 0x206718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20671c:
    // 0x20671c: 0xc0b925a
label_206720:
    if (ctx->pc == 0x206720u) {
        ctx->pc = 0x206720u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206724u;
        goto label_206724;
    }
    ctx->pc = 0x20671Cu;
    SET_GPR_U32(ctx, 31, 0x206724u);
    ctx->pc = 0x206720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4968u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetActAlign_0x2e4968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206724u; }
    }
    if (ctx->pc != 0x206724u) { return; }
    ctx->pc = 0x206724u;
label_206724:
    // 0x206724: 0x26230001
    ctx->pc = 0x206724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_206728:
    // 0x206728: 0x1000004c
label_20672c:
    if (ctx->pc == 0x20672Cu) {
        ctx->pc = 0x20672Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        ctx->pc = 0x206730u;
        goto label_206730;
    }
    ctx->pc = 0x206728u;
    {
        const bool branch_taken_0x206728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20672Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x206728) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x206730u;
label_206730:
    // 0x206730: 0x240202d
    ctx->pc = 0x206730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206734:
    // 0x206734: 0xc0b90c0
label_206738:
    if (ctx->pc == 0x206738u) {
        ctx->pc = 0x206738u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20673Cu;
        goto label_20673c;
    }
    ctx->pc = 0x206734u;
    SET_GPR_U32(ctx, 31, 0x20673Cu);
    ctx->pc = 0x206738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4300u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x2e4300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20673Cu; }
    }
    if (ctx->pc != 0x20673Cu) { return; }
    ctx->pc = 0x20673Cu;
label_20673c:
    // 0x20673c: 0x24030005
    ctx->pc = 0x20673cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_206740:
    // 0x206740: 0x10430046
label_206744:
    if (ctx->pc == 0x206744u) {
        ctx->pc = 0x206744u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x206748u;
        goto label_206748;
    }
    ctx->pc = 0x206740u;
    {
        const bool branch_taken_0x206740 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x206744u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x206740) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x206748u;
label_206748:
    // 0x206748: 0x2442bdc0
    ctx->pc = 0x206748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950336));
label_20674c:
    // 0x20674c: 0x141880
    ctx->pc = 0x20674cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206750:
    // 0x206750: 0x621821
    ctx->pc = 0x206750u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_206754:
    // 0x206754: 0x24020001
    ctx->pc = 0x206754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206758:
    // 0x206758: 0xac620000
    ctx->pc = 0x206758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20675c:
    // 0x20675c: 0x1000003f
label_206760:
    if (ctx->pc == 0x206760u) {
        ctx->pc = 0x206760u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 75));
        ctx->pc = 0x206764u;
        goto label_206764;
    }
    ctx->pc = 0x20675Cu;
    {
        const bool branch_taken_0x20675c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206760u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 75));
        if (branch_taken_0x20675c) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x206764u;
label_206764:
    // 0x206764: 0x240202d
    ctx->pc = 0x206764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206768:
    // 0x206768: 0xc0b92ea
label_20676c:
    if (ctx->pc == 0x20676Cu) {
        ctx->pc = 0x20676Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206770u;
        goto label_206770;
    }
    ctx->pc = 0x206768u;
    SET_GPR_U32(ctx, 31, 0x206770u);
    ctx->pc = 0x20676Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoPressMode_0x2e4ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206770u; }
    }
    if (ctx->pc != 0x206770u) { return; }
    ctx->pc = 0x206770u;
label_206770:
    // 0x206770: 0x24110063
    ctx->pc = 0x206770u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 99));
label_206774:
    // 0x206774: 0x10000005
label_206778:
    if (ctx->pc == 0x206778u) {
        ctx->pc = 0x206778u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 76));
        ctx->pc = 0x20677Cu;
        goto label_20677c;
    }
    ctx->pc = 0x206774u;
    {
        const bool branch_taken_0x206774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206778u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 76));
        if (branch_taken_0x206774) {
            ctx->pc = 0x20678Cu;
            goto label_20678c;
        }
    }
    ctx->pc = 0x20677Cu;
label_20677c:
    // 0x20677c: 0x240202d
    ctx->pc = 0x20677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206780:
    // 0x206780: 0xc0b9302
label_206784:
    if (ctx->pc == 0x206784u) {
        ctx->pc = 0x206784u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206788u;
        goto label_206788;
    }
    ctx->pc = 0x206780u;
    SET_GPR_U32(ctx, 31, 0x206788u);
    ctx->pc = 0x206784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadEnterPressMode_0x2e4c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206788u; }
    }
    if (ctx->pc != 0x206788u) { return; }
    ctx->pc = 0x206788u;
label_206788:
    // 0x206788: 0x26230001
    ctx->pc = 0x206788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_20678c:
    // 0x20678c: 0x38420001
    ctx->pc = 0x20678cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_206790:
    // 0x206790: 0x10000032
label_206794:
    if (ctx->pc == 0x206794u) {
        ctx->pc = 0x206794u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        ctx->pc = 0x206798u;
        goto label_206798;
    }
    ctx->pc = 0x206790u;
    {
        const bool branch_taken_0x206790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206794u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x206790) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x206798u;
label_206798:
    // 0x206798: 0x240202d
    ctx->pc = 0x206798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20679c:
    // 0x20679c: 0xc0b9106
label_2067a0:
    if (ctx->pc == 0x2067A0u) {
        ctx->pc = 0x2067A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2067A4u;
        goto label_2067a4;
    }
    ctx->pc = 0x20679Cu;
    SET_GPR_U32(ctx, 31, 0x2067A4u);
    ctx->pc = 0x2067A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4418u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetReqState_0x2e4418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067A4u; }
    }
    if (ctx->pc != 0x2067A4u) { return; }
    ctx->pc = 0x2067A4u;
label_2067a4:
    // 0x2067a4: 0x2623ffff
    ctx->pc = 0x2067a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2067a8:
    // 0x2067a8: 0x38420001
    ctx->pc = 0x2067a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_2067ac:
    // 0x2067ac: 0x62880a
    ctx->pc = 0x2067acu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2067b0:
    // 0x2067b0: 0x240202d
    ctx->pc = 0x2067b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2067b4:
    // 0x2067b4: 0xc0b9106
label_2067b8:
    if (ctx->pc == 0x2067B8u) {
        ctx->pc = 0x2067B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2067BCu;
        goto label_2067bc;
    }
    ctx->pc = 0x2067B4u;
    SET_GPR_U32(ctx, 31, 0x2067BCu);
    ctx->pc = 0x2067B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4418u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetReqState_0x2e4418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067BCu; }
    }
    if (ctx->pc != 0x2067BCu) { return; }
    ctx->pc = 0x2067BCu;
label_2067bc:
    // 0x2067bc: 0x14400028
label_2067c0:
    if (ctx->pc == 0x2067C0u) {
        ctx->pc = 0x2067C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2067C4u;
        goto label_2067c4;
    }
    ctx->pc = 0x2067BCu;
    {
        const bool branch_taken_0x2067bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2067C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2067bc) {
            ctx->pc = 0x206860u;
            goto label_206860;
        }
    }
    ctx->pc = 0x2067C4u;
label_2067c4:
    // 0x2067c4: 0x3c02003c
    ctx->pc = 0x2067c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2067c8:
    // 0x2067c8: 0x2442bda0
    ctx->pc = 0x2067c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950304));
label_2067cc:
    // 0x2067cc: 0x141880
    ctx->pc = 0x2067ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_2067d0:
    // 0x2067d0: 0x621821
    ctx->pc = 0x2067d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2067d4:
    // 0x2067d4: 0x24020005
    ctx->pc = 0x2067d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2067d8:
    // 0x2067d8: 0xac620000
    ctx->pc = 0x2067d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2067dc:
    // 0x2067dc: 0x1000001f
label_2067e0:
    if (ctx->pc == 0x2067E0u) {
        ctx->pc = 0x2067E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x2067E4u;
        goto label_2067e4;
    }
    ctx->pc = 0x2067DCu;
    {
        const bool branch_taken_0x2067dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2067E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x2067dc) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x2067E4u;
label_2067e4:
    // 0x2067e4: 0x24020007
    ctx->pc = 0x2067e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2067e8:
    // 0x2067e8: 0x12a2001c
label_2067ec:
    if (ctx->pc == 0x2067ECu) {
        ctx->pc = 0x2067ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2067F0u;
        goto label_2067f0;
    }
    ctx->pc = 0x2067E8u;
    {
        const bool branch_taken_0x2067e8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x2067ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2067e8) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x2067F0u;
label_2067f0:
    // 0x2067f0: 0x12a20003
label_2067f4:
    if (ctx->pc == 0x2067F4u) {
        ctx->pc = 0x2067F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2067F8u;
        goto label_2067f8;
    }
    ctx->pc = 0x2067F0u;
    {
        const bool branch_taken_0x2067f0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x2067F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2067f0) {
            ctx->pc = 0x206800u;
            goto label_206800;
        }
    }
    ctx->pc = 0x2067F8u;
label_2067f8:
    // 0x2067f8: 0x16a20019
label_2067fc:
    if (ctx->pc == 0x2067FCu) {
        ctx->pc = 0x2067FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x206800u;
        goto label_206800;
    }
    ctx->pc = 0x2067F8u;
    {
        const bool branch_taken_0x2067f8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2067FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2067f8) {
            ctx->pc = 0x206860u;
            goto label_206860;
        }
    }
    ctx->pc = 0x206800u;
label_206800:
    // 0x206800: 0x280202d
    ctx->pc = 0x206800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206804:
    // 0x206804: 0xc0817cc
label_206808:
    if (ctx->pc == 0x206808u) {
        ctx->pc = 0x206808u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20680Cu;
        goto label_20680c;
    }
    ctx->pc = 0x206804u;
    SET_GPR_U32(ctx, 31, 0x20680Cu);
    ctx->pc = 0x206808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        joyReadPad_0x205f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20680Cu; }
    }
    if (ctx->pc != 0x20680Cu) { return; }
    ctx->pc = 0x20680Cu;
label_20680c:
    // 0x20680c: 0x2403ffff
    ctx->pc = 0x20680cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206810:
    // 0x206810: 0x62182a
    ctx->pc = 0x206810u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_206814:
    // 0x206814: 0x18400011
label_206818:
    if (ctx->pc == 0x206818u) {
        ctx->pc = 0x206818u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
        ctx->pc = 0x20681Cu;
        goto label_20681c;
    }
    ctx->pc = 0x206814u;
    {
        const bool branch_taken_0x206814 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x206818u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
        if (branch_taken_0x206814) {
            ctx->pc = 0x20685Cu;
            goto label_20685c;
        }
    }
    ctx->pc = 0x20681Cu;
label_20681c:
    // 0x20681c: 0x3c02003c
    ctx->pc = 0x20681cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_206820:
    // 0x206820: 0x2442bd60
    ctx->pc = 0x206820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950240));
label_206824:
    // 0x206824: 0x141880
    ctx->pc = 0x206824u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206828:
    // 0x206828: 0x621021
    ctx->pc = 0x206828u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20682c:
    // 0x20682c: 0xac550000
    ctx->pc = 0x20682cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_206830:
    // 0x206830: 0x3c02003c
    ctx->pc = 0x206830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_206834:
    // 0x206834: 0x2442bd40
    ctx->pc = 0x206834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950208));
label_206838:
    // 0x206838: 0x621821
    ctx->pc = 0x206838u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20683c:
    // 0x20683c: 0xac710000
    ctx->pc = 0x20683cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_206840:
    // 0x206840: 0x3c030031
    ctx->pc = 0x206840u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_206844:
    // 0x206844: 0x2402031e
    ctx->pc = 0x206844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 798));
label_206848:
    // 0x206848: 0xac620f0c
    ctx->pc = 0x206848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
label_20684c:
    // 0x20684c: 0x3c020031
    ctx->pc = 0x20684cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_206850:
    // 0x206850: 0xac400f08
    ctx->pc = 0x206850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3848), GPR_U32(ctx, 0));
label_206854:
    // 0x206854: 0x10000010
label_206858:
    if (ctx->pc == 0x206858u) {
        ctx->pc = 0x206858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20685Cu;
        goto label_20685c;
    }
    ctx->pc = 0x206854u;
    {
        const bool branch_taken_0x206854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x206858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x206854) {
            ctx->pc = 0x206898u;
            goto label_206898;
        }
    }
    ctx->pc = 0x20685Cu;
label_20685c:
    // 0x20685c: 0x3c02003c
    ctx->pc = 0x20685cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_206860:
    // 0x206860: 0x2442bd60
    ctx->pc = 0x206860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950240));
label_206864:
    // 0x206864: 0x141880
    ctx->pc = 0x206864u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_206868:
    // 0x206868: 0x621021
    ctx->pc = 0x206868u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20686c:
    // 0x20686c: 0xac550000
    ctx->pc = 0x20686cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_206870:
    // 0x206870: 0x3c02003c
    ctx->pc = 0x206870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_206874:
    // 0x206874: 0x2442bd40
    ctx->pc = 0x206874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950208));
label_206878:
    // 0x206878: 0x621821
    ctx->pc = 0x206878u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20687c:
    // 0x20687c: 0xac710000
    ctx->pc = 0x20687cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_206880:
    // 0x206880: 0x3c030031
    ctx->pc = 0x206880u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_206884:
    // 0x206884: 0x2402031f
    ctx->pc = 0x206884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 799));
label_206888:
    // 0x206888: 0xac620f0c
    ctx->pc = 0x206888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
label_20688c:
    // 0x20688c: 0x3c020031
    ctx->pc = 0x20688cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_206890:
    // 0x206890: 0xac400f08
    ctx->pc = 0x206890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3848), GPR_U32(ctx, 0));
label_206894:
    // 0x206894: 0x102d
    ctx->pc = 0x206894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206898:
    // 0x206898: 0xdfbf0080
    ctx->pc = 0x206898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20689c:
    // 0x20689c: 0xdfb60070
    ctx->pc = 0x20689cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2068a0:
    // 0x2068a0: 0xdfb50060
    ctx->pc = 0x2068a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2068a4:
    // 0x2068a4: 0xdfb40050
    ctx->pc = 0x2068a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2068a8:
    // 0x2068a8: 0xdfb30040
    ctx->pc = 0x2068a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2068ac:
    // 0x2068ac: 0xdfb20030
    ctx->pc = 0x2068acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2068b0:
    // 0x2068b0: 0xdfb10020
    ctx->pc = 0x2068b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2068b4:
    // 0x2068b4: 0xdfb00010
    ctx->pc = 0x2068b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2068b8:
    // 0x2068b8: 0x3e00008
label_2068bc:
    if (ctx->pc == 0x2068BCu) {
        ctx->pc = 0x2068BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2068C0u;
        goto label_fallthrough_0x2068b8;
    }
    ctx->pc = 0x2068B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2068BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2063B0u: goto label_2063b0;
            case 0x2063B4u: goto label_2063b4;
            case 0x2063B8u: goto label_2063b8;
            case 0x2063BCu: goto label_2063bc;
            case 0x2063C0u: goto label_2063c0;
            case 0x2063C4u: goto label_2063c4;
            case 0x2063C8u: goto label_2063c8;
            case 0x2063CCu: goto label_2063cc;
            case 0x2063D0u: goto label_2063d0;
            case 0x2063D4u: goto label_2063d4;
            case 0x2063D8u: goto label_2063d8;
            case 0x2063DCu: goto label_2063dc;
            case 0x2063E0u: goto label_2063e0;
            case 0x2063E4u: goto label_2063e4;
            case 0x2063E8u: goto label_2063e8;
            case 0x2063ECu: goto label_2063ec;
            case 0x2063F0u: goto label_2063f0;
            case 0x2063F4u: goto label_2063f4;
            case 0x2063F8u: goto label_2063f8;
            case 0x2063FCu: goto label_2063fc;
            case 0x206400u: goto label_206400;
            case 0x206404u: goto label_206404;
            case 0x206408u: goto label_206408;
            case 0x20640Cu: goto label_20640c;
            case 0x206410u: goto label_206410;
            case 0x206414u: goto label_206414;
            case 0x206418u: goto label_206418;
            case 0x20641Cu: goto label_20641c;
            case 0x206420u: goto label_206420;
            case 0x206424u: goto label_206424;
            case 0x206428u: goto label_206428;
            case 0x20642Cu: goto label_20642c;
            case 0x206430u: goto label_206430;
            case 0x206434u: goto label_206434;
            case 0x206438u: goto label_206438;
            case 0x20643Cu: goto label_20643c;
            case 0x206440u: goto label_206440;
            case 0x206444u: goto label_206444;
            case 0x206448u: goto label_206448;
            case 0x20644Cu: goto label_20644c;
            case 0x206450u: goto label_206450;
            case 0x206454u: goto label_206454;
            case 0x206458u: goto label_206458;
            case 0x20645Cu: goto label_20645c;
            case 0x206460u: goto label_206460;
            case 0x206464u: goto label_206464;
            case 0x206468u: goto label_206468;
            case 0x20646Cu: goto label_20646c;
            case 0x206470u: goto label_206470;
            case 0x206474u: goto label_206474;
            case 0x206478u: goto label_206478;
            case 0x20647Cu: goto label_20647c;
            case 0x206480u: goto label_206480;
            case 0x206484u: goto label_206484;
            case 0x206488u: goto label_206488;
            case 0x20648Cu: goto label_20648c;
            case 0x206490u: goto label_206490;
            case 0x206494u: goto label_206494;
            case 0x206498u: goto label_206498;
            case 0x20649Cu: goto label_20649c;
            case 0x2064A0u: goto label_2064a0;
            case 0x2064A4u: goto label_2064a4;
            case 0x2064A8u: goto label_2064a8;
            case 0x2064ACu: goto label_2064ac;
            case 0x2064B0u: goto label_2064b0;
            case 0x2064B4u: goto label_2064b4;
            case 0x2064B8u: goto label_2064b8;
            case 0x2064BCu: goto label_2064bc;
            case 0x2064C0u: goto label_2064c0;
            case 0x2064C4u: goto label_2064c4;
            case 0x2064C8u: goto label_2064c8;
            case 0x2064CCu: goto label_2064cc;
            case 0x2064D0u: goto label_2064d0;
            case 0x2064D4u: goto label_2064d4;
            case 0x2064D8u: goto label_2064d8;
            case 0x2064DCu: goto label_2064dc;
            case 0x2064E0u: goto label_2064e0;
            case 0x2064E4u: goto label_2064e4;
            case 0x2064E8u: goto label_2064e8;
            case 0x2064ECu: goto label_2064ec;
            case 0x2064F0u: goto label_2064f0;
            case 0x2064F4u: goto label_2064f4;
            case 0x2064F8u: goto label_2064f8;
            case 0x2064FCu: goto label_2064fc;
            case 0x206500u: goto label_206500;
            case 0x206504u: goto label_206504;
            case 0x206508u: goto label_206508;
            case 0x20650Cu: goto label_20650c;
            case 0x206510u: goto label_206510;
            case 0x206514u: goto label_206514;
            case 0x206518u: goto label_206518;
            case 0x20651Cu: goto label_20651c;
            case 0x206520u: goto label_206520;
            case 0x206524u: goto label_206524;
            case 0x206528u: goto label_206528;
            case 0x20652Cu: goto label_20652c;
            case 0x206530u: goto label_206530;
            case 0x206534u: goto label_206534;
            case 0x206538u: goto label_206538;
            case 0x20653Cu: goto label_20653c;
            case 0x206540u: goto label_206540;
            case 0x206544u: goto label_206544;
            case 0x206548u: goto label_206548;
            case 0x20654Cu: goto label_20654c;
            case 0x206550u: goto label_206550;
            case 0x206554u: goto label_206554;
            case 0x206558u: goto label_206558;
            case 0x20655Cu: goto label_20655c;
            case 0x206560u: goto label_206560;
            case 0x206564u: goto label_206564;
            case 0x206568u: goto label_206568;
            case 0x20656Cu: goto label_20656c;
            case 0x206570u: goto label_206570;
            case 0x206574u: goto label_206574;
            case 0x206578u: goto label_206578;
            case 0x20657Cu: goto label_20657c;
            case 0x206580u: goto label_206580;
            case 0x206584u: goto label_206584;
            case 0x206588u: goto label_206588;
            case 0x20658Cu: goto label_20658c;
            case 0x206590u: goto label_206590;
            case 0x206594u: goto label_206594;
            case 0x206598u: goto label_206598;
            case 0x20659Cu: goto label_20659c;
            case 0x2065A0u: goto label_2065a0;
            case 0x2065A4u: goto label_2065a4;
            case 0x2065A8u: goto label_2065a8;
            case 0x2065ACu: goto label_2065ac;
            case 0x2065B0u: goto label_2065b0;
            case 0x2065B4u: goto label_2065b4;
            case 0x2065B8u: goto label_2065b8;
            case 0x2065BCu: goto label_2065bc;
            case 0x2065C0u: goto label_2065c0;
            case 0x2065C4u: goto label_2065c4;
            case 0x2065C8u: goto label_2065c8;
            case 0x2065CCu: goto label_2065cc;
            case 0x2065D0u: goto label_2065d0;
            case 0x2065D4u: goto label_2065d4;
            case 0x2065D8u: goto label_2065d8;
            case 0x2065DCu: goto label_2065dc;
            case 0x2065E0u: goto label_2065e0;
            case 0x2065E4u: goto label_2065e4;
            case 0x2065E8u: goto label_2065e8;
            case 0x2065ECu: goto label_2065ec;
            case 0x2065F0u: goto label_2065f0;
            case 0x2065F4u: goto label_2065f4;
            case 0x2065F8u: goto label_2065f8;
            case 0x2065FCu: goto label_2065fc;
            case 0x206600u: goto label_206600;
            case 0x206604u: goto label_206604;
            case 0x206608u: goto label_206608;
            case 0x20660Cu: goto label_20660c;
            case 0x206610u: goto label_206610;
            case 0x206614u: goto label_206614;
            case 0x206618u: goto label_206618;
            case 0x20661Cu: goto label_20661c;
            case 0x206620u: goto label_206620;
            case 0x206624u: goto label_206624;
            case 0x206628u: goto label_206628;
            case 0x20662Cu: goto label_20662c;
            case 0x206630u: goto label_206630;
            case 0x206634u: goto label_206634;
            case 0x206638u: goto label_206638;
            case 0x20663Cu: goto label_20663c;
            case 0x206640u: goto label_206640;
            case 0x206644u: goto label_206644;
            case 0x206648u: goto label_206648;
            case 0x20664Cu: goto label_20664c;
            case 0x206650u: goto label_206650;
            case 0x206654u: goto label_206654;
            case 0x206658u: goto label_206658;
            case 0x20665Cu: goto label_20665c;
            case 0x206660u: goto label_206660;
            case 0x206664u: goto label_206664;
            case 0x206668u: goto label_206668;
            case 0x20666Cu: goto label_20666c;
            case 0x206670u: goto label_206670;
            case 0x206674u: goto label_206674;
            case 0x206678u: goto label_206678;
            case 0x20667Cu: goto label_20667c;
            case 0x206680u: goto label_206680;
            case 0x206684u: goto label_206684;
            case 0x206688u: goto label_206688;
            case 0x20668Cu: goto label_20668c;
            case 0x206690u: goto label_206690;
            case 0x206694u: goto label_206694;
            case 0x206698u: goto label_206698;
            case 0x20669Cu: goto label_20669c;
            case 0x2066A0u: goto label_2066a0;
            case 0x2066A4u: goto label_2066a4;
            case 0x2066A8u: goto label_2066a8;
            case 0x2066ACu: goto label_2066ac;
            case 0x2066B0u: goto label_2066b0;
            case 0x2066B4u: goto label_2066b4;
            case 0x2066B8u: goto label_2066b8;
            case 0x2066BCu: goto label_2066bc;
            case 0x2066C0u: goto label_2066c0;
            case 0x2066C4u: goto label_2066c4;
            case 0x2066C8u: goto label_2066c8;
            case 0x2066CCu: goto label_2066cc;
            case 0x2066D0u: goto label_2066d0;
            case 0x2066D4u: goto label_2066d4;
            case 0x2066D8u: goto label_2066d8;
            case 0x2066DCu: goto label_2066dc;
            case 0x2066E0u: goto label_2066e0;
            case 0x2066E4u: goto label_2066e4;
            case 0x2066E8u: goto label_2066e8;
            case 0x2066ECu: goto label_2066ec;
            case 0x2066F0u: goto label_2066f0;
            case 0x2066F4u: goto label_2066f4;
            case 0x2066F8u: goto label_2066f8;
            case 0x2066FCu: goto label_2066fc;
            case 0x206700u: goto label_206700;
            case 0x206704u: goto label_206704;
            case 0x206708u: goto label_206708;
            case 0x20670Cu: goto label_20670c;
            case 0x206710u: goto label_206710;
            case 0x206714u: goto label_206714;
            case 0x206718u: goto label_206718;
            case 0x20671Cu: goto label_20671c;
            case 0x206720u: goto label_206720;
            case 0x206724u: goto label_206724;
            case 0x206728u: goto label_206728;
            case 0x20672Cu: goto label_20672c;
            case 0x206730u: goto label_206730;
            case 0x206734u: goto label_206734;
            case 0x206738u: goto label_206738;
            case 0x20673Cu: goto label_20673c;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206748u: goto label_206748;
            case 0x20674Cu: goto label_20674c;
            case 0x206750u: goto label_206750;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x20675Cu: goto label_20675c;
            case 0x206760u: goto label_206760;
            case 0x206764u: goto label_206764;
            case 0x206768u: goto label_206768;
            case 0x20676Cu: goto label_20676c;
            case 0x206770u: goto label_206770;
            case 0x206774u: goto label_206774;
            case 0x206778u: goto label_206778;
            case 0x20677Cu: goto label_20677c;
            case 0x206780u: goto label_206780;
            case 0x206784u: goto label_206784;
            case 0x206788u: goto label_206788;
            case 0x20678Cu: goto label_20678c;
            case 0x206790u: goto label_206790;
            case 0x206794u: goto label_206794;
            case 0x206798u: goto label_206798;
            case 0x20679Cu: goto label_20679c;
            case 0x2067A0u: goto label_2067a0;
            case 0x2067A4u: goto label_2067a4;
            case 0x2067A8u: goto label_2067a8;
            case 0x2067ACu: goto label_2067ac;
            case 0x2067B0u: goto label_2067b0;
            case 0x2067B4u: goto label_2067b4;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067BCu: goto label_2067bc;
            case 0x2067C0u: goto label_2067c0;
            case 0x2067C4u: goto label_2067c4;
            case 0x2067C8u: goto label_2067c8;
            case 0x2067CCu: goto label_2067cc;
            case 0x2067D0u: goto label_2067d0;
            case 0x2067D4u: goto label_2067d4;
            case 0x2067D8u: goto label_2067d8;
            case 0x2067DCu: goto label_2067dc;
            case 0x2067E0u: goto label_2067e0;
            case 0x2067E4u: goto label_2067e4;
            case 0x2067E8u: goto label_2067e8;
            case 0x2067ECu: goto label_2067ec;
            case 0x2067F0u: goto label_2067f0;
            case 0x2067F4u: goto label_2067f4;
            case 0x2067F8u: goto label_2067f8;
            case 0x2067FCu: goto label_2067fc;
            case 0x206800u: goto label_206800;
            case 0x206804u: goto label_206804;
            case 0x206808u: goto label_206808;
            case 0x20680Cu: goto label_20680c;
            case 0x206810u: goto label_206810;
            case 0x206814u: goto label_206814;
            case 0x206818u: goto label_206818;
            case 0x20681Cu: goto label_20681c;
            case 0x206820u: goto label_206820;
            case 0x206824u: goto label_206824;
            case 0x206828u: goto label_206828;
            case 0x20682Cu: goto label_20682c;
            case 0x206830u: goto label_206830;
            case 0x206834u: goto label_206834;
            case 0x206838u: goto label_206838;
            case 0x20683Cu: goto label_20683c;
            case 0x206840u: goto label_206840;
            case 0x206844u: goto label_206844;
            case 0x206848u: goto label_206848;
            case 0x20684Cu: goto label_20684c;
            case 0x206850u: goto label_206850;
            case 0x206854u: goto label_206854;
            case 0x206858u: goto label_206858;
            case 0x20685Cu: goto label_20685c;
            case 0x206860u: goto label_206860;
            case 0x206864u: goto label_206864;
            case 0x206868u: goto label_206868;
            case 0x20686Cu: goto label_20686c;
            case 0x206870u: goto label_206870;
            case 0x206874u: goto label_206874;
            case 0x206878u: goto label_206878;
            case 0x20687Cu: goto label_20687c;
            case 0x206880u: goto label_206880;
            case 0x206884u: goto label_206884;
            case 0x206888u: goto label_206888;
            case 0x20688Cu: goto label_20688c;
            case 0x206890u: goto label_206890;
            case 0x206894u: goto label_206894;
            case 0x206898u: goto label_206898;
            case 0x20689Cu: goto label_20689c;
            case 0x2068A0u: goto label_2068a0;
            case 0x2068A4u: goto label_2068a4;
            case 0x2068A8u: goto label_2068a8;
            case 0x2068ACu: goto label_2068ac;
            case 0x2068B0u: goto label_2068b0;
            case 0x2068B4u: goto label_2068b4;
            case 0x2068B8u: goto label_2068b8;
            case 0x2068BCu: goto label_2068bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2068b8:
    ctx->pc = 0x2068C0u;
}
