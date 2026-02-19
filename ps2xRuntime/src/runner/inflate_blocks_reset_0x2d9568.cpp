#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_blocks_reset
// Address: 0x2d9568 - 0x2d9634
void inflate_blocks_reset_0x2d9568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d9568u;

label_2d9568:
    // 0x2d9568: 0x27bdffd0
    ctx->pc = 0x2d9568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d956c:
    // 0x2d956c: 0xffbf0020
    ctx->pc = 0x2d956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d9570:
    // 0x2d9570: 0xffb10010
    ctx->pc = 0x2d9570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2d9574:
    // 0x2d9574: 0xffb00000
    ctx->pc = 0x2d9574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9578:
    // 0x2d9578: 0x80802d
    ctx->pc = 0x2d9578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d957c:
    // 0x2d957c: 0x8e020034
    ctx->pc = 0x2d957cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2d9580:
    // 0x2d9580: 0x10400003
label_2d9584:
    if (ctx->pc == 0x2D9584u) {
        ctx->pc = 0x2D9584u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9588u;
        goto label_2d9588;
    }
    ctx->pc = 0x2D9580u;
    {
        const bool branch_taken_0x2d9580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9584u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d9580) {
            ctx->pc = 0x2D9590u;
            goto label_2d9590;
        }
    }
    ctx->pc = 0x2D9588u;
label_2d9588:
    // 0x2d9588: 0x8e020038
    ctx->pc = 0x2d9588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2d958c:
    // 0x2d958c: 0xacc20000
    ctx->pc = 0x2d958cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2d9590:
    // 0x2d9590: 0x8e020000
    ctx->pc = 0x2d9590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9594:
    // 0x2d9594: 0x2442fffc
    ctx->pc = 0x2d9594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_2d9598:
    // 0x2d9598: 0x2c420002
    ctx->pc = 0x2d9598u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_2d959c:
    // 0x2d959c: 0x50400006
label_2d95a0:
    if (ctx->pc == 0x2D95A0u) {
        ctx->pc = 0x2D95A0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2D95A4u;
        goto label_2d95a4;
    }
    ctx->pc = 0x2D959Cu;
    {
        const bool branch_taken_0x2d959c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d959c) {
            ctx->pc = 0x2D95A0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2D95B8u;
            goto label_2d95b8;
        }
    }
    ctx->pc = 0x2D95A4u;
label_2d95a4:
    // 0x2d95a4: 0x8e220024
    ctx->pc = 0x2d95a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d95a8:
    // 0x2d95a8: 0x8e240028
    ctx->pc = 0x2d95a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d95ac:
    // 0x2d95ac: 0x40f809
label_2d95b0:
    if (ctx->pc == 0x2D95B0u) {
        ctx->pc = 0x2D95B0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x2D95B4u;
        goto label_2d95b4;
    }
    ctx->pc = 0x2D95ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D95B4u);
        ctx->pc = 0x2D95B0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9568u: goto label_2d9568;
            case 0x2D956Cu: goto label_2d956c;
            case 0x2D9570u: goto label_2d9570;
            case 0x2D9574u: goto label_2d9574;
            case 0x2D9578u: goto label_2d9578;
            case 0x2D957Cu: goto label_2d957c;
            case 0x2D9580u: goto label_2d9580;
            case 0x2D9584u: goto label_2d9584;
            case 0x2D9588u: goto label_2d9588;
            case 0x2D958Cu: goto label_2d958c;
            case 0x2D9590u: goto label_2d9590;
            case 0x2D9594u: goto label_2d9594;
            case 0x2D9598u: goto label_2d9598;
            case 0x2D959Cu: goto label_2d959c;
            case 0x2D95A0u: goto label_2d95a0;
            case 0x2D95A4u: goto label_2d95a4;
            case 0x2D95A8u: goto label_2d95a8;
            case 0x2D95ACu: goto label_2d95ac;
            case 0x2D95B0u: goto label_2d95b0;
            case 0x2D95B4u: goto label_2d95b4;
            case 0x2D95B8u: goto label_2d95b8;
            case 0x2D95BCu: goto label_2d95bc;
            case 0x2D95C0u: goto label_2d95c0;
            case 0x2D95C4u: goto label_2d95c4;
            case 0x2D95C8u: goto label_2d95c8;
            case 0x2D95CCu: goto label_2d95cc;
            case 0x2D95D0u: goto label_2d95d0;
            case 0x2D95D4u: goto label_2d95d4;
            case 0x2D95D8u: goto label_2d95d8;
            case 0x2D95DCu: goto label_2d95dc;
            case 0x2D95E0u: goto label_2d95e0;
            case 0x2D95E4u: goto label_2d95e4;
            case 0x2D95E8u: goto label_2d95e8;
            case 0x2D95ECu: goto label_2d95ec;
            case 0x2D95F0u: goto label_2d95f0;
            case 0x2D95F4u: goto label_2d95f4;
            case 0x2D95F8u: goto label_2d95f8;
            case 0x2D95FCu: goto label_2d95fc;
            case 0x2D9600u: goto label_2d9600;
            case 0x2D9604u: goto label_2d9604;
            case 0x2D9608u: goto label_2d9608;
            case 0x2D960Cu: goto label_2d960c;
            case 0x2D9610u: goto label_2d9610;
            case 0x2D9614u: goto label_2d9614;
            case 0x2D9618u: goto label_2d9618;
            case 0x2D961Cu: goto label_2d961c;
            case 0x2D9620u: goto label_2d9620;
            case 0x2D9624u: goto label_2d9624;
            case 0x2D9628u: goto label_2d9628;
            case 0x2D962Cu: goto label_2d962c;
            case 0x2D9630u: goto label_2d9630;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D95B4u; }
            if (ctx->pc != 0x2D95B4u) { return; }
        }
    }
    ctx->pc = 0x2D95B4u;
label_2d95b4:
    // 0x2d95b4: 0x8e030000
    ctx->pc = 0x2d95b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d95b8:
    // 0x2d95b8: 0x24020006
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2d95bc:
    // 0x2d95bc: 0x5462000b
label_2d95c0:
    if (ctx->pc == 0x2D95C0u) {
        ctx->pc = 0x2D95C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2D95C4u;
        goto label_2d95c4;
    }
    ctx->pc = 0x2D95BCu;
    {
        const bool branch_taken_0x2d95bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d95bc) {
            ctx->pc = 0x2D95C0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2D95ECu;
            goto label_2d95ec;
        }
    }
    ctx->pc = 0x2D95C4u;
label_2d95c4:
    // 0x2d95c4: 0x8e04000c
    ctx->pc = 0x2d95c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d95c8:
    // 0x2d95c8: 0xc0b6bb2
label_2d95cc:
    if (ctx->pc == 0x2D95CCu) {
        ctx->pc = 0x2D95CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D95D0u;
        goto label_2d95d0;
    }
    ctx->pc = 0x2D95C8u;
    SET_GPR_U32(ctx, 31, 0x2D95D0u);
    ctx->pc = 0x2D95CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DAEC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_free_0x2daec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D95D0u; }
    }
    if (ctx->pc != 0x2D95D0u) { return; }
    ctx->pc = 0x2D95D0u;
label_2d95d0:
    // 0x2d95d0: 0x8e040008
    ctx->pc = 0x2d95d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d95d4:
    // 0x2d95d4: 0xc0b6f98
label_2d95d8:
    if (ctx->pc == 0x2D95D8u) {
        ctx->pc = 0x2D95D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D95DCu;
        goto label_2d95dc;
    }
    ctx->pc = 0x2D95D4u;
    SET_GPR_U32(ctx, 31, 0x2D95DCu);
    ctx->pc = 0x2D95D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D95DCu; }
    }
    if (ctx->pc != 0x2D95DCu) { return; }
    ctx->pc = 0x2D95DCu;
label_2d95dc:
    // 0x2d95dc: 0x8e040004
    ctx->pc = 0x2d95dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d95e0:
    // 0x2d95e0: 0xc0b6f98
label_2d95e4:
    if (ctx->pc == 0x2D95E4u) {
        ctx->pc = 0x2D95E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D95E8u;
        goto label_2d95e8;
    }
    ctx->pc = 0x2D95E0u;
    SET_GPR_U32(ctx, 31, 0x2D95E8u);
    ctx->pc = 0x2D95E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_free_0x2dbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D95E8u; }
    }
    if (ctx->pc != 0x2D95E8u) { return; }
    ctx->pc = 0x2D95E8u;
label_2d95e8:
    // 0x2d95e8: 0xae000000
    ctx->pc = 0x2d95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d95ec:
    // 0x2d95ec: 0xae00001c
    ctx->pc = 0x2d95ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2d95f0:
    // 0x2d95f0: 0xae000020
    ctx->pc = 0x2d95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2d95f4:
    // 0x2d95f4: 0x8e020024
    ctx->pc = 0x2d95f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d95f8:
    // 0x2d95f8: 0xae020030
    ctx->pc = 0x2d95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2d95fc:
    // 0x2d95fc: 0xae02002c
    ctx->pc = 0x2d95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2d9600:
    // 0x2d9600: 0x8e020034
    ctx->pc = 0x2d9600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2d9604:
    // 0x2d9604: 0x10400006
label_2d9608:
    if (ctx->pc == 0x2D9608u) {
        ctx->pc = 0x2D9608u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D960Cu;
        goto label_2d960c;
    }
    ctx->pc = 0x2D9604u;
    {
        const bool branch_taken_0x2d9604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9608u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d9604) {
            ctx->pc = 0x2D9620u;
            goto label_2d9620;
        }
    }
    ctx->pc = 0x2D960Cu;
label_2d960c:
    // 0x2d960c: 0x282d
    ctx->pc = 0x2d960cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9610:
    // 0x2d9610: 0x40f809
label_2d9614:
    if (ctx->pc == 0x2D9614u) {
        ctx->pc = 0x2D9614u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9618u;
        goto label_2d9618;
    }
    ctx->pc = 0x2D9610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9618u);
        ctx->pc = 0x2D9614u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9568u: goto label_2d9568;
            case 0x2D956Cu: goto label_2d956c;
            case 0x2D9570u: goto label_2d9570;
            case 0x2D9574u: goto label_2d9574;
            case 0x2D9578u: goto label_2d9578;
            case 0x2D957Cu: goto label_2d957c;
            case 0x2D9580u: goto label_2d9580;
            case 0x2D9584u: goto label_2d9584;
            case 0x2D9588u: goto label_2d9588;
            case 0x2D958Cu: goto label_2d958c;
            case 0x2D9590u: goto label_2d9590;
            case 0x2D9594u: goto label_2d9594;
            case 0x2D9598u: goto label_2d9598;
            case 0x2D959Cu: goto label_2d959c;
            case 0x2D95A0u: goto label_2d95a0;
            case 0x2D95A4u: goto label_2d95a4;
            case 0x2D95A8u: goto label_2d95a8;
            case 0x2D95ACu: goto label_2d95ac;
            case 0x2D95B0u: goto label_2d95b0;
            case 0x2D95B4u: goto label_2d95b4;
            case 0x2D95B8u: goto label_2d95b8;
            case 0x2D95BCu: goto label_2d95bc;
            case 0x2D95C0u: goto label_2d95c0;
            case 0x2D95C4u: goto label_2d95c4;
            case 0x2D95C8u: goto label_2d95c8;
            case 0x2D95CCu: goto label_2d95cc;
            case 0x2D95D0u: goto label_2d95d0;
            case 0x2D95D4u: goto label_2d95d4;
            case 0x2D95D8u: goto label_2d95d8;
            case 0x2D95DCu: goto label_2d95dc;
            case 0x2D95E0u: goto label_2d95e0;
            case 0x2D95E4u: goto label_2d95e4;
            case 0x2D95E8u: goto label_2d95e8;
            case 0x2D95ECu: goto label_2d95ec;
            case 0x2D95F0u: goto label_2d95f0;
            case 0x2D95F4u: goto label_2d95f4;
            case 0x2D95F8u: goto label_2d95f8;
            case 0x2D95FCu: goto label_2d95fc;
            case 0x2D9600u: goto label_2d9600;
            case 0x2D9604u: goto label_2d9604;
            case 0x2D9608u: goto label_2d9608;
            case 0x2D960Cu: goto label_2d960c;
            case 0x2D9610u: goto label_2d9610;
            case 0x2D9614u: goto label_2d9614;
            case 0x2D9618u: goto label_2d9618;
            case 0x2D961Cu: goto label_2d961c;
            case 0x2D9620u: goto label_2d9620;
            case 0x2D9624u: goto label_2d9624;
            case 0x2D9628u: goto label_2d9628;
            case 0x2D962Cu: goto label_2d962c;
            case 0x2D9630u: goto label_2d9630;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9618u; }
            if (ctx->pc != 0x2D9618u) { return; }
        }
    }
    ctx->pc = 0x2D9618u;
label_2d9618:
    // 0x2d9618: 0xae020038
    ctx->pc = 0x2d9618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2d961c:
    // 0x2d961c: 0xae220030
    ctx->pc = 0x2d961cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2d9620:
    // 0x2d9620: 0xdfbf0020
    ctx->pc = 0x2d9620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9624:
    // 0x2d9624: 0xdfb10010
    ctx->pc = 0x2d9624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9628:
    // 0x2d9628: 0xdfb00000
    ctx->pc = 0x2d9628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d962c:
    // 0x2d962c: 0x3e00008
label_2d9630:
    if (ctx->pc == 0x2D9630u) {
        ctx->pc = 0x2D9630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D9634u;
        goto label_fallthrough_0x2d962c;
    }
    ctx->pc = 0x2D962Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9568u: goto label_2d9568;
            case 0x2D956Cu: goto label_2d956c;
            case 0x2D9570u: goto label_2d9570;
            case 0x2D9574u: goto label_2d9574;
            case 0x2D9578u: goto label_2d9578;
            case 0x2D957Cu: goto label_2d957c;
            case 0x2D9580u: goto label_2d9580;
            case 0x2D9584u: goto label_2d9584;
            case 0x2D9588u: goto label_2d9588;
            case 0x2D958Cu: goto label_2d958c;
            case 0x2D9590u: goto label_2d9590;
            case 0x2D9594u: goto label_2d9594;
            case 0x2D9598u: goto label_2d9598;
            case 0x2D959Cu: goto label_2d959c;
            case 0x2D95A0u: goto label_2d95a0;
            case 0x2D95A4u: goto label_2d95a4;
            case 0x2D95A8u: goto label_2d95a8;
            case 0x2D95ACu: goto label_2d95ac;
            case 0x2D95B0u: goto label_2d95b0;
            case 0x2D95B4u: goto label_2d95b4;
            case 0x2D95B8u: goto label_2d95b8;
            case 0x2D95BCu: goto label_2d95bc;
            case 0x2D95C0u: goto label_2d95c0;
            case 0x2D95C4u: goto label_2d95c4;
            case 0x2D95C8u: goto label_2d95c8;
            case 0x2D95CCu: goto label_2d95cc;
            case 0x2D95D0u: goto label_2d95d0;
            case 0x2D95D4u: goto label_2d95d4;
            case 0x2D95D8u: goto label_2d95d8;
            case 0x2D95DCu: goto label_2d95dc;
            case 0x2D95E0u: goto label_2d95e0;
            case 0x2D95E4u: goto label_2d95e4;
            case 0x2D95E8u: goto label_2d95e8;
            case 0x2D95ECu: goto label_2d95ec;
            case 0x2D95F0u: goto label_2d95f0;
            case 0x2D95F4u: goto label_2d95f4;
            case 0x2D95F8u: goto label_2d95f8;
            case 0x2D95FCu: goto label_2d95fc;
            case 0x2D9600u: goto label_2d9600;
            case 0x2D9604u: goto label_2d9604;
            case 0x2D9608u: goto label_2d9608;
            case 0x2D960Cu: goto label_2d960c;
            case 0x2D9610u: goto label_2d9610;
            case 0x2D9614u: goto label_2d9614;
            case 0x2D9618u: goto label_2d9618;
            case 0x2D961Cu: goto label_2d961c;
            case 0x2D9620u: goto label_2d9620;
            case 0x2D9624u: goto label_2d9624;
            case 0x2D9628u: goto label_2d9628;
            case 0x2D962Cu: goto label_2d962c;
            case 0x2D9630u: goto label_2d9630;
            default: break;
        }
        return;
    }
label_fallthrough_0x2d962c:
    ctx->pc = 0x2D9634u;
}
