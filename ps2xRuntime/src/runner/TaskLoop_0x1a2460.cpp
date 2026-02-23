#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: TaskLoop
// Address: 0x1a2460 - 0x1a260c
void TaskLoop_0x1a2460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("TaskLoop");


    ctx->pc = 0x1a2460u;

label_1a2460:
    // 0x1a2460: 0x27bdff50
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a2464:
    // 0x1a2464: 0x7fbf0060
    ctx->pc = 0x1a2464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_1a2468:
    // 0x1a2468: 0x7fb50050
    ctx->pc = 0x1a2468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a246c:
    // 0x1a246c: 0x7fb40040
    ctx->pc = 0x1a246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a2470:
    // 0x1a2470: 0x7fb30030
    ctx->pc = 0x1a2470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a2474:
    // 0x1a2474: 0x7fb20020
    ctx->pc = 0x1a2474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a2478:
    // 0x1a2478: 0x7fb10010
    ctx->pc = 0x1a2478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a247c:
    // 0x1a247c: 0x7fb00000
    ctx->pc = 0x1a247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a2480:
    // 0x1a2480: 0x8f858934
    ctx->pc = 0x1a2480u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
label_1a2484:
    // 0x1a2484: 0x7080a628
    ctx->pc = 0x1a2484u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a2488:
    // 0x1a2488: 0x27a30070
    ctx->pc = 0x1a2488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 112));
label_1a248c:
    // 0x1a248c: 0x3c020030
    ctx->pc = 0x1a248cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
label_1a2490:
    // 0x1a2490: 0x27b30074
    ctx->pc = 0x1a2490u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 116));
label_1a2494:
    // 0x1a2494: 0x24462130
    ctx->pc = 0x1a2494u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 8496));
label_1a2498:
    // 0x1a2498: 0xafa50070
    ctx->pc = 0x1a2498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1a249c:
    // 0x1a249c: 0x24040016
    ctx->pc = 0x1a249cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
label_1a24a0:
    // 0x1a24a0: 0xaf838934
    ctx->pc = 0x1a24a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 3));
label_1a24a4:
    // 0x1a24a4: 0x72602e28
    ctx->pc = 0x1a24a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1a24a8:
    // 0x1a24a8: 0x80c30000
    ctx->pc = 0x1a24a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1a24ac:
    // 0x1a24ac: 0x80c20001
    ctx->pc = 0x1a24acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1a24b0:
    // 0x1a24b0: 0x2484ffff
    ctx->pc = 0x1a24b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a24b4:
    // 0x1a24b4: 0xa0a30000
    ctx->pc = 0x1a24b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a24b8:
    // 0x1a24b8: 0xa0a20001
    ctx->pc = 0x1a24b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a24bc:
    // 0x1a24bc: 0x24c60002
    ctx->pc = 0x1a24bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_1a24c0:
    // 0x1a24c0: 0x1c80fff9
label_1a24c4:
    if (ctx->pc == 0x1A24C4u) {
        ctx->pc = 0x1A24C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1A24C8u;
        goto label_1a24c8;
    }
    ctx->pc = 0x1A24C0u;
    {
        const bool branch_taken_0x1a24c0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1A24C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1a24c0) {
            ctx->pc = 0x1A24A8u;
            goto label_1a24a8;
        }
    }
    ctx->pc = 0x1A24C8u;
label_1a24c8:
    // 0x1a24c8: 0x8f838948
    ctx->pc = 0x1a24c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
label_1a24cc:
    // 0x1a24cc: 0x27b200a0
    ctx->pc = 0x1a24ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 160));
label_1a24d0:
    // 0x1a24d0: 0x3c020030
    ctx->pc = 0x1a24d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
label_1a24d4:
    // 0x1a24d4: 0x24442130
    ctx->pc = 0x1a24d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8496));
label_1a24d8:
    // 0x1a24d8: 0x27b100a4
    ctx->pc = 0x1a24d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 164));
label_1a24dc:
    // 0x1a24dc: 0x27b000a8
    ctx->pc = 0x1a24dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 168));
label_1a24e0:
    // 0x1a24e0: 0xae430000
    ctx->pc = 0x1a24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a24e4:
    // 0x1a24e4: 0x8f828944
    ctx->pc = 0x1a24e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
label_1a24e8:
    // 0x1a24e8: 0x27b500ac
    ctx->pc = 0x1a24e8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 172));
label_1a24ec:
    // 0x1a24ec: 0xae220000
    ctx->pc = 0x1a24ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a24f0:
    // 0x1a24f0: 0x8f828940
    ctx->pc = 0x1a24f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
label_1a24f4:
    // 0x1a24f4: 0xae020000
    ctx->pc = 0x1a24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a24f8:
    // 0x1a24f8: 0x8f82894c
    ctx->pc = 0x1a24f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936908)));
label_1a24fc:
    // 0x1a24fc: 0xaea20000
    ctx->pc = 0x1a24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1a2500:
    // 0x1a2500: 0xaf948940
    ctx->pc = 0x1a2500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 20));
label_1a2504:
    // 0x1a2504: 0xaf948948
    ctx->pc = 0x1a2504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 20));
label_1a2508:
    // 0x1a2508: 0x8e820038
    ctx->pc = 0x1a2508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_1a250c:
    // 0x1a250c: 0xaf82894c
    ctx->pc = 0x1a250cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936908), GPR_U32(ctx, 2));
label_1a2510:
    // 0x1a2510: 0xc05122e
label_1a2514:
    if (ctx->pc == 0x1A2514u) {
        ctx->pc = 0x1A2514u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 0));
        ctx->pc = 0x1A2518u;
        goto label_1a2518;
    }
    ctx->pc = 0x1A2510u;
    SET_GPR_U32(ctx, 31, 0x1A2518u);
    ctx->pc = 0x1A2514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 0));
    ctx->pc = 0x1448B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setjmp_0x1448b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2518u; }
        else if (ctx->pc != 0x1A2518u) { ctx->pc = 0x1A2518u; }
    }
    if (ctx->pc != 0x1A2518u) { return; }
    ctx->pc = 0x1A2518u;
label_1a2518:
    // 0x1a2518: 0x24030004
    ctx->pc = 0x1a2518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1a251c:
    // 0x1a251c: 0x1043001d
label_1a2520:
    if (ctx->pc == 0x1A2520u) {
        ctx->pc = 0x1A2524u;
        goto label_1a2524;
    }
    ctx->pc = 0x1A251Cu;
    {
        const bool branch_taken_0x1a251c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a251c) {
            ctx->pc = 0x1A2594u;
            goto label_1a2594;
        }
    }
    ctx->pc = 0x1A2524u;
label_1a2524:
    // 0x1a2524: 0x24030002
    ctx->pc = 0x1a2524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1a2528:
    // 0x1a2528: 0x10430018
label_1a252c:
    if (ctx->pc == 0x1A252Cu) {
        ctx->pc = 0x1A2530u;
        goto label_1a2530;
    }
    ctx->pc = 0x1A2528u;
    {
        const bool branch_taken_0x1a2528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a2528) {
            ctx->pc = 0x1A258Cu;
            goto label_1a258c;
        }
    }
    ctx->pc = 0x1A2530u;
label_1a2530:
    // 0x1a2530: 0x24030003
    ctx->pc = 0x1a2530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1a2534:
    // 0x1a2534: 0x1043000f
label_1a2538:
    if (ctx->pc == 0x1A2538u) {
        ctx->pc = 0x1A253Cu;
        goto label_1a253c;
    }
    ctx->pc = 0x1A2534u;
    {
        const bool branch_taken_0x1a2534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a2534) {
            ctx->pc = 0x1A2574u;
            goto label_1a2574;
        }
    }
    ctx->pc = 0x1A253Cu;
label_1a253c:
    // 0x1a253c: 0x8f828944
    ctx->pc = 0x1a253cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
label_1a2540:
    // 0x1a2540: 0x10400003
label_1a2544:
    if (ctx->pc == 0x1A2544u) {
        ctx->pc = 0x1A2548u;
        goto label_1a2548;
    }
    ctx->pc = 0x1A2540u;
    {
        const bool branch_taken_0x1a2540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2540) {
            ctx->pc = 0x1A2550u;
            goto label_1a2550;
        }
    }
    ctx->pc = 0x1A2548u;
label_1a2548:
    // 0x1a2548: 0xaf828948
    ctx->pc = 0x1a2548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 2));
label_1a254c:
    // 0x1a254c: 0xaf808944
    ctx->pc = 0x1a254cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 0));
label_1a2550:
    // 0x1a2550: 0x8f948948
    ctx->pc = 0x1a2550u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
label_1a2554:
    // 0x1a2554: 0x0
    ctx->pc = 0x1a2554u;
    // NOP
label_1a2558:
    // 0x1a2558: 0x8e940018
    ctx->pc = 0x1a2558u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1a255c:
    // 0x1a255c: 0xaf948948
    ctx->pc = 0x1a255cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 20));
label_1a2560:
    // 0x1a2560: 0x8e820000
    ctx->pc = 0x1a2560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1a2564:
    // 0x1a2564: 0x40f809
label_1a2568:
    if (ctx->pc == 0x1A2568u) {
        ctx->pc = 0x1A2568u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A256Cu;
        goto label_1a256c;
    }
    ctx->pc = 0x1A2564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A256Cu);
        ctx->pc = 0x1A2568u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2460u: goto label_1a2460;
            case 0x1A2464u: goto label_1a2464;
            case 0x1A2468u: goto label_1a2468;
            case 0x1A246Cu: goto label_1a246c;
            case 0x1A2470u: goto label_1a2470;
            case 0x1A2474u: goto label_1a2474;
            case 0x1A2478u: goto label_1a2478;
            case 0x1A247Cu: goto label_1a247c;
            case 0x1A2480u: goto label_1a2480;
            case 0x1A2484u: goto label_1a2484;
            case 0x1A2488u: goto label_1a2488;
            case 0x1A248Cu: goto label_1a248c;
            case 0x1A2490u: goto label_1a2490;
            case 0x1A2494u: goto label_1a2494;
            case 0x1A2498u: goto label_1a2498;
            case 0x1A249Cu: goto label_1a249c;
            case 0x1A24A0u: goto label_1a24a0;
            case 0x1A24A4u: goto label_1a24a4;
            case 0x1A24A8u: goto label_1a24a8;
            case 0x1A24ACu: goto label_1a24ac;
            case 0x1A24B0u: goto label_1a24b0;
            case 0x1A24B4u: goto label_1a24b4;
            case 0x1A24B8u: goto label_1a24b8;
            case 0x1A24BCu: goto label_1a24bc;
            case 0x1A24C0u: goto label_1a24c0;
            case 0x1A24C4u: goto label_1a24c4;
            case 0x1A24C8u: goto label_1a24c8;
            case 0x1A24CCu: goto label_1a24cc;
            case 0x1A24D0u: goto label_1a24d0;
            case 0x1A24D4u: goto label_1a24d4;
            case 0x1A24D8u: goto label_1a24d8;
            case 0x1A24DCu: goto label_1a24dc;
            case 0x1A24E0u: goto label_1a24e0;
            case 0x1A24E4u: goto label_1a24e4;
            case 0x1A24E8u: goto label_1a24e8;
            case 0x1A24ECu: goto label_1a24ec;
            case 0x1A24F0u: goto label_1a24f0;
            case 0x1A24F4u: goto label_1a24f4;
            case 0x1A24F8u: goto label_1a24f8;
            case 0x1A24FCu: goto label_1a24fc;
            case 0x1A2500u: goto label_1a2500;
            case 0x1A2504u: goto label_1a2504;
            case 0x1A2508u: goto label_1a2508;
            case 0x1A250Cu: goto label_1a250c;
            case 0x1A2510u: goto label_1a2510;
            case 0x1A2514u: goto label_1a2514;
            case 0x1A2518u: goto label_1a2518;
            case 0x1A251Cu: goto label_1a251c;
            case 0x1A2520u: goto label_1a2520;
            case 0x1A2524u: goto label_1a2524;
            case 0x1A2528u: goto label_1a2528;
            case 0x1A252Cu: goto label_1a252c;
            case 0x1A2530u: goto label_1a2530;
            case 0x1A2534u: goto label_1a2534;
            case 0x1A2538u: goto label_1a2538;
            case 0x1A253Cu: goto label_1a253c;
            case 0x1A2540u: goto label_1a2540;
            case 0x1A2544u: goto label_1a2544;
            case 0x1A2548u: goto label_1a2548;
            case 0x1A254Cu: goto label_1a254c;
            case 0x1A2550u: goto label_1a2550;
            case 0x1A2554u: goto label_1a2554;
            case 0x1A2558u: goto label_1a2558;
            case 0x1A255Cu: goto label_1a255c;
            case 0x1A2560u: goto label_1a2560;
            case 0x1A2564u: goto label_1a2564;
            case 0x1A2568u: goto label_1a2568;
            case 0x1A256Cu: goto label_1a256c;
            case 0x1A2570u: goto label_1a2570;
            case 0x1A2574u: goto label_1a2574;
            case 0x1A2578u: goto label_1a2578;
            case 0x1A257Cu: goto label_1a257c;
            case 0x1A2580u: goto label_1a2580;
            case 0x1A2584u: goto label_1a2584;
            case 0x1A2588u: goto label_1a2588;
            case 0x1A258Cu: goto label_1a258c;
            case 0x1A2590u: goto label_1a2590;
            case 0x1A2594u: goto label_1a2594;
            case 0x1A2598u: goto label_1a2598;
            case 0x1A259Cu: goto label_1a259c;
            case 0x1A25A0u: goto label_1a25a0;
            case 0x1A25A4u: goto label_1a25a4;
            case 0x1A25A8u: goto label_1a25a8;
            case 0x1A25ACu: goto label_1a25ac;
            case 0x1A25B0u: goto label_1a25b0;
            case 0x1A25B4u: goto label_1a25b4;
            case 0x1A25B8u: goto label_1a25b8;
            case 0x1A25BCu: goto label_1a25bc;
            case 0x1A25C0u: goto label_1a25c0;
            case 0x1A25C4u: goto label_1a25c4;
            case 0x1A25C8u: goto label_1a25c8;
            case 0x1A25CCu: goto label_1a25cc;
            case 0x1A25D0u: goto label_1a25d0;
            case 0x1A25D4u: goto label_1a25d4;
            case 0x1A25D8u: goto label_1a25d8;
            case 0x1A25DCu: goto label_1a25dc;
            case 0x1A25E0u: goto label_1a25e0;
            case 0x1A25E4u: goto label_1a25e4;
            case 0x1A25E8u: goto label_1a25e8;
            case 0x1A25ECu: goto label_1a25ec;
            case 0x1A25F0u: goto label_1a25f0;
            case 0x1A25F4u: goto label_1a25f4;
            case 0x1A25F8u: goto label_1a25f8;
            case 0x1A25FCu: goto label_1a25fc;
            case 0x1A2600u: goto label_1a2600;
            case 0x1A2604u: goto label_1a2604;
            case 0x1A2608u: goto label_1a2608;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A256Cu; }
            if (ctx->pc != 0x1A256Cu) { return; }
        }
    }
    ctx->pc = 0x1A256Cu;
label_1a256c:
    // 0x1a256c: 0x1000fffb
label_1a2570:
    if (ctx->pc == 0x1A2570u) {
        ctx->pc = 0x1A2570u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->pc = 0x1A2574u;
        goto label_1a2574;
    }
    ctx->pc = 0x1A256Cu;
    {
        const bool branch_taken_0x1a256c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2570u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 24)));
        if (branch_taken_0x1a256c) {
            ctx->pc = 0x1A255Cu;
            goto label_1a255c;
        }
    }
    ctx->pc = 0x1A2574u;
label_1a2574:
    // 0x1a2574: 0x8f828944
    ctx->pc = 0x1a2574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
label_1a2578:
    // 0x1a2578: 0x10400004
label_1a257c:
    if (ctx->pc == 0x1A257Cu) {
        ctx->pc = 0x1A2580u;
        goto label_1a2580;
    }
    ctx->pc = 0x1A2578u;
    {
        const bool branch_taken_0x1a2578 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2578) {
            ctx->pc = 0x1A258Cu;
            goto label_1a258c;
        }
    }
    ctx->pc = 0x1A2580u;
label_1a2580:
    // 0x1a2580: 0x8c420018
    ctx->pc = 0x1a2580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1a2584:
    // 0x1a2584: 0xaf828948
    ctx->pc = 0x1a2584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 2));
label_1a2588:
    // 0x1a2588: 0xaf808944
    ctx->pc = 0x1a2588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 0));
label_1a258c:
    // 0x1a258c: 0x1000fff4
label_1a2590:
    if (ctx->pc == 0x1A2590u) {
        ctx->pc = 0x1A2590u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
        ctx->pc = 0x1A2594u;
        goto label_1a2594;
    }
    ctx->pc = 0x1A258Cu;
    {
        const bool branch_taken_0x1a258c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2590u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
        if (branch_taken_0x1a258c) {
            ctx->pc = 0x1A2560u;
            goto label_1a2560;
        }
    }
    ctx->pc = 0x1A2594u;
label_1a2594:
    // 0x1a2594: 0x8ea40000
    ctx->pc = 0x1a2594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a2598:
    // 0x1a2598: 0x3c030030
    ctx->pc = 0x1a2598u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
label_1a259c:
    // 0x1a259c: 0x24662130
    ctx->pc = 0x1a259cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 8496));
label_1a25a0:
    // 0x1a25a0: 0x24050016
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 22));
label_1a25a4:
    // 0x1a25a4: 0xaf84894c
    ctx->pc = 0x1a25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936908), GPR_U32(ctx, 4));
label_1a25a8:
    // 0x1a25a8: 0x8e030000
    ctx->pc = 0x1a25a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a25ac:
    // 0x1a25ac: 0xaf838940
    ctx->pc = 0x1a25acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 3));
label_1a25b0:
    // 0x1a25b0: 0x8e230000
    ctx->pc = 0x1a25b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a25b4:
    // 0x1a25b4: 0xaf838944
    ctx->pc = 0x1a25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 3));
label_1a25b8:
    // 0x1a25b8: 0x8e430000
    ctx->pc = 0x1a25b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a25bc:
    // 0x1a25bc: 0xaf838948
    ctx->pc = 0x1a25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 3));
label_1a25c0:
    // 0x1a25c0: 0x82640000
    ctx->pc = 0x1a25c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1a25c4:
    // 0x1a25c4: 0x82630001
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_1a25c8:
    // 0x1a25c8: 0x24a5ffff
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_1a25cc:
    // 0x1a25cc: 0xa0c40000
    ctx->pc = 0x1a25ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a25d0:
    // 0x1a25d0: 0xa0c30001
    ctx->pc = 0x1a25d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
label_1a25d4:
    // 0x1a25d4: 0x26730002
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
label_1a25d8:
    // 0x1a25d8: 0x1ca0fff9
label_1a25dc:
    if (ctx->pc == 0x1A25DCu) {
        ctx->pc = 0x1A25DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1A25E0u;
        goto label_1a25e0;
    }
    ctx->pc = 0x1A25D8u;
    {
        const bool branch_taken_0x1a25d8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1A25DCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1a25d8) {
            ctx->pc = 0x1A25C0u;
            goto label_1a25c0;
        }
    }
    ctx->pc = 0x1A25E0u;
label_1a25e0:
    // 0x1a25e0: 0x8fa30070
    ctx->pc = 0x1a25e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1a25e4:
    // 0x1a25e4: 0xaf838934
    ctx->pc = 0x1a25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 3));
label_1a25e8:
    // 0x1a25e8: 0x7bbf0060
    ctx->pc = 0x1a25e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a25ec:
    // 0x1a25ec: 0x7bb50050
    ctx->pc = 0x1a25ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a25f0:
    // 0x1a25f0: 0x7bb40040
    ctx->pc = 0x1a25f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a25f4:
    // 0x1a25f4: 0x7bb30030
    ctx->pc = 0x1a25f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a25f8:
    // 0x1a25f8: 0x7bb20020
    ctx->pc = 0x1a25f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a25fc:
    // 0x1a25fc: 0x7bb10010
    ctx->pc = 0x1a25fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2600:
    // 0x1a2600: 0x7bb00000
    ctx->pc = 0x1a2600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2604:
    // 0x1a2604: 0x3e00008
label_1a2608:
    if (ctx->pc == 0x1A2608u) {
        ctx->pc = 0x1A2608u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1A260Cu;
        goto label_fallthrough_0x1a2604;
    }
    ctx->pc = 0x1A2604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2608u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2460u: goto label_1a2460;
            case 0x1A2464u: goto label_1a2464;
            case 0x1A2468u: goto label_1a2468;
            case 0x1A246Cu: goto label_1a246c;
            case 0x1A2470u: goto label_1a2470;
            case 0x1A2474u: goto label_1a2474;
            case 0x1A2478u: goto label_1a2478;
            case 0x1A247Cu: goto label_1a247c;
            case 0x1A2480u: goto label_1a2480;
            case 0x1A2484u: goto label_1a2484;
            case 0x1A2488u: goto label_1a2488;
            case 0x1A248Cu: goto label_1a248c;
            case 0x1A2490u: goto label_1a2490;
            case 0x1A2494u: goto label_1a2494;
            case 0x1A2498u: goto label_1a2498;
            case 0x1A249Cu: goto label_1a249c;
            case 0x1A24A0u: goto label_1a24a0;
            case 0x1A24A4u: goto label_1a24a4;
            case 0x1A24A8u: goto label_1a24a8;
            case 0x1A24ACu: goto label_1a24ac;
            case 0x1A24B0u: goto label_1a24b0;
            case 0x1A24B4u: goto label_1a24b4;
            case 0x1A24B8u: goto label_1a24b8;
            case 0x1A24BCu: goto label_1a24bc;
            case 0x1A24C0u: goto label_1a24c0;
            case 0x1A24C4u: goto label_1a24c4;
            case 0x1A24C8u: goto label_1a24c8;
            case 0x1A24CCu: goto label_1a24cc;
            case 0x1A24D0u: goto label_1a24d0;
            case 0x1A24D4u: goto label_1a24d4;
            case 0x1A24D8u: goto label_1a24d8;
            case 0x1A24DCu: goto label_1a24dc;
            case 0x1A24E0u: goto label_1a24e0;
            case 0x1A24E4u: goto label_1a24e4;
            case 0x1A24E8u: goto label_1a24e8;
            case 0x1A24ECu: goto label_1a24ec;
            case 0x1A24F0u: goto label_1a24f0;
            case 0x1A24F4u: goto label_1a24f4;
            case 0x1A24F8u: goto label_1a24f8;
            case 0x1A24FCu: goto label_1a24fc;
            case 0x1A2500u: goto label_1a2500;
            case 0x1A2504u: goto label_1a2504;
            case 0x1A2508u: goto label_1a2508;
            case 0x1A250Cu: goto label_1a250c;
            case 0x1A2510u: goto label_1a2510;
            case 0x1A2514u: goto label_1a2514;
            case 0x1A2518u: goto label_1a2518;
            case 0x1A251Cu: goto label_1a251c;
            case 0x1A2520u: goto label_1a2520;
            case 0x1A2524u: goto label_1a2524;
            case 0x1A2528u: goto label_1a2528;
            case 0x1A252Cu: goto label_1a252c;
            case 0x1A2530u: goto label_1a2530;
            case 0x1A2534u: goto label_1a2534;
            case 0x1A2538u: goto label_1a2538;
            case 0x1A253Cu: goto label_1a253c;
            case 0x1A2540u: goto label_1a2540;
            case 0x1A2544u: goto label_1a2544;
            case 0x1A2548u: goto label_1a2548;
            case 0x1A254Cu: goto label_1a254c;
            case 0x1A2550u: goto label_1a2550;
            case 0x1A2554u: goto label_1a2554;
            case 0x1A2558u: goto label_1a2558;
            case 0x1A255Cu: goto label_1a255c;
            case 0x1A2560u: goto label_1a2560;
            case 0x1A2564u: goto label_1a2564;
            case 0x1A2568u: goto label_1a2568;
            case 0x1A256Cu: goto label_1a256c;
            case 0x1A2570u: goto label_1a2570;
            case 0x1A2574u: goto label_1a2574;
            case 0x1A2578u: goto label_1a2578;
            case 0x1A257Cu: goto label_1a257c;
            case 0x1A2580u: goto label_1a2580;
            case 0x1A2584u: goto label_1a2584;
            case 0x1A2588u: goto label_1a2588;
            case 0x1A258Cu: goto label_1a258c;
            case 0x1A2590u: goto label_1a2590;
            case 0x1A2594u: goto label_1a2594;
            case 0x1A2598u: goto label_1a2598;
            case 0x1A259Cu: goto label_1a259c;
            case 0x1A25A0u: goto label_1a25a0;
            case 0x1A25A4u: goto label_1a25a4;
            case 0x1A25A8u: goto label_1a25a8;
            case 0x1A25ACu: goto label_1a25ac;
            case 0x1A25B0u: goto label_1a25b0;
            case 0x1A25B4u: goto label_1a25b4;
            case 0x1A25B8u: goto label_1a25b8;
            case 0x1A25BCu: goto label_1a25bc;
            case 0x1A25C0u: goto label_1a25c0;
            case 0x1A25C4u: goto label_1a25c4;
            case 0x1A25C8u: goto label_1a25c8;
            case 0x1A25CCu: goto label_1a25cc;
            case 0x1A25D0u: goto label_1a25d0;
            case 0x1A25D4u: goto label_1a25d4;
            case 0x1A25D8u: goto label_1a25d8;
            case 0x1A25DCu: goto label_1a25dc;
            case 0x1A25E0u: goto label_1a25e0;
            case 0x1A25E4u: goto label_1a25e4;
            case 0x1A25E8u: goto label_1a25e8;
            case 0x1A25ECu: goto label_1a25ec;
            case 0x1A25F0u: goto label_1a25f0;
            case 0x1A25F4u: goto label_1a25f4;
            case 0x1A25F8u: goto label_1a25f8;
            case 0x1A25FCu: goto label_1a25fc;
            case 0x1A2600u: goto label_1a2600;
            case 0x1A2604u: goto label_1a2604;
            case 0x1A2608u: goto label_1a2608;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a2604:
    ctx->pc = 0x1A260Cu;
}
