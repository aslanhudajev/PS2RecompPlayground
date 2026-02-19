#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: generate_enemy
// Address: 0x2394f0 - 0x239900
void generate_enemy_0x2394f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2394f0u;

label_2394f0:
    // 0x2394f0: 0x27bdff10
    ctx->pc = 0x2394f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
label_2394f4:
    // 0x2394f4: 0xffbf00d0
    ctx->pc = 0x2394f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_2394f8:
    // 0x2394f8: 0xffbe00c0
    ctx->pc = 0x2394f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_2394fc:
    // 0x2394fc: 0xffb700b0
    ctx->pc = 0x2394fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_239500:
    // 0x239500: 0xffb600a0
    ctx->pc = 0x239500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_239504:
    // 0x239504: 0xffb50090
    ctx->pc = 0x239504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_239508:
    // 0x239508: 0xffb40080
    ctx->pc = 0x239508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_23950c:
    // 0x23950c: 0xffb30070
    ctx->pc = 0x23950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_239510:
    // 0x239510: 0xffb20060
    ctx->pc = 0x239510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_239514:
    // 0x239514: 0xffb10050
    ctx->pc = 0x239514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_239518:
    // 0x239518: 0xffb00040
    ctx->pc = 0x239518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_23951c:
    // 0x23951c: 0xe7b400e0
    ctx->pc = 0x23951cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_239520:
    // 0x239520: 0xafa40030
    ctx->pc = 0x239520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_239524:
    // 0x239524: 0xa0a82d
    ctx->pc = 0x239524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239528:
    // 0x239528: 0xc0b02d
    ctx->pc = 0x239528u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23952c:
    // 0x23952c: 0xe0a02d
    ctx->pc = 0x23952cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_239530:
    // 0x239530: 0x46006506
    ctx->pc = 0x239530u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_239534:
    // 0x239534: 0x100802d
    ctx->pc = 0x239534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239538:
    // 0x239538: 0x120902d
    ctx->pc = 0x239538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23953c:
    // 0x23953c: 0x140882d
    ctx->pc = 0x23953cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_239540:
    // 0x239540: 0x3c020031
    ctx->pc = 0x239540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_239544:
    // 0x239544: 0x8c430018
    ctx->pc = 0x239544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_239548:
    // 0x239548: 0x34028007
    ctx->pc = 0x239548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32775));
label_23954c:
    // 0x23954c: 0x14620003
label_239550:
    if (ctx->pc == 0x239550u) {
        ctx->pc = 0x239550u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239554u;
        goto label_239554;
    }
    ctx->pc = 0x23954Cu;
    {
        const bool branch_taken_0x23954c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x239550u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23954c) {
            ctx->pc = 0x23955Cu;
            goto label_23955c;
        }
    }
    ctx->pc = 0x239554u;
label_239554:
    // 0x239554: 0x100000dd
label_239558:
    if (ctx->pc == 0x239558u) {
        ctx->pc = 0x239558u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x23955Cu;
        goto label_23955c;
    }
    ctx->pc = 0x239554u;
    {
        const bool branch_taken_0x239554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239558u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x239554) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x23955Cu;
label_23955c:
    // 0x23955c: 0x3c020032
    ctx->pc = 0x23955cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_239560:
    // 0x239560: 0x8c4207f8
    ctx->pc = 0x239560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
label_239564:
    // 0x239564: 0x10400004
label_239568:
    if (ctx->pc == 0x239568u) {
        ctx->pc = 0x239568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x23956Cu;
        goto label_23956c;
    }
    ctx->pc = 0x239564u;
    {
        const bool branch_taken_0x239564 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x239564) {
            ctx->pc = 0x239578u;
            goto label_239578;
        }
    }
    ctx->pc = 0x23956Cu;
label_23956c:
    // 0x23956c: 0x164000d7
label_239570:
    if (ctx->pc == 0x239570u) {
        ctx->pc = 0x239570u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x239574u;
        goto label_239574;
    }
    ctx->pc = 0x23956Cu;
    {
        const bool branch_taken_0x23956c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x239570u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x23956c) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x239574u;
label_239574:
    // 0x239574: 0x3c020036
    ctx->pc = 0x239574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_239578:
    // 0x239578: 0x8c42d934
    ctx->pc = 0x239578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_23957c:
    // 0x23957c: 0x4400004
label_239580:
    if (ctx->pc == 0x239580u) {
        ctx->pc = 0x239580u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x239584u;
        goto label_239584;
    }
    ctx->pc = 0x23957Cu;
    {
        const bool branch_taken_0x23957c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x239580u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x23957c) {
            ctx->pc = 0x239590u;
            goto label_239590;
        }
    }
    ctx->pc = 0x239584u;
label_239584:
    // 0x239584: 0x8c42d808
    ctx->pc = 0x239584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957064)));
label_239588:
    // 0x239588: 0x144000d0
label_23958c:
    if (ctx->pc == 0x23958Cu) {
        ctx->pc = 0x23958Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x239590u;
        goto label_239590;
    }
    ctx->pc = 0x239588u;
    {
        const bool branch_taken_0x239588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23958Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x239588) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x239590u;
label_239590:
    // 0x239590: 0x2a0202d
    ctx->pc = 0x239590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_239594:
    // 0x239594: 0x2c0282d
    ctx->pc = 0x239594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_239598:
    // 0x239598: 0xc08e4f2
label_23959c:
    if (ctx->pc == 0x23959Cu) {
        ctx->pc = 0x23959Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2395A0u;
        goto label_2395a0;
    }
    ctx->pc = 0x239598u;
    SET_GPR_U32(ctx, 31, 0x2395A0u);
    ctx->pc = 0x23959Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2393C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_fix_ai_0x2393c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395A0u; }
    }
    if (ctx->pc != 0x2395A0u) { return; }
    ctx->pc = 0x2395A0u;
label_2395a0:
    // 0x2395a0: 0x40802d
    ctx->pc = 0x2395a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2395a4:
    // 0x2395a4: 0x3c02ffff
    ctx->pc = 0x2395a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2395a8:
    // 0x2395a8: 0x3442fffe
    ctx->pc = 0x2395a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
label_2395ac:
    // 0x2395ac: 0x16a2000e
label_2395b0:
    if (ctx->pc == 0x2395B0u) {
        ctx->pc = 0x2395B0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2395B4u;
        goto label_2395b4;
    }
    ctx->pc = 0x2395ACu;
    {
        const bool branch_taken_0x2395ac = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2395B0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2395ac) {
            ctx->pc = 0x2395E8u;
            goto label_2395e8;
        }
    }
    ctx->pc = 0x2395B4u;
label_2395b4:
    // 0x2395b4: 0xc0b5c24
label_2395b8:
    if (ctx->pc == 0x2395B8u) {
        ctx->pc = 0x2395B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2395BCu;
        goto label_2395bc;
    }
    ctx->pc = 0x2395B4u;
    SET_GPR_U32(ctx, 31, 0x2395BCu);
    ctx->pc = 0x2395B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395BCu; }
    }
    if (ctx->pc != 0x2395BCu) { return; }
    ctx->pc = 0x2395BCu;
label_2395bc:
    // 0x2395bc: 0x3c030033
    ctx->pc = 0x2395bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_2395c0:
    // 0x2395c0: 0x2463dee0
    ctx->pc = 0x2395c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958816));
label_2395c4:
    // 0x2395c4: 0x21080
    ctx->pc = 0x2395c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2395c8:
    // 0x2395c8: 0x431821
    ctx->pc = 0x2395c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2395cc:
    // 0x2395cc: 0x8c750000
    ctx->pc = 0x2395ccu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2395d0:
    // 0x2395d0: 0x3c030033
    ctx->pc = 0x2395d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_2395d4:
    // 0x2395d4: 0x2463def0
    ctx->pc = 0x2395d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958832));
label_2395d8:
    // 0x2395d8: 0x431021
    ctx->pc = 0x2395d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2395dc:
    // 0x2395dc: 0x8c500000
    ctx->pc = 0x2395dcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2395e0:
    // 0x2395e0: 0x10000011
label_2395e4:
    if (ctx->pc == 0x2395E4u) {
        ctx->pc = 0x2395E4u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2395E8u;
        goto label_2395e8;
    }
    ctx->pc = 0x2395E0u;
    {
        const bool branch_taken_0x2395e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2395E4u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2395e0) {
            ctx->pc = 0x239628u;
            goto label_239628;
        }
    }
    ctx->pc = 0x2395E8u;
label_2395e8:
    // 0x2395e8: 0x3c02ffff
    ctx->pc = 0x2395e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_2395ec:
    // 0x2395ec: 0x3442fffd
    ctx->pc = 0x2395ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
label_2395f0:
    // 0x2395f0: 0x16a2000e
label_2395f4:
    if (ctx->pc == 0x2395F4u) {
        ctx->pc = 0x2395F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294967266));
        ctx->pc = 0x2395F8u;
        goto label_2395f8;
    }
    ctx->pc = 0x2395F0u;
    {
        const bool branch_taken_0x2395f0 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2395F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294967266));
        if (branch_taken_0x2395f0) {
            ctx->pc = 0x23962Cu;
            goto label_23962c;
        }
    }
    ctx->pc = 0x2395F8u;
label_2395f8:
    // 0x2395f8: 0xc0b5c24
label_2395fc:
    if (ctx->pc == 0x2395FCu) {
        ctx->pc = 0x2395FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x239600u;
        goto label_239600;
    }
    ctx->pc = 0x2395F8u;
    SET_GPR_U32(ctx, 31, 0x239600u);
    ctx->pc = 0x2395FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239600u; }
    }
    if (ctx->pc != 0x239600u) { return; }
    ctx->pc = 0x239600u;
label_239600:
    // 0x239600: 0x3c030033
    ctx->pc = 0x239600u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_239604:
    // 0x239604: 0x2463df00
    ctx->pc = 0x239604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958848));
label_239608:
    // 0x239608: 0x21080
    ctx->pc = 0x239608u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_23960c:
    // 0x23960c: 0x431821
    ctx->pc = 0x23960cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_239610:
    // 0x239610: 0x8c750000
    ctx->pc = 0x239610u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239614:
    // 0x239614: 0x3c030033
    ctx->pc = 0x239614u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_239618:
    // 0x239618: 0x2463df10
    ctx->pc = 0x239618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958864));
label_23961c:
    // 0x23961c: 0x431021
    ctx->pc = 0x23961cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_239620:
    // 0x239620: 0x8c500000
    ctx->pc = 0x239620u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_239624:
    // 0x239624: 0x24160003
    ctx->pc = 0x239624u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
label_239628:
    // 0x239628: 0x26a2ffe2
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294967266));
label_23962c:
    // 0x23962c: 0x2c420002
    ctx->pc = 0x23962cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_239630:
    // 0x239630: 0x54400014
label_239634:
    if (ctx->pc == 0x239634u) {
        ctx->pc = 0x239634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239638u;
        goto label_239638;
    }
    ctx->pc = 0x239630u;
    {
        const bool branch_taken_0x239630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x239630) {
            ctx->pc = 0x239634u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x239684u;
            goto label_239684;
        }
    }
    ctx->pc = 0x239638u;
label_239638:
    // 0x239638: 0x3c020033
    ctx->pc = 0x239638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23963c:
    // 0x23963c: 0x24423cc0
    ctx->pc = 0x23963cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15552));
label_239640:
    // 0x239640: 0x151880
    ctx->pc = 0x239640u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
label_239644:
    // 0x239644: 0x621821
    ctx->pc = 0x239644u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_239648:
    // 0x239648: 0x8c620000
    ctx->pc = 0x239648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23964c:
    // 0x23964c: 0x440000b
label_239650:
    if (ctx->pc == 0x239650u) {
        ctx->pc = 0x239650u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        ctx->pc = 0x239654u;
        goto label_239654;
    }
    ctx->pc = 0x23964Cu;
    {
        const bool branch_taken_0x23964c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x239650u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x23964c) {
            ctx->pc = 0x23967Cu;
            goto label_23967c;
        }
    }
    ctx->pc = 0x239654u;
label_239654:
    // 0x239654: 0x24633d78
    ctx->pc = 0x239654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15736));
label_239658:
    // 0x239658: 0x151080
    ctx->pc = 0x239658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_23965c:
    // 0x23965c: 0x431021
    ctx->pc = 0x23965cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_239660:
    // 0x239660: 0x8c430000
    ctx->pc = 0x239660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_239664:
    // 0x239664: 0x24020004
    ctx->pc = 0x239664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_239668:
    // 0x239668: 0x14620006
label_23966c:
    if (ctx->pc == 0x23966Cu) {
        ctx->pc = 0x23966Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239670u;
        goto label_239670;
    }
    ctx->pc = 0x239668u;
    {
        const bool branch_taken_0x239668 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23966Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239668) {
            ctx->pc = 0x239684u;
            goto label_239684;
        }
    }
    ctx->pc = 0x239670u;
label_239670:
    // 0x239670: 0x2ac20004
    ctx->pc = 0x239670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 4));
label_239674:
    // 0x239674: 0x10400003
label_239678:
    if (ctx->pc == 0x239678u) {
        ctx->pc = 0x23967Cu;
        goto label_23967c;
    }
    ctx->pc = 0x239674u;
    {
        const bool branch_taken_0x239674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x239674) {
            ctx->pc = 0x239684u;
            goto label_239684;
        }
    }
    ctx->pc = 0x23967Cu;
label_23967c:
    // 0x23967c: 0x10000093
label_239680:
    if (ctx->pc == 0x239680u) {
        ctx->pc = 0x239680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x239684u;
        goto label_239684;
    }
    ctx->pc = 0x23967Cu;
    {
        const bool branch_taken_0x23967c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x23967c) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x239684u;
label_239684:
    // 0x239684: 0xc08e3b8
label_239688:
    if (ctx->pc == 0x239688u) {
        ctx->pc = 0x239688u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23968Cu;
        goto label_23968c;
    }
    ctx->pc = 0x239684u;
    SET_GPR_U32(ctx, 31, 0x23968Cu);
    ctx->pc = 0x239688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_enemy_slot_0x238ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23968Cu; }
    }
    if (ctx->pc != 0x23968Cu) { return; }
    ctx->pc = 0x23968Cu;
label_23968c:
    // 0x23968c: 0x40b82d
    ctx->pc = 0x23968cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239690:
    // 0x239690: 0x6e10003
label_239694:
    if (ctx->pc == 0x239694u) {
        ctx->pc = 0x239694u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239698u;
        goto label_239698;
    }
    ctx->pc = 0x239690u;
    {
        const bool branch_taken_0x239690 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x239694u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239690) {
            ctx->pc = 0x2396A0u;
            goto label_2396a0;
        }
    }
    ctx->pc = 0x239698u;
label_239698:
    // 0x239698: 0x1000008c
label_23969c:
    if (ctx->pc == 0x23969Cu) {
        ctx->pc = 0x23969Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2396A0u;
        goto label_2396a0;
    }
    ctx->pc = 0x239698u;
    {
        const bool branch_taken_0x239698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23969Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x239698) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x2396A0u;
label_2396a0:
    // 0x2396a0: 0x8fa50030
    ctx->pc = 0x2396a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2396a4:
    // 0x2396a4: 0x2a0302d
    ctx->pc = 0x2396a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2396a8:
    // 0x2396a8: 0x2c0382d
    ctx->pc = 0x2396a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2396ac:
    // 0x2396ac: 0xc08e32a
label_2396b0:
    if (ctx->pc == 0x2396B0u) {
        ctx->pc = 0x2396B0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2396B4u;
        goto label_2396b4;
    }
    ctx->pc = 0x2396ACu;
    SET_GPR_U32(ctx, 31, 0x2396B4u);
    ctx->pc = 0x2396B0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238CA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_enemy_0x238ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2396B4u; }
    }
    if (ctx->pc != 0x2396B4u) { return; }
    ctx->pc = 0x2396B4u;
label_2396b4:
    // 0x2396b4: 0x240303b0
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
label_2396b8:
    // 0x2396b8: 0x2e31818
    ctx->pc = 0x2396b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2396bc:
    // 0x2396bc: 0x3c020033
    ctx->pc = 0x2396bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_2396c0:
    // 0x2396c0: 0x2442dfd0
    ctx->pc = 0x2396c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_2396c4:
    // 0x2396c4: 0x628821
    ctx->pc = 0x2396c4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2396c8:
    // 0x2396c8: 0x12400004
label_2396cc:
    if (ctx->pc == 0x2396CCu) {
        ctx->pc = 0x2396CCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 18));
        ctx->pc = 0x2396D0u;
        goto label_2396d0;
    }
    ctx->pc = 0x2396C8u;
    {
        const bool branch_taken_0x2396c8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2396CCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 18));
        if (branch_taken_0x2396c8) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x2396D0u;
label_2396d0:
    // 0x2396d0: 0x2402001e
    ctx->pc = 0x2396d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_2396d4:
    // 0x2396d4: 0x16a20003
label_2396d8:
    if (ctx->pc == 0x2396D8u) {
        ctx->pc = 0x2396D8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 26));
        ctx->pc = 0x2396DCu;
        goto label_2396dc;
    }
    ctx->pc = 0x2396D4u;
    {
        const bool branch_taken_0x2396d4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2396D8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 26));
        if (branch_taken_0x2396d4) {
            ctx->pc = 0x2396E4u;
            goto label_2396e4;
        }
    }
    ctx->pc = 0x2396DCu;
label_2396dc:
    // 0x2396dc: 0x10000059
label_2396e0:
    if (ctx->pc == 0x2396E0u) {
        ctx->pc = 0x2396E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
        ctx->pc = 0x2396E4u;
        goto label_2396e4;
    }
    ctx->pc = 0x2396DCu;
    {
        const bool branch_taken_0x2396dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2396E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
        if (branch_taken_0x2396dc) {
            ctx->pc = 0x239844u;
            goto label_239844;
        }
    }
    ctx->pc = 0x2396E4u;
label_2396e4:
    // 0x2396e4: 0x1040000c
label_2396e8:
    if (ctx->pc == 0x2396E8u) {
        ctx->pc = 0x2396E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x2396ECu;
        goto label_2396ec;
    }
    ctx->pc = 0x2396E4u;
    {
        const bool branch_taken_0x2396e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2396E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2396e4) {
            ctx->pc = 0x239718u;
            goto label_239718;
        }
    }
    ctx->pc = 0x2396ECu;
label_2396ec:
    // 0x2396ec: 0x24427ef0
    ctx->pc = 0x2396ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32496));
label_2396f0:
    // 0x2396f0: 0x131880
    ctx->pc = 0x2396f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_2396f4:
    // 0x2396f4: 0x621821
    ctx->pc = 0x2396f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2396f8:
    // 0x2396f8: 0x8c620000
    ctx->pc = 0x2396f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2396fc:
    // 0x2396fc: 0x400008
label_239700:
    if (ctx->pc == 0x239700u) {
        ctx->pc = 0x239704u;
        goto label_239704;
    }
    ctx->pc = 0x2396FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2394F0u: goto label_2394f0;
            case 0x2394F4u: goto label_2394f4;
            case 0x2394F8u: goto label_2394f8;
            case 0x2394FCu: goto label_2394fc;
            case 0x239500u: goto label_239500;
            case 0x239504u: goto label_239504;
            case 0x239508u: goto label_239508;
            case 0x23950Cu: goto label_23950c;
            case 0x239510u: goto label_239510;
            case 0x239514u: goto label_239514;
            case 0x239518u: goto label_239518;
            case 0x23951Cu: goto label_23951c;
            case 0x239520u: goto label_239520;
            case 0x239524u: goto label_239524;
            case 0x239528u: goto label_239528;
            case 0x23952Cu: goto label_23952c;
            case 0x239530u: goto label_239530;
            case 0x239534u: goto label_239534;
            case 0x239538u: goto label_239538;
            case 0x23953Cu: goto label_23953c;
            case 0x239540u: goto label_239540;
            case 0x239544u: goto label_239544;
            case 0x239548u: goto label_239548;
            case 0x23954Cu: goto label_23954c;
            case 0x239550u: goto label_239550;
            case 0x239554u: goto label_239554;
            case 0x239558u: goto label_239558;
            case 0x23955Cu: goto label_23955c;
            case 0x239560u: goto label_239560;
            case 0x239564u: goto label_239564;
            case 0x239568u: goto label_239568;
            case 0x23956Cu: goto label_23956c;
            case 0x239570u: goto label_239570;
            case 0x239574u: goto label_239574;
            case 0x239578u: goto label_239578;
            case 0x23957Cu: goto label_23957c;
            case 0x239580u: goto label_239580;
            case 0x239584u: goto label_239584;
            case 0x239588u: goto label_239588;
            case 0x23958Cu: goto label_23958c;
            case 0x239590u: goto label_239590;
            case 0x239594u: goto label_239594;
            case 0x239598u: goto label_239598;
            case 0x23959Cu: goto label_23959c;
            case 0x2395A0u: goto label_2395a0;
            case 0x2395A4u: goto label_2395a4;
            case 0x2395A8u: goto label_2395a8;
            case 0x2395ACu: goto label_2395ac;
            case 0x2395B0u: goto label_2395b0;
            case 0x2395B4u: goto label_2395b4;
            case 0x2395B8u: goto label_2395b8;
            case 0x2395BCu: goto label_2395bc;
            case 0x2395C0u: goto label_2395c0;
            case 0x2395C4u: goto label_2395c4;
            case 0x2395C8u: goto label_2395c8;
            case 0x2395CCu: goto label_2395cc;
            case 0x2395D0u: goto label_2395d0;
            case 0x2395D4u: goto label_2395d4;
            case 0x2395D8u: goto label_2395d8;
            case 0x2395DCu: goto label_2395dc;
            case 0x2395E0u: goto label_2395e0;
            case 0x2395E4u: goto label_2395e4;
            case 0x2395E8u: goto label_2395e8;
            case 0x2395ECu: goto label_2395ec;
            case 0x2395F0u: goto label_2395f0;
            case 0x2395F4u: goto label_2395f4;
            case 0x2395F8u: goto label_2395f8;
            case 0x2395FCu: goto label_2395fc;
            case 0x239600u: goto label_239600;
            case 0x239604u: goto label_239604;
            case 0x239608u: goto label_239608;
            case 0x23960Cu: goto label_23960c;
            case 0x239610u: goto label_239610;
            case 0x239614u: goto label_239614;
            case 0x239618u: goto label_239618;
            case 0x23961Cu: goto label_23961c;
            case 0x239620u: goto label_239620;
            case 0x239624u: goto label_239624;
            case 0x239628u: goto label_239628;
            case 0x23962Cu: goto label_23962c;
            case 0x239630u: goto label_239630;
            case 0x239634u: goto label_239634;
            case 0x239638u: goto label_239638;
            case 0x23963Cu: goto label_23963c;
            case 0x239640u: goto label_239640;
            case 0x239644u: goto label_239644;
            case 0x239648u: goto label_239648;
            case 0x23964Cu: goto label_23964c;
            case 0x239650u: goto label_239650;
            case 0x239654u: goto label_239654;
            case 0x239658u: goto label_239658;
            case 0x23965Cu: goto label_23965c;
            case 0x239660u: goto label_239660;
            case 0x239664u: goto label_239664;
            case 0x239668u: goto label_239668;
            case 0x23966Cu: goto label_23966c;
            case 0x239670u: goto label_239670;
            case 0x239674u: goto label_239674;
            case 0x239678u: goto label_239678;
            case 0x23967Cu: goto label_23967c;
            case 0x239680u: goto label_239680;
            case 0x239684u: goto label_239684;
            case 0x239688u: goto label_239688;
            case 0x23968Cu: goto label_23968c;
            case 0x239690u: goto label_239690;
            case 0x239694u: goto label_239694;
            case 0x239698u: goto label_239698;
            case 0x23969Cu: goto label_23969c;
            case 0x2396A0u: goto label_2396a0;
            case 0x2396A4u: goto label_2396a4;
            case 0x2396A8u: goto label_2396a8;
            case 0x2396ACu: goto label_2396ac;
            case 0x2396B0u: goto label_2396b0;
            case 0x2396B4u: goto label_2396b4;
            case 0x2396B8u: goto label_2396b8;
            case 0x2396BCu: goto label_2396bc;
            case 0x2396C0u: goto label_2396c0;
            case 0x2396C4u: goto label_2396c4;
            case 0x2396C8u: goto label_2396c8;
            case 0x2396CCu: goto label_2396cc;
            case 0x2396D0u: goto label_2396d0;
            case 0x2396D4u: goto label_2396d4;
            case 0x2396D8u: goto label_2396d8;
            case 0x2396DCu: goto label_2396dc;
            case 0x2396E0u: goto label_2396e0;
            case 0x2396E4u: goto label_2396e4;
            case 0x2396E8u: goto label_2396e8;
            case 0x2396ECu: goto label_2396ec;
            case 0x2396F0u: goto label_2396f0;
            case 0x2396F4u: goto label_2396f4;
            case 0x2396F8u: goto label_2396f8;
            case 0x2396FCu: goto label_2396fc;
            case 0x239700u: goto label_239700;
            case 0x239704u: goto label_239704;
            case 0x239708u: goto label_239708;
            case 0x23970Cu: goto label_23970c;
            case 0x239710u: goto label_239710;
            case 0x239714u: goto label_239714;
            case 0x239718u: goto label_239718;
            case 0x23971Cu: goto label_23971c;
            case 0x239720u: goto label_239720;
            case 0x239724u: goto label_239724;
            case 0x239728u: goto label_239728;
            case 0x23972Cu: goto label_23972c;
            case 0x239730u: goto label_239730;
            case 0x239734u: goto label_239734;
            case 0x239738u: goto label_239738;
            case 0x23973Cu: goto label_23973c;
            case 0x239740u: goto label_239740;
            case 0x239744u: goto label_239744;
            case 0x239748u: goto label_239748;
            case 0x23974Cu: goto label_23974c;
            case 0x239750u: goto label_239750;
            case 0x239754u: goto label_239754;
            case 0x239758u: goto label_239758;
            case 0x23975Cu: goto label_23975c;
            case 0x239760u: goto label_239760;
            case 0x239764u: goto label_239764;
            case 0x239768u: goto label_239768;
            case 0x23976Cu: goto label_23976c;
            case 0x239770u: goto label_239770;
            case 0x239774u: goto label_239774;
            case 0x239778u: goto label_239778;
            case 0x23977Cu: goto label_23977c;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x239788u: goto label_239788;
            case 0x23978Cu: goto label_23978c;
            case 0x239790u: goto label_239790;
            case 0x239794u: goto label_239794;
            case 0x239798u: goto label_239798;
            case 0x23979Cu: goto label_23979c;
            case 0x2397A0u: goto label_2397a0;
            case 0x2397A4u: goto label_2397a4;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397ACu: goto label_2397ac;
            case 0x2397B0u: goto label_2397b0;
            case 0x2397B4u: goto label_2397b4;
            case 0x2397B8u: goto label_2397b8;
            case 0x2397BCu: goto label_2397bc;
            case 0x2397C0u: goto label_2397c0;
            case 0x2397C4u: goto label_2397c4;
            case 0x2397C8u: goto label_2397c8;
            case 0x2397CCu: goto label_2397cc;
            case 0x2397D0u: goto label_2397d0;
            case 0x2397D4u: goto label_2397d4;
            case 0x2397D8u: goto label_2397d8;
            case 0x2397DCu: goto label_2397dc;
            case 0x2397E0u: goto label_2397e0;
            case 0x2397E4u: goto label_2397e4;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397ECu: goto label_2397ec;
            case 0x2397F0u: goto label_2397f0;
            case 0x2397F4u: goto label_2397f4;
            case 0x2397F8u: goto label_2397f8;
            case 0x2397FCu: goto label_2397fc;
            case 0x239800u: goto label_239800;
            case 0x239804u: goto label_239804;
            case 0x239808u: goto label_239808;
            case 0x23980Cu: goto label_23980c;
            case 0x239810u: goto label_239810;
            case 0x239814u: goto label_239814;
            case 0x239818u: goto label_239818;
            case 0x23981Cu: goto label_23981c;
            case 0x239820u: goto label_239820;
            case 0x239824u: goto label_239824;
            case 0x239828u: goto label_239828;
            case 0x23982Cu: goto label_23982c;
            case 0x239830u: goto label_239830;
            case 0x239834u: goto label_239834;
            case 0x239838u: goto label_239838;
            case 0x23983Cu: goto label_23983c;
            case 0x239840u: goto label_239840;
            case 0x239844u: goto label_239844;
            case 0x239848u: goto label_239848;
            case 0x23984Cu: goto label_23984c;
            case 0x239850u: goto label_239850;
            case 0x239854u: goto label_239854;
            case 0x239858u: goto label_239858;
            case 0x23985Cu: goto label_23985c;
            case 0x239860u: goto label_239860;
            case 0x239864u: goto label_239864;
            case 0x239868u: goto label_239868;
            case 0x23986Cu: goto label_23986c;
            case 0x239870u: goto label_239870;
            case 0x239874u: goto label_239874;
            case 0x239878u: goto label_239878;
            case 0x23987Cu: goto label_23987c;
            case 0x239880u: goto label_239880;
            case 0x239884u: goto label_239884;
            case 0x239888u: goto label_239888;
            case 0x23988Cu: goto label_23988c;
            case 0x239890u: goto label_239890;
            case 0x239894u: goto label_239894;
            case 0x239898u: goto label_239898;
            case 0x23989Cu: goto label_23989c;
            case 0x2398A0u: goto label_2398a0;
            case 0x2398A4u: goto label_2398a4;
            case 0x2398A8u: goto label_2398a8;
            case 0x2398ACu: goto label_2398ac;
            case 0x2398B0u: goto label_2398b0;
            case 0x2398B4u: goto label_2398b4;
            case 0x2398B8u: goto label_2398b8;
            case 0x2398BCu: goto label_2398bc;
            case 0x2398C0u: goto label_2398c0;
            case 0x2398C4u: goto label_2398c4;
            case 0x2398C8u: goto label_2398c8;
            case 0x2398CCu: goto label_2398cc;
            case 0x2398D0u: goto label_2398d0;
            case 0x2398D4u: goto label_2398d4;
            case 0x2398D8u: goto label_2398d8;
            case 0x2398DCu: goto label_2398dc;
            case 0x2398E0u: goto label_2398e0;
            case 0x2398E4u: goto label_2398e4;
            case 0x2398E8u: goto label_2398e8;
            case 0x2398ECu: goto label_2398ec;
            case 0x2398F0u: goto label_2398f0;
            case 0x2398F4u: goto label_2398f4;
            case 0x2398F8u: goto label_2398f8;
            case 0x2398FCu: goto label_2398fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239704u;
label_239704:
    // 0x239704: 0x24130008
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 8));
label_239708:
    // 0x239708: 0x10000004
label_23970c:
    if (ctx->pc == 0x23970Cu) {
        ctx->pc = 0x23970Cu;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 0), 65486));
        ctx->pc = 0x239710u;
        goto label_239710;
    }
    ctx->pc = 0x239708u;
    {
        const bool branch_taken_0x239708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23970Cu;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 0), 65486));
        if (branch_taken_0x239708) {
            ctx->pc = 0x23971Cu;
            goto label_23971c;
        }
    }
    ctx->pc = 0x239710u;
label_239710:
    // 0x239710: 0x10000002
label_239714:
    if (ctx->pc == 0x239714u) {
        ctx->pc = 0x239714u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x239718u;
        goto label_239718;
    }
    ctx->pc = 0x239710u;
    {
        const bool branch_taken_0x239710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239714u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x239710) {
            ctx->pc = 0x23971Cu;
            goto label_23971c;
        }
    }
    ctx->pc = 0x239718u;
label_239718:
    // 0x239718: 0x24130008
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 8));
label_23971c:
    // 0x23971c: 0x24030001
    ctx->pc = 0x23971cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_239720:
    // 0x239720: 0x3a02000c
    ctx->pc = 0x239720u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), 12));
label_239724:
    // 0x239724: 0x62980a
    ctx->pc = 0x239724u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_239728:
    // 0x239728: 0x8fa20030
    ctx->pc = 0x239728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23972c:
    // 0x23972c: 0xc4400000
    ctx->pc = 0x23972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239730:
    // 0x239730: 0xe7a00000
    ctx->pc = 0x239730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_239734:
    // 0x239734: 0xc4410004
    ctx->pc = 0x239734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_239738:
    // 0x239738: 0xc4400008
    ctx->pc = 0x239738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23973c:
    // 0x23973c: 0xe7a00008
    ctx->pc = 0x23973cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_239740:
    // 0x239740: 0xc6200244
    ctx->pc = 0x239740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239744:
    // 0x239744: 0x46000840
    ctx->pc = 0x239744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_239748:
    // 0x239748: 0x24020011
    ctx->pc = 0x239748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
label_23974c:
    // 0x23974c: 0x16a20004
label_239750:
    if (ctx->pc == 0x239750u) {
        ctx->pc = 0x239750u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->pc = 0x239754u;
        goto label_239754;
    }
    ctx->pc = 0x23974Cu;
    {
        const bool branch_taken_0x23974c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x239750u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        if (branch_taken_0x23974c) {
            ctx->pc = 0x239760u;
            goto label_239760;
        }
    }
    ctx->pc = 0x239754u;
label_239754:
    // 0x239754: 0x4480a000
    ctx->pc = 0x239754u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_239758:
    // 0x239758: 0x10000004
label_23975c:
    if (ctx->pc == 0x23975Cu) {
        ctx->pc = 0x23975Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x239760u;
        goto label_239760;
    }
    ctx->pc = 0x239758u;
    {
        const bool branch_taken_0x239758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23975Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x239758) {
            ctx->pc = 0x23976Cu;
            goto label_23976c;
        }
    }
    ctx->pc = 0x239760u;
label_239760:
    // 0x239760: 0xc620024c
    ctx->pc = 0x239760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239764:
    // 0x239764: 0x4600a500
    ctx->pc = 0x239764u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_239768:
    // 0x239768: 0xc6800000
    ctx->pc = 0x239768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23976c:
    // 0x23976c: 0x4600a002
    ctx->pc = 0x23976cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_239770:
    // 0x239770: 0xe7a00020
    ctx->pc = 0x239770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_239774:
    // 0x239774: 0xafa00024
    ctx->pc = 0x239774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_239778:
    // 0x239778: 0xc6800008
    ctx->pc = 0x239778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23977c:
    // 0x23977c: 0x4600a002
    ctx->pc = 0x23977cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_239780:
    // 0x239780: 0xe7a00028
    ctx->pc = 0x239780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_239784:
    // 0x239784: 0xc0b5c24
label_239788:
    if (ctx->pc == 0x239788u) {
        ctx->pc = 0x239788u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23978Cu;
        goto label_23978c;
    }
    ctx->pc = 0x239784u;
    SET_GPR_U32(ctx, 31, 0x23978Cu);
    ctx->pc = 0x239788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23978Cu; }
    }
    if (ctx->pc != 0x23978Cu) { return; }
    ctx->pc = 0x23978Cu;
label_23978c:
    // 0x23978c: 0x40a02d
    ctx->pc = 0x23978cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239790:
    // 0x239790: 0x280802d
    ctx->pc = 0x239790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_239794:
    // 0x239794: 0x1000001c
label_239798:
    if (ctx->pc == 0x239798u) {
        ctx->pc = 0x239798u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x23979Cu;
        goto label_23979c;
    }
    ctx->pc = 0x239794u;
    {
        const bool branch_taken_0x239794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239798u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x239794) {
            ctx->pc = 0x239808u;
            goto label_239808;
        }
    }
    ctx->pc = 0x23979Cu;
label_23979c:
    // 0x23979c: 0x0
    ctx->pc = 0x23979cu;
    // NOP
label_2397a0:
    // 0x2397a0: 0x4410006
label_2397a4:
    if (ctx->pc == 0x2397A4u) {
        ctx->pc = 0x2397A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2397A8u;
        goto label_2397a8;
    }
    ctx->pc = 0x2397A0u;
    {
        const bool branch_taken_0x2397a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2397A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2397a0) {
            ctx->pc = 0x2397BCu;
            goto label_2397bc;
        }
    }
    ctx->pc = 0x2397A8u;
label_2397a8:
    // 0x2397a8: 0x24030001
    ctx->pc = 0x2397a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2397ac:
    // 0x2397ac: 0x2031004
    ctx->pc = 0x2397acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_2397b0:
    // 0x2397b0: 0x3c21025
    ctx->pc = 0x2397b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2397b4:
    // 0x2397b4: 0x305effff
    ctx->pc = 0x2397b4u;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 2), 65535));
label_2397b8:
    // 0x2397b8: 0x26020001
    ctx->pc = 0x2397b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
label_2397bc:
    // 0x2397bc: 0x53001a
    ctx->pc = 0x2397bcu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2397c0:
    // 0x2397c0: 0x1010
    ctx->pc = 0x2397c0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_2397c4:
    // 0x2397c4: 0x52600001
label_2397c8:
    if (ctx->pc == 0x2397C8u) {
        ctx->pc = 0x2397C8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2397CCu;
        goto label_2397cc;
    }
    ctx->pc = 0x2397C4u;
    {
        const bool branch_taken_0x2397c4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2397c4) {
            ctx->pc = 0x2397C8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2397CCu;
            goto label_2397cc;
        }
    }
    ctx->pc = 0x2397CCu;
label_2397cc:
    // 0x2397cc: 0x40802d
    ctx->pc = 0x2397ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2397d0:
    // 0x2397d0: 0x1614000e
label_2397d4:
    if (ctx->pc == 0x2397D4u) {
        ctx->pc = 0x2397D4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), GPR_U32(ctx, 16) & 0x1F));
        ctx->pc = 0x2397D8u;
        goto label_2397d8;
    }
    ctx->pc = 0x2397D0u;
    {
        const bool branch_taken_0x2397d0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 20));
        ctx->pc = 0x2397D4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), GPR_U32(ctx, 16) & 0x1F));
        if (branch_taken_0x2397d0) {
            ctx->pc = 0x23980Cu;
            goto label_23980c;
        }
    }
    ctx->pc = 0x2397D8u;
label_2397d8:
    // 0x2397d8: 0x8e240070
    ctx->pc = 0x2397d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2397dc:
    // 0x2397dc: 0x24050002
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_2397e0:
    // 0x2397e0: 0xc0b41b8
label_2397e4:
    if (ctx->pc == 0x2397E4u) {
        ctx->pc = 0x2397E4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2397E8u;
        goto label_2397e8;
    }
    ctx->pc = 0x2397E0u;
    SET_GPR_U32(ctx, 31, 0x2397E8u);
    ctx->pc = 0x2397E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2397E8u; }
    }
    if (ctx->pc != 0x2397E8u) { return; }
    ctx->pc = 0x2397E8u;
label_2397e8:
    // 0x2397e8: 0x8e2401f0
    ctx->pc = 0x2397e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_2397ec:
    // 0x2397ec: 0x10800003
label_2397f0:
    if (ctx->pc == 0x2397F0u) {
        ctx->pc = 0x2397F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2397F4u;
        goto label_2397f4;
    }
    ctx->pc = 0x2397ECu;
    {
        const bool branch_taken_0x2397ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2397F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2397ec) {
            ctx->pc = 0x2397FCu;
            goto label_2397fc;
        }
    }
    ctx->pc = 0x2397F4u;
label_2397f4:
    // 0x2397f4: 0xc0b41b8
label_2397f8:
    if (ctx->pc == 0x2397F8u) {
        ctx->pc = 0x2397F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2397FCu;
        goto label_2397fc;
    }
    ctx->pc = 0x2397F4u;
    SET_GPR_U32(ctx, 31, 0x2397FCu);
    ctx->pc = 0x2397F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2397FCu; }
    }
    if (ctx->pc != 0x2397FCu) { return; }
    ctx->pc = 0x2397FCu;
label_2397fc:
    // 0x2397fc: 0xae2000c8
    ctx->pc = 0x2397fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_239800:
    // 0x239800: 0x10000032
label_239804:
    if (ctx->pc == 0x239804u) {
        ctx->pc = 0x239804u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x239808u;
        goto label_239808;
    }
    ctx->pc = 0x239800u;
    {
        const bool branch_taken_0x239800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239804u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x239800) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x239808u;
label_239808:
    // 0x239808: 0x21e1007
    ctx->pc = 0x239808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), GPR_U32(ctx, 16) & 0x1F));
label_23980c:
    // 0x23980c: 0x30420001
    ctx->pc = 0x23980cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_239810:
    // 0x239810: 0x1440ffea
label_239814:
    if (ctx->pc == 0x239814u) {
        ctx->pc = 0x239814u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x239818u;
        goto label_239818;
    }
    ctx->pc = 0x239810u;
    {
        const bool branch_taken_0x239810 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x239814u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x239810) {
            ctx->pc = 0x2397BCu;
            goto label_2397bc;
        }
    }
    ctx->pc = 0x239818u;
label_239818:
    // 0x239818: 0x27a40020
    ctx->pc = 0x239818u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_23981c:
    // 0x23981c: 0x240282d
    ctx->pc = 0x23981cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239820:
    // 0x239820: 0xc08e40c
label_239824:
    if (ctx->pc == 0x239824u) {
        ctx->pc = 0x239824u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239828u;
        goto label_239828;
    }
    ctx->pc = 0x239820u;
    SET_GPR_U32(ctx, 31, 0x239828u);
    ctx->pc = 0x239824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239030u;
    {
        const uint32_t __entryPc = ctx->pc;
        gendir_0x239030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239828u; }
    }
    if (ctx->pc != 0x239828u) { return; }
    ctx->pc = 0x239828u;
label_239828:
    // 0x239828: 0xe620026c
    ctx->pc = 0x239828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
label_23982c:
    // 0x23982c: 0x3a0202d
    ctx->pc = 0x23982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_239830:
    // 0x239830: 0x240282d
    ctx->pc = 0x239830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239834:
    // 0x239834: 0xc08e474
label_239838:
    if (ctx->pc == 0x239838u) {
        ctx->pc = 0x239838u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23983Cu;
        goto label_23983c;
    }
    ctx->pc = 0x239834u;
    SET_GPR_U32(ctx, 31, 0x23983Cu);
    ctx->pc = 0x239838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2391D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_enemy_pos_0x2391d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23983Cu; }
    }
    if (ctx->pc != 0x23983Cu) { return; }
    ctx->pc = 0x23983Cu;
label_23983c:
    // 0x23983c: 0x1840ffd8
label_239840:
    if (ctx->pc == 0x239840u) {
        ctx->pc = 0x239844u;
        goto label_239844;
    }
    ctx->pc = 0x23983Cu;
    {
        const bool branch_taken_0x23983c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23983c) {
            ctx->pc = 0x2397A0u;
            goto label_2397a0;
        }
    }
    ctx->pc = 0x239844u;
label_239844:
    // 0x239844: 0x26300010
    ctx->pc = 0x239844u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
label_239848:
    // 0x239848: 0xc080ce2
label_23984c:
    if (ctx->pc == 0x23984Cu) {
        ctx->pc = 0x23984Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239850u;
        goto label_239850;
    }
    ctx->pc = 0x239848u;
    SET_GPR_U32(ctx, 31, 0x239850u);
    ctx->pc = 0x23984Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239850u; }
    }
    if (ctx->pc != 0x239850u) { return; }
    ctx->pc = 0x239850u;
label_239850:
    // 0x239850: 0x200202d
    ctx->pc = 0x239850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239854:
    // 0x239854: 0x26250240
    ctx->pc = 0x239854u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 576));
label_239858:
    // 0x239858: 0xc080cd4
label_23985c:
    if (ctx->pc == 0x23985Cu) {
        ctx->pc = 0x23985Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
        ctx->pc = 0x239860u;
        goto label_239860;
    }
    ctx->pc = 0x239858u;
    SET_GPR_U32(ctx, 31, 0x239860u);
    ctx->pc = 0x23985Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
    ctx->pc = 0x203350u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjOffsets_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239860u; }
    }
    if (ctx->pc != 0x239860u) { return; }
    ctx->pc = 0x239860u;
label_239860:
    // 0x239860: 0x24020001
    ctx->pc = 0x239860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_239864:
    // 0x239864: 0xae2200e0
    ctx->pc = 0x239864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_239868:
    // 0x239868: 0x8e2500f0
    ctx->pc = 0x239868u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_23986c:
    // 0x23986c: 0x4a00005
label_239870:
    if (ctx->pc == 0x239870u) {
        ctx->pc = 0x239870u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x239874u;
        goto label_239874;
    }
    ctx->pc = 0x23986Cu;
    {
        const bool branch_taken_0x23986c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x239870u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 132));
        if (branch_taken_0x23986c) {
            ctx->pc = 0x239884u;
            goto label_239884;
        }
    }
    ctx->pc = 0x239874u;
label_239874:
    // 0x239874: 0x302d
    ctx->pc = 0x239874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239878:
    // 0x239878: 0x44806000
    ctx->pc = 0x239878u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_23987c:
    // 0x23987c: 0xc0840d0
label_239880:
    if (ctx->pc == 0x239880u) {
        ctx->pc = 0x239880u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x239884u;
        goto label_239884;
    }
    ctx->pc = 0x23987Cu;
    SET_GPR_U32(ctx, 31, 0x239884u);
    ctx->pc = 0x239880u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x210340u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAnim_0x210340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239884u; }
    }
    if (ctx->pc != 0x239884u) { return; }
    ctx->pc = 0x239884u;
label_239884:
    // 0x239884: 0xc6210250
    ctx->pc = 0x239884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_239888:
    // 0x239888: 0x3c014000
    ctx->pc = 0x239888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_23988c:
    // 0x23988c: 0x44810000
    ctx->pc = 0x23988cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_239890:
    // 0x239890: 0x46010034
    ctx->pc = 0x239890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_239894:
    // 0x239894: 0x0
    ctx->pc = 0x239894u;
    // NOP
label_239898:
    // 0x239898: 0x4500000b
label_23989c:
    if (ctx->pc == 0x23989Cu) {
        ctx->pc = 0x23989Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 4));
        ctx->pc = 0x2398A0u;
        goto label_2398a0;
    }
    ctx->pc = 0x239898u;
    {
        const bool branch_taken_0x239898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23989Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 4));
        if (branch_taken_0x239898) {
            ctx->pc = 0x2398C8u;
            goto label_2398c8;
        }
    }
    ctx->pc = 0x2398A0u;
label_2398a0:
    // 0x2398a0: 0x10400009
label_2398a4:
    if (ctx->pc == 0x2398A4u) {
        ctx->pc = 0x2398A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x2398A8u;
        goto label_2398a8;
    }
    ctx->pc = 0x2398A0u;
    {
        const bool branch_taken_0x2398a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2398A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2398a0) {
            ctx->pc = 0x2398C8u;
            goto label_2398c8;
        }
    }
    ctx->pc = 0x2398A8u;
label_2398a8:
    // 0x2398a8: 0x24424648
    ctx->pc = 0x2398a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17992));
label_2398ac:
    // 0x2398ac: 0x151880
    ctx->pc = 0x2398acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
label_2398b0:
    // 0x2398b0: 0x621821
    ctx->pc = 0x2398b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2398b4:
    // 0x2398b4: 0x8c620000
    ctx->pc = 0x2398b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2398b8:
    // 0x2398b8: 0x10400003
label_2398bc:
    if (ctx->pc == 0x2398BCu) {
        ctx->pc = 0x2398BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2398C0u;
        goto label_2398c0;
    }
    ctx->pc = 0x2398B8u;
    {
        const bool branch_taken_0x2398b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2398BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2398b8) {
            ctx->pc = 0x2398C8u;
            goto label_2398c8;
        }
    }
    ctx->pc = 0x2398C0u;
label_2398c0:
    // 0x2398c0: 0xc09fcf4
label_2398c4:
    if (ctx->pc == 0x2398C4u) {
        ctx->pc = 0x2398C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2398C8u;
        goto label_2398c8;
    }
    ctx->pc = 0x2398C0u;
    SET_GPR_U32(ctx, 31, 0x2398C8u);
    ctx->pc = 0x2398C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGenFX_0x27f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398C8u; }
    }
    if (ctx->pc != 0x2398C8u) { return; }
    ctx->pc = 0x2398C8u;
label_2398c8:
    // 0x2398c8: 0x2e0102d
    ctx->pc = 0x2398c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2398cc:
    // 0x2398cc: 0xdfbf00d0
    ctx->pc = 0x2398ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2398d0:
    // 0x2398d0: 0xdfbe00c0
    ctx->pc = 0x2398d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2398d4:
    // 0x2398d4: 0xdfb700b0
    ctx->pc = 0x2398d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2398d8:
    // 0x2398d8: 0xdfb600a0
    ctx->pc = 0x2398d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2398dc:
    // 0x2398dc: 0xdfb50090
    ctx->pc = 0x2398dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2398e0:
    // 0x2398e0: 0xdfb40080
    ctx->pc = 0x2398e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2398e4:
    // 0x2398e4: 0xdfb30070
    ctx->pc = 0x2398e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2398e8:
    // 0x2398e8: 0xdfb20060
    ctx->pc = 0x2398e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2398ec:
    // 0x2398ec: 0xdfb10050
    ctx->pc = 0x2398ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2398f0:
    // 0x2398f0: 0xdfb00040
    ctx->pc = 0x2398f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2398f4:
    // 0x2398f4: 0xc7b400e0
    ctx->pc = 0x2398f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2398f8:
    // 0x2398f8: 0x3e00008
label_2398fc:
    if (ctx->pc == 0x2398FCu) {
        ctx->pc = 0x2398FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x239900u;
        goto label_fallthrough_0x2398f8;
    }
    ctx->pc = 0x2398F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2398FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2394F0u: goto label_2394f0;
            case 0x2394F4u: goto label_2394f4;
            case 0x2394F8u: goto label_2394f8;
            case 0x2394FCu: goto label_2394fc;
            case 0x239500u: goto label_239500;
            case 0x239504u: goto label_239504;
            case 0x239508u: goto label_239508;
            case 0x23950Cu: goto label_23950c;
            case 0x239510u: goto label_239510;
            case 0x239514u: goto label_239514;
            case 0x239518u: goto label_239518;
            case 0x23951Cu: goto label_23951c;
            case 0x239520u: goto label_239520;
            case 0x239524u: goto label_239524;
            case 0x239528u: goto label_239528;
            case 0x23952Cu: goto label_23952c;
            case 0x239530u: goto label_239530;
            case 0x239534u: goto label_239534;
            case 0x239538u: goto label_239538;
            case 0x23953Cu: goto label_23953c;
            case 0x239540u: goto label_239540;
            case 0x239544u: goto label_239544;
            case 0x239548u: goto label_239548;
            case 0x23954Cu: goto label_23954c;
            case 0x239550u: goto label_239550;
            case 0x239554u: goto label_239554;
            case 0x239558u: goto label_239558;
            case 0x23955Cu: goto label_23955c;
            case 0x239560u: goto label_239560;
            case 0x239564u: goto label_239564;
            case 0x239568u: goto label_239568;
            case 0x23956Cu: goto label_23956c;
            case 0x239570u: goto label_239570;
            case 0x239574u: goto label_239574;
            case 0x239578u: goto label_239578;
            case 0x23957Cu: goto label_23957c;
            case 0x239580u: goto label_239580;
            case 0x239584u: goto label_239584;
            case 0x239588u: goto label_239588;
            case 0x23958Cu: goto label_23958c;
            case 0x239590u: goto label_239590;
            case 0x239594u: goto label_239594;
            case 0x239598u: goto label_239598;
            case 0x23959Cu: goto label_23959c;
            case 0x2395A0u: goto label_2395a0;
            case 0x2395A4u: goto label_2395a4;
            case 0x2395A8u: goto label_2395a8;
            case 0x2395ACu: goto label_2395ac;
            case 0x2395B0u: goto label_2395b0;
            case 0x2395B4u: goto label_2395b4;
            case 0x2395B8u: goto label_2395b8;
            case 0x2395BCu: goto label_2395bc;
            case 0x2395C0u: goto label_2395c0;
            case 0x2395C4u: goto label_2395c4;
            case 0x2395C8u: goto label_2395c8;
            case 0x2395CCu: goto label_2395cc;
            case 0x2395D0u: goto label_2395d0;
            case 0x2395D4u: goto label_2395d4;
            case 0x2395D8u: goto label_2395d8;
            case 0x2395DCu: goto label_2395dc;
            case 0x2395E0u: goto label_2395e0;
            case 0x2395E4u: goto label_2395e4;
            case 0x2395E8u: goto label_2395e8;
            case 0x2395ECu: goto label_2395ec;
            case 0x2395F0u: goto label_2395f0;
            case 0x2395F4u: goto label_2395f4;
            case 0x2395F8u: goto label_2395f8;
            case 0x2395FCu: goto label_2395fc;
            case 0x239600u: goto label_239600;
            case 0x239604u: goto label_239604;
            case 0x239608u: goto label_239608;
            case 0x23960Cu: goto label_23960c;
            case 0x239610u: goto label_239610;
            case 0x239614u: goto label_239614;
            case 0x239618u: goto label_239618;
            case 0x23961Cu: goto label_23961c;
            case 0x239620u: goto label_239620;
            case 0x239624u: goto label_239624;
            case 0x239628u: goto label_239628;
            case 0x23962Cu: goto label_23962c;
            case 0x239630u: goto label_239630;
            case 0x239634u: goto label_239634;
            case 0x239638u: goto label_239638;
            case 0x23963Cu: goto label_23963c;
            case 0x239640u: goto label_239640;
            case 0x239644u: goto label_239644;
            case 0x239648u: goto label_239648;
            case 0x23964Cu: goto label_23964c;
            case 0x239650u: goto label_239650;
            case 0x239654u: goto label_239654;
            case 0x239658u: goto label_239658;
            case 0x23965Cu: goto label_23965c;
            case 0x239660u: goto label_239660;
            case 0x239664u: goto label_239664;
            case 0x239668u: goto label_239668;
            case 0x23966Cu: goto label_23966c;
            case 0x239670u: goto label_239670;
            case 0x239674u: goto label_239674;
            case 0x239678u: goto label_239678;
            case 0x23967Cu: goto label_23967c;
            case 0x239680u: goto label_239680;
            case 0x239684u: goto label_239684;
            case 0x239688u: goto label_239688;
            case 0x23968Cu: goto label_23968c;
            case 0x239690u: goto label_239690;
            case 0x239694u: goto label_239694;
            case 0x239698u: goto label_239698;
            case 0x23969Cu: goto label_23969c;
            case 0x2396A0u: goto label_2396a0;
            case 0x2396A4u: goto label_2396a4;
            case 0x2396A8u: goto label_2396a8;
            case 0x2396ACu: goto label_2396ac;
            case 0x2396B0u: goto label_2396b0;
            case 0x2396B4u: goto label_2396b4;
            case 0x2396B8u: goto label_2396b8;
            case 0x2396BCu: goto label_2396bc;
            case 0x2396C0u: goto label_2396c0;
            case 0x2396C4u: goto label_2396c4;
            case 0x2396C8u: goto label_2396c8;
            case 0x2396CCu: goto label_2396cc;
            case 0x2396D0u: goto label_2396d0;
            case 0x2396D4u: goto label_2396d4;
            case 0x2396D8u: goto label_2396d8;
            case 0x2396DCu: goto label_2396dc;
            case 0x2396E0u: goto label_2396e0;
            case 0x2396E4u: goto label_2396e4;
            case 0x2396E8u: goto label_2396e8;
            case 0x2396ECu: goto label_2396ec;
            case 0x2396F0u: goto label_2396f0;
            case 0x2396F4u: goto label_2396f4;
            case 0x2396F8u: goto label_2396f8;
            case 0x2396FCu: goto label_2396fc;
            case 0x239700u: goto label_239700;
            case 0x239704u: goto label_239704;
            case 0x239708u: goto label_239708;
            case 0x23970Cu: goto label_23970c;
            case 0x239710u: goto label_239710;
            case 0x239714u: goto label_239714;
            case 0x239718u: goto label_239718;
            case 0x23971Cu: goto label_23971c;
            case 0x239720u: goto label_239720;
            case 0x239724u: goto label_239724;
            case 0x239728u: goto label_239728;
            case 0x23972Cu: goto label_23972c;
            case 0x239730u: goto label_239730;
            case 0x239734u: goto label_239734;
            case 0x239738u: goto label_239738;
            case 0x23973Cu: goto label_23973c;
            case 0x239740u: goto label_239740;
            case 0x239744u: goto label_239744;
            case 0x239748u: goto label_239748;
            case 0x23974Cu: goto label_23974c;
            case 0x239750u: goto label_239750;
            case 0x239754u: goto label_239754;
            case 0x239758u: goto label_239758;
            case 0x23975Cu: goto label_23975c;
            case 0x239760u: goto label_239760;
            case 0x239764u: goto label_239764;
            case 0x239768u: goto label_239768;
            case 0x23976Cu: goto label_23976c;
            case 0x239770u: goto label_239770;
            case 0x239774u: goto label_239774;
            case 0x239778u: goto label_239778;
            case 0x23977Cu: goto label_23977c;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x239788u: goto label_239788;
            case 0x23978Cu: goto label_23978c;
            case 0x239790u: goto label_239790;
            case 0x239794u: goto label_239794;
            case 0x239798u: goto label_239798;
            case 0x23979Cu: goto label_23979c;
            case 0x2397A0u: goto label_2397a0;
            case 0x2397A4u: goto label_2397a4;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397ACu: goto label_2397ac;
            case 0x2397B0u: goto label_2397b0;
            case 0x2397B4u: goto label_2397b4;
            case 0x2397B8u: goto label_2397b8;
            case 0x2397BCu: goto label_2397bc;
            case 0x2397C0u: goto label_2397c0;
            case 0x2397C4u: goto label_2397c4;
            case 0x2397C8u: goto label_2397c8;
            case 0x2397CCu: goto label_2397cc;
            case 0x2397D0u: goto label_2397d0;
            case 0x2397D4u: goto label_2397d4;
            case 0x2397D8u: goto label_2397d8;
            case 0x2397DCu: goto label_2397dc;
            case 0x2397E0u: goto label_2397e0;
            case 0x2397E4u: goto label_2397e4;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397ECu: goto label_2397ec;
            case 0x2397F0u: goto label_2397f0;
            case 0x2397F4u: goto label_2397f4;
            case 0x2397F8u: goto label_2397f8;
            case 0x2397FCu: goto label_2397fc;
            case 0x239800u: goto label_239800;
            case 0x239804u: goto label_239804;
            case 0x239808u: goto label_239808;
            case 0x23980Cu: goto label_23980c;
            case 0x239810u: goto label_239810;
            case 0x239814u: goto label_239814;
            case 0x239818u: goto label_239818;
            case 0x23981Cu: goto label_23981c;
            case 0x239820u: goto label_239820;
            case 0x239824u: goto label_239824;
            case 0x239828u: goto label_239828;
            case 0x23982Cu: goto label_23982c;
            case 0x239830u: goto label_239830;
            case 0x239834u: goto label_239834;
            case 0x239838u: goto label_239838;
            case 0x23983Cu: goto label_23983c;
            case 0x239840u: goto label_239840;
            case 0x239844u: goto label_239844;
            case 0x239848u: goto label_239848;
            case 0x23984Cu: goto label_23984c;
            case 0x239850u: goto label_239850;
            case 0x239854u: goto label_239854;
            case 0x239858u: goto label_239858;
            case 0x23985Cu: goto label_23985c;
            case 0x239860u: goto label_239860;
            case 0x239864u: goto label_239864;
            case 0x239868u: goto label_239868;
            case 0x23986Cu: goto label_23986c;
            case 0x239870u: goto label_239870;
            case 0x239874u: goto label_239874;
            case 0x239878u: goto label_239878;
            case 0x23987Cu: goto label_23987c;
            case 0x239880u: goto label_239880;
            case 0x239884u: goto label_239884;
            case 0x239888u: goto label_239888;
            case 0x23988Cu: goto label_23988c;
            case 0x239890u: goto label_239890;
            case 0x239894u: goto label_239894;
            case 0x239898u: goto label_239898;
            case 0x23989Cu: goto label_23989c;
            case 0x2398A0u: goto label_2398a0;
            case 0x2398A4u: goto label_2398a4;
            case 0x2398A8u: goto label_2398a8;
            case 0x2398ACu: goto label_2398ac;
            case 0x2398B0u: goto label_2398b0;
            case 0x2398B4u: goto label_2398b4;
            case 0x2398B8u: goto label_2398b8;
            case 0x2398BCu: goto label_2398bc;
            case 0x2398C0u: goto label_2398c0;
            case 0x2398C4u: goto label_2398c4;
            case 0x2398C8u: goto label_2398c8;
            case 0x2398CCu: goto label_2398cc;
            case 0x2398D0u: goto label_2398d0;
            case 0x2398D4u: goto label_2398d4;
            case 0x2398D8u: goto label_2398d8;
            case 0x2398DCu: goto label_2398dc;
            case 0x2398E0u: goto label_2398e0;
            case 0x2398E4u: goto label_2398e4;
            case 0x2398E8u: goto label_2398e8;
            case 0x2398ECu: goto label_2398ec;
            case 0x2398F0u: goto label_2398f0;
            case 0x2398F4u: goto label_2398f4;
            case 0x2398F8u: goto label_2398f8;
            case 0x2398FCu: goto label_2398fc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2398f8:
    ctx->pc = 0x239900u;
}
