#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_ai
// Address: 0x242568 - 0x2427b0
void do_ai_0x242568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x242568u;

label_242568:
    // 0x242568: 0x27bdffe0
    ctx->pc = 0x242568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_24256c:
    // 0x24256c: 0xffbf0010
    ctx->pc = 0x24256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_242570:
    // 0x242570: 0xffb00000
    ctx->pc = 0x242570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242574:
    // 0x242574: 0x240303b0
    ctx->pc = 0x242574u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
label_242578:
    // 0x242578: 0x831818
    ctx->pc = 0x242578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24257c:
    // 0x24257c: 0x3c020033
    ctx->pc = 0x24257cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_242580:
    // 0x242580: 0x2442dfd0
    ctx->pc = 0x242580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_242584:
    // 0x242584: 0x628021
    ctx->pc = 0x242584u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_242588:
    // 0x242588: 0xae000224
    ctx->pc = 0x242588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_24258c:
    // 0x24258c: 0xae000228
    ctx->pc = 0x24258cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_242590:
    // 0x242590: 0xae00022c
    ctx->pc = 0x242590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_242594:
    // 0x242594: 0x86030324
    ctx->pc = 0x242594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
label_242598:
    // 0x242598: 0x2c620020
    ctx->pc = 0x242598u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 32));
label_24259c:
    // 0x24259c: 0x1040007b
label_2425a0:
    if (ctx->pc == 0x2425A0u) {
        ctx->pc = 0x2425A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2425A4u;
        goto label_2425a4;
    }
    ctx->pc = 0x24259Cu;
    {
        const bool branch_taken_0x24259c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2425A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x24259c) {
            ctx->pc = 0x24278Cu;
            goto label_24278c;
        }
    }
    ctx->pc = 0x2425A4u;
label_2425a4:
    // 0x2425a4: 0x24428000
    ctx->pc = 0x2425a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934528));
label_2425a8:
    // 0x2425a8: 0x31880
    ctx->pc = 0x2425a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2425ac:
    // 0x2425ac: 0x621821
    ctx->pc = 0x2425acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2425b0:
    // 0x2425b0: 0x8c620000
    ctx->pc = 0x2425b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2425b4:
    // 0x2425b4: 0x400008
label_2425b8:
    if (ctx->pc == 0x2425B8u) {
        ctx->pc = 0x2425BCu;
        goto label_2425bc;
    }
    ctx->pc = 0x2425B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242568u: goto label_242568;
            case 0x24256Cu: goto label_24256c;
            case 0x242570u: goto label_242570;
            case 0x242574u: goto label_242574;
            case 0x242578u: goto label_242578;
            case 0x24257Cu: goto label_24257c;
            case 0x242580u: goto label_242580;
            case 0x242584u: goto label_242584;
            case 0x242588u: goto label_242588;
            case 0x24258Cu: goto label_24258c;
            case 0x242590u: goto label_242590;
            case 0x242594u: goto label_242594;
            case 0x242598u: goto label_242598;
            case 0x24259Cu: goto label_24259c;
            case 0x2425A0u: goto label_2425a0;
            case 0x2425A4u: goto label_2425a4;
            case 0x2425A8u: goto label_2425a8;
            case 0x2425ACu: goto label_2425ac;
            case 0x2425B0u: goto label_2425b0;
            case 0x2425B4u: goto label_2425b4;
            case 0x2425B8u: goto label_2425b8;
            case 0x2425BCu: goto label_2425bc;
            case 0x2425C0u: goto label_2425c0;
            case 0x2425C4u: goto label_2425c4;
            case 0x2425C8u: goto label_2425c8;
            case 0x2425CCu: goto label_2425cc;
            case 0x2425D0u: goto label_2425d0;
            case 0x2425D4u: goto label_2425d4;
            case 0x2425D8u: goto label_2425d8;
            case 0x2425DCu: goto label_2425dc;
            case 0x2425E0u: goto label_2425e0;
            case 0x2425E4u: goto label_2425e4;
            case 0x2425E8u: goto label_2425e8;
            case 0x2425ECu: goto label_2425ec;
            case 0x2425F0u: goto label_2425f0;
            case 0x2425F4u: goto label_2425f4;
            case 0x2425F8u: goto label_2425f8;
            case 0x2425FCu: goto label_2425fc;
            case 0x242600u: goto label_242600;
            case 0x242604u: goto label_242604;
            case 0x242608u: goto label_242608;
            case 0x24260Cu: goto label_24260c;
            case 0x242610u: goto label_242610;
            case 0x242614u: goto label_242614;
            case 0x242618u: goto label_242618;
            case 0x24261Cu: goto label_24261c;
            case 0x242620u: goto label_242620;
            case 0x242624u: goto label_242624;
            case 0x242628u: goto label_242628;
            case 0x24262Cu: goto label_24262c;
            case 0x242630u: goto label_242630;
            case 0x242634u: goto label_242634;
            case 0x242638u: goto label_242638;
            case 0x24263Cu: goto label_24263c;
            case 0x242640u: goto label_242640;
            case 0x242644u: goto label_242644;
            case 0x242648u: goto label_242648;
            case 0x24264Cu: goto label_24264c;
            case 0x242650u: goto label_242650;
            case 0x242654u: goto label_242654;
            case 0x242658u: goto label_242658;
            case 0x24265Cu: goto label_24265c;
            case 0x242660u: goto label_242660;
            case 0x242664u: goto label_242664;
            case 0x242668u: goto label_242668;
            case 0x24266Cu: goto label_24266c;
            case 0x242670u: goto label_242670;
            case 0x242674u: goto label_242674;
            case 0x242678u: goto label_242678;
            case 0x24267Cu: goto label_24267c;
            case 0x242680u: goto label_242680;
            case 0x242684u: goto label_242684;
            case 0x242688u: goto label_242688;
            case 0x24268Cu: goto label_24268c;
            case 0x242690u: goto label_242690;
            case 0x242694u: goto label_242694;
            case 0x242698u: goto label_242698;
            case 0x24269Cu: goto label_24269c;
            case 0x2426A0u: goto label_2426a0;
            case 0x2426A4u: goto label_2426a4;
            case 0x2426A8u: goto label_2426a8;
            case 0x2426ACu: goto label_2426ac;
            case 0x2426B0u: goto label_2426b0;
            case 0x2426B4u: goto label_2426b4;
            case 0x2426B8u: goto label_2426b8;
            case 0x2426BCu: goto label_2426bc;
            case 0x2426C0u: goto label_2426c0;
            case 0x2426C4u: goto label_2426c4;
            case 0x2426C8u: goto label_2426c8;
            case 0x2426CCu: goto label_2426cc;
            case 0x2426D0u: goto label_2426d0;
            case 0x2426D4u: goto label_2426d4;
            case 0x2426D8u: goto label_2426d8;
            case 0x2426DCu: goto label_2426dc;
            case 0x2426E0u: goto label_2426e0;
            case 0x2426E4u: goto label_2426e4;
            case 0x2426E8u: goto label_2426e8;
            case 0x2426ECu: goto label_2426ec;
            case 0x2426F0u: goto label_2426f0;
            case 0x2426F4u: goto label_2426f4;
            case 0x2426F8u: goto label_2426f8;
            case 0x2426FCu: goto label_2426fc;
            case 0x242700u: goto label_242700;
            case 0x242704u: goto label_242704;
            case 0x242708u: goto label_242708;
            case 0x24270Cu: goto label_24270c;
            case 0x242710u: goto label_242710;
            case 0x242714u: goto label_242714;
            case 0x242718u: goto label_242718;
            case 0x24271Cu: goto label_24271c;
            case 0x242720u: goto label_242720;
            case 0x242724u: goto label_242724;
            case 0x242728u: goto label_242728;
            case 0x24272Cu: goto label_24272c;
            case 0x242730u: goto label_242730;
            case 0x242734u: goto label_242734;
            case 0x242738u: goto label_242738;
            case 0x24273Cu: goto label_24273c;
            case 0x242740u: goto label_242740;
            case 0x242744u: goto label_242744;
            case 0x242748u: goto label_242748;
            case 0x24274Cu: goto label_24274c;
            case 0x242750u: goto label_242750;
            case 0x242754u: goto label_242754;
            case 0x242758u: goto label_242758;
            case 0x24275Cu: goto label_24275c;
            case 0x242760u: goto label_242760;
            case 0x242764u: goto label_242764;
            case 0x242768u: goto label_242768;
            case 0x24276Cu: goto label_24276c;
            case 0x242770u: goto label_242770;
            case 0x242774u: goto label_242774;
            case 0x242778u: goto label_242778;
            case 0x24277Cu: goto label_24277c;
            case 0x242780u: goto label_242780;
            case 0x242784u: goto label_242784;
            case 0x242788u: goto label_242788;
            case 0x24278Cu: goto label_24278c;
            case 0x242790u: goto label_242790;
            case 0x242794u: goto label_242794;
            case 0x242798u: goto label_242798;
            case 0x24279Cu: goto label_24279c;
            case 0x2427A0u: goto label_2427a0;
            case 0x2427A4u: goto label_2427a4;
            case 0x2427A8u: goto label_2427a8;
            case 0x2427ACu: goto label_2427ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2425BCu;
label_2425bc:
    // 0x2425bc: 0xc09085e
label_2425c0:
    if (ctx->pc == 0x2425C0u) {
        ctx->pc = 0x2425C4u;
        goto label_2425c4;
    }
    ctx->pc = 0x2425BCu;
    SET_GPR_U32(ctx, 31, 0x2425C4u);
    ctx->pc = 0x242178u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic00_0x242178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425C4u; }
    }
    if (ctx->pc != 0x2425C4u) { return; }
    ctx->pc = 0x2425C4u;
label_2425c4:
    // 0x2425c4: 0x10000074
label_2425c8:
    if (ctx->pc == 0x2425C8u) {
        ctx->pc = 0x2425C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2425CCu;
        goto label_2425cc;
    }
    ctx->pc = 0x2425C4u;
    {
        const bool branch_taken_0x2425c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2425C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2425c4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2425CCu;
label_2425cc:
    // 0x2425cc: 0xc0907f0
label_2425d0:
    if (ctx->pc == 0x2425D0u) {
        ctx->pc = 0x2425D4u;
        goto label_2425d4;
    }
    ctx->pc = 0x2425CCu;
    SET_GPR_U32(ctx, 31, 0x2425D4u);
    ctx->pc = 0x241FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic01_0x241fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425D4u; }
    }
    if (ctx->pc != 0x2425D4u) { return; }
    ctx->pc = 0x2425D4u;
label_2425d4:
    // 0x2425d4: 0x10000070
label_2425d8:
    if (ctx->pc == 0x2425D8u) {
        ctx->pc = 0x2425D8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2425DCu;
        goto label_2425dc;
    }
    ctx->pc = 0x2425D4u;
    {
        const bool branch_taken_0x2425d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2425D8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2425d4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2425DCu;
label_2425dc:
    // 0x2425dc: 0xc09076a
label_2425e0:
    if (ctx->pc == 0x2425E0u) {
        ctx->pc = 0x2425E4u;
        goto label_2425e4;
    }
    ctx->pc = 0x2425DCu;
    SET_GPR_U32(ctx, 31, 0x2425E4u);
    ctx->pc = 0x241DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic02_0x241da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425E4u; }
    }
    if (ctx->pc != 0x2425E4u) { return; }
    ctx->pc = 0x2425E4u;
label_2425e4:
    // 0x2425e4: 0x1000006c
label_2425e8:
    if (ctx->pc == 0x2425E8u) {
        ctx->pc = 0x2425E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2425ECu;
        goto label_2425ec;
    }
    ctx->pc = 0x2425E4u;
    {
        const bool branch_taken_0x2425e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2425E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2425e4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2425ECu;
label_2425ec:
    // 0x2425ec: 0xc0906ee
label_2425f0:
    if (ctx->pc == 0x2425F0u) {
        ctx->pc = 0x2425F4u;
        goto label_2425f4;
    }
    ctx->pc = 0x2425ECu;
    SET_GPR_U32(ctx, 31, 0x2425F4u);
    ctx->pc = 0x241BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic03_0x241bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425F4u; }
    }
    if (ctx->pc != 0x2425F4u) { return; }
    ctx->pc = 0x2425F4u;
label_2425f4:
    // 0x2425f4: 0x10000068
label_2425f8:
    if (ctx->pc == 0x2425F8u) {
        ctx->pc = 0x2425F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2425FCu;
        goto label_2425fc;
    }
    ctx->pc = 0x2425F4u;
    {
        const bool branch_taken_0x2425f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2425F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2425f4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2425FCu;
label_2425fc:
    // 0x2425fc: 0xc090668
label_242600:
    if (ctx->pc == 0x242600u) {
        ctx->pc = 0x242604u;
        goto label_242604;
    }
    ctx->pc = 0x2425FCu;
    SET_GPR_U32(ctx, 31, 0x242604u);
    ctx->pc = 0x2419A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic04_0x2419a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242604u; }
    }
    if (ctx->pc != 0x242604u) { return; }
    ctx->pc = 0x242604u;
label_242604:
    // 0x242604: 0x10000064
label_242608:
    if (ctx->pc == 0x242608u) {
        ctx->pc = 0x242608u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24260Cu;
        goto label_24260c;
    }
    ctx->pc = 0x242604u;
    {
        const bool branch_taken_0x242604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242608u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242604) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24260Cu;
label_24260c:
    // 0x24260c: 0xc09057c
label_242610:
    if (ctx->pc == 0x242610u) {
        ctx->pc = 0x242614u;
        goto label_242614;
    }
    ctx->pc = 0x24260Cu;
    SET_GPR_U32(ctx, 31, 0x242614u);
    ctx->pc = 0x2415F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic05_0x2415f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242614u; }
    }
    if (ctx->pc != 0x242614u) { return; }
    ctx->pc = 0x242614u;
label_242614:
    // 0x242614: 0x10000060
label_242618:
    if (ctx->pc == 0x242618u) {
        ctx->pc = 0x242618u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24261Cu;
        goto label_24261c;
    }
    ctx->pc = 0x242614u;
    {
        const bool branch_taken_0x242614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242618u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242614) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24261Cu;
label_24261c:
    // 0x24261c: 0xc090490
label_242620:
    if (ctx->pc == 0x242620u) {
        ctx->pc = 0x242624u;
        goto label_242624;
    }
    ctx->pc = 0x24261Cu;
    SET_GPR_U32(ctx, 31, 0x242624u);
    ctx->pc = 0x241240u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic06_0x241240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242624u; }
    }
    if (ctx->pc != 0x242624u) { return; }
    ctx->pc = 0x242624u;
label_242624:
    // 0x242624: 0x1000005c
label_242628:
    if (ctx->pc == 0x242628u) {
        ctx->pc = 0x242628u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24262Cu;
        goto label_24262c;
    }
    ctx->pc = 0x242624u;
    {
        const bool branch_taken_0x242624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242628u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242624) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24262Cu;
label_24262c:
    // 0x24262c: 0xc09037a
label_242630:
    if (ctx->pc == 0x242630u) {
        ctx->pc = 0x242634u;
        goto label_242634;
    }
    ctx->pc = 0x24262Cu;
    SET_GPR_U32(ctx, 31, 0x242634u);
    ctx->pc = 0x240DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic07_0x240de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242634u; }
    }
    if (ctx->pc != 0x242634u) { return; }
    ctx->pc = 0x242634u;
label_242634:
    // 0x242634: 0x10000058
label_242638:
    if (ctx->pc == 0x242638u) {
        ctx->pc = 0x242638u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24263Cu;
        goto label_24263c;
    }
    ctx->pc = 0x242634u;
    {
        const bool branch_taken_0x242634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242638u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242634) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24263Cu;
label_24263c:
    // 0x24263c: 0xc09025c
label_242640:
    if (ctx->pc == 0x242640u) {
        ctx->pc = 0x242644u;
        goto label_242644;
    }
    ctx->pc = 0x24263Cu;
    SET_GPR_U32(ctx, 31, 0x242644u);
    ctx->pc = 0x240970u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic08_0x240970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242644u; }
    }
    if (ctx->pc != 0x242644u) { return; }
    ctx->pc = 0x242644u;
label_242644:
    // 0x242644: 0x10000054
label_242648:
    if (ctx->pc == 0x242648u) {
        ctx->pc = 0x242648u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24264Cu;
        goto label_24264c;
    }
    ctx->pc = 0x242644u;
    {
        const bool branch_taken_0x242644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242648u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242644) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24264Cu;
label_24264c:
    // 0x24264c: 0xc09025a
label_242650:
    if (ctx->pc == 0x242650u) {
        ctx->pc = 0x242654u;
        goto label_242654;
    }
    ctx->pc = 0x24264Cu;
    SET_GPR_U32(ctx, 31, 0x242654u);
    ctx->pc = 0x240968u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic09_0x240968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242654u; }
    }
    if (ctx->pc != 0x242654u) { return; }
    ctx->pc = 0x242654u;
label_242654:
    // 0x242654: 0x10000050
label_242658:
    if (ctx->pc == 0x242658u) {
        ctx->pc = 0x242658u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24265Cu;
        goto label_24265c;
    }
    ctx->pc = 0x242654u;
    {
        const bool branch_taken_0x242654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242658u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242654) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24265Cu;
label_24265c:
    // 0x24265c: 0xc08ff8e
label_242660:
    if (ctx->pc == 0x242660u) {
        ctx->pc = 0x242664u;
        goto label_242664;
    }
    ctx->pc = 0x24265Cu;
    SET_GPR_U32(ctx, 31, 0x242664u);
    ctx->pc = 0x23FE38u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic10_0x23fe38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242664u; }
    }
    if (ctx->pc != 0x242664u) { return; }
    ctx->pc = 0x242664u;
label_242664:
    // 0x242664: 0x1000004c
label_242668:
    if (ctx->pc == 0x242668u) {
        ctx->pc = 0x242668u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24266Cu;
        goto label_24266c;
    }
    ctx->pc = 0x242664u;
    {
        const bool branch_taken_0x242664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242668u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242664) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24266Cu;
label_24266c:
    // 0x24266c: 0xc08ff02
label_242670:
    if (ctx->pc == 0x242670u) {
        ctx->pc = 0x242674u;
        goto label_242674;
    }
    ctx->pc = 0x24266Cu;
    SET_GPR_U32(ctx, 31, 0x242674u);
    ctx->pc = 0x23FC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic11_0x23fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242674u; }
    }
    if (ctx->pc != 0x242674u) { return; }
    ctx->pc = 0x242674u;
label_242674:
    // 0x242674: 0x10000048
label_242678:
    if (ctx->pc == 0x242678u) {
        ctx->pc = 0x242678u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24267Cu;
        goto label_24267c;
    }
    ctx->pc = 0x242674u;
    {
        const bool branch_taken_0x242674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242678u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242674) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24267Cu;
label_24267c:
    // 0x24267c: 0xc08fe98
label_242680:
    if (ctx->pc == 0x242680u) {
        ctx->pc = 0x242684u;
        goto label_242684;
    }
    ctx->pc = 0x24267Cu;
    SET_GPR_U32(ctx, 31, 0x242684u);
    ctx->pc = 0x23FA60u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic12_0x23fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242684u; }
    }
    if (ctx->pc != 0x242684u) { return; }
    ctx->pc = 0x242684u;
label_242684:
    // 0x242684: 0x10000044
label_242688:
    if (ctx->pc == 0x242688u) {
        ctx->pc = 0x242688u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24268Cu;
        goto label_24268c;
    }
    ctx->pc = 0x242684u;
    {
        const bool branch_taken_0x242684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242688u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242684) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24268Cu;
label_24268c:
    // 0x24268c: 0xc08fdee
label_242690:
    if (ctx->pc == 0x242690u) {
        ctx->pc = 0x242694u;
        goto label_242694;
    }
    ctx->pc = 0x24268Cu;
    SET_GPR_U32(ctx, 31, 0x242694u);
    ctx->pc = 0x23F7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic13_0x23f7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242694u; }
    }
    if (ctx->pc != 0x242694u) { return; }
    ctx->pc = 0x242694u;
label_242694:
    // 0x242694: 0x10000040
label_242698:
    if (ctx->pc == 0x242698u) {
        ctx->pc = 0x242698u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24269Cu;
        goto label_24269c;
    }
    ctx->pc = 0x242694u;
    {
        const bool branch_taken_0x242694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242698u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242694) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24269Cu;
label_24269c:
    // 0x24269c: 0xc08fce6
label_2426a0:
    if (ctx->pc == 0x2426A0u) {
        ctx->pc = 0x2426A4u;
        goto label_2426a4;
    }
    ctx->pc = 0x24269Cu;
    SET_GPR_U32(ctx, 31, 0x2426A4u);
    ctx->pc = 0x23F398u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic14_0x23f398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426A4u; }
    }
    if (ctx->pc != 0x2426A4u) { return; }
    ctx->pc = 0x2426A4u;
label_2426a4:
    // 0x2426a4: 0x1000003c
label_2426a8:
    if (ctx->pc == 0x2426A8u) {
        ctx->pc = 0x2426A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2426ACu;
        goto label_2426ac;
    }
    ctx->pc = 0x2426A4u;
    {
        const bool branch_taken_0x2426a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2426A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2426a4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2426ACu;
label_2426ac:
    // 0x2426ac: 0xc08fc16
label_2426b0:
    if (ctx->pc == 0x2426B0u) {
        ctx->pc = 0x2426B4u;
        goto label_2426b4;
    }
    ctx->pc = 0x2426ACu;
    SET_GPR_U32(ctx, 31, 0x2426B4u);
    ctx->pc = 0x23F058u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic15_0x23f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426B4u; }
    }
    if (ctx->pc != 0x2426B4u) { return; }
    ctx->pc = 0x2426B4u;
label_2426b4:
    // 0x2426b4: 0x10000038
label_2426b8:
    if (ctx->pc == 0x2426B8u) {
        ctx->pc = 0x2426B8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2426BCu;
        goto label_2426bc;
    }
    ctx->pc = 0x2426B4u;
    {
        const bool branch_taken_0x2426b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2426B8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2426b4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2426BCu;
label_2426bc:
    // 0x2426bc: 0xc08fa1c
label_2426c0:
    if (ctx->pc == 0x2426C0u) {
        ctx->pc = 0x2426C4u;
        goto label_2426c4;
    }
    ctx->pc = 0x2426BCu;
    SET_GPR_U32(ctx, 31, 0x2426C4u);
    ctx->pc = 0x23E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic18_0x23e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426C4u; }
    }
    if (ctx->pc != 0x2426C4u) { return; }
    ctx->pc = 0x2426C4u;
label_2426c4:
    // 0x2426c4: 0x10000034
label_2426c8:
    if (ctx->pc == 0x2426C8u) {
        ctx->pc = 0x2426C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2426CCu;
        goto label_2426cc;
    }
    ctx->pc = 0x2426C4u;
    {
        const bool branch_taken_0x2426c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2426C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2426c4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2426CCu;
label_2426cc:
    // 0x2426cc: 0xc08f958
label_2426d0:
    if (ctx->pc == 0x2426D0u) {
        ctx->pc = 0x2426D4u;
        goto label_2426d4;
    }
    ctx->pc = 0x2426CCu;
    SET_GPR_U32(ctx, 31, 0x2426D4u);
    ctx->pc = 0x23E560u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic19_0x23e560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426D4u; }
    }
    if (ctx->pc != 0x2426D4u) { return; }
    ctx->pc = 0x2426D4u;
label_2426d4:
    // 0x2426d4: 0x10000030
label_2426d8:
    if (ctx->pc == 0x2426D8u) {
        ctx->pc = 0x2426D8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2426DCu;
        goto label_2426dc;
    }
    ctx->pc = 0x2426D4u;
    {
        const bool branch_taken_0x2426d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2426D8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2426d4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2426DCu;
label_2426dc:
    // 0x2426dc: 0xc08f7fc
label_2426e0:
    if (ctx->pc == 0x2426E0u) {
        ctx->pc = 0x2426E4u;
        goto label_2426e4;
    }
    ctx->pc = 0x2426DCu;
    SET_GPR_U32(ctx, 31, 0x2426E4u);
    ctx->pc = 0x23DFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic20_0x23dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426E4u; }
    }
    if (ctx->pc != 0x2426E4u) { return; }
    ctx->pc = 0x2426E4u;
label_2426e4:
    // 0x2426e4: 0x1000002c
label_2426e8:
    if (ctx->pc == 0x2426E8u) {
        ctx->pc = 0x2426E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2426ECu;
        goto label_2426ec;
    }
    ctx->pc = 0x2426E4u;
    {
        const bool branch_taken_0x2426e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2426E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2426e4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2426ECu;
label_2426ec:
    // 0x2426ec: 0xc08f780
label_2426f0:
    if (ctx->pc == 0x2426F0u) {
        ctx->pc = 0x2426F4u;
        goto label_2426f4;
    }
    ctx->pc = 0x2426ECu;
    SET_GPR_U32(ctx, 31, 0x2426F4u);
    ctx->pc = 0x23DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic21_0x23de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426F4u; }
    }
    if (ctx->pc != 0x2426F4u) { return; }
    ctx->pc = 0x2426F4u;
label_2426f4:
    // 0x2426f4: 0x10000028
label_2426f8:
    if (ctx->pc == 0x2426F8u) {
        ctx->pc = 0x2426F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2426FCu;
        goto label_2426fc;
    }
    ctx->pc = 0x2426F4u;
    {
        const bool branch_taken_0x2426f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2426F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x2426f4) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x2426FCu;
label_2426fc:
    // 0x2426fc: 0xc08f710
label_242700:
    if (ctx->pc == 0x242700u) {
        ctx->pc = 0x242704u;
        goto label_242704;
    }
    ctx->pc = 0x2426FCu;
    SET_GPR_U32(ctx, 31, 0x242704u);
    ctx->pc = 0x23DC40u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic22_0x23dc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242704u; }
    }
    if (ctx->pc != 0x242704u) { return; }
    ctx->pc = 0x242704u;
label_242704:
    // 0x242704: 0x10000024
label_242708:
    if (ctx->pc == 0x242708u) {
        ctx->pc = 0x242708u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24270Cu;
        goto label_24270c;
    }
    ctx->pc = 0x242704u;
    {
        const bool branch_taken_0x242704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242708u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242704) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24270Cu;
label_24270c:
    // 0x24270c: 0xc08f6bc
label_242710:
    if (ctx->pc == 0x242710u) {
        ctx->pc = 0x242714u;
        goto label_242714;
    }
    ctx->pc = 0x24270Cu;
    SET_GPR_U32(ctx, 31, 0x242714u);
    ctx->pc = 0x23DAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic23_0x23daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242714u; }
    }
    if (ctx->pc != 0x242714u) { return; }
    ctx->pc = 0x242714u;
label_242714:
    // 0x242714: 0x10000020
label_242718:
    if (ctx->pc == 0x242718u) {
        ctx->pc = 0x242718u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24271Cu;
        goto label_24271c;
    }
    ctx->pc = 0x242714u;
    {
        const bool branch_taken_0x242714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242718u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242714) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24271Cu;
label_24271c:
    // 0x24271c: 0xc08f64a
label_242720:
    if (ctx->pc == 0x242720u) {
        ctx->pc = 0x242724u;
        goto label_242724;
    }
    ctx->pc = 0x24271Cu;
    SET_GPR_U32(ctx, 31, 0x242724u);
    ctx->pc = 0x23D928u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic24_0x23d928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242724u; }
    }
    if (ctx->pc != 0x242724u) { return; }
    ctx->pc = 0x242724u;
label_242724:
    // 0x242724: 0x1000001c
label_242728:
    if (ctx->pc == 0x242728u) {
        ctx->pc = 0x242728u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24272Cu;
        goto label_24272c;
    }
    ctx->pc = 0x242724u;
    {
        const bool branch_taken_0x242724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242728u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242724) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24272Cu;
label_24272c:
    // 0x24272c: 0xc08fb54
label_242730:
    if (ctx->pc == 0x242730u) {
        ctx->pc = 0x242734u;
        goto label_242734;
    }
    ctx->pc = 0x24272Cu;
    SET_GPR_U32(ctx, 31, 0x242734u);
    ctx->pc = 0x23ED50u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic16_0x23ed50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242734u; }
    }
    if (ctx->pc != 0x242734u) { return; }
    ctx->pc = 0x242734u;
label_242734:
    // 0x242734: 0x10000018
label_242738:
    if (ctx->pc == 0x242738u) {
        ctx->pc = 0x242738u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24273Cu;
        goto label_24273c;
    }
    ctx->pc = 0x242734u;
    {
        const bool branch_taken_0x242734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242738u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242734) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24273Cu;
label_24273c:
    // 0x24273c: 0xc08f558
label_242740:
    if (ctx->pc == 0x242740u) {
        ctx->pc = 0x242744u;
        goto label_242744;
    }
    ctx->pc = 0x24273Cu;
    SET_GPR_U32(ctx, 31, 0x242744u);
    ctx->pc = 0x23D560u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic27_0x23d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242744u; }
    }
    if (ctx->pc != 0x242744u) { return; }
    ctx->pc = 0x242744u;
label_242744:
    // 0x242744: 0x10000014
label_242748:
    if (ctx->pc == 0x242748u) {
        ctx->pc = 0x242748u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24274Cu;
        goto label_24274c;
    }
    ctx->pc = 0x242744u;
    {
        const bool branch_taken_0x242744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242748u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242744) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24274Cu;
label_24274c:
    // 0x24274c: 0xc08f4e2
label_242750:
    if (ctx->pc == 0x242750u) {
        ctx->pc = 0x242754u;
        goto label_242754;
    }
    ctx->pc = 0x24274Cu;
    SET_GPR_U32(ctx, 31, 0x242754u);
    ctx->pc = 0x23D388u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic28_0x23d388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242754u; }
    }
    if (ctx->pc != 0x242754u) { return; }
    ctx->pc = 0x242754u;
label_242754:
    // 0x242754: 0x10000010
label_242758:
    if (ctx->pc == 0x242758u) {
        ctx->pc = 0x242758u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24275Cu;
        goto label_24275c;
    }
    ctx->pc = 0x242754u;
    {
        const bool branch_taken_0x242754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242758u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242754) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24275Cu;
label_24275c:
    // 0x24275c: 0xc08f3ee
label_242760:
    if (ctx->pc == 0x242760u) {
        ctx->pc = 0x242764u;
        goto label_242764;
    }
    ctx->pc = 0x24275Cu;
    SET_GPR_U32(ctx, 31, 0x242764u);
    ctx->pc = 0x23CFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic29_0x23cfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242764u; }
    }
    if (ctx->pc != 0x242764u) { return; }
    ctx->pc = 0x242764u;
label_242764:
    // 0x242764: 0x1000000c
label_242768:
    if (ctx->pc == 0x242768u) {
        ctx->pc = 0x242768u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24276Cu;
        goto label_24276c;
    }
    ctx->pc = 0x242764u;
    {
        const bool branch_taken_0x242764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242768u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242764) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24276Cu;
label_24276c:
    // 0x24276c: 0xc08f36e
label_242770:
    if (ctx->pc == 0x242770u) {
        ctx->pc = 0x242774u;
        goto label_242774;
    }
    ctx->pc = 0x24276Cu;
    SET_GPR_U32(ctx, 31, 0x242774u);
    ctx->pc = 0x23CDB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic30_0x23cdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242774u; }
    }
    if (ctx->pc != 0x242774u) { return; }
    ctx->pc = 0x242774u;
label_242774:
    // 0x242774: 0x10000008
label_242778:
    if (ctx->pc == 0x242778u) {
        ctx->pc = 0x242778u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24277Cu;
        goto label_24277c;
    }
    ctx->pc = 0x242774u;
    {
        const bool branch_taken_0x242774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242778u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242774) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24277Cu;
label_24277c:
    // 0x24277c: 0xc08f30e
label_242780:
    if (ctx->pc == 0x242780u) {
        ctx->pc = 0x242784u;
        goto label_242784;
    }
    ctx->pc = 0x24277Cu;
    SET_GPR_U32(ctx, 31, 0x242784u);
    ctx->pc = 0x23CC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_logic31_0x23cc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242784u; }
    }
    if (ctx->pc != 0x242784u) { return; }
    ctx->pc = 0x242784u;
label_242784:
    // 0x242784: 0x10000004
label_242788:
    if (ctx->pc == 0x242788u) {
        ctx->pc = 0x242788u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x24278Cu;
        goto label_24278c;
    }
    ctx->pc = 0x242784u;
    {
        const bool branch_taken_0x242784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242788u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x242784) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x24278Cu;
label_24278c:
    // 0x24278c: 0xc08e734
label_242790:
    if (ctx->pc == 0x242790u) {
        ctx->pc = 0x242794u;
        goto label_242794;
    }
    ctx->pc = 0x24278Cu;
    SET_GPR_U32(ctx, 31, 0x242794u);
    ctx->pc = 0x239CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_enemy_0x239cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242794u; }
    }
    if (ctx->pc != 0x242794u) { return; }
    ctx->pc = 0x242794u;
label_242794:
    // 0x242794: 0x8e0300c8
    ctx->pc = 0x242794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_242798:
    // 0x242798: 0x2402ffff
    ctx->pc = 0x242798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_24279c:
    // 0x24279c: 0x3100b
    ctx->pc = 0x24279cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_2427a0:
    // 0x2427a0: 0xdfbf0010
    ctx->pc = 0x2427a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2427a4:
    // 0x2427a4: 0xdfb00000
    ctx->pc = 0x2427a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2427a8:
    // 0x2427a8: 0x3e00008
label_2427ac:
    if (ctx->pc == 0x2427ACu) {
        ctx->pc = 0x2427ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2427B0u;
        goto label_fallthrough_0x2427a8;
    }
    ctx->pc = 0x2427A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2427ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242568u: goto label_242568;
            case 0x24256Cu: goto label_24256c;
            case 0x242570u: goto label_242570;
            case 0x242574u: goto label_242574;
            case 0x242578u: goto label_242578;
            case 0x24257Cu: goto label_24257c;
            case 0x242580u: goto label_242580;
            case 0x242584u: goto label_242584;
            case 0x242588u: goto label_242588;
            case 0x24258Cu: goto label_24258c;
            case 0x242590u: goto label_242590;
            case 0x242594u: goto label_242594;
            case 0x242598u: goto label_242598;
            case 0x24259Cu: goto label_24259c;
            case 0x2425A0u: goto label_2425a0;
            case 0x2425A4u: goto label_2425a4;
            case 0x2425A8u: goto label_2425a8;
            case 0x2425ACu: goto label_2425ac;
            case 0x2425B0u: goto label_2425b0;
            case 0x2425B4u: goto label_2425b4;
            case 0x2425B8u: goto label_2425b8;
            case 0x2425BCu: goto label_2425bc;
            case 0x2425C0u: goto label_2425c0;
            case 0x2425C4u: goto label_2425c4;
            case 0x2425C8u: goto label_2425c8;
            case 0x2425CCu: goto label_2425cc;
            case 0x2425D0u: goto label_2425d0;
            case 0x2425D4u: goto label_2425d4;
            case 0x2425D8u: goto label_2425d8;
            case 0x2425DCu: goto label_2425dc;
            case 0x2425E0u: goto label_2425e0;
            case 0x2425E4u: goto label_2425e4;
            case 0x2425E8u: goto label_2425e8;
            case 0x2425ECu: goto label_2425ec;
            case 0x2425F0u: goto label_2425f0;
            case 0x2425F4u: goto label_2425f4;
            case 0x2425F8u: goto label_2425f8;
            case 0x2425FCu: goto label_2425fc;
            case 0x242600u: goto label_242600;
            case 0x242604u: goto label_242604;
            case 0x242608u: goto label_242608;
            case 0x24260Cu: goto label_24260c;
            case 0x242610u: goto label_242610;
            case 0x242614u: goto label_242614;
            case 0x242618u: goto label_242618;
            case 0x24261Cu: goto label_24261c;
            case 0x242620u: goto label_242620;
            case 0x242624u: goto label_242624;
            case 0x242628u: goto label_242628;
            case 0x24262Cu: goto label_24262c;
            case 0x242630u: goto label_242630;
            case 0x242634u: goto label_242634;
            case 0x242638u: goto label_242638;
            case 0x24263Cu: goto label_24263c;
            case 0x242640u: goto label_242640;
            case 0x242644u: goto label_242644;
            case 0x242648u: goto label_242648;
            case 0x24264Cu: goto label_24264c;
            case 0x242650u: goto label_242650;
            case 0x242654u: goto label_242654;
            case 0x242658u: goto label_242658;
            case 0x24265Cu: goto label_24265c;
            case 0x242660u: goto label_242660;
            case 0x242664u: goto label_242664;
            case 0x242668u: goto label_242668;
            case 0x24266Cu: goto label_24266c;
            case 0x242670u: goto label_242670;
            case 0x242674u: goto label_242674;
            case 0x242678u: goto label_242678;
            case 0x24267Cu: goto label_24267c;
            case 0x242680u: goto label_242680;
            case 0x242684u: goto label_242684;
            case 0x242688u: goto label_242688;
            case 0x24268Cu: goto label_24268c;
            case 0x242690u: goto label_242690;
            case 0x242694u: goto label_242694;
            case 0x242698u: goto label_242698;
            case 0x24269Cu: goto label_24269c;
            case 0x2426A0u: goto label_2426a0;
            case 0x2426A4u: goto label_2426a4;
            case 0x2426A8u: goto label_2426a8;
            case 0x2426ACu: goto label_2426ac;
            case 0x2426B0u: goto label_2426b0;
            case 0x2426B4u: goto label_2426b4;
            case 0x2426B8u: goto label_2426b8;
            case 0x2426BCu: goto label_2426bc;
            case 0x2426C0u: goto label_2426c0;
            case 0x2426C4u: goto label_2426c4;
            case 0x2426C8u: goto label_2426c8;
            case 0x2426CCu: goto label_2426cc;
            case 0x2426D0u: goto label_2426d0;
            case 0x2426D4u: goto label_2426d4;
            case 0x2426D8u: goto label_2426d8;
            case 0x2426DCu: goto label_2426dc;
            case 0x2426E0u: goto label_2426e0;
            case 0x2426E4u: goto label_2426e4;
            case 0x2426E8u: goto label_2426e8;
            case 0x2426ECu: goto label_2426ec;
            case 0x2426F0u: goto label_2426f0;
            case 0x2426F4u: goto label_2426f4;
            case 0x2426F8u: goto label_2426f8;
            case 0x2426FCu: goto label_2426fc;
            case 0x242700u: goto label_242700;
            case 0x242704u: goto label_242704;
            case 0x242708u: goto label_242708;
            case 0x24270Cu: goto label_24270c;
            case 0x242710u: goto label_242710;
            case 0x242714u: goto label_242714;
            case 0x242718u: goto label_242718;
            case 0x24271Cu: goto label_24271c;
            case 0x242720u: goto label_242720;
            case 0x242724u: goto label_242724;
            case 0x242728u: goto label_242728;
            case 0x24272Cu: goto label_24272c;
            case 0x242730u: goto label_242730;
            case 0x242734u: goto label_242734;
            case 0x242738u: goto label_242738;
            case 0x24273Cu: goto label_24273c;
            case 0x242740u: goto label_242740;
            case 0x242744u: goto label_242744;
            case 0x242748u: goto label_242748;
            case 0x24274Cu: goto label_24274c;
            case 0x242750u: goto label_242750;
            case 0x242754u: goto label_242754;
            case 0x242758u: goto label_242758;
            case 0x24275Cu: goto label_24275c;
            case 0x242760u: goto label_242760;
            case 0x242764u: goto label_242764;
            case 0x242768u: goto label_242768;
            case 0x24276Cu: goto label_24276c;
            case 0x242770u: goto label_242770;
            case 0x242774u: goto label_242774;
            case 0x242778u: goto label_242778;
            case 0x24277Cu: goto label_24277c;
            case 0x242780u: goto label_242780;
            case 0x242784u: goto label_242784;
            case 0x242788u: goto label_242788;
            case 0x24278Cu: goto label_24278c;
            case 0x242790u: goto label_242790;
            case 0x242794u: goto label_242794;
            case 0x242798u: goto label_242798;
            case 0x24279Cu: goto label_24279c;
            case 0x2427A0u: goto label_2427a0;
            case 0x2427A4u: goto label_2427a4;
            case 0x2427A8u: goto label_2427a8;
            case 0x2427ACu: goto label_2427ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x2427a8:
    ctx->pc = 0x2427B0u;
}
