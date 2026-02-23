#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _dtoa_r
// Address: 0x140458 - 0x141624
void _dtoa_r_0x140458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_dtoa_r");


    ctx->pc = 0x140458u;

label_140458:
    // 0x140458: 0x27bdff00
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_14045c:
    // 0x14045c: 0xffbe00e0
    ctx->pc = 0x14045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_140460:
    // 0x140460: 0xffb600c0
    ctx->pc = 0x140460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_140464:
    // 0x140464: 0x80f02d
    ctx->pc = 0x140464u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140468:
    // 0x140468: 0xffb00060
    ctx->pc = 0x140468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_14046c:
    // 0x14046c: 0xa0b02d
    ctx->pc = 0x14046cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140470:
    // 0x140470: 0xffbf00f0
    ctx->pc = 0x140470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_140474:
    // 0x140474: 0x120802d
    ctx->pc = 0x140474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_140478:
    // 0x140478: 0xffb700d0
    ctx->pc = 0x140478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
label_14047c:
    // 0x14047c: 0xffb500b0
    ctx->pc = 0x14047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
label_140480:
    // 0x140480: 0xffb400a0
    ctx->pc = 0x140480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_140484:
    // 0x140484: 0xffb30090
    ctx->pc = 0x140484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_140488:
    // 0x140488: 0xffb20080
    ctx->pc = 0x140488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_14048c:
    // 0x14048c: 0xffb10070
    ctx->pc = 0x14048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
label_140490:
    // 0x140490: 0xafa60008
    ctx->pc = 0x140490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_140494:
    // 0x140494: 0x8fcb0040
    ctx->pc = 0x140494u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_140498:
    // 0x140498: 0xafa7000c
    ctx->pc = 0x140498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_14049c:
    // 0x14049c: 0xafa80010
    ctx->pc = 0x14049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_1404a0:
    // 0x1404a0: 0x1160000a
label_1404a4:
    if (ctx->pc == 0x1404A4u) {
        ctx->pc = 0x1404A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->pc = 0x1404A8u;
        goto label_1404a8;
    }
    ctx->pc = 0x1404A0u;
    {
        const bool branch_taken_0x1404a0 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x1404A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        if (branch_taken_0x1404a0) {
            ctx->pc = 0x1404CCu;
            goto label_1404cc;
        }
    }
    ctx->pc = 0x1404A8u;
label_1404a8:
    // 0x1404a8: 0x8fc60044
    ctx->pc = 0x1404a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_1404ac:
    // 0x1404ac: 0x24030001
    ctx->pc = 0x1404acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1404b0:
    // 0x1404b0: 0x160282d
    ctx->pc = 0x1404b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1404b4:
    // 0x1404b4: 0xad660004
    ctx->pc = 0x1404b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
label_1404b8:
    // 0x1404b8: 0x8fc20044
    ctx->pc = 0x1404b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_1404bc:
    // 0x1404bc: 0x431804
    ctx->pc = 0x1404bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1404c0:
    // 0x1404c0: 0xc050d5c
label_1404c4:
    if (ctx->pc == 0x1404C4u) {
        ctx->pc = 0x1404C4u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x1404C8u;
        goto label_1404c8;
    }
    ctx->pc = 0x1404C0u;
    SET_GPR_U32(ctx, 31, 0x1404C8u);
    ctx->pc = 0x1404C4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404C8u; }
        else if (ctx->pc != 0x1404C8u) { ctx->pc = 0x1404C8u; }
    }
    if (ctx->pc != 0x1404C8u) { return; }
    ctx->pc = 0x1404C8u;
label_1404c8:
    // 0x1404c8: 0xafc00040
    ctx->pc = 0x1404c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_1404cc:
    // 0x1404cc: 0x16103e
    ctx->pc = 0x1404ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_1404d0:
    // 0x1404d0: 0x2203c
    ctx->pc = 0x1404d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1404d4:
    // 0x1404d4: 0x4203f
    ctx->pc = 0x1404d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1404d8:
    // 0x1404d8: 0x483000c
label_1404dc:
    if (ctx->pc == 0x1404DCu) {
        ctx->pc = 0x1404DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1404E0u;
        goto label_1404e0;
    }
    ctx->pc = 0x1404D8u;
    {
        const bool branch_taken_0x1404d8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1404d8) {
            ctx->pc = 0x1404DCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x14050Cu;
            goto label_14050c;
        }
    }
    ctx->pc = 0x1404E0u;
label_1404e0:
    // 0x1404e0: 0x3c027fff
    ctx->pc = 0x1404e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
label_1404e4:
    // 0x1404e4: 0x3c03ffff
    ctx->pc = 0x1404e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_1404e8:
    // 0x1404e8: 0x3183e
    ctx->pc = 0x1404e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1404ec:
    // 0x1404ec: 0x3442ffff
    ctx->pc = 0x1404ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_1404f0:
    // 0x1404f0: 0x2c3b024
    ctx->pc = 0x1404f0u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_1404f4:
    // 0x1404f4: 0x821024
    ctx->pc = 0x1404f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1404f8:
    // 0x1404f8: 0x24030001
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1404fc:
    // 0x1404fc: 0x2103c
    ctx->pc = 0x1404fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_140500:
    // 0x140500: 0xae030000
    ctx->pc = 0x140500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_140504:
    // 0x140504: 0x2c2b025
    ctx->pc = 0x140504u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_140508:
    // 0x140508: 0x16103e
    ctx->pc = 0x140508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_14050c:
    // 0x14050c: 0x2803c
    ctx->pc = 0x14050cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_140510:
    // 0x140510: 0x10803f
    ctx->pc = 0x140510u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_140514:
    // 0x140514: 0x3c037ff0
    ctx->pc = 0x140514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_140518:
    // 0x140518: 0x2031024
    ctx->pc = 0x140518u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_14051c:
    // 0x14051c: 0x14430016
label_140520:
    if (ctx->pc == 0x140520u) {
        ctx->pc = 0x140520u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140524u;
        goto label_140524;
    }
    ctx->pc = 0x14051Cu;
    {
        const bool branch_taken_0x14051c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x140520u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14051c) {
            ctx->pc = 0x140578u;
            goto label_140578;
        }
    }
    ctx->pc = 0x140524u;
label_140524:
    // 0x140524: 0x8fa40010
    ctx->pc = 0x140524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_140528:
    // 0x140528: 0x2403270f
    ctx->pc = 0x140528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9999));
label_14052c:
    // 0x14052c: 0x2402ffff
    ctx->pc = 0x14052cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_140530:
    // 0x140530: 0x2133a
    ctx->pc = 0x140530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_140534:
    // 0x140534: 0x2c21024
    ctx->pc = 0x140534u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_140538:
    // 0x140538: 0x14400004
label_14053c:
    if (ctx->pc == 0x14053Cu) {
        ctx->pc = 0x14053Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x140540u;
        goto label_140540;
    }
    ctx->pc = 0x140538u;
    {
        const bool branch_taken_0x140538 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14053Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x140538) {
            ctx->pc = 0x14054Cu;
            goto label_14054c;
        }
    }
    ctx->pc = 0x140540u;
label_140540:
    // 0x140540: 0x3c02002b
    ctx->pc = 0x140540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_140544:
    // 0x140544: 0x10000003
label_140548:
    if (ctx->pc == 0x140548u) {
        ctx->pc = 0x140548u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 28352));
        ctx->pc = 0x14054Cu;
        goto label_14054c;
    }
    ctx->pc = 0x140544u;
    {
        const bool branch_taken_0x140544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140548u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 28352));
        if (branch_taken_0x140544) {
            ctx->pc = 0x140554u;
            goto label_140554;
        }
    }
    ctx->pc = 0x14054Cu;
label_14054c:
    // 0x14054c: 0x3c02002b
    ctx->pc = 0x14054cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_140550:
    // 0x140550: 0x24556ed0
    ctx->pc = 0x140550u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 28368));
label_140554:
    // 0x140554: 0x8fa20014
    ctx->pc = 0x140554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_140558:
    // 0x140558: 0x10400015
label_14055c:
    if (ctx->pc == 0x14055Cu) {
        ctx->pc = 0x14055Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x140560u;
        goto label_140560;
    }
    ctx->pc = 0x140558u;
    {
        const bool branch_taken_0x140558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14055Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 8));
        if (branch_taken_0x140558) {
            ctx->pc = 0x1405B0u;
            goto label_1405b0;
        }
    }
    ctx->pc = 0x140560u;
label_140560:
    // 0x140560: 0x82a20003
    ctx->pc = 0x140560u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_140564:
    // 0x140564: 0x26a30003
    ctx->pc = 0x140564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 3));
label_140568:
    // 0x140568: 0x82180b
    ctx->pc = 0x140568u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_14056c:
    // 0x14056c: 0x8fa40014
    ctx->pc = 0x14056cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_140570:
    // 0x140570: 0x1000000f
label_140574:
    if (ctx->pc == 0x140574u) {
        ctx->pc = 0x140574u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x140578u;
        goto label_140578;
    }
    ctx->pc = 0x140570u;
    {
        const bool branch_taken_0x140570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140574u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x140570) {
            ctx->pc = 0x1405B0u;
            goto label_1405b0;
        }
    }
    ctx->pc = 0x140578u;
label_140578:
    // 0x140578: 0xc052e02
label_14057c:
    if (ctx->pc == 0x14057Cu) {
        ctx->pc = 0x14057Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140580u;
        goto label_140580;
    }
    ctx->pc = 0x140578u;
    SET_GPR_U32(ctx, 31, 0x140580u);
    ctx->pc = 0x14057Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140580u; }
        else if (ctx->pc != 0x140580u) { ctx->pc = 0x140580u; }
    }
    if (ctx->pc != 0x140580u) { return; }
    ctx->pc = 0x140580u;
label_140580:
    // 0x140580: 0x1440000d
label_140584:
    if (ctx->pc == 0x140584u) {
        ctx->pc = 0x140584u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140588u;
        goto label_140588;
    }
    ctx->pc = 0x140580u;
    {
        const bool branch_taken_0x140580 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140584u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140580) {
            ctx->pc = 0x1405B8u;
            goto label_1405b8;
        }
    }
    ctx->pc = 0x140588u;
label_140588:
    // 0x140588: 0x8fa40010
    ctx->pc = 0x140588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14058c:
    // 0x14058c: 0x24020001
    ctx->pc = 0x14058cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_140590:
    // 0x140590: 0x3c03002b
    ctx->pc = 0x140590u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
label_140594:
    // 0x140594: 0xac820000
    ctx->pc = 0x140594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_140598:
    // 0x140598: 0x8fa20014
    ctx->pc = 0x140598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_14059c:
    // 0x14059c: 0x10400004
label_1405a0:
    if (ctx->pc == 0x1405A0u) {
        ctx->pc = 0x1405A0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 28376));
        ctx->pc = 0x1405A4u;
        goto label_1405a4;
    }
    ctx->pc = 0x14059Cu;
    {
        const bool branch_taken_0x14059c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1405A0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 28376));
        if (branch_taken_0x14059c) {
            ctx->pc = 0x1405B0u;
            goto label_1405b0;
        }
    }
    ctx->pc = 0x1405A4u;
label_1405a4:
    // 0x1405a4: 0x8fa30014
    ctx->pc = 0x1405a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1405a8:
    // 0x1405a8: 0x26a20001
    ctx->pc = 0x1405a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
label_1405ac:
    // 0x1405ac: 0xac620000
    ctx->pc = 0x1405acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1405b0:
    // 0x1405b0: 0x10000410
label_1405b4:
    if (ctx->pc == 0x1405B4u) {
        ctx->pc = 0x1405B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1405B8u;
        goto label_1405b8;
    }
    ctx->pc = 0x1405B0u;
    {
        const bool branch_taken_0x1405b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1405B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1405b0) {
            ctx->pc = 0x1415F4u;
            goto label_1415f4;
        }
    }
    ctx->pc = 0x1405B8u;
label_1405b8:
    // 0x1405b8: 0x2c0282d
    ctx->pc = 0x1405b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1405bc:
    // 0x1405bc: 0x3a0302d
    ctx->pc = 0x1405bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1405c0:
    // 0x1405c0: 0xc05108e
label_1405c4:
    if (ctx->pc == 0x1405C4u) {
        ctx->pc = 0x1405C4u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1405C8u;
        goto label_1405c8;
    }
    ctx->pc = 0x1405C0u;
    SET_GPR_U32(ctx, 31, 0x1405C8u);
    ctx->pc = 0x1405C4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x144238u;
    {
        const uint32_t __entryPc = ctx->pc;
        _d2b_0x144238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405C8u; }
        else if (ctx->pc != 0x1405C8u) { ctx->pc = 0x1405C8u; }
    }
    if (ctx->pc != 0x1405C8u) { return; }
    ctx->pc = 0x1405C8u;
label_1405c8:
    // 0x1405c8: 0x101d02
    ctx->pc = 0x1405c8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 20));
label_1405cc:
    // 0x1405cc: 0x307407ff
    ctx->pc = 0x1405ccu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 2047));
label_1405d0:
    // 0x1405d0: 0x12800015
label_1405d4:
    if (ctx->pc == 0x1405D4u) {
        ctx->pc = 0x1405D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x1405D8u;
        goto label_1405d8;
    }
    ctx->pc = 0x1405D0u;
    {
        const bool branch_taken_0x1405d0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1405D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x1405d0) {
            ctx->pc = 0x140628u;
            goto label_140628;
        }
    }
    ctx->pc = 0x1405D8u;
label_1405d8:
    // 0x1405d8: 0x2c0b82d
    ctx->pc = 0x1405d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1405dc:
    // 0x1405dc: 0x3c02000f
    ctx->pc = 0x1405dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
label_1405e0:
    // 0x1405e0: 0x17183f
    ctx->pc = 0x1405e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
label_1405e4:
    // 0x1405e4: 0x3442ffff
    ctx->pc = 0x1405e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_1405e8:
    // 0x1405e8: 0x621824
    ctx->pc = 0x1405e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1405ec:
    // 0x1405ec: 0x3c05ffff
    ctx->pc = 0x1405ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_1405f0:
    // 0x1405f0: 0x5283e
    ctx->pc = 0x1405f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_1405f4:
    // 0x1405f4: 0x3183c
    ctx->pc = 0x1405f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1405f8:
    // 0x1405f8: 0x2e5b824
    ctx->pc = 0x1405f8u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_1405fc:
    // 0x1405fc: 0x2e3b825
    ctx->pc = 0x1405fcu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_140600:
    // 0x140600: 0x3c043ff0
    ctx->pc = 0x140600u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16368 << 16));
label_140604:
    // 0x140604: 0x17103f
    ctx->pc = 0x140604u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
label_140608:
    // 0x140608: 0x2694fc01
    ctx->pc = 0x140608u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294966273));
label_14060c:
    // 0x14060c: 0x441025
    ctx->pc = 0x14060cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_140610:
    // 0x140610: 0x2e5b824
    ctx->pc = 0x140610u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_140614:
    // 0x140614: 0x2103c
    ctx->pc = 0x140614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_140618:
    // 0x140618: 0xafa00044
    ctx->pc = 0x140618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_14061c:
    // 0x14061c: 0x2e2b825
    ctx->pc = 0x14061cu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_140620:
    // 0x140620: 0x10000027
label_140624:
    if (ctx->pc == 0x140624u) {
        ctx->pc = 0x140624u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x140628u;
        goto label_140628;
    }
    ctx->pc = 0x140620u;
    {
        const bool branch_taken_0x140620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140624u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x140620) {
            ctx->pc = 0x1406C0u;
            goto label_1406c0;
        }
    }
    ctx->pc = 0x140628u;
label_140628:
    // 0x140628: 0x8fa20000
    ctx->pc = 0x140628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14062c:
    // 0x14062c: 0x8fb10004
    ctx->pc = 0x14062cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_140630:
    // 0x140630: 0x2222021
    ctx->pc = 0x140630u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_140634:
    // 0x140634: 0x24940432
    ctx->pc = 0x140634u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 1074));
label_140638:
    // 0x140638: 0x2a820021
    ctx->pc = 0x140638u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 33));
label_14063c:
    // 0x14063c: 0x14400009
label_140640:
    if (ctx->pc == 0x140640u) {
        ctx->pc = 0x140640u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->pc = 0x140644u;
        goto label_140644;
    }
    ctx->pc = 0x14063Cu;
    {
        const bool branch_taken_0x14063c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140640u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x14063c) {
            ctx->pc = 0x140664u;
            goto label_140664;
        }
    }
    ctx->pc = 0x140644u;
label_140644:
    // 0x140644: 0x24840412
    ctx->pc = 0x140644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1042));
label_140648:
    // 0x140648: 0x141823
    ctx->pc = 0x140648u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_14064c:
    // 0x14064c: 0x16103c
    ctx->pc = 0x14064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_140650:
    // 0x140650: 0x2103f
    ctx->pc = 0x140650u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_140654:
    // 0x140654: 0x701804
    ctx->pc = 0x140654u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_140658:
    // 0x140658: 0x821006
    ctx->pc = 0x140658u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_14065c:
    // 0x14065c: 0x10000004
label_140660:
    if (ctx->pc == 0x140660u) {
        ctx->pc = 0x140660u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x140664u;
        goto label_140664;
    }
    ctx->pc = 0x14065Cu;
    {
        const bool branch_taken_0x14065c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140660u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x14065c) {
            ctx->pc = 0x140670u;
            goto label_140670;
        }
    }
    ctx->pc = 0x140664u;
label_140664:
    // 0x140664: 0x16183c
    ctx->pc = 0x140664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
label_140668:
    // 0x140668: 0x3183f
    ctx->pc = 0x140668u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_14066c:
    // 0x14066c: 0x438004
    ctx->pc = 0x14066cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_140670:
    // 0x140670: 0xc052e16
label_140674:
    if (ctx->pc == 0x140674u) {
        ctx->pc = 0x140674u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140678u;
        goto label_140678;
    }
    ctx->pc = 0x140670u;
    SET_GPR_U32(ctx, 31, 0x140678u);
    ctx->pc = 0x140674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140678u; }
        else if (ctx->pc != 0x140678u) { ctx->pc = 0x140678u; }
    }
    if (ctx->pc != 0x140678u) { return; }
    ctx->pc = 0x140678u;
label_140678:
    // 0x140678: 0x6010006
label_14067c:
    if (ctx->pc == 0x14067Cu) {
        ctx->pc = 0x14067Cu;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140680u;
        goto label_140680;
    }
    ctx->pc = 0x140678u;
    {
        const bool branch_taken_0x140678 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14067Cu;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140678) {
            ctx->pc = 0x140694u;
            goto label_140694;
        }
    }
    ctx->pc = 0x140680u;
label_140680:
    // 0x140680: 0x340583e0
    ctx->pc = 0x140680u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
label_140684:
    // 0x140684: 0x52bfc
    ctx->pc = 0x140684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_140688:
    // 0x140688: 0xc052c88
label_14068c:
    if (ctx->pc == 0x14068Cu) {
        ctx->pc = 0x14068Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140690u;
        goto label_140690;
    }
    ctx->pc = 0x140688u;
    SET_GPR_U32(ctx, 31, 0x140690u);
    ctx->pc = 0x14068Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140690u; }
        else if (ctx->pc != 0x140690u) { ctx->pc = 0x140690u; }
    }
    if (ctx->pc != 0x140690u) { return; }
    ctx->pc = 0x140690u;
label_140690:
    // 0x140690: 0x40b82d
    ctx->pc = 0x140690u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140694:
    // 0x140694: 0x3c04ffff
    ctx->pc = 0x140694u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_140698:
    // 0x140698: 0x4203e
    ctx->pc = 0x140698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_14069c:
    // 0x14069c: 0x17183f
    ctx->pc = 0x14069cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
label_1406a0:
    // 0x1406a0: 0x3c02fe10
    ctx->pc = 0x1406a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65040 << 16));
label_1406a4:
    // 0x1406a4: 0x2e4b824
    ctx->pc = 0x1406a4u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_1406a8:
    // 0x1406a8: 0x621821
    ctx->pc = 0x1406a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1406ac:
    // 0x1406ac: 0x24040001
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1406b0:
    // 0x1406b0: 0x3183c
    ctx->pc = 0x1406b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1406b4:
    // 0x1406b4: 0xafa40044
    ctx->pc = 0x1406b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_1406b8:
    // 0x1406b8: 0x2694fbcd
    ctx->pc = 0x1406b8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294966221));
label_1406bc:
    // 0x1406bc: 0x2e3b825
    ctx->pc = 0x1406bcu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_1406c0:
    // 0x1406c0: 0x3405ffe0
    ctx->pc = 0x1406c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65504));
label_1406c4:
    // 0x1406c4: 0x52bbc
    ctx->pc = 0x1406c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1406c8:
    // 0x1406c8: 0xc052c9e
label_1406cc:
    if (ctx->pc == 0x1406CCu) {
        ctx->pc = 0x1406CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1406D0u;
        goto label_1406d0;
    }
    ctx->pc = 0x1406C8u;
    SET_GPR_U32(ctx, 31, 0x1406D0u);
    ctx->pc = 0x1406CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406D0u; }
        else if (ctx->pc != 0x1406D0u) { ctx->pc = 0x1406D0u; }
    }
    if (ctx->pc != 0x1406D0u) { return; }
    ctx->pc = 0x1406D0u;
label_1406d0:
    // 0x1406d0: 0x3c01002b
    ctx->pc = 0x1406d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
label_1406d4:
    // 0x1406d4: 0xdc256ee0
    ctx->pc = 0x1406d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28384)));
label_1406d8:
    // 0x1406d8: 0xc052cb8
label_1406dc:
    if (ctx->pc == 0x1406DCu) {
        ctx->pc = 0x1406DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1406E0u;
        goto label_1406e0;
    }
    ctx->pc = 0x1406D8u;
    SET_GPR_U32(ctx, 31, 0x1406E0u);
    ctx->pc = 0x1406DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406E0u; }
        else if (ctx->pc != 0x1406E0u) { ctx->pc = 0x1406E0u; }
    }
    if (ctx->pc != 0x1406E0u) { return; }
    ctx->pc = 0x1406E0u;
label_1406e0:
    // 0x1406e0: 0x3c01002b
    ctx->pc = 0x1406e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
label_1406e4:
    // 0x1406e4: 0xdc256ee8
    ctx->pc = 0x1406e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28392)));
label_1406e8:
    // 0x1406e8: 0xc052c88
label_1406ec:
    if (ctx->pc == 0x1406ECu) {
        ctx->pc = 0x1406ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1406F0u;
        goto label_1406f0;
    }
    ctx->pc = 0x1406E8u;
    SET_GPR_U32(ctx, 31, 0x1406F0u);
    ctx->pc = 0x1406ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406F0u; }
        else if (ctx->pc != 0x1406F0u) { ctx->pc = 0x1406F0u; }
    }
    if (ctx->pc != 0x1406F0u) { return; }
    ctx->pc = 0x1406F0u;
label_1406f0:
    // 0x1406f0: 0x40802d
    ctx->pc = 0x1406f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1406f4:
    // 0x1406f4: 0xc052e16
label_1406f8:
    if (ctx->pc == 0x1406F8u) {
        ctx->pc = 0x1406F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1406FCu;
        goto label_1406fc;
    }
    ctx->pc = 0x1406F4u;
    SET_GPR_U32(ctx, 31, 0x1406FCu);
    ctx->pc = 0x1406F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406FCu; }
        else if (ctx->pc != 0x1406FCu) { ctx->pc = 0x1406FCu; }
    }
    if (ctx->pc != 0x1406FCu) { return; }
    ctx->pc = 0x1406FCu;
label_1406fc:
    // 0x1406fc: 0x3c01002b
    ctx->pc = 0x1406fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
label_140700:
    // 0x140700: 0xdc256ef0
    ctx->pc = 0x140700u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28400)));
label_140704:
    // 0x140704: 0xc052cb8
label_140708:
    if (ctx->pc == 0x140708u) {
        ctx->pc = 0x140708u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14070Cu;
        goto label_14070c;
    }
    ctx->pc = 0x140704u;
    SET_GPR_U32(ctx, 31, 0x14070Cu);
    ctx->pc = 0x140708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14070Cu; }
        else if (ctx->pc != 0x14070Cu) { ctx->pc = 0x14070Cu; }
    }
    if (ctx->pc != 0x14070Cu) { return; }
    ctx->pc = 0x14070Cu;
label_14070c:
    // 0x14070c: 0x200202d
    ctx->pc = 0x14070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140710:
    // 0x140710: 0xc052c88
label_140714:
    if (ctx->pc == 0x140714u) {
        ctx->pc = 0x140714u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140718u;
        goto label_140718;
    }
    ctx->pc = 0x140710u;
    SET_GPR_U32(ctx, 31, 0x140718u);
    ctx->pc = 0x140714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140718u; }
        else if (ctx->pc != 0x140718u) { ctx->pc = 0x140718u; }
    }
    if (ctx->pc != 0x140718u) { return; }
    ctx->pc = 0x140718u;
label_140718:
    // 0x140718: 0x40902d
    ctx->pc = 0x140718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14071c:
    // 0x14071c: 0xc052e44
label_140720:
    if (ctx->pc == 0x140720u) {
        ctx->pc = 0x140720u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140724u;
        goto label_140724;
    }
    ctx->pc = 0x14071Cu;
    SET_GPR_U32(ctx, 31, 0x140724u);
    ctx->pc = 0x140720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140724u; }
        else if (ctx->pc != 0x140724u) { ctx->pc = 0x140724u; }
    }
    if (ctx->pc != 0x140724u) { return; }
    ctx->pc = 0x140724u;
label_140724:
    // 0x140724: 0x40982d
    ctx->pc = 0x140724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140728:
    // 0x140728: 0x240202d
    ctx->pc = 0x140728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14072c:
    // 0x14072c: 0xc052e02
label_140730:
    if (ctx->pc == 0x140730u) {
        ctx->pc = 0x140730u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140734u;
        goto label_140734;
    }
    ctx->pc = 0x14072Cu;
    SET_GPR_U32(ctx, 31, 0x140734u);
    ctx->pc = 0x140730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140734u; }
        else if (ctx->pc != 0x140734u) { ctx->pc = 0x140734u; }
    }
    if (ctx->pc != 0x140734u) { return; }
    ctx->pc = 0x140734u;
label_140734:
    // 0x140734: 0x4410009
label_140738:
    if (ctx->pc == 0x140738u) {
        ctx->pc = 0x140738u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14073Cu;
        goto label_14073c;
    }
    ctx->pc = 0x140734u;
    {
        const bool branch_taken_0x140734 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140738u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x140734) {
            ctx->pc = 0x14075Cu;
            goto label_14075c;
        }
    }
    ctx->pc = 0x14073Cu;
label_14073c:
    // 0x14073c: 0xc052e16
label_140740:
    if (ctx->pc == 0x140740u) {
        ctx->pc = 0x140740u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140744u;
        goto label_140744;
    }
    ctx->pc = 0x14073Cu;
    SET_GPR_U32(ctx, 31, 0x140744u);
    ctx->pc = 0x140740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140744u; }
        else if (ctx->pc != 0x140744u) { ctx->pc = 0x140744u; }
    }
    if (ctx->pc != 0x140744u) { return; }
    ctx->pc = 0x140744u;
label_140744:
    // 0x140744: 0x240202d
    ctx->pc = 0x140744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140748:
    // 0x140748: 0xc052e02
label_14074c:
    if (ctx->pc == 0x14074Cu) {
        ctx->pc = 0x14074Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140750u;
        goto label_140750;
    }
    ctx->pc = 0x140748u;
    SET_GPR_U32(ctx, 31, 0x140750u);
    ctx->pc = 0x14074Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140750u; }
        else if (ctx->pc != 0x140750u) { ctx->pc = 0x140750u; }
    }
    if (ctx->pc != 0x140750u) { return; }
    ctx->pc = 0x140750u;
label_140750:
    // 0x140750: 0x2663ffff
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294967295));
label_140754:
    // 0x140754: 0x62980b
    ctx->pc = 0x140754u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_140758:
    // 0x140758: 0x24020001
    ctx->pc = 0x140758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_14075c:
    // 0x14075c: 0xafa20030
    ctx->pc = 0x14075cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_140760:
    // 0x140760: 0x2e620017
    ctx->pc = 0x140760u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 23));
label_140764:
    // 0x140764: 0x1040000c
label_140768:
    if (ctx->pc == 0x140768u) {
        ctx->pc = 0x140768u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x14076Cu;
        goto label_14076c;
    }
    ctx->pc = 0x140764u;
    {
        const bool branch_taken_0x140764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140768u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x140764) {
            ctx->pc = 0x140798u;
            goto label_140798;
        }
    }
    ctx->pc = 0x14076Cu;
label_14076c:
    // 0x14076c: 0x1318c0
    ctx->pc = 0x14076cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
label_140770:
    // 0x140770: 0x24426f78
    ctx->pc = 0x140770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28536));
label_140774:
    // 0x140774: 0x2c0202d
    ctx->pc = 0x140774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140778:
    // 0x140778: 0x621821
    ctx->pc = 0x140778u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14077c:
    // 0x14077c: 0xafa00030
    ctx->pc = 0x14077cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_140780:
    // 0x140780: 0xc052e02
label_140784:
    if (ctx->pc == 0x140784u) {
        ctx->pc = 0x140784u;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x140788u;
        goto label_140788;
    }
    ctx->pc = 0x140780u;
    SET_GPR_U32(ctx, 31, 0x140788u);
    ctx->pc = 0x140784u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140788u; }
        else if (ctx->pc != 0x140788u) { ctx->pc = 0x140788u; }
    }
    if (ctx->pc != 0x140788u) { return; }
    ctx->pc = 0x140788u;
label_140788:
    // 0x140788: 0x2403ffff
    ctx->pc = 0x140788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_14078c:
    // 0x14078c: 0x2664ffff
    ctx->pc = 0x14078cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967295));
label_140790:
    // 0x140790: 0x62182a
    ctx->pc = 0x140790u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_140794:
    // 0x140794: 0x83980a
    ctx->pc = 0x140794u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
label_140798:
    // 0x140798: 0x2341023
    ctx->pc = 0x140798u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_14079c:
    // 0x14079c: 0x2450ffff
    ctx->pc = 0x14079cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1407a0:
    // 0x1407a0: 0x6020004
label_1407a4:
    if (ctx->pc == 0x1407A4u) {
        ctx->pc = 0x1407A4u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->pc = 0x1407A8u;
        goto label_1407a8;
    }
    ctx->pc = 0x1407A0u;
    {
        const bool branch_taken_0x1407a0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1407a0) {
            ctx->pc = 0x1407A4u;
            SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->pc = 0x1407B4u;
            goto label_1407b4;
        }
    }
    ctx->pc = 0x1407A8u;
label_1407a8:
    // 0x1407a8: 0xafb00038
    ctx->pc = 0x1407a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_1407ac:
    // 0x1407ac: 0x10000003
label_1407b0:
    if (ctx->pc == 0x1407B0u) {
        ctx->pc = 0x1407B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x1407B4u;
        goto label_1407b4;
    }
    ctx->pc = 0x1407ACu;
    {
        const bool branch_taken_0x1407ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1407B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x1407ac) {
            ctx->pc = 0x1407BCu;
            goto label_1407bc;
        }
    }
    ctx->pc = 0x1407B4u;
label_1407b4:
    // 0x1407b4: 0xafa00038
    ctx->pc = 0x1407b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1407b8:
    // 0x1407b8: 0xafb00018
    ctx->pc = 0x1407b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_1407bc:
    // 0x1407bc: 0x6600006
label_1407c0:
    if (ctx->pc == 0x1407C0u) {
        ctx->pc = 0x1407C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x1407C4u;
        goto label_1407c4;
    }
    ctx->pc = 0x1407BCu;
    {
        const bool branch_taken_0x1407bc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1407C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x1407bc) {
            ctx->pc = 0x1407D8u;
            goto label_1407d8;
        }
    }
    ctx->pc = 0x1407C4u;
label_1407c4:
    // 0x1407c4: 0xafa0001c
    ctx->pc = 0x1407c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_1407c8:
    // 0x1407c8: 0x731821
    ctx->pc = 0x1407c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1407cc:
    // 0x1407cc: 0xafb3003c
    ctx->pc = 0x1407ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
label_1407d0:
    // 0x1407d0: 0x10000007
label_1407d4:
    if (ctx->pc == 0x1407D4u) {
        ctx->pc = 0x1407D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x1407D8u;
        goto label_1407d8;
    }
    ctx->pc = 0x1407D0u;
    {
        const bool branch_taken_0x1407d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1407D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x1407d0) {
            ctx->pc = 0x1407F0u;
            goto label_1407f0;
        }
    }
    ctx->pc = 0x1407D8u;
label_1407d8:
    // 0x1407d8: 0x8fa40018
    ctx->pc = 0x1407d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1407dc:
    // 0x1407dc: 0x131023
    ctx->pc = 0x1407dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_1407e0:
    // 0x1407e0: 0xafa2001c
    ctx->pc = 0x1407e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1407e4:
    // 0x1407e4: 0x932023
    ctx->pc = 0x1407e4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1407e8:
    // 0x1407e8: 0xafa0003c
    ctx->pc = 0x1407e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_1407ec:
    // 0x1407ec: 0xafa40018
    ctx->pc = 0x1407ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1407f0:
    // 0x1407f0: 0x8fa40008
    ctx->pc = 0x1407f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1407f4:
    // 0x1407f4: 0x24120001
    ctx->pc = 0x1407f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_1407f8:
    // 0x1407f8: 0x2c83000a
    ctx->pc = 0x1407f8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 10));
label_1407fc:
    // 0x1407fc: 0x3200a
    ctx->pc = 0x1407fcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_140800:
    // 0x140800: 0x28820006
    ctx->pc = 0x140800u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6));
label_140804:
    // 0x140804: 0x14400004
label_140808:
    if (ctx->pc == 0x140808u) {
        ctx->pc = 0x140808u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x14080Cu;
        goto label_14080c;
    }
    ctx->pc = 0x140804u;
    {
        const bool branch_taken_0x140804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140808u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x140804) {
            ctx->pc = 0x140818u;
            goto label_140818;
        }
    }
    ctx->pc = 0x14080Cu;
label_14080c:
    // 0x14080c: 0x2484fffc
    ctx->pc = 0x14080cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
label_140810:
    // 0x140810: 0x902d
    ctx->pc = 0x140810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140814:
    // 0x140814: 0xafa40008
    ctx->pc = 0x140814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_140818:
    // 0x140818: 0x24020001
    ctx->pc = 0x140818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_14081c:
    // 0x14081c: 0x8fa30008
    ctx->pc = 0x14081cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_140820:
    // 0x140820: 0xafa20034
    ctx->pc = 0x140820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_140824:
    // 0x140824: 0x2c620006
    ctx->pc = 0x140824u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_140828:
    // 0x140828: 0x10400020
label_14082c:
    if (ctx->pc == 0x14082Cu) {
        ctx->pc = 0x14082Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x140830u;
        goto label_140830;
    }
    ctx->pc = 0x140828u;
    {
        const bool branch_taken_0x140828 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14082Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x140828) {
            ctx->pc = 0x1408ACu;
            goto label_1408ac;
        }
    }
    ctx->pc = 0x140830u;
label_140830:
    // 0x140830: 0x31880
    ctx->pc = 0x140830u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_140834:
    // 0x140834: 0x24426f00
    ctx->pc = 0x140834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28416));
label_140838:
    // 0x140838: 0x621821
    ctx->pc = 0x140838u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14083c:
    // 0x14083c: 0x8c640000
    ctx->pc = 0x14083cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_140840:
    // 0x140840: 0x800008
label_140844:
    if (ctx->pc == 0x140844u) {
        ctx->pc = 0x140848u;
        goto label_140848;
    }
    ctx->pc = 0x140840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            case 0x1407E0u: goto label_1407e0;
            case 0x1407E4u: goto label_1407e4;
            case 0x1407E8u: goto label_1407e8;
            case 0x1407ECu: goto label_1407ec;
            case 0x1407F0u: goto label_1407f0;
            case 0x1407F4u: goto label_1407f4;
            case 0x1407F8u: goto label_1407f8;
            case 0x1407FCu: goto label_1407fc;
            case 0x140800u: goto label_140800;
            case 0x140804u: goto label_140804;
            case 0x140808u: goto label_140808;
            case 0x14080Cu: goto label_14080c;
            case 0x140810u: goto label_140810;
            case 0x140814u: goto label_140814;
            case 0x140818u: goto label_140818;
            case 0x14081Cu: goto label_14081c;
            case 0x140820u: goto label_140820;
            case 0x140824u: goto label_140824;
            case 0x140828u: goto label_140828;
            case 0x14082Cu: goto label_14082c;
            case 0x140830u: goto label_140830;
            case 0x140834u: goto label_140834;
            case 0x140838u: goto label_140838;
            case 0x14083Cu: goto label_14083c;
            case 0x140840u: goto label_140840;
            case 0x140844u: goto label_140844;
            case 0x140848u: goto label_140848;
            case 0x14084Cu: goto label_14084c;
            case 0x140850u: goto label_140850;
            case 0x140854u: goto label_140854;
            case 0x140858u: goto label_140858;
            case 0x14085Cu: goto label_14085c;
            case 0x140860u: goto label_140860;
            case 0x140864u: goto label_140864;
            case 0x140868u: goto label_140868;
            case 0x14086Cu: goto label_14086c;
            case 0x140870u: goto label_140870;
            case 0x140874u: goto label_140874;
            case 0x140878u: goto label_140878;
            case 0x14087Cu: goto label_14087c;
            case 0x140880u: goto label_140880;
            case 0x140884u: goto label_140884;
            case 0x140888u: goto label_140888;
            case 0x14088Cu: goto label_14088c;
            case 0x140890u: goto label_140890;
            case 0x140894u: goto label_140894;
            case 0x140898u: goto label_140898;
            case 0x14089Cu: goto label_14089c;
            case 0x1408A0u: goto label_1408a0;
            case 0x1408A4u: goto label_1408a4;
            case 0x1408A8u: goto label_1408a8;
            case 0x1408ACu: goto label_1408ac;
            case 0x1408B0u: goto label_1408b0;
            case 0x1408B4u: goto label_1408b4;
            case 0x1408B8u: goto label_1408b8;
            case 0x1408BCu: goto label_1408bc;
            case 0x1408C0u: goto label_1408c0;
            case 0x1408C4u: goto label_1408c4;
            case 0x1408C8u: goto label_1408c8;
            case 0x1408CCu: goto label_1408cc;
            case 0x1408D0u: goto label_1408d0;
            case 0x1408D4u: goto label_1408d4;
            case 0x1408D8u: goto label_1408d8;
            case 0x1408DCu: goto label_1408dc;
            case 0x1408E0u: goto label_1408e0;
            case 0x1408E4u: goto label_1408e4;
            case 0x1408E8u: goto label_1408e8;
            case 0x1408ECu: goto label_1408ec;
            case 0x1408F0u: goto label_1408f0;
            case 0x1408F4u: goto label_1408f4;
            case 0x1408F8u: goto label_1408f8;
            case 0x1408FCu: goto label_1408fc;
            case 0x140900u: goto label_140900;
            case 0x140904u: goto label_140904;
            case 0x140908u: goto label_140908;
            case 0x14090Cu: goto label_14090c;
            case 0x140910u: goto label_140910;
            case 0x140914u: goto label_140914;
            case 0x140918u: goto label_140918;
            case 0x14091Cu: goto label_14091c;
            case 0x140920u: goto label_140920;
            case 0x140924u: goto label_140924;
            case 0x140928u: goto label_140928;
            case 0x14092Cu: goto label_14092c;
            case 0x140930u: goto label_140930;
            case 0x140934u: goto label_140934;
            case 0x140938u: goto label_140938;
            case 0x14093Cu: goto label_14093c;
            case 0x140940u: goto label_140940;
            case 0x140944u: goto label_140944;
            case 0x140948u: goto label_140948;
            case 0x14094Cu: goto label_14094c;
            case 0x140950u: goto label_140950;
            case 0x140954u: goto label_140954;
            case 0x140958u: goto label_140958;
            case 0x14095Cu: goto label_14095c;
            case 0x140960u: goto label_140960;
            case 0x140964u: goto label_140964;
            case 0x140968u: goto label_140968;
            case 0x14096Cu: goto label_14096c;
            case 0x140970u: goto label_140970;
            case 0x140974u: goto label_140974;
            case 0x140978u: goto label_140978;
            case 0x14097Cu: goto label_14097c;
            case 0x140980u: goto label_140980;
            case 0x140984u: goto label_140984;
            case 0x140988u: goto label_140988;
            case 0x14098Cu: goto label_14098c;
            case 0x140990u: goto label_140990;
            case 0x140994u: goto label_140994;
            case 0x140998u: goto label_140998;
            case 0x14099Cu: goto label_14099c;
            case 0x1409A0u: goto label_1409a0;
            case 0x1409A4u: goto label_1409a4;
            case 0x1409A8u: goto label_1409a8;
            case 0x1409ACu: goto label_1409ac;
            case 0x1409B0u: goto label_1409b0;
            case 0x1409B4u: goto label_1409b4;
            case 0x1409B8u: goto label_1409b8;
            case 0x1409BCu: goto label_1409bc;
            case 0x1409C0u: goto label_1409c0;
            case 0x1409C4u: goto label_1409c4;
            case 0x1409C8u: goto label_1409c8;
            case 0x1409CCu: goto label_1409cc;
            case 0x1409D0u: goto label_1409d0;
            case 0x1409D4u: goto label_1409d4;
            case 0x1409D8u: goto label_1409d8;
            case 0x1409DCu: goto label_1409dc;
            case 0x1409E0u: goto label_1409e0;
            case 0x1409E4u: goto label_1409e4;
            case 0x1409E8u: goto label_1409e8;
            case 0x1409ECu: goto label_1409ec;
            case 0x1409F0u: goto label_1409f0;
            case 0x1409F4u: goto label_1409f4;
            case 0x1409F8u: goto label_1409f8;
            case 0x1409FCu: goto label_1409fc;
            case 0x140A00u: goto label_140a00;
            case 0x140A04u: goto label_140a04;
            case 0x140A08u: goto label_140a08;
            case 0x140A0Cu: goto label_140a0c;
            case 0x140A10u: goto label_140a10;
            case 0x140A14u: goto label_140a14;
            case 0x140A18u: goto label_140a18;
            case 0x140A1Cu: goto label_140a1c;
            case 0x140A20u: goto label_140a20;
            case 0x140A24u: goto label_140a24;
            case 0x140A28u: goto label_140a28;
            case 0x140A2Cu: goto label_140a2c;
            case 0x140A30u: goto label_140a30;
            case 0x140A34u: goto label_140a34;
            case 0x140A38u: goto label_140a38;
            case 0x140A3Cu: goto label_140a3c;
            case 0x140A40u: goto label_140a40;
            case 0x140A44u: goto label_140a44;
            case 0x140A48u: goto label_140a48;
            case 0x140A4Cu: goto label_140a4c;
            case 0x140A50u: goto label_140a50;
            case 0x140A54u: goto label_140a54;
            case 0x140A58u: goto label_140a58;
            case 0x140A5Cu: goto label_140a5c;
            case 0x140A60u: goto label_140a60;
            case 0x140A64u: goto label_140a64;
            case 0x140A68u: goto label_140a68;
            case 0x140A6Cu: goto label_140a6c;
            case 0x140A70u: goto label_140a70;
            case 0x140A74u: goto label_140a74;
            case 0x140A78u: goto label_140a78;
            case 0x140A7Cu: goto label_140a7c;
            case 0x140A80u: goto label_140a80;
            case 0x140A84u: goto label_140a84;
            case 0x140A88u: goto label_140a88;
            case 0x140A8Cu: goto label_140a8c;
            case 0x140A90u: goto label_140a90;
            case 0x140A94u: goto label_140a94;
            case 0x140A98u: goto label_140a98;
            case 0x140A9Cu: goto label_140a9c;
            case 0x140AA0u: goto label_140aa0;
            case 0x140AA4u: goto label_140aa4;
            case 0x140AA8u: goto label_140aa8;
            case 0x140AACu: goto label_140aac;
            case 0x140AB0u: goto label_140ab0;
            case 0x140AB4u: goto label_140ab4;
            case 0x140AB8u: goto label_140ab8;
            case 0x140ABCu: goto label_140abc;
            case 0x140AC0u: goto label_140ac0;
            case 0x140AC4u: goto label_140ac4;
            case 0x140AC8u: goto label_140ac8;
            case 0x140ACCu: goto label_140acc;
            case 0x140AD0u: goto label_140ad0;
            case 0x140AD4u: goto label_140ad4;
            case 0x140AD8u: goto label_140ad8;
            case 0x140ADCu: goto label_140adc;
            case 0x140AE0u: goto label_140ae0;
            case 0x140AE4u: goto label_140ae4;
            case 0x140AE8u: goto label_140ae8;
            case 0x140AECu: goto label_140aec;
            case 0x140AF0u: goto label_140af0;
            case 0x140AF4u: goto label_140af4;
            case 0x140AF8u: goto label_140af8;
            case 0x140AFCu: goto label_140afc;
            case 0x140B00u: goto label_140b00;
            case 0x140B04u: goto label_140b04;
            case 0x140B08u: goto label_140b08;
            case 0x140B0Cu: goto label_140b0c;
            case 0x140B10u: goto label_140b10;
            case 0x140B14u: goto label_140b14;
            case 0x140B18u: goto label_140b18;
            case 0x140B1Cu: goto label_140b1c;
            case 0x140B20u: goto label_140b20;
            case 0x140B24u: goto label_140b24;
            case 0x140B28u: goto label_140b28;
            case 0x140B2Cu: goto label_140b2c;
            case 0x140B30u: goto label_140b30;
            case 0x140B34u: goto label_140b34;
            case 0x140B38u: goto label_140b38;
            case 0x140B3Cu: goto label_140b3c;
            case 0x140B40u: goto label_140b40;
            case 0x140B44u: goto label_140b44;
            case 0x140B48u: goto label_140b48;
            case 0x140B4Cu: goto label_140b4c;
            case 0x140B50u: goto label_140b50;
            case 0x140B54u: goto label_140b54;
            case 0x140B58u: goto label_140b58;
            case 0x140B5Cu: goto label_140b5c;
            case 0x140B60u: goto label_140b60;
            case 0x140B64u: goto label_140b64;
            case 0x140B68u: goto label_140b68;
            case 0x140B6Cu: goto label_140b6c;
            case 0x140B70u: goto label_140b70;
            case 0x140B74u: goto label_140b74;
            case 0x140B78u: goto label_140b78;
            case 0x140B7Cu: goto label_140b7c;
            case 0x140B80u: goto label_140b80;
            case 0x140B84u: goto label_140b84;
            case 0x140B88u: goto label_140b88;
            case 0x140B8Cu: goto label_140b8c;
            case 0x140B90u: goto label_140b90;
            case 0x140B94u: goto label_140b94;
            case 0x140B98u: goto label_140b98;
            case 0x140B9Cu: goto label_140b9c;
            case 0x140BA0u: goto label_140ba0;
            case 0x140BA4u: goto label_140ba4;
            case 0x140BA8u: goto label_140ba8;
            case 0x140BACu: goto label_140bac;
            case 0x140BB0u: goto label_140bb0;
            case 0x140BB4u: goto label_140bb4;
            case 0x140BB8u: goto label_140bb8;
            case 0x140BBCu: goto label_140bbc;
            case 0x140BC0u: goto label_140bc0;
            case 0x140BC4u: goto label_140bc4;
            case 0x140BC8u: goto label_140bc8;
            case 0x140BCCu: goto label_140bcc;
            case 0x140BD0u: goto label_140bd0;
            case 0x140BD4u: goto label_140bd4;
            case 0x140BD8u: goto label_140bd8;
            case 0x140BDCu: goto label_140bdc;
            case 0x140BE0u: goto label_140be0;
            case 0x140BE4u: goto label_140be4;
            case 0x140BE8u: goto label_140be8;
            case 0x140BECu: goto label_140bec;
            case 0x140BF0u: goto label_140bf0;
            case 0x140BF4u: goto label_140bf4;
            case 0x140BF8u: goto label_140bf8;
            case 0x140BFCu: goto label_140bfc;
            case 0x140C00u: goto label_140c00;
            case 0x140C04u: goto label_140c04;
            case 0x140C08u: goto label_140c08;
            case 0x140C0Cu: goto label_140c0c;
            case 0x140C10u: goto label_140c10;
            case 0x140C14u: goto label_140c14;
            case 0x140C18u: goto label_140c18;
            case 0x140C1Cu: goto label_140c1c;
            case 0x140C20u: goto label_140c20;
            case 0x140C24u: goto label_140c24;
            case 0x140C28u: goto label_140c28;
            case 0x140C2Cu: goto label_140c2c;
            case 0x140C30u: goto label_140c30;
            case 0x140C34u: goto label_140c34;
            case 0x140C38u: goto label_140c38;
            case 0x140C3Cu: goto label_140c3c;
            case 0x140C40u: goto label_140c40;
            case 0x140C44u: goto label_140c44;
            case 0x140C48u: goto label_140c48;
            case 0x140C4Cu: goto label_140c4c;
            case 0x140C50u: goto label_140c50;
            case 0x140C54u: goto label_140c54;
            case 0x140C58u: goto label_140c58;
            case 0x140C5Cu: goto label_140c5c;
            case 0x140C60u: goto label_140c60;
            case 0x140C64u: goto label_140c64;
            case 0x140C68u: goto label_140c68;
            case 0x140C6Cu: goto label_140c6c;
            case 0x140C70u: goto label_140c70;
            case 0x140C74u: goto label_140c74;
            case 0x140C78u: goto label_140c78;
            case 0x140C7Cu: goto label_140c7c;
            case 0x140C80u: goto label_140c80;
            case 0x140C84u: goto label_140c84;
            case 0x140C88u: goto label_140c88;
            case 0x140C8Cu: goto label_140c8c;
            case 0x140C90u: goto label_140c90;
            case 0x140C94u: goto label_140c94;
            case 0x140C98u: goto label_140c98;
            case 0x140C9Cu: goto label_140c9c;
            case 0x140CA0u: goto label_140ca0;
            case 0x140CA4u: goto label_140ca4;
            case 0x140CA8u: goto label_140ca8;
            case 0x140CACu: goto label_140cac;
            case 0x140CB0u: goto label_140cb0;
            case 0x140CB4u: goto label_140cb4;
            case 0x140CB8u: goto label_140cb8;
            case 0x140CBCu: goto label_140cbc;
            case 0x140CC0u: goto label_140cc0;
            case 0x140CC4u: goto label_140cc4;
            case 0x140CC8u: goto label_140cc8;
            case 0x140CCCu: goto label_140ccc;
            case 0x140CD0u: goto label_140cd0;
            case 0x140CD4u: goto label_140cd4;
            case 0x140CD8u: goto label_140cd8;
            case 0x140CDCu: goto label_140cdc;
            case 0x140CE0u: goto label_140ce0;
            case 0x140CE4u: goto label_140ce4;
            case 0x140CE8u: goto label_140ce8;
            case 0x140CECu: goto label_140cec;
            case 0x140CF0u: goto label_140cf0;
            case 0x140CF4u: goto label_140cf4;
            case 0x140CF8u: goto label_140cf8;
            case 0x140CFCu: goto label_140cfc;
            case 0x140D00u: goto label_140d00;
            case 0x140D04u: goto label_140d04;
            case 0x140D08u: goto label_140d08;
            case 0x140D0Cu: goto label_140d0c;
            case 0x140D10u: goto label_140d10;
            case 0x140D14u: goto label_140d14;
            case 0x140D18u: goto label_140d18;
            case 0x140D1Cu: goto label_140d1c;
            case 0x140D20u: goto label_140d20;
            case 0x140D24u: goto label_140d24;
            case 0x140D28u: goto label_140d28;
            case 0x140D2Cu: goto label_140d2c;
            case 0x140D30u: goto label_140d30;
            case 0x140D34u: goto label_140d34;
            case 0x140D38u: goto label_140d38;
            case 0x140D3Cu: goto label_140d3c;
            case 0x140D40u: goto label_140d40;
            case 0x140D44u: goto label_140d44;
            case 0x140D48u: goto label_140d48;
            case 0x140D4Cu: goto label_140d4c;
            case 0x140D50u: goto label_140d50;
            case 0x140D54u: goto label_140d54;
            case 0x140D58u: goto label_140d58;
            case 0x140D5Cu: goto label_140d5c;
            case 0x140D60u: goto label_140d60;
            case 0x140D64u: goto label_140d64;
            case 0x140D68u: goto label_140d68;
            case 0x140D6Cu: goto label_140d6c;
            case 0x140D70u: goto label_140d70;
            case 0x140D74u: goto label_140d74;
            case 0x140D78u: goto label_140d78;
            case 0x140D7Cu: goto label_140d7c;
            case 0x140D80u: goto label_140d80;
            case 0x140D84u: goto label_140d84;
            case 0x140D88u: goto label_140d88;
            case 0x140D8Cu: goto label_140d8c;
            case 0x140D90u: goto label_140d90;
            case 0x140D94u: goto label_140d94;
            case 0x140D98u: goto label_140d98;
            case 0x140D9Cu: goto label_140d9c;
            case 0x140DA0u: goto label_140da0;
            case 0x140DA4u: goto label_140da4;
            case 0x140DA8u: goto label_140da8;
            case 0x140DACu: goto label_140dac;
            case 0x140DB0u: goto label_140db0;
            case 0x140DB4u: goto label_140db4;
            case 0x140DB8u: goto label_140db8;
            case 0x140DBCu: goto label_140dbc;
            case 0x140DC0u: goto label_140dc0;
            case 0x140DC4u: goto label_140dc4;
            case 0x140DC8u: goto label_140dc8;
            case 0x140DCCu: goto label_140dcc;
            case 0x140DD0u: goto label_140dd0;
            case 0x140DD4u: goto label_140dd4;
            case 0x140DD8u: goto label_140dd8;
            case 0x140DDCu: goto label_140ddc;
            case 0x140DE0u: goto label_140de0;
            case 0x140DE4u: goto label_140de4;
            case 0x140DE8u: goto label_140de8;
            case 0x140DECu: goto label_140dec;
            case 0x140DF0u: goto label_140df0;
            case 0x140DF4u: goto label_140df4;
            case 0x140DF8u: goto label_140df8;
            case 0x140DFCu: goto label_140dfc;
            case 0x140E00u: goto label_140e00;
            case 0x140E04u: goto label_140e04;
            case 0x140E08u: goto label_140e08;
            case 0x140E0Cu: goto label_140e0c;
            case 0x140E10u: goto label_140e10;
            case 0x140E14u: goto label_140e14;
            case 0x140E18u: goto label_140e18;
            case 0x140E1Cu: goto label_140e1c;
            case 0x140E20u: goto label_140e20;
            case 0x140E24u: goto label_140e24;
            case 0x140E28u: goto label_140e28;
            case 0x140E2Cu: goto label_140e2c;
            case 0x140E30u: goto label_140e30;
            case 0x140E34u: goto label_140e34;
            case 0x140E38u: goto label_140e38;
            case 0x140E3Cu: goto label_140e3c;
            case 0x140E40u: goto label_140e40;
            case 0x140E44u: goto label_140e44;
            case 0x140E48u: goto label_140e48;
            case 0x140E4Cu: goto label_140e4c;
            case 0x140E50u: goto label_140e50;
            case 0x140E54u: goto label_140e54;
            case 0x140E58u: goto label_140e58;
            case 0x140E5Cu: goto label_140e5c;
            case 0x140E60u: goto label_140e60;
            case 0x140E64u: goto label_140e64;
            case 0x140E68u: goto label_140e68;
            case 0x140E6Cu: goto label_140e6c;
            case 0x140E70u: goto label_140e70;
            case 0x140E74u: goto label_140e74;
            case 0x140E78u: goto label_140e78;
            case 0x140E7Cu: goto label_140e7c;
            case 0x140E80u: goto label_140e80;
            case 0x140E84u: goto label_140e84;
            case 0x140E88u: goto label_140e88;
            case 0x140E8Cu: goto label_140e8c;
            case 0x140E90u: goto label_140e90;
            case 0x140E94u: goto label_140e94;
            case 0x140E98u: goto label_140e98;
            case 0x140E9Cu: goto label_140e9c;
            case 0x140EA0u: goto label_140ea0;
            case 0x140EA4u: goto label_140ea4;
            case 0x140EA8u: goto label_140ea8;
            case 0x140EACu: goto label_140eac;
            case 0x140EB0u: goto label_140eb0;
            case 0x140EB4u: goto label_140eb4;
            case 0x140EB8u: goto label_140eb8;
            case 0x140EBCu: goto label_140ebc;
            case 0x140EC0u: goto label_140ec0;
            case 0x140EC4u: goto label_140ec4;
            case 0x140EC8u: goto label_140ec8;
            case 0x140ECCu: goto label_140ecc;
            case 0x140ED0u: goto label_140ed0;
            case 0x140ED4u: goto label_140ed4;
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            case 0x141268u: goto label_141268;
            case 0x14126Cu: goto label_14126c;
            case 0x141270u: goto label_141270;
            case 0x141274u: goto label_141274;
            case 0x141278u: goto label_141278;
            case 0x14127Cu: goto label_14127c;
            case 0x141280u: goto label_141280;
            case 0x141284u: goto label_141284;
            case 0x141288u: goto label_141288;
            case 0x14128Cu: goto label_14128c;
            case 0x141290u: goto label_141290;
            case 0x141294u: goto label_141294;
            case 0x141298u: goto label_141298;
            case 0x14129Cu: goto label_14129c;
            case 0x1412A0u: goto label_1412a0;
            case 0x1412A4u: goto label_1412a4;
            case 0x1412A8u: goto label_1412a8;
            case 0x1412ACu: goto label_1412ac;
            case 0x1412B0u: goto label_1412b0;
            case 0x1412B4u: goto label_1412b4;
            case 0x1412B8u: goto label_1412b8;
            case 0x1412BCu: goto label_1412bc;
            case 0x1412C0u: goto label_1412c0;
            case 0x1412C4u: goto label_1412c4;
            case 0x1412C8u: goto label_1412c8;
            case 0x1412CCu: goto label_1412cc;
            case 0x1412D0u: goto label_1412d0;
            case 0x1412D4u: goto label_1412d4;
            case 0x1412D8u: goto label_1412d8;
            case 0x1412DCu: goto label_1412dc;
            case 0x1412E0u: goto label_1412e0;
            case 0x1412E4u: goto label_1412e4;
            case 0x1412E8u: goto label_1412e8;
            case 0x1412ECu: goto label_1412ec;
            case 0x1412F0u: goto label_1412f0;
            case 0x1412F4u: goto label_1412f4;
            case 0x1412F8u: goto label_1412f8;
            case 0x1412FCu: goto label_1412fc;
            case 0x141300u: goto label_141300;
            case 0x141304u: goto label_141304;
            case 0x141308u: goto label_141308;
            case 0x14130Cu: goto label_14130c;
            case 0x141310u: goto label_141310;
            case 0x141314u: goto label_141314;
            case 0x141318u: goto label_141318;
            case 0x14131Cu: goto label_14131c;
            case 0x141320u: goto label_141320;
            case 0x141324u: goto label_141324;
            case 0x141328u: goto label_141328;
            case 0x14132Cu: goto label_14132c;
            case 0x141330u: goto label_141330;
            case 0x141334u: goto label_141334;
            case 0x141338u: goto label_141338;
            case 0x14133Cu: goto label_14133c;
            case 0x141340u: goto label_141340;
            case 0x141344u: goto label_141344;
            case 0x141348u: goto label_141348;
            case 0x14134Cu: goto label_14134c;
            case 0x141350u: goto label_141350;
            case 0x141354u: goto label_141354;
            case 0x141358u: goto label_141358;
            case 0x14135Cu: goto label_14135c;
            case 0x141360u: goto label_141360;
            case 0x141364u: goto label_141364;
            case 0x141368u: goto label_141368;
            case 0x14136Cu: goto label_14136c;
            case 0x141370u: goto label_141370;
            case 0x141374u: goto label_141374;
            case 0x141378u: goto label_141378;
            case 0x14137Cu: goto label_14137c;
            case 0x141380u: goto label_141380;
            case 0x141384u: goto label_141384;
            case 0x141388u: goto label_141388;
            case 0x14138Cu: goto label_14138c;
            case 0x141390u: goto label_141390;
            case 0x141394u: goto label_141394;
            case 0x141398u: goto label_141398;
            case 0x14139Cu: goto label_14139c;
            case 0x1413A0u: goto label_1413a0;
            case 0x1413A4u: goto label_1413a4;
            case 0x1413A8u: goto label_1413a8;
            case 0x1413ACu: goto label_1413ac;
            case 0x1413B0u: goto label_1413b0;
            case 0x1413B4u: goto label_1413b4;
            case 0x1413B8u: goto label_1413b8;
            case 0x1413BCu: goto label_1413bc;
            case 0x1413C0u: goto label_1413c0;
            case 0x1413C4u: goto label_1413c4;
            case 0x1413C8u: goto label_1413c8;
            case 0x1413CCu: goto label_1413cc;
            case 0x1413D0u: goto label_1413d0;
            case 0x1413D4u: goto label_1413d4;
            case 0x1413D8u: goto label_1413d8;
            case 0x1413DCu: goto label_1413dc;
            case 0x1413E0u: goto label_1413e0;
            case 0x1413E4u: goto label_1413e4;
            case 0x1413E8u: goto label_1413e8;
            case 0x1413ECu: goto label_1413ec;
            case 0x1413F0u: goto label_1413f0;
            case 0x1413F4u: goto label_1413f4;
            case 0x1413F8u: goto label_1413f8;
            case 0x1413FCu: goto label_1413fc;
            case 0x141400u: goto label_141400;
            case 0x141404u: goto label_141404;
            case 0x141408u: goto label_141408;
            case 0x14140Cu: goto label_14140c;
            case 0x141410u: goto label_141410;
            case 0x141414u: goto label_141414;
            case 0x141418u: goto label_141418;
            case 0x14141Cu: goto label_14141c;
            case 0x141420u: goto label_141420;
            case 0x141424u: goto label_141424;
            case 0x141428u: goto label_141428;
            case 0x14142Cu: goto label_14142c;
            case 0x141430u: goto label_141430;
            case 0x141434u: goto label_141434;
            case 0x141438u: goto label_141438;
            case 0x14143Cu: goto label_14143c;
            case 0x141440u: goto label_141440;
            case 0x141444u: goto label_141444;
            case 0x141448u: goto label_141448;
            case 0x14144Cu: goto label_14144c;
            case 0x141450u: goto label_141450;
            case 0x141454u: goto label_141454;
            case 0x141458u: goto label_141458;
            case 0x14145Cu: goto label_14145c;
            case 0x141460u: goto label_141460;
            case 0x141464u: goto label_141464;
            case 0x141468u: goto label_141468;
            case 0x14146Cu: goto label_14146c;
            case 0x141470u: goto label_141470;
            case 0x141474u: goto label_141474;
            case 0x141478u: goto label_141478;
            case 0x14147Cu: goto label_14147c;
            case 0x141480u: goto label_141480;
            case 0x141484u: goto label_141484;
            case 0x141488u: goto label_141488;
            case 0x14148Cu: goto label_14148c;
            case 0x141490u: goto label_141490;
            case 0x141494u: goto label_141494;
            case 0x141498u: goto label_141498;
            case 0x14149Cu: goto label_14149c;
            case 0x1414A0u: goto label_1414a0;
            case 0x1414A4u: goto label_1414a4;
            case 0x1414A8u: goto label_1414a8;
            case 0x1414ACu: goto label_1414ac;
            case 0x1414B0u: goto label_1414b0;
            case 0x1414B4u: goto label_1414b4;
            case 0x1414B8u: goto label_1414b8;
            case 0x1414BCu: goto label_1414bc;
            case 0x1414C0u: goto label_1414c0;
            case 0x1414C4u: goto label_1414c4;
            case 0x1414C8u: goto label_1414c8;
            case 0x1414CCu: goto label_1414cc;
            case 0x1414D0u: goto label_1414d0;
            case 0x1414D4u: goto label_1414d4;
            case 0x1414D8u: goto label_1414d8;
            case 0x1414DCu: goto label_1414dc;
            case 0x1414E0u: goto label_1414e0;
            case 0x1414E4u: goto label_1414e4;
            case 0x1414E8u: goto label_1414e8;
            case 0x1414ECu: goto label_1414ec;
            case 0x1414F0u: goto label_1414f0;
            case 0x1414F4u: goto label_1414f4;
            case 0x1414F8u: goto label_1414f8;
            case 0x1414FCu: goto label_1414fc;
            case 0x141500u: goto label_141500;
            case 0x141504u: goto label_141504;
            case 0x141508u: goto label_141508;
            case 0x14150Cu: goto label_14150c;
            case 0x141510u: goto label_141510;
            case 0x141514u: goto label_141514;
            case 0x141518u: goto label_141518;
            case 0x14151Cu: goto label_14151c;
            case 0x141520u: goto label_141520;
            case 0x141524u: goto label_141524;
            case 0x141528u: goto label_141528;
            case 0x14152Cu: goto label_14152c;
            case 0x141530u: goto label_141530;
            case 0x141534u: goto label_141534;
            case 0x141538u: goto label_141538;
            case 0x14153Cu: goto label_14153c;
            case 0x141540u: goto label_141540;
            case 0x141544u: goto label_141544;
            case 0x141548u: goto label_141548;
            case 0x14154Cu: goto label_14154c;
            case 0x141550u: goto label_141550;
            case 0x141554u: goto label_141554;
            case 0x141558u: goto label_141558;
            case 0x14155Cu: goto label_14155c;
            case 0x141560u: goto label_141560;
            case 0x141564u: goto label_141564;
            case 0x141568u: goto label_141568;
            case 0x14156Cu: goto label_14156c;
            case 0x141570u: goto label_141570;
            case 0x141574u: goto label_141574;
            case 0x141578u: goto label_141578;
            case 0x14157Cu: goto label_14157c;
            case 0x141580u: goto label_141580;
            case 0x141584u: goto label_141584;
            case 0x141588u: goto label_141588;
            case 0x14158Cu: goto label_14158c;
            case 0x141590u: goto label_141590;
            case 0x141594u: goto label_141594;
            case 0x141598u: goto label_141598;
            case 0x14159Cu: goto label_14159c;
            case 0x1415A0u: goto label_1415a0;
            case 0x1415A4u: goto label_1415a4;
            case 0x1415A8u: goto label_1415a8;
            case 0x1415ACu: goto label_1415ac;
            case 0x1415B0u: goto label_1415b0;
            case 0x1415B4u: goto label_1415b4;
            case 0x1415B8u: goto label_1415b8;
            case 0x1415BCu: goto label_1415bc;
            case 0x1415C0u: goto label_1415c0;
            case 0x1415C4u: goto label_1415c4;
            case 0x1415C8u: goto label_1415c8;
            case 0x1415CCu: goto label_1415cc;
            case 0x1415D0u: goto label_1415d0;
            case 0x1415D4u: goto label_1415d4;
            case 0x1415D8u: goto label_1415d8;
            case 0x1415DCu: goto label_1415dc;
            case 0x1415E0u: goto label_1415e0;
            case 0x1415E4u: goto label_1415e4;
            case 0x1415E8u: goto label_1415e8;
            case 0x1415ECu: goto label_1415ec;
            case 0x1415F0u: goto label_1415f0;
            case 0x1415F4u: goto label_1415f4;
            case 0x1415F8u: goto label_1415f8;
            case 0x1415FCu: goto label_1415fc;
            case 0x141600u: goto label_141600;
            case 0x141604u: goto label_141604;
            case 0x141608u: goto label_141608;
            case 0x14160Cu: goto label_14160c;
            case 0x141610u: goto label_141610;
            case 0x141614u: goto label_141614;
            case 0x141618u: goto label_141618;
            case 0x14161Cu: goto label_14161c;
            case 0x141620u: goto label_141620;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140848u;
label_140848:
    // 0x140848: 0x2404ffff
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_14084c:
    // 0x14084c: 0x2402ffff
    ctx->pc = 0x14084cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_140850:
    // 0x140850: 0xafa40028
    ctx->pc = 0x140850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_140854:
    // 0x140854: 0x24140012
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 18));
label_140858:
    // 0x140858: 0xafa20020
    ctx->pc = 0x140858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_14085c:
    // 0x14085c: 0x10000013
label_140860:
    if (ctx->pc == 0x140860u) {
        ctx->pc = 0x140860u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x140864u;
        goto label_140864;
    }
    ctx->pc = 0x14085Cu;
    {
        const bool branch_taken_0x14085c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140860u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x14085c) {
            ctx->pc = 0x1408ACu;
            goto label_1408ac;
        }
    }
    ctx->pc = 0x140864u;
label_140864:
    // 0x140864: 0xafa00034
    ctx->pc = 0x140864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_140868:
    // 0x140868: 0x8fa3000c
    ctx->pc = 0x140868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_14086c:
    // 0x14086c: 0x24140001
    ctx->pc = 0x14086cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_140870:
    // 0x140870: 0x3102a
    ctx->pc = 0x140870u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
label_140874:
    // 0x140874: 0x62a00b
    ctx->pc = 0x140874u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_140878:
    // 0x140878: 0xafb4000c
    ctx->pc = 0x140878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
label_14087c:
    // 0x14087c: 0xafb40028
    ctx->pc = 0x14087cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
label_140880:
    // 0x140880: 0x1000000a
label_140884:
    if (ctx->pc == 0x140884u) {
        ctx->pc = 0x140884u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->pc = 0x140888u;
        goto label_140888;
    }
    ctx->pc = 0x140880u;
    {
        const bool branch_taken_0x140880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140884u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        if (branch_taken_0x140880) {
            ctx->pc = 0x1408ACu;
            goto label_1408ac;
        }
    }
    ctx->pc = 0x140888u;
label_140888:
    // 0x140888: 0xafa00034
    ctx->pc = 0x140888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_14088c:
    // 0x14088c: 0x8fa4000c
    ctx->pc = 0x14088cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_140890:
    // 0x140890: 0x24030001
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_140894:
    // 0x140894: 0x931021
    ctx->pc = 0x140894u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_140898:
    // 0x140898: 0x24540001
    ctx->pc = 0x140898u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1));
label_14089c:
    // 0x14089c: 0xafa20028
    ctx->pc = 0x14089cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1408a0:
    // 0x1408a0: 0xafb40020
    ctx->pc = 0x1408a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
label_1408a4:
    // 0x1408a4: 0x14102a
    ctx->pc = 0x1408a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 20)));
label_1408a8:
    // 0x1408a8: 0x62a00a
    ctx->pc = 0x1408a8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_1408ac:
    // 0x1408ac: 0x24100004
    ctx->pc = 0x1408acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
label_1408b0:
    // 0x1408b0: 0x2e820018
    ctx->pc = 0x1408b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), 24));
label_1408b4:
    // 0x1408b4: 0x1440000e
label_1408b8:
    if (ctx->pc == 0x1408B8u) {
        ctx->pc = 0x1408B8u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x1408BCu;
        goto label_1408bc;
    }
    ctx->pc = 0x1408B4u;
    {
        const bool branch_taken_0x1408b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1408B8u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x1408b4) {
            ctx->pc = 0x1408F0u;
            goto label_1408f0;
        }
    }
    ctx->pc = 0x1408BCu;
label_1408bc:
    // 0x1408bc: 0x8fa20020
    ctx->pc = 0x1408bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1408c0:
    // 0x1408c0: 0x2c51000f
    ctx->pc = 0x1408c0u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 2), 15));
label_1408c4:
    // 0x1408c4: 0x0
    ctx->pc = 0x1408c4u;
    // NOP
label_1408c8:
    // 0x1408c8: 0x8fc30044
    ctx->pc = 0x1408c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_1408cc:
    // 0x1408cc: 0x108040
    ctx->pc = 0x1408ccu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
label_1408d0:
    // 0x1408d0: 0x26020014
    ctx->pc = 0x1408d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_1408d4:
    // 0x1408d4: 0x24630001
    ctx->pc = 0x1408d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1408d8:
    // 0x1408d8: 0x282102b
    ctx->pc = 0x1408d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1408dc:
    // 0x1408dc: 0xafc30044
    ctx->pc = 0x1408dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
label_1408e0:
    // 0x1408e0: 0x1040fff9
label_1408e4:
    if (ctx->pc == 0x1408E4u) {
        ctx->pc = 0x1408E8u;
        goto label_1408e8;
    }
    ctx->pc = 0x1408E0u;
    {
        const bool branch_taken_0x1408e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1408e0) {
            ctx->pc = 0x1408C8u;
            goto label_1408c8;
        }
    }
    ctx->pc = 0x1408E8u;
label_1408e8:
    // 0x1408e8: 0x10000004
label_1408ec:
    if (ctx->pc == 0x1408ECu) {
        ctx->pc = 0x1408ECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->pc = 0x1408F0u;
        goto label_1408f0;
    }
    ctx->pc = 0x1408E8u;
    {
        const bool branch_taken_0x1408e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1408ECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
        if (branch_taken_0x1408e8) {
            ctx->pc = 0x1408FCu;
            goto label_1408fc;
        }
    }
    ctx->pc = 0x1408F0u;
label_1408f0:
    // 0x1408f0: 0x8fa30020
    ctx->pc = 0x1408f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1408f4:
    // 0x1408f4: 0x2c71000f
    ctx->pc = 0x1408f4u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 3), 15));
label_1408f8:
    // 0x1408f8: 0x8fc50044
    ctx->pc = 0x1408f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_1408fc:
    // 0x1408fc: 0xc050d32
label_140900:
    if (ctx->pc == 0x140900u) {
        ctx->pc = 0x140900u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140904u;
        goto label_140904;
    }
    ctx->pc = 0x1408FCu;
    SET_GPR_U32(ctx, 31, 0x140904u);
    ctx->pc = 0x140900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140904u; }
        else if (ctx->pc != 0x140904u) { ctx->pc = 0x140904u; }
    }
    if (ctx->pc != 0x140904u) { return; }
    ctx->pc = 0x140904u;
label_140904:
    // 0x140904: 0xafa20058
    ctx->pc = 0x140904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_140908:
    // 0x140908: 0xafc20040
    ctx->pc = 0x140908u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_14090c:
    // 0x14090c: 0x12200102
label_140910:
    if (ctx->pc == 0x140910u) {
        ctx->pc = 0x140910u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x140914u;
        goto label_140914;
    }
    ctx->pc = 0x14090Cu;
    {
        const bool branch_taken_0x14090c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x140910u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x14090c) {
            ctx->pc = 0x140D18u;
            goto label_140d18;
        }
    }
    ctx->pc = 0x140914u;
label_140914:
    // 0x140914: 0x12400100
label_140918:
    if (ctx->pc == 0x140918u) {
        ctx->pc = 0x140918u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x14091Cu;
        goto label_14091c;
    }
    ctx->pc = 0x140914u;
    {
        const bool branch_taken_0x140914 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x140918u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x140914) {
            ctx->pc = 0x140D18u;
            goto label_140d18;
        }
    }
    ctx->pc = 0x14091Cu;
label_14091c:
    // 0x14091c: 0x2c0b82d
    ctx->pc = 0x14091cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140920:
    // 0x140920: 0xafb3002c
    ctx->pc = 0x140920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
label_140924:
    // 0x140924: 0x24140002
    ctx->pc = 0x140924u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_140928:
    // 0x140928: 0x1a600024
label_14092c:
    if (ctx->pc == 0x14092Cu) {
        ctx->pc = 0x14092Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->pc = 0x140930u;
        goto label_140930;
    }
    ctx->pc = 0x140928u;
    {
        const bool branch_taken_0x140928 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x14092Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        if (branch_taken_0x140928) {
            ctx->pc = 0x1409BCu;
            goto label_1409bc;
        }
    }
    ctx->pc = 0x140930u;
label_140930:
    // 0x140930: 0x3c02002b
    ctx->pc = 0x140930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_140934:
    // 0x140934: 0x3263000f
    ctx->pc = 0x140934u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 15));
label_140938:
    // 0x140938: 0x24426f78
    ctx->pc = 0x140938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28536));
label_14093c:
    // 0x14093c: 0x318c0
    ctx->pc = 0x14093cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_140940:
    // 0x140940: 0x621821
    ctx->pc = 0x140940u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140944:
    // 0x140944: 0x138103
    ctx->pc = 0x140944u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
label_140948:
    // 0x140948: 0x32020010
    ctx->pc = 0x140948u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
label_14094c:
    // 0x14094c: 0x10400008
label_140950:
    if (ctx->pc == 0x140950u) {
        ctx->pc = 0x140950u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x140954u;
        goto label_140954;
    }
    ctx->pc = 0x14094Cu;
    {
        const bool branch_taken_0x14094c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140950u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x14094c) {
            ctx->pc = 0x140970u;
            goto label_140970;
        }
    }
    ctx->pc = 0x140954u;
label_140954:
    // 0x140954: 0x3c02002b
    ctx->pc = 0x140954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_140958:
    // 0x140958: 0x2c0202d
    ctx->pc = 0x140958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14095c:
    // 0x14095c: 0xdc457060
    ctx->pc = 0x14095cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 28768)));
label_140960:
    // 0x140960: 0x3210000f
    ctx->pc = 0x140960u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 15));
label_140964:
    // 0x140964: 0xc052d62
label_140968:
    if (ctx->pc == 0x140968u) {
        ctx->pc = 0x140968u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x14096Cu;
        goto label_14096c;
    }
    ctx->pc = 0x140964u;
    SET_GPR_U32(ctx, 31, 0x14096Cu);
    ctx->pc = 0x140968u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14096Cu; }
        else if (ctx->pc != 0x14096Cu) { ctx->pc = 0x14096Cu; }
    }
    if (ctx->pc != 0x14096Cu) { return; }
    ctx->pc = 0x14096Cu;
label_14096c:
    // 0x14096c: 0x40b02d
    ctx->pc = 0x14096cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140970:
    // 0x140970: 0x1200000d
label_140974:
    if (ctx->pc == 0x140974u) {
        ctx->pc = 0x140974u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x140978u;
        goto label_140978;
    }
    ctx->pc = 0x140970u;
    {
        const bool branch_taken_0x140970 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x140974u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x140970) {
            ctx->pc = 0x1409A8u;
            goto label_1409a8;
        }
    }
    ctx->pc = 0x140978u;
label_140978:
    // 0x140978: 0x24517040
    ctx->pc = 0x140978u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 28736));
label_14097c:
    // 0x14097c: 0x0
    ctx->pc = 0x14097cu;
    // NOP
label_140980:
    // 0x140980: 0x32020001
    ctx->pc = 0x140980u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_140984:
    // 0x140984: 0x10400005
label_140988:
    if (ctx->pc == 0x140988u) {
        ctx->pc = 0x140988u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14098Cu;
        goto label_14098c;
    }
    ctx->pc = 0x140984u;
    {
        const bool branch_taken_0x140984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140988u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140984) {
            ctx->pc = 0x14099Cu;
            goto label_14099c;
        }
    }
    ctx->pc = 0x14098Cu;
label_14098c:
    // 0x14098c: 0xde250000
    ctx->pc = 0x14098cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_140990:
    // 0x140990: 0xc052cb8
label_140994:
    if (ctx->pc == 0x140994u) {
        ctx->pc = 0x140994u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x140998u;
        goto label_140998;
    }
    ctx->pc = 0x140990u;
    SET_GPR_U32(ctx, 31, 0x140998u);
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140998u; }
        else if (ctx->pc != 0x140998u) { ctx->pc = 0x140998u; }
    }
    if (ctx->pc != 0x140998u) { return; }
    ctx->pc = 0x140998u;
label_140998:
    // 0x140998: 0x40902d
    ctx->pc = 0x140998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14099c:
    // 0x14099c: 0x108043
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_1409a0:
    // 0x1409a0: 0x1600fff7
label_1409a4:
    if (ctx->pc == 0x1409A4u) {
        ctx->pc = 0x1409A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1409A8u;
        goto label_1409a8;
    }
    ctx->pc = 0x1409A0u;
    {
        const bool branch_taken_0x1409a0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1409A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x1409a0) {
            ctx->pc = 0x140980u;
            goto label_140980;
        }
    }
    ctx->pc = 0x1409A8u;
label_1409a8:
    // 0x1409a8: 0x2c0202d
    ctx->pc = 0x1409a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1409ac:
    // 0x1409ac: 0xc052d62
label_1409b0:
    if (ctx->pc == 0x1409B0u) {
        ctx->pc = 0x1409B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1409B4u;
        goto label_1409b4;
    }
    ctx->pc = 0x1409ACu;
    SET_GPR_U32(ctx, 31, 0x1409B4u);
    ctx->pc = 0x1409B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409B4u; }
        else if (ctx->pc != 0x1409B4u) { ctx->pc = 0x1409B4u; }
    }
    if (ctx->pc != 0x1409B4u) { return; }
    ctx->pc = 0x1409B4u;
label_1409b4:
    // 0x1409b4: 0x1000001a
label_1409b8:
    if (ctx->pc == 0x1409B8u) {
        ctx->pc = 0x1409B8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1409BCu;
        goto label_1409bc;
    }
    ctx->pc = 0x1409B4u;
    {
        const bool branch_taken_0x1409b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1409B8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1409b4) {
            ctx->pc = 0x140A20u;
            goto label_140a20;
        }
    }
    ctx->pc = 0x1409BCu;
label_1409bc:
    // 0x1409bc: 0x138823
    ctx->pc = 0x1409bcu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_1409c0:
    // 0x1409c0: 0x12200017
label_1409c4:
    if (ctx->pc == 0x1409C4u) {
        ctx->pc = 0x1409C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
        ctx->pc = 0x1409C8u;
        goto label_1409c8;
    }
    ctx->pc = 0x1409C0u;
    {
        const bool branch_taken_0x1409c0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1409C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
        if (branch_taken_0x1409c0) {
            ctx->pc = 0x140A20u;
            goto label_140a20;
        }
    }
    ctx->pc = 0x1409C8u;
label_1409c8:
    // 0x1409c8: 0x3222000f
    ctx->pc = 0x1409c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 15));
label_1409cc:
    // 0x1409cc: 0x24636f78
    ctx->pc = 0x1409ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28536));
label_1409d0:
    // 0x1409d0: 0x210c0
    ctx->pc = 0x1409d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_1409d4:
    // 0x1409d4: 0x431021
    ctx->pc = 0x1409d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1409d8:
    // 0x1409d8: 0x2c0282d
    ctx->pc = 0x1409d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1409dc:
    // 0x1409dc: 0xdc440000
    ctx->pc = 0x1409dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1409e0:
    // 0x1409e0: 0xc052cb8
label_1409e4:
    if (ctx->pc == 0x1409E4u) {
        ctx->pc = 0x1409E4u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->pc = 0x1409E8u;
        goto label_1409e8;
    }
    ctx->pc = 0x1409E0u;
    SET_GPR_U32(ctx, 31, 0x1409E8u);
    ctx->pc = 0x1409E4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409E8u; }
        else if (ctx->pc != 0x1409E8u) { ctx->pc = 0x1409E8u; }
    }
    if (ctx->pc != 0x1409E8u) { return; }
    ctx->pc = 0x1409E8u;
label_1409e8:
    // 0x1409e8: 0x1200000d
label_1409ec:
    if (ctx->pc == 0x1409ECu) {
        ctx->pc = 0x1409ECu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1409F0u;
        goto label_1409f0;
    }
    ctx->pc = 0x1409E8u;
    {
        const bool branch_taken_0x1409e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1409ECu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1409e8) {
            ctx->pc = 0x140A20u;
            goto label_140a20;
        }
    }
    ctx->pc = 0x1409F0u;
label_1409f0:
    // 0x1409f0: 0x3c02002b
    ctx->pc = 0x1409f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_1409f4:
    // 0x1409f4: 0x24517040
    ctx->pc = 0x1409f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 28736));
label_1409f8:
    // 0x1409f8: 0x32020001
    ctx->pc = 0x1409f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_1409fc:
    // 0x1409fc: 0x10400005
label_140a00:
    if (ctx->pc == 0x140A00u) {
        ctx->pc = 0x140A00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140A04u;
        goto label_140a04;
    }
    ctx->pc = 0x1409FCu;
    {
        const bool branch_taken_0x1409fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140A00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1409fc) {
            ctx->pc = 0x140A14u;
            goto label_140a14;
        }
    }
    ctx->pc = 0x140A04u;
label_140a04:
    // 0x140a04: 0xde240000
    ctx->pc = 0x140a04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_140a08:
    // 0x140a08: 0xc052cb8
label_140a0c:
    if (ctx->pc == 0x140A0Cu) {
        ctx->pc = 0x140A0Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x140A10u;
        goto label_140a10;
    }
    ctx->pc = 0x140A08u;
    SET_GPR_U32(ctx, 31, 0x140A10u);
    ctx->pc = 0x140A0Cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A10u; }
        else if (ctx->pc != 0x140A10u) { ctx->pc = 0x140A10u; }
    }
    if (ctx->pc != 0x140A10u) { return; }
    ctx->pc = 0x140A10u;
label_140a10:
    // 0x140a10: 0x40b02d
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140a14:
    // 0x140a14: 0x108043
    ctx->pc = 0x140a14u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_140a18:
    // 0x140a18: 0x1600fff7
label_140a1c:
    if (ctx->pc == 0x140A1Cu) {
        ctx->pc = 0x140A1Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x140A20u;
        goto label_140a20;
    }
    ctx->pc = 0x140A18u;
    {
        const bool branch_taken_0x140a18 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x140A1Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x140a18) {
            ctx->pc = 0x1409F8u;
            goto label_1409f8;
        }
    }
    ctx->pc = 0x140A20u;
label_140a20:
    // 0x140a20: 0x8fa20030
    ctx->pc = 0x140a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_140a24:
    // 0x140a24: 0x10400014
label_140a28:
    if (ctx->pc == 0x140A28u) {
        ctx->pc = 0x140A2Cu;
        goto label_140a2c;
    }
    ctx->pc = 0x140A24u;
    {
        const bool branch_taken_0x140a24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140a24) {
            ctx->pc = 0x140A78u;
            goto label_140a78;
        }
    }
    ctx->pc = 0x140A2Cu;
label_140a2c:
    // 0x140a2c: 0x3405ffc0
    ctx->pc = 0x140a2cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_140a30:
    // 0x140a30: 0x52bbc
    ctx->pc = 0x140a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_140a34:
    // 0x140a34: 0xc052e02
label_140a38:
    if (ctx->pc == 0x140A38u) {
        ctx->pc = 0x140A38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140A3Cu;
        goto label_140a3c;
    }
    ctx->pc = 0x140A34u;
    SET_GPR_U32(ctx, 31, 0x140A3Cu);
    ctx->pc = 0x140A38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A3Cu; }
        else if (ctx->pc != 0x140A3Cu) { ctx->pc = 0x140A3Cu; }
    }
    if (ctx->pc != 0x140A3Cu) { return; }
    ctx->pc = 0x140A3Cu;
label_140a3c:
    // 0x140a3c: 0x441000e
label_140a40:
    if (ctx->pc == 0x140A40u) {
        ctx->pc = 0x140A40u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x140A44u;
        goto label_140a44;
    }
    ctx->pc = 0x140A3Cu;
    {
        const bool branch_taken_0x140a3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140A40u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x140a3c) {
            ctx->pc = 0x140A78u;
            goto label_140a78;
        }
    }
    ctx->pc = 0x140A44u;
label_140a44:
    // 0x140a44: 0x1860000c
label_140a48:
    if (ctx->pc == 0x140A48u) {
        ctx->pc = 0x140A4Cu;
        goto label_140a4c;
    }
    ctx->pc = 0x140A44u;
    {
        const bool branch_taken_0x140a44 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x140a44) {
            ctx->pc = 0x140A78u;
            goto label_140a78;
        }
    }
    ctx->pc = 0x140A4Cu;
label_140a4c:
    // 0x140a4c: 0x8fa40028
    ctx->pc = 0x140a4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_140a50:
    // 0x140a50: 0x188000ac
label_140a54:
    if (ctx->pc == 0x140A54u) {
        ctx->pc = 0x140A54u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x140A58u;
        goto label_140a58;
    }
    ctx->pc = 0x140A50u;
    {
        const bool branch_taken_0x140a50 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x140A54u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x140a50) {
            ctx->pc = 0x140D04u;
            goto label_140d04;
        }
    }
    ctx->pc = 0x140A58u;
label_140a58:
    // 0x140a58: 0x2c0282d
    ctx->pc = 0x140a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140a5c:
    // 0x140a5c: 0x34048048
    ctx->pc = 0x140a5cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_140a60:
    // 0x140a60: 0x423fc
    ctx->pc = 0x140a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_140a64:
    // 0x140a64: 0x2673ffff
    ctx->pc = 0x140a64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_140a68:
    // 0x140a68: 0xafa20020
    ctx->pc = 0x140a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_140a6c:
    // 0x140a6c: 0xc052cb8
label_140a70:
    if (ctx->pc == 0x140A70u) {
        ctx->pc = 0x140A70u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x140A74u;
        goto label_140a74;
    }
    ctx->pc = 0x140A6Cu;
    SET_GPR_U32(ctx, 31, 0x140A74u);
    ctx->pc = 0x140A70u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A74u; }
        else if (ctx->pc != 0x140A74u) { ctx->pc = 0x140A74u; }
    }
    if (ctx->pc != 0x140A74u) { return; }
    ctx->pc = 0x140A74u;
label_140a74:
    // 0x140a74: 0x40b02d
    ctx->pc = 0x140a74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140a78:
    // 0x140a78: 0xc052e16
label_140a7c:
    if (ctx->pc == 0x140A7Cu) {
        ctx->pc = 0x140A7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140A80u;
        goto label_140a80;
    }
    ctx->pc = 0x140A78u;
    SET_GPR_U32(ctx, 31, 0x140A80u);
    ctx->pc = 0x140A7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A80u; }
        else if (ctx->pc != 0x140A80u) { ctx->pc = 0x140A80u; }
    }
    if (ctx->pc != 0x140A80u) { return; }
    ctx->pc = 0x140A80u;
label_140a80:
    // 0x140a80: 0x40202d
    ctx->pc = 0x140a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140a84:
    // 0x140a84: 0xc052cb8
label_140a88:
    if (ctx->pc == 0x140A88u) {
        ctx->pc = 0x140A88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140A8Cu;
        goto label_140a8c;
    }
    ctx->pc = 0x140A84u;
    SET_GPR_U32(ctx, 31, 0x140A8Cu);
    ctx->pc = 0x140A88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A8Cu; }
        else if (ctx->pc != 0x140A8Cu) { ctx->pc = 0x140A8Cu; }
    }
    if (ctx->pc != 0x140A8Cu) { return; }
    ctx->pc = 0x140A8Cu;
label_140a8c:
    // 0x140a8c: 0x34058038
    ctx->pc = 0x140a8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32824));
label_140a90:
    // 0x140a90: 0x52bfc
    ctx->pc = 0x140a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_140a94:
    // 0x140a94: 0xc052c88
label_140a98:
    if (ctx->pc == 0x140A98u) {
        ctx->pc = 0x140A98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140A9Cu;
        goto label_140a9c;
    }
    ctx->pc = 0x140A94u;
    SET_GPR_U32(ctx, 31, 0x140A9Cu);
    ctx->pc = 0x140A98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A9Cu; }
        else if (ctx->pc != 0x140A9Cu) { ctx->pc = 0x140A9Cu; }
    }
    if (ctx->pc != 0x140A9Cu) { return; }
    ctx->pc = 0x140A9Cu;
label_140a9c:
    // 0x140a9c: 0x40902d
    ctx->pc = 0x140a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140aa0:
    // 0x140aa0: 0x3c04ffff
    ctx->pc = 0x140aa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_140aa4:
    // 0x140aa4: 0x4203e
    ctx->pc = 0x140aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_140aa8:
    // 0x140aa8: 0x12183f
    ctx->pc = 0x140aa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
label_140aac:
    // 0x140aac: 0x3c02fcc0
    ctx->pc = 0x140aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64704 << 16));
label_140ab0:
    // 0x140ab0: 0x621821
    ctx->pc = 0x140ab0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140ab4:
    // 0x140ab4: 0x2449024
    ctx->pc = 0x140ab4u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_140ab8:
    // 0x140ab8: 0x3183c
    ctx->pc = 0x140ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_140abc:
    // 0x140abc: 0x2439025
    ctx->pc = 0x140abcu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_140ac0:
    // 0x140ac0: 0x8fa30020
    ctx->pc = 0x140ac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_140ac4:
    // 0x140ac4: 0x54600017
label_140ac8:
    if (ctx->pc == 0x140AC8u) {
        ctx->pc = 0x140AC8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x140ACCu;
        goto label_140acc;
    }
    ctx->pc = 0x140AC4u;
    {
        const bool branch_taken_0x140ac4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x140ac4) {
            ctx->pc = 0x140AC8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x140B24u;
            goto label_140b24;
        }
    }
    ctx->pc = 0x140ACCu;
label_140acc:
    // 0x140acc: 0x34058028
    ctx->pc = 0x140accu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32808));
label_140ad0:
    // 0x140ad0: 0x52bfc
    ctx->pc = 0x140ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_140ad4:
    // 0x140ad4: 0x2c0202d
    ctx->pc = 0x140ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140ad8:
    // 0x140ad8: 0xafa00050
    ctx->pc = 0x140ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_140adc:
    // 0x140adc: 0xc052c9e
label_140ae0:
    if (ctx->pc == 0x140AE0u) {
        ctx->pc = 0x140AE0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x140AE4u;
        goto label_140ae4;
    }
    ctx->pc = 0x140ADCu;
    SET_GPR_U32(ctx, 31, 0x140AE4u);
    ctx->pc = 0x140AE0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AE4u; }
        else if (ctx->pc != 0x140AE4u) { ctx->pc = 0x140AE4u; }
    }
    if (ctx->pc != 0x140AE4u) { return; }
    ctx->pc = 0x140AE4u;
label_140ae4:
    // 0x140ae4: 0x40802d
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140ae8:
    // 0x140ae8: 0x240282d
    ctx->pc = 0x140ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140aec:
    // 0x140aec: 0xc052e02
label_140af0:
    if (ctx->pc == 0x140AF0u) {
        ctx->pc = 0x140AF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140AF4u;
        goto label_140af4;
    }
    ctx->pc = 0x140AECu;
    SET_GPR_U32(ctx, 31, 0x140AF4u);
    ctx->pc = 0x140AF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AF4u; }
        else if (ctx->pc != 0x140AF4u) { ctx->pc = 0x140AF4u; }
    }
    if (ctx->pc != 0x140AF4u) { return; }
    ctx->pc = 0x140AF4u;
label_140af4:
    // 0x140af4: 0x1c4001ca
label_140af8:
    if (ctx->pc == 0x140AF8u) {
        ctx->pc = 0x140AF8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x140AFCu;
        goto label_140afc;
    }
    ctx->pc = 0x140AF4u;
    {
        const bool branch_taken_0x140af4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x140AF8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x140af4) {
            ctx->pc = 0x141220u;
            goto label_141220;
        }
    }
    ctx->pc = 0x140AFCu;
label_140afc:
    // 0x140afc: 0x240282d
    ctx->pc = 0x140afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140b00:
    // 0x140b00: 0xc052c9e
label_140b04:
    if (ctx->pc == 0x140B04u) {
        ctx->pc = 0x140B04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B08u;
        goto label_140b08;
    }
    ctx->pc = 0x140B00u;
    SET_GPR_U32(ctx, 31, 0x140B08u);
    ctx->pc = 0x140B04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B08u; }
        else if (ctx->pc != 0x140B08u) { ctx->pc = 0x140B08u; }
    }
    if (ctx->pc != 0x140B08u) { return; }
    ctx->pc = 0x140B08u;
label_140b08:
    // 0x140b08: 0x200202d
    ctx->pc = 0x140b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140b0c:
    // 0x140b0c: 0xc052e02
label_140b10:
    if (ctx->pc == 0x140B10u) {
        ctx->pc = 0x140B10u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B14u;
        goto label_140b14;
    }
    ctx->pc = 0x140B0Cu;
    SET_GPR_U32(ctx, 31, 0x140B14u);
    ctx->pc = 0x140B10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B14u; }
        else if (ctx->pc != 0x140B14u) { ctx->pc = 0x140B14u; }
    }
    if (ctx->pc != 0x140B14u) { return; }
    ctx->pc = 0x140B14u;
label_140b14:
    // 0x140b14: 0x44001be
label_140b18:
    if (ctx->pc == 0x140B18u) {
        ctx->pc = 0x140B18u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x140B1Cu;
        goto label_140b1c;
    }
    ctx->pc = 0x140B14u;
    {
        const bool branch_taken_0x140b14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140B18u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x140b14) {
            ctx->pc = 0x141210u;
            goto label_141210;
        }
    }
    ctx->pc = 0x140B1Cu;
label_140b1c:
    // 0x140b1c: 0x1000007b
label_140b20:
    if (ctx->pc == 0x140B20u) {
        ctx->pc = 0x140B20u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B24u;
        goto label_140b24;
    }
    ctx->pc = 0x140B1Cu;
    {
        const bool branch_taken_0x140b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140B20u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140b1c) {
            ctx->pc = 0x140D0Cu;
            goto label_140d0c;
        }
    }
    ctx->pc = 0x140B24u;
label_140b24:
    // 0x140b24: 0x1080003a
label_140b28:
    if (ctx->pc == 0x140B28u) {
        ctx->pc = 0x140B28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x140B2Cu;
        goto label_140b2c;
    }
    ctx->pc = 0x140B24u;
    {
        const bool branch_taken_0x140b24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x140B28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x140b24) {
            ctx->pc = 0x140C10u;
            goto label_140c10;
        }
    }
    ctx->pc = 0x140B2Cu;
label_140b2c:
    // 0x140b2c: 0x3c03002b
    ctx->pc = 0x140b2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
label_140b30:
    // 0x140b30: 0x24636f78
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28536));
label_140b34:
    // 0x140b34: 0xa02d
    ctx->pc = 0x140b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140b38:
    // 0x140b38: 0x2482ffff
    ctx->pc = 0x140b38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_140b3c:
    // 0x140b3c: 0x210c0
    ctx->pc = 0x140b3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_140b40:
    // 0x140b40: 0x3404ff80
    ctx->pc = 0x140b40u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_140b44:
    // 0x140b44: 0x423bc
    ctx->pc = 0x140b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_140b48:
    // 0x140b48: 0x431021
    ctx->pc = 0x140b48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140b4c:
    // 0x140b4c: 0xc052d62
label_140b50:
    if (ctx->pc == 0x140B50u) {
        ctx->pc = 0x140B50u;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x140B54u;
        goto label_140b54;
    }
    ctx->pc = 0x140B4Cu;
    SET_GPR_U32(ctx, 31, 0x140B54u);
    ctx->pc = 0x140B50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B54u; }
        else if (ctx->pc != 0x140B54u) { ctx->pc = 0x140B54u; }
    }
    if (ctx->pc != 0x140B54u) { return; }
    ctx->pc = 0x140B54u;
label_140b54:
    // 0x140b54: 0x240282d
    ctx->pc = 0x140b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140b58:
    // 0x140b58: 0xc052c9e
label_140b5c:
    if (ctx->pc == 0x140B5Cu) {
        ctx->pc = 0x140B5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B60u;
        goto label_140b60;
    }
    ctx->pc = 0x140B58u;
    SET_GPR_U32(ctx, 31, 0x140B60u);
    ctx->pc = 0x140B5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B60u; }
        else if (ctx->pc != 0x140B60u) { ctx->pc = 0x140B60u; }
    }
    if (ctx->pc != 0x140B60u) { return; }
    ctx->pc = 0x140B60u;
label_140b60:
    // 0x140b60: 0x1000000b
label_140b64:
    if (ctx->pc == 0x140B64u) {
        ctx->pc = 0x140B64u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B68u;
        goto label_140b68;
    }
    ctx->pc = 0x140B60u;
    {
        const bool branch_taken_0x140b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140B64u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140b60) {
            ctx->pc = 0x140B90u;
            goto label_140b90;
        }
    }
    ctx->pc = 0x140B68u;
label_140b68:
    // 0x140b68: 0x34048048
    ctx->pc = 0x140b68u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_140b6c:
    // 0x140b6c: 0x423fc
    ctx->pc = 0x140b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_140b70:
    // 0x140b70: 0xc052cb8
label_140b74:
    if (ctx->pc == 0x140B74u) {
        ctx->pc = 0x140B74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B78u;
        goto label_140b78;
    }
    ctx->pc = 0x140B70u;
    SET_GPR_U32(ctx, 31, 0x140B78u);
    ctx->pc = 0x140B74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B78u; }
        else if (ctx->pc != 0x140B78u) { ctx->pc = 0x140B78u; }
    }
    if (ctx->pc != 0x140B78u) { return; }
    ctx->pc = 0x140B78u;
label_140b78:
    // 0x140b78: 0x34048048
    ctx->pc = 0x140b78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_140b7c:
    // 0x140b7c: 0x423fc
    ctx->pc = 0x140b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_140b80:
    // 0x140b80: 0x40902d
    ctx->pc = 0x140b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140b84:
    // 0x140b84: 0xc052cb8
label_140b88:
    if (ctx->pc == 0x140B88u) {
        ctx->pc = 0x140B88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B8Cu;
        goto label_140b8c;
    }
    ctx->pc = 0x140B84u;
    SET_GPR_U32(ctx, 31, 0x140B8Cu);
    ctx->pc = 0x140B88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B8Cu; }
        else if (ctx->pc != 0x140B8Cu) { ctx->pc = 0x140B8Cu; }
    }
    if (ctx->pc != 0x140B8Cu) { return; }
    ctx->pc = 0x140B8Cu;
label_140b8c:
    // 0x140b8c: 0x40b02d
    ctx->pc = 0x140b8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140b90:
    // 0x140b90: 0xc052e44
label_140b94:
    if (ctx->pc == 0x140B94u) {
        ctx->pc = 0x140B94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B98u;
        goto label_140b98;
    }
    ctx->pc = 0x140B90u;
    SET_GPR_U32(ctx, 31, 0x140B98u);
    ctx->pc = 0x140B94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B98u; }
        else if (ctx->pc != 0x140B98u) { ctx->pc = 0x140B98u; }
    }
    if (ctx->pc != 0x140B98u) { return; }
    ctx->pc = 0x140B98u;
label_140b98:
    // 0x140b98: 0x40882d
    ctx->pc = 0x140b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140b9c:
    // 0x140b9c: 0xc052e16
label_140ba0:
    if (ctx->pc == 0x140BA0u) {
        ctx->pc = 0x140BA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140BA4u;
        goto label_140ba4;
    }
    ctx->pc = 0x140B9Cu;
    SET_GPR_U32(ctx, 31, 0x140BA4u);
    ctx->pc = 0x140BA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BA4u; }
        else if (ctx->pc != 0x140BA4u) { ctx->pc = 0x140BA4u; }
    }
    if (ctx->pc != 0x140BA4u) { return; }
    ctx->pc = 0x140BA4u;
label_140ba4:
    // 0x140ba4: 0x2c0202d
    ctx->pc = 0x140ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140ba8:
    // 0x140ba8: 0xc052c9e
label_140bac:
    if (ctx->pc == 0x140BACu) {
        ctx->pc = 0x140BACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140BB0u;
        goto label_140bb0;
    }
    ctx->pc = 0x140BA8u;
    SET_GPR_U32(ctx, 31, 0x140BB0u);
    ctx->pc = 0x140BACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BB0u; }
        else if (ctx->pc != 0x140BB0u) { ctx->pc = 0x140BB0u; }
    }
    if (ctx->pc != 0x140BB0u) { return; }
    ctx->pc = 0x140BB0u;
label_140bb0:
    // 0x140bb0: 0x40802d
    ctx->pc = 0x140bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140bb4:
    // 0x140bb4: 0x240282d
    ctx->pc = 0x140bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140bb8:
    // 0x140bb8: 0x26220030
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_140bbc:
    // 0x140bbc: 0x200202d
    ctx->pc = 0x140bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140bc0:
    // 0x140bc0: 0xa2a20000
    ctx->pc = 0x140bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_140bc4:
    // 0x140bc4: 0xc052e02
label_140bc8:
    if (ctx->pc == 0x140BC8u) {
        ctx->pc = 0x140BC8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x140BCCu;
        goto label_140bcc;
    }
    ctx->pc = 0x140BC4u;
    SET_GPR_U32(ctx, 31, 0x140BCCu);
    ctx->pc = 0x140BC8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BCCu; }
        else if (ctx->pc != 0x140BCCu) { ctx->pc = 0x140BCCu; }
    }
    if (ctx->pc != 0x140BCCu) { return; }
    ctx->pc = 0x140BCCu;
label_140bcc:
    // 0x140bcc: 0x442027f
label_140bd0:
    if (ctx->pc == 0x140BD0u) {
        ctx->pc = 0x140BD0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x140BD4u;
        goto label_140bd4;
    }
    ctx->pc = 0x140BCCu;
    {
        const bool branch_taken_0x140bcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x140bcc) {
            ctx->pc = 0x140BD0u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x140BD4u;
label_140bd4:
    // 0x140bd4: 0x3404ffc0
    ctx->pc = 0x140bd4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
label_140bd8:
    // 0x140bd8: 0x423bc
    ctx->pc = 0x140bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_140bdc:
    // 0x140bdc: 0xc052c9e
label_140be0:
    if (ctx->pc == 0x140BE0u) {
        ctx->pc = 0x140BE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140BE4u;
        goto label_140be4;
    }
    ctx->pc = 0x140BDCu;
    SET_GPR_U32(ctx, 31, 0x140BE4u);
    ctx->pc = 0x140BE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BE4u; }
        else if (ctx->pc != 0x140BE4u) { ctx->pc = 0x140BE4u; }
    }
    if (ctx->pc != 0x140BE4u) { return; }
    ctx->pc = 0x140BE4u;
label_140be4:
    // 0x140be4: 0x40202d
    ctx->pc = 0x140be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140be8:
    // 0x140be8: 0xc052e02
label_140bec:
    if (ctx->pc == 0x140BECu) {
        ctx->pc = 0x140BECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140BF0u;
        goto label_140bf0;
    }
    ctx->pc = 0x140BE8u;
    SET_GPR_U32(ctx, 31, 0x140BF0u);
    ctx->pc = 0x140BECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BF0u; }
        else if (ctx->pc != 0x140BF0u) { ctx->pc = 0x140BF0u; }
    }
    if (ctx->pc != 0x140BF0u) { return; }
    ctx->pc = 0x140BF0u;
label_140bf0:
    // 0x140bf0: 0x4400098
label_140bf4:
    if (ctx->pc == 0x140BF4u) {
        ctx->pc = 0x140BF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x140BF8u;
        goto label_140bf8;
    }
    ctx->pc = 0x140BF0u;
    {
        const bool branch_taken_0x140bf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140BF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x140bf0) {
            ctx->pc = 0x140E54u;
            goto label_140e54;
        }
    }
    ctx->pc = 0x140BF8u;
label_140bf8:
    // 0x140bf8: 0x26940001
    ctx->pc = 0x140bf8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_140bfc:
    // 0x140bfc: 0x283102a
    ctx->pc = 0x140bfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_140c00:
    // 0x140c00: 0x1440ffd9
label_140c04:
    if (ctx->pc == 0x140C04u) {
        ctx->pc = 0x140C08u;
        goto label_140c08;
    }
    ctx->pc = 0x140C00u;
    {
        const bool branch_taken_0x140c00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x140c00) {
            ctx->pc = 0x140B68u;
            goto label_140b68;
        }
    }
    ctx->pc = 0x140C08u;
label_140c08:
    // 0x140c08: 0x1000003f
label_140c0c:
    if (ctx->pc == 0x140C0Cu) {
        ctx->pc = 0x140C0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x140C10u;
        goto label_140c10;
    }
    ctx->pc = 0x140C08u;
    {
        const bool branch_taken_0x140c08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140C0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x140c08) {
            ctx->pc = 0x140D08u;
            goto label_140d08;
        }
    }
    ctx->pc = 0x140C10u;
label_140c10:
    // 0x140c10: 0x3c03002b
    ctx->pc = 0x140c10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
label_140c14:
    // 0x140c14: 0x24636f78
    ctx->pc = 0x140c14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28536));
label_140c18:
    // 0x140c18: 0x240282d
    ctx->pc = 0x140c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140c1c:
    // 0x140c1c: 0x2482ffff
    ctx->pc = 0x140c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_140c20:
    // 0x140c20: 0x24140001
    ctx->pc = 0x140c20u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_140c24:
    // 0x140c24: 0x210c0
    ctx->pc = 0x140c24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_140c28:
    // 0x140c28: 0x431021
    ctx->pc = 0x140c28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140c2c:
    // 0x140c2c: 0xc052cb8
label_140c30:
    if (ctx->pc == 0x140C30u) {
        ctx->pc = 0x140C30u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x140C34u;
        goto label_140c34;
    }
    ctx->pc = 0x140C2Cu;
    SET_GPR_U32(ctx, 31, 0x140C34u);
    ctx->pc = 0x140C30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C34u; }
        else if (ctx->pc != 0x140C34u) { ctx->pc = 0x140C34u; }
    }
    if (ctx->pc != 0x140C34u) { return; }
    ctx->pc = 0x140C34u;
label_140c34:
    // 0x140c34: 0x10000008
label_140c38:
    if (ctx->pc == 0x140C38u) {
        ctx->pc = 0x140C38u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C3Cu;
        goto label_140c3c;
    }
    ctx->pc = 0x140C34u;
    {
        const bool branch_taken_0x140c34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140C38u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140c34) {
            ctx->pc = 0x140C58u;
            goto label_140c58;
        }
    }
    ctx->pc = 0x140C3Cu;
label_140c3c:
    // 0x140c3c: 0x0
    ctx->pc = 0x140c3cu;
    // NOP
label_140c40:
    // 0x140c40: 0x34048048
    ctx->pc = 0x140c40u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_140c44:
    // 0x140c44: 0x423fc
    ctx->pc = 0x140c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_140c48:
    // 0x140c48: 0x200282d
    ctx->pc = 0x140c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140c4c:
    // 0x140c4c: 0xc052cb8
label_140c50:
    if (ctx->pc == 0x140C50u) {
        ctx->pc = 0x140C50u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x140C54u;
        goto label_140c54;
    }
    ctx->pc = 0x140C4Cu;
    SET_GPR_U32(ctx, 31, 0x140C54u);
    ctx->pc = 0x140C50u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C54u; }
        else if (ctx->pc != 0x140C54u) { ctx->pc = 0x140C54u; }
    }
    if (ctx->pc != 0x140C54u) { return; }
    ctx->pc = 0x140C54u;
label_140c54:
    // 0x140c54: 0x40b02d
    ctx->pc = 0x140c54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140c58:
    // 0x140c58: 0xc052e44
label_140c5c:
    if (ctx->pc == 0x140C5Cu) {
        ctx->pc = 0x140C5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C60u;
        goto label_140c60;
    }
    ctx->pc = 0x140C58u;
    SET_GPR_U32(ctx, 31, 0x140C60u);
    ctx->pc = 0x140C5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C60u; }
        else if (ctx->pc != 0x140C60u) { ctx->pc = 0x140C60u; }
    }
    if (ctx->pc != 0x140C60u) { return; }
    ctx->pc = 0x140C60u;
label_140c60:
    // 0x140c60: 0x40882d
    ctx->pc = 0x140c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140c64:
    // 0x140c64: 0xc052e16
label_140c68:
    if (ctx->pc == 0x140C68u) {
        ctx->pc = 0x140C68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C6Cu;
        goto label_140c6c;
    }
    ctx->pc = 0x140C64u;
    SET_GPR_U32(ctx, 31, 0x140C6Cu);
    ctx->pc = 0x140C68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C6Cu; }
        else if (ctx->pc != 0x140C6Cu) { ctx->pc = 0x140C6Cu; }
    }
    if (ctx->pc != 0x140C6Cu) { return; }
    ctx->pc = 0x140C6Cu;
label_140c6c:
    // 0x140c6c: 0x2c0202d
    ctx->pc = 0x140c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140c70:
    // 0x140c70: 0xc052c9e
label_140c74:
    if (ctx->pc == 0x140C74u) {
        ctx->pc = 0x140C74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140C78u;
        goto label_140c78;
    }
    ctx->pc = 0x140C70u;
    SET_GPR_U32(ctx, 31, 0x140C78u);
    ctx->pc = 0x140C74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C78u; }
        else if (ctx->pc != 0x140C78u) { ctx->pc = 0x140C78u; }
    }
    if (ctx->pc != 0x140C78u) { return; }
    ctx->pc = 0x140C78u;
label_140c78:
    // 0x140c78: 0x40802d
    ctx->pc = 0x140c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140c7c:
    // 0x140c7c: 0x26220030
    ctx->pc = 0x140c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_140c80:
    // 0x140c80: 0xa2a20000
    ctx->pc = 0x140c80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_140c84:
    // 0x140c84: 0x8fa20020
    ctx->pc = 0x140c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_140c88:
    // 0x140c88: 0x1682ffed
label_140c8c:
    if (ctx->pc == 0x140C8Cu) {
        ctx->pc = 0x140C8Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x140C90u;
        goto label_140c90;
    }
    ctx->pc = 0x140C88u;
    {
        const bool branch_taken_0x140c88 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x140C8Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x140c88) {
            ctx->pc = 0x140C40u;
            goto label_140c40;
        }
    }
    ctx->pc = 0x140C90u;
label_140c90:
    // 0x140c90: 0x3404ff80
    ctx->pc = 0x140c90u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_140c94:
    // 0x140c94: 0x423bc
    ctx->pc = 0x140c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_140c98:
    // 0x140c98: 0xc052c88
label_140c9c:
    if (ctx->pc == 0x140C9Cu) {
        ctx->pc = 0x140C9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140CA0u;
        goto label_140ca0;
    }
    ctx->pc = 0x140C98u;
    SET_GPR_U32(ctx, 31, 0x140CA0u);
    ctx->pc = 0x140C9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CA0u; }
        else if (ctx->pc != 0x140CA0u) { ctx->pc = 0x140CA0u; }
    }
    if (ctx->pc != 0x140CA0u) { return; }
    ctx->pc = 0x140CA0u;
label_140ca0:
    // 0x140ca0: 0x40282d
    ctx->pc = 0x140ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140ca4:
    // 0x140ca4: 0xc052e02
label_140ca8:
    if (ctx->pc == 0x140CA8u) {
        ctx->pc = 0x140CA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140CACu;
        goto label_140cac;
    }
    ctx->pc = 0x140CA4u;
    SET_GPR_U32(ctx, 31, 0x140CACu);
    ctx->pc = 0x140CA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CACu; }
        else if (ctx->pc != 0x140CACu) { ctx->pc = 0x140CACu; }
    }
    if (ctx->pc != 0x140CACu) { return; }
    ctx->pc = 0x140CACu;
label_140cac:
    // 0x140cac: 0x5c40006a
label_140cb0:
    if (ctx->pc == 0x140CB0u) {
        ctx->pc = 0x140CB0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x140CB4u;
        goto label_140cb4;
    }
    ctx->pc = 0x140CACu;
    {
        const bool branch_taken_0x140cac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x140cac) {
            ctx->pc = 0x140CB0u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x140E58u;
            goto label_140e58;
        }
    }
    ctx->pc = 0x140CB4u;
label_140cb4:
    // 0x140cb4: 0x3404ff80
    ctx->pc = 0x140cb4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_140cb8:
    // 0x140cb8: 0x423bc
    ctx->pc = 0x140cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_140cbc:
    // 0x140cbc: 0xc052c9e
label_140cc0:
    if (ctx->pc == 0x140CC0u) {
        ctx->pc = 0x140CC0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140CC4u;
        goto label_140cc4;
    }
    ctx->pc = 0x140CBCu;
    SET_GPR_U32(ctx, 31, 0x140CC4u);
    ctx->pc = 0x140CC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CC4u; }
        else if (ctx->pc != 0x140CC4u) { ctx->pc = 0x140CC4u; }
    }
    if (ctx->pc != 0x140CC4u) { return; }
    ctx->pc = 0x140CC4u;
label_140cc4:
    // 0x140cc4: 0x200202d
    ctx->pc = 0x140cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140cc8:
    // 0x140cc8: 0xc052e02
label_140ccc:
    if (ctx->pc == 0x140CCCu) {
        ctx->pc = 0x140CCCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140CD0u;
        goto label_140cd0;
    }
    ctx->pc = 0x140CC8u;
    SET_GPR_U32(ctx, 31, 0x140CD0u);
    ctx->pc = 0x140CCCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CD0u; }
        else if (ctx->pc != 0x140CD0u) { ctx->pc = 0x140CD0u; }
    }
    if (ctx->pc != 0x140CD0u) { return; }
    ctx->pc = 0x140CD0u;
label_140cd0:
    // 0x140cd0: 0x441000d
label_140cd4:
    if (ctx->pc == 0x140CD4u) {
        ctx->pc = 0x140CD4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x140CD8u;
        goto label_140cd8;
    }
    ctx->pc = 0x140CD0u;
    {
        const bool branch_taken_0x140cd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140CD4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x140cd0) {
            ctx->pc = 0x140D08u;
            goto label_140d08;
        }
    }
    ctx->pc = 0x140CD8u;
label_140cd8:
    // 0x140cd8: 0x26770001
    ctx->pc = 0x140cd8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
label_140cdc:
    // 0x140cdc: 0x0
    ctx->pc = 0x140cdcu;
    // NOP
label_140ce0:
    // 0x140ce0: 0x26b5ffff
    ctx->pc = 0x140ce0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_140ce4:
    // 0x140ce4: 0x24030030
    ctx->pc = 0x140ce4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_140ce8:
    // 0x140ce8: 0x82a20000
    ctx->pc = 0x140ce8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_140cec:
    // 0x140cec: 0x0
    ctx->pc = 0x140cecu;
    // NOP
label_140cf0:
    // 0x140cf0: 0x0
    ctx->pc = 0x140cf0u;
    // NOP
label_140cf4:
    // 0x140cf4: 0x1043fffa
label_140cf8:
    if (ctx->pc == 0x140CF8u) {
        ctx->pc = 0x140CFCu;
        goto label_140cfc;
    }
    ctx->pc = 0x140CF4u;
    {
        const bool branch_taken_0x140cf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x140cf4) {
            ctx->pc = 0x140CE0u;
            goto label_140ce0;
        }
    }
    ctx->pc = 0x140CFCu;
label_140cfc:
    // 0x140cfc: 0x10000233
label_140d00:
    if (ctx->pc == 0x140D00u) {
        ctx->pc = 0x140D00u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x140D04u;
        goto label_140d04;
    }
    ctx->pc = 0x140CFCu;
    {
        const bool branch_taken_0x140cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140D00u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x140cfc) {
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x140D04u;
label_140d04:
    // 0x140d04: 0x8fa40024
    ctx->pc = 0x140d04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_140d08:
    // 0x140d08: 0x2e0b02d
    ctx->pc = 0x140d08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_140d0c:
    // 0x140d0c: 0x8fb3002c
    ctx->pc = 0x140d0cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_140d10:
    // 0x140d10: 0xafa40020
    ctx->pc = 0x140d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_140d14:
    // 0x140d14: 0x8fb50058
    ctx->pc = 0x140d14u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_140d18:
    // 0x140d18: 0x8fa30000
    ctx->pc = 0x140d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_140d1c:
    // 0x140d1c: 0x460005e
label_140d20:
    if (ctx->pc == 0x140D20u) {
        ctx->pc = 0x140D20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 15));
        ctx->pc = 0x140D24u;
        goto label_140d24;
    }
    ctx->pc = 0x140D1Cu;
    {
        const bool branch_taken_0x140d1c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x140D20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 15));
        if (branch_taken_0x140d1c) {
            ctx->pc = 0x140E98u;
            goto label_140e98;
        }
    }
    ctx->pc = 0x140D24u;
label_140d24:
    // 0x140d24: 0x1040005c
label_140d28:
    if (ctx->pc == 0x140D28u) {
        ctx->pc = 0x140D28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x140D2Cu;
        goto label_140d2c;
    }
    ctx->pc = 0x140D24u;
    {
        const bool branch_taken_0x140d24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140D28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x140d24) {
            ctx->pc = 0x140E98u;
            goto label_140e98;
        }
    }
    ctx->pc = 0x140D2Cu;
label_140d2c:
    // 0x140d2c: 0x1318c0
    ctx->pc = 0x140d2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
label_140d30:
    // 0x140d30: 0x24426f78
    ctx->pc = 0x140d30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28536));
label_140d34:
    // 0x140d34: 0x621821
    ctx->pc = 0x140d34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_140d38:
    // 0x140d38: 0x8fa2000c
    ctx->pc = 0x140d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_140d3c:
    // 0x140d3c: 0x4410012
label_140d40:
    if (ctx->pc == 0x140D40u) {
        ctx->pc = 0x140D40u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x140D44u;
        goto label_140d44;
    }
    ctx->pc = 0x140D3Cu;
    {
        const bool branch_taken_0x140d3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x140D40u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x140d3c) {
            ctx->pc = 0x140D88u;
            goto label_140d88;
        }
    }
    ctx->pc = 0x140D44u;
label_140d44:
    // 0x140d44: 0x8fa30020
    ctx->pc = 0x140d44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_140d48:
    // 0x140d48: 0x1c600011
label_140d4c:
    if (ctx->pc == 0x140D4Cu) {
        ctx->pc = 0x140D4Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x140D50u;
        goto label_140d50;
    }
    ctx->pc = 0x140D48u;
    {
        const bool branch_taken_0x140d48 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x140D4Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x140d48) {
            ctx->pc = 0x140D90u;
            goto label_140d90;
        }
    }
    ctx->pc = 0x140D50u;
label_140d50:
    // 0x140d50: 0xafa00050
    ctx->pc = 0x140d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_140d54:
    // 0x140d54: 0x460012e
label_140d58:
    if (ctx->pc == 0x140D58u) {
        ctx->pc = 0x140D58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x140D5Cu;
        goto label_140d5c;
    }
    ctx->pc = 0x140D54u;
    {
        const bool branch_taken_0x140d54 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x140D58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x140d54) {
            ctx->pc = 0x141210u;
            goto label_141210;
        }
    }
    ctx->pc = 0x140D5Cu;
label_140d5c:
    // 0x140d5c: 0x34058028
    ctx->pc = 0x140d5cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32808));
label_140d60:
    // 0x140d60: 0x52bfc
    ctx->pc = 0x140d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_140d64:
    // 0x140d64: 0xc052cb8
label_140d68:
    if (ctx->pc == 0x140D68u) {
        ctx->pc = 0x140D68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140D6Cu;
        goto label_140d6c;
    }
    ctx->pc = 0x140D64u;
    SET_GPR_U32(ctx, 31, 0x140D6Cu);
    ctx->pc = 0x140D68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D6Cu; }
        else if (ctx->pc != 0x140D6Cu) { ctx->pc = 0x140D6Cu; }
    }
    if (ctx->pc != 0x140D6Cu) { return; }
    ctx->pc = 0x140D6Cu;
label_140d6c:
    // 0x140d6c: 0x2c0202d
    ctx->pc = 0x140d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140d70:
    // 0x140d70: 0xc052e02
label_140d74:
    if (ctx->pc == 0x140D74u) {
        ctx->pc = 0x140D74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140D78u;
        goto label_140d78;
    }
    ctx->pc = 0x140D70u;
    SET_GPR_U32(ctx, 31, 0x140D78u);
    ctx->pc = 0x140D74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D78u; }
        else if (ctx->pc != 0x140D78u) { ctx->pc = 0x140D78u; }
    }
    if (ctx->pc != 0x140D78u) { return; }
    ctx->pc = 0x140D78u;
label_140d78:
    // 0x140d78: 0x18400125
label_140d7c:
    if (ctx->pc == 0x140D7Cu) {
        ctx->pc = 0x140D7Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x140D80u;
        goto label_140d80;
    }
    ctx->pc = 0x140D78u;
    {
        const bool branch_taken_0x140d78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x140D7Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x140d78) {
            ctx->pc = 0x141210u;
            goto label_141210;
        }
    }
    ctx->pc = 0x140D80u;
label_140d80:
    // 0x140d80: 0x10000128
label_140d84:
    if (ctx->pc == 0x140D84u) {
        ctx->pc = 0x140D84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        ctx->pc = 0x140D88u;
        goto label_140d88;
    }
    ctx->pc = 0x140D80u;
    {
        const bool branch_taken_0x140d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140D84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x140d80) {
            ctx->pc = 0x141224u;
            goto label_141224;
        }
    }
    ctx->pc = 0x140D88u;
label_140d88:
    // 0x140d88: 0x24140001
    ctx->pc = 0x140d88u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_140d8c:
    // 0x140d8c: 0x0
    ctx->pc = 0x140d8cu;
    // NOP
label_140d90:
    // 0x140d90: 0x1000000b
label_140d94:
    if (ctx->pc == 0x140D94u) {
        ctx->pc = 0x140D94u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x140D98u;
        goto label_140d98;
    }
    ctx->pc = 0x140D90u;
    {
        const bool branch_taken_0x140d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140D94u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x140d90) {
            ctx->pc = 0x140DC0u;
            goto label_140dc0;
        }
    }
    ctx->pc = 0x140D98u;
label_140d98:
    // 0x140d98: 0x34048048
    ctx->pc = 0x140d98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_140d9c:
    // 0x140d9c: 0x423fc
    ctx->pc = 0x140d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_140da0:
    // 0x140da0: 0xc052cb8
label_140da4:
    if (ctx->pc == 0x140DA4u) {
        ctx->pc = 0x140DA8u;
        goto label_140da8;
    }
    ctx->pc = 0x140DA0u;
    SET_GPR_U32(ctx, 31, 0x140DA8u);
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DA8u; }
        else if (ctx->pc != 0x140DA8u) { ctx->pc = 0x140DA8u; }
    }
    if (ctx->pc != 0x140DA8u) { return; }
    ctx->pc = 0x140DA8u;
label_140da8:
    // 0x140da8: 0x282d
    ctx->pc = 0x140da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140dac:
    // 0x140dac: 0x40202d
    ctx->pc = 0x140dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140db0:
    // 0x140db0: 0xc052e02
label_140db4:
    if (ctx->pc == 0x140DB4u) {
        ctx->pc = 0x140DB4u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140DB8u;
        goto label_140db8;
    }
    ctx->pc = 0x140DB0u;
    SET_GPR_U32(ctx, 31, 0x140DB8u);
    ctx->pc = 0x140DB4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DB8u; }
        else if (ctx->pc != 0x140DB8u) { ctx->pc = 0x140DB8u; }
    }
    if (ctx->pc != 0x140DB8u) { return; }
    ctx->pc = 0x140DB8u;
label_140db8:
    // 0x140db8: 0x10400204
label_140dbc:
    if (ctx->pc == 0x140DBCu) {
        ctx->pc = 0x140DBCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x140DC0u;
        goto label_140dc0;
    }
    ctx->pc = 0x140DB8u;
    {
        const bool branch_taken_0x140db8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140DBCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x140db8) {
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x140DC0u;
label_140dc0:
    // 0x140dc0: 0x2c0202d
    ctx->pc = 0x140dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140dc4:
    // 0x140dc4: 0xc052d62
label_140dc8:
    if (ctx->pc == 0x140DC8u) {
        ctx->pc = 0x140DC8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140DCCu;
        goto label_140dcc;
    }
    ctx->pc = 0x140DC4u;
    SET_GPR_U32(ctx, 31, 0x140DCCu);
    ctx->pc = 0x140DC8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DCCu; }
        else if (ctx->pc != 0x140DCCu) { ctx->pc = 0x140DCCu; }
    }
    if (ctx->pc != 0x140DCCu) { return; }
    ctx->pc = 0x140DCCu;
label_140dcc:
    // 0x140dcc: 0xc052e44
label_140dd0:
    if (ctx->pc == 0x140DD0u) {
        ctx->pc = 0x140DD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140DD4u;
        goto label_140dd4;
    }
    ctx->pc = 0x140DCCu;
    SET_GPR_U32(ctx, 31, 0x140DD4u);
    ctx->pc = 0x140DD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DD4u; }
        else if (ctx->pc != 0x140DD4u) { ctx->pc = 0x140DD4u; }
    }
    if (ctx->pc != 0x140DD4u) { return; }
    ctx->pc = 0x140DD4u;
label_140dd4:
    // 0x140dd4: 0x40882d
    ctx->pc = 0x140dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140dd8:
    // 0x140dd8: 0xc052e16
label_140ddc:
    if (ctx->pc == 0x140DDCu) {
        ctx->pc = 0x140DDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140DE0u;
        goto label_140de0;
    }
    ctx->pc = 0x140DD8u;
    SET_GPR_U32(ctx, 31, 0x140DE0u);
    ctx->pc = 0x140DDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DE0u; }
        else if (ctx->pc != 0x140DE0u) { ctx->pc = 0x140DE0u; }
    }
    if (ctx->pc != 0x140DE0u) { return; }
    ctx->pc = 0x140DE0u;
label_140de0:
    // 0x140de0: 0x40202d
    ctx->pc = 0x140de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140de4:
    // 0x140de4: 0xc052cb8
label_140de8:
    if (ctx->pc == 0x140DE8u) {
        ctx->pc = 0x140DE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140DECu;
        goto label_140dec;
    }
    ctx->pc = 0x140DE4u;
    SET_GPR_U32(ctx, 31, 0x140DECu);
    ctx->pc = 0x140DE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DECu; }
        else if (ctx->pc != 0x140DECu) { ctx->pc = 0x140DECu; }
    }
    if (ctx->pc != 0x140DECu) { return; }
    ctx->pc = 0x140DECu;
label_140dec:
    // 0x140dec: 0x2c0202d
    ctx->pc = 0x140decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_140df0:
    // 0x140df0: 0xc052c9e
label_140df4:
    if (ctx->pc == 0x140DF4u) {
        ctx->pc = 0x140DF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140DF8u;
        goto label_140df8;
    }
    ctx->pc = 0x140DF0u;
    SET_GPR_U32(ctx, 31, 0x140DF8u);
    ctx->pc = 0x140DF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DF8u; }
        else if (ctx->pc != 0x140DF8u) { ctx->pc = 0x140DF8u; }
    }
    if (ctx->pc != 0x140DF8u) { return; }
    ctx->pc = 0x140DF8u;
label_140df8:
    // 0x140df8: 0x40282d
    ctx->pc = 0x140df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140dfc:
    // 0x140dfc: 0x26220030
    ctx->pc = 0x140dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_140e00:
    // 0x140e00: 0xa2a20000
    ctx->pc = 0x140e00u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_140e04:
    // 0x140e04: 0x8fa40020
    ctx->pc = 0x140e04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_140e08:
    // 0x140e08: 0x1684ffe3
label_140e0c:
    if (ctx->pc == 0x140E0Cu) {
        ctx->pc = 0x140E0Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x140E10u;
        goto label_140e10;
    }
    ctx->pc = 0x140E08u;
    {
        const bool branch_taken_0x140e08 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 4));
        ctx->pc = 0x140E0Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x140e08) {
            ctx->pc = 0x140D98u;
            goto label_140d98;
        }
    }
    ctx->pc = 0x140E10u;
label_140e10:
    // 0x140e10: 0xc052c88
label_140e14:
    if (ctx->pc == 0x140E14u) {
        ctx->pc = 0x140E14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140E18u;
        goto label_140e18;
    }
    ctx->pc = 0x140E10u;
    SET_GPR_U32(ctx, 31, 0x140E18u);
    ctx->pc = 0x140E14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E18u; }
        else if (ctx->pc != 0x140E18u) { ctx->pc = 0x140E18u; }
    }
    if (ctx->pc != 0x140E18u) { return; }
    ctx->pc = 0x140E18u;
label_140e18:
    // 0x140e18: 0x40802d
    ctx->pc = 0x140e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140e1c:
    // 0x140e1c: 0x240282d
    ctx->pc = 0x140e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_140e20:
    // 0x140e20: 0xc052e02
label_140e24:
    if (ctx->pc == 0x140E24u) {
        ctx->pc = 0x140E24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140E28u;
        goto label_140e28;
    }
    ctx->pc = 0x140E20u;
    SET_GPR_U32(ctx, 31, 0x140E28u);
    ctx->pc = 0x140E24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E28u; }
        else if (ctx->pc != 0x140E28u) { ctx->pc = 0x140E28u; }
    }
    if (ctx->pc != 0x140E28u) { return; }
    ctx->pc = 0x140E28u;
label_140e28:
    // 0x140e28: 0x1c40000c
label_140e2c:
    if (ctx->pc == 0x140E2Cu) {
        ctx->pc = 0x140E2Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x140E30u;
        goto label_140e30;
    }
    ctx->pc = 0x140E28u;
    {
        const bool branch_taken_0x140e28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x140E2Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x140e28) {
            ctx->pc = 0x140E5Cu;
            goto label_140e5c;
        }
    }
    ctx->pc = 0x140E30u;
label_140e30:
    // 0x140e30: 0x200202d
    ctx->pc = 0x140e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140e34:
    // 0x140e34: 0xc052e02
label_140e38:
    if (ctx->pc == 0x140E38u) {
        ctx->pc = 0x140E38u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140E3Cu;
        goto label_140e3c;
    }
    ctx->pc = 0x140E34u;
    SET_GPR_U32(ctx, 31, 0x140E3Cu);
    ctx->pc = 0x140E38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E3Cu; }
        else if (ctx->pc != 0x140E3Cu) { ctx->pc = 0x140E3Cu; }
    }
    if (ctx->pc != 0x140E3Cu) { return; }
    ctx->pc = 0x140E3Cu;
label_140e3c:
    // 0x140e3c: 0x144001e3
label_140e40:
    if (ctx->pc == 0x140E40u) {
        ctx->pc = 0x140E40u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x140E44u;
        goto label_140e44;
    }
    ctx->pc = 0x140E3Cu;
    {
        const bool branch_taken_0x140e3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140E40u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x140e3c) {
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x140E44u;
label_140e44:
    // 0x140e44: 0x104001e1
label_140e48:
    if (ctx->pc == 0x140E48u) {
        ctx->pc = 0x140E48u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x140E4Cu;
        goto label_140e4c;
    }
    ctx->pc = 0x140E44u;
    {
        const bool branch_taken_0x140e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140E48u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x140e44) {
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x140E4Cu;
label_140e4c:
    // 0x140e4c: 0x10000004
label_140e50:
    if (ctx->pc == 0x140E50u) {
        ctx->pc = 0x140E50u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x140E54u;
        goto label_140e54;
    }
    ctx->pc = 0x140E4Cu;
    {
        const bool branch_taken_0x140e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140E50u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x140e4c) {
            ctx->pc = 0x140E60u;
            goto label_140e60;
        }
    }
    ctx->pc = 0x140E54u;
label_140e54:
    // 0x140e54: 0x26770001
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
label_140e58:
    // 0x140e58: 0x24050039
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
label_140e5c:
    // 0x140e5c: 0x24030030
    ctx->pc = 0x140e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_140e60:
    // 0x140e60: 0x26b5ffff
    ctx->pc = 0x140e60u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_140e64:
    // 0x140e64: 0x82a20000
    ctx->pc = 0x140e64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_140e68:
    // 0x140e68: 0x14450007
label_140e6c:
    if (ctx->pc == 0x140E6Cu) {
        ctx->pc = 0x140E6Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x140E70u;
        goto label_140e70;
    }
    ctx->pc = 0x140E68u;
    {
        const bool branch_taken_0x140e68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x140E6Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x140e68) {
            ctx->pc = 0x140E88u;
            goto label_140e88;
        }
    }
    ctx->pc = 0x140E70u;
label_140e70:
    // 0x140e70: 0x8fa20058
    ctx->pc = 0x140e70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_140e74:
    // 0x140e74: 0x56a2fffb
label_140e78:
    if (ctx->pc == 0x140E78u) {
        ctx->pc = 0x140E78u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x140E7Cu;
        goto label_140e7c;
    }
    ctx->pc = 0x140E74u;
    {
        const bool branch_taken_0x140e74 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        if (branch_taken_0x140e74) {
            ctx->pc = 0x140E78u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x140E64u;
            goto label_140e64;
        }
    }
    ctx->pc = 0x140E7Cu;
label_140e7c:
    // 0x140e7c: 0xa0430000
    ctx->pc = 0x140e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_140e80:
    // 0x140e80: 0x60202d
    ctx->pc = 0x140e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_140e84:
    // 0x140e84: 0x26f70001
    ctx->pc = 0x140e84u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_140e88:
    // 0x140e88: 0x24820001
    ctx->pc = 0x140e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_140e8c:
    // 0x140e8c: 0xa2a20000
    ctx->pc = 0x140e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_140e90:
    // 0x140e90: 0x100001ce
label_140e94:
    if (ctx->pc == 0x140E94u) {
        ctx->pc = 0x140E94u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x140E98u;
        goto label_140e98;
    }
    ctx->pc = 0x140E90u;
    {
        const bool branch_taken_0x140e90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140E94u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x140e90) {
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x140E98u;
label_140e98:
    // 0x140e98: 0x8fa40034
    ctx->pc = 0x140e98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_140e9c:
    // 0x140e9c: 0x8fb10018
    ctx->pc = 0x140e9cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_140ea0:
    // 0x140ea0: 0x8fb2001c
    ctx->pc = 0x140ea0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_140ea4:
    // 0x140ea4: 0xafa0004c
    ctx->pc = 0x140ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_140ea8:
    // 0x140ea8: 0x1080002b
label_140eac:
    if (ctx->pc == 0x140EACu) {
        ctx->pc = 0x140EACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x140EB0u;
        goto label_140eb0;
    }
    ctx->pc = 0x140EA8u;
    {
        const bool branch_taken_0x140ea8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x140EACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        if (branch_taken_0x140ea8) {
            ctx->pc = 0x140F58u;
            goto label_140f58;
        }
    }
    ctx->pc = 0x140EB0u;
label_140eb0:
    // 0x140eb0: 0x8fa20008
    ctx->pc = 0x140eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_140eb4:
    // 0x140eb4: 0x28570002
    ctx->pc = 0x140eb4u;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 2), 2));
label_140eb8:
    // 0x140eb8: 0x12e00007
label_140ebc:
    if (ctx->pc == 0x140EBCu) {
        ctx->pc = 0x140EBCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x140EC0u;
        goto label_140ec0;
    }
    ctx->pc = 0x140EB8u;
    {
        const bool branch_taken_0x140eb8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x140EBCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x140eb8) {
            ctx->pc = 0x140ED8u;
            goto label_140ed8;
        }
    }
    ctx->pc = 0x140EC0u;
label_140ec0:
    // 0x140ec0: 0x1480001a
label_140ec4:
    if (ctx->pc == 0x140EC4u) {
        ctx->pc = 0x140EC4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1075));
        ctx->pc = 0x140EC8u;
        goto label_140ec8;
    }
    ctx->pc = 0x140EC0u;
    {
        const bool branch_taken_0x140ec0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x140EC4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1075));
        if (branch_taken_0x140ec0) {
            ctx->pc = 0x140F2Cu;
            goto label_140f2c;
        }
    }
    ctx->pc = 0x140EC8u;
label_140ec8:
    // 0x140ec8: 0x8fa30004
    ctx->pc = 0x140ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_140ecc:
    // 0x140ecc: 0x24020036
    ctx->pc = 0x140eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 54));
label_140ed0:
    // 0x140ed0: 0x10000016
label_140ed4:
    if (ctx->pc == 0x140ED4u) {
        ctx->pc = 0x140ED4u;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x140ED8u;
        goto label_140ed8;
    }
    ctx->pc = 0x140ED0u;
    {
        const bool branch_taken_0x140ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140ED4u;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x140ed0) {
            ctx->pc = 0x140F2Cu;
            goto label_140f2c;
        }
    }
    ctx->pc = 0x140ED8u;
label_140ed8:
    // 0x140ed8: 0x8fa20020
    ctx->pc = 0x140ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_140edc:
    // 0x140edc: 0x8fa3001c
    ctx->pc = 0x140edcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_140ee0:
    // 0x140ee0: 0x2450ffff
    ctx->pc = 0x140ee0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_140ee4:
    // 0x140ee4: 0x70102a
    ctx->pc = 0x140ee4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
label_140ee8:
    // 0x140ee8: 0x14400003
label_140eec:
    if (ctx->pc == 0x140EECu) {
        ctx->pc = 0x140EECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x140EF0u;
        goto label_140ef0;
    }
    ctx->pc = 0x140EE8u;
    {
        const bool branch_taken_0x140ee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140EECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        if (branch_taken_0x140ee8) {
            ctx->pc = 0x140EF8u;
            goto label_140ef8;
        }
    }
    ctx->pc = 0x140EF0u;
label_140ef0:
    // 0x140ef0: 0x10000008
label_140ef4:
    if (ctx->pc == 0x140EF4u) {
        ctx->pc = 0x140EF4u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->pc = 0x140EF8u;
        goto label_140ef8;
    }
    ctx->pc = 0x140EF0u;
    {
        const bool branch_taken_0x140ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140EF4u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        if (branch_taken_0x140ef0) {
            ctx->pc = 0x140F14u;
            goto label_140f14;
        }
    }
    ctx->pc = 0x140EF8u;
label_140ef8:
    // 0x140ef8: 0x902d
    ctx->pc = 0x140ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140efc:
    // 0x140efc: 0x8fa2003c
    ctx->pc = 0x140efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_140f00:
    // 0x140f00: 0x2048023
    ctx->pc = 0x140f00u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_140f04:
    // 0x140f04: 0x902021
    ctx->pc = 0x140f04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_140f08:
    // 0x140f08: 0x501021
    ctx->pc = 0x140f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_140f0c:
    // 0x140f0c: 0xafa4001c
    ctx->pc = 0x140f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_140f10:
    // 0x140f10: 0xafa2003c
    ctx->pc = 0x140f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_140f14:
    // 0x140f14: 0x8fb40020
    ctx->pc = 0x140f14u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_140f18:
    // 0x140f18: 0x6810005
label_140f1c:
    if (ctx->pc == 0x140F1Cu) {
        ctx->pc = 0x140F1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140F20u;
        goto label_140f20;
    }
    ctx->pc = 0x140F18u;
    {
        const bool branch_taken_0x140f18 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x140F1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140f18) {
            ctx->pc = 0x140F30u;
            goto label_140f30;
        }
    }
    ctx->pc = 0x140F20u;
label_140f20:
    // 0x140f20: 0x8fa30018
    ctx->pc = 0x140f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_140f24:
    // 0x140f24: 0x748823
    ctx->pc = 0x140f24u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_140f28:
    // 0x140f28: 0xa02d
    ctx->pc = 0x140f28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140f2c:
    // 0x140f2c: 0x3c0202d
    ctx->pc = 0x140f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_140f30:
    // 0x140f30: 0xc050e52
label_140f34:
    if (ctx->pc == 0x140F34u) {
        ctx->pc = 0x140F34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x140F38u;
        goto label_140f38;
    }
    ctx->pc = 0x140F30u;
    SET_GPR_U32(ctx, 31, 0x140F38u);
    ctx->pc = 0x140F34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143948u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x143948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F38u; }
        else if (ctx->pc != 0x140F38u) { ctx->pc = 0x140F38u; }
    }
    if (ctx->pc != 0x140F38u) { return; }
    ctx->pc = 0x140F38u;
label_140f38:
    // 0x140f38: 0xafa20050
    ctx->pc = 0x140f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_140f3c:
    // 0x140f3c: 0x8fa40038
    ctx->pc = 0x140f3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_140f40:
    // 0x140f40: 0x8fa20018
    ctx->pc = 0x140f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_140f44:
    // 0x140f44: 0x942021
    ctx->pc = 0x140f44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_140f48:
    // 0x140f48: 0x541021
    ctx->pc = 0x140f48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_140f4c:
    // 0x140f4c: 0xafa40038
    ctx->pc = 0x140f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_140f50:
    // 0x140f50: 0x10000003
label_140f54:
    if (ctx->pc == 0x140F54u) {
        ctx->pc = 0x140F54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x140F58u;
        goto label_140f58;
    }
    ctx->pc = 0x140F50u;
    {
        const bool branch_taken_0x140f50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140F54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x140f50) {
            ctx->pc = 0x140F60u;
            goto label_140f60;
        }
    }
    ctx->pc = 0x140F58u;
label_140f58:
    // 0x140f58: 0x8fa30008
    ctx->pc = 0x140f58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_140f5c:
    // 0x140f5c: 0x28770002
    ctx->pc = 0x140f5cu;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 3), 2));
label_140f60:
    // 0x140f60: 0x1a20000b
label_140f64:
    if (ctx->pc == 0x140F64u) {
        ctx->pc = 0x140F64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x140F68u;
        goto label_140f68;
    }
    ctx->pc = 0x140F60u;
    {
        const bool branch_taken_0x140f60 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x140F64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x140f60) {
            ctx->pc = 0x140F90u;
            goto label_140f90;
        }
    }
    ctx->pc = 0x140F68u;
label_140f68:
    // 0x140f68: 0x18800009
label_140f6c:
    if (ctx->pc == 0x140F6Cu) {
        ctx->pc = 0x140F6Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140F70u;
        goto label_140f70;
    }
    ctx->pc = 0x140F68u;
    {
        const bool branch_taken_0x140f68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x140F6Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140f68) {
            ctx->pc = 0x140F90u;
            goto label_140f90;
        }
    }
    ctx->pc = 0x140F70u;
label_140f70:
    // 0x140f70: 0x234102a
    ctx->pc = 0x140f70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
label_140f74:
    // 0x140f74: 0x222a00b
    ctx->pc = 0x140f74u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 17));
label_140f78:
    // 0x140f78: 0x8fa20018
    ctx->pc = 0x140f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_140f7c:
    // 0x140f7c: 0x942023
    ctx->pc = 0x140f7cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_140f80:
    // 0x140f80: 0xafa40038
    ctx->pc = 0x140f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_140f84:
    // 0x140f84: 0x2348823
    ctx->pc = 0x140f84u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_140f88:
    // 0x140f88: 0x541023
    ctx->pc = 0x140f88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_140f8c:
    // 0x140f8c: 0xafa20018
    ctx->pc = 0x140f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_140f90:
    // 0x140f90: 0x8fa3001c
    ctx->pc = 0x140f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_140f94:
    // 0x140f94: 0x1860001e
label_140f98:
    if (ctx->pc == 0x140F98u) {
        ctx->pc = 0x140F98u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x140F9Cu;
        goto label_140f9c;
    }
    ctx->pc = 0x140F94u;
    {
        const bool branch_taken_0x140f94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x140F98u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x140f94) {
            ctx->pc = 0x141010u;
            goto label_141010;
        }
    }
    ctx->pc = 0x140F9Cu;
label_140f9c:
    // 0x140f9c: 0x10800018
label_140fa0:
    if (ctx->pc == 0x140FA0u) {
        ctx->pc = 0x140FA0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x140FA4u;
        goto label_140fa4;
    }
    ctx->pc = 0x140F9Cu;
    {
        const bool branch_taken_0x140f9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x140FA0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x140f9c) {
            ctx->pc = 0x141000u;
            goto label_141000;
        }
    }
    ctx->pc = 0x140FA4u;
label_140fa4:
    // 0x140fa4: 0x1a40000d
label_140fa8:
    if (ctx->pc == 0x140FA8u) {
        ctx->pc = 0x140FA8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x140FACu;
        goto label_140fac;
    }
    ctx->pc = 0x140FA4u;
    {
        const bool branch_taken_0x140fa4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x140FA8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x140fa4) {
            ctx->pc = 0x140FDCu;
            goto label_140fdc;
        }
    }
    ctx->pc = 0x140FACu;
label_140fac:
    // 0x140fac: 0x3c0202d
    ctx->pc = 0x140facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_140fb0:
    // 0x140fb0: 0xc050eec
label_140fb4:
    if (ctx->pc == 0x140FB4u) {
        ctx->pc = 0x140FB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140FB8u;
        goto label_140fb8;
    }
    ctx->pc = 0x140FB0u;
    SET_GPR_U32(ctx, 31, 0x140FB8u);
    ctx->pc = 0x140FB4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x143bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FB8u; }
        else if (ctx->pc != 0x140FB8u) { ctx->pc = 0x140FB8u; }
    }
    if (ctx->pc != 0x140FB8u) { return; }
    ctx->pc = 0x140FB8u;
label_140fb8:
    // 0x140fb8: 0xafa20050
    ctx->pc = 0x140fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_140fbc:
    // 0x140fbc: 0x3c0202d
    ctx->pc = 0x140fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_140fc0:
    // 0x140fc0: 0x8fa60048
    ctx->pc = 0x140fc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_140fc4:
    // 0x140fc4: 0xc050e60
label_140fc8:
    if (ctx->pc == 0x140FC8u) {
        ctx->pc = 0x140FC8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140FCCu;
        goto label_140fcc;
    }
    ctx->pc = 0x140FC4u;
    SET_GPR_U32(ctx, 31, 0x140FCCu);
    ctx->pc = 0x140FC8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143980u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x143980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FCCu; }
        else if (ctx->pc != 0x140FCCu) { ctx->pc = 0x140FCCu; }
    }
    if (ctx->pc != 0x140FCCu) { return; }
    ctx->pc = 0x140FCCu;
label_140fcc:
    // 0x140fcc: 0x8fa50048
    ctx->pc = 0x140fccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_140fd0:
    // 0x140fd0: 0x3c0202d
    ctx->pc = 0x140fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_140fd4:
    // 0x140fd4: 0xc050d5c
label_140fd8:
    if (ctx->pc == 0x140FD8u) {
        ctx->pc = 0x140FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x140FDCu;
        goto label_140fdc;
    }
    ctx->pc = 0x140FD4u;
    SET_GPR_U32(ctx, 31, 0x140FDCu);
    ctx->pc = 0x140FD8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FDCu; }
        else if (ctx->pc != 0x140FDCu) { ctx->pc = 0x140FDCu; }
    }
    if (ctx->pc != 0x140FDCu) { return; }
    ctx->pc = 0x140FDCu;
label_140fdc:
    // 0x140fdc: 0x8fa2001c
    ctx->pc = 0x140fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_140fe0:
    // 0x140fe0: 0x528023
    ctx->pc = 0x140fe0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_140fe4:
    // 0x140fe4: 0x1200000a
label_140fe8:
    if (ctx->pc == 0x140FE8u) {
        ctx->pc = 0x140FE8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x140FECu;
        goto label_140fec;
    }
    ctx->pc = 0x140FE4u;
    {
        const bool branch_taken_0x140fe4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x140FE8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x140fe4) {
            ctx->pc = 0x141010u;
            goto label_141010;
        }
    }
    ctx->pc = 0x140FECu;
label_140fec:
    // 0x140fec: 0x200302d
    ctx->pc = 0x140fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140ff0:
    // 0x140ff0: 0xc050eec
label_140ff4:
    if (ctx->pc == 0x140FF4u) {
        ctx->pc = 0x140FF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140FF8u;
        goto label_140ff8;
    }
    ctx->pc = 0x140FF0u;
    SET_GPR_U32(ctx, 31, 0x140FF8u);
    ctx->pc = 0x140FF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x143bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FF8u; }
        else if (ctx->pc != 0x140FF8u) { ctx->pc = 0x140FF8u; }
    }
    if (ctx->pc != 0x140FF8u) { return; }
    ctx->pc = 0x140FF8u;
label_140ff8:
    // 0x140ff8: 0x10000005
label_140ffc:
    if (ctx->pc == 0x140FFCu) {
        ctx->pc = 0x140FFCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x141000u;
        goto label_141000;
    }
    ctx->pc = 0x140FF8u;
    {
        const bool branch_taken_0x140ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140FFCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x140ff8) {
            ctx->pc = 0x141010u;
            goto label_141010;
        }
    }
    ctx->pc = 0x141000u;
label_141000:
    // 0x141000: 0x3c0202d
    ctx->pc = 0x141000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_141004:
    // 0x141004: 0xc050eec
label_141008:
    if (ctx->pc == 0x141008u) {
        ctx->pc = 0x141008u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x14100Cu;
        goto label_14100c;
    }
    ctx->pc = 0x141004u;
    SET_GPR_U32(ctx, 31, 0x14100Cu);
    ctx->pc = 0x141008u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x143BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x143bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14100Cu; }
        else if (ctx->pc != 0x14100Cu) { ctx->pc = 0x14100Cu; }
    }
    if (ctx->pc != 0x14100Cu) { return; }
    ctx->pc = 0x14100Cu;
label_14100c:
    // 0x14100c: 0xafa20048
    ctx->pc = 0x14100cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_141010:
    // 0x141010: 0x3c0202d
    ctx->pc = 0x141010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_141014:
    // 0x141014: 0xc050e52
label_141018:
    if (ctx->pc == 0x141018u) {
        ctx->pc = 0x141018u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14101Cu;
        goto label_14101c;
    }
    ctx->pc = 0x141014u;
    SET_GPR_U32(ctx, 31, 0x14101Cu);
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143948u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x143948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14101Cu; }
        else if (ctx->pc != 0x14101Cu) { ctx->pc = 0x14101Cu; }
    }
    if (ctx->pc != 0x14101Cu) { return; }
    ctx->pc = 0x14101Cu;
label_14101c:
    // 0x14101c: 0x8fa3003c
    ctx->pc = 0x14101cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_141020:
    // 0x141020: 0x18600006
label_141024:
    if (ctx->pc == 0x141024u) {
        ctx->pc = 0x141024u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x141028u;
        goto label_141028;
    }
    ctx->pc = 0x141020u;
    {
        const bool branch_taken_0x141020 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x141024u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x141020) {
            ctx->pc = 0x14103Cu;
            goto label_14103c;
        }
    }
    ctx->pc = 0x141028u;
label_141028:
    // 0x141028: 0x40282d
    ctx->pc = 0x141028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14102c:
    // 0x14102c: 0x3c0202d
    ctx->pc = 0x14102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_141030:
    // 0x141030: 0xc050eec
label_141034:
    if (ctx->pc == 0x141034u) {
        ctx->pc = 0x141034u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141038u;
        goto label_141038;
    }
    ctx->pc = 0x141030u;
    SET_GPR_U32(ctx, 31, 0x141038u);
    ctx->pc = 0x141034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x143bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141038u; }
        else if (ctx->pc != 0x141038u) { ctx->pc = 0x141038u; }
    }
    if (ctx->pc != 0x141038u) { return; }
    ctx->pc = 0x141038u;
label_141038:
    // 0x141038: 0xafa20054
    ctx->pc = 0x141038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_14103c:
    // 0x14103c: 0x12e00015
label_141040:
    if (ctx->pc == 0x141040u) {
        ctx->pc = 0x141040u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x141044u;
        goto label_141044;
    }
    ctx->pc = 0x14103Cu;
    {
        const bool branch_taken_0x14103c = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x141040u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x14103c) {
            ctx->pc = 0x141094u;
            goto label_141094;
        }
    }
    ctx->pc = 0x141044u;
label_141044:
    // 0x141044: 0x2402ffff
    ctx->pc = 0x141044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_141048:
    // 0x141048: 0x2133a
    ctx->pc = 0x141048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_14104c:
    // 0x14104c: 0x2c21024
    ctx->pc = 0x14104cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_141050:
    // 0x141050: 0x5440000f
label_141054:
    if (ctx->pc == 0x141054u) {
        ctx->pc = 0x141054u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x141058u;
        goto label_141058;
    }
    ctx->pc = 0x141050u;
    {
        const bool branch_taken_0x141050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x141050) {
            ctx->pc = 0x141054u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->pc = 0x141090u;
            goto label_141090;
        }
    }
    ctx->pc = 0x141058u;
label_141058:
    // 0x141058: 0x16103f
    ctx->pc = 0x141058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
label_14105c:
    // 0x14105c: 0x3c037ff0
    ctx->pc = 0x14105cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_141060:
    // 0x141060: 0x431024
    ctx->pc = 0x141060u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141064:
    // 0x141064: 0x10400009
label_141068:
    if (ctx->pc == 0x141068u) {
        ctx->pc = 0x141068u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x14106Cu;
        goto label_14106c;
    }
    ctx->pc = 0x141064u;
    {
        const bool branch_taken_0x141064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x141068u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x141064) {
            ctx->pc = 0x14108Cu;
            goto label_14108c;
        }
    }
    ctx->pc = 0x14106Cu;
label_14106c:
    // 0x14106c: 0x24030001
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_141070:
    // 0x141070: 0x8fa20038
    ctx->pc = 0x141070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_141074:
    // 0x141074: 0x24840001
    ctx->pc = 0x141074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_141078:
    // 0x141078: 0xafa30040
    ctx->pc = 0x141078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_14107c:
    // 0x14107c: 0x24420001
    ctx->pc = 0x14107cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_141080:
    // 0x141080: 0xafa40018
    ctx->pc = 0x141080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_141084:
    // 0x141084: 0x10000002
label_141088:
    if (ctx->pc == 0x141088u) {
        ctx->pc = 0x141088u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x14108Cu;
        goto label_14108c;
    }
    ctx->pc = 0x141084u;
    {
        const bool branch_taken_0x141084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141088u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x141084) {
            ctx->pc = 0x141090u;
            goto label_141090;
        }
    }
    ctx->pc = 0x14108Cu;
label_14108c:
    // 0x14108c: 0xafa00040
    ctx->pc = 0x14108cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_141090:
    // 0x141090: 0x8fa4003c
    ctx->pc = 0x141090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_141094:
    // 0x141094: 0x1080000a
label_141098:
    if (ctx->pc == 0x141098u) {
        ctx->pc = 0x141098u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x14109Cu;
        goto label_14109c;
    }
    ctx->pc = 0x141094u;
    {
        const bool branch_taken_0x141094 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x141098u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x141094) {
            ctx->pc = 0x1410C0u;
            goto label_1410c0;
        }
    }
    ctx->pc = 0x14109Cu;
label_14109c:
    // 0x14109c: 0x8c620010
    ctx->pc = 0x14109cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1410a0:
    // 0x1410a0: 0x2442ffff
    ctx->pc = 0x1410a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1410a4:
    // 0x1410a4: 0x21080
    ctx->pc = 0x1410a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1410a8:
    // 0x1410a8: 0x621021
    ctx->pc = 0x1410a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1410ac:
    // 0x1410ac: 0xc050e00
label_1410b0:
    if (ctx->pc == 0x1410B0u) {
        ctx->pc = 0x1410B0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x1410B4u;
        goto label_1410b4;
    }
    ctx->pc = 0x1410ACu;
    SET_GPR_U32(ctx, 31, 0x1410B4u);
    ctx->pc = 0x1410B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x143800u;
    {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x143800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410B4u; }
        else if (ctx->pc != 0x1410B4u) { ctx->pc = 0x1410B4u; }
    }
    if (ctx->pc != 0x1410B4u) { return; }
    ctx->pc = 0x1410B4u;
label_1410b4:
    // 0x1410b4: 0x8fa40038
    ctx->pc = 0x1410b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1410b8:
    // 0x1410b8: 0x10000003
label_1410bc:
    if (ctx->pc == 0x1410BCu) {
        ctx->pc = 0x1410BCu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x1410C0u;
        goto label_1410c0;
    }
    ctx->pc = 0x1410B8u;
    {
        const bool branch_taken_0x1410b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1410BCu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x1410b8) {
            ctx->pc = 0x1410C8u;
            goto label_1410c8;
        }
    }
    ctx->pc = 0x1410C0u;
label_1410c0:
    // 0x1410c0: 0x8fa30038
    ctx->pc = 0x1410c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1410c4:
    // 0x1410c4: 0x24620001
    ctx->pc = 0x1410c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_1410c8:
    // 0x1410c8: 0x3054001f
    ctx->pc = 0x1410c8u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), 31));
label_1410cc:
    // 0x1410cc: 0x12800002
label_1410d0:
    if (ctx->pc == 0x1410D0u) {
        ctx->pc = 0x1410D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1410D4u;
        goto label_1410d4;
    }
    ctx->pc = 0x1410CCu;
    {
        const bool branch_taken_0x1410cc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1410D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1410cc) {
            ctx->pc = 0x1410D8u;
            goto label_1410d8;
        }
    }
    ctx->pc = 0x1410D4u;
label_1410d4:
    // 0x1410d4: 0x54a023
    ctx->pc = 0x1410d4u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1410d8:
    // 0x1410d8: 0x2a820005
    ctx->pc = 0x1410d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 5));
label_1410dc:
    // 0x1410dc: 0x1440000a
label_1410e0:
    if (ctx->pc == 0x1410E0u) {
        ctx->pc = 0x1410E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
        ctx->pc = 0x1410E4u;
        goto label_1410e4;
    }
    ctx->pc = 0x1410DCu;
    {
        const bool branch_taken_0x1410dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1410E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
        if (branch_taken_0x1410dc) {
            ctx->pc = 0x141108u;
            goto label_141108;
        }
    }
    ctx->pc = 0x1410E4u;
label_1410e4:
    // 0x1410e4: 0x8fa40038
    ctx->pc = 0x1410e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1410e8:
    // 0x1410e8: 0x2694fffc
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967292));
label_1410ec:
    // 0x1410ec: 0x8fa20018
    ctx->pc = 0x1410ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1410f0:
    // 0x1410f0: 0x2348821
    ctx->pc = 0x1410f0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1410f4:
    // 0x1410f4: 0x942021
    ctx->pc = 0x1410f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1410f8:
    // 0x1410f8: 0x541021
    ctx->pc = 0x1410f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1410fc:
    // 0x1410fc: 0xafa40038
    ctx->pc = 0x1410fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_141100:
    // 0x141100: 0x1000000a
label_141104:
    if (ctx->pc == 0x141104u) {
        ctx->pc = 0x141104u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x141108u;
        goto label_141108;
    }
    ctx->pc = 0x141100u;
    {
        const bool branch_taken_0x141100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141104u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x141100) {
            ctx->pc = 0x14112Cu;
            goto label_14112c;
        }
    }
    ctx->pc = 0x141108u;
label_141108:
    // 0x141108: 0x10400008
label_14110c:
    if (ctx->pc == 0x14110Cu) {
        ctx->pc = 0x14110Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x141110u;
        goto label_141110;
    }
    ctx->pc = 0x141108u;
    {
        const bool branch_taken_0x141108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14110Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x141108) {
            ctx->pc = 0x14112Cu;
            goto label_14112c;
        }
    }
    ctx->pc = 0x141110u;
label_141110:
    // 0x141110: 0x2694001c
    ctx->pc = 0x141110u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 28));
label_141114:
    // 0x141114: 0x8fa40018
    ctx->pc = 0x141114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_141118:
    // 0x141118: 0x2348821
    ctx->pc = 0x141118u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_14111c:
    // 0x14111c: 0x741821
    ctx->pc = 0x14111cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_141120:
    // 0x141120: 0x942021
    ctx->pc = 0x141120u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_141124:
    // 0x141124: 0xafa30038
    ctx->pc = 0x141124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_141128:
    // 0x141128: 0xafa40018
    ctx->pc = 0x141128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_14112c:
    // 0x14112c: 0x8fa20018
    ctx->pc = 0x14112cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_141130:
    // 0x141130: 0x18400005
label_141134:
    if (ctx->pc == 0x141134u) {
        ctx->pc = 0x141134u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x141138u;
        goto label_141138;
    }
    ctx->pc = 0x141130u;
    {
        const bool branch_taken_0x141130 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x141134u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x141130) {
            ctx->pc = 0x141148u;
            goto label_141148;
        }
    }
    ctx->pc = 0x141138u;
label_141138:
    // 0x141138: 0x40302d
    ctx->pc = 0x141138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14113c:
    // 0x14113c: 0xc050f2c
label_141140:
    if (ctx->pc == 0x141140u) {
        ctx->pc = 0x141140u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141144u;
        goto label_141144;
    }
    ctx->pc = 0x14113Cu;
    SET_GPR_U32(ctx, 31, 0x141144u);
    ctx->pc = 0x141140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x143cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141144u; }
        else if (ctx->pc != 0x141144u) { ctx->pc = 0x141144u; }
    }
    if (ctx->pc != 0x141144u) { return; }
    ctx->pc = 0x141144u;
label_141144:
    // 0x141144: 0xafa20048
    ctx->pc = 0x141144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_141148:
    // 0x141148: 0x8fa30038
    ctx->pc = 0x141148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14114c:
    // 0x14114c: 0x18600005
label_141150:
    if (ctx->pc == 0x141150u) {
        ctx->pc = 0x141150u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x141154u;
        goto label_141154;
    }
    ctx->pc = 0x14114Cu;
    {
        const bool branch_taken_0x14114c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x141150u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x14114c) {
            ctx->pc = 0x141164u;
            goto label_141164;
        }
    }
    ctx->pc = 0x141154u;
label_141154:
    // 0x141154: 0x60302d
    ctx->pc = 0x141154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_141158:
    // 0x141158: 0xc050f2c
label_14115c:
    if (ctx->pc == 0x14115Cu) {
        ctx->pc = 0x14115Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141160u;
        goto label_141160;
    }
    ctx->pc = 0x141158u;
    SET_GPR_U32(ctx, 31, 0x141160u);
    ctx->pc = 0x14115Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x143cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141160u; }
        else if (ctx->pc != 0x141160u) { ctx->pc = 0x141160u; }
    }
    if (ctx->pc != 0x141160u) { return; }
    ctx->pc = 0x141160u;
label_141160:
    // 0x141160: 0xafa20054
    ctx->pc = 0x141160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_141164:
    // 0x141164: 0x8fa40030
    ctx->pc = 0x141164u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_141168:
    // 0x141168: 0x10800016
label_14116c:
    if (ctx->pc == 0x14116Cu) {
        ctx->pc = 0x14116Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x141170u;
        goto label_141170;
    }
    ctx->pc = 0x141168u;
    {
        const bool branch_taken_0x141168 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x14116Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x141168) {
            ctx->pc = 0x1411C4u;
            goto label_1411c4;
        }
    }
    ctx->pc = 0x141170u;
label_141170:
    // 0x141170: 0xc050f8a
label_141174:
    if (ctx->pc == 0x141174u) {
        ctx->pc = 0x141174u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x141178u;
        goto label_141178;
    }
    ctx->pc = 0x141170u;
    SET_GPR_U32(ctx, 31, 0x141178u);
    ctx->pc = 0x141174u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x143E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x143e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141178u; }
        else if (ctx->pc != 0x141178u) { ctx->pc = 0x141178u; }
    }
    if (ctx->pc != 0x141178u) { return; }
    ctx->pc = 0x141178u;
label_141178:
    // 0x141178: 0x4410013
label_14117c:
    if (ctx->pc == 0x14117Cu) {
        ctx->pc = 0x14117Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x141180u;
        goto label_141180;
    }
    ctx->pc = 0x141178u;
    {
        const bool branch_taken_0x141178 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14117Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x141178) {
            ctx->pc = 0x1411C8u;
            goto label_1411c8;
        }
    }
    ctx->pc = 0x141180u;
label_141180:
    // 0x141180: 0x8fa50048
    ctx->pc = 0x141180u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_141184:
    // 0x141184: 0x3c0202d
    ctx->pc = 0x141184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_141188:
    // 0x141188: 0x2406000a
    ctx->pc = 0x141188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_14118c:
    // 0x14118c: 0xc050d68
label_141190:
    if (ctx->pc == 0x141190u) {
        ctx->pc = 0x141190u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141194u;
        goto label_141194;
    }
    ctx->pc = 0x14118Cu;
    SET_GPR_U32(ctx, 31, 0x141194u);
    ctx->pc = 0x141190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141194u; }
        else if (ctx->pc != 0x141194u) { ctx->pc = 0x141194u; }
    }
    if (ctx->pc != 0x141194u) { return; }
    ctx->pc = 0x141194u;
label_141194:
    // 0x141194: 0xafa20048
    ctx->pc = 0x141194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_141198:
    // 0x141198: 0x8fa20034
    ctx->pc = 0x141198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_14119c:
    // 0x14119c: 0x10400007
label_1411a0:
    if (ctx->pc == 0x1411A0u) {
        ctx->pc = 0x1411A0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x1411A4u;
        goto label_1411a4;
    }
    ctx->pc = 0x14119Cu;
    {
        const bool branch_taken_0x14119c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1411A0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        if (branch_taken_0x14119c) {
            ctx->pc = 0x1411BCu;
            goto label_1411bc;
        }
    }
    ctx->pc = 0x1411A4u;
label_1411a4:
    // 0x1411a4: 0x8fa50050
    ctx->pc = 0x1411a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1411a8:
    // 0x1411a8: 0x3c0202d
    ctx->pc = 0x1411a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1411ac:
    // 0x1411ac: 0x2406000a
    ctx->pc = 0x1411acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_1411b0:
    // 0x1411b0: 0xc050d68
label_1411b4:
    if (ctx->pc == 0x1411B4u) {
        ctx->pc = 0x1411B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1411B8u;
        goto label_1411b8;
    }
    ctx->pc = 0x1411B0u;
    SET_GPR_U32(ctx, 31, 0x1411B8u);
    ctx->pc = 0x1411B4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1411B8u; }
        else if (ctx->pc != 0x1411B8u) { ctx->pc = 0x1411B8u; }
    }
    if (ctx->pc != 0x1411B8u) { return; }
    ctx->pc = 0x1411B8u;
label_1411b8:
    // 0x1411b8: 0xafa20050
    ctx->pc = 0x1411b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1411bc:
    // 0x1411bc: 0x8fa30028
    ctx->pc = 0x1411bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1411c0:
    // 0x1411c0: 0xafa30020
    ctx->pc = 0x1411c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1411c4:
    // 0x1411c4: 0x8fa40020
    ctx->pc = 0x1411c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1411c8:
    // 0x1411c8: 0x5c80001a
label_1411cc:
    if (ctx->pc == 0x1411CCu) {
        ctx->pc = 0x1411CCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x1411D0u;
        goto label_1411d0;
    }
    ctx->pc = 0x1411C8u;
    {
        const bool branch_taken_0x1411c8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1411c8) {
            ctx->pc = 0x1411CCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x141234u;
            goto label_141234;
        }
    }
    ctx->pc = 0x1411D0u;
label_1411d0:
    // 0x1411d0: 0x8fa30008
    ctx->pc = 0x1411d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1411d4:
    // 0x1411d4: 0x28620003
    ctx->pc = 0x1411d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
label_1411d8:
    // 0x1411d8: 0x54400016
label_1411dc:
    if (ctx->pc == 0x1411DCu) {
        ctx->pc = 0x1411DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x1411E0u;
        goto label_1411e0;
    }
    ctx->pc = 0x1411D8u;
    {
        const bool branch_taken_0x1411d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1411d8) {
            ctx->pc = 0x1411DCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x141234u;
            goto label_141234;
        }
    }
    ctx->pc = 0x1411E0u;
label_1411e0:
    // 0x1411e0: 0x480000b
label_1411e4:
    if (ctx->pc == 0x1411E4u) {
        ctx->pc = 0x1411E4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x1411E8u;
        goto label_1411e8;
    }
    ctx->pc = 0x1411E0u;
    {
        const bool branch_taken_0x1411e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1411E4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x1411e0) {
            ctx->pc = 0x141210u;
            goto label_141210;
        }
    }
    ctx->pc = 0x1411E8u;
label_1411e8:
    // 0x1411e8: 0x3c0202d
    ctx->pc = 0x1411e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1411ec:
    // 0x1411ec: 0x24060005
    ctx->pc = 0x1411ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
label_1411f0:
    // 0x1411f0: 0xc050d68
label_1411f4:
    if (ctx->pc == 0x1411F4u) {
        ctx->pc = 0x1411F4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1411F8u;
        goto label_1411f8;
    }
    ctx->pc = 0x1411F0u;
    SET_GPR_U32(ctx, 31, 0x1411F8u);
    ctx->pc = 0x1411F4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1411F8u; }
        else if (ctx->pc != 0x1411F8u) { ctx->pc = 0x1411F8u; }
    }
    if (ctx->pc != 0x1411F8u) { return; }
    ctx->pc = 0x1411F8u;
label_1411f8:
    // 0x1411f8: 0xafa20054
    ctx->pc = 0x1411f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1411fc:
    // 0x1411fc: 0x8fa40048
    ctx->pc = 0x1411fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_141200:
    // 0x141200: 0xc050f8a
label_141204:
    if (ctx->pc == 0x141204u) {
        ctx->pc = 0x141204u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141208u;
        goto label_141208;
    }
    ctx->pc = 0x141200u;
    SET_GPR_U32(ctx, 31, 0x141208u);
    ctx->pc = 0x141204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x143e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141208u; }
        else if (ctx->pc != 0x141208u) { ctx->pc = 0x141208u; }
    }
    if (ctx->pc != 0x141208u) { return; }
    ctx->pc = 0x141208u;
label_141208:
    // 0x141208: 0x1c400005
label_14120c:
    if (ctx->pc == 0x14120Cu) {
        ctx->pc = 0x14120Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x141210u;
        goto label_141210;
    }
    ctx->pc = 0x141208u;
    {
        const bool branch_taken_0x141208 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x14120Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x141208) {
            ctx->pc = 0x141220u;
            goto label_141220;
        }
    }
    ctx->pc = 0x141210u;
label_141210:
    // 0x141210: 0x8fa4000c
    ctx->pc = 0x141210u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_141214:
    // 0x141214: 0x49827
    ctx->pc = 0x141214u;
    SET_GPR_U32(ctx, 19, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_141218:
    // 0x141218: 0x100000db
label_14121c:
    if (ctx->pc == 0x14121Cu) {
        ctx->pc = 0x14121Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x141220u;
        goto label_141220;
    }
    ctx->pc = 0x141218u;
    {
        const bool branch_taken_0x141218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14121Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x141218) {
            ctx->pc = 0x141588u;
            goto label_141588;
        }
    }
    ctx->pc = 0x141220u;
label_141220:
    // 0x141220: 0x24020031
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_141224:
    // 0x141224: 0x26770002
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 2));
label_141228:
    // 0x141228: 0xa0620000
    ctx->pc = 0x141228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_14122c:
    // 0x14122c: 0x100000d6
label_141230:
    if (ctx->pc == 0x141230u) {
        ctx->pc = 0x141230u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x141234u;
        goto label_141234;
    }
    ctx->pc = 0x14122Cu;
    {
        const bool branch_taken_0x14122c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141230u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x14122c) {
            ctx->pc = 0x141588u;
            goto label_141588;
        }
    }
    ctx->pc = 0x141234u;
label_141234:
    // 0x141234: 0x10800095
label_141238:
    if (ctx->pc == 0x141238u) {
        ctx->pc = 0x141238u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14123Cu;
        goto label_14123c;
    }
    ctx->pc = 0x141234u;
    {
        const bool branch_taken_0x141234 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x141238u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x141234) {
            ctx->pc = 0x14148Cu;
            goto label_14148c;
        }
    }
    ctx->pc = 0x14123Cu;
label_14123c:
    // 0x14123c: 0x1a200005
label_141240:
    if (ctx->pc == 0x141240u) {
        ctx->pc = 0x141240u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x141244u;
        goto label_141244;
    }
    ctx->pc = 0x14123Cu;
    {
        const bool branch_taken_0x14123c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x141240u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x14123c) {
            ctx->pc = 0x141254u;
            goto label_141254;
        }
    }
    ctx->pc = 0x141244u;
label_141244:
    // 0x141244: 0x220302d
    ctx->pc = 0x141244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141248:
    // 0x141248: 0xc050f2c
label_14124c:
    if (ctx->pc == 0x14124Cu) {
        ctx->pc = 0x14124Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141250u;
        goto label_141250;
    }
    ctx->pc = 0x141248u;
    SET_GPR_U32(ctx, 31, 0x141250u);
    ctx->pc = 0x14124Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x143cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141250u; }
        else if (ctx->pc != 0x141250u) { ctx->pc = 0x141250u; }
    }
    if (ctx->pc != 0x141250u) { return; }
    ctx->pc = 0x141250u;
label_141250:
    // 0x141250: 0xafa20050
    ctx->pc = 0x141250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_141254:
    // 0x141254: 0x8fa20050
    ctx->pc = 0x141254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_141258:
    // 0x141258: 0x8fa30040
    ctx->pc = 0x141258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_14125c:
    // 0x14125c: 0x10600012
label_141260:
    if (ctx->pc == 0x141260u) {
        ctx->pc = 0x141260u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x141264u;
        goto label_141264;
    }
    ctx->pc = 0x14125Cu;
    {
        const bool branch_taken_0x14125c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x141260u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x14125c) {
            ctx->pc = 0x1412A8u;
            goto label_1412a8;
        }
    }
    ctx->pc = 0x141264u;
label_141264:
    // 0x141264: 0x8c450004
    ctx->pc = 0x141264u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_141268:
    // 0x141268: 0xc050d32
label_14126c:
    if (ctx->pc == 0x14126Cu) {
        ctx->pc = 0x14126Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141270u;
        goto label_141270;
    }
    ctx->pc = 0x141268u;
    SET_GPR_U32(ctx, 31, 0x141270u);
    ctx->pc = 0x14126Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141270u; }
        else if (ctx->pc != 0x141270u) { ctx->pc = 0x141270u; }
    }
    if (ctx->pc != 0x141270u) { return; }
    ctx->pc = 0x141270u;
label_141270:
    // 0x141270: 0x8fa4004c
    ctx->pc = 0x141270u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_141274:
    // 0x141274: 0x8c860010
    ctx->pc = 0x141274u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_141278:
    // 0x141278: 0xafa20050
    ctx->pc = 0x141278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_14127c:
    // 0x14127c: 0x63080
    ctx->pc = 0x14127cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
label_141280:
    // 0x141280: 0x2444000c
    ctx->pc = 0x141280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
label_141284:
    // 0x141284: 0x24c60008
    ctx->pc = 0x141284u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_141288:
    // 0x141288: 0x8fa2004c
    ctx->pc = 0x141288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_14128c:
    // 0x14128c: 0xc050c90
label_141290:
    if (ctx->pc == 0x141290u) {
        ctx->pc = 0x141290u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x141294u;
        goto label_141294;
    }
    ctx->pc = 0x14128Cu;
    SET_GPR_U32(ctx, 31, 0x141294u);
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141294u; }
        else if (ctx->pc != 0x141294u) { ctx->pc = 0x141294u; }
    }
    if (ctx->pc != 0x141294u) { return; }
    ctx->pc = 0x141294u;
label_141294:
    // 0x141294: 0x8fa50050
    ctx->pc = 0x141294u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_141298:
    // 0x141298: 0x3c0202d
    ctx->pc = 0x141298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14129c:
    // 0x14129c: 0xc050f2c
label_1412a0:
    if (ctx->pc == 0x1412A0u) {
        ctx->pc = 0x1412A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1412A4u;
        goto label_1412a4;
    }
    ctx->pc = 0x14129Cu;
    SET_GPR_U32(ctx, 31, 0x1412A4u);
    ctx->pc = 0x1412A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x143cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412A4u; }
        else if (ctx->pc != 0x1412A4u) { ctx->pc = 0x1412A4u; }
    }
    if (ctx->pc != 0x1412A4u) { return; }
    ctx->pc = 0x1412A4u;
label_1412a4:
    // 0x1412a4: 0xafa20050
    ctx->pc = 0x1412a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1412a8:
    // 0x1412a8: 0x24140001
    ctx->pc = 0x1412a8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_1412ac:
    // 0x1412ac: 0x10000020
label_1412b0:
    if (ctx->pc == 0x1412B0u) {
        ctx->pc = 0x1412B0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1412B4u;
        goto label_1412b4;
    }
    ctx->pc = 0x1412ACu;
    {
        const bool branch_taken_0x1412ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1412B0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x1412ac) {
            ctx->pc = 0x141330u;
            goto label_141330;
        }
    }
    ctx->pc = 0x1412B4u;
label_1412b4:
    // 0x1412b4: 0x0
    ctx->pc = 0x1412b4u;
    // NOP
label_1412b8:
    // 0x1412b8: 0x8fa50048
    ctx->pc = 0x1412b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1412bc:
    // 0x1412bc: 0x3c0202d
    ctx->pc = 0x1412bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1412c0:
    // 0x1412c0: 0x2406000a
    ctx->pc = 0x1412c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_1412c4:
    // 0x1412c4: 0xc050d68
label_1412c8:
    if (ctx->pc == 0x1412C8u) {
        ctx->pc = 0x1412C8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1412CCu;
        goto label_1412cc;
    }
    ctx->pc = 0x1412C4u;
    SET_GPR_U32(ctx, 31, 0x1412CCu);
    ctx->pc = 0x1412C8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412CCu; }
        else if (ctx->pc != 0x1412CCu) { ctx->pc = 0x1412CCu; }
    }
    if (ctx->pc != 0x1412CCu) { return; }
    ctx->pc = 0x1412CCu;
label_1412cc:
    // 0x1412cc: 0x8fa3004c
    ctx->pc = 0x1412ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1412d0:
    // 0x1412d0: 0x8fa40050
    ctx->pc = 0x1412d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1412d4:
    // 0x1412d4: 0x14640009
label_1412d8:
    if (ctx->pc == 0x1412D8u) {
        ctx->pc = 0x1412D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x1412DCu;
        goto label_1412dc;
    }
    ctx->pc = 0x1412D4u;
    {
        const bool branch_taken_0x1412d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1412D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x1412d4) {
            ctx->pc = 0x1412FCu;
            goto label_1412fc;
        }
    }
    ctx->pc = 0x1412DCu;
label_1412dc:
    // 0x1412dc: 0x80282d
    ctx->pc = 0x1412dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1412e0:
    // 0x1412e0: 0x2406000a
    ctx->pc = 0x1412e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_1412e4:
    // 0x1412e4: 0x3c0202d
    ctx->pc = 0x1412e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1412e8:
    // 0x1412e8: 0xc050d68
label_1412ec:
    if (ctx->pc == 0x1412ECu) {
        ctx->pc = 0x1412ECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1412F0u;
        goto label_1412f0;
    }
    ctx->pc = 0x1412E8u;
    SET_GPR_U32(ctx, 31, 0x1412F0u);
    ctx->pc = 0x1412ECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412F0u; }
        else if (ctx->pc != 0x1412F0u) { ctx->pc = 0x1412F0u; }
    }
    if (ctx->pc != 0x1412F0u) { return; }
    ctx->pc = 0x1412F0u;
label_1412f0:
    // 0x1412f0: 0xafa20050
    ctx->pc = 0x1412f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1412f4:
    // 0x1412f4: 0x1000000d
label_1412f8:
    if (ctx->pc == 0x1412F8u) {
        ctx->pc = 0x1412F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x1412FCu;
        goto label_1412fc;
    }
    ctx->pc = 0x1412F4u;
    {
        const bool branch_taken_0x1412f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1412F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x1412f4) {
            ctx->pc = 0x14132Cu;
            goto label_14132c;
        }
    }
    ctx->pc = 0x1412FCu;
label_1412fc:
    // 0x1412fc: 0x8fa5004c
    ctx->pc = 0x1412fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_141300:
    // 0x141300: 0x3c0202d
    ctx->pc = 0x141300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_141304:
    // 0x141304: 0x2406000a
    ctx->pc = 0x141304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_141308:
    // 0x141308: 0xc050d68
label_14130c:
    if (ctx->pc == 0x14130Cu) {
        ctx->pc = 0x14130Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141310u;
        goto label_141310;
    }
    ctx->pc = 0x141308u;
    SET_GPR_U32(ctx, 31, 0x141310u);
    ctx->pc = 0x14130Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141310u; }
        else if (ctx->pc != 0x141310u) { ctx->pc = 0x141310u; }
    }
    if (ctx->pc != 0x141310u) { return; }
    ctx->pc = 0x141310u;
label_141310:
    // 0x141310: 0x8fa50050
    ctx->pc = 0x141310u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_141314:
    // 0x141314: 0x3c0202d
    ctx->pc = 0x141314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_141318:
    // 0x141318: 0xafa2004c
    ctx->pc = 0x141318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_14131c:
    // 0x14131c: 0x2406000a
    ctx->pc = 0x14131cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_141320:
    // 0x141320: 0xc050d68
label_141324:
    if (ctx->pc == 0x141324u) {
        ctx->pc = 0x141324u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141328u;
        goto label_141328;
    }
    ctx->pc = 0x141320u;
    SET_GPR_U32(ctx, 31, 0x141328u);
    ctx->pc = 0x141324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141328u; }
        else if (ctx->pc != 0x141328u) { ctx->pc = 0x141328u; }
    }
    if (ctx->pc != 0x141328u) { return; }
    ctx->pc = 0x141328u;
label_141328:
    // 0x141328: 0xafa20050
    ctx->pc = 0x141328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_14132c:
    // 0x14132c: 0x26940001
    ctx->pc = 0x14132cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_141330:
    // 0x141330: 0x8fa40048
    ctx->pc = 0x141330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_141334:
    // 0x141334: 0xc050090
label_141338:
    if (ctx->pc == 0x141338u) {
        ctx->pc = 0x141338u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x14133Cu;
        goto label_14133c;
    }
    ctx->pc = 0x141334u;
    SET_GPR_U32(ctx, 31, 0x14133Cu);
    ctx->pc = 0x141338u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x140240u;
    {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x140240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14133Cu; }
        else if (ctx->pc != 0x14133Cu) { ctx->pc = 0x14133Cu; }
    }
    if (ctx->pc != 0x14133Cu) { return; }
    ctx->pc = 0x14133Cu;
label_14133c:
    // 0x14133c: 0x8fa40048
    ctx->pc = 0x14133cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_141340:
    // 0x141340: 0x24530030
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 48));
label_141344:
    // 0x141344: 0xc050f8a
label_141348:
    if (ctx->pc == 0x141348u) {
        ctx->pc = 0x141348u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x14134Cu;
        goto label_14134c;
    }
    ctx->pc = 0x141344u;
    SET_GPR_U32(ctx, 31, 0x14134Cu);
    ctx->pc = 0x141348u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x143E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x143e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14134Cu; }
        else if (ctx->pc != 0x14134Cu) { ctx->pc = 0x14134Cu; }
    }
    if (ctx->pc != 0x14134Cu) { return; }
    ctx->pc = 0x14134Cu;
label_14134c:
    // 0x14134c: 0x8fa50054
    ctx->pc = 0x14134cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_141350:
    // 0x141350: 0x40802d
    ctx->pc = 0x141350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141354:
    // 0x141354: 0x8fa60050
    ctx->pc = 0x141354u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_141358:
    // 0x141358: 0xc050fa4
label_14135c:
    if (ctx->pc == 0x14135Cu) {
        ctx->pc = 0x14135Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141360u;
        goto label_141360;
    }
    ctx->pc = 0x141358u;
    SET_GPR_U32(ctx, 31, 0x141360u);
    ctx->pc = 0x14135Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mdiff_0x143e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141360u; }
        else if (ctx->pc != 0x141360u) { ctx->pc = 0x141360u; }
    }
    if (ctx->pc != 0x141360u) { return; }
    ctx->pc = 0x141360u;
label_141360:
    // 0x141360: 0x40902d
    ctx->pc = 0x141360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141364:
    // 0x141364: 0x8e42000c
    ctx->pc = 0x141364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_141368:
    // 0x141368: 0x14400005
label_14136c:
    if (ctx->pc == 0x14136Cu) {
        ctx->pc = 0x14136Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x141370u;
        goto label_141370;
    }
    ctx->pc = 0x141368u;
    {
        const bool branch_taken_0x141368 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14136Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x141368) {
            ctx->pc = 0x141380u;
            goto label_141380;
        }
    }
    ctx->pc = 0x141370u;
label_141370:
    // 0x141370: 0x8fa40048
    ctx->pc = 0x141370u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_141374:
    // 0x141374: 0xc050f8a
label_141378:
    if (ctx->pc == 0x141378u) {
        ctx->pc = 0x141378u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14137Cu;
        goto label_14137c;
    }
    ctx->pc = 0x141374u;
    SET_GPR_U32(ctx, 31, 0x14137Cu);
    ctx->pc = 0x141378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x143e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14137Cu; }
        else if (ctx->pc != 0x14137Cu) { ctx->pc = 0x14137Cu; }
    }
    if (ctx->pc != 0x14137Cu) { return; }
    ctx->pc = 0x14137Cu;
label_14137c:
    // 0x14137c: 0x40882d
    ctx->pc = 0x14137cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141380:
    // 0x141380: 0x240282d
    ctx->pc = 0x141380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_141384:
    // 0x141384: 0xc050d5c
label_141388:
    if (ctx->pc == 0x141388u) {
        ctx->pc = 0x141388u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14138Cu;
        goto label_14138c;
    }
    ctx->pc = 0x141384u;
    SET_GPR_U32(ctx, 31, 0x14138Cu);
    ctx->pc = 0x141388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14138Cu; }
        else if (ctx->pc != 0x14138Cu) { ctx->pc = 0x14138Cu; }
    }
    if (ctx->pc != 0x14138Cu) { return; }
    ctx->pc = 0x14138Cu;
label_14138c:
    // 0x14138c: 0x1620000d
label_141390:
    if (ctx->pc == 0x141390u) {
        ctx->pc = 0x141390u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x141394u;
        goto label_141394;
    }
    ctx->pc = 0x14138Cu;
    {
        const bool branch_taken_0x14138c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x141390u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14138c) {
            ctx->pc = 0x1413C4u;
            goto label_1413c4;
        }
    }
    ctx->pc = 0x141394u;
label_141394:
    // 0x141394: 0x1440000b
label_141398:
    if (ctx->pc == 0x141398u) {
        ctx->pc = 0x14139Cu;
        goto label_14139c;
    }
    ctx->pc = 0x141394u;
    {
        const bool branch_taken_0x141394 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x141394) {
            ctx->pc = 0x1413C4u;
            goto label_1413c4;
        }
    }
    ctx->pc = 0x14139Cu;
label_14139c:
    // 0x14139c: 0x16103c
    ctx->pc = 0x14139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_1413a0:
    // 0x1413a0: 0x2103f
    ctx->pc = 0x1413a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1413a4:
    // 0x1413a4: 0x30420001
    ctx->pc = 0x1413a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_1413a8:
    // 0x1413a8: 0x14400006
label_1413ac:
    if (ctx->pc == 0x1413ACu) {
        ctx->pc = 0x1413ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x1413B0u;
        goto label_1413b0;
    }
    ctx->pc = 0x1413A8u;
    {
        const bool branch_taken_0x1413a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1413ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x1413a8) {
            ctx->pc = 0x1413C4u;
            goto label_1413c4;
        }
    }
    ctx->pc = 0x1413B0u;
label_1413b0:
    // 0x1413b0: 0x1262002a
label_1413b4:
    if (ctx->pc == 0x1413B4u) {
        ctx->pc = 0x1413B4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        ctx->pc = 0x1413B8u;
        goto label_1413b8;
    }
    ctx->pc = 0x1413B0u;
    {
        const bool branch_taken_0x1413b0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x1413B4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        if (branch_taken_0x1413b0) {
            ctx->pc = 0x14145Cu;
            goto label_14145c;
        }
    }
    ctx->pc = 0x1413B8u;
label_1413b8:
    // 0x1413b8: 0x539821
    ctx->pc = 0x1413b8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1413bc:
    // 0x1413bc: 0x10000071
label_1413c0:
    if (ctx->pc == 0x1413C0u) {
        ctx->pc = 0x1413C0u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x1413C4u;
        goto label_1413c4;
    }
    ctx->pc = 0x1413BCu;
    {
        const bool branch_taken_0x1413bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1413C0u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x1413bc) {
            ctx->pc = 0x141584u;
            goto label_141584;
        }
    }
    ctx->pc = 0x1413C4u;
label_1413c4:
    // 0x1413c4: 0x600000a
label_1413c8:
    if (ctx->pc == 0x1413C8u) {
        ctx->pc = 0x1413CCu;
        goto label_1413cc;
    }
    ctx->pc = 0x1413C4u;
    {
        const bool branch_taken_0x1413c4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1413c4) {
            ctx->pc = 0x1413F0u;
            goto label_1413f0;
        }
    }
    ctx->pc = 0x1413CCu;
label_1413cc:
    // 0x1413cc: 0x1600001f
label_1413d0:
    if (ctx->pc == 0x1413D0u) {
        ctx->pc = 0x1413D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x1413D4u;
        goto label_1413d4;
    }
    ctx->pc = 0x1413CCu;
    {
        const bool branch_taken_0x1413cc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1413D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x1413cc) {
            ctx->pc = 0x14144Cu;
            goto label_14144c;
        }
    }
    ctx->pc = 0x1413D4u;
label_1413d4:
    // 0x1413d4: 0x1460001d
label_1413d8:
    if (ctx->pc == 0x1413D8u) {
        ctx->pc = 0x1413DCu;
        goto label_1413dc;
    }
    ctx->pc = 0x1413D4u;
    {
        const bool branch_taken_0x1413d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1413d4) {
            ctx->pc = 0x14144Cu;
            goto label_14144c;
        }
    }
    ctx->pc = 0x1413DCu;
label_1413dc:
    // 0x1413dc: 0x16103c
    ctx->pc = 0x1413dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_1413e0:
    // 0x1413e0: 0x2103f
    ctx->pc = 0x1413e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1413e4:
    // 0x1413e4: 0x30420001
    ctx->pc = 0x1413e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_1413e8:
    // 0x1413e8: 0x14400018
label_1413ec:
    if (ctx->pc == 0x1413ECu) {
        ctx->pc = 0x1413F0u;
        goto label_1413f0;
    }
    ctx->pc = 0x1413E8u;
    {
        const bool branch_taken_0x1413e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1413e8) {
            ctx->pc = 0x14144Cu;
            goto label_14144c;
        }
    }
    ctx->pc = 0x1413F0u;
label_1413f0:
    // 0x1413f0: 0x1a200014
label_1413f4:
    if (ctx->pc == 0x1413F4u) {
        ctx->pc = 0x1413F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x1413F8u;
        goto label_1413f8;
    }
    ctx->pc = 0x1413F0u;
    {
        const bool branch_taken_0x1413f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1413F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x1413f0) {
            ctx->pc = 0x141444u;
            goto label_141444;
        }
    }
    ctx->pc = 0x1413F8u;
label_1413f8:
    // 0x1413f8: 0x3c0202d
    ctx->pc = 0x1413f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1413fc:
    // 0x1413fc: 0xc050f2c
label_141400:
    if (ctx->pc == 0x141400u) {
        ctx->pc = 0x141400u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x141404u;
        goto label_141404;
    }
    ctx->pc = 0x1413FCu;
    SET_GPR_U32(ctx, 31, 0x141404u);
    ctx->pc = 0x141400u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x143cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141404u; }
        else if (ctx->pc != 0x141404u) { ctx->pc = 0x141404u; }
    }
    if (ctx->pc != 0x141404u) { return; }
    ctx->pc = 0x141404u;
label_141404:
    // 0x141404: 0xafa20048
    ctx->pc = 0x141404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_141408:
    // 0x141408: 0x8fa50054
    ctx->pc = 0x141408u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_14140c:
    // 0x14140c: 0xc050f8a
label_141410:
    if (ctx->pc == 0x141410u) {
        ctx->pc = 0x141410u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141414u;
        goto label_141414;
    }
    ctx->pc = 0x14140Cu;
    SET_GPR_U32(ctx, 31, 0x141414u);
    ctx->pc = 0x141410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x143e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141414u; }
        else if (ctx->pc != 0x141414u) { ctx->pc = 0x141414u; }
    }
    if (ctx->pc != 0x141414u) { return; }
    ctx->pc = 0x141414u;
label_141414:
    // 0x141414: 0x40882d
    ctx->pc = 0x141414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141418:
    // 0x141418: 0x5e200007
label_14141c:
    if (ctx->pc == 0x14141Cu) {
        ctx->pc = 0x14141Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x141420u;
        goto label_141420;
    }
    ctx->pc = 0x141418u;
    {
        const bool branch_taken_0x141418 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x141418) {
            ctx->pc = 0x14141Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x141438u;
            goto label_141438;
        }
    }
    ctx->pc = 0x141420u;
label_141420:
    // 0x141420: 0x56200058
label_141424:
    if (ctx->pc == 0x141424u) {
        ctx->pc = 0x141424u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x141428u;
        goto label_141428;
    }
    ctx->pc = 0x141420u;
    {
        const bool branch_taken_0x141420 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x141420) {
            ctx->pc = 0x141424u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x141584u;
            goto label_141584;
        }
    }
    ctx->pc = 0x141428u;
label_141428:
    // 0x141428: 0x32620001
    ctx->pc = 0x141428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_14142c:
    // 0x14142c: 0x50400055
label_141430:
    if (ctx->pc == 0x141430u) {
        ctx->pc = 0x141430u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x141434u;
        goto label_141434;
    }
    ctx->pc = 0x14142Cu;
    {
        const bool branch_taken_0x14142c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14142c) {
            ctx->pc = 0x141430u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x141584u;
            goto label_141584;
        }
    }
    ctx->pc = 0x141434u;
label_141434:
    // 0x141434: 0x26730001
    ctx->pc = 0x141434u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_141438:
    // 0x141438: 0x2402003a
    ctx->pc = 0x141438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
label_14143c:
    // 0x14143c: 0x12620008
label_141440:
    if (ctx->pc == 0x141440u) {
        ctx->pc = 0x141440u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x141444u;
        goto label_141444;
    }
    ctx->pc = 0x14143Cu;
    {
        const bool branch_taken_0x14143c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x141440u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x14143c) {
            ctx->pc = 0x141460u;
            goto label_141460;
        }
    }
    ctx->pc = 0x141444u;
label_141444:
    // 0x141444: 0x1000004f
label_141448:
    if (ctx->pc == 0x141448u) {
        ctx->pc = 0x141448u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x14144Cu;
        goto label_14144c;
    }
    ctx->pc = 0x141444u;
    {
        const bool branch_taken_0x141444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141448u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x141444) {
            ctx->pc = 0x141584u;
            goto label_141584;
        }
    }
    ctx->pc = 0x14144Cu;
label_14144c:
    // 0x14144c: 0x1a200009
label_141450:
    if (ctx->pc == 0x141450u) {
        ctx->pc = 0x141450u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x141454u;
        goto label_141454;
    }
    ctx->pc = 0x14144Cu;
    {
        const bool branch_taken_0x14144c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x141450u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x14144c) {
            ctx->pc = 0x141474u;
            goto label_141474;
        }
    }
    ctx->pc = 0x141454u;
label_141454:
    // 0x141454: 0x16620005
label_141458:
    if (ctx->pc == 0x141458u) {
        ctx->pc = 0x141458u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x14145Cu;
        goto label_14145c;
    }
    ctx->pc = 0x141454u;
    {
        const bool branch_taken_0x141454 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x141458u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x141454) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x14145Cu;
label_14145c:
    // 0x14145c: 0x24020039
    ctx->pc = 0x14145cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
label_141460:
    // 0x141460: 0xa2a20000
    ctx->pc = 0x141460u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_141464:
    // 0x141464: 0x1000002c
label_141468:
    if (ctx->pc == 0x141468u) {
        ctx->pc = 0x141468u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x14146Cu;
        goto label_14146c;
    }
    ctx->pc = 0x141464u;
    {
        const bool branch_taken_0x141464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141468u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x141464) {
            ctx->pc = 0x141518u;
            goto label_141518;
        }
    }
    ctx->pc = 0x14146Cu;
label_14146c:
    // 0x14146c: 0x10000045
label_141470:
    if (ctx->pc == 0x141470u) {
        ctx->pc = 0x141470u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x141474u;
        goto label_141474;
    }
    ctx->pc = 0x14146Cu;
    {
        const bool branch_taken_0x14146c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141470u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x14146c) {
            ctx->pc = 0x141584u;
            goto label_141584;
        }
    }
    ctx->pc = 0x141474u;
label_141474:
    // 0x141474: 0xa2b30000
    ctx->pc = 0x141474u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
label_141478:
    // 0x141478: 0x8fa40020
    ctx->pc = 0x141478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14147c:
    // 0x14147c: 0x1684ff8e
label_141480:
    if (ctx->pc == 0x141480u) {
        ctx->pc = 0x141480u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x141484u;
        goto label_141484;
    }
    ctx->pc = 0x14147Cu;
    {
        const bool branch_taken_0x14147c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 4));
        ctx->pc = 0x141480u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x14147c) {
            ctx->pc = 0x1412B8u;
            goto label_1412b8;
        }
    }
    ctx->pc = 0x141484u;
label_141484:
    // 0x141484: 0x10000015
label_141488:
    if (ctx->pc == 0x141488u) {
        ctx->pc = 0x141488u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x14148Cu;
        goto label_14148c;
    }
    ctx->pc = 0x141484u;
    {
        const bool branch_taken_0x141484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141488u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x141484) {
            ctx->pc = 0x1414DCu;
            goto label_1414dc;
        }
    }
    ctx->pc = 0x14148Cu;
label_14148c:
    // 0x14148c: 0x10000009
label_141490:
    if (ctx->pc == 0x141490u) {
        ctx->pc = 0x141490u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x141494u;
        goto label_141494;
    }
    ctx->pc = 0x14148Cu;
    {
        const bool branch_taken_0x14148c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141490u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x14148c) {
            ctx->pc = 0x1414B4u;
            goto label_1414b4;
        }
    }
    ctx->pc = 0x141494u;
label_141494:
    // 0x141494: 0x0
    ctx->pc = 0x141494u;
    // NOP
label_141498:
    // 0x141498: 0x8fa50048
    ctx->pc = 0x141498u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14149c:
    // 0x14149c: 0x3c0202d
    ctx->pc = 0x14149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1414a0:
    // 0x1414a0: 0x2406000a
    ctx->pc = 0x1414a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_1414a4:
    // 0x1414a4: 0xc050d68
label_1414a8:
    if (ctx->pc == 0x1414A8u) {
        ctx->pc = 0x1414A8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1414ACu;
        goto label_1414ac;
    }
    ctx->pc = 0x1414A4u;
    SET_GPR_U32(ctx, 31, 0x1414ACu);
    ctx->pc = 0x1414A8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414ACu; }
        else if (ctx->pc != 0x1414ACu) { ctx->pc = 0x1414ACu; }
    }
    if (ctx->pc != 0x1414ACu) { return; }
    ctx->pc = 0x1414ACu;
label_1414ac:
    // 0x1414ac: 0x26940001
    ctx->pc = 0x1414acu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1414b0:
    // 0x1414b0: 0xafa20048
    ctx->pc = 0x1414b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1414b4:
    // 0x1414b4: 0x8fa40048
    ctx->pc = 0x1414b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1414b8:
    // 0x1414b8: 0xc050090
label_1414bc:
    if (ctx->pc == 0x1414BCu) {
        ctx->pc = 0x1414BCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x1414C0u;
        goto label_1414c0;
    }
    ctx->pc = 0x1414B8u;
    SET_GPR_U32(ctx, 31, 0x1414C0u);
    ctx->pc = 0x1414BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x140240u;
    {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x140240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414C0u; }
        else if (ctx->pc != 0x1414C0u) { ctx->pc = 0x1414C0u; }
    }
    if (ctx->pc != 0x1414C0u) { return; }
    ctx->pc = 0x1414C0u;
label_1414c0:
    // 0x1414c0: 0x24530030
    ctx->pc = 0x1414c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 48));
label_1414c4:
    // 0x1414c4: 0x8fa30020
    ctx->pc = 0x1414c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1414c8:
    // 0x1414c8: 0xa2b30000
    ctx->pc = 0x1414c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
label_1414cc:
    // 0x1414cc: 0x283102a
    ctx->pc = 0x1414ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_1414d0:
    // 0x1414d0: 0x1440fff1
label_1414d4:
    if (ctx->pc == 0x1414D4u) {
        ctx->pc = 0x1414D4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x1414D8u;
        goto label_1414d8;
    }
    ctx->pc = 0x1414D0u;
    {
        const bool branch_taken_0x1414d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1414D4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x1414d0) {
            ctx->pc = 0x141498u;
            goto label_141498;
        }
    }
    ctx->pc = 0x1414D8u;
label_1414d8:
    // 0x1414d8: 0x8fa50048
    ctx->pc = 0x1414d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1414dc:
    // 0x1414dc: 0x3c0202d
    ctx->pc = 0x1414dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1414e0:
    // 0x1414e0: 0xc050f2c
label_1414e4:
    if (ctx->pc == 0x1414E4u) {
        ctx->pc = 0x1414E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1414E8u;
        goto label_1414e8;
    }
    ctx->pc = 0x1414E0u;
    SET_GPR_U32(ctx, 31, 0x1414E8u);
    ctx->pc = 0x1414E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x143cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414E8u; }
        else if (ctx->pc != 0x1414E8u) { ctx->pc = 0x1414E8u; }
    }
    if (ctx->pc != 0x1414E8u) { return; }
    ctx->pc = 0x1414E8u;
label_1414e8:
    // 0x1414e8: 0xafa20048
    ctx->pc = 0x1414e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1414ec:
    // 0x1414ec: 0x8fa50054
    ctx->pc = 0x1414ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1414f0:
    // 0x1414f0: 0xc050f8a
label_1414f4:
    if (ctx->pc == 0x1414F4u) {
        ctx->pc = 0x1414F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1414F8u;
        goto label_1414f8;
    }
    ctx->pc = 0x1414F0u;
    SET_GPR_U32(ctx, 31, 0x1414F8u);
    ctx->pc = 0x1414F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x143e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414F8u; }
        else if (ctx->pc != 0x1414F8u) { ctx->pc = 0x1414F8u; }
    }
    if (ctx->pc != 0x1414F8u) { return; }
    ctx->pc = 0x1414F8u;
label_1414f8:
    // 0x1414f8: 0x40802d
    ctx->pc = 0x1414f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1414fc:
    // 0x1414fc: 0x5e000007
label_141500:
    if (ctx->pc == 0x141500u) {
        ctx->pc = 0x141500u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x141504u;
        goto label_141504;
    }
    ctx->pc = 0x1414FCu;
    {
        const bool branch_taken_0x1414fc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1414fc) {
            ctx->pc = 0x141500u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x14151Cu;
            goto label_14151c;
        }
    }
    ctx->pc = 0x141504u;
label_141504:
    // 0x141504: 0x16000018
label_141508:
    if (ctx->pc == 0x141508u) {
        ctx->pc = 0x141508u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x14150Cu;
        goto label_14150c;
    }
    ctx->pc = 0x141504u;
    {
        const bool branch_taken_0x141504 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x141508u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x141504) {
            ctx->pc = 0x141568u;
            goto label_141568;
        }
    }
    ctx->pc = 0x14150Cu;
label_14150c:
    // 0x14150c: 0x32620001
    ctx->pc = 0x14150cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_141510:
    // 0x141510: 0x50400016
label_141514:
    if (ctx->pc == 0x141514u) {
        ctx->pc = 0x141514u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x141518u;
        goto label_141518;
    }
    ctx->pc = 0x141510u;
    {
        const bool branch_taken_0x141510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x141510) {
            ctx->pc = 0x141514u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x14156Cu;
            goto label_14156c;
        }
    }
    ctx->pc = 0x141518u;
label_141518:
    // 0x141518: 0x26b5ffff
    ctx->pc = 0x141518u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_14151c:
    // 0x14151c: 0x10000005
label_141520:
    if (ctx->pc == 0x141520u) {
        ctx->pc = 0x141520u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x141524u;
        goto label_141524;
    }
    ctx->pc = 0x14151Cu;
    {
        const bool branch_taken_0x14151c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141520u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x14151c) {
            ctx->pc = 0x141534u;
            goto label_141534;
        }
    }
    ctx->pc = 0x141524u;
label_141524:
    // 0x141524: 0x0
    ctx->pc = 0x141524u;
    // NOP
label_141528:
    // 0x141528: 0x8fa40058
    ctx->pc = 0x141528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_14152c:
    // 0x14152c: 0x12a40007
label_141530:
    if (ctx->pc == 0x141530u) {
        ctx->pc = 0x141530u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x141534u;
        goto label_141534;
    }
    ctx->pc = 0x14152Cu;
    {
        const bool branch_taken_0x14152c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 4));
        ctx->pc = 0x141530u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        if (branch_taken_0x14152c) {
            ctx->pc = 0x14154Cu;
            goto label_14154c;
        }
    }
    ctx->pc = 0x141534u;
label_141534:
    // 0x141534: 0x82a20000
    ctx->pc = 0x141534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_141538:
    // 0x141538: 0x1043fffb
label_14153c:
    if (ctx->pc == 0x14153Cu) {
        ctx->pc = 0x14153Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x141540u;
        goto label_141540;
    }
    ctx->pc = 0x141538u;
    {
        const bool branch_taken_0x141538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x14153Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x141538) {
            ctx->pc = 0x141528u;
            goto label_141528;
        }
    }
    ctx->pc = 0x141540u;
label_141540:
    // 0x141540: 0x24820001
    ctx->pc = 0x141540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_141544:
    // 0x141544: 0x1000000f
label_141548:
    if (ctx->pc == 0x141548u) {
        ctx->pc = 0x141548u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x14154Cu;
        goto label_14154c;
    }
    ctx->pc = 0x141544u;
    {
        const bool branch_taken_0x141544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141548u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x141544) {
            ctx->pc = 0x141584u;
            goto label_141584;
        }
    }
    ctx->pc = 0x14154Cu;
label_14154c:
    // 0x14154c: 0x8fa30058
    ctx->pc = 0x14154cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_141550:
    // 0x141550: 0x24020031
    ctx->pc = 0x141550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_141554:
    // 0x141554: 0x26f70001
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_141558:
    // 0x141558: 0x24750001
    ctx->pc = 0x141558u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
label_14155c:
    // 0x14155c: 0x1000000a
label_141560:
    if (ctx->pc == 0x141560u) {
        ctx->pc = 0x141560u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x141564u;
        goto label_141564;
    }
    ctx->pc = 0x14155Cu;
    {
        const bool branch_taken_0x14155c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141560u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x14155c) {
            ctx->pc = 0x141588u;
            goto label_141588;
        }
    }
    ctx->pc = 0x141564u;
label_141564:
    // 0x141564: 0x0
    ctx->pc = 0x141564u;
    // NOP
label_141568:
    // 0x141568: 0x26b5ffff
    ctx->pc = 0x141568u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_14156c:
    // 0x14156c: 0x82a20000
    ctx->pc = 0x14156cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_141570:
    // 0x141570: 0x0
    ctx->pc = 0x141570u;
    // NOP
label_141574:
    // 0x141574: 0x0
    ctx->pc = 0x141574u;
    // NOP
label_141578:
    // 0x141578: 0x0
    ctx->pc = 0x141578u;
    // NOP
label_14157c:
    // 0x14157c: 0x1043fffa
label_141580:
    if (ctx->pc == 0x141580u) {
        ctx->pc = 0x141584u;
        goto label_141584;
    }
    ctx->pc = 0x14157Cu;
    {
        const bool branch_taken_0x14157c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x14157c) {
            ctx->pc = 0x141568u;
            goto label_141568;
        }
    }
    ctx->pc = 0x141584u;
label_141584:
    // 0x141584: 0x26b50001
    ctx->pc = 0x141584u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_141588:
    // 0x141588: 0x8fa50054
    ctx->pc = 0x141588u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_14158c:
    // 0x14158c: 0xc050d5c
label_141590:
    if (ctx->pc == 0x141590u) {
        ctx->pc = 0x141590u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141594u;
        goto label_141594;
    }
    ctx->pc = 0x14158Cu;
    SET_GPR_U32(ctx, 31, 0x141594u);
    ctx->pc = 0x141590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141594u; }
        else if (ctx->pc != 0x141594u) { ctx->pc = 0x141594u; }
    }
    if (ctx->pc != 0x141594u) { return; }
    ctx->pc = 0x141594u;
label_141594:
    // 0x141594: 0x8fa40050
    ctx->pc = 0x141594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_141598:
    // 0x141598: 0x1080000c
label_14159c:
    if (ctx->pc == 0x14159Cu) {
        ctx->pc = 0x14159Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1415A0u;
        goto label_1415a0;
    }
    ctx->pc = 0x141598u;
    {
        const bool branch_taken_0x141598 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x14159Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        if (branch_taken_0x141598) {
            ctx->pc = 0x1415CCu;
            goto label_1415cc;
        }
    }
    ctx->pc = 0x1415A0u;
label_1415a0:
    // 0x1415a0: 0x10400006
label_1415a4:
    if (ctx->pc == 0x1415A4u) {
        ctx->pc = 0x1415A4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1415A8u;
        goto label_1415a8;
    }
    ctx->pc = 0x1415A0u;
    {
        const bool branch_taken_0x1415a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1415A4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1415a0) {
            ctx->pc = 0x1415BCu;
            goto label_1415bc;
        }
    }
    ctx->pc = 0x1415A8u;
label_1415a8:
    // 0x1415a8: 0x10440003
label_1415ac:
    if (ctx->pc == 0x1415ACu) {
        ctx->pc = 0x1415ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1415B0u;
        goto label_1415b0;
    }
    ctx->pc = 0x1415A8u;
    {
        const bool branch_taken_0x1415a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1415ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1415a8) {
            ctx->pc = 0x1415B8u;
            goto label_1415b8;
        }
    }
    ctx->pc = 0x1415B0u;
label_1415b0:
    // 0x1415b0: 0xc050d5c
label_1415b4:
    if (ctx->pc == 0x1415B4u) {
        ctx->pc = 0x1415B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1415B8u;
        goto label_1415b8;
    }
    ctx->pc = 0x1415B0u;
    SET_GPR_U32(ctx, 31, 0x1415B8u);
    ctx->pc = 0x1415B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415B8u; }
        else if (ctx->pc != 0x1415B8u) { ctx->pc = 0x1415B8u; }
    }
    if (ctx->pc != 0x1415B8u) { return; }
    ctx->pc = 0x1415B8u;
label_1415b8:
    // 0x1415b8: 0x8fa50050
    ctx->pc = 0x1415b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1415bc:
    // 0x1415bc: 0xc050d5c
label_1415c0:
    if (ctx->pc == 0x1415C0u) {
        ctx->pc = 0x1415C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1415C4u;
        goto label_1415c4;
    }
    ctx->pc = 0x1415BCu;
    SET_GPR_U32(ctx, 31, 0x1415C4u);
    ctx->pc = 0x1415C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415C4u; }
        else if (ctx->pc != 0x1415C4u) { ctx->pc = 0x1415C4u; }
    }
    if (ctx->pc != 0x1415C4u) { return; }
    ctx->pc = 0x1415C4u;
label_1415c4:
    // 0x1415c4: 0x10000002
label_1415c8:
    if (ctx->pc == 0x1415C8u) {
        ctx->pc = 0x1415C8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x1415CCu;
        goto label_1415cc;
    }
    ctx->pc = 0x1415C4u;
    {
        const bool branch_taken_0x1415c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1415C8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x1415c4) {
            ctx->pc = 0x1415D0u;
            goto label_1415d0;
        }
    }
    ctx->pc = 0x1415CCu;
label_1415cc:
    // 0x1415cc: 0x8fa50048
    ctx->pc = 0x1415ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1415d0:
    // 0x1415d0: 0xc050d5c
label_1415d4:
    if (ctx->pc == 0x1415D4u) {
        ctx->pc = 0x1415D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1415D8u;
        goto label_1415d8;
    }
    ctx->pc = 0x1415D0u;
    SET_GPR_U32(ctx, 31, 0x1415D8u);
    ctx->pc = 0x1415D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415D8u; }
        else if (ctx->pc != 0x1415D8u) { ctx->pc = 0x1415D8u; }
    }
    if (ctx->pc != 0x1415D8u) { return; }
    ctx->pc = 0x1415D8u;
label_1415d8:
    // 0x1415d8: 0xa2a00000
    ctx->pc = 0x1415d8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
label_1415dc:
    // 0x1415dc: 0x8fa30010
    ctx->pc = 0x1415dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1415e0:
    // 0x1415e0: 0xac770000
    ctx->pc = 0x1415e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_1415e4:
    // 0x1415e4: 0x8fa40014
    ctx->pc = 0x1415e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1415e8:
    // 0x1415e8: 0x54800001
label_1415ec:
    if (ctx->pc == 0x1415ECu) {
        ctx->pc = 0x1415ECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x1415F0u;
        goto label_1415f0;
    }
    ctx->pc = 0x1415E8u;
    {
        const bool branch_taken_0x1415e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1415e8) {
            ctx->pc = 0x1415ECu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->pc = 0x1415F0u;
            goto label_1415f0;
        }
    }
    ctx->pc = 0x1415F0u;
label_1415f0:
    // 0x1415f0: 0x8fa20058
    ctx->pc = 0x1415f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1415f4:
    // 0x1415f4: 0xdfbf00f0
    ctx->pc = 0x1415f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1415f8:
    // 0x1415f8: 0xdfbe00e0
    ctx->pc = 0x1415f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1415fc:
    // 0x1415fc: 0xdfb700d0
    ctx->pc = 0x1415fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_141600:
    // 0x141600: 0xdfb600c0
    ctx->pc = 0x141600u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_141604:
    // 0x141604: 0xdfb500b0
    ctx->pc = 0x141604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_141608:
    // 0x141608: 0xdfb400a0
    ctx->pc = 0x141608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_14160c:
    // 0x14160c: 0xdfb30090
    ctx->pc = 0x14160cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_141610:
    // 0x141610: 0xdfb20080
    ctx->pc = 0x141610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_141614:
    // 0x141614: 0xdfb10070
    ctx->pc = 0x141614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_141618:
    // 0x141618: 0xdfb00060
    ctx->pc = 0x141618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_14161c:
    // 0x14161c: 0x3e00008
label_141620:
    if (ctx->pc == 0x141620u) {
        ctx->pc = 0x141620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x141624u;
        goto label_fallthrough_0x14161c;
    }
    ctx->pc = 0x14161Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140458u: goto label_140458;
            case 0x14045Cu: goto label_14045c;
            case 0x140460u: goto label_140460;
            case 0x140464u: goto label_140464;
            case 0x140468u: goto label_140468;
            case 0x14046Cu: goto label_14046c;
            case 0x140470u: goto label_140470;
            case 0x140474u: goto label_140474;
            case 0x140478u: goto label_140478;
            case 0x14047Cu: goto label_14047c;
            case 0x140480u: goto label_140480;
            case 0x140484u: goto label_140484;
            case 0x140488u: goto label_140488;
            case 0x14048Cu: goto label_14048c;
            case 0x140490u: goto label_140490;
            case 0x140494u: goto label_140494;
            case 0x140498u: goto label_140498;
            case 0x14049Cu: goto label_14049c;
            case 0x1404A0u: goto label_1404a0;
            case 0x1404A4u: goto label_1404a4;
            case 0x1404A8u: goto label_1404a8;
            case 0x1404ACu: goto label_1404ac;
            case 0x1404B0u: goto label_1404b0;
            case 0x1404B4u: goto label_1404b4;
            case 0x1404B8u: goto label_1404b8;
            case 0x1404BCu: goto label_1404bc;
            case 0x1404C0u: goto label_1404c0;
            case 0x1404C4u: goto label_1404c4;
            case 0x1404C8u: goto label_1404c8;
            case 0x1404CCu: goto label_1404cc;
            case 0x1404D0u: goto label_1404d0;
            case 0x1404D4u: goto label_1404d4;
            case 0x1404D8u: goto label_1404d8;
            case 0x1404DCu: goto label_1404dc;
            case 0x1404E0u: goto label_1404e0;
            case 0x1404E4u: goto label_1404e4;
            case 0x1404E8u: goto label_1404e8;
            case 0x1404ECu: goto label_1404ec;
            case 0x1404F0u: goto label_1404f0;
            case 0x1404F4u: goto label_1404f4;
            case 0x1404F8u: goto label_1404f8;
            case 0x1404FCu: goto label_1404fc;
            case 0x140500u: goto label_140500;
            case 0x140504u: goto label_140504;
            case 0x140508u: goto label_140508;
            case 0x14050Cu: goto label_14050c;
            case 0x140510u: goto label_140510;
            case 0x140514u: goto label_140514;
            case 0x140518u: goto label_140518;
            case 0x14051Cu: goto label_14051c;
            case 0x140520u: goto label_140520;
            case 0x140524u: goto label_140524;
            case 0x140528u: goto label_140528;
            case 0x14052Cu: goto label_14052c;
            case 0x140530u: goto label_140530;
            case 0x140534u: goto label_140534;
            case 0x140538u: goto label_140538;
            case 0x14053Cu: goto label_14053c;
            case 0x140540u: goto label_140540;
            case 0x140544u: goto label_140544;
            case 0x140548u: goto label_140548;
            case 0x14054Cu: goto label_14054c;
            case 0x140550u: goto label_140550;
            case 0x140554u: goto label_140554;
            case 0x140558u: goto label_140558;
            case 0x14055Cu: goto label_14055c;
            case 0x140560u: goto label_140560;
            case 0x140564u: goto label_140564;
            case 0x140568u: goto label_140568;
            case 0x14056Cu: goto label_14056c;
            case 0x140570u: goto label_140570;
            case 0x140574u: goto label_140574;
            case 0x140578u: goto label_140578;
            case 0x14057Cu: goto label_14057c;
            case 0x140580u: goto label_140580;
            case 0x140584u: goto label_140584;
            case 0x140588u: goto label_140588;
            case 0x14058Cu: goto label_14058c;
            case 0x140590u: goto label_140590;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            case 0x14059Cu: goto label_14059c;
            case 0x1405A0u: goto label_1405a0;
            case 0x1405A4u: goto label_1405a4;
            case 0x1405A8u: goto label_1405a8;
            case 0x1405ACu: goto label_1405ac;
            case 0x1405B0u: goto label_1405b0;
            case 0x1405B4u: goto label_1405b4;
            case 0x1405B8u: goto label_1405b8;
            case 0x1405BCu: goto label_1405bc;
            case 0x1405C0u: goto label_1405c0;
            case 0x1405C4u: goto label_1405c4;
            case 0x1405C8u: goto label_1405c8;
            case 0x1405CCu: goto label_1405cc;
            case 0x1405D0u: goto label_1405d0;
            case 0x1405D4u: goto label_1405d4;
            case 0x1405D8u: goto label_1405d8;
            case 0x1405DCu: goto label_1405dc;
            case 0x1405E0u: goto label_1405e0;
            case 0x1405E4u: goto label_1405e4;
            case 0x1405E8u: goto label_1405e8;
            case 0x1405ECu: goto label_1405ec;
            case 0x1405F0u: goto label_1405f0;
            case 0x1405F4u: goto label_1405f4;
            case 0x1405F8u: goto label_1405f8;
            case 0x1405FCu: goto label_1405fc;
            case 0x140600u: goto label_140600;
            case 0x140604u: goto label_140604;
            case 0x140608u: goto label_140608;
            case 0x14060Cu: goto label_14060c;
            case 0x140610u: goto label_140610;
            case 0x140614u: goto label_140614;
            case 0x140618u: goto label_140618;
            case 0x14061Cu: goto label_14061c;
            case 0x140620u: goto label_140620;
            case 0x140624u: goto label_140624;
            case 0x140628u: goto label_140628;
            case 0x14062Cu: goto label_14062c;
            case 0x140630u: goto label_140630;
            case 0x140634u: goto label_140634;
            case 0x140638u: goto label_140638;
            case 0x14063Cu: goto label_14063c;
            case 0x140640u: goto label_140640;
            case 0x140644u: goto label_140644;
            case 0x140648u: goto label_140648;
            case 0x14064Cu: goto label_14064c;
            case 0x140650u: goto label_140650;
            case 0x140654u: goto label_140654;
            case 0x140658u: goto label_140658;
            case 0x14065Cu: goto label_14065c;
            case 0x140660u: goto label_140660;
            case 0x140664u: goto label_140664;
            case 0x140668u: goto label_140668;
            case 0x14066Cu: goto label_14066c;
            case 0x140670u: goto label_140670;
            case 0x140674u: goto label_140674;
            case 0x140678u: goto label_140678;
            case 0x14067Cu: goto label_14067c;
            case 0x140680u: goto label_140680;
            case 0x140684u: goto label_140684;
            case 0x140688u: goto label_140688;
            case 0x14068Cu: goto label_14068c;
            case 0x140690u: goto label_140690;
            case 0x140694u: goto label_140694;
            case 0x140698u: goto label_140698;
            case 0x14069Cu: goto label_14069c;
            case 0x1406A0u: goto label_1406a0;
            case 0x1406A4u: goto label_1406a4;
            case 0x1406A8u: goto label_1406a8;
            case 0x1406ACu: goto label_1406ac;
            case 0x1406B0u: goto label_1406b0;
            case 0x1406B4u: goto label_1406b4;
            case 0x1406B8u: goto label_1406b8;
            case 0x1406BCu: goto label_1406bc;
            case 0x1406C0u: goto label_1406c0;
            case 0x1406C4u: goto label_1406c4;
            case 0x1406C8u: goto label_1406c8;
            case 0x1406CCu: goto label_1406cc;
            case 0x1406D0u: goto label_1406d0;
            case 0x1406D4u: goto label_1406d4;
            case 0x1406D8u: goto label_1406d8;
            case 0x1406DCu: goto label_1406dc;
            case 0x1406E0u: goto label_1406e0;
            case 0x1406E4u: goto label_1406e4;
            case 0x1406E8u: goto label_1406e8;
            case 0x1406ECu: goto label_1406ec;
            case 0x1406F0u: goto label_1406f0;
            case 0x1406F4u: goto label_1406f4;
            case 0x1406F8u: goto label_1406f8;
            case 0x1406FCu: goto label_1406fc;
            case 0x140700u: goto label_140700;
            case 0x140704u: goto label_140704;
            case 0x140708u: goto label_140708;
            case 0x14070Cu: goto label_14070c;
            case 0x140710u: goto label_140710;
            case 0x140714u: goto label_140714;
            case 0x140718u: goto label_140718;
            case 0x14071Cu: goto label_14071c;
            case 0x140720u: goto label_140720;
            case 0x140724u: goto label_140724;
            case 0x140728u: goto label_140728;
            case 0x14072Cu: goto label_14072c;
            case 0x140730u: goto label_140730;
            case 0x140734u: goto label_140734;
            case 0x140738u: goto label_140738;
            case 0x14073Cu: goto label_14073c;
            case 0x140740u: goto label_140740;
            case 0x140744u: goto label_140744;
            case 0x140748u: goto label_140748;
            case 0x14074Cu: goto label_14074c;
            case 0x140750u: goto label_140750;
            case 0x140754u: goto label_140754;
            case 0x140758u: goto label_140758;
            case 0x14075Cu: goto label_14075c;
            case 0x140760u: goto label_140760;
            case 0x140764u: goto label_140764;
            case 0x140768u: goto label_140768;
            case 0x14076Cu: goto label_14076c;
            case 0x140770u: goto label_140770;
            case 0x140774u: goto label_140774;
            case 0x140778u: goto label_140778;
            case 0x14077Cu: goto label_14077c;
            case 0x140780u: goto label_140780;
            case 0x140784u: goto label_140784;
            case 0x140788u: goto label_140788;
            case 0x14078Cu: goto label_14078c;
            case 0x140790u: goto label_140790;
            case 0x140794u: goto label_140794;
            case 0x140798u: goto label_140798;
            case 0x14079Cu: goto label_14079c;
            case 0x1407A0u: goto label_1407a0;
            case 0x1407A4u: goto label_1407a4;
            case 0x1407A8u: goto label_1407a8;
            case 0x1407ACu: goto label_1407ac;
            case 0x1407B0u: goto label_1407b0;
            case 0x1407B4u: goto label_1407b4;
            case 0x1407B8u: goto label_1407b8;
            case 0x1407BCu: goto label_1407bc;
            case 0x1407C0u: goto label_1407c0;
            case 0x1407C4u: goto label_1407c4;
            case 0x1407C8u: goto label_1407c8;
            case 0x1407CCu: goto label_1407cc;
            case 0x1407D0u: goto label_1407d0;
            case 0x1407D4u: goto label_1407d4;
            case 0x1407D8u: goto label_1407d8;
            case 0x1407DCu: goto label_1407dc;
            case 0x1407E0u: goto label_1407e0;
            case 0x1407E4u: goto label_1407e4;
            case 0x1407E8u: goto label_1407e8;
            case 0x1407ECu: goto label_1407ec;
            case 0x1407F0u: goto label_1407f0;
            case 0x1407F4u: goto label_1407f4;
            case 0x1407F8u: goto label_1407f8;
            case 0x1407FCu: goto label_1407fc;
            case 0x140800u: goto label_140800;
            case 0x140804u: goto label_140804;
            case 0x140808u: goto label_140808;
            case 0x14080Cu: goto label_14080c;
            case 0x140810u: goto label_140810;
            case 0x140814u: goto label_140814;
            case 0x140818u: goto label_140818;
            case 0x14081Cu: goto label_14081c;
            case 0x140820u: goto label_140820;
            case 0x140824u: goto label_140824;
            case 0x140828u: goto label_140828;
            case 0x14082Cu: goto label_14082c;
            case 0x140830u: goto label_140830;
            case 0x140834u: goto label_140834;
            case 0x140838u: goto label_140838;
            case 0x14083Cu: goto label_14083c;
            case 0x140840u: goto label_140840;
            case 0x140844u: goto label_140844;
            case 0x140848u: goto label_140848;
            case 0x14084Cu: goto label_14084c;
            case 0x140850u: goto label_140850;
            case 0x140854u: goto label_140854;
            case 0x140858u: goto label_140858;
            case 0x14085Cu: goto label_14085c;
            case 0x140860u: goto label_140860;
            case 0x140864u: goto label_140864;
            case 0x140868u: goto label_140868;
            case 0x14086Cu: goto label_14086c;
            case 0x140870u: goto label_140870;
            case 0x140874u: goto label_140874;
            case 0x140878u: goto label_140878;
            case 0x14087Cu: goto label_14087c;
            case 0x140880u: goto label_140880;
            case 0x140884u: goto label_140884;
            case 0x140888u: goto label_140888;
            case 0x14088Cu: goto label_14088c;
            case 0x140890u: goto label_140890;
            case 0x140894u: goto label_140894;
            case 0x140898u: goto label_140898;
            case 0x14089Cu: goto label_14089c;
            case 0x1408A0u: goto label_1408a0;
            case 0x1408A4u: goto label_1408a4;
            case 0x1408A8u: goto label_1408a8;
            case 0x1408ACu: goto label_1408ac;
            case 0x1408B0u: goto label_1408b0;
            case 0x1408B4u: goto label_1408b4;
            case 0x1408B8u: goto label_1408b8;
            case 0x1408BCu: goto label_1408bc;
            case 0x1408C0u: goto label_1408c0;
            case 0x1408C4u: goto label_1408c4;
            case 0x1408C8u: goto label_1408c8;
            case 0x1408CCu: goto label_1408cc;
            case 0x1408D0u: goto label_1408d0;
            case 0x1408D4u: goto label_1408d4;
            case 0x1408D8u: goto label_1408d8;
            case 0x1408DCu: goto label_1408dc;
            case 0x1408E0u: goto label_1408e0;
            case 0x1408E4u: goto label_1408e4;
            case 0x1408E8u: goto label_1408e8;
            case 0x1408ECu: goto label_1408ec;
            case 0x1408F0u: goto label_1408f0;
            case 0x1408F4u: goto label_1408f4;
            case 0x1408F8u: goto label_1408f8;
            case 0x1408FCu: goto label_1408fc;
            case 0x140900u: goto label_140900;
            case 0x140904u: goto label_140904;
            case 0x140908u: goto label_140908;
            case 0x14090Cu: goto label_14090c;
            case 0x140910u: goto label_140910;
            case 0x140914u: goto label_140914;
            case 0x140918u: goto label_140918;
            case 0x14091Cu: goto label_14091c;
            case 0x140920u: goto label_140920;
            case 0x140924u: goto label_140924;
            case 0x140928u: goto label_140928;
            case 0x14092Cu: goto label_14092c;
            case 0x140930u: goto label_140930;
            case 0x140934u: goto label_140934;
            case 0x140938u: goto label_140938;
            case 0x14093Cu: goto label_14093c;
            case 0x140940u: goto label_140940;
            case 0x140944u: goto label_140944;
            case 0x140948u: goto label_140948;
            case 0x14094Cu: goto label_14094c;
            case 0x140950u: goto label_140950;
            case 0x140954u: goto label_140954;
            case 0x140958u: goto label_140958;
            case 0x14095Cu: goto label_14095c;
            case 0x140960u: goto label_140960;
            case 0x140964u: goto label_140964;
            case 0x140968u: goto label_140968;
            case 0x14096Cu: goto label_14096c;
            case 0x140970u: goto label_140970;
            case 0x140974u: goto label_140974;
            case 0x140978u: goto label_140978;
            case 0x14097Cu: goto label_14097c;
            case 0x140980u: goto label_140980;
            case 0x140984u: goto label_140984;
            case 0x140988u: goto label_140988;
            case 0x14098Cu: goto label_14098c;
            case 0x140990u: goto label_140990;
            case 0x140994u: goto label_140994;
            case 0x140998u: goto label_140998;
            case 0x14099Cu: goto label_14099c;
            case 0x1409A0u: goto label_1409a0;
            case 0x1409A4u: goto label_1409a4;
            case 0x1409A8u: goto label_1409a8;
            case 0x1409ACu: goto label_1409ac;
            case 0x1409B0u: goto label_1409b0;
            case 0x1409B4u: goto label_1409b4;
            case 0x1409B8u: goto label_1409b8;
            case 0x1409BCu: goto label_1409bc;
            case 0x1409C0u: goto label_1409c0;
            case 0x1409C4u: goto label_1409c4;
            case 0x1409C8u: goto label_1409c8;
            case 0x1409CCu: goto label_1409cc;
            case 0x1409D0u: goto label_1409d0;
            case 0x1409D4u: goto label_1409d4;
            case 0x1409D8u: goto label_1409d8;
            case 0x1409DCu: goto label_1409dc;
            case 0x1409E0u: goto label_1409e0;
            case 0x1409E4u: goto label_1409e4;
            case 0x1409E8u: goto label_1409e8;
            case 0x1409ECu: goto label_1409ec;
            case 0x1409F0u: goto label_1409f0;
            case 0x1409F4u: goto label_1409f4;
            case 0x1409F8u: goto label_1409f8;
            case 0x1409FCu: goto label_1409fc;
            case 0x140A00u: goto label_140a00;
            case 0x140A04u: goto label_140a04;
            case 0x140A08u: goto label_140a08;
            case 0x140A0Cu: goto label_140a0c;
            case 0x140A10u: goto label_140a10;
            case 0x140A14u: goto label_140a14;
            case 0x140A18u: goto label_140a18;
            case 0x140A1Cu: goto label_140a1c;
            case 0x140A20u: goto label_140a20;
            case 0x140A24u: goto label_140a24;
            case 0x140A28u: goto label_140a28;
            case 0x140A2Cu: goto label_140a2c;
            case 0x140A30u: goto label_140a30;
            case 0x140A34u: goto label_140a34;
            case 0x140A38u: goto label_140a38;
            case 0x140A3Cu: goto label_140a3c;
            case 0x140A40u: goto label_140a40;
            case 0x140A44u: goto label_140a44;
            case 0x140A48u: goto label_140a48;
            case 0x140A4Cu: goto label_140a4c;
            case 0x140A50u: goto label_140a50;
            case 0x140A54u: goto label_140a54;
            case 0x140A58u: goto label_140a58;
            case 0x140A5Cu: goto label_140a5c;
            case 0x140A60u: goto label_140a60;
            case 0x140A64u: goto label_140a64;
            case 0x140A68u: goto label_140a68;
            case 0x140A6Cu: goto label_140a6c;
            case 0x140A70u: goto label_140a70;
            case 0x140A74u: goto label_140a74;
            case 0x140A78u: goto label_140a78;
            case 0x140A7Cu: goto label_140a7c;
            case 0x140A80u: goto label_140a80;
            case 0x140A84u: goto label_140a84;
            case 0x140A88u: goto label_140a88;
            case 0x140A8Cu: goto label_140a8c;
            case 0x140A90u: goto label_140a90;
            case 0x140A94u: goto label_140a94;
            case 0x140A98u: goto label_140a98;
            case 0x140A9Cu: goto label_140a9c;
            case 0x140AA0u: goto label_140aa0;
            case 0x140AA4u: goto label_140aa4;
            case 0x140AA8u: goto label_140aa8;
            case 0x140AACu: goto label_140aac;
            case 0x140AB0u: goto label_140ab0;
            case 0x140AB4u: goto label_140ab4;
            case 0x140AB8u: goto label_140ab8;
            case 0x140ABCu: goto label_140abc;
            case 0x140AC0u: goto label_140ac0;
            case 0x140AC4u: goto label_140ac4;
            case 0x140AC8u: goto label_140ac8;
            case 0x140ACCu: goto label_140acc;
            case 0x140AD0u: goto label_140ad0;
            case 0x140AD4u: goto label_140ad4;
            case 0x140AD8u: goto label_140ad8;
            case 0x140ADCu: goto label_140adc;
            case 0x140AE0u: goto label_140ae0;
            case 0x140AE4u: goto label_140ae4;
            case 0x140AE8u: goto label_140ae8;
            case 0x140AECu: goto label_140aec;
            case 0x140AF0u: goto label_140af0;
            case 0x140AF4u: goto label_140af4;
            case 0x140AF8u: goto label_140af8;
            case 0x140AFCu: goto label_140afc;
            case 0x140B00u: goto label_140b00;
            case 0x140B04u: goto label_140b04;
            case 0x140B08u: goto label_140b08;
            case 0x140B0Cu: goto label_140b0c;
            case 0x140B10u: goto label_140b10;
            case 0x140B14u: goto label_140b14;
            case 0x140B18u: goto label_140b18;
            case 0x140B1Cu: goto label_140b1c;
            case 0x140B20u: goto label_140b20;
            case 0x140B24u: goto label_140b24;
            case 0x140B28u: goto label_140b28;
            case 0x140B2Cu: goto label_140b2c;
            case 0x140B30u: goto label_140b30;
            case 0x140B34u: goto label_140b34;
            case 0x140B38u: goto label_140b38;
            case 0x140B3Cu: goto label_140b3c;
            case 0x140B40u: goto label_140b40;
            case 0x140B44u: goto label_140b44;
            case 0x140B48u: goto label_140b48;
            case 0x140B4Cu: goto label_140b4c;
            case 0x140B50u: goto label_140b50;
            case 0x140B54u: goto label_140b54;
            case 0x140B58u: goto label_140b58;
            case 0x140B5Cu: goto label_140b5c;
            case 0x140B60u: goto label_140b60;
            case 0x140B64u: goto label_140b64;
            case 0x140B68u: goto label_140b68;
            case 0x140B6Cu: goto label_140b6c;
            case 0x140B70u: goto label_140b70;
            case 0x140B74u: goto label_140b74;
            case 0x140B78u: goto label_140b78;
            case 0x140B7Cu: goto label_140b7c;
            case 0x140B80u: goto label_140b80;
            case 0x140B84u: goto label_140b84;
            case 0x140B88u: goto label_140b88;
            case 0x140B8Cu: goto label_140b8c;
            case 0x140B90u: goto label_140b90;
            case 0x140B94u: goto label_140b94;
            case 0x140B98u: goto label_140b98;
            case 0x140B9Cu: goto label_140b9c;
            case 0x140BA0u: goto label_140ba0;
            case 0x140BA4u: goto label_140ba4;
            case 0x140BA8u: goto label_140ba8;
            case 0x140BACu: goto label_140bac;
            case 0x140BB0u: goto label_140bb0;
            case 0x140BB4u: goto label_140bb4;
            case 0x140BB8u: goto label_140bb8;
            case 0x140BBCu: goto label_140bbc;
            case 0x140BC0u: goto label_140bc0;
            case 0x140BC4u: goto label_140bc4;
            case 0x140BC8u: goto label_140bc8;
            case 0x140BCCu: goto label_140bcc;
            case 0x140BD0u: goto label_140bd0;
            case 0x140BD4u: goto label_140bd4;
            case 0x140BD8u: goto label_140bd8;
            case 0x140BDCu: goto label_140bdc;
            case 0x140BE0u: goto label_140be0;
            case 0x140BE4u: goto label_140be4;
            case 0x140BE8u: goto label_140be8;
            case 0x140BECu: goto label_140bec;
            case 0x140BF0u: goto label_140bf0;
            case 0x140BF4u: goto label_140bf4;
            case 0x140BF8u: goto label_140bf8;
            case 0x140BFCu: goto label_140bfc;
            case 0x140C00u: goto label_140c00;
            case 0x140C04u: goto label_140c04;
            case 0x140C08u: goto label_140c08;
            case 0x140C0Cu: goto label_140c0c;
            case 0x140C10u: goto label_140c10;
            case 0x140C14u: goto label_140c14;
            case 0x140C18u: goto label_140c18;
            case 0x140C1Cu: goto label_140c1c;
            case 0x140C20u: goto label_140c20;
            case 0x140C24u: goto label_140c24;
            case 0x140C28u: goto label_140c28;
            case 0x140C2Cu: goto label_140c2c;
            case 0x140C30u: goto label_140c30;
            case 0x140C34u: goto label_140c34;
            case 0x140C38u: goto label_140c38;
            case 0x140C3Cu: goto label_140c3c;
            case 0x140C40u: goto label_140c40;
            case 0x140C44u: goto label_140c44;
            case 0x140C48u: goto label_140c48;
            case 0x140C4Cu: goto label_140c4c;
            case 0x140C50u: goto label_140c50;
            case 0x140C54u: goto label_140c54;
            case 0x140C58u: goto label_140c58;
            case 0x140C5Cu: goto label_140c5c;
            case 0x140C60u: goto label_140c60;
            case 0x140C64u: goto label_140c64;
            case 0x140C68u: goto label_140c68;
            case 0x140C6Cu: goto label_140c6c;
            case 0x140C70u: goto label_140c70;
            case 0x140C74u: goto label_140c74;
            case 0x140C78u: goto label_140c78;
            case 0x140C7Cu: goto label_140c7c;
            case 0x140C80u: goto label_140c80;
            case 0x140C84u: goto label_140c84;
            case 0x140C88u: goto label_140c88;
            case 0x140C8Cu: goto label_140c8c;
            case 0x140C90u: goto label_140c90;
            case 0x140C94u: goto label_140c94;
            case 0x140C98u: goto label_140c98;
            case 0x140C9Cu: goto label_140c9c;
            case 0x140CA0u: goto label_140ca0;
            case 0x140CA4u: goto label_140ca4;
            case 0x140CA8u: goto label_140ca8;
            case 0x140CACu: goto label_140cac;
            case 0x140CB0u: goto label_140cb0;
            case 0x140CB4u: goto label_140cb4;
            case 0x140CB8u: goto label_140cb8;
            case 0x140CBCu: goto label_140cbc;
            case 0x140CC0u: goto label_140cc0;
            case 0x140CC4u: goto label_140cc4;
            case 0x140CC8u: goto label_140cc8;
            case 0x140CCCu: goto label_140ccc;
            case 0x140CD0u: goto label_140cd0;
            case 0x140CD4u: goto label_140cd4;
            case 0x140CD8u: goto label_140cd8;
            case 0x140CDCu: goto label_140cdc;
            case 0x140CE0u: goto label_140ce0;
            case 0x140CE4u: goto label_140ce4;
            case 0x140CE8u: goto label_140ce8;
            case 0x140CECu: goto label_140cec;
            case 0x140CF0u: goto label_140cf0;
            case 0x140CF4u: goto label_140cf4;
            case 0x140CF8u: goto label_140cf8;
            case 0x140CFCu: goto label_140cfc;
            case 0x140D00u: goto label_140d00;
            case 0x140D04u: goto label_140d04;
            case 0x140D08u: goto label_140d08;
            case 0x140D0Cu: goto label_140d0c;
            case 0x140D10u: goto label_140d10;
            case 0x140D14u: goto label_140d14;
            case 0x140D18u: goto label_140d18;
            case 0x140D1Cu: goto label_140d1c;
            case 0x140D20u: goto label_140d20;
            case 0x140D24u: goto label_140d24;
            case 0x140D28u: goto label_140d28;
            case 0x140D2Cu: goto label_140d2c;
            case 0x140D30u: goto label_140d30;
            case 0x140D34u: goto label_140d34;
            case 0x140D38u: goto label_140d38;
            case 0x140D3Cu: goto label_140d3c;
            case 0x140D40u: goto label_140d40;
            case 0x140D44u: goto label_140d44;
            case 0x140D48u: goto label_140d48;
            case 0x140D4Cu: goto label_140d4c;
            case 0x140D50u: goto label_140d50;
            case 0x140D54u: goto label_140d54;
            case 0x140D58u: goto label_140d58;
            case 0x140D5Cu: goto label_140d5c;
            case 0x140D60u: goto label_140d60;
            case 0x140D64u: goto label_140d64;
            case 0x140D68u: goto label_140d68;
            case 0x140D6Cu: goto label_140d6c;
            case 0x140D70u: goto label_140d70;
            case 0x140D74u: goto label_140d74;
            case 0x140D78u: goto label_140d78;
            case 0x140D7Cu: goto label_140d7c;
            case 0x140D80u: goto label_140d80;
            case 0x140D84u: goto label_140d84;
            case 0x140D88u: goto label_140d88;
            case 0x140D8Cu: goto label_140d8c;
            case 0x140D90u: goto label_140d90;
            case 0x140D94u: goto label_140d94;
            case 0x140D98u: goto label_140d98;
            case 0x140D9Cu: goto label_140d9c;
            case 0x140DA0u: goto label_140da0;
            case 0x140DA4u: goto label_140da4;
            case 0x140DA8u: goto label_140da8;
            case 0x140DACu: goto label_140dac;
            case 0x140DB0u: goto label_140db0;
            case 0x140DB4u: goto label_140db4;
            case 0x140DB8u: goto label_140db8;
            case 0x140DBCu: goto label_140dbc;
            case 0x140DC0u: goto label_140dc0;
            case 0x140DC4u: goto label_140dc4;
            case 0x140DC8u: goto label_140dc8;
            case 0x140DCCu: goto label_140dcc;
            case 0x140DD0u: goto label_140dd0;
            case 0x140DD4u: goto label_140dd4;
            case 0x140DD8u: goto label_140dd8;
            case 0x140DDCu: goto label_140ddc;
            case 0x140DE0u: goto label_140de0;
            case 0x140DE4u: goto label_140de4;
            case 0x140DE8u: goto label_140de8;
            case 0x140DECu: goto label_140dec;
            case 0x140DF0u: goto label_140df0;
            case 0x140DF4u: goto label_140df4;
            case 0x140DF8u: goto label_140df8;
            case 0x140DFCu: goto label_140dfc;
            case 0x140E00u: goto label_140e00;
            case 0x140E04u: goto label_140e04;
            case 0x140E08u: goto label_140e08;
            case 0x140E0Cu: goto label_140e0c;
            case 0x140E10u: goto label_140e10;
            case 0x140E14u: goto label_140e14;
            case 0x140E18u: goto label_140e18;
            case 0x140E1Cu: goto label_140e1c;
            case 0x140E20u: goto label_140e20;
            case 0x140E24u: goto label_140e24;
            case 0x140E28u: goto label_140e28;
            case 0x140E2Cu: goto label_140e2c;
            case 0x140E30u: goto label_140e30;
            case 0x140E34u: goto label_140e34;
            case 0x140E38u: goto label_140e38;
            case 0x140E3Cu: goto label_140e3c;
            case 0x140E40u: goto label_140e40;
            case 0x140E44u: goto label_140e44;
            case 0x140E48u: goto label_140e48;
            case 0x140E4Cu: goto label_140e4c;
            case 0x140E50u: goto label_140e50;
            case 0x140E54u: goto label_140e54;
            case 0x140E58u: goto label_140e58;
            case 0x140E5Cu: goto label_140e5c;
            case 0x140E60u: goto label_140e60;
            case 0x140E64u: goto label_140e64;
            case 0x140E68u: goto label_140e68;
            case 0x140E6Cu: goto label_140e6c;
            case 0x140E70u: goto label_140e70;
            case 0x140E74u: goto label_140e74;
            case 0x140E78u: goto label_140e78;
            case 0x140E7Cu: goto label_140e7c;
            case 0x140E80u: goto label_140e80;
            case 0x140E84u: goto label_140e84;
            case 0x140E88u: goto label_140e88;
            case 0x140E8Cu: goto label_140e8c;
            case 0x140E90u: goto label_140e90;
            case 0x140E94u: goto label_140e94;
            case 0x140E98u: goto label_140e98;
            case 0x140E9Cu: goto label_140e9c;
            case 0x140EA0u: goto label_140ea0;
            case 0x140EA4u: goto label_140ea4;
            case 0x140EA8u: goto label_140ea8;
            case 0x140EACu: goto label_140eac;
            case 0x140EB0u: goto label_140eb0;
            case 0x140EB4u: goto label_140eb4;
            case 0x140EB8u: goto label_140eb8;
            case 0x140EBCu: goto label_140ebc;
            case 0x140EC0u: goto label_140ec0;
            case 0x140EC4u: goto label_140ec4;
            case 0x140EC8u: goto label_140ec8;
            case 0x140ECCu: goto label_140ecc;
            case 0x140ED0u: goto label_140ed0;
            case 0x140ED4u: goto label_140ed4;
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            case 0x141268u: goto label_141268;
            case 0x14126Cu: goto label_14126c;
            case 0x141270u: goto label_141270;
            case 0x141274u: goto label_141274;
            case 0x141278u: goto label_141278;
            case 0x14127Cu: goto label_14127c;
            case 0x141280u: goto label_141280;
            case 0x141284u: goto label_141284;
            case 0x141288u: goto label_141288;
            case 0x14128Cu: goto label_14128c;
            case 0x141290u: goto label_141290;
            case 0x141294u: goto label_141294;
            case 0x141298u: goto label_141298;
            case 0x14129Cu: goto label_14129c;
            case 0x1412A0u: goto label_1412a0;
            case 0x1412A4u: goto label_1412a4;
            case 0x1412A8u: goto label_1412a8;
            case 0x1412ACu: goto label_1412ac;
            case 0x1412B0u: goto label_1412b0;
            case 0x1412B4u: goto label_1412b4;
            case 0x1412B8u: goto label_1412b8;
            case 0x1412BCu: goto label_1412bc;
            case 0x1412C0u: goto label_1412c0;
            case 0x1412C4u: goto label_1412c4;
            case 0x1412C8u: goto label_1412c8;
            case 0x1412CCu: goto label_1412cc;
            case 0x1412D0u: goto label_1412d0;
            case 0x1412D4u: goto label_1412d4;
            case 0x1412D8u: goto label_1412d8;
            case 0x1412DCu: goto label_1412dc;
            case 0x1412E0u: goto label_1412e0;
            case 0x1412E4u: goto label_1412e4;
            case 0x1412E8u: goto label_1412e8;
            case 0x1412ECu: goto label_1412ec;
            case 0x1412F0u: goto label_1412f0;
            case 0x1412F4u: goto label_1412f4;
            case 0x1412F8u: goto label_1412f8;
            case 0x1412FCu: goto label_1412fc;
            case 0x141300u: goto label_141300;
            case 0x141304u: goto label_141304;
            case 0x141308u: goto label_141308;
            case 0x14130Cu: goto label_14130c;
            case 0x141310u: goto label_141310;
            case 0x141314u: goto label_141314;
            case 0x141318u: goto label_141318;
            case 0x14131Cu: goto label_14131c;
            case 0x141320u: goto label_141320;
            case 0x141324u: goto label_141324;
            case 0x141328u: goto label_141328;
            case 0x14132Cu: goto label_14132c;
            case 0x141330u: goto label_141330;
            case 0x141334u: goto label_141334;
            case 0x141338u: goto label_141338;
            case 0x14133Cu: goto label_14133c;
            case 0x141340u: goto label_141340;
            case 0x141344u: goto label_141344;
            case 0x141348u: goto label_141348;
            case 0x14134Cu: goto label_14134c;
            case 0x141350u: goto label_141350;
            case 0x141354u: goto label_141354;
            case 0x141358u: goto label_141358;
            case 0x14135Cu: goto label_14135c;
            case 0x141360u: goto label_141360;
            case 0x141364u: goto label_141364;
            case 0x141368u: goto label_141368;
            case 0x14136Cu: goto label_14136c;
            case 0x141370u: goto label_141370;
            case 0x141374u: goto label_141374;
            case 0x141378u: goto label_141378;
            case 0x14137Cu: goto label_14137c;
            case 0x141380u: goto label_141380;
            case 0x141384u: goto label_141384;
            case 0x141388u: goto label_141388;
            case 0x14138Cu: goto label_14138c;
            case 0x141390u: goto label_141390;
            case 0x141394u: goto label_141394;
            case 0x141398u: goto label_141398;
            case 0x14139Cu: goto label_14139c;
            case 0x1413A0u: goto label_1413a0;
            case 0x1413A4u: goto label_1413a4;
            case 0x1413A8u: goto label_1413a8;
            case 0x1413ACu: goto label_1413ac;
            case 0x1413B0u: goto label_1413b0;
            case 0x1413B4u: goto label_1413b4;
            case 0x1413B8u: goto label_1413b8;
            case 0x1413BCu: goto label_1413bc;
            case 0x1413C0u: goto label_1413c0;
            case 0x1413C4u: goto label_1413c4;
            case 0x1413C8u: goto label_1413c8;
            case 0x1413CCu: goto label_1413cc;
            case 0x1413D0u: goto label_1413d0;
            case 0x1413D4u: goto label_1413d4;
            case 0x1413D8u: goto label_1413d8;
            case 0x1413DCu: goto label_1413dc;
            case 0x1413E0u: goto label_1413e0;
            case 0x1413E4u: goto label_1413e4;
            case 0x1413E8u: goto label_1413e8;
            case 0x1413ECu: goto label_1413ec;
            case 0x1413F0u: goto label_1413f0;
            case 0x1413F4u: goto label_1413f4;
            case 0x1413F8u: goto label_1413f8;
            case 0x1413FCu: goto label_1413fc;
            case 0x141400u: goto label_141400;
            case 0x141404u: goto label_141404;
            case 0x141408u: goto label_141408;
            case 0x14140Cu: goto label_14140c;
            case 0x141410u: goto label_141410;
            case 0x141414u: goto label_141414;
            case 0x141418u: goto label_141418;
            case 0x14141Cu: goto label_14141c;
            case 0x141420u: goto label_141420;
            case 0x141424u: goto label_141424;
            case 0x141428u: goto label_141428;
            case 0x14142Cu: goto label_14142c;
            case 0x141430u: goto label_141430;
            case 0x141434u: goto label_141434;
            case 0x141438u: goto label_141438;
            case 0x14143Cu: goto label_14143c;
            case 0x141440u: goto label_141440;
            case 0x141444u: goto label_141444;
            case 0x141448u: goto label_141448;
            case 0x14144Cu: goto label_14144c;
            case 0x141450u: goto label_141450;
            case 0x141454u: goto label_141454;
            case 0x141458u: goto label_141458;
            case 0x14145Cu: goto label_14145c;
            case 0x141460u: goto label_141460;
            case 0x141464u: goto label_141464;
            case 0x141468u: goto label_141468;
            case 0x14146Cu: goto label_14146c;
            case 0x141470u: goto label_141470;
            case 0x141474u: goto label_141474;
            case 0x141478u: goto label_141478;
            case 0x14147Cu: goto label_14147c;
            case 0x141480u: goto label_141480;
            case 0x141484u: goto label_141484;
            case 0x141488u: goto label_141488;
            case 0x14148Cu: goto label_14148c;
            case 0x141490u: goto label_141490;
            case 0x141494u: goto label_141494;
            case 0x141498u: goto label_141498;
            case 0x14149Cu: goto label_14149c;
            case 0x1414A0u: goto label_1414a0;
            case 0x1414A4u: goto label_1414a4;
            case 0x1414A8u: goto label_1414a8;
            case 0x1414ACu: goto label_1414ac;
            case 0x1414B0u: goto label_1414b0;
            case 0x1414B4u: goto label_1414b4;
            case 0x1414B8u: goto label_1414b8;
            case 0x1414BCu: goto label_1414bc;
            case 0x1414C0u: goto label_1414c0;
            case 0x1414C4u: goto label_1414c4;
            case 0x1414C8u: goto label_1414c8;
            case 0x1414CCu: goto label_1414cc;
            case 0x1414D0u: goto label_1414d0;
            case 0x1414D4u: goto label_1414d4;
            case 0x1414D8u: goto label_1414d8;
            case 0x1414DCu: goto label_1414dc;
            case 0x1414E0u: goto label_1414e0;
            case 0x1414E4u: goto label_1414e4;
            case 0x1414E8u: goto label_1414e8;
            case 0x1414ECu: goto label_1414ec;
            case 0x1414F0u: goto label_1414f0;
            case 0x1414F4u: goto label_1414f4;
            case 0x1414F8u: goto label_1414f8;
            case 0x1414FCu: goto label_1414fc;
            case 0x141500u: goto label_141500;
            case 0x141504u: goto label_141504;
            case 0x141508u: goto label_141508;
            case 0x14150Cu: goto label_14150c;
            case 0x141510u: goto label_141510;
            case 0x141514u: goto label_141514;
            case 0x141518u: goto label_141518;
            case 0x14151Cu: goto label_14151c;
            case 0x141520u: goto label_141520;
            case 0x141524u: goto label_141524;
            case 0x141528u: goto label_141528;
            case 0x14152Cu: goto label_14152c;
            case 0x141530u: goto label_141530;
            case 0x141534u: goto label_141534;
            case 0x141538u: goto label_141538;
            case 0x14153Cu: goto label_14153c;
            case 0x141540u: goto label_141540;
            case 0x141544u: goto label_141544;
            case 0x141548u: goto label_141548;
            case 0x14154Cu: goto label_14154c;
            case 0x141550u: goto label_141550;
            case 0x141554u: goto label_141554;
            case 0x141558u: goto label_141558;
            case 0x14155Cu: goto label_14155c;
            case 0x141560u: goto label_141560;
            case 0x141564u: goto label_141564;
            case 0x141568u: goto label_141568;
            case 0x14156Cu: goto label_14156c;
            case 0x141570u: goto label_141570;
            case 0x141574u: goto label_141574;
            case 0x141578u: goto label_141578;
            case 0x14157Cu: goto label_14157c;
            case 0x141580u: goto label_141580;
            case 0x141584u: goto label_141584;
            case 0x141588u: goto label_141588;
            case 0x14158Cu: goto label_14158c;
            case 0x141590u: goto label_141590;
            case 0x141594u: goto label_141594;
            case 0x141598u: goto label_141598;
            case 0x14159Cu: goto label_14159c;
            case 0x1415A0u: goto label_1415a0;
            case 0x1415A4u: goto label_1415a4;
            case 0x1415A8u: goto label_1415a8;
            case 0x1415ACu: goto label_1415ac;
            case 0x1415B0u: goto label_1415b0;
            case 0x1415B4u: goto label_1415b4;
            case 0x1415B8u: goto label_1415b8;
            case 0x1415BCu: goto label_1415bc;
            case 0x1415C0u: goto label_1415c0;
            case 0x1415C4u: goto label_1415c4;
            case 0x1415C8u: goto label_1415c8;
            case 0x1415CCu: goto label_1415cc;
            case 0x1415D0u: goto label_1415d0;
            case 0x1415D4u: goto label_1415d4;
            case 0x1415D8u: goto label_1415d8;
            case 0x1415DCu: goto label_1415dc;
            case 0x1415E0u: goto label_1415e0;
            case 0x1415E4u: goto label_1415e4;
            case 0x1415E8u: goto label_1415e8;
            case 0x1415ECu: goto label_1415ec;
            case 0x1415F0u: goto label_1415f0;
            case 0x1415F4u: goto label_1415f4;
            case 0x1415F8u: goto label_1415f8;
            case 0x1415FCu: goto label_1415fc;
            case 0x141600u: goto label_141600;
            case 0x141604u: goto label_141604;
            case 0x141608u: goto label_141608;
            case 0x14160Cu: goto label_14160c;
            case 0x141610u: goto label_141610;
            case 0x141614u: goto label_141614;
            case 0x141618u: goto label_141618;
            case 0x14161Cu: goto label_14161c;
            case 0x141620u: goto label_141620;
            default: break;
        }
        return;
    }
label_fallthrough_0x14161c:
    ctx->pc = 0x141624u;
}
