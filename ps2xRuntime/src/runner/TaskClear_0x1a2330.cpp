#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: TaskClear
// Address: 0x1a2330 - 0x1a241c
void TaskClear_0x1a2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("TaskClear");


    ctx->pc = 0x1a2330u;

label_1a2330:
    // 0x1a2330: 0x27bdffc0
    ctx->pc = 0x1a2330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a2334:
    // 0x1a2334: 0x7fbf0030
    ctx->pc = 0x1a2334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1a2338:
    // 0x1a2338: 0x7fb20020
    ctx->pc = 0x1a2338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a233c:
    // 0x1a233c: 0x7fb10010
    ctx->pc = 0x1a233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a2340:
    // 0x1a2340: 0x7fb00000
    ctx->pc = 0x1a2340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a2344:
    // 0x1a2344: 0x8c900018
    ctx->pc = 0x1a2344u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1a2348:
    // 0x1a2348: 0x70809628
    ctx->pc = 0x1a2348u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a234c:
    // 0x1a234c: 0x8e020004
    ctx->pc = 0x1a234cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a2350:
    // 0x1a2350: 0x10400003
label_1a2354:
    if (ctx->pc == 0x1A2354u) {
        ctx->pc = 0x1A2354u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x1A2358u;
        goto label_1a2358;
    }
    ctx->pc = 0x1A2350u;
    {
        const bool branch_taken_0x1a2350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2354u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x1a2350) {
            ctx->pc = 0x1A2360u;
            goto label_1a2360;
        }
    }
    ctx->pc = 0x1A2358u;
label_1a2358:
    // 0x1a2358: 0x40f809
label_1a235c:
    if (ctx->pc == 0x1A235Cu) {
        ctx->pc = 0x1A235Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2360u;
        goto label_1a2360;
    }
    ctx->pc = 0x1A2358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2360u);
        ctx->pc = 0x1A235Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2330u: goto label_1a2330;
            case 0x1A2334u: goto label_1a2334;
            case 0x1A2338u: goto label_1a2338;
            case 0x1A233Cu: goto label_1a233c;
            case 0x1A2340u: goto label_1a2340;
            case 0x1A2344u: goto label_1a2344;
            case 0x1A2348u: goto label_1a2348;
            case 0x1A234Cu: goto label_1a234c;
            case 0x1A2350u: goto label_1a2350;
            case 0x1A2354u: goto label_1a2354;
            case 0x1A2358u: goto label_1a2358;
            case 0x1A235Cu: goto label_1a235c;
            case 0x1A2360u: goto label_1a2360;
            case 0x1A2364u: goto label_1a2364;
            case 0x1A2368u: goto label_1a2368;
            case 0x1A236Cu: goto label_1a236c;
            case 0x1A2370u: goto label_1a2370;
            case 0x1A2374u: goto label_1a2374;
            case 0x1A2378u: goto label_1a2378;
            case 0x1A237Cu: goto label_1a237c;
            case 0x1A2380u: goto label_1a2380;
            case 0x1A2384u: goto label_1a2384;
            case 0x1A2388u: goto label_1a2388;
            case 0x1A238Cu: goto label_1a238c;
            case 0x1A2390u: goto label_1a2390;
            case 0x1A2394u: goto label_1a2394;
            case 0x1A2398u: goto label_1a2398;
            case 0x1A239Cu: goto label_1a239c;
            case 0x1A23A0u: goto label_1a23a0;
            case 0x1A23A4u: goto label_1a23a4;
            case 0x1A23A8u: goto label_1a23a8;
            case 0x1A23ACu: goto label_1a23ac;
            case 0x1A23B0u: goto label_1a23b0;
            case 0x1A23B4u: goto label_1a23b4;
            case 0x1A23B8u: goto label_1a23b8;
            case 0x1A23BCu: goto label_1a23bc;
            case 0x1A23C0u: goto label_1a23c0;
            case 0x1A23C4u: goto label_1a23c4;
            case 0x1A23C8u: goto label_1a23c8;
            case 0x1A23CCu: goto label_1a23cc;
            case 0x1A23D0u: goto label_1a23d0;
            case 0x1A23D4u: goto label_1a23d4;
            case 0x1A23D8u: goto label_1a23d8;
            case 0x1A23DCu: goto label_1a23dc;
            case 0x1A23E0u: goto label_1a23e0;
            case 0x1A23E4u: goto label_1a23e4;
            case 0x1A23E8u: goto label_1a23e8;
            case 0x1A23ECu: goto label_1a23ec;
            case 0x1A23F0u: goto label_1a23f0;
            case 0x1A23F4u: goto label_1a23f4;
            case 0x1A23F8u: goto label_1a23f8;
            case 0x1A23FCu: goto label_1a23fc;
            case 0x1A2400u: goto label_1a2400;
            case 0x1A2404u: goto label_1a2404;
            case 0x1A2408u: goto label_1a2408;
            case 0x1A240Cu: goto label_1a240c;
            case 0x1A2410u: goto label_1a2410;
            case 0x1A2414u: goto label_1a2414;
            case 0x1A2418u: goto label_1a2418;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A2360u; }
            if (ctx->pc != 0x1A2360u) { return; }
        }
    }
    ctx->pc = 0x1A2360u;
label_1a2360:
    // 0x1a2360: 0xae000004
    ctx->pc = 0x1a2360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a2364:
    // 0x1a2364: 0x9602002e
    ctx->pc = 0x1a2364u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_1a2368:
    // 0x1a2368: 0x30420004
    ctx->pc = 0x1a2368u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_1a236c:
    // 0x1a236c: 0x10400004
label_1a2370:
    if (ctx->pc == 0x1A2370u) {
        ctx->pc = 0x1A2370u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2374u;
        goto label_1a2374;
    }
    ctx->pc = 0x1A236Cu;
    {
        const bool branch_taken_0x1a236c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2370u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a236c) {
            ctx->pc = 0x1A2380u;
            goto label_1a2380;
        }
    }
    ctx->pc = 0x1A2374u;
label_1a2374:
    // 0x1a2374: 0xc0690f4
label_1a2378:
    if (ctx->pc == 0x1A2378u) {
        ctx->pc = 0x1A237Cu;
        goto label_1a237c;
    }
    ctx->pc = 0x1A2374u;
    SET_GPR_U32(ctx, 31, 0x1A237Cu);
    ctx->pc = 0x1A43D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vr_destruct_0x1a43d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A237Cu; }
        else if (ctx->pc != 0x1A237Cu) { ctx->pc = 0x1A237Cu; }
    }
    if (ctx->pc != 0x1A237Cu) { return; }
    ctx->pc = 0x1A237Cu;
label_1a237c:
    // 0x1a237c: 0x0
    ctx->pc = 0x1a237cu;
    // NOP
label_1a2380:
    // 0x1a2380: 0x9602002e
    ctx->pc = 0x1a2380u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_1a2384:
    // 0x1a2384: 0x30420004
    ctx->pc = 0x1a2384u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_1a2388:
    // 0x1a2388: 0x14400003
label_1a238c:
    if (ctx->pc == 0x1A238Cu) {
        ctx->pc = 0x1A238Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2390u;
        goto label_1a2390;
    }
    ctx->pc = 0x1A2388u;
    {
        const bool branch_taken_0x1a2388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A238Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2388) {
            ctx->pc = 0x1A2398u;
            goto label_1a2398;
        }
    }
    ctx->pc = 0x1A2390u;
label_1a2390:
    // 0x1a2390: 0xc068a3c
label_1a2394:
    if (ctx->pc == 0x1A2394u) {
        ctx->pc = 0x1A2398u;
        goto label_1a2398;
    }
    ctx->pc = 0x1A2390u;
    SET_GPR_U32(ctx, 31, 0x1A2398u);
    ctx->pc = 0x1A28F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        killFamilyLink_0x1a28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2398u; }
        else if (ctx->pc != 0x1A2398u) { ctx->pc = 0x1A2398u; }
    }
    if (ctx->pc != 0x1A2398u) { return; }
    ctx->pc = 0x1A2398u;
label_1a2398:
    // 0x1a2398: 0x9603002e
    ctx->pc = 0x1a2398u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_1a239c:
    // 0x1a239c: 0x30620010
    ctx->pc = 0x1a239cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_1a23a0:
    // 0x1a23a0: 0x1440000d
label_1a23a4:
    if (ctx->pc == 0x1A23A4u) {
        ctx->pc = 0x1A23A4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1A23A8u;
        goto label_1a23a8;
    }
    ctx->pc = 0x1A23A0u;
    {
        const bool branch_taken_0x1a23a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A23A4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x1a23a0) {
            ctx->pc = 0x1A23D8u;
            goto label_1a23d8;
        }
    }
    ctx->pc = 0x1A23A8u;
label_1a23a8:
    // 0x1a23a8: 0x10400006
label_1a23ac:
    if (ctx->pc == 0x1A23ACu) {
        ctx->pc = 0x1A23ACu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A23B0u;
        goto label_1a23b0;
    }
    ctx->pc = 0x1A23A8u;
    {
        const bool branch_taken_0x1a23a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A23ACu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a23a8) {
            ctx->pc = 0x1A23C4u;
            goto label_1a23c4;
        }
    }
    ctx->pc = 0x1A23B0u;
label_1a23b0:
    // 0x1a23b0: 0xc069100
label_1a23b4:
    if (ctx->pc == 0x1A23B4u) {
        ctx->pc = 0x1A23B4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A23B8u;
        goto label_1a23b8;
    }
    ctx->pc = 0x1A23B0u;
    SET_GPR_U32(ctx, 31, 0x1A23B8u);
    ctx->pc = 0x1A23B4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sys2_free_0x1a4400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23B8u; }
        else if (ctx->pc != 0x1A23B8u) { ctx->pc = 0x1A23B8u; }
    }
    if (ctx->pc != 0x1A23B8u) { return; }
    ctx->pc = 0x1A23B8u;
label_1a23b8:
    // 0x1a23b8: 0x10000007
label_1a23bc:
    if (ctx->pc == 0x1A23BCu) {
        ctx->pc = 0x1A23C0u;
        goto label_1a23c0;
    }
    ctx->pc = 0x1A23B8u;
    {
        const bool branch_taken_0x1a23b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a23b8) {
            ctx->pc = 0x1A23D8u;
            goto label_1a23d8;
        }
    }
    ctx->pc = 0x1A23C0u;
label_1a23c0:
    // 0x1a23c0: 0x72002628
    ctx->pc = 0x1a23c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1a23c4:
    // 0x1a23c4: 0xc0687c0
label_1a23c8:
    if (ctx->pc == 0x1A23C8u) {
        ctx->pc = 0x1A23CCu;
        goto label_1a23cc;
    }
    ctx->pc = 0x1A23C4u;
    SET_GPR_U32(ctx, 31, 0x1A23CCu);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23CCu; }
        else if (ctx->pc != 0x1A23CCu) { ctx->pc = 0x1A23CCu; }
    }
    if (ctx->pc != 0x1A23CCu) { return; }
    ctx->pc = 0x1A23CCu;
label_1a23cc:
    // 0x1a23cc: 0x8f82893c
    ctx->pc = 0x1a23ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1a23d0:
    // 0x1a23d0: 0x2442ffff
    ctx->pc = 0x1a23d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a23d4:
    // 0x1a23d4: 0xaf82893c
    ctx->pc = 0x1a23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 2));
label_1a23d8:
    // 0x1a23d8: 0x12120003
label_1a23dc:
    if (ctx->pc == 0x1A23DCu) {
        ctx->pc = 0x1A23DCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A23E0u;
        goto label_1a23e0;
    }
    ctx->pc = 0x1A23D8u;
    {
        const bool branch_taken_0x1a23d8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 18));
        ctx->pc = 0x1A23DCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a23d8) {
            ctx->pc = 0x1A23E8u;
            goto label_1a23e8;
        }
    }
    ctx->pc = 0x1A23E0u;
label_1a23e0:
    // 0x1a23e0: 0x1000ffdb
label_1a23e4:
    if (ctx->pc == 0x1A23E4u) {
        ctx->pc = 0x1A23E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1A23E8u;
        goto label_1a23e8;
    }
    ctx->pc = 0x1A23E0u;
    {
        const bool branch_taken_0x1a23e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A23E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        if (branch_taken_0x1a23e0) {
            ctx->pc = 0x1A2350u;
            goto label_1a2350;
        }
    }
    ctx->pc = 0x1A23E8u;
label_1a23e8:
    // 0x1a23e8: 0x8e450038
    ctx->pc = 0x1a23e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a23ec:
    // 0x1a23ec: 0x8e46003c
    ctx->pc = 0x1a23ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1a23f0:
    // 0x1a23f0: 0xc068ae0
label_1a23f4:
    if (ctx->pc == 0x1A23F4u) {
        ctx->pc = 0x1A23F4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A23F8u;
        goto label_1a23f8;
    }
    ctx->pc = 0x1A23F0u;
    SET_GPR_U32(ctx, 31, 0x1A23F8u);
    ctx->pc = 0x1A23F4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A2B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        clearLoopPoint_0x1a2b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A23F8u; }
        else if (ctx->pc != 0x1A23F8u) { ctx->pc = 0x1A23F8u; }
    }
    if (ctx->pc != 0x1A23F8u) { return; }
    ctx->pc = 0x1A23F8u;
label_1a23f8:
    // 0x1a23f8: 0x8f83893c
    ctx->pc = 0x1a23f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1a23fc:
    // 0x1a23fc: 0x24630001
    ctx->pc = 0x1a23fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1a2400:
    // 0x1a2400: 0xaf83893c
    ctx->pc = 0x1a2400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 3));
label_1a2404:
    // 0x1a2404: 0x7bbf0030
    ctx->pc = 0x1a2404u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2408:
    // 0x1a2408: 0x7bb20020
    ctx->pc = 0x1a2408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a240c:
    // 0x1a240c: 0x7bb10010
    ctx->pc = 0x1a240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2410:
    // 0x1a2410: 0x7bb00000
    ctx->pc = 0x1a2410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2414:
    // 0x1a2414: 0x3e00008
label_1a2418:
    if (ctx->pc == 0x1A2418u) {
        ctx->pc = 0x1A2418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1A241Cu;
        goto label_fallthrough_0x1a2414;
    }
    ctx->pc = 0x1A2414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2330u: goto label_1a2330;
            case 0x1A2334u: goto label_1a2334;
            case 0x1A2338u: goto label_1a2338;
            case 0x1A233Cu: goto label_1a233c;
            case 0x1A2340u: goto label_1a2340;
            case 0x1A2344u: goto label_1a2344;
            case 0x1A2348u: goto label_1a2348;
            case 0x1A234Cu: goto label_1a234c;
            case 0x1A2350u: goto label_1a2350;
            case 0x1A2354u: goto label_1a2354;
            case 0x1A2358u: goto label_1a2358;
            case 0x1A235Cu: goto label_1a235c;
            case 0x1A2360u: goto label_1a2360;
            case 0x1A2364u: goto label_1a2364;
            case 0x1A2368u: goto label_1a2368;
            case 0x1A236Cu: goto label_1a236c;
            case 0x1A2370u: goto label_1a2370;
            case 0x1A2374u: goto label_1a2374;
            case 0x1A2378u: goto label_1a2378;
            case 0x1A237Cu: goto label_1a237c;
            case 0x1A2380u: goto label_1a2380;
            case 0x1A2384u: goto label_1a2384;
            case 0x1A2388u: goto label_1a2388;
            case 0x1A238Cu: goto label_1a238c;
            case 0x1A2390u: goto label_1a2390;
            case 0x1A2394u: goto label_1a2394;
            case 0x1A2398u: goto label_1a2398;
            case 0x1A239Cu: goto label_1a239c;
            case 0x1A23A0u: goto label_1a23a0;
            case 0x1A23A4u: goto label_1a23a4;
            case 0x1A23A8u: goto label_1a23a8;
            case 0x1A23ACu: goto label_1a23ac;
            case 0x1A23B0u: goto label_1a23b0;
            case 0x1A23B4u: goto label_1a23b4;
            case 0x1A23B8u: goto label_1a23b8;
            case 0x1A23BCu: goto label_1a23bc;
            case 0x1A23C0u: goto label_1a23c0;
            case 0x1A23C4u: goto label_1a23c4;
            case 0x1A23C8u: goto label_1a23c8;
            case 0x1A23CCu: goto label_1a23cc;
            case 0x1A23D0u: goto label_1a23d0;
            case 0x1A23D4u: goto label_1a23d4;
            case 0x1A23D8u: goto label_1a23d8;
            case 0x1A23DCu: goto label_1a23dc;
            case 0x1A23E0u: goto label_1a23e0;
            case 0x1A23E4u: goto label_1a23e4;
            case 0x1A23E8u: goto label_1a23e8;
            case 0x1A23ECu: goto label_1a23ec;
            case 0x1A23F0u: goto label_1a23f0;
            case 0x1A23F4u: goto label_1a23f4;
            case 0x1A23F8u: goto label_1a23f8;
            case 0x1A23FCu: goto label_1a23fc;
            case 0x1A2400u: goto label_1a2400;
            case 0x1A2404u: goto label_1a2404;
            case 0x1A2408u: goto label_1a2408;
            case 0x1A240Cu: goto label_1a240c;
            case 0x1A2410u: goto label_1a2410;
            case 0x1A2414u: goto label_1a2414;
            case 0x1A2418u: goto label_1a2418;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a2414:
    ctx->pc = 0x1A241Cu;
}
