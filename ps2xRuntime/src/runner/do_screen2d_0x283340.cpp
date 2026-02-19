#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_screen2d
// Address: 0x283340 - 0x283ab8
void do_screen2d_0x283340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x283340u;

label_283340:
    // 0x283340: 0x27bdff10
    ctx->pc = 0x283340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
label_283344:
    // 0x283344: 0xffbf00e0
    ctx->pc = 0x283344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_283348:
    // 0x283348: 0xffbe00d0
    ctx->pc = 0x283348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_28334c:
    // 0x28334c: 0xffb700c0
    ctx->pc = 0x28334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_283350:
    // 0x283350: 0xffb600b0
    ctx->pc = 0x283350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_283354:
    // 0x283354: 0xffb500a0
    ctx->pc = 0x283354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_283358:
    // 0x283358: 0xffb40090
    ctx->pc = 0x283358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_28335c:
    // 0x28335c: 0xffb30080
    ctx->pc = 0x28335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_283360:
    // 0x283360: 0xffb20070
    ctx->pc = 0x283360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_283364:
    // 0x283364: 0xffb10060
    ctx->pc = 0x283364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_283368:
    // 0x283368: 0xffb00050
    ctx->pc = 0x283368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_28336c:
    // 0x28336c: 0x3c04003c
    ctx->pc = 0x28336cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_283370:
    // 0x283370: 0x8c833b40
    ctx->pc = 0x283370u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 15168)));
label_283374:
    // 0x283374: 0x18600004
label_283378:
    if (ctx->pc == 0x283378u) {
        ctx->pc = 0x283378u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x28337Cu;
        goto label_28337c;
    }
    ctx->pc = 0x283374u;
    {
        const bool branch_taken_0x283374 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x283378u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x283374) {
            ctx->pc = 0x283388u;
            goto label_283388;
        }
    }
    ctx->pc = 0x28337Cu;
label_28337c:
    // 0x28337c: 0x8c42ffc0
    ctx->pc = 0x28337cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
label_283380:
    // 0x283380: 0x621023
    ctx->pc = 0x283380u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_283384:
    // 0x283384: 0xac823b40
    ctx->pc = 0x283384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15168), GPR_U32(ctx, 2));
label_283388:
    // 0x283388: 0x3c03003c
    ctx->pc = 0x283388u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_28338c:
    // 0x28338c: 0x8c623b40
    ctx->pc = 0x28338cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15168)));
label_283390:
    // 0x283390: 0x4420001
label_283394:
    if (ctx->pc == 0x283394u) {
        ctx->pc = 0x283394u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15168), GPR_U32(ctx, 0));
        ctx->pc = 0x283398u;
        goto label_283398;
    }
    ctx->pc = 0x283390u;
    {
        const bool branch_taken_0x283390 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x283390) {
            ctx->pc = 0x283394u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 15168), GPR_U32(ctx, 0));
            ctx->pc = 0x283398u;
            goto label_283398;
        }
    }
    ctx->pc = 0x283398u;
label_283398:
    // 0x283398: 0x3c02003c
    ctx->pc = 0x283398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28339c:
    // 0x28339c: 0x8c423b04
    ctx->pc = 0x28339cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15108)));
label_2833a0:
    // 0x2833a0: 0x14400155
label_2833a4:
    if (ctx->pc == 0x2833A4u) {
        ctx->pc = 0x2833A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2833A8u;
        goto label_2833a8;
    }
    ctx->pc = 0x2833A0u;
    {
        const bool branch_taken_0x2833a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2833A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2833a0) {
            ctx->pc = 0x2838F8u;
            goto label_2838f8;
        }
    }
    ctx->pc = 0x2833A8u;
label_2833a8:
    // 0x2833a8: 0x3c02003c
    ctx->pc = 0x2833a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2833ac:
    // 0x2833ac: 0x8c523b10
    ctx->pc = 0x2833acu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 15120)));
label_2833b0:
    // 0x2833b0: 0x3c02003c
    ctx->pc = 0x2833b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2833b4:
    // 0x2833b4: 0xc082728
label_2833b8:
    if (ctx->pc == 0x2833B8u) {
        ctx->pc = 0x2833B8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 15116)));
        ctx->pc = 0x2833BCu;
        goto label_2833bc;
    }
    ctx->pc = 0x2833B4u;
    SET_GPR_U32(ctx, 31, 0x2833BCu);
    ctx->pc = 0x2833B8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 15116)));
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2833BCu; }
    }
    if (ctx->pc != 0x2833BCu) { return; }
    ctx->pc = 0x2833BCu;
label_2833bc:
    // 0x2833bc: 0x24030002
    ctx->pc = 0x2833bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2833c0:
    // 0x2833c0: 0x14430009
label_2833c4:
    if (ctx->pc == 0x2833C4u) {
        ctx->pc = 0x2833C4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x2833C8u;
        goto label_2833c8;
    }
    ctx->pc = 0x2833C0u;
    {
        const bool branch_taken_0x2833c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2833C4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x2833c0) {
            ctx->pc = 0x2833E8u;
            goto label_2833e8;
        }
    }
    ctx->pc = 0x2833C8u;
label_2833c8:
    // 0x2833c8: 0xc08289a
label_2833cc:
    if (ctx->pc == 0x2833CCu) {
        ctx->pc = 0x2833D0u;
        goto label_2833d0;
    }
    ctx->pc = 0x2833C8u;
    SET_GPR_U32(ctx, 31, 0x2833D0u);
    ctx->pc = 0x20A268u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_directory_exists_0x20a268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2833D0u; }
    }
    if (ctx->pc != 0x2833D0u) { return; }
    ctx->pc = 0x2833D0u;
label_2833d0:
    // 0x2833d0: 0x14400006
label_2833d4:
    if (ctx->pc == 0x2833D4u) {
        ctx->pc = 0x2833D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15124)));
        ctx->pc = 0x2833D8u;
        goto label_2833d8;
    }
    ctx->pc = 0x2833D0u;
    {
        const bool branch_taken_0x2833d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2833D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15124)));
        if (branch_taken_0x2833d0) {
            ctx->pc = 0x2833ECu;
            goto label_2833ec;
        }
    }
    ctx->pc = 0x2833D8u;
label_2833d8:
    // 0x2833d8: 0xc08241a
label_2833dc:
    if (ctx->pc == 0x2833DCu) {
        ctx->pc = 0x2833E0u;
        goto label_2833e0;
    }
    ctx->pc = 0x2833D8u;
    SET_GPR_U32(ctx, 31, 0x2833E0u);
    ctx->pc = 0x209068u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMaxFreeBytes_0x209068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2833E0u; }
    }
    if (ctx->pc != 0x2833E0u) { return; }
    ctx->pc = 0x2833E0u;
label_2833e0:
    // 0x2833e0: 0xc08246a
label_2833e4:
    if (ctx->pc == 0x2833E4u) {
        ctx->pc = 0x2833E8u;
        goto label_2833e8;
    }
    ctx->pc = 0x2833E0u;
    SET_GPR_U32(ctx, 31, 0x2833E8u);
    ctx->pc = 0x2091A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveFileSize_0x2091a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2833E8u; }
    }
    if (ctx->pc != 0x2833E8u) { return; }
    ctx->pc = 0x2833E8u;
label_2833e8:
    // 0x2833e8: 0x8e023b14
    ctx->pc = 0x2833e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15124)));
label_2833ec:
    // 0x2833ec: 0x441000d
label_2833f0:
    if (ctx->pc == 0x2833F0u) {
        ctx->pc = 0x2833F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2833F4u;
        goto label_2833f4;
    }
    ctx->pc = 0x2833ECu;
    {
        const bool branch_taken_0x2833ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2833F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2833ec) {
            ctx->pc = 0x283424u;
            goto label_283424;
        }
    }
    ctx->pc = 0x2833F4u;
label_2833f4:
    // 0x2833f4: 0x240202d
    ctx->pc = 0x2833f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2833f8:
    // 0x2833f8: 0xc0a0cc0
label_2833fc:
    if (ctx->pc == 0x2833FCu) {
        ctx->pc = 0x2833FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283400u;
        goto label_283400;
    }
    ctx->pc = 0x2833F8u;
    SET_GPR_U32(ctx, 31, 0x283400u);
    ctx->pc = 0x2833FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x283300u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_card_state_0x283300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283400u; }
    }
    if (ctx->pc != 0x283400u) { return; }
    ctx->pc = 0x283400u;
label_283400:
    // 0x283400: 0xae023b14
    ctx->pc = 0x283400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15124), GPR_U32(ctx, 2));
label_283404:
    // 0x283404: 0x3c05003c
    ctx->pc = 0x283404u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_283408:
    // 0x283408: 0x24a53b20
    ctx->pc = 0x283408u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15136));
label_28340c:
    // 0x28340c: 0x111880
    ctx->pc = 0x28340cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_283410:
    // 0x283410: 0x122100
    ctx->pc = 0x283410u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 4));
label_283414:
    // 0x283414: 0x641821
    ctx->pc = 0x283414u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_283418:
    // 0x283418: 0x651821
    ctx->pc = 0x283418u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28341c:
    // 0x28341c: 0xac620000
    ctx->pc = 0x28341cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_283420:
    // 0x283420: 0x2402ffff
    ctx->pc = 0x283420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_283424:
    // 0x283424: 0xafa20040
    ctx->pc = 0x283424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_283428:
    // 0x283428: 0x2403ffff
    ctx->pc = 0x283428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28342c:
    // 0x28342c: 0xafa30044
    ctx->pc = 0x28342cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_283430:
    // 0x283430: 0x3c02003c
    ctx->pc = 0x283430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_283434:
    // 0x283434: 0x8c433b14
    ctx->pc = 0x283434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15124)));
label_283438:
    // 0x283438: 0x2c620069
    ctx->pc = 0x283438u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 105));
label_28343c:
    // 0x28343c: 0x1040009d
label_283440:
    if (ctx->pc == 0x283440u) {
        ctx->pc = 0x283440u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x283444u;
        goto label_283444;
    }
    ctx->pc = 0x28343Cu;
    {
        const bool branch_taken_0x28343c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283440u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28343c) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283444u;
label_283444:
    // 0x283444: 0x3c02003b
    ctx->pc = 0x283444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_283448:
    // 0x283448: 0x2442c520
    ctx->pc = 0x283448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952224));
label_28344c:
    // 0x28344c: 0x31880
    ctx->pc = 0x28344cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_283450:
    // 0x283450: 0x621821
    ctx->pc = 0x283450u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_283454:
    // 0x283454: 0x8c620000
    ctx->pc = 0x283454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_283458:
    // 0x283458: 0x400008
label_28345c:
    if (ctx->pc == 0x28345Cu) {
        ctx->pc = 0x283460u;
        goto label_283460;
    }
    ctx->pc = 0x283458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283340u: goto label_283340;
            case 0x283344u: goto label_283344;
            case 0x283348u: goto label_283348;
            case 0x28334Cu: goto label_28334c;
            case 0x283350u: goto label_283350;
            case 0x283354u: goto label_283354;
            case 0x283358u: goto label_283358;
            case 0x28335Cu: goto label_28335c;
            case 0x283360u: goto label_283360;
            case 0x283364u: goto label_283364;
            case 0x283368u: goto label_283368;
            case 0x28336Cu: goto label_28336c;
            case 0x283370u: goto label_283370;
            case 0x283374u: goto label_283374;
            case 0x283378u: goto label_283378;
            case 0x28337Cu: goto label_28337c;
            case 0x283380u: goto label_283380;
            case 0x283384u: goto label_283384;
            case 0x283388u: goto label_283388;
            case 0x28338Cu: goto label_28338c;
            case 0x283390u: goto label_283390;
            case 0x283394u: goto label_283394;
            case 0x283398u: goto label_283398;
            case 0x28339Cu: goto label_28339c;
            case 0x2833A0u: goto label_2833a0;
            case 0x2833A4u: goto label_2833a4;
            case 0x2833A8u: goto label_2833a8;
            case 0x2833ACu: goto label_2833ac;
            case 0x2833B0u: goto label_2833b0;
            case 0x2833B4u: goto label_2833b4;
            case 0x2833B8u: goto label_2833b8;
            case 0x2833BCu: goto label_2833bc;
            case 0x2833C0u: goto label_2833c0;
            case 0x2833C4u: goto label_2833c4;
            case 0x2833C8u: goto label_2833c8;
            case 0x2833CCu: goto label_2833cc;
            case 0x2833D0u: goto label_2833d0;
            case 0x2833D4u: goto label_2833d4;
            case 0x2833D8u: goto label_2833d8;
            case 0x2833DCu: goto label_2833dc;
            case 0x2833E0u: goto label_2833e0;
            case 0x2833E4u: goto label_2833e4;
            case 0x2833E8u: goto label_2833e8;
            case 0x2833ECu: goto label_2833ec;
            case 0x2833F0u: goto label_2833f0;
            case 0x2833F4u: goto label_2833f4;
            case 0x2833F8u: goto label_2833f8;
            case 0x2833FCu: goto label_2833fc;
            case 0x283400u: goto label_283400;
            case 0x283404u: goto label_283404;
            case 0x283408u: goto label_283408;
            case 0x28340Cu: goto label_28340c;
            case 0x283410u: goto label_283410;
            case 0x283414u: goto label_283414;
            case 0x283418u: goto label_283418;
            case 0x28341Cu: goto label_28341c;
            case 0x283420u: goto label_283420;
            case 0x283424u: goto label_283424;
            case 0x283428u: goto label_283428;
            case 0x28342Cu: goto label_28342c;
            case 0x283430u: goto label_283430;
            case 0x283434u: goto label_283434;
            case 0x283438u: goto label_283438;
            case 0x28343Cu: goto label_28343c;
            case 0x283440u: goto label_283440;
            case 0x283444u: goto label_283444;
            case 0x283448u: goto label_283448;
            case 0x28344Cu: goto label_28344c;
            case 0x283450u: goto label_283450;
            case 0x283454u: goto label_283454;
            case 0x283458u: goto label_283458;
            case 0x28345Cu: goto label_28345c;
            case 0x283460u: goto label_283460;
            case 0x283464u: goto label_283464;
            case 0x283468u: goto label_283468;
            case 0x28346Cu: goto label_28346c;
            case 0x283470u: goto label_283470;
            case 0x283474u: goto label_283474;
            case 0x283478u: goto label_283478;
            case 0x28347Cu: goto label_28347c;
            case 0x283480u: goto label_283480;
            case 0x283484u: goto label_283484;
            case 0x283488u: goto label_283488;
            case 0x28348Cu: goto label_28348c;
            case 0x283490u: goto label_283490;
            case 0x283494u: goto label_283494;
            case 0x283498u: goto label_283498;
            case 0x28349Cu: goto label_28349c;
            case 0x2834A0u: goto label_2834a0;
            case 0x2834A4u: goto label_2834a4;
            case 0x2834A8u: goto label_2834a8;
            case 0x2834ACu: goto label_2834ac;
            case 0x2834B0u: goto label_2834b0;
            case 0x2834B4u: goto label_2834b4;
            case 0x2834B8u: goto label_2834b8;
            case 0x2834BCu: goto label_2834bc;
            case 0x2834C0u: goto label_2834c0;
            case 0x2834C4u: goto label_2834c4;
            case 0x2834C8u: goto label_2834c8;
            case 0x2834CCu: goto label_2834cc;
            case 0x2834D0u: goto label_2834d0;
            case 0x2834D4u: goto label_2834d4;
            case 0x2834D8u: goto label_2834d8;
            case 0x2834DCu: goto label_2834dc;
            case 0x2834E0u: goto label_2834e0;
            case 0x2834E4u: goto label_2834e4;
            case 0x2834E8u: goto label_2834e8;
            case 0x2834ECu: goto label_2834ec;
            case 0x2834F0u: goto label_2834f0;
            case 0x2834F4u: goto label_2834f4;
            case 0x2834F8u: goto label_2834f8;
            case 0x2834FCu: goto label_2834fc;
            case 0x283500u: goto label_283500;
            case 0x283504u: goto label_283504;
            case 0x283508u: goto label_283508;
            case 0x28350Cu: goto label_28350c;
            case 0x283510u: goto label_283510;
            case 0x283514u: goto label_283514;
            case 0x283518u: goto label_283518;
            case 0x28351Cu: goto label_28351c;
            case 0x283520u: goto label_283520;
            case 0x283524u: goto label_283524;
            case 0x283528u: goto label_283528;
            case 0x28352Cu: goto label_28352c;
            case 0x283530u: goto label_283530;
            case 0x283534u: goto label_283534;
            case 0x283538u: goto label_283538;
            case 0x28353Cu: goto label_28353c;
            case 0x283540u: goto label_283540;
            case 0x283544u: goto label_283544;
            case 0x283548u: goto label_283548;
            case 0x28354Cu: goto label_28354c;
            case 0x283550u: goto label_283550;
            case 0x283554u: goto label_283554;
            case 0x283558u: goto label_283558;
            case 0x28355Cu: goto label_28355c;
            case 0x283560u: goto label_283560;
            case 0x283564u: goto label_283564;
            case 0x283568u: goto label_283568;
            case 0x28356Cu: goto label_28356c;
            case 0x283570u: goto label_283570;
            case 0x283574u: goto label_283574;
            case 0x283578u: goto label_283578;
            case 0x28357Cu: goto label_28357c;
            case 0x283580u: goto label_283580;
            case 0x283584u: goto label_283584;
            case 0x283588u: goto label_283588;
            case 0x28358Cu: goto label_28358c;
            case 0x283590u: goto label_283590;
            case 0x283594u: goto label_283594;
            case 0x283598u: goto label_283598;
            case 0x28359Cu: goto label_28359c;
            case 0x2835A0u: goto label_2835a0;
            case 0x2835A4u: goto label_2835a4;
            case 0x2835A8u: goto label_2835a8;
            case 0x2835ACu: goto label_2835ac;
            case 0x2835B0u: goto label_2835b0;
            case 0x2835B4u: goto label_2835b4;
            case 0x2835B8u: goto label_2835b8;
            case 0x2835BCu: goto label_2835bc;
            case 0x2835C0u: goto label_2835c0;
            case 0x2835C4u: goto label_2835c4;
            case 0x2835C8u: goto label_2835c8;
            case 0x2835CCu: goto label_2835cc;
            case 0x2835D0u: goto label_2835d0;
            case 0x2835D4u: goto label_2835d4;
            case 0x2835D8u: goto label_2835d8;
            case 0x2835DCu: goto label_2835dc;
            case 0x2835E0u: goto label_2835e0;
            case 0x2835E4u: goto label_2835e4;
            case 0x2835E8u: goto label_2835e8;
            case 0x2835ECu: goto label_2835ec;
            case 0x2835F0u: goto label_2835f0;
            case 0x2835F4u: goto label_2835f4;
            case 0x2835F8u: goto label_2835f8;
            case 0x2835FCu: goto label_2835fc;
            case 0x283600u: goto label_283600;
            case 0x283604u: goto label_283604;
            case 0x283608u: goto label_283608;
            case 0x28360Cu: goto label_28360c;
            case 0x283610u: goto label_283610;
            case 0x283614u: goto label_283614;
            case 0x283618u: goto label_283618;
            case 0x28361Cu: goto label_28361c;
            case 0x283620u: goto label_283620;
            case 0x283624u: goto label_283624;
            case 0x283628u: goto label_283628;
            case 0x28362Cu: goto label_28362c;
            case 0x283630u: goto label_283630;
            case 0x283634u: goto label_283634;
            case 0x283638u: goto label_283638;
            case 0x28363Cu: goto label_28363c;
            case 0x283640u: goto label_283640;
            case 0x283644u: goto label_283644;
            case 0x283648u: goto label_283648;
            case 0x28364Cu: goto label_28364c;
            case 0x283650u: goto label_283650;
            case 0x283654u: goto label_283654;
            case 0x283658u: goto label_283658;
            case 0x28365Cu: goto label_28365c;
            case 0x283660u: goto label_283660;
            case 0x283664u: goto label_283664;
            case 0x283668u: goto label_283668;
            case 0x28366Cu: goto label_28366c;
            case 0x283670u: goto label_283670;
            case 0x283674u: goto label_283674;
            case 0x283678u: goto label_283678;
            case 0x28367Cu: goto label_28367c;
            case 0x283680u: goto label_283680;
            case 0x283684u: goto label_283684;
            case 0x283688u: goto label_283688;
            case 0x28368Cu: goto label_28368c;
            case 0x283690u: goto label_283690;
            case 0x283694u: goto label_283694;
            case 0x283698u: goto label_283698;
            case 0x28369Cu: goto label_28369c;
            case 0x2836A0u: goto label_2836a0;
            case 0x2836A4u: goto label_2836a4;
            case 0x2836A8u: goto label_2836a8;
            case 0x2836ACu: goto label_2836ac;
            case 0x2836B0u: goto label_2836b0;
            case 0x2836B4u: goto label_2836b4;
            case 0x2836B8u: goto label_2836b8;
            case 0x2836BCu: goto label_2836bc;
            case 0x2836C0u: goto label_2836c0;
            case 0x2836C4u: goto label_2836c4;
            case 0x2836C8u: goto label_2836c8;
            case 0x2836CCu: goto label_2836cc;
            case 0x2836D0u: goto label_2836d0;
            case 0x2836D4u: goto label_2836d4;
            case 0x2836D8u: goto label_2836d8;
            case 0x2836DCu: goto label_2836dc;
            case 0x2836E0u: goto label_2836e0;
            case 0x2836E4u: goto label_2836e4;
            case 0x2836E8u: goto label_2836e8;
            case 0x2836ECu: goto label_2836ec;
            case 0x2836F0u: goto label_2836f0;
            case 0x2836F4u: goto label_2836f4;
            case 0x2836F8u: goto label_2836f8;
            case 0x2836FCu: goto label_2836fc;
            case 0x283700u: goto label_283700;
            case 0x283704u: goto label_283704;
            case 0x283708u: goto label_283708;
            case 0x28370Cu: goto label_28370c;
            case 0x283710u: goto label_283710;
            case 0x283714u: goto label_283714;
            case 0x283718u: goto label_283718;
            case 0x28371Cu: goto label_28371c;
            case 0x283720u: goto label_283720;
            case 0x283724u: goto label_283724;
            case 0x283728u: goto label_283728;
            case 0x28372Cu: goto label_28372c;
            case 0x283730u: goto label_283730;
            case 0x283734u: goto label_283734;
            case 0x283738u: goto label_283738;
            case 0x28373Cu: goto label_28373c;
            case 0x283740u: goto label_283740;
            case 0x283744u: goto label_283744;
            case 0x283748u: goto label_283748;
            case 0x28374Cu: goto label_28374c;
            case 0x283750u: goto label_283750;
            case 0x283754u: goto label_283754;
            case 0x283758u: goto label_283758;
            case 0x28375Cu: goto label_28375c;
            case 0x283760u: goto label_283760;
            case 0x283764u: goto label_283764;
            case 0x283768u: goto label_283768;
            case 0x28376Cu: goto label_28376c;
            case 0x283770u: goto label_283770;
            case 0x283774u: goto label_283774;
            case 0x283778u: goto label_283778;
            case 0x28377Cu: goto label_28377c;
            case 0x283780u: goto label_283780;
            case 0x283784u: goto label_283784;
            case 0x283788u: goto label_283788;
            case 0x28378Cu: goto label_28378c;
            case 0x283790u: goto label_283790;
            case 0x283794u: goto label_283794;
            case 0x283798u: goto label_283798;
            case 0x28379Cu: goto label_28379c;
            case 0x2837A0u: goto label_2837a0;
            case 0x2837A4u: goto label_2837a4;
            case 0x2837A8u: goto label_2837a8;
            case 0x2837ACu: goto label_2837ac;
            case 0x2837B0u: goto label_2837b0;
            case 0x2837B4u: goto label_2837b4;
            case 0x2837B8u: goto label_2837b8;
            case 0x2837BCu: goto label_2837bc;
            case 0x2837C0u: goto label_2837c0;
            case 0x2837C4u: goto label_2837c4;
            case 0x2837C8u: goto label_2837c8;
            case 0x2837CCu: goto label_2837cc;
            case 0x2837D0u: goto label_2837d0;
            case 0x2837D4u: goto label_2837d4;
            case 0x2837D8u: goto label_2837d8;
            case 0x2837DCu: goto label_2837dc;
            case 0x2837E0u: goto label_2837e0;
            case 0x2837E4u: goto label_2837e4;
            case 0x2837E8u: goto label_2837e8;
            case 0x2837ECu: goto label_2837ec;
            case 0x2837F0u: goto label_2837f0;
            case 0x2837F4u: goto label_2837f4;
            case 0x2837F8u: goto label_2837f8;
            case 0x2837FCu: goto label_2837fc;
            case 0x283800u: goto label_283800;
            case 0x283804u: goto label_283804;
            case 0x283808u: goto label_283808;
            case 0x28380Cu: goto label_28380c;
            case 0x283810u: goto label_283810;
            case 0x283814u: goto label_283814;
            case 0x283818u: goto label_283818;
            case 0x28381Cu: goto label_28381c;
            case 0x283820u: goto label_283820;
            case 0x283824u: goto label_283824;
            case 0x283828u: goto label_283828;
            case 0x28382Cu: goto label_28382c;
            case 0x283830u: goto label_283830;
            case 0x283834u: goto label_283834;
            case 0x283838u: goto label_283838;
            case 0x28383Cu: goto label_28383c;
            case 0x283840u: goto label_283840;
            case 0x283844u: goto label_283844;
            case 0x283848u: goto label_283848;
            case 0x28384Cu: goto label_28384c;
            case 0x283850u: goto label_283850;
            case 0x283854u: goto label_283854;
            case 0x283858u: goto label_283858;
            case 0x28385Cu: goto label_28385c;
            case 0x283860u: goto label_283860;
            case 0x283864u: goto label_283864;
            case 0x283868u: goto label_283868;
            case 0x28386Cu: goto label_28386c;
            case 0x283870u: goto label_283870;
            case 0x283874u: goto label_283874;
            case 0x283878u: goto label_283878;
            case 0x28387Cu: goto label_28387c;
            case 0x283880u: goto label_283880;
            case 0x283884u: goto label_283884;
            case 0x283888u: goto label_283888;
            case 0x28388Cu: goto label_28388c;
            case 0x283890u: goto label_283890;
            case 0x283894u: goto label_283894;
            case 0x283898u: goto label_283898;
            case 0x28389Cu: goto label_28389c;
            case 0x2838A0u: goto label_2838a0;
            case 0x2838A4u: goto label_2838a4;
            case 0x2838A8u: goto label_2838a8;
            case 0x2838ACu: goto label_2838ac;
            case 0x2838B0u: goto label_2838b0;
            case 0x2838B4u: goto label_2838b4;
            case 0x2838B8u: goto label_2838b8;
            case 0x2838BCu: goto label_2838bc;
            case 0x2838C0u: goto label_2838c0;
            case 0x2838C4u: goto label_2838c4;
            case 0x2838C8u: goto label_2838c8;
            case 0x2838CCu: goto label_2838cc;
            case 0x2838D0u: goto label_2838d0;
            case 0x2838D4u: goto label_2838d4;
            case 0x2838D8u: goto label_2838d8;
            case 0x2838DCu: goto label_2838dc;
            case 0x2838E0u: goto label_2838e0;
            case 0x2838E4u: goto label_2838e4;
            case 0x2838E8u: goto label_2838e8;
            case 0x2838ECu: goto label_2838ec;
            case 0x2838F0u: goto label_2838f0;
            case 0x2838F4u: goto label_2838f4;
            case 0x2838F8u: goto label_2838f8;
            case 0x2838FCu: goto label_2838fc;
            case 0x283900u: goto label_283900;
            case 0x283904u: goto label_283904;
            case 0x283908u: goto label_283908;
            case 0x28390Cu: goto label_28390c;
            case 0x283910u: goto label_283910;
            case 0x283914u: goto label_283914;
            case 0x283918u: goto label_283918;
            case 0x28391Cu: goto label_28391c;
            case 0x283920u: goto label_283920;
            case 0x283924u: goto label_283924;
            case 0x283928u: goto label_283928;
            case 0x28392Cu: goto label_28392c;
            case 0x283930u: goto label_283930;
            case 0x283934u: goto label_283934;
            case 0x283938u: goto label_283938;
            case 0x28393Cu: goto label_28393c;
            case 0x283940u: goto label_283940;
            case 0x283944u: goto label_283944;
            case 0x283948u: goto label_283948;
            case 0x28394Cu: goto label_28394c;
            case 0x283950u: goto label_283950;
            case 0x283954u: goto label_283954;
            case 0x283958u: goto label_283958;
            case 0x28395Cu: goto label_28395c;
            case 0x283960u: goto label_283960;
            case 0x283964u: goto label_283964;
            case 0x283968u: goto label_283968;
            case 0x28396Cu: goto label_28396c;
            case 0x283970u: goto label_283970;
            case 0x283974u: goto label_283974;
            case 0x283978u: goto label_283978;
            case 0x28397Cu: goto label_28397c;
            case 0x283980u: goto label_283980;
            case 0x283984u: goto label_283984;
            case 0x283988u: goto label_283988;
            case 0x28398Cu: goto label_28398c;
            case 0x283990u: goto label_283990;
            case 0x283994u: goto label_283994;
            case 0x283998u: goto label_283998;
            case 0x28399Cu: goto label_28399c;
            case 0x2839A0u: goto label_2839a0;
            case 0x2839A4u: goto label_2839a4;
            case 0x2839A8u: goto label_2839a8;
            case 0x2839ACu: goto label_2839ac;
            case 0x2839B0u: goto label_2839b0;
            case 0x2839B4u: goto label_2839b4;
            case 0x2839B8u: goto label_2839b8;
            case 0x2839BCu: goto label_2839bc;
            case 0x2839C0u: goto label_2839c0;
            case 0x2839C4u: goto label_2839c4;
            case 0x2839C8u: goto label_2839c8;
            case 0x2839CCu: goto label_2839cc;
            case 0x2839D0u: goto label_2839d0;
            case 0x2839D4u: goto label_2839d4;
            case 0x2839D8u: goto label_2839d8;
            case 0x2839DCu: goto label_2839dc;
            case 0x2839E0u: goto label_2839e0;
            case 0x2839E4u: goto label_2839e4;
            case 0x2839E8u: goto label_2839e8;
            case 0x2839ECu: goto label_2839ec;
            case 0x2839F0u: goto label_2839f0;
            case 0x2839F4u: goto label_2839f4;
            case 0x2839F8u: goto label_2839f8;
            case 0x2839FCu: goto label_2839fc;
            case 0x283A00u: goto label_283a00;
            case 0x283A04u: goto label_283a04;
            case 0x283A08u: goto label_283a08;
            case 0x283A0Cu: goto label_283a0c;
            case 0x283A10u: goto label_283a10;
            case 0x283A14u: goto label_283a14;
            case 0x283A18u: goto label_283a18;
            case 0x283A1Cu: goto label_283a1c;
            case 0x283A20u: goto label_283a20;
            case 0x283A24u: goto label_283a24;
            case 0x283A28u: goto label_283a28;
            case 0x283A2Cu: goto label_283a2c;
            case 0x283A30u: goto label_283a30;
            case 0x283A34u: goto label_283a34;
            case 0x283A38u: goto label_283a38;
            case 0x283A3Cu: goto label_283a3c;
            case 0x283A40u: goto label_283a40;
            case 0x283A44u: goto label_283a44;
            case 0x283A48u: goto label_283a48;
            case 0x283A4Cu: goto label_283a4c;
            case 0x283A50u: goto label_283a50;
            case 0x283A54u: goto label_283a54;
            case 0x283A58u: goto label_283a58;
            case 0x283A5Cu: goto label_283a5c;
            case 0x283A60u: goto label_283a60;
            case 0x283A64u: goto label_283a64;
            case 0x283A68u: goto label_283a68;
            case 0x283A6Cu: goto label_283a6c;
            case 0x283A70u: goto label_283a70;
            case 0x283A74u: goto label_283a74;
            case 0x283A78u: goto label_283a78;
            case 0x283A7Cu: goto label_283a7c;
            case 0x283A80u: goto label_283a80;
            case 0x283A84u: goto label_283a84;
            case 0x283A88u: goto label_283a88;
            case 0x283A8Cu: goto label_283a8c;
            case 0x283A90u: goto label_283a90;
            case 0x283A94u: goto label_283a94;
            case 0x283A98u: goto label_283a98;
            case 0x283A9Cu: goto label_283a9c;
            case 0x283AA0u: goto label_283aa0;
            case 0x283AA4u: goto label_283aa4;
            case 0x283AA8u: goto label_283aa8;
            case 0x283AACu: goto label_283aac;
            case 0x283AB0u: goto label_283ab0;
            case 0x283AB4u: goto label_283ab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283460u;
label_283460:
    // 0x283460: 0x3c03003c
    ctx->pc = 0x283460u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_283464:
    // 0x283464: 0x2402000b
    ctx->pc = 0x283464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_283468:
    // 0x283468: 0x10000092
label_28346c:
    if (ctx->pc == 0x28346Cu) {
        ctx->pc = 0x28346Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        ctx->pc = 0x283470u;
        goto label_283470;
    }
    ctx->pc = 0x283468u;
    {
        const bool branch_taken_0x283468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28346Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        if (branch_taken_0x283468) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283470u;
label_283470:
    // 0x283470: 0x241e00c0
    ctx->pc = 0x283470u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 192));
label_283474:
    // 0x283474: 0xc081bae
label_283478:
    if (ctx->pc == 0x283478u) {
        ctx->pc = 0x283478u;
        SET_GPR_U32(ctx, 4, ((uint32_t)49152 << 16));
        ctx->pc = 0x28347Cu;
        goto label_28347c;
    }
    ctx->pc = 0x283474u;
    SET_GPR_U32(ctx, 31, 0x28347Cu);
    ctx->pc = 0x283478u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49152 << 16));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28347Cu; }
    }
    if (ctx->pc != 0x28347Cu) { return; }
    ctx->pc = 0x28347Cu;
label_28347c:
    // 0x28347c: 0x10400007
label_283480:
    if (ctx->pc == 0x283480u) {
        ctx->pc = 0x283480u;
        SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
        ctx->pc = 0x283484u;
        goto label_283484;
    }
    ctx->pc = 0x28347Cu;
    {
        const bool branch_taken_0x28347c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283480u;
        SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
        if (branch_taken_0x28347c) {
            ctx->pc = 0x28349Cu;
            goto label_28349c;
        }
    }
    ctx->pc = 0x283484u;
label_283484:
    // 0x283484: 0x8ca33b14
    ctx->pc = 0x283484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 15124)));
label_283488:
    // 0x283488: 0x28630065
    ctx->pc = 0x283488u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 101));
label_28348c:
    // 0x28348c: 0x24020065
    ctx->pc = 0x28348cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
label_283490:
    // 0x283490: 0x24040001
    ctx->pc = 0x283490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_283494:
    // 0x283494: 0x83100a
    ctx->pc = 0x283494u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_283498:
    // 0x283498: 0xaca23b14
    ctx->pc = 0x283498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15124), GPR_U32(ctx, 2));
label_28349c:
    // 0x28349c: 0x3c02003c
    ctx->pc = 0x28349cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2834a0:
    // 0x2834a0: 0x8c433b14
    ctx->pc = 0x2834a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15124)));
label_2834a4:
    // 0x2834a4: 0x24020001
    ctx->pc = 0x2834a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2834a8:
    // 0x2834a8: 0x14620003
label_2834ac:
    if (ctx->pc == 0x2834ACu) {
        ctx->pc = 0x2834ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2834B0u;
        goto label_2834b0;
    }
    ctx->pc = 0x2834A8u;
    {
        const bool branch_taken_0x2834a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2834ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2834a8) {
            ctx->pc = 0x2834B8u;
            goto label_2834b8;
        }
    }
    ctx->pc = 0x2834B0u;
label_2834b0:
    // 0x2834b0: 0x1000001d
label_2834b4:
    if (ctx->pc == 0x2834B4u) {
        ctx->pc = 0x2834B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x2834B8u;
        goto label_2834b8;
    }
    ctx->pc = 0x2834B0u;
    {
        const bool branch_taken_0x2834b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2834B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x2834b0) {
            ctx->pc = 0x283528u;
            goto label_283528;
        }
    }
    ctx->pc = 0x2834B8u;
label_2834b8:
    // 0x2834b8: 0xafa30044
    ctx->pc = 0x2834b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_2834bc:
    // 0x2834bc: 0x24020066
    ctx->pc = 0x2834bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
label_2834c0:
    // 0x2834c0: 0xafa20040
    ctx->pc = 0x2834c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2834c4:
    // 0x2834c4: 0x3c03003c
    ctx->pc = 0x2834c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2834c8:
    // 0x2834c8: 0x2402000a
    ctx->pc = 0x2834c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_2834cc:
    // 0x2834cc: 0x10000079
label_2834d0:
    if (ctx->pc == 0x2834D0u) {
        ctx->pc = 0x2834D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15168), GPR_U32(ctx, 2));
        ctx->pc = 0x2834D4u;
        goto label_2834d4;
    }
    ctx->pc = 0x2834CCu;
    {
        const bool branch_taken_0x2834cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2834D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15168), GPR_U32(ctx, 2));
        if (branch_taken_0x2834cc) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x2834D4u;
label_2834d4:
    // 0x2834d4: 0x3c02003c
    ctx->pc = 0x2834d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2834d8:
    // 0x2834d8: 0x8c423b40
    ctx->pc = 0x2834d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15168)));
label_2834dc:
    // 0x2834dc: 0x1c400075
label_2834e0:
    if (ctx->pc == 0x2834E0u) {
        ctx->pc = 0x2834E0u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 193));
        ctx->pc = 0x2834E4u;
        goto label_2834e4;
    }
    ctx->pc = 0x2834DCu;
    {
        const bool branch_taken_0x2834dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2834E0u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 193));
        if (branch_taken_0x2834dc) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x2834E4u;
label_2834e4:
    // 0x2834e4: 0x240202d
    ctx->pc = 0x2834e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2834e8:
    // 0x2834e8: 0x220282d
    ctx->pc = 0x2834e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2834ec:
    // 0x2834ec: 0xc0820e2
label_2834f0:
    if (ctx->pc == 0x2834F0u) {
        ctx->pc = 0x2834F0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2834F4u;
        goto label_2834f4;
    }
    ctx->pc = 0x2834ECu;
    SET_GPR_U32(ctx, 31, 0x2834F4u);
    ctx->pc = 0x2834F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x208388u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMount_0x208388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2834F4u; }
    }
    if (ctx->pc != 0x2834F4u) { return; }
    ctx->pc = 0x2834F4u;
label_2834f4:
    // 0x2834f4: 0x18400004
label_2834f8:
    if (ctx->pc == 0x2834F8u) {
        ctx->pc = 0x2834F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x2834FCu;
        goto label_2834fc;
    }
    ctx->pc = 0x2834F4u;
    {
        const bool branch_taken_0x2834f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2834F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2834f4) {
            ctx->pc = 0x283508u;
            goto label_283508;
        }
    }
    ctx->pc = 0x2834FCu;
label_2834fc:
    // 0x2834fc: 0x24020067
    ctx->pc = 0x2834fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
label_283500:
    // 0x283500: 0x1000006c
label_283504:
    if (ctx->pc == 0x283504u) {
        ctx->pc = 0x283504u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        ctx->pc = 0x283508u;
        goto label_283508;
    }
    ctx->pc = 0x283500u;
    {
        const bool branch_taken_0x283500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283504u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        if (branch_taken_0x283500) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283508u;
label_283508:
    // 0x283508: 0x24020068
    ctx->pc = 0x283508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
label_28350c:
    // 0x28350c: 0x10000069
label_283510:
    if (ctx->pc == 0x283510u) {
        ctx->pc = 0x283510u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        ctx->pc = 0x283514u;
        goto label_283514;
    }
    ctx->pc = 0x28350Cu;
    {
        const bool branch_taken_0x28350c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283510u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        if (branch_taken_0x28350c) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283514u;
label_283514:
    // 0x283514: 0x241e00bf
    ctx->pc = 0x283514u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 191));
label_283518:
    // 0x283518: 0x2403000a
    ctx->pc = 0x283518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_28351c:
    // 0x28351c: 0x10000065
label_283520:
    if (ctx->pc == 0x283520u) {
        ctx->pc = 0x283520u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x283524u;
        goto label_283524;
    }
    ctx->pc = 0x28351Cu;
    {
        const bool branch_taken_0x28351c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283520u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        if (branch_taken_0x28351c) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283524u;
label_283524:
    // 0x283524: 0x241e00be
    ctx->pc = 0x283524u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 190));
label_283528:
    // 0x283528: 0x2402000b
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_28352c:
    // 0x28352c: 0x10000061
label_283530:
    if (ctx->pc == 0x283530u) {
        ctx->pc = 0x283530u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x283534u;
        goto label_283534;
    }
    ctx->pc = 0x28352Cu;
    {
        const bool branch_taken_0x28352c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283530u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x28352c) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283534u;
label_283534:
    // 0x283534: 0x240202d
    ctx->pc = 0x283534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_283538:
    // 0x283538: 0xc0827aa
label_28353c:
    if (ctx->pc == 0x28353Cu) {
        ctx->pc = 0x28353Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283540u;
        goto label_283540;
    }
    ctx->pc = 0x283538u;
    SET_GPR_U32(ctx, 31, 0x283540u);
    ctx->pc = 0x28353Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_vmu_directory_0x209ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283540u; }
    }
    if (ctx->pc != 0x283540u) { return; }
    ctx->pc = 0x283540u;
label_283540:
    // 0x283540: 0x14400009
label_283544:
    if (ctx->pc == 0x283544u) {
        ctx->pc = 0x283544u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x283548u;
        goto label_283548;
    }
    ctx->pc = 0x283540u;
    {
        const bool branch_taken_0x283540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x283544u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x283540) {
            ctx->pc = 0x283568u;
            goto label_283568;
        }
    }
    ctx->pc = 0x283548u;
label_283548:
    // 0x283548: 0x240202d
    ctx->pc = 0x283548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28354c:
    // 0x28354c: 0xc082380
label_283550:
    if (ctx->pc == 0x283550u) {
        ctx->pc = 0x283550u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283554u;
        goto label_283554;
    }
    ctx->pc = 0x28354Cu;
    SET_GPR_U32(ctx, 31, 0x283554u);
    ctx->pc = 0x283550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x208E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveGetFreeBytes_0x208e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283554u; }
    }
    if (ctx->pc != 0x283554u) { return; }
    ctx->pc = 0x283554u;
label_283554:
    // 0x283554: 0xc08246a
label_283558:
    if (ctx->pc == 0x283558u) {
        ctx->pc = 0x283558u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28355Cu;
        goto label_28355c;
    }
    ctx->pc = 0x283554u;
    SET_GPR_U32(ctx, 31, 0x28355Cu);
    ctx->pc = 0x283558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2091A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveFileSize_0x2091a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28355Cu; }
    }
    if (ctx->pc != 0x28355Cu) { return; }
    ctx->pc = 0x28355Cu;
label_28355c:
    // 0x28355c: 0x202802a
    ctx->pc = 0x28355cu;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_283560:
    // 0x283560: 0x16000004
label_283564:
    if (ctx->pc == 0x283564u) {
        ctx->pc = 0x283564u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x283568u;
        goto label_283568;
    }
    ctx->pc = 0x283560u;
    {
        const bool branch_taken_0x283560 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x283564u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x283560) {
            ctx->pc = 0x283574u;
            goto label_283574;
        }
    }
    ctx->pc = 0x283568u;
label_283568:
    // 0x283568: 0x2402000a
    ctx->pc = 0x283568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_28356c:
    // 0x28356c: 0x10000051
label_283570:
    if (ctx->pc == 0x283570u) {
        ctx->pc = 0x283570u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        ctx->pc = 0x283574u;
        goto label_283574;
    }
    ctx->pc = 0x28356Cu;
    {
        const bool branch_taken_0x28356c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283570u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        if (branch_taken_0x28356c) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283574u;
label_283574:
    // 0x283574: 0x24020003
    ctx->pc = 0x283574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_283578:
    // 0x283578: 0x1000004e
label_28357c:
    if (ctx->pc == 0x28357Cu) {
        ctx->pc = 0x28357Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        ctx->pc = 0x283580u;
        goto label_283580;
    }
    ctx->pc = 0x283578u;
    {
        const bool branch_taken_0x283578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28357Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        if (branch_taken_0x283578) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283580u;
label_283580:
    // 0x283580: 0x241e00bd
    ctx->pc = 0x283580u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 189));
label_283584:
    // 0x283584: 0x2403000b
    ctx->pc = 0x283584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
label_283588:
    // 0x283588: 0x1000004a
label_28358c:
    if (ctx->pc == 0x28358Cu) {
        ctx->pc = 0x28358Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x283590u;
        goto label_283590;
    }
    ctx->pc = 0x283588u;
    {
        const bool branch_taken_0x283588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28358Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        if (branch_taken_0x283588) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283590u;
label_283590:
    // 0x283590: 0x3c03003c
    ctx->pc = 0x283590u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_283594:
    // 0x283594: 0x8c623b18
    ctx->pc = 0x283594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15128)));
label_283598:
    // 0x283598: 0x24420001
    ctx->pc = 0x283598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28359c:
    // 0x28359c: 0xac623b18
    ctx->pc = 0x28359cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15128), GPR_U32(ctx, 2));
label_2835a0:
    // 0x2835a0: 0x3c04003c
    ctx->pc = 0x2835a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2835a4:
    // 0x2835a4: 0x2402ffff
    ctx->pc = 0x2835a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2835a8:
    // 0x2835a8: 0xac823b14
    ctx->pc = 0x2835a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15124), GPR_U32(ctx, 2));
label_2835ac:
    // 0x2835ac: 0x3c03003c
    ctx->pc = 0x2835acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2835b0:
    // 0x2835b0: 0x8c623b0c
    ctx->pc = 0x2835b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15116)));
label_2835b4:
    // 0x2835b4: 0x24420001
    ctx->pc = 0x2835b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2835b8:
    // 0x2835b8: 0xac623b0c
    ctx->pc = 0x2835b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15116), GPR_U32(ctx, 2));
label_2835bc:
    // 0x2835bc: 0x28420004
    ctx->pc = 0x2835bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_2835c0:
    // 0x2835c0: 0x1440003d
label_2835c4:
    if (ctx->pc == 0x2835C4u) {
        ctx->pc = 0x2835C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x2835C8u;
        goto label_2835c8;
    }
    ctx->pc = 0x2835C0u;
    {
        const bool branch_taken_0x2835c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2835C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2835c0) {
            ctx->pc = 0x2836B8u;
            goto label_2836b8;
        }
    }
    ctx->pc = 0x2835C8u;
label_2835c8:
    // 0x2835c8: 0xac603b0c
    ctx->pc = 0x2835c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15116), GPR_U32(ctx, 0));
label_2835cc:
    // 0x2835cc: 0x3c03003c
    ctx->pc = 0x2835ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2835d0:
    // 0x2835d0: 0x8c623b10
    ctx->pc = 0x2835d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15120)));
label_2835d4:
    // 0x2835d4: 0x24420001
    ctx->pc = 0x2835d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2835d8:
    // 0x2835d8: 0xac623b10
    ctx->pc = 0x2835d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15120), GPR_U32(ctx, 2));
label_2835dc:
    // 0x2835dc: 0x28420002
    ctx->pc = 0x2835dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_2835e0:
    // 0x2835e0: 0x14400035
label_2835e4:
    if (ctx->pc == 0x2835E4u) {
        ctx->pc = 0x2835E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x2835E8u;
        goto label_2835e8;
    }
    ctx->pc = 0x2835E0u;
    {
        const bool branch_taken_0x2835e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2835E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2835e0) {
            ctx->pc = 0x2836B8u;
            goto label_2836b8;
        }
    }
    ctx->pc = 0x2835E8u;
label_2835e8:
    // 0x2835e8: 0x24020014
    ctx->pc = 0x2835e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_2835ec:
    // 0x2835ec: 0x10000031
label_2835f0:
    if (ctx->pc == 0x2835F0u) {
        ctx->pc = 0x2835F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 15124), GPR_U32(ctx, 2));
        ctx->pc = 0x2835F4u;
        goto label_2835f4;
    }
    ctx->pc = 0x2835ECu;
    {
        const bool branch_taken_0x2835ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2835F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 15124), GPR_U32(ctx, 2));
        if (branch_taken_0x2835ec) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x2835F4u;
label_2835f4:
    // 0x2835f4: 0x3c02003c
    ctx->pc = 0x2835f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2835f8:
    // 0x2835f8: 0x8c423b18
    ctx->pc = 0x2835f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15128)));
label_2835fc:
    // 0x2835fc: 0x10400004
label_283600:
    if (ctx->pc == 0x283600u) {
        ctx->pc = 0x283600u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x283604u;
        goto label_283604;
    }
    ctx->pc = 0x2835FCu;
    {
        const bool branch_taken_0x2835fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283600u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2835fc) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x283604u;
label_283604:
    // 0x283604: 0x24020063
    ctx->pc = 0x283604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_283608:
    // 0x283608: 0x1000002a
label_28360c:
    if (ctx->pc == 0x28360Cu) {
        ctx->pc = 0x28360Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        ctx->pc = 0x283610u;
        goto label_283610;
    }
    ctx->pc = 0x283608u;
    {
        const bool branch_taken_0x283608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28360Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
        if (branch_taken_0x283608) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x283610u;
label_283610:
    // 0x283610: 0x24020015
    ctx->pc = 0x283610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
label_283614:
    // 0x283614: 0xac623b14
    ctx->pc = 0x283614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15124), GPR_U32(ctx, 2));
label_283618:
    // 0x283618: 0x241e00bc
    ctx->pc = 0x283618u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 188));
label_28361c:
    // 0x28361c: 0x24020063
    ctx->pc = 0x28361cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_283620:
    // 0x283620: 0xafa20040
    ctx->pc = 0x283620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_283624:
    // 0x283624: 0x902d
    ctx->pc = 0x283624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283628:
    // 0x283628: 0x3c02003c
    ctx->pc = 0x283628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28362c:
    // 0x28362c: 0x24573b20
    ctx->pc = 0x28362cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 15136));
label_283630:
    // 0x283630: 0x3c16003c
    ctx->pc = 0x283630u;
    SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
label_283634:
    // 0x283634: 0x3c15003c
    ctx->pc = 0x283634u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
label_283638:
    // 0x283638: 0x3c13003c
    ctx->pc = 0x283638u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
label_28363c:
    // 0x28363c: 0x2414ffff
    ctx->pc = 0x28363cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
label_283640:
    // 0x283640: 0x882d
    ctx->pc = 0x283640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283644:
    // 0x283644: 0x0
    ctx->pc = 0x283644u;
    // NOP
label_283648:
    // 0x283648: 0x128100
    ctx->pc = 0x283648u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 4));
label_28364c:
    // 0x28364c: 0x2a220004
    ctx->pc = 0x28364cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_283650:
    // 0x283650: 0x1040000c
label_283654:
    if (ctx->pc == 0x283654u) {
        ctx->pc = 0x283654u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283658u;
        goto label_283658;
    }
    ctx->pc = 0x283650u;
    {
        const bool branch_taken_0x283650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283654u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283650) {
            ctx->pc = 0x283684u;
            goto label_283684;
        }
    }
    ctx->pc = 0x283658u;
label_283658:
    // 0x283658: 0xc0a0cc0
label_28365c:
    if (ctx->pc == 0x28365Cu) {
        ctx->pc = 0x28365Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283660u;
        goto label_283660;
    }
    ctx->pc = 0x283658u;
    SET_GPR_U32(ctx, 31, 0x283660u);
    ctx->pc = 0x28365Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x283300u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_card_state_0x283300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283660u; }
    }
    if (ctx->pc != 0x283660u) { return; }
    ctx->pc = 0x283660u;
label_283660:
    // 0x283660: 0x111880
    ctx->pc = 0x283660u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_283664:
    // 0x283664: 0x701821
    ctx->pc = 0x283664u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_283668:
    // 0x283668: 0x771821
    ctx->pc = 0x283668u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_28366c:
    // 0x28366c: 0x8c630000
    ctx->pc = 0x28366cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_283670:
    // 0x283670: 0x5043fff6
label_283674:
    if (ctx->pc == 0x283674u) {
        ctx->pc = 0x283674u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x283678u;
        goto label_283678;
    }
    ctx->pc = 0x283670u;
    {
        const bool branch_taken_0x283670 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x283670) {
            ctx->pc = 0x283674u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x28364Cu;
            goto label_28364c;
        }
    }
    ctx->pc = 0x283678u;
label_283678:
    // 0x283678: 0xaed23b10
    ctx->pc = 0x283678u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15120), GPR_U32(ctx, 18));
label_28367c:
    // 0x28367c: 0xaeb13b0c
    ctx->pc = 0x28367cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15116), GPR_U32(ctx, 17));
label_283680:
    // 0x283680: 0xae743b14
    ctx->pc = 0x283680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15124), GPR_U32(ctx, 20));
label_283684:
    // 0x283684: 0x8e623b14
    ctx->pc = 0x283684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 15124)));
label_283688:
    // 0x283688: 0x440000b
label_28368c:
    if (ctx->pc == 0x28368Cu) {
        ctx->pc = 0x28368Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x283690u;
        goto label_283690;
    }
    ctx->pc = 0x283688u;
    {
        const bool branch_taken_0x283688 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28368Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x283688) {
            ctx->pc = 0x2836B8u;
            goto label_2836b8;
        }
    }
    ctx->pc = 0x283690u;
label_283690:
    // 0x283690: 0x26520001
    ctx->pc = 0x283690u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_283694:
    // 0x283694: 0x2a420002
    ctx->pc = 0x283694u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 2));
label_283698:
    // 0x283698: 0x5440ffeb
label_28369c:
    if (ctx->pc == 0x28369Cu) {
        ctx->pc = 0x28369Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2836A0u;
        goto label_2836a0;
    }
    ctx->pc = 0x283698u;
    {
        const bool branch_taken_0x283698 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x283698) {
            ctx->pc = 0x28369Cu;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x283648u;
            goto label_283648;
        }
    }
    ctx->pc = 0x2836A0u;
label_2836a0:
    // 0x2836a0: 0x10000005
label_2836a4:
    if (ctx->pc == 0x2836A4u) {
        ctx->pc = 0x2836A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x2836A8u;
        goto label_2836a8;
    }
    ctx->pc = 0x2836A0u;
    {
        const bool branch_taken_0x2836a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2836A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2836a0) {
            ctx->pc = 0x2836B8u;
            goto label_2836b8;
        }
    }
    ctx->pc = 0x2836A8u;
label_2836a8:
    // 0x2836a8: 0x3c030035
    ctx->pc = 0x2836a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2836ac:
    // 0x2836ac: 0x24020002
    ctx->pc = 0x2836acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2836b0:
    // 0x2836b0: 0xac629ba4
    ctx->pc = 0x2836b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941604), GPR_U32(ctx, 2));
label_2836b4:
    // 0x2836b4: 0x3c020035
    ctx->pc = 0x2836b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2836b8:
    // 0x2836b8: 0x8c439ba4
    ctx->pc = 0x2836b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294941604)));
label_2836bc:
    // 0x2836bc: 0x24020002
    ctx->pc = 0x2836bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2836c0:
    // 0x2836c0: 0x106200b9
label_2836c4:
    if (ctx->pc == 0x2836C4u) {
        ctx->pc = 0x2836C8u;
        goto label_2836c8;
    }
    ctx->pc = 0x2836C0u;
    {
        const bool branch_taken_0x2836c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2836c0) {
            ctx->pc = 0x2839A8u;
            goto label_2839a8;
        }
    }
    ctx->pc = 0x2836C8u;
label_2836c8:
    // 0x2836c8: 0x7c00014
label_2836cc:
    if (ctx->pc == 0x2836CCu) {
        ctx->pc = 0x2836CCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x2836D0u;
        goto label_2836d0;
    }
    ctx->pc = 0x2836C8u;
    {
        const bool branch_taken_0x2836c8 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x2836CCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x2836c8) {
            ctx->pc = 0x28371Cu;
            goto label_28371c;
        }
    }
    ctx->pc = 0x2836D0u;
label_2836d0:
    // 0x2836d0: 0x8e043b08
    ctx->pc = 0x2836d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15112)));
label_2836d4:
    // 0x2836d4: 0xc0b0ce8
label_2836d8:
    if (ctx->pc == 0x2836D8u) {
        ctx->pc = 0x2836D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2836DCu;
        goto label_2836dc;
    }
    ctx->pc = 0x2836D4u;
    SET_GPR_U32(ctx, 31, 0x2836DCu);
    ctx->pc = 0x2836D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836DCu; }
    }
    if (ctx->pc != 0x2836DCu) { return; }
    ctx->pc = 0x2836DCu;
label_2836dc:
    // 0x2836dc: 0x24050200
    ctx->pc = 0x2836dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
label_2836e0:
    // 0x2836e0: 0x24a5fe80
    ctx->pc = 0x2836e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966912));
label_2836e4:
    // 0x2836e4: 0x24060180
    ctx->pc = 0x2836e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
label_2836e8:
    // 0x2836e8: 0x24c6ff00
    ctx->pc = 0x2836e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967040));
label_2836ec:
    // 0x2836ec: 0x8e043b08
    ctx->pc = 0x2836ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15112)));
label_2836f0:
    // 0x2836f0: 0x52843
    ctx->pc = 0x2836f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_2836f4:
    // 0x2836f4: 0x3c013f00
    ctx->pc = 0x2836f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2836f8:
    // 0x2836f8: 0x44816000
    ctx->pc = 0x2836f8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2836fc:
    // 0x2836fc: 0xc0b0df2
label_283700:
    if (ctx->pc == 0x283700u) {
        ctx->pc = 0x283700u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
        ctx->pc = 0x283704u;
        goto label_283704;
    }
    ctx->pc = 0x2836FCu;
    SET_GPR_U32(ctx, 31, 0x283704u);
    ctx->pc = 0x283700u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283704u; }
    }
    if (ctx->pc != 0x283704u) { return; }
    ctx->pc = 0x283704u;
label_283704:
    // 0x283704: 0x8e043b08
    ctx->pc = 0x283704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15112)));
label_283708:
    // 0x283708: 0x24050180
    ctx->pc = 0x283708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 384));
label_28370c:
    // 0x28370c: 0xc0b0cf6
label_283710:
    if (ctx->pc == 0x283710u) {
        ctx->pc = 0x283710u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x283714u;
        goto label_283714;
    }
    ctx->pc = 0x28370Cu;
    SET_GPR_U32(ctx, 31, 0x283714u);
    ctx->pc = 0x283710u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283714u; }
    }
    if (ctx->pc != 0x283714u) { return; }
    ctx->pc = 0x283714u;
label_283714:
    // 0x283714: 0x10000005
label_283718:
    if (ctx->pc == 0x283718u) {
        ctx->pc = 0x28371Cu;
        goto label_28371c;
    }
    ctx->pc = 0x283714u;
    {
        const bool branch_taken_0x283714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x283714) {
            ctx->pc = 0x28372Cu;
            goto label_28372c;
        }
    }
    ctx->pc = 0x28371Cu;
label_28371c:
    // 0x28371c: 0x3c02003c
    ctx->pc = 0x28371cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_283720:
    // 0x283720: 0x8c443b08
    ctx->pc = 0x283720u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15112)));
label_283724:
    // 0x283724: 0xc0b0ce8
label_283728:
    if (ctx->pc == 0x283728u) {
        ctx->pc = 0x283728u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28372Cu;
        goto label_28372c;
    }
    ctx->pc = 0x283724u;
    SET_GPR_U32(ctx, 31, 0x28372Cu);
    ctx->pc = 0x283728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28372Cu; }
    }
    if (ctx->pc != 0x28372Cu) { return; }
    ctx->pc = 0x28372Cu;
label_28372c:
    // 0x28372c: 0x7c0001b
label_283730:
    if (ctx->pc == 0x283730u) {
        ctx->pc = 0x283730u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283734u;
        goto label_283734;
    }
    ctx->pc = 0x28372Cu;
    {
        const bool branch_taken_0x28372c = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x283730u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28372c) {
            ctx->pc = 0x28379Cu;
            goto label_28379c;
        }
    }
    ctx->pc = 0x283734u;
label_283734:
    // 0x283734: 0xc082936
label_283738:
    if (ctx->pc == 0x283738u) {
        ctx->pc = 0x283738u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28373Cu;
        goto label_28373c;
    }
    ctx->pc = 0x283734u;
    SET_GPR_U32(ctx, 31, 0x28373Cu);
    ctx->pc = 0x283738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20A4D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mem_slot_desc_0x20a4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28373Cu; }
    }
    if (ctx->pc != 0x28373Cu) { return; }
    ctx->pc = 0x28373Cu;
label_28373c:
    // 0x28373c: 0x40802d
    ctx->pc = 0x28373cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283740:
    // 0x283740: 0x2404ffff
    ctx->pc = 0x283740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_283744:
    // 0x283744: 0x3c0282d
    ctx->pc = 0x283744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_283748:
    // 0x283748: 0x2406ffff
    ctx->pc = 0x283748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28374c:
    // 0x28374c: 0x3c013f80
    ctx->pc = 0x28374cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_283750:
    // 0x283750: 0x44816000
    ctx->pc = 0x283750u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_283754:
    // 0x283754: 0xc080a70
label_283758:
    if (ctx->pc == 0x283758u) {
        ctx->pc = 0x283758u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x28375Cu;
        goto label_28375c;
    }
    ctx->pc = 0x283754u;
    SET_GPR_U32(ctx, 31, 0x28375Cu);
    ctx->pc = 0x283758u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2029C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextHeight_0x2029c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28375Cu; }
    }
    if (ctx->pc != 0x28375Cu) { return; }
    ctx->pc = 0x28375Cu;
label_28375c:
    // 0x28375c: 0x21fc2
    ctx->pc = 0x28375cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_283760:
    // 0x283760: 0x621821
    ctx->pc = 0x283760u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_283764:
    // 0x283764: 0x31843
    ctx->pc = 0x283764u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_283768:
    // 0x283768: 0x240500b0
    ctx->pc = 0x283768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 176));
label_28376c:
    // 0x28376c: 0x2404ff00
    ctx->pc = 0x28376cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_283770:
    // 0x283770: 0xa32823
    ctx->pc = 0x283770u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_283774:
    // 0x283774: 0x24060004
    ctx->pc = 0x283774u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_283778:
    // 0x283778: 0x2407ffff
    ctx->pc = 0x283778u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28377c:
    // 0x28377c: 0x3c080016
    ctx->pc = 0x28377cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)22 << 16));
label_283780:
    // 0x283780: 0x35080c03
    ctx->pc = 0x283780u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 3075));
label_283784:
    // 0x283784: 0x3c0482d
    ctx->pc = 0x283784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_283788:
    // 0x283788: 0xc0808f4
label_28378c:
    if (ctx->pc == 0x28378Cu) {
        ctx->pc = 0x28378Cu;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283790u;
        goto label_283790;
    }
    ctx->pc = 0x283788u;
    SET_GPR_U32(ctx, 31, 0x283790u);
    ctx->pc = 0x28378Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2023D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringTextMLines_0x2023d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283790u; }
    }
    if (ctx->pc != 0x283790u) { return; }
    ctx->pc = 0x283790u;
label_283790:
    // 0x283790: 0x3c020031
    ctx->pc = 0x283790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_283794:
    // 0x283794: 0x10000002
label_283798:
    if (ctx->pc == 0x283798u) {
        ctx->pc = 0x283798u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294963844)));
        ctx->pc = 0x28379Cu;
        goto label_28379c;
    }
    ctx->pc = 0x283794u;
    {
        const bool branch_taken_0x283794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283798u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294963844)));
        if (branch_taken_0x283794) {
            ctx->pc = 0x2837A0u;
            goto label_2837a0;
        }
    }
    ctx->pc = 0x28379Cu;
label_28379c:
    // 0x28379c: 0x24100088
    ctx->pc = 0x28379cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 136));
label_2837a0:
    // 0x2837a0: 0x8fa30044
    ctx->pc = 0x2837a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2837a4:
    // 0x2837a4: 0x4600038
label_2837a8:
    if (ctx->pc == 0x2837A8u) {
        ctx->pc = 0x2837A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2837ACu;
        goto label_2837ac;
    }
    ctx->pc = 0x2837A4u;
    {
        const bool branch_taken_0x2837a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2837A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2837a4) {
            ctx->pc = 0x283888u;
            goto label_283888;
        }
    }
    ctx->pc = 0x2837ACu;
label_2837ac:
    // 0x2837ac: 0x10600014
label_2837b0:
    if (ctx->pc == 0x2837B0u) {
        ctx->pc = 0x2837B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2837B4u;
        goto label_2837b4;
    }
    ctx->pc = 0x2837ACu;
    {
        const bool branch_taken_0x2837ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2837B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2837ac) {
            ctx->pc = 0x283800u;
            goto label_283800;
        }
    }
    ctx->pc = 0x2837B4u;
label_2837b4:
    // 0x2837b4: 0x2404ff00
    ctx->pc = 0x2837b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_2837b8:
    // 0x2837b8: 0x200282d
    ctx->pc = 0x2837b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2837bc:
    // 0x2837bc: 0x3c013f00
    ctx->pc = 0x2837bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2837c0:
    // 0x2837c0: 0x44816000
    ctx->pc = 0x2837c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2837c4:
    // 0x2837c4: 0x3c06003b
    ctx->pc = 0x2837c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2837c8:
    // 0x2837c8: 0xc080a9a
label_2837cc:
    if (ctx->pc == 0x2837CCu) {
        ctx->pc = 0x2837CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952112));
        ctx->pc = 0x2837D0u;
        goto label_2837d0;
    }
    ctx->pc = 0x2837C8u;
    SET_GPR_U32(ctx, 31, 0x2837D0u);
    ctx->pc = 0x2837CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952112));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2837D0u; }
    }
    if (ctx->pc != 0x2837D0u) { return; }
    ctx->pc = 0x2837D0u;
label_2837d0:
    // 0x2837d0: 0x2404ff00
    ctx->pc = 0x2837d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_2837d4:
    // 0x2837d4: 0x26050014
    ctx->pc = 0x2837d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 20));
label_2837d8:
    // 0x2837d8: 0x24060006
    ctx->pc = 0x2837d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_2837dc:
    // 0x2837dc: 0x3c070016
    ctx->pc = 0x2837dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
label_2837e0:
    // 0x2837e0: 0x34e70c03
    ctx->pc = 0x2837e0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3075));
label_2837e4:
    // 0x2837e4: 0x3c013f00
    ctx->pc = 0x2837e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2837e8:
    // 0x2837e8: 0x44816000
    ctx->pc = 0x2837e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2837ec:
    // 0x2837ec: 0x3c08003b
    ctx->pc = 0x2837ecu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_2837f0:
    // 0x2837f0: 0xc080510
label_2837f4:
    if (ctx->pc == 0x2837F4u) {
        ctx->pc = 0x2837F4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952120));
        ctx->pc = 0x2837F8u;
        goto label_2837f8;
    }
    ctx->pc = 0x2837F0u;
    SET_GPR_U32(ctx, 31, 0x2837F8u);
    ctx->pc = 0x2837F4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952120));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2837F8u; }
    }
    if (ctx->pc != 0x2837F8u) { return; }
    ctx->pc = 0x2837F8u;
label_2837f8:
    // 0x2837f8: 0x10000013
label_2837fc:
    if (ctx->pc == 0x2837FCu) {
        ctx->pc = 0x2837FCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x283800u;
        goto label_283800;
    }
    ctx->pc = 0x2837F8u;
    {
        const bool branch_taken_0x2837f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2837FCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
        if (branch_taken_0x2837f8) {
            ctx->pc = 0x283848u;
            goto label_283848;
        }
    }
    ctx->pc = 0x283800u;
label_283800:
    // 0x283800: 0x2404ff00
    ctx->pc = 0x283800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_283804:
    // 0x283804: 0x200282d
    ctx->pc = 0x283804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283808:
    // 0x283808: 0x24060006
    ctx->pc = 0x283808u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_28380c:
    // 0x28380c: 0x3c070016
    ctx->pc = 0x28380cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
label_283810:
    // 0x283810: 0x34e70c03
    ctx->pc = 0x283810u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3075));
label_283814:
    // 0x283814: 0x3c013f00
    ctx->pc = 0x283814u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_283818:
    // 0x283818: 0x44816000
    ctx->pc = 0x283818u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28381c:
    // 0x28381c: 0x3c08003b
    ctx->pc = 0x28381cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_283820:
    // 0x283820: 0xc080510
label_283824:
    if (ctx->pc == 0x283824u) {
        ctx->pc = 0x283824u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952112));
        ctx->pc = 0x283828u;
        goto label_283828;
    }
    ctx->pc = 0x283820u;
    SET_GPR_U32(ctx, 31, 0x283828u);
    ctx->pc = 0x283824u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952112));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283828u; }
    }
    if (ctx->pc != 0x283828u) { return; }
    ctx->pc = 0x283828u;
label_283828:
    // 0x283828: 0x2404ff00
    ctx->pc = 0x283828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_28382c:
    // 0x28382c: 0x26050014
    ctx->pc = 0x28382cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 20));
label_283830:
    // 0x283830: 0x3c013f00
    ctx->pc = 0x283830u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_283834:
    // 0x283834: 0x44816000
    ctx->pc = 0x283834u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_283838:
    // 0x283838: 0x3c06003b
    ctx->pc = 0x283838u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_28383c:
    // 0x28383c: 0xc080a9a
label_283840:
    if (ctx->pc == 0x283840u) {
        ctx->pc = 0x283840u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952120));
        ctx->pc = 0x283844u;
        goto label_283844;
    }
    ctx->pc = 0x28383Cu;
    SET_GPR_U32(ctx, 31, 0x283844u);
    ctx->pc = 0x283840u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952120));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283844u; }
    }
    if (ctx->pc != 0x283844u) { return; }
    ctx->pc = 0x283844u;
label_283844:
    // 0x283844: 0x26100030
    ctx->pc = 0x283844u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
label_283848:
    // 0x283848: 0x8fa20040
    ctx->pc = 0x283848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28384c:
    // 0x28384c: 0x440008e
label_283850:
    if (ctx->pc == 0x283850u) {
        ctx->pc = 0x283850u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->pc = 0x283854u;
        goto label_283854;
    }
    ctx->pc = 0x28384Cu;
    {
        const bool branch_taken_0x28384c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283850u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x28384c) {
            ctx->pc = 0x283A88u;
            goto label_283a88;
        }
    }
    ctx->pc = 0x283854u;
label_283854:
    // 0x283854: 0x200282d
    ctx->pc = 0x283854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283858:
    // 0x283858: 0x24060006
    ctx->pc = 0x283858u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_28385c:
    // 0x28385c: 0x3c070016
    ctx->pc = 0x28385cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
label_283860:
    // 0x283860: 0x34e70c03
    ctx->pc = 0x283860u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3075));
label_283864:
    // 0x283864: 0x3c013f00
    ctx->pc = 0x283864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_283868:
    // 0x283868: 0x44816000
    ctx->pc = 0x283868u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28386c:
    // 0x28386c: 0x3c08003b
    ctx->pc = 0x28386cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_283870:
    // 0x283870: 0xc080510
label_283874:
    if (ctx->pc == 0x283874u) {
        ctx->pc = 0x283874u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952128));
        ctx->pc = 0x283878u;
        goto label_283878;
    }
    ctx->pc = 0x283870u;
    SET_GPR_U32(ctx, 31, 0x283878u);
    ctx->pc = 0x283874u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294952128));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283878u; }
    }
    if (ctx->pc != 0x283878u) { return; }
    ctx->pc = 0x283878u;
label_283878:
    // 0x283878: 0x3c020038
    ctx->pc = 0x283878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_28387c:
    // 0x28387c: 0x8c44b154
    ctx->pc = 0x28387cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
label_283880:
    // 0x283880: 0x1000000d
label_283884:
    if (ctx->pc == 0x283884u) {
        ctx->pc = 0x283884u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 229));
        ctx->pc = 0x283888u;
        goto label_283888;
    }
    ctx->pc = 0x283880u;
    {
        const bool branch_taken_0x283880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283884u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 229));
        if (branch_taken_0x283880) {
            ctx->pc = 0x2838B8u;
            goto label_2838b8;
        }
    }
    ctx->pc = 0x283888u;
label_283888:
    // 0x283888: 0x440007f
label_28388c:
    if (ctx->pc == 0x28388Cu) {
        ctx->pc = 0x28388Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x283890u;
        goto label_283890;
    }
    ctx->pc = 0x283888u;
    {
        const bool branch_taken_0x283888 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28388Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x283888) {
            ctx->pc = 0x283A88u;
            goto label_283a88;
        }
    }
    ctx->pc = 0x283890u;
label_283890:
    // 0x283890: 0x2404ff00
    ctx->pc = 0x283890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_283894:
    // 0x283894: 0x200282d
    ctx->pc = 0x283894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283898:
    // 0x283898: 0x3c013f00
    ctx->pc = 0x283898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_28389c:
    // 0x28389c: 0x44816000
    ctx->pc = 0x28389cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2838a0:
    // 0x2838a0: 0x3c06003b
    ctx->pc = 0x2838a0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2838a4:
    // 0x2838a4: 0xc080a9a
label_2838a8:
    if (ctx->pc == 0x2838A8u) {
        ctx->pc = 0x2838A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952152));
        ctx->pc = 0x2838ACu;
        goto label_2838ac;
    }
    ctx->pc = 0x2838A4u;
    SET_GPR_U32(ctx, 31, 0x2838ACu);
    ctx->pc = 0x2838A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952152));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838ACu; }
    }
    if (ctx->pc != 0x2838ACu) { return; }
    ctx->pc = 0x2838ACu;
label_2838ac:
    // 0x2838ac: 0x3c020038
    ctx->pc = 0x2838acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2838b0:
    // 0x2838b0: 0x8c44b154
    ctx->pc = 0x2838b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
label_2838b4:
    // 0x2838b4: 0x240500df
    ctx->pc = 0x2838b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 223));
label_2838b8:
    // 0x2838b8: 0x2606ffff
    ctx->pc = 0x2838b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967295));
label_2838bc:
    // 0x2838bc: 0x24070010
    ctx->pc = 0x2838bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
label_2838c0:
    // 0x2838c0: 0xc0b0c6a
label_2838c4:
    if (ctx->pc == 0x2838C4u) {
        ctx->pc = 0x2838C4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2838C8u;
        goto label_2838c8;
    }
    ctx->pc = 0x2838C0u;
    SET_GPR_U32(ctx, 31, 0x2838C8u);
    ctx->pc = 0x2838C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838C8u; }
    }
    if (ctx->pc != 0x2838C8u) { return; }
    ctx->pc = 0x2838C8u;
label_2838c8:
    // 0x2838c8: 0x3c013ecc
    ctx->pc = 0x2838c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16076 << 16));
label_2838cc:
    // 0x2838cc: 0x3421cccd
    ctx->pc = 0x2838ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_2838d0:
    // 0x2838d0: 0x44816000
    ctx->pc = 0x2838d0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2838d4:
    // 0x2838d4: 0xc0b0dd6
label_2838d8:
    if (ctx->pc == 0x2838D8u) {
        ctx->pc = 0x2838D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2838DCu;
        goto label_2838dc;
    }
    ctx->pc = 0x2838D4u;
    SET_GPR_U32(ctx, 31, 0x2838DCu);
    ctx->pc = 0x2838D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838DCu; }
    }
    if (ctx->pc != 0x2838DCu) { return; }
    ctx->pc = 0x2838DCu;
label_2838dc:
    // 0x2838dc: 0xc081bae
label_2838e0:
    if (ctx->pc == 0x2838E0u) {
        ctx->pc = 0x2838E0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)512 << 16));
        ctx->pc = 0x2838E4u;
        goto label_2838e4;
    }
    ctx->pc = 0x2838DCu;
    SET_GPR_U32(ctx, 31, 0x2838E4u);
    ctx->pc = 0x2838E0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)512 << 16));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838E4u; }
    }
    if (ctx->pc != 0x2838E4u) { return; }
    ctx->pc = 0x2838E4u;
label_2838e4:
    // 0x2838e4: 0x10400068
label_2838e8:
    if (ctx->pc == 0x2838E8u) {
        ctx->pc = 0x2838E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2838ECu;
        goto label_2838ec;
    }
    ctx->pc = 0x2838E4u;
    {
        const bool branch_taken_0x2838e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2838E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2838e4) {
            ctx->pc = 0x283A88u;
            goto label_283a88;
        }
    }
    ctx->pc = 0x2838ECu;
label_2838ec:
    // 0x2838ec: 0x8fa30040
    ctx->pc = 0x2838ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2838f0:
    // 0x2838f0: 0x10000065
label_2838f4:
    if (ctx->pc == 0x2838F4u) {
        ctx->pc = 0x2838F4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 15124), GPR_U32(ctx, 3));
        ctx->pc = 0x2838F8u;
        goto label_2838f8;
    }
    ctx->pc = 0x2838F0u;
    {
        const bool branch_taken_0x2838f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2838F4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 15124), GPR_U32(ctx, 3));
        if (branch_taken_0x2838f0) {
            ctx->pc = 0x283A88u;
            goto label_283a88;
        }
    }
    ctx->pc = 0x2838F8u;
label_2838f8:
    // 0x2838f8: 0x8c423afc
    ctx->pc = 0x2838f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15100)));
label_2838fc:
    // 0x2838fc: 0x14400017
label_283900:
    if (ctx->pc == 0x283900u) {
        ctx->pc = 0x283900u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x283904u;
        goto label_283904;
    }
    ctx->pc = 0x2838FCu;
    {
        const bool branch_taken_0x2838fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x283900u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2838fc) {
            ctx->pc = 0x28395Cu;
            goto label_28395c;
        }
    }
    ctx->pc = 0x283904u;
label_283904:
    // 0x283904: 0x3c03003c
    ctx->pc = 0x283904u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_283908:
    // 0x283908: 0x8c623af8
    ctx->pc = 0x283908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15096)));
label_28390c:
    // 0x28390c: 0x10400003
label_283910:
    if (ctx->pc == 0x283910u) {
        ctx->pc = 0x283910u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x283914u;
        goto label_283914;
    }
    ctx->pc = 0x28390Cu;
    {
        const bool branch_taken_0x28390c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283910u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x28390c) {
            ctx->pc = 0x28391Cu;
            goto label_28391c;
        }
    }
    ctx->pc = 0x283914u;
label_283914:
    // 0x283914: 0x10000011
label_283918:
    if (ctx->pc == 0x283918u) {
        ctx->pc = 0x283918u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15096), GPR_U32(ctx, 2));
        ctx->pc = 0x28391Cu;
        goto label_28391c;
    }
    ctx->pc = 0x283914u;
    {
        const bool branch_taken_0x283914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283918u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15096), GPR_U32(ctx, 2));
        if (branch_taken_0x283914) {
            ctx->pc = 0x28395Cu;
            goto label_28395c;
        }
    }
    ctx->pc = 0x28391Cu;
label_28391c:
    // 0x28391c: 0x24040001
    ctx->pc = 0x28391cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_283920:
    // 0x283920: 0xc09908c
label_283924:
    if (ctx->pc == 0x283924u) {
        ctx->pc = 0x283924u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283928u;
        goto label_283928;
    }
    ctx->pc = 0x283920u;
    SET_GPR_U32(ctx, 31, 0x283928u);
    ctx->pc = 0x283924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283928u; }
    }
    if (ctx->pc != 0x283928u) { return; }
    ctx->pc = 0x283928u;
label_283928:
    // 0x283928: 0x1040000b
label_28392c:
    if (ctx->pc == 0x28392Cu) {
        ctx->pc = 0x28392Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x283930u;
        goto label_283930;
    }
    ctx->pc = 0x283928u;
    {
        const bool branch_taken_0x283928 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28392Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x283928) {
            ctx->pc = 0x283958u;
            goto label_283958;
        }
    }
    ctx->pc = 0x283930u;
label_283930:
    // 0x283930: 0x24020001
    ctx->pc = 0x283930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_283934:
    // 0x283934: 0xac623afc
    ctx->pc = 0x283934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15100), GPR_U32(ctx, 2));
label_283938:
    // 0x283938: 0x3c030035
    ctx->pc = 0x283938u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28393c:
    // 0x28393c: 0x3c020035
    ctx->pc = 0x28393cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_283940:
    // 0x283940: 0x8c429ba8
    ctx->pc = 0x283940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941608)));
label_283944:
    // 0x283944: 0xac629bac
    ctx->pc = 0x283944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941612), GPR_U32(ctx, 2));
label_283948:
    // 0x283948: 0x3c030035
    ctx->pc = 0x283948u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28394c:
    // 0x28394c: 0x3c020035
    ctx->pc = 0x28394cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_283950:
    // 0x283950: 0x8c429bb0
    ctx->pc = 0x283950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941616)));
label_283954:
    // 0x283954: 0xac629bb4
    ctx->pc = 0x283954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941620), GPR_U32(ctx, 2));
label_283958:
    // 0x283958: 0x3c04003b
    ctx->pc = 0x283958u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_28395c:
    // 0x28395c: 0x2484c4f0
    ctx->pc = 0x28395cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952176));
label_283960:
    // 0x283960: 0xc0b1bb4
label_283964:
    if (ctx->pc == 0x283964u) {
        ctx->pc = 0x283964u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283968u;
        goto label_283968;
    }
    ctx->pc = 0x283960u;
    SET_GPR_U32(ctx, 31, 0x283968u);
    ctx->pc = 0x283964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283968u; }
    }
    if (ctx->pc != 0x283968u) { return; }
    ctx->pc = 0x283968u;
label_283968:
    // 0x283968: 0x3c04003c
    ctx->pc = 0x283968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_28396c:
    // 0x28396c: 0x3c030031
    ctx->pc = 0x28396cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_283970:
    // 0x283970: 0x8c823af0
    ctx->pc = 0x283970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 15088)));
label_283974:
    // 0x283974: 0x8c63ffbc
    ctx->pc = 0x283974u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_283978:
    // 0x283978: 0x431021
    ctx->pc = 0x283978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28397c:
    // 0x28397c: 0xac823af0
    ctx->pc = 0x28397cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15088), GPR_U32(ctx, 2));
label_283980:
    // 0x283980: 0x3c020035
    ctx->pc = 0x283980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_283984:
    // 0x283984: 0x8c42a2d8
    ctx->pc = 0x283984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
label_283988:
    // 0x283988: 0x1040000b
label_28398c:
    if (ctx->pc == 0x28398Cu) {
        ctx->pc = 0x28398Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x283990u;
        goto label_283990;
    }
    ctx->pc = 0x283988u;
    {
        const bool branch_taken_0x283988 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28398Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x283988) {
            ctx->pc = 0x2839B8u;
            goto label_2839b8;
        }
    }
    ctx->pc = 0x283990u;
label_283990:
    // 0x283990: 0x8c423afc
    ctx->pc = 0x283990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15100)));
label_283994:
    // 0x283994: 0x10400008
label_283998:
    if (ctx->pc == 0x283998u) {
        ctx->pc = 0x283998u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x28399Cu;
        goto label_28399c;
    }
    ctx->pc = 0x283994u;
    {
        const bool branch_taken_0x283994 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283998u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x283994) {
            ctx->pc = 0x2839B8u;
            goto label_2839b8;
        }
    }
    ctx->pc = 0x28399Cu;
label_28399c:
    // 0x28399c: 0x8c420710
    ctx->pc = 0x28399cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_2839a0:
    // 0x2839a0: 0x14400006
label_2839a4:
    if (ctx->pc == 0x2839A4u) {
        ctx->pc = 0x2839A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x2839A8u;
        goto label_2839a8;
    }
    ctx->pc = 0x2839A0u;
    {
        const bool branch_taken_0x2839a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2839A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2839a0) {
            ctx->pc = 0x2839BCu;
            goto label_2839bc;
        }
    }
    ctx->pc = 0x2839A8u;
label_2839a8:
    // 0x2839a8: 0xc0a0960
label_2839ac:
    if (ctx->pc == 0x2839ACu) {
        ctx->pc = 0x2839ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2839B0u;
        goto label_2839b0;
    }
    ctx->pc = 0x2839A8u;
    SET_GPR_U32(ctx, 31, 0x2839B0u);
    ctx->pc = 0x2839ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2839B0u; }
    }
    if (ctx->pc != 0x2839B0u) { return; }
    ctx->pc = 0x2839B0u;
label_2839b0:
    // 0x2839b0: 0x10000036
label_2839b4:
    if (ctx->pc == 0x2839B4u) {
        ctx->pc = 0x2839B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x2839B8u;
        goto label_2839b8;
    }
    ctx->pc = 0x2839B0u;
    {
        const bool branch_taken_0x2839b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2839B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x2839b0) {
            ctx->pc = 0x283A8Cu;
            goto label_283a8c;
        }
    }
    ctx->pc = 0x2839B8u;
label_2839b8:
    // 0x2839b8: 0x3c04003c
    ctx->pc = 0x2839b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2839bc:
    // 0x2839bc: 0x3c020031
    ctx->pc = 0x2839bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2839c0:
    // 0x2839c0: 0x8c833aec
    ctx->pc = 0x2839c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 15084)));
label_2839c4:
    // 0x2839c4: 0x8c42ffbc
    ctx->pc = 0x2839c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_2839c8:
    // 0x2839c8: 0x621823
    ctx->pc = 0x2839c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2839cc:
    // 0x2839cc: 0xac833aec
    ctx->pc = 0x2839ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15084), GPR_U32(ctx, 3));
label_2839d0:
    // 0x2839d0: 0x3c040035
    ctx->pc = 0x2839d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2839d4:
    // 0x2839d4: 0x8c82a2d8
    ctx->pc = 0x2839d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943448)));
label_2839d8:
    // 0x2839d8: 0x1440000e
label_2839dc:
    if (ctx->pc == 0x2839DCu) {
        ctx->pc = 0x2839DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2839E0u;
        goto label_2839e0;
    }
    ctx->pc = 0x2839D8u;
    {
        const bool branch_taken_0x2839d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2839DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2839d8) {
            ctx->pc = 0x283A14u;
            goto label_283a14;
        }
    }
    ctx->pc = 0x2839E0u;
label_2839e0:
    // 0x2839e0: 0x8c42ff9c
    ctx->pc = 0x2839e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_2839e4:
    // 0x2839e4: 0x1440000b
label_2839e8:
    if (ctx->pc == 0x2839E8u) {
        ctx->pc = 0x2839E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2839ECu;
        goto label_2839ec;
    }
    ctx->pc = 0x2839E4u;
    {
        const bool branch_taken_0x2839e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2839E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2839e4) {
            ctx->pc = 0x283A14u;
            goto label_283a14;
        }
    }
    ctx->pc = 0x2839ECu;
label_2839ec:
    // 0x2839ec: 0xdc420e28
    ctx->pc = 0x2839ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_2839f0:
    // 0x2839f0: 0x30420004
    ctx->pc = 0x2839f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_2839f4:
    // 0x2839f4: 0x14400007
label_2839f8:
    if (ctx->pc == 0x2839F8u) {
        ctx->pc = 0x2839F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2839FCu;
        goto label_2839fc;
    }
    ctx->pc = 0x2839F4u;
    {
        const bool branch_taken_0x2839f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2839F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2839f4) {
            ctx->pc = 0x283A14u;
            goto label_283a14;
        }
    }
    ctx->pc = 0x2839FCu;
label_2839fc:
    // 0x2839fc: 0x8c423afc
    ctx->pc = 0x2839fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15100)));
label_283a00:
    // 0x283a00: 0x10400004
label_283a04:
    if (ctx->pc == 0x283A04u) {
        ctx->pc = 0x283A08u;
        goto label_283a08;
    }
    ctx->pc = 0x283A00u;
    {
        const bool branch_taken_0x283a00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x283a00) {
            ctx->pc = 0x283A14u;
            goto label_283a14;
        }
    }
    ctx->pc = 0x283A08u;
label_283a08:
    // 0x283a08: 0x1c600002
label_283a0c:
    if (ctx->pc == 0x283A0Cu) {
        ctx->pc = 0x283A0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x283A10u;
        goto label_283a10;
    }
    ctx->pc = 0x283A08u;
    {
        const bool branch_taken_0x283a08 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x283A0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x283a08) {
            ctx->pc = 0x283A14u;
            goto label_283a14;
        }
    }
    ctx->pc = 0x283A10u;
label_283a10:
    // 0x283a10: 0xac82a2d8
    ctx->pc = 0x283a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943448), GPR_U32(ctx, 2));
label_283a14:
    // 0x283a14: 0xc0a08ca
label_283a18:
    if (ctx->pc == 0x283A18u) {
        ctx->pc = 0x283A18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283A1Cu;
        goto label_283a1c;
    }
    ctx->pc = 0x283A14u;
    SET_GPR_U32(ctx, 31, 0x283A1Cu);
    ctx->pc = 0x283A18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x282328u;
    {
        const uint32_t __entryPc = ctx->pc;
        attract_advance_0x282328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283A1Cu; }
    }
    if (ctx->pc != 0x283A1Cu) { return; }
    ctx->pc = 0x283A1Cu;
label_283a1c:
    // 0x283a1c: 0x3c020032
    ctx->pc = 0x283a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_283a20:
    // 0x283a20: 0x8c420710
    ctx->pc = 0x283a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_283a24:
    // 0x283a24: 0x10400009
label_283a28:
    if (ctx->pc == 0x283A28u) {
        ctx->pc = 0x283A28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966880));
        ctx->pc = 0x283A2Cu;
        goto label_283a2c;
    }
    ctx->pc = 0x283A24u;
    {
        const bool branch_taken_0x283a24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283A28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966880));
        if (branch_taken_0x283a24) {
            ctx->pc = 0x283A4Cu;
            goto label_283a4c;
        }
    }
    ctx->pc = 0x283A2Cu;
label_283a2c:
    // 0x283a2c: 0x2405fec0
    ctx->pc = 0x283a2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294966976));
label_283a30:
    // 0x283a30: 0x3c013f80
    ctx->pc = 0x283a30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_283a34:
    // 0x283a34: 0x44816000
    ctx->pc = 0x283a34u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_283a38:
    // 0x283a38: 0x3c06003b
    ctx->pc = 0x283a38u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_283a3c:
    // 0x283a3c: 0xc080b00
label_283a40:
    if (ctx->pc == 0x283A40u) {
        ctx->pc = 0x283A40u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952192));
        ctx->pc = 0x283A44u;
        goto label_283a44;
    }
    ctx->pc = 0x283A3Cu;
    SET_GPR_U32(ctx, 31, 0x283A44u);
    ctx->pc = 0x283A40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952192));
    ctx->pc = 0x202C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowTextMLines_0x202c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283A44u; }
    }
    if (ctx->pc != 0x283A44u) { return; }
    ctx->pc = 0x283A44u;
label_283a44:
    // 0x283a44: 0x10000011
label_283a48:
    if (ctx->pc == 0x283A48u) {
        ctx->pc = 0x283A48u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x283A4Cu;
        goto label_283a4c;
    }
    ctx->pc = 0x283A44u;
    {
        const bool branch_taken_0x283a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283A48u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x283a44) {
            ctx->pc = 0x283A8Cu;
            goto label_283a8c;
        }
    }
    ctx->pc = 0x283A4Cu;
label_283a4c:
    // 0x283a4c: 0x3c020035
    ctx->pc = 0x283a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_283a50:
    // 0x283a50: 0x8c42a2d8
    ctx->pc = 0x283a50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
label_283a54:
    // 0x283a54: 0x1440000d
label_283a58:
    if (ctx->pc == 0x283A58u) {
        ctx->pc = 0x283A58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x283A5Cu;
        goto label_283a5c;
    }
    ctx->pc = 0x283A54u;
    {
        const bool branch_taken_0x283a54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x283A58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x283a54) {
            ctx->pc = 0x283A8Cu;
            goto label_283a8c;
        }
    }
    ctx->pc = 0x283A5Cu;
label_283a5c:
    // 0x283a5c: 0x3c020031
    ctx->pc = 0x283a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_283a60:
    // 0x283a60: 0x8c42f184
    ctx->pc = 0x283a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_283a64:
    // 0x283a64: 0x1440000a
label_283a68:
    if (ctx->pc == 0x283A68u) {
        ctx->pc = 0x283A68u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x283A6Cu;
        goto label_283a6c;
    }
    ctx->pc = 0x283A64u;
    {
        const bool branch_taken_0x283a64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x283A68u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x283a64) {
            ctx->pc = 0x283A90u;
            goto label_283a90;
        }
    }
    ctx->pc = 0x283A6Cu;
label_283a6c:
    // 0x283a6c: 0x2404fe50
    ctx->pc = 0x283a6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966864));
label_283a70:
    // 0x283a70: 0x2405fec0
    ctx->pc = 0x283a70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294966976));
label_283a74:
    // 0x283a74: 0x3c013f80
    ctx->pc = 0x283a74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_283a78:
    // 0x283a78: 0x44816000
    ctx->pc = 0x283a78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_283a7c:
    // 0x283a7c: 0x3c06003b
    ctx->pc = 0x283a7cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_283a80:
    // 0x283a80: 0xc080b00
label_283a84:
    if (ctx->pc == 0x283A84u) {
        ctx->pc = 0x283A84u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952208));
        ctx->pc = 0x283A88u;
        goto label_283a88;
    }
    ctx->pc = 0x283A80u;
    SET_GPR_U32(ctx, 31, 0x283A88u);
    ctx->pc = 0x283A84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952208));
    ctx->pc = 0x202C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowTextMLines_0x202c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283A88u; }
    }
    if (ctx->pc != 0x283A88u) { return; }
    ctx->pc = 0x283A88u;
label_283a88:
    // 0x283a88: 0xdfbf00e0
    ctx->pc = 0x283a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_283a8c:
    // 0x283a8c: 0xdfbe00d0
    ctx->pc = 0x283a8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_283a90:
    // 0x283a90: 0xdfb700c0
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_283a94:
    // 0x283a94: 0xdfb600b0
    ctx->pc = 0x283a94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_283a98:
    // 0x283a98: 0xdfb500a0
    ctx->pc = 0x283a98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_283a9c:
    // 0x283a9c: 0xdfb40090
    ctx->pc = 0x283a9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_283aa0:
    // 0x283aa0: 0xdfb30080
    ctx->pc = 0x283aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_283aa4:
    // 0x283aa4: 0xdfb20070
    ctx->pc = 0x283aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_283aa8:
    // 0x283aa8: 0xdfb10060
    ctx->pc = 0x283aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_283aac:
    // 0x283aac: 0xdfb00050
    ctx->pc = 0x283aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_283ab0:
    // 0x283ab0: 0x3e00008
label_283ab4:
    if (ctx->pc == 0x283AB4u) {
        ctx->pc = 0x283AB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x283AB8u;
        goto label_fallthrough_0x283ab0;
    }
    ctx->pc = 0x283AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283AB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283340u: goto label_283340;
            case 0x283344u: goto label_283344;
            case 0x283348u: goto label_283348;
            case 0x28334Cu: goto label_28334c;
            case 0x283350u: goto label_283350;
            case 0x283354u: goto label_283354;
            case 0x283358u: goto label_283358;
            case 0x28335Cu: goto label_28335c;
            case 0x283360u: goto label_283360;
            case 0x283364u: goto label_283364;
            case 0x283368u: goto label_283368;
            case 0x28336Cu: goto label_28336c;
            case 0x283370u: goto label_283370;
            case 0x283374u: goto label_283374;
            case 0x283378u: goto label_283378;
            case 0x28337Cu: goto label_28337c;
            case 0x283380u: goto label_283380;
            case 0x283384u: goto label_283384;
            case 0x283388u: goto label_283388;
            case 0x28338Cu: goto label_28338c;
            case 0x283390u: goto label_283390;
            case 0x283394u: goto label_283394;
            case 0x283398u: goto label_283398;
            case 0x28339Cu: goto label_28339c;
            case 0x2833A0u: goto label_2833a0;
            case 0x2833A4u: goto label_2833a4;
            case 0x2833A8u: goto label_2833a8;
            case 0x2833ACu: goto label_2833ac;
            case 0x2833B0u: goto label_2833b0;
            case 0x2833B4u: goto label_2833b4;
            case 0x2833B8u: goto label_2833b8;
            case 0x2833BCu: goto label_2833bc;
            case 0x2833C0u: goto label_2833c0;
            case 0x2833C4u: goto label_2833c4;
            case 0x2833C8u: goto label_2833c8;
            case 0x2833CCu: goto label_2833cc;
            case 0x2833D0u: goto label_2833d0;
            case 0x2833D4u: goto label_2833d4;
            case 0x2833D8u: goto label_2833d8;
            case 0x2833DCu: goto label_2833dc;
            case 0x2833E0u: goto label_2833e0;
            case 0x2833E4u: goto label_2833e4;
            case 0x2833E8u: goto label_2833e8;
            case 0x2833ECu: goto label_2833ec;
            case 0x2833F0u: goto label_2833f0;
            case 0x2833F4u: goto label_2833f4;
            case 0x2833F8u: goto label_2833f8;
            case 0x2833FCu: goto label_2833fc;
            case 0x283400u: goto label_283400;
            case 0x283404u: goto label_283404;
            case 0x283408u: goto label_283408;
            case 0x28340Cu: goto label_28340c;
            case 0x283410u: goto label_283410;
            case 0x283414u: goto label_283414;
            case 0x283418u: goto label_283418;
            case 0x28341Cu: goto label_28341c;
            case 0x283420u: goto label_283420;
            case 0x283424u: goto label_283424;
            case 0x283428u: goto label_283428;
            case 0x28342Cu: goto label_28342c;
            case 0x283430u: goto label_283430;
            case 0x283434u: goto label_283434;
            case 0x283438u: goto label_283438;
            case 0x28343Cu: goto label_28343c;
            case 0x283440u: goto label_283440;
            case 0x283444u: goto label_283444;
            case 0x283448u: goto label_283448;
            case 0x28344Cu: goto label_28344c;
            case 0x283450u: goto label_283450;
            case 0x283454u: goto label_283454;
            case 0x283458u: goto label_283458;
            case 0x28345Cu: goto label_28345c;
            case 0x283460u: goto label_283460;
            case 0x283464u: goto label_283464;
            case 0x283468u: goto label_283468;
            case 0x28346Cu: goto label_28346c;
            case 0x283470u: goto label_283470;
            case 0x283474u: goto label_283474;
            case 0x283478u: goto label_283478;
            case 0x28347Cu: goto label_28347c;
            case 0x283480u: goto label_283480;
            case 0x283484u: goto label_283484;
            case 0x283488u: goto label_283488;
            case 0x28348Cu: goto label_28348c;
            case 0x283490u: goto label_283490;
            case 0x283494u: goto label_283494;
            case 0x283498u: goto label_283498;
            case 0x28349Cu: goto label_28349c;
            case 0x2834A0u: goto label_2834a0;
            case 0x2834A4u: goto label_2834a4;
            case 0x2834A8u: goto label_2834a8;
            case 0x2834ACu: goto label_2834ac;
            case 0x2834B0u: goto label_2834b0;
            case 0x2834B4u: goto label_2834b4;
            case 0x2834B8u: goto label_2834b8;
            case 0x2834BCu: goto label_2834bc;
            case 0x2834C0u: goto label_2834c0;
            case 0x2834C4u: goto label_2834c4;
            case 0x2834C8u: goto label_2834c8;
            case 0x2834CCu: goto label_2834cc;
            case 0x2834D0u: goto label_2834d0;
            case 0x2834D4u: goto label_2834d4;
            case 0x2834D8u: goto label_2834d8;
            case 0x2834DCu: goto label_2834dc;
            case 0x2834E0u: goto label_2834e0;
            case 0x2834E4u: goto label_2834e4;
            case 0x2834E8u: goto label_2834e8;
            case 0x2834ECu: goto label_2834ec;
            case 0x2834F0u: goto label_2834f0;
            case 0x2834F4u: goto label_2834f4;
            case 0x2834F8u: goto label_2834f8;
            case 0x2834FCu: goto label_2834fc;
            case 0x283500u: goto label_283500;
            case 0x283504u: goto label_283504;
            case 0x283508u: goto label_283508;
            case 0x28350Cu: goto label_28350c;
            case 0x283510u: goto label_283510;
            case 0x283514u: goto label_283514;
            case 0x283518u: goto label_283518;
            case 0x28351Cu: goto label_28351c;
            case 0x283520u: goto label_283520;
            case 0x283524u: goto label_283524;
            case 0x283528u: goto label_283528;
            case 0x28352Cu: goto label_28352c;
            case 0x283530u: goto label_283530;
            case 0x283534u: goto label_283534;
            case 0x283538u: goto label_283538;
            case 0x28353Cu: goto label_28353c;
            case 0x283540u: goto label_283540;
            case 0x283544u: goto label_283544;
            case 0x283548u: goto label_283548;
            case 0x28354Cu: goto label_28354c;
            case 0x283550u: goto label_283550;
            case 0x283554u: goto label_283554;
            case 0x283558u: goto label_283558;
            case 0x28355Cu: goto label_28355c;
            case 0x283560u: goto label_283560;
            case 0x283564u: goto label_283564;
            case 0x283568u: goto label_283568;
            case 0x28356Cu: goto label_28356c;
            case 0x283570u: goto label_283570;
            case 0x283574u: goto label_283574;
            case 0x283578u: goto label_283578;
            case 0x28357Cu: goto label_28357c;
            case 0x283580u: goto label_283580;
            case 0x283584u: goto label_283584;
            case 0x283588u: goto label_283588;
            case 0x28358Cu: goto label_28358c;
            case 0x283590u: goto label_283590;
            case 0x283594u: goto label_283594;
            case 0x283598u: goto label_283598;
            case 0x28359Cu: goto label_28359c;
            case 0x2835A0u: goto label_2835a0;
            case 0x2835A4u: goto label_2835a4;
            case 0x2835A8u: goto label_2835a8;
            case 0x2835ACu: goto label_2835ac;
            case 0x2835B0u: goto label_2835b0;
            case 0x2835B4u: goto label_2835b4;
            case 0x2835B8u: goto label_2835b8;
            case 0x2835BCu: goto label_2835bc;
            case 0x2835C0u: goto label_2835c0;
            case 0x2835C4u: goto label_2835c4;
            case 0x2835C8u: goto label_2835c8;
            case 0x2835CCu: goto label_2835cc;
            case 0x2835D0u: goto label_2835d0;
            case 0x2835D4u: goto label_2835d4;
            case 0x2835D8u: goto label_2835d8;
            case 0x2835DCu: goto label_2835dc;
            case 0x2835E0u: goto label_2835e0;
            case 0x2835E4u: goto label_2835e4;
            case 0x2835E8u: goto label_2835e8;
            case 0x2835ECu: goto label_2835ec;
            case 0x2835F0u: goto label_2835f0;
            case 0x2835F4u: goto label_2835f4;
            case 0x2835F8u: goto label_2835f8;
            case 0x2835FCu: goto label_2835fc;
            case 0x283600u: goto label_283600;
            case 0x283604u: goto label_283604;
            case 0x283608u: goto label_283608;
            case 0x28360Cu: goto label_28360c;
            case 0x283610u: goto label_283610;
            case 0x283614u: goto label_283614;
            case 0x283618u: goto label_283618;
            case 0x28361Cu: goto label_28361c;
            case 0x283620u: goto label_283620;
            case 0x283624u: goto label_283624;
            case 0x283628u: goto label_283628;
            case 0x28362Cu: goto label_28362c;
            case 0x283630u: goto label_283630;
            case 0x283634u: goto label_283634;
            case 0x283638u: goto label_283638;
            case 0x28363Cu: goto label_28363c;
            case 0x283640u: goto label_283640;
            case 0x283644u: goto label_283644;
            case 0x283648u: goto label_283648;
            case 0x28364Cu: goto label_28364c;
            case 0x283650u: goto label_283650;
            case 0x283654u: goto label_283654;
            case 0x283658u: goto label_283658;
            case 0x28365Cu: goto label_28365c;
            case 0x283660u: goto label_283660;
            case 0x283664u: goto label_283664;
            case 0x283668u: goto label_283668;
            case 0x28366Cu: goto label_28366c;
            case 0x283670u: goto label_283670;
            case 0x283674u: goto label_283674;
            case 0x283678u: goto label_283678;
            case 0x28367Cu: goto label_28367c;
            case 0x283680u: goto label_283680;
            case 0x283684u: goto label_283684;
            case 0x283688u: goto label_283688;
            case 0x28368Cu: goto label_28368c;
            case 0x283690u: goto label_283690;
            case 0x283694u: goto label_283694;
            case 0x283698u: goto label_283698;
            case 0x28369Cu: goto label_28369c;
            case 0x2836A0u: goto label_2836a0;
            case 0x2836A4u: goto label_2836a4;
            case 0x2836A8u: goto label_2836a8;
            case 0x2836ACu: goto label_2836ac;
            case 0x2836B0u: goto label_2836b0;
            case 0x2836B4u: goto label_2836b4;
            case 0x2836B8u: goto label_2836b8;
            case 0x2836BCu: goto label_2836bc;
            case 0x2836C0u: goto label_2836c0;
            case 0x2836C4u: goto label_2836c4;
            case 0x2836C8u: goto label_2836c8;
            case 0x2836CCu: goto label_2836cc;
            case 0x2836D0u: goto label_2836d0;
            case 0x2836D4u: goto label_2836d4;
            case 0x2836D8u: goto label_2836d8;
            case 0x2836DCu: goto label_2836dc;
            case 0x2836E0u: goto label_2836e0;
            case 0x2836E4u: goto label_2836e4;
            case 0x2836E8u: goto label_2836e8;
            case 0x2836ECu: goto label_2836ec;
            case 0x2836F0u: goto label_2836f0;
            case 0x2836F4u: goto label_2836f4;
            case 0x2836F8u: goto label_2836f8;
            case 0x2836FCu: goto label_2836fc;
            case 0x283700u: goto label_283700;
            case 0x283704u: goto label_283704;
            case 0x283708u: goto label_283708;
            case 0x28370Cu: goto label_28370c;
            case 0x283710u: goto label_283710;
            case 0x283714u: goto label_283714;
            case 0x283718u: goto label_283718;
            case 0x28371Cu: goto label_28371c;
            case 0x283720u: goto label_283720;
            case 0x283724u: goto label_283724;
            case 0x283728u: goto label_283728;
            case 0x28372Cu: goto label_28372c;
            case 0x283730u: goto label_283730;
            case 0x283734u: goto label_283734;
            case 0x283738u: goto label_283738;
            case 0x28373Cu: goto label_28373c;
            case 0x283740u: goto label_283740;
            case 0x283744u: goto label_283744;
            case 0x283748u: goto label_283748;
            case 0x28374Cu: goto label_28374c;
            case 0x283750u: goto label_283750;
            case 0x283754u: goto label_283754;
            case 0x283758u: goto label_283758;
            case 0x28375Cu: goto label_28375c;
            case 0x283760u: goto label_283760;
            case 0x283764u: goto label_283764;
            case 0x283768u: goto label_283768;
            case 0x28376Cu: goto label_28376c;
            case 0x283770u: goto label_283770;
            case 0x283774u: goto label_283774;
            case 0x283778u: goto label_283778;
            case 0x28377Cu: goto label_28377c;
            case 0x283780u: goto label_283780;
            case 0x283784u: goto label_283784;
            case 0x283788u: goto label_283788;
            case 0x28378Cu: goto label_28378c;
            case 0x283790u: goto label_283790;
            case 0x283794u: goto label_283794;
            case 0x283798u: goto label_283798;
            case 0x28379Cu: goto label_28379c;
            case 0x2837A0u: goto label_2837a0;
            case 0x2837A4u: goto label_2837a4;
            case 0x2837A8u: goto label_2837a8;
            case 0x2837ACu: goto label_2837ac;
            case 0x2837B0u: goto label_2837b0;
            case 0x2837B4u: goto label_2837b4;
            case 0x2837B8u: goto label_2837b8;
            case 0x2837BCu: goto label_2837bc;
            case 0x2837C0u: goto label_2837c0;
            case 0x2837C4u: goto label_2837c4;
            case 0x2837C8u: goto label_2837c8;
            case 0x2837CCu: goto label_2837cc;
            case 0x2837D0u: goto label_2837d0;
            case 0x2837D4u: goto label_2837d4;
            case 0x2837D8u: goto label_2837d8;
            case 0x2837DCu: goto label_2837dc;
            case 0x2837E0u: goto label_2837e0;
            case 0x2837E4u: goto label_2837e4;
            case 0x2837E8u: goto label_2837e8;
            case 0x2837ECu: goto label_2837ec;
            case 0x2837F0u: goto label_2837f0;
            case 0x2837F4u: goto label_2837f4;
            case 0x2837F8u: goto label_2837f8;
            case 0x2837FCu: goto label_2837fc;
            case 0x283800u: goto label_283800;
            case 0x283804u: goto label_283804;
            case 0x283808u: goto label_283808;
            case 0x28380Cu: goto label_28380c;
            case 0x283810u: goto label_283810;
            case 0x283814u: goto label_283814;
            case 0x283818u: goto label_283818;
            case 0x28381Cu: goto label_28381c;
            case 0x283820u: goto label_283820;
            case 0x283824u: goto label_283824;
            case 0x283828u: goto label_283828;
            case 0x28382Cu: goto label_28382c;
            case 0x283830u: goto label_283830;
            case 0x283834u: goto label_283834;
            case 0x283838u: goto label_283838;
            case 0x28383Cu: goto label_28383c;
            case 0x283840u: goto label_283840;
            case 0x283844u: goto label_283844;
            case 0x283848u: goto label_283848;
            case 0x28384Cu: goto label_28384c;
            case 0x283850u: goto label_283850;
            case 0x283854u: goto label_283854;
            case 0x283858u: goto label_283858;
            case 0x28385Cu: goto label_28385c;
            case 0x283860u: goto label_283860;
            case 0x283864u: goto label_283864;
            case 0x283868u: goto label_283868;
            case 0x28386Cu: goto label_28386c;
            case 0x283870u: goto label_283870;
            case 0x283874u: goto label_283874;
            case 0x283878u: goto label_283878;
            case 0x28387Cu: goto label_28387c;
            case 0x283880u: goto label_283880;
            case 0x283884u: goto label_283884;
            case 0x283888u: goto label_283888;
            case 0x28388Cu: goto label_28388c;
            case 0x283890u: goto label_283890;
            case 0x283894u: goto label_283894;
            case 0x283898u: goto label_283898;
            case 0x28389Cu: goto label_28389c;
            case 0x2838A0u: goto label_2838a0;
            case 0x2838A4u: goto label_2838a4;
            case 0x2838A8u: goto label_2838a8;
            case 0x2838ACu: goto label_2838ac;
            case 0x2838B0u: goto label_2838b0;
            case 0x2838B4u: goto label_2838b4;
            case 0x2838B8u: goto label_2838b8;
            case 0x2838BCu: goto label_2838bc;
            case 0x2838C0u: goto label_2838c0;
            case 0x2838C4u: goto label_2838c4;
            case 0x2838C8u: goto label_2838c8;
            case 0x2838CCu: goto label_2838cc;
            case 0x2838D0u: goto label_2838d0;
            case 0x2838D4u: goto label_2838d4;
            case 0x2838D8u: goto label_2838d8;
            case 0x2838DCu: goto label_2838dc;
            case 0x2838E0u: goto label_2838e0;
            case 0x2838E4u: goto label_2838e4;
            case 0x2838E8u: goto label_2838e8;
            case 0x2838ECu: goto label_2838ec;
            case 0x2838F0u: goto label_2838f0;
            case 0x2838F4u: goto label_2838f4;
            case 0x2838F8u: goto label_2838f8;
            case 0x2838FCu: goto label_2838fc;
            case 0x283900u: goto label_283900;
            case 0x283904u: goto label_283904;
            case 0x283908u: goto label_283908;
            case 0x28390Cu: goto label_28390c;
            case 0x283910u: goto label_283910;
            case 0x283914u: goto label_283914;
            case 0x283918u: goto label_283918;
            case 0x28391Cu: goto label_28391c;
            case 0x283920u: goto label_283920;
            case 0x283924u: goto label_283924;
            case 0x283928u: goto label_283928;
            case 0x28392Cu: goto label_28392c;
            case 0x283930u: goto label_283930;
            case 0x283934u: goto label_283934;
            case 0x283938u: goto label_283938;
            case 0x28393Cu: goto label_28393c;
            case 0x283940u: goto label_283940;
            case 0x283944u: goto label_283944;
            case 0x283948u: goto label_283948;
            case 0x28394Cu: goto label_28394c;
            case 0x283950u: goto label_283950;
            case 0x283954u: goto label_283954;
            case 0x283958u: goto label_283958;
            case 0x28395Cu: goto label_28395c;
            case 0x283960u: goto label_283960;
            case 0x283964u: goto label_283964;
            case 0x283968u: goto label_283968;
            case 0x28396Cu: goto label_28396c;
            case 0x283970u: goto label_283970;
            case 0x283974u: goto label_283974;
            case 0x283978u: goto label_283978;
            case 0x28397Cu: goto label_28397c;
            case 0x283980u: goto label_283980;
            case 0x283984u: goto label_283984;
            case 0x283988u: goto label_283988;
            case 0x28398Cu: goto label_28398c;
            case 0x283990u: goto label_283990;
            case 0x283994u: goto label_283994;
            case 0x283998u: goto label_283998;
            case 0x28399Cu: goto label_28399c;
            case 0x2839A0u: goto label_2839a0;
            case 0x2839A4u: goto label_2839a4;
            case 0x2839A8u: goto label_2839a8;
            case 0x2839ACu: goto label_2839ac;
            case 0x2839B0u: goto label_2839b0;
            case 0x2839B4u: goto label_2839b4;
            case 0x2839B8u: goto label_2839b8;
            case 0x2839BCu: goto label_2839bc;
            case 0x2839C0u: goto label_2839c0;
            case 0x2839C4u: goto label_2839c4;
            case 0x2839C8u: goto label_2839c8;
            case 0x2839CCu: goto label_2839cc;
            case 0x2839D0u: goto label_2839d0;
            case 0x2839D4u: goto label_2839d4;
            case 0x2839D8u: goto label_2839d8;
            case 0x2839DCu: goto label_2839dc;
            case 0x2839E0u: goto label_2839e0;
            case 0x2839E4u: goto label_2839e4;
            case 0x2839E8u: goto label_2839e8;
            case 0x2839ECu: goto label_2839ec;
            case 0x2839F0u: goto label_2839f0;
            case 0x2839F4u: goto label_2839f4;
            case 0x2839F8u: goto label_2839f8;
            case 0x2839FCu: goto label_2839fc;
            case 0x283A00u: goto label_283a00;
            case 0x283A04u: goto label_283a04;
            case 0x283A08u: goto label_283a08;
            case 0x283A0Cu: goto label_283a0c;
            case 0x283A10u: goto label_283a10;
            case 0x283A14u: goto label_283a14;
            case 0x283A18u: goto label_283a18;
            case 0x283A1Cu: goto label_283a1c;
            case 0x283A20u: goto label_283a20;
            case 0x283A24u: goto label_283a24;
            case 0x283A28u: goto label_283a28;
            case 0x283A2Cu: goto label_283a2c;
            case 0x283A30u: goto label_283a30;
            case 0x283A34u: goto label_283a34;
            case 0x283A38u: goto label_283a38;
            case 0x283A3Cu: goto label_283a3c;
            case 0x283A40u: goto label_283a40;
            case 0x283A44u: goto label_283a44;
            case 0x283A48u: goto label_283a48;
            case 0x283A4Cu: goto label_283a4c;
            case 0x283A50u: goto label_283a50;
            case 0x283A54u: goto label_283a54;
            case 0x283A58u: goto label_283a58;
            case 0x283A5Cu: goto label_283a5c;
            case 0x283A60u: goto label_283a60;
            case 0x283A64u: goto label_283a64;
            case 0x283A68u: goto label_283a68;
            case 0x283A6Cu: goto label_283a6c;
            case 0x283A70u: goto label_283a70;
            case 0x283A74u: goto label_283a74;
            case 0x283A78u: goto label_283a78;
            case 0x283A7Cu: goto label_283a7c;
            case 0x283A80u: goto label_283a80;
            case 0x283A84u: goto label_283a84;
            case 0x283A88u: goto label_283a88;
            case 0x283A8Cu: goto label_283a8c;
            case 0x283A90u: goto label_283a90;
            case 0x283A94u: goto label_283a94;
            case 0x283A98u: goto label_283a98;
            case 0x283A9Cu: goto label_283a9c;
            case 0x283AA0u: goto label_283aa0;
            case 0x283AA4u: goto label_283aa4;
            case 0x283AA8u: goto label_283aa8;
            case 0x283AACu: goto label_283aac;
            case 0x283AB0u: goto label_283ab0;
            case 0x283AB4u: goto label_283ab4;
            default: break;
        }
        return;
    }
label_fallthrough_0x283ab0:
    ctx->pc = 0x283AB8u;
}
