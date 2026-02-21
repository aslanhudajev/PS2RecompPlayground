#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveSave
// Address: 0x209410 - 0x209638
void saveSave_0x209410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209410u;

label_209410:
    // 0x209410: 0x27bdff50
    ctx->pc = 0x209410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_209414:
    // 0x209414: 0xffbf00a0
    ctx->pc = 0x209414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_209418:
    // 0x209418: 0xffbe0090
    ctx->pc = 0x209418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_20941c:
    // 0x20941c: 0xffb00080
    ctx->pc = 0x20941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_209420:
    // 0x209420: 0x3a0f02d
    ctx->pc = 0x209420u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_209424:
    // 0x209424: 0xafc40000
    ctx->pc = 0x209424u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_209428:
    // 0x209428: 0xafc50004
    ctx->pc = 0x209428u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_20942c:
    // 0x20942c: 0xafc60008
    ctx->pc = 0x20942cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_209430:
    // 0x209430: 0xafc7000c
    ctx->pc = 0x209430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_209434:
    // 0x209434: 0xafc80010
    ctx->pc = 0x209434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
label_209438:
    // 0x209438: 0x3c020031
    ctx->pc = 0x209438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20943c:
    // 0x20943c: 0x8c42f184
    ctx->pc = 0x20943cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_209440:
    // 0x209440: 0x10400004
label_209444:
    if (ctx->pc == 0x209444u) {
        ctx->pc = 0x209448u;
        goto label_209448;
    }
    ctx->pc = 0x209440u;
    {
        const bool branch_taken_0x209440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209440) {
            ctx->pc = 0x209454u;
            goto label_209454;
        }
    }
    ctx->pc = 0x209448u;
label_209448:
    // 0x209448: 0x102d
    ctx->pc = 0x209448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20944c:
    // 0x20944c: 0x10000073
label_209450:
    if (ctx->pc == 0x209450u) {
        ctx->pc = 0x209454u;
        goto label_209454;
    }
    ctx->pc = 0x20944Cu;
    {
        const bool branch_taken_0x20944c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20944c) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x209454u;
label_209454:
    // 0x209454: 0x8fc40000
    ctx->pc = 0x209454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209458:
    // 0x209458: 0x8fc50004
    ctx->pc = 0x209458u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_20945c:
    // 0x20945c: 0x302d
    ctx->pc = 0x20945cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209460:
    // 0x209460: 0xc0820e2
label_209464:
    if (ctx->pc == 0x209464u) {
        ctx->pc = 0x209468u;
        goto label_209468;
    }
    ctx->pc = 0x209460u;
    SET_GPR_U32(ctx, 31, 0x209468u);
    ctx->pc = 0x208388u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMount_0x208388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209468u; }
    }
    if (ctx->pc != 0x209468u) { return; }
    ctx->pc = 0x209468u;
label_209468:
    // 0x209468: 0xafc20018
    ctx->pc = 0x209468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_20946c:
    // 0x20946c: 0x8fc20018
    ctx->pc = 0x20946cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_209470:
    // 0x209470: 0x1c400004
label_209474:
    if (ctx->pc == 0x209474u) {
        ctx->pc = 0x209478u;
        goto label_209478;
    }
    ctx->pc = 0x209470u;
    {
        const bool branch_taken_0x209470 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x209470) {
            ctx->pc = 0x209484u;
            goto label_209484;
        }
    }
    ctx->pc = 0x209478u;
label_209478:
    // 0x209478: 0x102d
    ctx->pc = 0x209478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20947c:
    // 0x20947c: 0x10000067
label_209480:
    if (ctx->pc == 0x209480u) {
        ctx->pc = 0x209484u;
        goto label_209484;
    }
    ctx->pc = 0x20947Cu;
    {
        const bool branch_taken_0x20947c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20947c) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x209484u;
label_209484:
    // 0x209484: 0x8fc20000
    ctx->pc = 0x209484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209488:
    // 0x209488: 0xafc20020
    ctx->pc = 0x209488u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_20948c:
    // 0x20948c: 0x8fc20004
    ctx->pc = 0x20948cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_209490:
    // 0x209490: 0xafc20024
    ctx->pc = 0x209490u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_209494:
    // 0x209494: 0x27c20004
    ctx->pc = 0x209494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
label_209498:
    // 0x209498: 0x3c0202d
    ctx->pc = 0x209498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20949c:
    // 0x20949c: 0x40282d
    ctx->pc = 0x20949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2094a0:
    // 0x2094a0: 0xc081e72
label_2094a4:
    if (ctx->pc == 0x2094A4u) {
        ctx->pc = 0x2094A8u;
        goto label_2094a8;
    }
    ctx->pc = 0x2094A0u;
    SET_GPR_U32(ctx, 31, 0x2094A8u);
    ctx->pc = 0x2079C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        translatePortAndSlot_0x2079c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094A8u; }
    }
    if (ctx->pc != 0x2094A8u) { return; }
    ctx->pc = 0x2094A8u;
label_2094a8:
    // 0x2094a8: 0x14400004
label_2094ac:
    if (ctx->pc == 0x2094ACu) {
        ctx->pc = 0x2094B0u;
        goto label_2094b0;
    }
    ctx->pc = 0x2094A8u;
    {
        const bool branch_taken_0x2094a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2094a8) {
            ctx->pc = 0x2094BCu;
            goto label_2094bc;
        }
    }
    ctx->pc = 0x2094B0u;
label_2094b0:
    // 0x2094b0: 0x102d
    ctx->pc = 0x2094b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2094b4:
    // 0x2094b4: 0x10000059
label_2094b8:
    if (ctx->pc == 0x2094B8u) {
        ctx->pc = 0x2094BCu;
        goto label_2094bc;
    }
    ctx->pc = 0x2094B4u;
    {
        const bool branch_taken_0x2094b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2094b4) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x2094BCu;
label_2094bc:
    // 0x2094bc: 0x8fc40000
    ctx->pc = 0x2094bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2094c0:
    // 0x2094c0: 0x8fc50004
    ctx->pc = 0x2094c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2094c4:
    // 0x2094c4: 0x3c06003a
    ctx->pc = 0x2094c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
label_2094c8:
    // 0x2094c8: 0x24c64cb0
    ctx->pc = 0x2094c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19632));
label_2094cc:
    // 0x2094cc: 0x382d
    ctx->pc = 0x2094ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2094d0:
    // 0x2094d0: 0xc0b9b0e
label_2094d4:
    if (ctx->pc == 0x2094D4u) {
        ctx->pc = 0x2094D8u;
        goto label_2094d8;
    }
    ctx->pc = 0x2094D0u;
    SET_GPR_U32(ctx, 31, 0x2094D8u);
    ctx->pc = 0x2E6C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcChdir_0x2e6c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094D8u; }
    }
    if (ctx->pc != 0x2094D8u) { return; }
    ctx->pc = 0x2094D8u;
label_2094d8:
    // 0x2094d8: 0x10400008
label_2094dc:
    if (ctx->pc == 0x2094DCu) {
        ctx->pc = 0x2094E0u;
        goto label_2094e0;
    }
    ctx->pc = 0x2094D8u;
    {
        const bool branch_taken_0x2094d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2094d8) {
            ctx->pc = 0x2094FCu;
            goto label_2094fc;
        }
    }
    ctx->pc = 0x2094E0u;
label_2094e0:
    // 0x2094e0: 0x3c04003a
    ctx->pc = 0x2094e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2094e4:
    // 0x2094e4: 0x24844f38
    ctx->pc = 0x2094e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20280));
label_2094e8:
    // 0x2094e8: 0xc0b4a34
label_2094ec:
    if (ctx->pc == 0x2094ECu) {
        ctx->pc = 0x2094F0u;
        goto label_2094f0;
    }
    ctx->pc = 0x2094E8u;
    SET_GPR_U32(ctx, 31, 0x2094F0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094F0u; }
    }
    if (ctx->pc != 0x2094F0u) { return; }
    ctx->pc = 0x2094F0u;
label_2094f0:
    // 0x2094f0: 0x102d
    ctx->pc = 0x2094f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2094f4:
    // 0x2094f4: 0x10000049
label_2094f8:
    if (ctx->pc == 0x2094F8u) {
        ctx->pc = 0x2094FCu;
        goto label_2094fc;
    }
    ctx->pc = 0x2094F4u;
    {
        const bool branch_taken_0x2094f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2094f4) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x2094FCu;
label_2094fc:
    // 0x2094fc: 0x0
    ctx->pc = 0x2094fcu;
    // NOP
label_209500:
    // 0x209500: 0x27c20014
    ctx->pc = 0x209500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_209504:
    // 0x209504: 0x27c30018
    ctx->pc = 0x209504u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_209508:
    // 0x209508: 0x24040001
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20950c:
    // 0x20950c: 0x40282d
    ctx->pc = 0x20950cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209510:
    // 0x209510: 0x60302d
    ctx->pc = 0x209510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209514:
    // 0x209514: 0xc0b9a14
label_209518:
    if (ctx->pc == 0x209518u) {
        ctx->pc = 0x20951Cu;
        goto label_20951c;
    }
    ctx->pc = 0x209514u;
    SET_GPR_U32(ctx, 31, 0x20951Cu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20951Cu; }
    }
    if (ctx->pc != 0x20951Cu) { return; }
    ctx->pc = 0x20951Cu;
label_20951c:
    // 0x20951c: 0x10400003
label_209520:
    if (ctx->pc == 0x209520u) {
        ctx->pc = 0x209524u;
        goto label_209524;
    }
    ctx->pc = 0x20951Cu;
    {
        const bool branch_taken_0x20951c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20951c) {
            ctx->pc = 0x20952Cu;
            goto label_20952c;
        }
    }
    ctx->pc = 0x209524u;
label_209524:
    // 0x209524: 0x1000000b
label_209528:
    if (ctx->pc == 0x209528u) {
        ctx->pc = 0x20952Cu;
        goto label_20952c;
    }
    ctx->pc = 0x209524u;
    {
        const bool branch_taken_0x209524 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209524) {
            ctx->pc = 0x209554u;
            goto label_209554;
        }
    }
    ctx->pc = 0x20952Cu;
label_20952c:
    // 0x20952c: 0x3c02003c
    ctx->pc = 0x20952cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209530:
    // 0x209530: 0x8c42c4e4
    ctx->pc = 0x209530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_209534:
    // 0x209534: 0x10400005
label_209538:
    if (ctx->pc == 0x209538u) {
        ctx->pc = 0x20953Cu;
        goto label_20953c;
    }
    ctx->pc = 0x209534u;
    {
        const bool branch_taken_0x209534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209534) {
            ctx->pc = 0x20954Cu;
            goto label_20954c;
        }
    }
    ctx->pc = 0x20953Cu;
label_20953c:
    // 0x20953c: 0x3c10003c
    ctx->pc = 0x20953cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209540:
    // 0x209540: 0x8e10c4e4
    ctx->pc = 0x209540u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_209544:
    // 0x209544: 0x200f809
label_209548:
    if (ctx->pc == 0x209548u) {
        ctx->pc = 0x20954Cu;
        goto label_20954c;
    }
    ctx->pc = 0x209544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x20954Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209410u: goto label_209410;
            case 0x209414u: goto label_209414;
            case 0x209418u: goto label_209418;
            case 0x20941Cu: goto label_20941c;
            case 0x209420u: goto label_209420;
            case 0x209424u: goto label_209424;
            case 0x209428u: goto label_209428;
            case 0x20942Cu: goto label_20942c;
            case 0x209430u: goto label_209430;
            case 0x209434u: goto label_209434;
            case 0x209438u: goto label_209438;
            case 0x20943Cu: goto label_20943c;
            case 0x209440u: goto label_209440;
            case 0x209444u: goto label_209444;
            case 0x209448u: goto label_209448;
            case 0x20944Cu: goto label_20944c;
            case 0x209450u: goto label_209450;
            case 0x209454u: goto label_209454;
            case 0x209458u: goto label_209458;
            case 0x20945Cu: goto label_20945c;
            case 0x209460u: goto label_209460;
            case 0x209464u: goto label_209464;
            case 0x209468u: goto label_209468;
            case 0x20946Cu: goto label_20946c;
            case 0x209470u: goto label_209470;
            case 0x209474u: goto label_209474;
            case 0x209478u: goto label_209478;
            case 0x20947Cu: goto label_20947c;
            case 0x209480u: goto label_209480;
            case 0x209484u: goto label_209484;
            case 0x209488u: goto label_209488;
            case 0x20948Cu: goto label_20948c;
            case 0x209490u: goto label_209490;
            case 0x209494u: goto label_209494;
            case 0x209498u: goto label_209498;
            case 0x20949Cu: goto label_20949c;
            case 0x2094A0u: goto label_2094a0;
            case 0x2094A4u: goto label_2094a4;
            case 0x2094A8u: goto label_2094a8;
            case 0x2094ACu: goto label_2094ac;
            case 0x2094B0u: goto label_2094b0;
            case 0x2094B4u: goto label_2094b4;
            case 0x2094B8u: goto label_2094b8;
            case 0x2094BCu: goto label_2094bc;
            case 0x2094C0u: goto label_2094c0;
            case 0x2094C4u: goto label_2094c4;
            case 0x2094C8u: goto label_2094c8;
            case 0x2094CCu: goto label_2094cc;
            case 0x2094D0u: goto label_2094d0;
            case 0x2094D4u: goto label_2094d4;
            case 0x2094D8u: goto label_2094d8;
            case 0x2094DCu: goto label_2094dc;
            case 0x2094E0u: goto label_2094e0;
            case 0x2094E4u: goto label_2094e4;
            case 0x2094E8u: goto label_2094e8;
            case 0x2094ECu: goto label_2094ec;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F4u: goto label_2094f4;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209500u: goto label_209500;
            case 0x209504u: goto label_209504;
            case 0x209508u: goto label_209508;
            case 0x20950Cu: goto label_20950c;
            case 0x209510u: goto label_209510;
            case 0x209514u: goto label_209514;
            case 0x209518u: goto label_209518;
            case 0x20951Cu: goto label_20951c;
            case 0x209520u: goto label_209520;
            case 0x209524u: goto label_209524;
            case 0x209528u: goto label_209528;
            case 0x20952Cu: goto label_20952c;
            case 0x209530u: goto label_209530;
            case 0x209534u: goto label_209534;
            case 0x209538u: goto label_209538;
            case 0x20953Cu: goto label_20953c;
            case 0x209540u: goto label_209540;
            case 0x209544u: goto label_209544;
            case 0x209548u: goto label_209548;
            case 0x20954Cu: goto label_20954c;
            case 0x209550u: goto label_209550;
            case 0x209554u: goto label_209554;
            case 0x209558u: goto label_209558;
            case 0x20955Cu: goto label_20955c;
            case 0x209560u: goto label_209560;
            case 0x209564u: goto label_209564;
            case 0x209568u: goto label_209568;
            case 0x20956Cu: goto label_20956c;
            case 0x209570u: goto label_209570;
            case 0x209574u: goto label_209574;
            case 0x209578u: goto label_209578;
            case 0x20957Cu: goto label_20957c;
            case 0x209580u: goto label_209580;
            case 0x209584u: goto label_209584;
            case 0x209588u: goto label_209588;
            case 0x20958Cu: goto label_20958c;
            case 0x209590u: goto label_209590;
            case 0x209594u: goto label_209594;
            case 0x209598u: goto label_209598;
            case 0x20959Cu: goto label_20959c;
            case 0x2095A0u: goto label_2095a0;
            case 0x2095A4u: goto label_2095a4;
            case 0x2095A8u: goto label_2095a8;
            case 0x2095ACu: goto label_2095ac;
            case 0x2095B0u: goto label_2095b0;
            case 0x2095B4u: goto label_2095b4;
            case 0x2095B8u: goto label_2095b8;
            case 0x2095BCu: goto label_2095bc;
            case 0x2095C0u: goto label_2095c0;
            case 0x2095C4u: goto label_2095c4;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2095D0u: goto label_2095d0;
            case 0x2095D4u: goto label_2095d4;
            case 0x2095D8u: goto label_2095d8;
            case 0x2095DCu: goto label_2095dc;
            case 0x2095E0u: goto label_2095e0;
            case 0x2095E4u: goto label_2095e4;
            case 0x2095E8u: goto label_2095e8;
            case 0x2095ECu: goto label_2095ec;
            case 0x2095F0u: goto label_2095f0;
            case 0x2095F4u: goto label_2095f4;
            case 0x2095F8u: goto label_2095f8;
            case 0x2095FCu: goto label_2095fc;
            case 0x209600u: goto label_209600;
            case 0x209604u: goto label_209604;
            case 0x209608u: goto label_209608;
            case 0x20960Cu: goto label_20960c;
            case 0x209610u: goto label_209610;
            case 0x209614u: goto label_209614;
            case 0x209618u: goto label_209618;
            case 0x20961Cu: goto label_20961c;
            case 0x209620u: goto label_209620;
            case 0x209624u: goto label_209624;
            case 0x209628u: goto label_209628;
            case 0x20962Cu: goto label_20962c;
            case 0x209630u: goto label_209630;
            case 0x209634u: goto label_209634;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20954Cu; }
            if (ctx->pc != 0x20954Cu) { return; }
        }
    }
    ctx->pc = 0x20954Cu;
label_20954c:
    // 0x20954c: 0x1000ffec
label_209550:
    if (ctx->pc == 0x209550u) {
        ctx->pc = 0x209554u;
        goto label_209554;
    }
    ctx->pc = 0x20954Cu;
    {
        const bool branch_taken_0x20954c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20954c) {
            ctx->pc = 0x209500u;
            goto label_209500;
        }
    }
    ctx->pc = 0x209554u;
label_209554:
    // 0x209554: 0x8fc20018
    ctx->pc = 0x209554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_209558:
    // 0x209558: 0x10400004
label_20955c:
    if (ctx->pc == 0x20955Cu) {
        ctx->pc = 0x209560u;
        goto label_209560;
    }
    ctx->pc = 0x209558u;
    {
        const bool branch_taken_0x209558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209558) {
            ctx->pc = 0x20956Cu;
            goto label_20956c;
        }
    }
    ctx->pc = 0x209560u;
label_209560:
    // 0x209560: 0x102d
    ctx->pc = 0x209560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209564:
    // 0x209564: 0x1000002d
label_209568:
    if (ctx->pc == 0x209568u) {
        ctx->pc = 0x20956Cu;
        goto label_20956c;
    }
    ctx->pc = 0x209564u;
    {
        const bool branch_taken_0x209564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209564) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x20956Cu;
label_20956c:
    // 0x20956c: 0x27c20030
    ctx->pc = 0x20956cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
label_209570:
    // 0x209570: 0x40202d
    ctx->pc = 0x209570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209574:
    // 0x209574: 0x8fc50008
    ctx->pc = 0x209574u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_209578:
    // 0x209578: 0xc081e8e
label_20957c:
    if (ctx->pc == 0x20957Cu) {
        ctx->pc = 0x209580u;
        goto label_209580;
    }
    ctx->pc = 0x209578u;
    SET_GPR_U32(ctx, 31, 0x209580u);
    ctx->pc = 0x207A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getSaveFileName_0x207a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209580u; }
    }
    if (ctx->pc != 0x209580u) { return; }
    ctx->pc = 0x209580u;
label_209580:
    // 0x209580: 0x27c20030
    ctx->pc = 0x209580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
label_209584:
    // 0x209584: 0x8fc40000
    ctx->pc = 0x209584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209588:
    // 0x209588: 0x8fc50004
    ctx->pc = 0x209588u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_20958c:
    // 0x20958c: 0x40302d
    ctx->pc = 0x20958cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209590:
    // 0x209590: 0x8fc7000c
    ctx->pc = 0x209590u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_209594:
    // 0x209594: 0x8fc80010
    ctx->pc = 0x209594u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209598:
    // 0x209598: 0xc082476
label_20959c:
    if (ctx->pc == 0x20959Cu) {
        ctx->pc = 0x2095A0u;
        goto label_2095a0;
    }
    ctx->pc = 0x209598u;
    SET_GPR_U32(ctx, 31, 0x2095A0u);
    ctx->pc = 0x2091D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        my_write_0x2091d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2095A0u; }
    }
    if (ctx->pc != 0x2095A0u) { return; }
    ctx->pc = 0x2095A0u;
label_2095a0:
    // 0x2095a0: 0xafc20070
    ctx->pc = 0x2095a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
label_2095a4:
    // 0x2095a4: 0x8fc20070
    ctx->pc = 0x2095a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_2095a8:
    // 0x2095a8: 0x14400004
label_2095ac:
    if (ctx->pc == 0x2095ACu) {
        ctx->pc = 0x2095B0u;
        goto label_2095b0;
    }
    ctx->pc = 0x2095A8u;
    {
        const bool branch_taken_0x2095a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2095a8) {
            ctx->pc = 0x2095BCu;
            goto label_2095bc;
        }
    }
    ctx->pc = 0x2095B0u;
label_2095b0:
    // 0x2095b0: 0x102d
    ctx->pc = 0x2095b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2095b4:
    // 0x2095b4: 0x10000019
label_2095b8:
    if (ctx->pc == 0x2095B8u) {
        ctx->pc = 0x2095BCu;
        goto label_2095bc;
    }
    ctx->pc = 0x2095B4u;
    {
        const bool branch_taken_0x2095b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2095b4) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x2095BCu;
label_2095bc:
    // 0x2095bc: 0x27c20030
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
label_2095c0:
    // 0x2095c0: 0x40202d
    ctx->pc = 0x2095c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2095c4:
    // 0x2095c4: 0x2405fffe
    ctx->pc = 0x2095c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2095c8:
    // 0x2095c8: 0xc081e8e
label_2095cc:
    if (ctx->pc == 0x2095CCu) {
        ctx->pc = 0x2095D0u;
        goto label_2095d0;
    }
    ctx->pc = 0x2095C8u;
    SET_GPR_U32(ctx, 31, 0x2095D0u);
    ctx->pc = 0x207A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getSaveFileName_0x207a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2095D0u; }
    }
    if (ctx->pc != 0x2095D0u) { return; }
    ctx->pc = 0x2095D0u;
label_2095d0:
    // 0x2095d0: 0x27c20030
    ctx->pc = 0x2095d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
label_2095d4:
    // 0x2095d4: 0x8fc40000
    ctx->pc = 0x2095d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2095d8:
    // 0x2095d8: 0x8fc50004
    ctx->pc = 0x2095d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2095dc:
    // 0x2095dc: 0x40302d
    ctx->pc = 0x2095dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2095e0:
    // 0x2095e0: 0x3c070032
    ctx->pc = 0x2095e0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
label_2095e4:
    // 0x2095e4: 0x24e7f458
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294964312));
label_2095e8:
    // 0x2095e8: 0x24080020
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
label_2095ec:
    // 0x2095ec: 0xc082476
label_2095f0:
    if (ctx->pc == 0x2095F0u) {
        ctx->pc = 0x2095F4u;
        goto label_2095f4;
    }
    ctx->pc = 0x2095ECu;
    SET_GPR_U32(ctx, 31, 0x2095F4u);
    ctx->pc = 0x2091D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        my_write_0x2091d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2095F4u; }
    }
    if (ctx->pc != 0x2095F4u) { return; }
    ctx->pc = 0x2095F4u;
label_2095f4:
    // 0x2095f4: 0xafc20070
    ctx->pc = 0x2095f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
label_2095f8:
    // 0x2095f8: 0x8fc20070
    ctx->pc = 0x2095f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_2095fc:
    // 0x2095fc: 0x14400004
label_209600:
    if (ctx->pc == 0x209600u) {
        ctx->pc = 0x209604u;
        goto label_209604;
    }
    ctx->pc = 0x2095FCu;
    {
        const bool branch_taken_0x2095fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2095fc) {
            ctx->pc = 0x209610u;
            goto label_209610;
        }
    }
    ctx->pc = 0x209604u;
label_209604:
    // 0x209604: 0x102d
    ctx->pc = 0x209604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209608:
    // 0x209608: 0x10000004
label_20960c:
    if (ctx->pc == 0x20960Cu) {
        ctx->pc = 0x209610u;
        goto label_209610;
    }
    ctx->pc = 0x209608u;
    {
        const bool branch_taken_0x209608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209608) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x209610u;
label_209610:
    // 0x209610: 0x24020001
    ctx->pc = 0x209610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_209614:
    // 0x209614: 0x10000001
label_209618:
    if (ctx->pc == 0x209618u) {
        ctx->pc = 0x20961Cu;
        goto label_20961c;
    }
    ctx->pc = 0x209614u;
    {
        const bool branch_taken_0x209614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209614) {
            ctx->pc = 0x20961Cu;
            goto label_20961c;
        }
    }
    ctx->pc = 0x20961Cu;
label_20961c:
    // 0x20961c: 0x3c0e82d
    ctx->pc = 0x20961cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_209620:
    // 0x209620: 0xdfbf00a0
    ctx->pc = 0x209620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_209624:
    // 0x209624: 0xdfbe0090
    ctx->pc = 0x209624u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_209628:
    // 0x209628: 0xdfb00080
    ctx->pc = 0x209628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20962c:
    // 0x20962c: 0x27bd00b0
    ctx->pc = 0x20962cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
label_209630:
    // 0x209630: 0x3e00008
label_209634:
    if (ctx->pc == 0x209634u) {
        ctx->pc = 0x209638u;
        goto label_fallthrough_0x209630;
    }
    ctx->pc = 0x209630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209410u: goto label_209410;
            case 0x209414u: goto label_209414;
            case 0x209418u: goto label_209418;
            case 0x20941Cu: goto label_20941c;
            case 0x209420u: goto label_209420;
            case 0x209424u: goto label_209424;
            case 0x209428u: goto label_209428;
            case 0x20942Cu: goto label_20942c;
            case 0x209430u: goto label_209430;
            case 0x209434u: goto label_209434;
            case 0x209438u: goto label_209438;
            case 0x20943Cu: goto label_20943c;
            case 0x209440u: goto label_209440;
            case 0x209444u: goto label_209444;
            case 0x209448u: goto label_209448;
            case 0x20944Cu: goto label_20944c;
            case 0x209450u: goto label_209450;
            case 0x209454u: goto label_209454;
            case 0x209458u: goto label_209458;
            case 0x20945Cu: goto label_20945c;
            case 0x209460u: goto label_209460;
            case 0x209464u: goto label_209464;
            case 0x209468u: goto label_209468;
            case 0x20946Cu: goto label_20946c;
            case 0x209470u: goto label_209470;
            case 0x209474u: goto label_209474;
            case 0x209478u: goto label_209478;
            case 0x20947Cu: goto label_20947c;
            case 0x209480u: goto label_209480;
            case 0x209484u: goto label_209484;
            case 0x209488u: goto label_209488;
            case 0x20948Cu: goto label_20948c;
            case 0x209490u: goto label_209490;
            case 0x209494u: goto label_209494;
            case 0x209498u: goto label_209498;
            case 0x20949Cu: goto label_20949c;
            case 0x2094A0u: goto label_2094a0;
            case 0x2094A4u: goto label_2094a4;
            case 0x2094A8u: goto label_2094a8;
            case 0x2094ACu: goto label_2094ac;
            case 0x2094B0u: goto label_2094b0;
            case 0x2094B4u: goto label_2094b4;
            case 0x2094B8u: goto label_2094b8;
            case 0x2094BCu: goto label_2094bc;
            case 0x2094C0u: goto label_2094c0;
            case 0x2094C4u: goto label_2094c4;
            case 0x2094C8u: goto label_2094c8;
            case 0x2094CCu: goto label_2094cc;
            case 0x2094D0u: goto label_2094d0;
            case 0x2094D4u: goto label_2094d4;
            case 0x2094D8u: goto label_2094d8;
            case 0x2094DCu: goto label_2094dc;
            case 0x2094E0u: goto label_2094e0;
            case 0x2094E4u: goto label_2094e4;
            case 0x2094E8u: goto label_2094e8;
            case 0x2094ECu: goto label_2094ec;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F4u: goto label_2094f4;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209500u: goto label_209500;
            case 0x209504u: goto label_209504;
            case 0x209508u: goto label_209508;
            case 0x20950Cu: goto label_20950c;
            case 0x209510u: goto label_209510;
            case 0x209514u: goto label_209514;
            case 0x209518u: goto label_209518;
            case 0x20951Cu: goto label_20951c;
            case 0x209520u: goto label_209520;
            case 0x209524u: goto label_209524;
            case 0x209528u: goto label_209528;
            case 0x20952Cu: goto label_20952c;
            case 0x209530u: goto label_209530;
            case 0x209534u: goto label_209534;
            case 0x209538u: goto label_209538;
            case 0x20953Cu: goto label_20953c;
            case 0x209540u: goto label_209540;
            case 0x209544u: goto label_209544;
            case 0x209548u: goto label_209548;
            case 0x20954Cu: goto label_20954c;
            case 0x209550u: goto label_209550;
            case 0x209554u: goto label_209554;
            case 0x209558u: goto label_209558;
            case 0x20955Cu: goto label_20955c;
            case 0x209560u: goto label_209560;
            case 0x209564u: goto label_209564;
            case 0x209568u: goto label_209568;
            case 0x20956Cu: goto label_20956c;
            case 0x209570u: goto label_209570;
            case 0x209574u: goto label_209574;
            case 0x209578u: goto label_209578;
            case 0x20957Cu: goto label_20957c;
            case 0x209580u: goto label_209580;
            case 0x209584u: goto label_209584;
            case 0x209588u: goto label_209588;
            case 0x20958Cu: goto label_20958c;
            case 0x209590u: goto label_209590;
            case 0x209594u: goto label_209594;
            case 0x209598u: goto label_209598;
            case 0x20959Cu: goto label_20959c;
            case 0x2095A0u: goto label_2095a0;
            case 0x2095A4u: goto label_2095a4;
            case 0x2095A8u: goto label_2095a8;
            case 0x2095ACu: goto label_2095ac;
            case 0x2095B0u: goto label_2095b0;
            case 0x2095B4u: goto label_2095b4;
            case 0x2095B8u: goto label_2095b8;
            case 0x2095BCu: goto label_2095bc;
            case 0x2095C0u: goto label_2095c0;
            case 0x2095C4u: goto label_2095c4;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2095D0u: goto label_2095d0;
            case 0x2095D4u: goto label_2095d4;
            case 0x2095D8u: goto label_2095d8;
            case 0x2095DCu: goto label_2095dc;
            case 0x2095E0u: goto label_2095e0;
            case 0x2095E4u: goto label_2095e4;
            case 0x2095E8u: goto label_2095e8;
            case 0x2095ECu: goto label_2095ec;
            case 0x2095F0u: goto label_2095f0;
            case 0x2095F4u: goto label_2095f4;
            case 0x2095F8u: goto label_2095f8;
            case 0x2095FCu: goto label_2095fc;
            case 0x209600u: goto label_209600;
            case 0x209604u: goto label_209604;
            case 0x209608u: goto label_209608;
            case 0x20960Cu: goto label_20960c;
            case 0x209610u: goto label_209610;
            case 0x209614u: goto label_209614;
            case 0x209618u: goto label_209618;
            case 0x20961Cu: goto label_20961c;
            case 0x209620u: goto label_209620;
            case 0x209624u: goto label_209624;
            case 0x209628u: goto label_209628;
            case 0x20962Cu: goto label_20962c;
            case 0x209630u: goto label_209630;
            case 0x209634u: goto label_209634;
            default: break;
        }
        return;
    }
label_fallthrough_0x209630:
    ctx->pc = 0x209638u;
}
