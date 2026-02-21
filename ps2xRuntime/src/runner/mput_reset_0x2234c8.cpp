#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mput_reset
// Address: 0x2234c8 - 0x2235c4
void mput_reset_0x2234c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2234c8u;

label_2234c8:
    // 0x2234c8: 0x27bdffd0
    ctx->pc = 0x2234c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2234cc:
    // 0x2234cc: 0xffbf0020
    ctx->pc = 0x2234ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2234d0:
    // 0x2234d0: 0xffb10010
    ctx->pc = 0x2234d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2234d4:
    // 0x2234d4: 0xffb00000
    ctx->pc = 0x2234d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2234d8:
    // 0x2234d8: 0x3c020032
    ctx->pc = 0x2234d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2234dc:
    // 0x2234dc: 0x8c4306fc
    ctx->pc = 0x2234dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1788)));
label_2234e0:
    // 0x2234e0: 0x24630001
    ctx->pc = 0x2234e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2234e4:
    // 0x2234e4: 0xac4306fc
    ctx->pc = 0x2234e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1788), GPR_U32(ctx, 3));
label_2234e8:
    // 0x2234e8: 0x24020001
    ctx->pc = 0x2234e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2234ec:
    // 0x2234ec: 0x10620008
label_2234f0:
    if (ctx->pc == 0x2234F0u) {
        ctx->pc = 0x2234F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x2234F4u;
        goto label_2234f4;
    }
    ctx->pc = 0x2234ECu;
    {
        const bool branch_taken_0x2234ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2234F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2234ec) {
            ctx->pc = 0x223510u;
            goto label_223510;
        }
    }
    ctx->pc = 0x2234F4u;
label_2234f4:
    // 0x2234f4: 0x3c04003a
    ctx->pc = 0x2234f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2234f8:
    // 0x2234f8: 0x248469b0
    ctx->pc = 0x2234f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27056));
label_2234fc:
    // 0x2234fc: 0xdfbf0020
    ctx->pc = 0x2234fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223500:
    // 0x223500: 0xdfb10010
    ctx->pc = 0x223500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_223504:
    // 0x223504: 0xdfb00000
    ctx->pc = 0x223504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223508:
    // 0x223508: 0x80b4a34
label_22350c:
    if (ctx->pc == 0x22350Cu) {
        ctx->pc = 0x22350Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223510u;
        goto label_223510;
    }
    ctx->pc = 0x223508u;
    ctx->pc = 0x22350Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x223510u;
label_223510:
    // 0x223510: 0x24841000
    ctx->pc = 0x223510u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4096));
label_223514:
    // 0x223514: 0x282d
    ctx->pc = 0x223514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223518:
    // 0x223518: 0xc0becc6
label_22351c:
    if (ctx->pc == 0x22351Cu) {
        ctx->pc = 0x22351Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x223520u;
        goto label_223520;
    }
    ctx->pc = 0x223518u;
    SET_GPR_U32(ctx, 31, 0x223520u);
    ctx->pc = 0x22351Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223520u; }
    }
    if (ctx->pc != 0x223520u) { return; }
    ctx->pc = 0x223520u;
label_223520:
    // 0x223520: 0x3c020032
    ctx->pc = 0x223520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_223524:
    // 0x223524: 0xac4006f8
    ctx->pc = 0x223524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1784), GPR_U32(ctx, 0));
label_223528:
    // 0x223528: 0x3c030032
    ctx->pc = 0x223528u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_22352c:
    // 0x22352c: 0x8c6206f4
    ctx->pc = 0x22352cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1780)));
label_223530:
    // 0x223530: 0x40202d
    ctx->pc = 0x223530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223534:
    // 0x223534: 0x2442ffff
    ctx->pc = 0x223534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_223538:
    // 0x223538: 0x18800014
label_22353c:
    if (ctx->pc == 0x22353Cu) {
        ctx->pc = 0x22353Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1780), GPR_U32(ctx, 2));
        ctx->pc = 0x223540u;
        goto label_223540;
    }
    ctx->pc = 0x223538u;
    {
        const bool branch_taken_0x223538 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x22353Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1780), GPR_U32(ctx, 2));
        if (branch_taken_0x223538) {
            ctx->pc = 0x22358Cu;
            goto label_22358c;
        }
    }
    ctx->pc = 0x223540u;
label_223540:
    // 0x223540: 0x3c02003c
    ctx->pc = 0x223540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_223544:
    // 0x223544: 0x24510f78
    ctx->pc = 0x223544u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 3960));
label_223548:
    // 0x223548: 0x60802d
    ctx->pc = 0x223548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22354c:
    // 0x22354c: 0x0
    ctx->pc = 0x22354cu;
    // NOP
label_223550:
    // 0x223550: 0x8e0206f4
    ctx->pc = 0x223550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1780)));
label_223554:
    // 0x223554: 0x21080
    ctx->pc = 0x223554u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_223558:
    // 0x223558: 0x511021
    ctx->pc = 0x223558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22355c:
    // 0x22355c: 0x8c440000
    ctx->pc = 0x22355cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_223560:
    // 0x223560: 0xac400000
    ctx->pc = 0x223560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_223564:
    // 0x223564: 0xac800008
    ctx->pc = 0x223564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_223568:
    // 0x223568: 0xac80000c
    ctx->pc = 0x223568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_22356c:
    // 0x22356c: 0x8c820010
    ctx->pc = 0x22356cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_223570:
    // 0x223570: 0x40f809
label_223574:
    if (ctx->pc == 0x223574u) {
        ctx->pc = 0x223578u;
        goto label_223578;
    }
    ctx->pc = 0x223570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223578u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2234C8u: goto label_2234c8;
            case 0x2234CCu: goto label_2234cc;
            case 0x2234D0u: goto label_2234d0;
            case 0x2234D4u: goto label_2234d4;
            case 0x2234D8u: goto label_2234d8;
            case 0x2234DCu: goto label_2234dc;
            case 0x2234E0u: goto label_2234e0;
            case 0x2234E4u: goto label_2234e4;
            case 0x2234E8u: goto label_2234e8;
            case 0x2234ECu: goto label_2234ec;
            case 0x2234F0u: goto label_2234f0;
            case 0x2234F4u: goto label_2234f4;
            case 0x2234F8u: goto label_2234f8;
            case 0x2234FCu: goto label_2234fc;
            case 0x223500u: goto label_223500;
            case 0x223504u: goto label_223504;
            case 0x223508u: goto label_223508;
            case 0x22350Cu: goto label_22350c;
            case 0x223510u: goto label_223510;
            case 0x223514u: goto label_223514;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223520u: goto label_223520;
            case 0x223524u: goto label_223524;
            case 0x223528u: goto label_223528;
            case 0x22352Cu: goto label_22352c;
            case 0x223530u: goto label_223530;
            case 0x223534u: goto label_223534;
            case 0x223538u: goto label_223538;
            case 0x22353Cu: goto label_22353c;
            case 0x223540u: goto label_223540;
            case 0x223544u: goto label_223544;
            case 0x223548u: goto label_223548;
            case 0x22354Cu: goto label_22354c;
            case 0x223550u: goto label_223550;
            case 0x223554u: goto label_223554;
            case 0x223558u: goto label_223558;
            case 0x22355Cu: goto label_22355c;
            case 0x223560u: goto label_223560;
            case 0x223564u: goto label_223564;
            case 0x223568u: goto label_223568;
            case 0x22356Cu: goto label_22356c;
            case 0x223570u: goto label_223570;
            case 0x223574u: goto label_223574;
            case 0x223578u: goto label_223578;
            case 0x22357Cu: goto label_22357c;
            case 0x223580u: goto label_223580;
            case 0x223584u: goto label_223584;
            case 0x223588u: goto label_223588;
            case 0x22358Cu: goto label_22358c;
            case 0x223590u: goto label_223590;
            case 0x223594u: goto label_223594;
            case 0x223598u: goto label_223598;
            case 0x22359Cu: goto label_22359c;
            case 0x2235A0u: goto label_2235a0;
            case 0x2235A4u: goto label_2235a4;
            case 0x2235A8u: goto label_2235a8;
            case 0x2235ACu: goto label_2235ac;
            case 0x2235B0u: goto label_2235b0;
            case 0x2235B4u: goto label_2235b4;
            case 0x2235B8u: goto label_2235b8;
            case 0x2235BCu: goto label_2235bc;
            case 0x2235C0u: goto label_2235c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223578u; }
            if (ctx->pc != 0x223578u) { return; }
        }
    }
    ctx->pc = 0x223578u;
label_223578:
    // 0x223578: 0x8e0206f4
    ctx->pc = 0x223578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1780)));
label_22357c:
    // 0x22357c: 0x40182d
    ctx->pc = 0x22357cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223580:
    // 0x223580: 0x2442ffff
    ctx->pc = 0x223580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_223584:
    // 0x223584: 0x1c60fff2
label_223588:
    if (ctx->pc == 0x223588u) {
        ctx->pc = 0x223588u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1780), GPR_U32(ctx, 2));
        ctx->pc = 0x22358Cu;
        goto label_22358c;
    }
    ctx->pc = 0x223584u;
    {
        const bool branch_taken_0x223584 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x223588u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1780), GPR_U32(ctx, 2));
        if (branch_taken_0x223584) {
            ctx->pc = 0x223550u;
            goto label_223550;
        }
    }
    ctx->pc = 0x22358Cu;
label_22358c:
    // 0x22358c: 0x3c020032
    ctx->pc = 0x22358cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_223590:
    // 0x223590: 0xac4006f4
    ctx->pc = 0x223590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1780), GPR_U32(ctx, 0));
label_223594:
    // 0x223594: 0x3c04003c
    ctx->pc = 0x223594u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_223598:
    // 0x223598: 0x24841400
    ctx->pc = 0x223598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5120));
label_22359c:
    // 0x22359c: 0x282d
    ctx->pc = 0x22359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2235a0:
    // 0x2235a0: 0xc0becc6
label_2235a4:
    if (ctx->pc == 0x2235A4u) {
        ctx->pc = 0x2235A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x2235A8u;
        goto label_2235a8;
    }
    ctx->pc = 0x2235A0u;
    SET_GPR_U32(ctx, 31, 0x2235A8u);
    ctx->pc = 0x2235A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235A8u; }
    }
    if (ctx->pc != 0x2235A8u) { return; }
    ctx->pc = 0x2235A8u;
label_2235a8:
    // 0x2235a8: 0x3c020032
    ctx->pc = 0x2235a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2235ac:
    // 0x2235ac: 0xac4006fc
    ctx->pc = 0x2235acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1788), GPR_U32(ctx, 0));
label_2235b0:
    // 0x2235b0: 0xdfbf0020
    ctx->pc = 0x2235b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2235b4:
    // 0x2235b4: 0xdfb10010
    ctx->pc = 0x2235b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2235b8:
    // 0x2235b8: 0xdfb00000
    ctx->pc = 0x2235b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2235bc:
    // 0x2235bc: 0x3e00008
label_2235c0:
    if (ctx->pc == 0x2235C0u) {
        ctx->pc = 0x2235C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2235C4u;
        goto label_fallthrough_0x2235bc;
    }
    ctx->pc = 0x2235BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2235C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2234C8u: goto label_2234c8;
            case 0x2234CCu: goto label_2234cc;
            case 0x2234D0u: goto label_2234d0;
            case 0x2234D4u: goto label_2234d4;
            case 0x2234D8u: goto label_2234d8;
            case 0x2234DCu: goto label_2234dc;
            case 0x2234E0u: goto label_2234e0;
            case 0x2234E4u: goto label_2234e4;
            case 0x2234E8u: goto label_2234e8;
            case 0x2234ECu: goto label_2234ec;
            case 0x2234F0u: goto label_2234f0;
            case 0x2234F4u: goto label_2234f4;
            case 0x2234F8u: goto label_2234f8;
            case 0x2234FCu: goto label_2234fc;
            case 0x223500u: goto label_223500;
            case 0x223504u: goto label_223504;
            case 0x223508u: goto label_223508;
            case 0x22350Cu: goto label_22350c;
            case 0x223510u: goto label_223510;
            case 0x223514u: goto label_223514;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223520u: goto label_223520;
            case 0x223524u: goto label_223524;
            case 0x223528u: goto label_223528;
            case 0x22352Cu: goto label_22352c;
            case 0x223530u: goto label_223530;
            case 0x223534u: goto label_223534;
            case 0x223538u: goto label_223538;
            case 0x22353Cu: goto label_22353c;
            case 0x223540u: goto label_223540;
            case 0x223544u: goto label_223544;
            case 0x223548u: goto label_223548;
            case 0x22354Cu: goto label_22354c;
            case 0x223550u: goto label_223550;
            case 0x223554u: goto label_223554;
            case 0x223558u: goto label_223558;
            case 0x22355Cu: goto label_22355c;
            case 0x223560u: goto label_223560;
            case 0x223564u: goto label_223564;
            case 0x223568u: goto label_223568;
            case 0x22356Cu: goto label_22356c;
            case 0x223570u: goto label_223570;
            case 0x223574u: goto label_223574;
            case 0x223578u: goto label_223578;
            case 0x22357Cu: goto label_22357c;
            case 0x223580u: goto label_223580;
            case 0x223584u: goto label_223584;
            case 0x223588u: goto label_223588;
            case 0x22358Cu: goto label_22358c;
            case 0x223590u: goto label_223590;
            case 0x223594u: goto label_223594;
            case 0x223598u: goto label_223598;
            case 0x22359Cu: goto label_22359c;
            case 0x2235A0u: goto label_2235a0;
            case 0x2235A4u: goto label_2235a4;
            case 0x2235A8u: goto label_2235a8;
            case 0x2235ACu: goto label_2235ac;
            case 0x2235B0u: goto label_2235b0;
            case 0x2235B4u: goto label_2235b4;
            case 0x2235B8u: goto label_2235b8;
            case 0x2235BCu: goto label_2235bc;
            case 0x2235C0u: goto label_2235c0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2235bc:
    ctx->pc = 0x2235C4u;
}
