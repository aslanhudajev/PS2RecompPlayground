#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fwalk
// Address: 0x2fa530 - 0x2fa5c4
void _fwalk_0x2fa530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fa530u;

label_2fa530:
    // 0x2fa530: 0x27bdffa0
    ctx->pc = 0x2fa530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_2fa534:
    // 0x2fa534: 0xffb40040
    ctx->pc = 0x2fa534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2fa538:
    // 0x2fa538: 0xffb30030
    ctx->pc = 0x2fa538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2fa53c:
    // 0x2fa53c: 0xa0a02d
    ctx->pc = 0x2fa53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fa540:
    // 0x2fa540: 0xffb20020
    ctx->pc = 0x2fa540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2fa544:
    // 0x2fa544: 0x982d
    ctx->pc = 0x2fa544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa548:
    // 0x2fa548: 0xffbf0050
    ctx->pc = 0x2fa548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2fa54c:
    // 0x2fa54c: 0x249201d8
    ctx->pc = 0x2fa54cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 472));
label_2fa550:
    // 0x2fa550: 0xffb10010
    ctx->pc = 0x2fa550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2fa554:
    // 0x2fa554: 0x12400012
label_2fa558:
    if (ctx->pc == 0x2FA558u) {
        ctx->pc = 0x2FA558u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2FA55Cu;
        goto label_2fa55c;
    }
    ctx->pc = 0x2FA554u;
    {
        const bool branch_taken_0x2fa554 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FA558u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2fa554) {
            ctx->pc = 0x2FA5A0u;
            goto label_2fa5a0;
        }
    }
    ctx->pc = 0x2FA55Cu;
label_2fa55c:
    // 0x2fa55c: 0x8e500004
    ctx->pc = 0x2fa55cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2fa560:
    // 0x2fa560: 0x2610ffff
    ctx->pc = 0x2fa560u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_2fa564:
    // 0x2fa564: 0x600000b
label_2fa568:
    if (ctx->pc == 0x2FA568u) {
        ctx->pc = 0x2FA568u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2FA56Cu;
        goto label_2fa56c;
    }
    ctx->pc = 0x2FA564u;
    {
        const bool branch_taken_0x2fa564 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2FA568u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x2fa564) {
            ctx->pc = 0x2FA594u;
            goto label_2fa594;
        }
    }
    ctx->pc = 0x2FA56Cu;
label_2fa56c:
    // 0x2fa56c: 0x0
    ctx->pc = 0x2fa56cu;
    // NOP
label_2fa570:
    // 0x2fa570: 0x8622000c
    ctx->pc = 0x2fa570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2fa574:
    // 0x2fa574: 0x50400005
label_2fa578:
    if (ctx->pc == 0x2FA578u) {
        ctx->pc = 0x2FA578u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x2FA57Cu;
        goto label_2fa57c;
    }
    ctx->pc = 0x2FA574u;
    {
        const bool branch_taken_0x2fa574 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2fa574) {
            ctx->pc = 0x2FA578u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x2FA58Cu;
            goto label_2fa58c;
        }
    }
    ctx->pc = 0x2FA57Cu;
label_2fa57c:
    // 0x2fa57c: 0x280f809
label_2fa580:
    if (ctx->pc == 0x2FA580u) {
        ctx->pc = 0x2FA580u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FA584u;
        goto label_2fa584;
    }
    ctx->pc = 0x2FA57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2FA584u);
        ctx->pc = 0x2FA580u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FA530u: goto label_2fa530;
            case 0x2FA534u: goto label_2fa534;
            case 0x2FA538u: goto label_2fa538;
            case 0x2FA53Cu: goto label_2fa53c;
            case 0x2FA540u: goto label_2fa540;
            case 0x2FA544u: goto label_2fa544;
            case 0x2FA548u: goto label_2fa548;
            case 0x2FA54Cu: goto label_2fa54c;
            case 0x2FA550u: goto label_2fa550;
            case 0x2FA554u: goto label_2fa554;
            case 0x2FA558u: goto label_2fa558;
            case 0x2FA55Cu: goto label_2fa55c;
            case 0x2FA560u: goto label_2fa560;
            case 0x2FA564u: goto label_2fa564;
            case 0x2FA568u: goto label_2fa568;
            case 0x2FA56Cu: goto label_2fa56c;
            case 0x2FA570u: goto label_2fa570;
            case 0x2FA574u: goto label_2fa574;
            case 0x2FA578u: goto label_2fa578;
            case 0x2FA57Cu: goto label_2fa57c;
            case 0x2FA580u: goto label_2fa580;
            case 0x2FA584u: goto label_2fa584;
            case 0x2FA588u: goto label_2fa588;
            case 0x2FA58Cu: goto label_2fa58c;
            case 0x2FA590u: goto label_2fa590;
            case 0x2FA594u: goto label_2fa594;
            case 0x2FA598u: goto label_2fa598;
            case 0x2FA59Cu: goto label_2fa59c;
            case 0x2FA5A0u: goto label_2fa5a0;
            case 0x2FA5A4u: goto label_2fa5a4;
            case 0x2FA5A8u: goto label_2fa5a8;
            case 0x2FA5ACu: goto label_2fa5ac;
            case 0x2FA5B0u: goto label_2fa5b0;
            case 0x2FA5B4u: goto label_2fa5b4;
            case 0x2FA5B8u: goto label_2fa5b8;
            case 0x2FA5BCu: goto label_2fa5bc;
            case 0x2FA5C0u: goto label_2fa5c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FA584u; }
            if (ctx->pc != 0x2FA584u) { return; }
        }
    }
    ctx->pc = 0x2FA584u;
label_2fa584:
    // 0x2fa584: 0x2629825
    ctx->pc = 0x2fa584u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2fa588:
    // 0x2fa588: 0x2610ffff
    ctx->pc = 0x2fa588u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_2fa58c:
    // 0x2fa58c: 0x601fff8
label_2fa590:
    if (ctx->pc == 0x2FA590u) {
        ctx->pc = 0x2FA590u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x2FA594u;
        goto label_2fa594;
    }
    ctx->pc = 0x2FA58Cu;
    {
        const bool branch_taken_0x2fa58c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2FA590u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        if (branch_taken_0x2fa58c) {
            ctx->pc = 0x2FA570u;
            goto label_2fa570;
        }
    }
    ctx->pc = 0x2FA594u;
label_2fa594:
    // 0x2fa594: 0x8e520000
    ctx->pc = 0x2fa594u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2fa598:
    // 0x2fa598: 0x5640fff1
label_2fa59c:
    if (ctx->pc == 0x2FA59Cu) {
        ctx->pc = 0x2FA59Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2FA5A0u;
        goto label_2fa5a0;
    }
    ctx->pc = 0x2FA598u;
    {
        const bool branch_taken_0x2fa598 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2fa598) {
            ctx->pc = 0x2FA59Cu;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x2FA560u;
            goto label_2fa560;
        }
    }
    ctx->pc = 0x2FA5A0u;
label_2fa5a0:
    // 0x2fa5a0: 0x260102d
    ctx->pc = 0x2fa5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa5a4:
    // 0x2fa5a4: 0xdfbf0050
    ctx->pc = 0x2fa5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fa5a8:
    // 0x2fa5a8: 0xdfb40040
    ctx->pc = 0x2fa5a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fa5ac:
    // 0x2fa5ac: 0xdfb30030
    ctx->pc = 0x2fa5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fa5b0:
    // 0x2fa5b0: 0xdfb20020
    ctx->pc = 0x2fa5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fa5b4:
    // 0x2fa5b4: 0xdfb10010
    ctx->pc = 0x2fa5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa5b8:
    // 0x2fa5b8: 0xdfb00000
    ctx->pc = 0x2fa5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa5bc:
    // 0x2fa5bc: 0x3e00008
label_2fa5c0:
    if (ctx->pc == 0x2FA5C0u) {
        ctx->pc = 0x2FA5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FA5C4u;
        goto label_fallthrough_0x2fa5bc;
    }
    ctx->pc = 0x2FA5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FA530u: goto label_2fa530;
            case 0x2FA534u: goto label_2fa534;
            case 0x2FA538u: goto label_2fa538;
            case 0x2FA53Cu: goto label_2fa53c;
            case 0x2FA540u: goto label_2fa540;
            case 0x2FA544u: goto label_2fa544;
            case 0x2FA548u: goto label_2fa548;
            case 0x2FA54Cu: goto label_2fa54c;
            case 0x2FA550u: goto label_2fa550;
            case 0x2FA554u: goto label_2fa554;
            case 0x2FA558u: goto label_2fa558;
            case 0x2FA55Cu: goto label_2fa55c;
            case 0x2FA560u: goto label_2fa560;
            case 0x2FA564u: goto label_2fa564;
            case 0x2FA568u: goto label_2fa568;
            case 0x2FA56Cu: goto label_2fa56c;
            case 0x2FA570u: goto label_2fa570;
            case 0x2FA574u: goto label_2fa574;
            case 0x2FA578u: goto label_2fa578;
            case 0x2FA57Cu: goto label_2fa57c;
            case 0x2FA580u: goto label_2fa580;
            case 0x2FA584u: goto label_2fa584;
            case 0x2FA588u: goto label_2fa588;
            case 0x2FA58Cu: goto label_2fa58c;
            case 0x2FA590u: goto label_2fa590;
            case 0x2FA594u: goto label_2fa594;
            case 0x2FA598u: goto label_2fa598;
            case 0x2FA59Cu: goto label_2fa59c;
            case 0x2FA5A0u: goto label_2fa5a0;
            case 0x2FA5A4u: goto label_2fa5a4;
            case 0x2FA5A8u: goto label_2fa5a8;
            case 0x2FA5ACu: goto label_2fa5ac;
            case 0x2FA5B0u: goto label_2fa5b0;
            case 0x2FA5B4u: goto label_2fa5b4;
            case 0x2FA5B8u: goto label_2fa5b8;
            case 0x2FA5BCu: goto label_2fa5bc;
            case 0x2FA5C0u: goto label_2fa5c0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2fa5bc:
    ctx->pc = 0x2FA5C4u;
}
