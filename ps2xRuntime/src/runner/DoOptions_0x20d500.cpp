#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoOptions
// Address: 0x20d500 - 0x20e728
void DoOptions_0x20d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20d500u;

label_20d500:
    // 0x20d500: 0x27bdff40
    ctx->pc = 0x20d500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_20d504:
    // 0x20d504: 0xffbf00b0
    ctx->pc = 0x20d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_20d508:
    // 0x20d508: 0xffbe00a0
    ctx->pc = 0x20d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_20d50c:
    // 0x20d50c: 0xffb70090
    ctx->pc = 0x20d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_20d510:
    // 0x20d510: 0xffb60080
    ctx->pc = 0x20d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_20d514:
    // 0x20d514: 0xffb50070
    ctx->pc = 0x20d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_20d518:
    // 0x20d518: 0xffb40060
    ctx->pc = 0x20d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_20d51c:
    // 0x20d51c: 0xffb30050
    ctx->pc = 0x20d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_20d520:
    // 0x20d520: 0xffb20040
    ctx->pc = 0x20d520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_20d524:
    // 0x20d524: 0xffb10030
    ctx->pc = 0x20d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_20d528:
    // 0x20d528: 0xffb00020
    ctx->pc = 0x20d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_20d52c:
    // 0x20d52c: 0xafa00010
    ctx->pc = 0x20d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_20d530:
    // 0x20d530: 0x3c020031
    ctx->pc = 0x20d530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20d534:
    // 0x20d534: 0x8c420e4c
    ctx->pc = 0x20d534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3660)));
label_20d538:
    // 0x20d538: 0x10400003
label_20d53c:
    if (ctx->pc == 0x20D53Cu) {
        ctx->pc = 0x20D53Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D540u;
        goto label_20d540;
    }
    ctx->pc = 0x20D538u;
    {
        const bool branch_taken_0x20d538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D53Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20d538) {
            ctx->pc = 0x20D548u;
            goto label_20d548;
        }
    }
    ctx->pc = 0x20D540u;
label_20d540:
    // 0x20d540: 0xc08a1f8
label_20d544:
    if (ctx->pc == 0x20D544u) {
        ctx->pc = 0x20D548u;
        goto label_20d548;
    }
    ctx->pc = 0x20D540u;
    SET_GPR_U32(ctx, 31, 0x20D548u);
    ctx->pc = 0x2287E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ControllerMessageBox_0x2287e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D548u; }
    }
    if (ctx->pc != 0x20D548u) { return; }
    ctx->pc = 0x20D548u;
label_20d548:
    // 0x20d548: 0xc08312a
label_20d54c:
    if (ctx->pc == 0x20D54Cu) {
        ctx->pc = 0x20D550u;
        goto label_20d550;
    }
    ctx->pc = 0x20D548u;
    SET_GPR_U32(ctx, 31, 0x20D550u);
    ctx->pc = 0x20C4A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_options_time_0x20c4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D550u; }
    }
    if (ctx->pc != 0x20D550u) { return; }
    ctx->pc = 0x20D550u;
label_20d550:
    // 0x20d550: 0xc08a458
label_20d554:
    if (ctx->pc == 0x20D554u) {
        ctx->pc = 0x20D558u;
        goto label_20d558;
    }
    ctx->pc = 0x20D550u;
    SET_GPR_U32(ctx, 31, 0x20D558u);
    ctx->pc = 0x229160u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeFireScroll_0x229160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D558u; }
    }
    if (ctx->pc != 0x20D558u) { return; }
    ctx->pc = 0x20D558u;
label_20d558:
    // 0x20d558: 0x40f02d
    ctx->pc = 0x20d558u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d55c:
    // 0x20d55c: 0x3c020032
    ctx->pc = 0x20d55cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d560:
    // 0x20d560: 0x8c42d358
    ctx->pc = 0x20d560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
label_20d564:
    // 0x20d564: 0x14400037
label_20d568:
    if (ctx->pc == 0x20D568u) {
        ctx->pc = 0x20D568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20D56Cu;
        goto label_20d56c;
    }
    ctx->pc = 0x20D564u;
    {
        const bool branch_taken_0x20d564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d564) {
            ctx->pc = 0x20D644u;
            goto label_20d644;
        }
    }
    ctx->pc = 0x20D56Cu;
label_20d56c:
    // 0x20d56c: 0x3c020032
    ctx->pc = 0x20d56cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d570:
    // 0x20d570: 0x8c42d35c
    ctx->pc = 0x20d570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955868)));
label_20d574:
    // 0x20d574: 0x1440002e
label_20d578:
    if (ctx->pc == 0x20D578u) {
        ctx->pc = 0x20D578u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20D57Cu;
        goto label_20d57c;
    }
    ctx->pc = 0x20D574u;
    {
        const bool branch_taken_0x20d574 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D578u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d574) {
            ctx->pc = 0x20D630u;
            goto label_20d630;
        }
    }
    ctx->pc = 0x20D57Cu;
label_20d57c:
    // 0x20d57c: 0x3c020031
    ctx->pc = 0x20d57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20d580:
    // 0x20d580: 0x8c42f184
    ctx->pc = 0x20d580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_20d584:
    // 0x20d584: 0x14400006
label_20d588:
    if (ctx->pc == 0x20D588u) {
        ctx->pc = 0x20D588u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x20D58Cu;
        goto label_20d58c;
    }
    ctx->pc = 0x20D584u;
    {
        const bool branch_taken_0x20d584 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D588u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x20d584) {
            ctx->pc = 0x20D5A0u;
            goto label_20d5a0;
        }
    }
    ctx->pc = 0x20D58Cu;
label_20d58c:
    // 0x20d58c: 0x3c020032
    ctx->pc = 0x20d58cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d590:
    // 0x20d590: 0x8c421330
    ctx->pc = 0x20d590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4912)));
label_20d594:
    // 0x20d594: 0x4410026
label_20d598:
    if (ctx->pc == 0x20D598u) {
        ctx->pc = 0x20D598u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20D59Cu;
        goto label_20d59c;
    }
    ctx->pc = 0x20D594u;
    {
        const bool branch_taken_0x20d594 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20D598u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d594) {
            ctx->pc = 0x20D630u;
            goto label_20d630;
        }
    }
    ctx->pc = 0x20D59Cu;
label_20d59c:
    // 0x20d59c: 0x3c020031
    ctx->pc = 0x20d59cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20d5a0:
    // 0x20d5a0: 0x8c430018
    ctx->pc = 0x20d5a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_20d5a4:
    // 0x20d5a4: 0x24024010
    ctx->pc = 0x20d5a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_20d5a8:
    // 0x20d5a8: 0x14620006
label_20d5ac:
    if (ctx->pc == 0x20D5ACu) {
        ctx->pc = 0x20D5ACu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D5B0u;
        goto label_20d5b0;
    }
    ctx->pc = 0x20D5A8u;
    {
        const bool branch_taken_0x20d5a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D5ACu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20d5a8) {
            ctx->pc = 0x20D5C4u;
            goto label_20d5c4;
        }
    }
    ctx->pc = 0x20D5B0u;
label_20d5b0:
    // 0x20d5b0: 0x3c020032
    ctx->pc = 0x20d5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d5b4:
    // 0x20d5b4: 0x8c42080c
    ctx->pc = 0x20d5b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_20d5b8:
    // 0x20d5b8: 0x1440001d
label_20d5bc:
    if (ctx->pc == 0x20D5BCu) {
        ctx->pc = 0x20D5BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20D5C0u;
        goto label_20d5c0;
    }
    ctx->pc = 0x20D5B8u;
    {
        const bool branch_taken_0x20d5b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D5BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d5b8) {
            ctx->pc = 0x20D630u;
            goto label_20d630;
        }
    }
    ctx->pc = 0x20D5C0u;
label_20d5c0:
    // 0x20d5c0: 0x982d
    ctx->pc = 0x20d5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d5c4:
    // 0x20d5c4: 0x3c020032
    ctx->pc = 0x20d5c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d5c8:
    // 0x20d5c8: 0x24571bc0
    ctx->pc = 0x20d5c8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7104));
label_20d5cc:
    // 0x20d5cc: 0x24162b00
    ctx->pc = 0x20d5ccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 11008));
label_20d5d0:
    // 0x20d5d0: 0x24150001
    ctx->pc = 0x20d5d0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_20d5d4:
    // 0x20d5d4: 0x2412003c
    ctx->pc = 0x20d5d4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 60));
label_20d5d8:
    // 0x20d5d8: 0x3c020031
    ctx->pc = 0x20d5d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20d5dc:
    // 0x20d5dc: 0x24511b98
    ctx->pc = 0x20d5dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7064));
label_20d5e0:
    // 0x20d5e0: 0x3c100004
    ctx->pc = 0x20d5e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4 << 16));
label_20d5e4:
    // 0x20d5e4: 0x0
    ctx->pc = 0x20d5e4u;
    // NOP
label_20d5e8:
    // 0x20d5e8: 0x2a620004
    ctx->pc = 0x20d5e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_20d5ec:
    // 0x20d5ec: 0x1040000f
label_20d5f0:
    if (ctx->pc == 0x20D5F0u) {
        ctx->pc = 0x20D5F0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x20D5F4u;
        goto label_20d5f4;
    }
    ctx->pc = 0x20D5ECu;
    {
        const bool branch_taken_0x20d5ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D5F0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20d5ec) {
            ctx->pc = 0x20D62Cu;
            goto label_20d62c;
        }
    }
    ctx->pc = 0x20D5F4u;
label_20d5f4:
    // 0x20d5f4: 0x771021
    ctx->pc = 0x20d5f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_20d5f8:
    // 0x20d5f8: 0x8c4200fc
    ctx->pc = 0x20d5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_20d5fc:
    // 0x20d5fc: 0x5455fffa
label_20d600:
    if (ctx->pc == 0x20D600u) {
        ctx->pc = 0x20D600u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x20D604u;
        goto label_20d604;
    }
    ctx->pc = 0x20D5FCu;
    {
        const bool branch_taken_0x20d5fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x20d5fc) {
            ctx->pc = 0x20D600u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x20D5E8u;
            goto label_20d5e8;
        }
    }
    ctx->pc = 0x20D604u;
label_20d604:
    // 0x20d604: 0x2721818
    ctx->pc = 0x20d604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20d608:
    // 0x20d608: 0x711021
    ctx->pc = 0x20d608u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20d60c:
    // 0x20d60c: 0x8c420000
    ctx->pc = 0x20d60cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d610:
    // 0x20d610: 0x501024
    ctx->pc = 0x20d610u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20d614:
    // 0x20d614: 0x5040fff4
label_20d618:
    if (ctx->pc == 0x20D618u) {
        ctx->pc = 0x20D618u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x20D61Cu;
        goto label_20d61c;
    }
    ctx->pc = 0x20D614u;
    {
        const bool branch_taken_0x20d614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d614) {
            ctx->pc = 0x20D618u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x20D5E8u;
            goto label_20d5e8;
        }
    }
    ctx->pc = 0x20D61Cu;
label_20d61c:
    // 0x20d61c: 0xc083500
label_20d620:
    if (ctx->pc == 0x20D620u) {
        ctx->pc = 0x20D620u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D624u;
        goto label_20d624;
    }
    ctx->pc = 0x20D61Cu;
    SET_GPR_U32(ctx, 31, 0x20D624u);
    ctx->pc = 0x20D620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20D400u;
    {
        const uint32_t __entryPc = ctx->pc;
        OptionsStart_0x20d400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D624u; }
    }
    if (ctx->pc != 0x20D624u) { return; }
    ctx->pc = 0x20D624u;
label_20d624:
    // 0x20d624: 0x5040fff0
label_20d628:
    if (ctx->pc == 0x20D628u) {
        ctx->pc = 0x20D628u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x20D62Cu;
        goto label_20d62c;
    }
    ctx->pc = 0x20D624u;
    {
        const bool branch_taken_0x20d624 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d624) {
            ctx->pc = 0x20D628u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x20D5E8u;
            goto label_20d5e8;
        }
    }
    ctx->pc = 0x20D62Cu;
label_20d62c:
    // 0x20d62c: 0x3c020032
    ctx->pc = 0x20d62cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d630:
    // 0x20d630: 0x8c42d358
    ctx->pc = 0x20d630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
label_20d634:
    // 0x20d634: 0x14400003
label_20d638:
    if (ctx->pc == 0x20D638u) {
        ctx->pc = 0x20D638u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20D63Cu;
        goto label_20d63c;
    }
    ctx->pc = 0x20D634u;
    {
        const bool branch_taken_0x20d634 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D638u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d634) {
            ctx->pc = 0x20D644u;
            goto label_20d644;
        }
    }
    ctx->pc = 0x20D63Cu;
label_20d63c:
    // 0x20d63c: 0x1000042e
label_20d640:
    if (ctx->pc == 0x20D640u) {
        ctx->pc = 0x20D640u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D644u;
        goto label_20d644;
    }
    ctx->pc = 0x20D63Cu;
    {
        const bool branch_taken_0x20d63c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D640u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20d63c) {
            ctx->pc = 0x20E6F8u;
            goto label_20e6f8;
        }
    }
    ctx->pc = 0x20D644u;
label_20d644:
    // 0x20d644: 0x8c43d358
    ctx->pc = 0x20d644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
label_20d648:
    // 0x20d648: 0x24020001
    ctx->pc = 0x20d648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20d64c:
    // 0x20d64c: 0x14620007
label_20d650:
    if (ctx->pc == 0x20D650u) {
        ctx->pc = 0x20D650u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20D654u;
        goto label_20d654;
    }
    ctx->pc = 0x20D64Cu;
    {
        const bool branch_taken_0x20d64c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D650u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d64c) {
            ctx->pc = 0x20D66Cu;
            goto label_20d66c;
        }
    }
    ctx->pc = 0x20D654u;
label_20d654:
    // 0x20d654: 0x3c02003c
    ctx->pc = 0x20d654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20d658:
    // 0x20d658: 0x8c44c558
    ctx->pc = 0x20d658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952280)));
label_20d65c:
    // 0x20d65c: 0xc082caa
label_20d660:
    if (ctx->pc == 0x20D660u) {
        ctx->pc = 0x20D660u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D664u;
        goto label_20d664;
    }
    ctx->pc = 0x20D65Cu;
    SET_GPR_U32(ctx, 31, 0x20D664u);
    ctx->pc = 0x20D660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        finish_optmenu_0x20b2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D664u; }
    }
    if (ctx->pc != 0x20D664u) { return; }
    ctx->pc = 0x20D664u;
label_20d664:
    // 0x20d664: 0x10000425
label_20d668:
    if (ctx->pc == 0x20D668u) {
        ctx->pc = 0x20D668u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x20D66Cu;
        goto label_20d66c;
    }
    ctx->pc = 0x20D664u;
    {
        const bool branch_taken_0x20d664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D668u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x20d664) {
            ctx->pc = 0x20E6FCu;
            goto label_20e6fc;
        }
    }
    ctx->pc = 0x20D66Cu;
label_20d66c:
    // 0x20d66c: 0x8c42f2f4
    ctx->pc = 0x20d66cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
label_20d670:
    // 0x20d670: 0x1840000a
label_20d674:
    if (ctx->pc == 0x20D674u) {
        ctx->pc = 0x20D674u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x20D678u;
        goto label_20d678;
    }
    ctx->pc = 0x20D670u;
    {
        const bool branch_taken_0x20d670 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20D674u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20d670) {
            ctx->pc = 0x20D69Cu;
            goto label_20d69c;
        }
    }
    ctx->pc = 0x20D678u;
label_20d678:
    // 0x20d678: 0x2463c558
    ctx->pc = 0x20d678u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952280));
label_20d67c:
    // 0x20d67c: 0x2442ffff
    ctx->pc = 0x20d67cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_20d680:
    // 0x20d680: 0x21080
    ctx->pc = 0x20d680u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20d684:
    // 0x20d684: 0x431021
    ctx->pc = 0x20d684u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d688:
    // 0x20d688: 0x8c440000
    ctx->pc = 0x20d688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d68c:
    // 0x20d68c: 0x10800004
label_20d690:
    if (ctx->pc == 0x20D690u) {
        ctx->pc = 0x20D690u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20D694u;
        goto label_20d694;
    }
    ctx->pc = 0x20D68Cu;
    {
        const bool branch_taken_0x20d68c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D690u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d68c) {
            ctx->pc = 0x20D6A0u;
            goto label_20d6a0;
        }
    }
    ctx->pc = 0x20D694u;
label_20d694:
    // 0x20d694: 0xc082caa
label_20d698:
    if (ctx->pc == 0x20D698u) {
        ctx->pc = 0x20D698u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D69Cu;
        goto label_20d69c;
    }
    ctx->pc = 0x20D694u;
    SET_GPR_U32(ctx, 31, 0x20D69Cu);
    ctx->pc = 0x20D698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        finish_optmenu_0x20b2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D69Cu; }
    }
    if (ctx->pc != 0x20D69Cu) { return; }
    ctx->pc = 0x20D69Cu;
label_20d69c:
    // 0x20d69c: 0x3c020032
    ctx->pc = 0x20d69cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d6a0:
    // 0x20d6a0: 0x8c44f2f4
    ctx->pc = 0x20d6a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
label_20d6a4:
    // 0x20d6a4: 0x28820003
    ctx->pc = 0x20d6a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
label_20d6a8:
    // 0x20d6a8: 0x1040000a
label_20d6ac:
    if (ctx->pc == 0x20D6ACu) {
        ctx->pc = 0x20D6ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x20D6B0u;
        goto label_20d6b0;
    }
    ctx->pc = 0x20D6A8u;
    {
        const bool branch_taken_0x20d6a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D6ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20d6a8) {
            ctx->pc = 0x20D6D4u;
            goto label_20d6d4;
        }
    }
    ctx->pc = 0x20D6B0u;
label_20d6b0:
    // 0x20d6b0: 0x2463c558
    ctx->pc = 0x20d6b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952280));
label_20d6b4:
    // 0x20d6b4: 0x24820001
    ctx->pc = 0x20d6b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_20d6b8:
    // 0x20d6b8: 0x21080
    ctx->pc = 0x20d6b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20d6bc:
    // 0x20d6bc: 0x431021
    ctx->pc = 0x20d6bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d6c0:
    // 0x20d6c0: 0x8c440000
    ctx->pc = 0x20d6c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d6c4:
    // 0x20d6c4: 0x10800003
label_20d6c8:
    if (ctx->pc == 0x20D6C8u) {
        ctx->pc = 0x20D6CCu;
        goto label_20d6cc;
    }
    ctx->pc = 0x20D6C4u;
    {
        const bool branch_taken_0x20d6c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d6c4) {
            ctx->pc = 0x20D6D4u;
            goto label_20d6d4;
        }
    }
    ctx->pc = 0x20D6CCu;
label_20d6cc:
    // 0x20d6cc: 0xc082caa
label_20d6d0:
    if (ctx->pc == 0x20D6D0u) {
        ctx->pc = 0x20D6D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D6D4u;
        goto label_20d6d4;
    }
    ctx->pc = 0x20D6CCu;
    SET_GPR_U32(ctx, 31, 0x20D6D4u);
    ctx->pc = 0x20D6D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        finish_optmenu_0x20b2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6D4u; }
    }
    if (ctx->pc != 0x20D6D4u) { return; }
    ctx->pc = 0x20D6D4u;
label_20d6d4:
    // 0x20d6d4: 0xc0b01ec
label_20d6d8:
    if (ctx->pc == 0x20D6D8u) {
        ctx->pc = 0x20D6DCu;
        goto label_20d6dc;
    }
    ctx->pc = 0x20D6D4u;
    SET_GPR_U32(ctx, 31, 0x20D6DCu);
    ctx->pc = 0x2C07B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaWaitFinished_0x2c07b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6DCu; }
    }
    if (ctx->pc != 0x20D6DCu) { return; }
    ctx->pc = 0x20D6DCu;
label_20d6dc:
    // 0x20d6dc: 0x3c03003c
    ctx->pc = 0x20d6dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_20d6e0:
    // 0x20d6e0: 0x2463c558
    ctx->pc = 0x20d6e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952280));
label_20d6e4:
    // 0x20d6e4: 0x3c020032
    ctx->pc = 0x20d6e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d6e8:
    // 0x20d6e8: 0x8c42f2f4
    ctx->pc = 0x20d6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
label_20d6ec:
    // 0x20d6ec: 0x21080
    ctx->pc = 0x20d6ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20d6f0:
    // 0x20d6f0: 0x431021
    ctx->pc = 0x20d6f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d6f4:
    // 0x20d6f4: 0x8c500000
    ctx->pc = 0x20d6f4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d6f8:
    // 0x20d6f8: 0x3c020032
    ctx->pc = 0x20d6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d6fc:
    // 0x20d6fc: 0x8c421038
    ctx->pc = 0x20d6fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4152)));
label_20d700:
    // 0x20d700: 0x10400013
label_20d704:
    if (ctx->pc == 0x20D704u) {
        ctx->pc = 0x20D704u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->pc = 0x20D708u;
        goto label_20d708;
    }
    ctx->pc = 0x20D700u;
    {
        const bool branch_taken_0x20d700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D704u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 120)));
        if (branch_taken_0x20d700) {
            ctx->pc = 0x20D750u;
            goto label_20d750;
        }
    }
    ctx->pc = 0x20D708u;
label_20d708:
    // 0x20d708: 0xc08a7f4
label_20d70c:
    if (ctx->pc == 0x20D70Cu) {
        ctx->pc = 0x20D710u;
        goto label_20d710;
    }
    ctx->pc = 0x20D708u;
    SET_GPR_U32(ctx, 31, 0x20D710u);
    ctx->pc = 0x229FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_fullscreen_inventory_0x229fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D710u; }
    }
    if (ctx->pc != 0x20D710u) { return; }
    ctx->pc = 0x20D710u;
label_20d710:
    // 0x20d710: 0x200202d
    ctx->pc = 0x20d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d714:
    // 0x20d714: 0xc083146
label_20d718:
    if (ctx->pc == 0x20D718u) {
        ctx->pc = 0x20D718u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D71Cu;
        goto label_20d71c;
    }
    ctx->pc = 0x20D714u;
    SET_GPR_U32(ctx, 31, 0x20D71Cu);
    ctx->pc = 0x20D718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D71Cu; }
    }
    if (ctx->pc != 0x20D71Cu) { return; }
    ctx->pc = 0x20D71Cu;
label_20d71c:
    // 0x20d71c: 0x40a02d
    ctx->pc = 0x20d71cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d720:
    // 0x20d720: 0xc083112
label_20d724:
    if (ctx->pc == 0x20D724u) {
        ctx->pc = 0x20D724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D728u;
        goto label_20d728;
    }
    ctx->pc = 0x20D720u;
    SET_GPR_U32(ctx, 31, 0x20D728u);
    ctx->pc = 0x20D724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20C448u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_optmenu_0x20c448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D728u; }
    }
    if (ctx->pc != 0x20D728u) { return; }
    ctx->pc = 0x20D728u;
label_20d728:
    // 0x20d728: 0x26820002
    ctx->pc = 0x20d728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
label_20d72c:
    // 0x20d72c: 0x2c420002
    ctx->pc = 0x20d72cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_20d730:
    // 0x20d730: 0x14400003
label_20d734:
    if (ctx->pc == 0x20D734u) {
        ctx->pc = 0x20D734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x20D738u;
        goto label_20d738;
    }
    ctx->pc = 0x20D730u;
    {
        const bool branch_taken_0x20d730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x20d730) {
            ctx->pc = 0x20D740u;
            goto label_20d740;
        }
    }
    ctx->pc = 0x20D738u;
label_20d738:
    // 0x20d738: 0x168203ef
label_20d73c:
    if (ctx->pc == 0x20D73Cu) {
        ctx->pc = 0x20D73Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20D740u;
        goto label_20d740;
    }
    ctx->pc = 0x20D738u;
    {
        const bool branch_taken_0x20d738 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D73Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20d738) {
            ctx->pc = 0x20E6F8u;
            goto label_20e6f8;
        }
    }
    ctx->pc = 0x20D740u;
label_20d740:
    // 0x20d740: 0xc08a82a
label_20d744:
    if (ctx->pc == 0x20D744u) {
        ctx->pc = 0x20D748u;
        goto label_20d748;
    }
    ctx->pc = 0x20D740u;
    SET_GPR_U32(ctx, 31, 0x20D748u);
    ctx->pc = 0x22A0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_fullscreen_inventory_0x22a0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D748u; }
    }
    if (ctx->pc != 0x20D748u) { return; }
    ctx->pc = 0x20D748u;
label_20d748:
    // 0x20d748: 0x100003eb
label_20d74c:
    if (ctx->pc == 0x20D74Cu) {
        ctx->pc = 0x20D74Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20D750u;
        goto label_20d750;
    }
    ctx->pc = 0x20D748u;
    {
        const bool branch_taken_0x20d748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D74Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20d748) {
            ctx->pc = 0x20E6F8u;
            goto label_20e6f8;
        }
    }
    ctx->pc = 0x20D750u;
label_20d750:
    // 0x20d750: 0x3c020032
    ctx->pc = 0x20d750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d754:
    // 0x20d754: 0x8c43d358
    ctx->pc = 0x20d754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
label_20d758:
    // 0x20d758: 0x24020002
    ctx->pc = 0x20d758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_20d75c:
    // 0x20d75c: 0x14620003
label_20d760:
    if (ctx->pc == 0x20D760u) {
        ctx->pc = 0x20D764u;
        goto label_20d764;
    }
    ctx->pc = 0x20D75Cu;
    {
        const bool branch_taken_0x20d75c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20d75c) {
            ctx->pc = 0x20D76Cu;
            goto label_20d76c;
        }
    }
    ctx->pc = 0x20D764u;
label_20d764:
    // 0x20d764: 0x57c00008
label_20d768:
    if (ctx->pc == 0x20D768u) {
        ctx->pc = 0x20D768u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x20D76Cu;
        goto label_20d76c;
    }
    ctx->pc = 0x20D764u;
    {
        const bool branch_taken_0x20d764 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x20d764) {
            ctx->pc = 0x20D768u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x20D788u;
            goto label_20d788;
        }
    }
    ctx->pc = 0x20D76Cu;
label_20d76c:
    // 0x20d76c: 0xc082d7e
label_20d770:
    if (ctx->pc == 0x20D770u) {
        ctx->pc = 0x20D770u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D774u;
        goto label_20d774;
    }
    ctx->pc = 0x20D76Cu;
    SET_GPR_U32(ctx, 31, 0x20D774u);
    ctx->pc = 0x20D770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D774u; }
    }
    if (ctx->pc != 0x20D774u) { return; }
    ctx->pc = 0x20D774u;
label_20d774:
    // 0x20d774: 0x200202d
    ctx->pc = 0x20d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d778:
    // 0x20d778: 0xc083146
label_20d77c:
    if (ctx->pc == 0x20D77Cu) {
        ctx->pc = 0x20D77Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20D780u;
        goto label_20d780;
    }
    ctx->pc = 0x20D778u;
    SET_GPR_U32(ctx, 31, 0x20D780u);
    ctx->pc = 0x20D77Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_optmenu_0x20c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D780u; }
    }
    if (ctx->pc != 0x20D780u) { return; }
    ctx->pc = 0x20D780u;
label_20d780:
    // 0x20d780: 0x40a02d
    ctx->pc = 0x20d780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d784:
    // 0x20d784: 0x8e020074
    ctx->pc = 0x20d784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20d788:
    // 0x20d788: 0x24030024
    ctx->pc = 0x20d788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
label_20d78c:
    // 0x20d78c: 0x431018
    ctx->pc = 0x20d78cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20d790:
    // 0x20d790: 0x8e03001c
    ctx->pc = 0x20d790u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20d794:
    // 0x20d794: 0x3c013dcc
    ctx->pc = 0x20d794u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_20d798:
    // 0x20d798: 0x3421cccd
    ctx->pc = 0x20d798u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_20d79c:
    // 0x20d79c: 0x44816000
    ctx->pc = 0x20d79cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_20d7a0:
    // 0x20d7a0: 0x3c01bf80
    ctx->pc = 0x20d7a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_20d7a4:
    // 0x20d7a4: 0x44816800
    ctx->pc = 0x20d7a4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_20d7a8:
    // 0x20d7a8: 0xc097432
label_20d7ac:
    if (ctx->pc == 0x20D7ACu) {
        ctx->pc = 0x20D7ACu;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20D7B0u;
        goto label_20d7b0;
    }
    ctx->pc = 0x20D7A8u;
    SET_GPR_U32(ctx, 31, 0x20D7B0u);
    ctx->pc = 0x20D7ACu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x25D0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LowerBGMusic_0x25d0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7B0u; }
    }
    if (ctx->pc != 0x20D7B0u) { return; }
    ctx->pc = 0x20D7B0u;
label_20d7b0:
    // 0x20d7b0: 0x3c020032
    ctx->pc = 0x20d7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d7b4:
    // 0x20d7b4: 0x8c42d358
    ctx->pc = 0x20d7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
label_20d7b8:
    // 0x20d7b8: 0x2443fffe
    ctx->pc = 0x20d7b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967294));
label_20d7bc:
    // 0x20d7bc: 0x2c620016
    ctx->pc = 0x20d7bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 22));
label_20d7c0:
    // 0x20d7c0: 0x104003c1
label_20d7c4:
    if (ctx->pc == 0x20D7C4u) {
        ctx->pc = 0x20D7C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20D7C8u;
        goto label_20d7c8;
    }
    ctx->pc = 0x20D7C0u;
    {
        const bool branch_taken_0x20d7c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D7C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20d7c0) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D7C8u;
label_20d7c8:
    // 0x20d7c8: 0x24425450
    ctx->pc = 0x20d7c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21584));
label_20d7cc:
    // 0x20d7cc: 0x31880
    ctx->pc = 0x20d7ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20d7d0:
    // 0x20d7d0: 0x621821
    ctx->pc = 0x20d7d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d7d4:
    // 0x20d7d4: 0x8c620000
    ctx->pc = 0x20d7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d7d8:
    // 0x20d7d8: 0x400008
label_20d7dc:
    if (ctx->pc == 0x20D7DCu) {
        ctx->pc = 0x20D7E0u;
        goto label_20d7e0;
    }
    ctx->pc = 0x20D7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D7E0u;
label_20d7e0:
    // 0x20d7e0: 0x3c020031
    ctx->pc = 0x20d7e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20d7e4:
    // 0x20d7e4: 0xdc420e28
    ctx->pc = 0x20d7e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_20d7e8:
    // 0x20d7e8: 0x30420004
    ctx->pc = 0x20d7e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_20d7ec:
    // 0x20d7ec: 0x2403000b
    ctx->pc = 0x20d7ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
label_20d7f0:
    // 0x20d7f0: 0x62a00b
    ctx->pc = 0x20d7f0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_20d7f4:
    // 0x20d7f4: 0x26830002
    ctx->pc = 0x20d7f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 2));
label_20d7f8:
    // 0x20d7f8: 0x2c62000f
    ctx->pc = 0x20d7f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 15));
label_20d7fc:
    // 0x20d7fc: 0x104003b2
label_20d800:
    if (ctx->pc == 0x20D800u) {
        ctx->pc = 0x20D800u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20D804u;
        goto label_20d804;
    }
    ctx->pc = 0x20D7FCu;
    {
        const bool branch_taken_0x20d7fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D800u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20d7fc) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D804u;
label_20d804:
    // 0x20d804: 0x244254b0
    ctx->pc = 0x20d804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21680));
label_20d808:
    // 0x20d808: 0x31880
    ctx->pc = 0x20d808u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20d80c:
    // 0x20d80c: 0x621821
    ctx->pc = 0x20d80cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d810:
    // 0x20d810: 0x8c620000
    ctx->pc = 0x20d810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d814:
    // 0x20d814: 0x400008
label_20d818:
    if (ctx->pc == 0x20D818u) {
        ctx->pc = 0x20D81Cu;
        goto label_20d81c;
    }
    ctx->pc = 0x20D814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D81Cu;
label_20d81c:
    // 0x20d81c: 0x3c030032
    ctx->pc = 0x20d81cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20d820:
    // 0x20d820: 0x24020001
    ctx->pc = 0x20d820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20d824:
    // 0x20d824: 0x100003a8
label_20d828:
    if (ctx->pc == 0x20D828u) {
        ctx->pc = 0x20D828u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964296), GPR_U32(ctx, 2));
        ctx->pc = 0x20D82Cu;
        goto label_20d82c;
    }
    ctx->pc = 0x20D824u;
    {
        const bool branch_taken_0x20d824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D828u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964296), GPR_U32(ctx, 2));
        if (branch_taken_0x20d824) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D82Cu;
label_20d82c:
    // 0x20d82c: 0xc0981a6
label_20d830:
    if (ctx->pc == 0x20D830u) {
        ctx->pc = 0x20D834u;
        goto label_20d834;
    }
    ctx->pc = 0x20D82Cu;
    SET_GPR_U32(ctx, 31, 0x20D834u);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D834u; }
    }
    if (ctx->pc != 0x20D834u) { return; }
    ctx->pc = 0x20D834u;
label_20d834:
    // 0x20d834: 0x3c040032
    ctx->pc = 0x20d834u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20d838:
    // 0x20d838: 0x1000031b
label_20d83c:
    if (ctx->pc == 0x20D83Cu) {
        ctx->pc = 0x20D83Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956688));
        ctx->pc = 0x20D840u;
        goto label_20d840;
    }
    ctx->pc = 0x20D838u;
    {
        const bool branch_taken_0x20d838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D83Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956688));
        if (branch_taken_0x20d838) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20D840u;
label_20d840:
    // 0x20d840: 0x3c030032
    ctx->pc = 0x20d840u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20d844:
    // 0x20d844: 0x24020001
    ctx->pc = 0x20d844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20d848:
    // 0x20d848: 0xac62f444
    ctx->pc = 0x20d848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964292), GPR_U32(ctx, 2));
label_20d84c:
    // 0x20d84c: 0x2404ffff
    ctx->pc = 0x20d84cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20d850:
    // 0x20d850: 0xc082cec
label_20d854:
    if (ctx->pc == 0x20D854u) {
        ctx->pc = 0x20D854u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D858u;
        goto label_20d858;
    }
    ctx->pc = 0x20D850u;
    SET_GPR_U32(ctx, 31, 0x20D858u);
    ctx->pc = 0x20D854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_optmenu_0x20b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D858u; }
    }
    if (ctx->pc != 0x20D858u) { return; }
    ctx->pc = 0x20D858u;
label_20d858:
    // 0x20d858: 0x1000039c
label_20d85c:
    if (ctx->pc == 0x20D85Cu) {
        ctx->pc = 0x20D85Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20D860u;
        goto label_20d860;
    }
    ctx->pc = 0x20D858u;
    {
        const bool branch_taken_0x20d858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D85Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20d858) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20D860u;
label_20d860:
    // 0x20d860: 0x202d
    ctx->pc = 0x20d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d864:
    // 0x20d864: 0xc082c3a
label_20d868:
    if (ctx->pc == 0x20D868u) {
        ctx->pc = 0x20D868u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D86Cu;
        goto label_20d86c;
    }
    ctx->pc = 0x20D864u;
    SET_GPR_U32(ctx, 31, 0x20D86Cu);
    ctx->pc = 0x20D868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D86Cu; }
    }
    if (ctx->pc != 0x20D86Cu) { return; }
    ctx->pc = 0x20D86Cu;
label_20d86c:
    // 0x20d86c: 0xc081c88
label_20d870:
    if (ctx->pc == 0x20D870u) {
        ctx->pc = 0x20D870u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D874u;
        goto label_20d874;
    }
    ctx->pc = 0x20D86Cu;
    SET_GPR_U32(ctx, 31, 0x20D874u);
    ctx->pc = 0x20D870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207220u;
    {
        const uint32_t __entryPc = ctx->pc;
        controls_remove_active_player_0x207220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D874u; }
    }
    if (ctx->pc != 0x20D874u) { return; }
    ctx->pc = 0x20D874u;
label_20d874:
    // 0x20d874: 0x100003a0
label_20d878:
    if (ctx->pc == 0x20D878u) {
        ctx->pc = 0x20D878u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20D87Cu;
        goto label_20d87c;
    }
    ctx->pc = 0x20D874u;
    {
        const bool branch_taken_0x20d874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D878u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20d874) {
            ctx->pc = 0x20E6F8u;
            goto label_20e6f8;
        }
    }
    ctx->pc = 0x20D87Cu;
label_20d87c:
    // 0x20d87c: 0x2683fff4
    ctx->pc = 0x20d87cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294967284));
label_20d880:
    // 0x20d880: 0x2c62001a
    ctx->pc = 0x20d880u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 26));
label_20d884:
    // 0x20d884: 0x10400390
label_20d888:
    if (ctx->pc == 0x20D888u) {
        ctx->pc = 0x20D888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20D88Cu;
        goto label_20d88c;
    }
    ctx->pc = 0x20D884u;
    {
        const bool branch_taken_0x20d884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20d884) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D88Cu;
label_20d88c:
    // 0x20d88c: 0x244254f0
    ctx->pc = 0x20d88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21744));
label_20d890:
    // 0x20d890: 0x31880
    ctx->pc = 0x20d890u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20d894:
    // 0x20d894: 0x621821
    ctx->pc = 0x20d894u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d898:
    // 0x20d898: 0x8c620000
    ctx->pc = 0x20d898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d89c:
    // 0x20d89c: 0x400008
label_20d8a0:
    if (ctx->pc == 0x20D8A0u) {
        ctx->pc = 0x20D8A4u;
        goto label_20d8a4;
    }
    ctx->pc = 0x20D89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D8A4u;
label_20d8a4:
    // 0x20d8a4: 0x3c040032
    ctx->pc = 0x20d8a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20d8a8:
    // 0x20d8a8: 0x100002ff
label_20d8ac:
    if (ctx->pc == 0x20D8ACu) {
        ctx->pc = 0x20D8ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->pc = 0x20D8B0u;
        goto label_20d8b0;
    }
    ctx->pc = 0x20D8A8u;
    {
        const bool branch_taken_0x20d8a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D8ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957552));
        if (branch_taken_0x20d8a8) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20D8B0u;
label_20d8b0:
    // 0x20d8b0: 0xc082c7a
label_20d8b4:
    if (ctx->pc == 0x20D8B4u) {
        ctx->pc = 0x20D8B8u;
        goto label_20d8b8;
    }
    ctx->pc = 0x20D8B0u;
    SET_GPR_U32(ctx, 31, 0x20D8B8u);
    ctx->pc = 0x20B1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_all_optmenus_0x20b1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8B8u; }
    }
    if (ctx->pc != 0x20D8B8u) { return; }
    ctx->pc = 0x20D8B8u;
label_20d8b8:
    // 0x20d8b8: 0xc0a145a
label_20d8bc:
    if (ctx->pc == 0x20D8BCu) {
        ctx->pc = 0x20D8BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20D8C0u;
        goto label_20d8c0;
    }
    ctx->pc = 0x20D8B8u;
    SET_GPR_U32(ctx, 31, 0x20D8C0u);
    ctx->pc = 0x20D8BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x285168u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_select_0x285168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8C0u; }
    }
    if (ctx->pc != 0x20D8C0u) { return; }
    ctx->pc = 0x20D8C0u;
label_20d8c0:
    // 0x20d8c0: 0x6600381
label_20d8c4:
    if (ctx->pc == 0x20D8C4u) {
        ctx->pc = 0x20D8C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x20D8C8u;
        goto label_20d8c8;
    }
    ctx->pc = 0x20D8C0u;
    {
        const bool branch_taken_0x20d8c0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x20D8C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x20d8c0) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D8C8u;
label_20d8c8:
    // 0x20d8c8: 0x24631bc0
    ctx->pc = 0x20d8c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
label_20d8cc:
    // 0x20d8cc: 0x24022b00
    ctx->pc = 0x20d8ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
label_20d8d0:
    // 0x20d8d0: 0x2621018
    ctx->pc = 0x20d8d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20d8d4:
    // 0x20d8d4: 0x431021
    ctx->pc = 0x20d8d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d8d8:
    // 0x20d8d8: 0x24030002
    ctx->pc = 0x20d8d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_20d8dc:
    // 0x20d8dc: 0xac4300fc
    ctx->pc = 0x20d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 3));
label_20d8e0:
    // 0x20d8e0: 0x24030001
    ctx->pc = 0x20d8e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20d8e4:
    // 0x20d8e4: 0x10000378
label_20d8e8:
    if (ctx->pc == 0x20D8E8u) {
        ctx->pc = 0x20D8E8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 10964), GPR_U32(ctx, 3));
        ctx->pc = 0x20D8ECu;
        goto label_20d8ec;
    }
    ctx->pc = 0x20D8E4u;
    {
        const bool branch_taken_0x20d8e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D8E8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 10964), GPR_U32(ctx, 3));
        if (branch_taken_0x20d8e4) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D8ECu;
label_20d8ec:
    // 0x20d8ec: 0xc082c7a
label_20d8f0:
    if (ctx->pc == 0x20D8F0u) {
        ctx->pc = 0x20D8F4u;
        goto label_20d8f4;
    }
    ctx->pc = 0x20D8ECu;
    SET_GPR_U32(ctx, 31, 0x20D8F4u);
    ctx->pc = 0x20B1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_all_optmenus_0x20b1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8F4u; }
    }
    if (ctx->pc != 0x20D8F4u) { return; }
    ctx->pc = 0x20D8F4u;
label_20d8f4:
    // 0x20d8f4: 0xc0a2d80
label_20d8f8:
    if (ctx->pc == 0x20D8F8u) {
        ctx->pc = 0x20D8F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20D8FCu;
        goto label_20d8fc;
    }
    ctx->pc = 0x20D8F4u;
    SET_GPR_U32(ctx, 31, 0x20D8FCu);
    ctx->pc = 0x20D8F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x28B600u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_shop_0x28b600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8FCu; }
    }
    if (ctx->pc != 0x20D8FCu) { return; }
    ctx->pc = 0x20D8FCu;
label_20d8fc:
    // 0x20d8fc: 0x10000373
label_20d900:
    if (ctx->pc == 0x20D900u) {
        ctx->pc = 0x20D900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20D904u;
        goto label_20d904;
    }
    ctx->pc = 0x20D8FCu;
    {
        const bool branch_taken_0x20d8fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20d8fc) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20D904u;
label_20d904:
    // 0x20d904: 0xc082c7a
label_20d908:
    if (ctx->pc == 0x20D908u) {
        ctx->pc = 0x20D90Cu;
        goto label_20d90c;
    }
    ctx->pc = 0x20D904u;
    SET_GPR_U32(ctx, 31, 0x20D90Cu);
    ctx->pc = 0x20B1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_all_optmenus_0x20b1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D90Cu; }
    }
    if (ctx->pc != 0x20D90Cu) { return; }
    ctx->pc = 0x20D90Cu;
label_20d90c:
    // 0x20d90c: 0xc0a2d80
label_20d910:
    if (ctx->pc == 0x20D910u) {
        ctx->pc = 0x20D910u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20D914u;
        goto label_20d914;
    }
    ctx->pc = 0x20D90Cu;
    SET_GPR_U32(ctx, 31, 0x20D914u);
    ctx->pc = 0x20D910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x28B600u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_shop_0x28b600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D914u; }
    }
    if (ctx->pc != 0x20D914u) { return; }
    ctx->pc = 0x20D914u;
label_20d914:
    // 0x20d914: 0x1000036d
label_20d918:
    if (ctx->pc == 0x20D918u) {
        ctx->pc = 0x20D918u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20D91Cu;
        goto label_20d91c;
    }
    ctx->pc = 0x20D914u;
    {
        const bool branch_taken_0x20d914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D918u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20d914) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20D91Cu;
label_20d91c:
    // 0x20d91c: 0x3c100032
    ctx->pc = 0x20d91cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20d920:
    // 0x20d920: 0x2604e0c8
    ctx->pc = 0x20d920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294959304));
label_20d924:
    // 0x20d924: 0xc082c3a
label_20d928:
    if (ctx->pc == 0x20D928u) {
        ctx->pc = 0x20D928u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D92Cu;
        goto label_20d92c;
    }
    ctx->pc = 0x20D924u;
    SET_GPR_U32(ctx, 31, 0x20D92Cu);
    ctx->pc = 0x20D928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D92Cu; }
    }
    if (ctx->pc != 0x20D92Cu) { return; }
    ctx->pc = 0x20D92Cu;
label_20d92c:
    // 0x20d92c: 0x2610e0c8
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294959304));
label_20d930:
    // 0x20d930: 0x10000365
label_20d934:
    if (ctx->pc == 0x20D934u) {
        ctx->pc = 0x20D934u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x20D938u;
        goto label_20d938;
    }
    ctx->pc = 0x20D930u;
    {
        const bool branch_taken_0x20d930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D934u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        if (branch_taken_0x20d930) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D938u;
label_20d938:
    // 0x20d938: 0x2402000c
    ctx->pc = 0x20d938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_20d93c:
    // 0x20d93c: 0x12820005
label_20d940:
    if (ctx->pc == 0x20D940u) {
        ctx->pc = 0x20D940u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x20D944u;
        goto label_20d944;
    }
    ctx->pc = 0x20D93Cu;
    {
        const bool branch_taken_0x20d93c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20D940u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x20d93c) {
            ctx->pc = 0x20D954u;
            goto label_20d954;
        }
    }
    ctx->pc = 0x20D944u;
label_20d944:
    // 0x20d944: 0x12820006
label_20d948:
    if (ctx->pc == 0x20D948u) {
        ctx->pc = 0x20D948u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20D94Cu;
        goto label_20d94c;
    }
    ctx->pc = 0x20D944u;
    {
        const bool branch_taken_0x20d944 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20D948u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20d944) {
            ctx->pc = 0x20D960u;
            goto label_20d960;
        }
    }
    ctx->pc = 0x20D94Cu;
label_20d94c:
    // 0x20d94c: 0x10000360
label_20d950:
    if (ctx->pc == 0x20D950u) {
        ctx->pc = 0x20D950u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20D954u;
        goto label_20d954;
    }
    ctx->pc = 0x20D94Cu;
    {
        const bool branch_taken_0x20d94c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D950u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x20d94c) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20D954u;
label_20d954:
    // 0x20d954: 0x3c040032
    ctx->pc = 0x20d954u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20d958:
    // 0x20d958: 0x100002d3
label_20d95c:
    if (ctx->pc == 0x20D95Cu) {
        ctx->pc = 0x20D95Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958272));
        ctx->pc = 0x20D960u;
        goto label_20d960;
    }
    ctx->pc = 0x20D958u;
    {
        const bool branch_taken_0x20d958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D95Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958272));
        if (branch_taken_0x20d958) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20D960u;
label_20d960:
    // 0x20d960: 0x3c100032
    ctx->pc = 0x20d960u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20d964:
    // 0x20d964: 0x2604df70
    ctx->pc = 0x20d964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294958960));
label_20d968:
    // 0x20d968: 0xc082c3a
label_20d96c:
    if (ctx->pc == 0x20D96Cu) {
        ctx->pc = 0x20D96Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D970u;
        goto label_20d970;
    }
    ctx->pc = 0x20D968u;
    SET_GPR_U32(ctx, 31, 0x20D970u);
    ctx->pc = 0x20D96Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D970u; }
    }
    if (ctx->pc != 0x20D970u) { return; }
    ctx->pc = 0x20D970u;
label_20d970:
    // 0x20d970: 0x2610df70
    ctx->pc = 0x20d970u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294958960));
label_20d974:
    // 0x20d974: 0x10000354
label_20d978:
    if (ctx->pc == 0x20D978u) {
        ctx->pc = 0x20D978u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x20D97Cu;
        goto label_20d97c;
    }
    ctx->pc = 0x20D974u;
    {
        const bool branch_taken_0x20d974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D978u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        if (branch_taken_0x20d974) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D97Cu;
label_20d97c:
    // 0x20d97c: 0x2683fff0
    ctx->pc = 0x20d97cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294967280));
label_20d980:
    // 0x20d980: 0x2c620007
    ctx->pc = 0x20d980u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 7));
label_20d984:
    // 0x20d984: 0x10400350
label_20d988:
    if (ctx->pc == 0x20D988u) {
        ctx->pc = 0x20D988u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20D98Cu;
        goto label_20d98c;
    }
    ctx->pc = 0x20D984u;
    {
        const bool branch_taken_0x20d984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D988u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20d984) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D98Cu;
label_20d98c:
    // 0x20d98c: 0x24425560
    ctx->pc = 0x20d98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21856));
label_20d990:
    // 0x20d990: 0x31880
    ctx->pc = 0x20d990u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20d994:
    // 0x20d994: 0x621821
    ctx->pc = 0x20d994u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20d998:
    // 0x20d998: 0x8c620000
    ctx->pc = 0x20d998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d99c:
    // 0x20d99c: 0x400008
label_20d9a0:
    if (ctx->pc == 0x20D9A0u) {
        ctx->pc = 0x20D9A4u;
        goto label_20d9a4;
    }
    ctx->pc = 0x20D99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D9A4u;
label_20d9a4:
    // 0x20d9a4: 0x3c040032
    ctx->pc = 0x20d9a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20d9a8:
    // 0x20d9a8: 0x2484e240
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959680));
label_20d9ac:
    // 0x20d9ac: 0xc082c3a
label_20d9b0:
    if (ctx->pc == 0x20D9B0u) {
        ctx->pc = 0x20D9B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D9B4u;
        goto label_20d9b4;
    }
    ctx->pc = 0x20D9ACu;
    SET_GPR_U32(ctx, 31, 0x20D9B4u);
    ctx->pc = 0x20D9B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9B4u; }
    }
    if (ctx->pc != 0x20D9B4u) { return; }
    ctx->pc = 0x20D9B4u;
label_20d9b4:
    // 0x20d9b4: 0xc08325e
label_20d9b8:
    if (ctx->pc == 0x20D9B8u) {
        ctx->pc = 0x20D9BCu;
        goto label_20d9bc;
    }
    ctx->pc = 0x20D9B4u;
    SET_GPR_U32(ctx, 31, 0x20D9BCu);
    ctx->pc = 0x20C978u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_audiomenu_0x20c978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9BCu; }
    }
    if (ctx->pc != 0x20D9BCu) { return; }
    ctx->pc = 0x20D9BCu;
label_20d9bc:
    // 0x20d9bc: 0x10000343
label_20d9c0:
    if (ctx->pc == 0x20D9C0u) {
        ctx->pc = 0x20D9C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20D9C4u;
        goto label_20d9c4;
    }
    ctx->pc = 0x20D9BCu;
    {
        const bool branch_taken_0x20d9bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D9C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20d9bc) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20D9C4u;
label_20d9c4:
    // 0x20d9c4: 0x3c040032
    ctx->pc = 0x20d9c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20d9c8:
    // 0x20d9c8: 0x100002b7
label_20d9cc:
    if (ctx->pc == 0x20D9CCu) {
        ctx->pc = 0x20D9CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958616));
        ctx->pc = 0x20D9D0u;
        goto label_20d9d0;
    }
    ctx->pc = 0x20D9C8u;
    {
        const bool branch_taken_0x20d9c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D9CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958616));
        if (branch_taken_0x20d9c8) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20D9D0u;
label_20d9d0:
    // 0x20d9d0: 0x3c100032
    ctx->pc = 0x20d9d0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20d9d4:
    // 0x20d9d4: 0x2604e688
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294960776));
label_20d9d8:
    // 0x20d9d8: 0xc082c3a
label_20d9dc:
    if (ctx->pc == 0x20D9DCu) {
        ctx->pc = 0x20D9DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D9E0u;
        goto label_20d9e0;
    }
    ctx->pc = 0x20D9D8u;
    SET_GPR_U32(ctx, 31, 0x20D9E0u);
    ctx->pc = 0x20D9DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9E0u; }
    }
    if (ctx->pc != 0x20D9E0u) { return; }
    ctx->pc = 0x20D9E0u;
label_20d9e0:
    // 0x20d9e0: 0x2610e688
    ctx->pc = 0x20d9e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294960776));
label_20d9e4:
    // 0x20d9e4: 0x3c020032
    ctx->pc = 0x20d9e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d9e8:
    // 0x20d9e8: 0x8c42f470
    ctx->pc = 0x20d9e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964336)));
label_20d9ec:
    // 0x20d9ec: 0x10000336
label_20d9f0:
    if (ctx->pc == 0x20D9F0u) {
        ctx->pc = 0x20D9F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x20D9F4u;
        goto label_20d9f4;
    }
    ctx->pc = 0x20D9ECu;
    {
        const bool branch_taken_0x20d9ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D9F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        if (branch_taken_0x20d9ec) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20D9F4u;
label_20d9f4:
    // 0x20d9f4: 0x3c04003c
    ctx->pc = 0x20d9f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_20d9f8:
    // 0x20d9f8: 0x3c020032
    ctx->pc = 0x20d9f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d9fc:
    // 0x20d9fc: 0x2442f458
    ctx->pc = 0x20d9fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964312));
label_20da00:
    // 0x20da00: 0x8c43000c
    ctx->pc = 0x20da00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20da04:
    // 0x20da04: 0xac83c50c
    ctx->pc = 0x20da04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952204), GPR_U32(ctx, 3));
label_20da08:
    // 0x20da08: 0x3c03003c
    ctx->pc = 0x20da08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_20da0c:
    // 0x20da0c: 0x8c420010
    ctx->pc = 0x20da0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_20da10:
    // 0x20da10: 0xac62c510
    ctx->pc = 0x20da10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952208), GPR_U32(ctx, 2));
label_20da14:
    // 0x20da14: 0x3c040032
    ctx->pc = 0x20da14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20da18:
    // 0x20da18: 0x100002a3
label_20da1c:
    if (ctx->pc == 0x20DA1Cu) {
        ctx->pc = 0x20DA1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961048));
        ctx->pc = 0x20DA20u;
        goto label_20da20;
    }
    ctx->pc = 0x20DA18u;
    {
        const bool branch_taken_0x20da18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DA1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961048));
        if (branch_taken_0x20da18) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20DA20u;
label_20da20:
    // 0x20da20: 0x3c040032
    ctx->pc = 0x20da20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20da24:
    // 0x20da24: 0x100002a0
label_20da28:
    if (ctx->pc == 0x20DA28u) {
        ctx->pc = 0x20DA28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961528));
        ctx->pc = 0x20DA2Cu;
        goto label_20da2c;
    }
    ctx->pc = 0x20DA24u;
    {
        const bool branch_taken_0x20da24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DA28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961528));
        if (branch_taken_0x20da24) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20DA2Cu;
label_20da2c:
    // 0x20da2c: 0x24020012
    ctx->pc = 0x20da2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
label_20da30:
    // 0x20da30: 0x12820005
label_20da34:
    if (ctx->pc == 0x20DA34u) {
        ctx->pc = 0x20DA34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x20DA38u;
        goto label_20da38;
    }
    ctx->pc = 0x20DA30u;
    {
        const bool branch_taken_0x20da30 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DA34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x20da30) {
            ctx->pc = 0x20DA48u;
            goto label_20da48;
        }
    }
    ctx->pc = 0x20DA38u;
label_20da38:
    // 0x20da38: 0x1282000c
label_20da3c:
    if (ctx->pc == 0x20DA3Cu) {
        ctx->pc = 0x20DA3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DA40u;
        goto label_20da40;
    }
    ctx->pc = 0x20DA38u;
    {
        const bool branch_taken_0x20da38 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DA3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20da38) {
            ctx->pc = 0x20DA6Cu;
            goto label_20da6c;
        }
    }
    ctx->pc = 0x20DA40u;
label_20da40:
    // 0x20da40: 0x10000323
label_20da44:
    if (ctx->pc == 0x20DA44u) {
        ctx->pc = 0x20DA44u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20DA48u;
        goto label_20da48;
    }
    ctx->pc = 0x20DA40u;
    {
        const bool branch_taken_0x20da40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DA44u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x20da40) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20DA48u;
label_20da48:
    // 0x20da48: 0x3c100032
    ctx->pc = 0x20da48u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20da4c:
    // 0x20da4c: 0x2604e3b8
    ctx->pc = 0x20da4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294960056));
label_20da50:
    // 0x20da50: 0xc082c3a
label_20da54:
    if (ctx->pc == 0x20DA54u) {
        ctx->pc = 0x20DA54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DA58u;
        goto label_20da58;
    }
    ctx->pc = 0x20DA50u;
    SET_GPR_U32(ctx, 31, 0x20DA58u);
    ctx->pc = 0x20DA54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DA58u; }
    }
    if (ctx->pc != 0x20DA58u) { return; }
    ctx->pc = 0x20DA58u;
label_20da58:
    // 0x20da58: 0x2610e3b8
    ctx->pc = 0x20da58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294960056));
label_20da5c:
    // 0x20da5c: 0x3c020032
    ctx->pc = 0x20da5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20da60:
    // 0x20da60: 0x8c42f46c
    ctx->pc = 0x20da60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964332)));
label_20da64:
    // 0x20da64: 0x10000318
label_20da68:
    if (ctx->pc == 0x20DA68u) {
        ctx->pc = 0x20DA68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x20DA6Cu;
        goto label_20da6c;
    }
    ctx->pc = 0x20DA64u;
    {
        const bool branch_taken_0x20da64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DA68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        if (branch_taken_0x20da64) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DA6Cu;
label_20da6c:
    // 0x20da6c: 0x3c100032
    ctx->pc = 0x20da6cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20da70:
    // 0x20da70: 0x2604e530
    ctx->pc = 0x20da70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294960432));
label_20da74:
    // 0x20da74: 0xc082c3a
label_20da78:
    if (ctx->pc == 0x20DA78u) {
        ctx->pc = 0x20DA78u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DA7Cu;
        goto label_20da7c;
    }
    ctx->pc = 0x20DA74u;
    SET_GPR_U32(ctx, 31, 0x20DA7Cu);
    ctx->pc = 0x20DA78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DA7Cu; }
    }
    if (ctx->pc != 0x20DA7Cu) { return; }
    ctx->pc = 0x20DA7Cu;
label_20da7c:
    // 0x20da7c: 0x2610e530
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294960432));
label_20da80:
    // 0x20da80: 0x3c020032
    ctx->pc = 0x20da80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20da84:
    // 0x20da84: 0x8c42f474
    ctx->pc = 0x20da84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964340)));
label_20da88:
    // 0x20da88: 0x1000030f
label_20da8c:
    if (ctx->pc == 0x20DA8Cu) {
        ctx->pc = 0x20DA8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x20DA90u;
        goto label_20da90;
    }
    ctx->pc = 0x20DA88u;
    {
        const bool branch_taken_0x20da88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DA8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        if (branch_taken_0x20da88) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DA90u;
label_20da90:
    // 0x20da90: 0x24020025
    ctx->pc = 0x20da90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
label_20da94:
    // 0x20da94: 0x1682030d
label_20da98:
    if (ctx->pc == 0x20DA98u) {
        ctx->pc = 0x20DA98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DA9Cu;
        goto label_20da9c;
    }
    ctx->pc = 0x20DA94u;
    {
        const bool branch_taken_0x20da94 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x20DA98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20da94) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DA9Cu;
label_20da9c:
    // 0x20da9c: 0x3c030032
    ctx->pc = 0x20da9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20daa0:
    // 0x20daa0: 0x24020001
    ctx->pc = 0x20daa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20daa4:
    // 0x20daa4: 0x10000007
label_20daa8:
    if (ctx->pc == 0x20DAA8u) {
        ctx->pc = 0x20DAA8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964304), GPR_U32(ctx, 2));
        ctx->pc = 0x20DAACu;
        goto label_20daac;
    }
    ctx->pc = 0x20DAA4u;
    {
        const bool branch_taken_0x20daa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DAA8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964304), GPR_U32(ctx, 2));
        if (branch_taken_0x20daa4) {
            ctx->pc = 0x20DAC4u;
            goto label_20dac4;
        }
    }
    ctx->pc = 0x20DAACu;
label_20daac:
    // 0x20daac: 0x24020026
    ctx->pc = 0x20daacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
label_20dab0:
    // 0x20dab0: 0x16820306
label_20dab4:
    if (ctx->pc == 0x20DAB4u) {
        ctx->pc = 0x20DAB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DAB8u;
        goto label_20dab8;
    }
    ctx->pc = 0x20DAB0u;
    {
        const bool branch_taken_0x20dab0 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x20DAB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dab0) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DAB8u;
label_20dab8:
    // 0x20dab8: 0x3c030032
    ctx->pc = 0x20dab8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20dabc:
    // 0x20dabc: 0x24020001
    ctx->pc = 0x20dabcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20dac0:
    // 0x20dac0: 0xac62f454
    ctx->pc = 0x20dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964308), GPR_U32(ctx, 2));
label_20dac4:
    // 0x20dac4: 0x2404ffff
    ctx->pc = 0x20dac4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20dac8:
    // 0x20dac8: 0xc082cec
label_20dacc:
    if (ctx->pc == 0x20DACCu) {
        ctx->pc = 0x20DACCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20DAD0u;
        goto label_20dad0;
    }
    ctx->pc = 0x20DAC8u;
    SET_GPR_U32(ctx, 31, 0x20DAD0u);
    ctx->pc = 0x20DACCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x20B3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_optmenu_0x20b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DAD0u; }
    }
    if (ctx->pc != 0x20DAD0u) { return; }
    ctx->pc = 0x20DAD0u;
label_20dad0:
    // 0x20dad0: 0x100002fe
label_20dad4:
    if (ctx->pc == 0x20DAD4u) {
        ctx->pc = 0x20DAD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DAD8u;
        goto label_20dad8;
    }
    ctx->pc = 0x20DAD0u;
    {
        const bool branch_taken_0x20dad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DAD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dad0) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DAD8u;
label_20dad8:
    // 0x20dad8: 0x44806000
    ctx->pc = 0x20dad8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_20dadc:
    // 0x20dadc: 0x3c013f80
    ctx->pc = 0x20dadcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_20dae0:
    // 0x20dae0: 0x44816800
    ctx->pc = 0x20dae0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_20dae4:
    // 0x20dae4: 0xc097432
label_20dae8:
    if (ctx->pc == 0x20DAE8u) {
        ctx->pc = 0x20DAE8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DAECu;
        goto label_20daec;
    }
    ctx->pc = 0x20DAE4u;
    SET_GPR_U32(ctx, 31, 0x20DAECu);
    ctx->pc = 0x20DAE8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LowerBGMusic_0x25d0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DAECu; }
    }
    if (ctx->pc != 0x20DAECu) { return; }
    ctx->pc = 0x20DAECu;
label_20daec:
    // 0x20daec: 0xc083308
label_20daf0:
    if (ctx->pc == 0x20DAF0u) {
        ctx->pc = 0x20DAF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DAF4u;
        goto label_20daf4;
    }
    ctx->pc = 0x20DAECu;
    SET_GPR_U32(ctx, 31, 0x20DAF4u);
    ctx->pc = 0x20DAF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20CC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_audiomenu_0x20cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DAF4u; }
    }
    if (ctx->pc != 0x20DAF4u) { return; }
    ctx->pc = 0x20DAF4u;
label_20daf4:
    // 0x20daf4: 0x26830002
    ctx->pc = 0x20daf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 2));
label_20daf8:
    // 0x20daf8: 0x2c62001c
    ctx->pc = 0x20daf8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 28));
label_20dafc:
    // 0x20dafc: 0x10400067
label_20db00:
    if (ctx->pc == 0x20DB00u) {
        ctx->pc = 0x20DB00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20DB04u;
        goto label_20db04;
    }
    ctx->pc = 0x20DAFCu;
    {
        const bool branch_taken_0x20dafc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DB00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20dafc) {
            ctx->pc = 0x20DC9Cu;
            goto label_20dc9c;
        }
    }
    ctx->pc = 0x20DB04u;
label_20db04:
    // 0x20db04: 0x24425580
    ctx->pc = 0x20db04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21888));
label_20db08:
    // 0x20db08: 0x31880
    ctx->pc = 0x20db08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20db0c:
    // 0x20db0c: 0x621821
    ctx->pc = 0x20db0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20db10:
    // 0x20db10: 0x8c620000
    ctx->pc = 0x20db10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20db14:
    // 0x20db14: 0x400008
label_20db18:
    if (ctx->pc == 0x20DB18u) {
        ctx->pc = 0x20DB1Cu;
        goto label_20db1c;
    }
    ctx->pc = 0x20DB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DB1Cu;
label_20db1c:
    // 0x20db1c: 0x2411fffe
    ctx->pc = 0x20db1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967294));
label_20db20:
    // 0x20db20: 0x8e430004
    ctx->pc = 0x20db20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20db24:
    // 0x20db24: 0x24020018
    ctx->pc = 0x20db24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_20db28:
    // 0x20db28: 0x1062000d
label_20db2c:
    if (ctx->pc == 0x20DB2Cu) {
        ctx->pc = 0x20DB2Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x20DB30u;
        goto label_20db30;
    }
    ctx->pc = 0x20DB28u;
    {
        const bool branch_taken_0x20db28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DB2Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x20db28) {
            ctx->pc = 0x20DB60u;
            goto label_20db60;
        }
    }
    ctx->pc = 0x20DB30u;
label_20db30:
    // 0x20db30: 0x28620019
    ctx->pc = 0x20db30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 25));
label_20db34:
    // 0x20db34: 0x10400005
label_20db38:
    if (ctx->pc == 0x20DB38u) {
        ctx->pc = 0x20DB38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x20DB3Cu;
        goto label_20db3c;
    }
    ctx->pc = 0x20DB34u;
    {
        const bool branch_taken_0x20db34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DB38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x20db34) {
            ctx->pc = 0x20DB4Cu;
            goto label_20db4c;
        }
    }
    ctx->pc = 0x20DB3Cu;
label_20db3c:
    // 0x20db3c: 0x10620029
label_20db40:
    if (ctx->pc == 0x20DB40u) {
        ctx->pc = 0x20DB40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DB44u;
        goto label_20db44;
    }
    ctx->pc = 0x20DB3Cu;
    {
        const bool branch_taken_0x20db3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DB40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20db3c) {
            ctx->pc = 0x20DBE4u;
            goto label_20dbe4;
        }
    }
    ctx->pc = 0x20DB44u;
label_20db44:
    // 0x20db44: 0x100002e2
label_20db48:
    if (ctx->pc == 0x20DB48u) {
        ctx->pc = 0x20DB48u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20DB4Cu;
        goto label_20db4c;
    }
    ctx->pc = 0x20DB44u;
    {
        const bool branch_taken_0x20db44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DB48u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x20db44) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20DB4Cu;
label_20db4c:
    // 0x20db4c: 0x24020019
    ctx->pc = 0x20db4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
label_20db50:
    // 0x20db50: 0x1062003d
label_20db54:
    if (ctx->pc == 0x20DB54u) {
        ctx->pc = 0x20DB54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DB58u;
        goto label_20db58;
    }
    ctx->pc = 0x20DB50u;
    {
        const bool branch_taken_0x20db50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DB54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20db50) {
            ctx->pc = 0x20DC48u;
            goto label_20dc48;
        }
    }
    ctx->pc = 0x20DB58u;
label_20db58:
    // 0x20db58: 0x100002dd
label_20db5c:
    if (ctx->pc == 0x20DB5Cu) {
        ctx->pc = 0x20DB5Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20DB60u;
        goto label_20db60;
    }
    ctx->pc = 0x20DB58u;
    {
        const bool branch_taken_0x20db58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DB5Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x20db58) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20DB60u;
label_20db60:
    // 0x20db60: 0x3c04003c
    ctx->pc = 0x20db60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_20db64:
    // 0x20db64: 0x3c02003c
    ctx->pc = 0x20db64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20db68:
    // 0x20db68: 0x8c42c508
    ctx->pc = 0x20db68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952200)));
label_20db6c:
    // 0x20db6c: 0x2221018
    ctx->pc = 0x20db6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20db70:
    // 0x20db70: 0x8c83c580
    ctx->pc = 0x20db70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294952320)));
label_20db74:
    // 0x20db74: 0x431021
    ctx->pc = 0x20db74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20db78:
    // 0x20db78: 0xac82c580
    ctx->pc = 0x20db78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952320), GPR_U32(ctx, 2));
label_20db7c:
    // 0x20db7c: 0x4400006
label_20db80:
    if (ctx->pc == 0x20DB80u) {
        ctx->pc = 0x20DB80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952320));
        ctx->pc = 0x20DB84u;
        goto label_20db84;
    }
    ctx->pc = 0x20DB7Cu;
    {
        const bool branch_taken_0x20db7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20DB80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952320));
        if (branch_taken_0x20db7c) {
            ctx->pc = 0x20DB98u;
            goto label_20db98;
        }
    }
    ctx->pc = 0x20DB84u;
label_20db84:
    // 0x20db84: 0x40282d
    ctx->pc = 0x20db84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20db88:
    // 0x20db88: 0x28a30100
    ctx->pc = 0x20db88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 256));
label_20db8c:
    // 0x20db8c: 0x240200ff
    ctx->pc = 0x20db8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_20db90:
    // 0x20db90: 0x10000002
label_20db94:
    if (ctx->pc == 0x20DB94u) {
        ctx->pc = 0x20DB94u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x20DB98u;
        goto label_20db98;
    }
    ctx->pc = 0x20DB90u;
    {
        const bool branch_taken_0x20db90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DB94u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x20db90) {
            ctx->pc = 0x20DB9Cu;
            goto label_20db9c;
        }
    }
    ctx->pc = 0x20DB98u;
label_20db98:
    // 0x20db98: 0x282d
    ctx->pc = 0x20db98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20db9c:
    // 0x20db9c: 0xac850000
    ctx->pc = 0x20db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_20dba0:
    // 0x20dba0: 0x3c110032
    ctx->pc = 0x20dba0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
label_20dba4:
    // 0x20dba4: 0x3c10003c
    ctx->pc = 0x20dba4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_20dba8:
    // 0x20dba8: 0x8e22f458
    ctx->pc = 0x20dba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294964312)));
label_20dbac:
    // 0x20dbac: 0x8e04c580
    ctx->pc = 0x20dbacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294952320)));
label_20dbb0:
    // 0x20dbb0: 0x50440006
label_20dbb4:
    if (ctx->pc == 0x20DBB4u) {
        ctx->pc = 0x20DBB4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x20DBB8u;
        goto label_20dbb8;
    }
    ctx->pc = 0x20DBB0u;
    {
        const bool branch_taken_0x20dbb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x20dbb0) {
            ctx->pc = 0x20DBB4u;
            SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
            ctx->pc = 0x20DBCCu;
            goto label_20dbcc;
        }
    }
    ctx->pc = 0x20DBB8u;
label_20dbb8:
    // 0x20dbb8: 0xc08818e
label_20dbbc:
    if (ctx->pc == 0x20DBBCu) {
        ctx->pc = 0x20DBC0u;
        goto label_20dbc0;
    }
    ctx->pc = 0x20DBB8u;
    SET_GPR_U32(ctx, 31, 0x20DBC0u);
    ctx->pc = 0x220638u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetVolSfx_0x220638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBC0u; }
    }
    if (ctx->pc != 0x20DBC0u) { return; }
    ctx->pc = 0x20DBC0u;
label_20dbc0:
    // 0x20dbc0: 0x8e02c580
    ctx->pc = 0x20dbc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294952320)));
label_20dbc4:
    // 0x20dbc4: 0x100002c0
label_20dbc8:
    if (ctx->pc == 0x20DBC8u) {
        ctx->pc = 0x20DBC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294964312), GPR_U32(ctx, 2));
        ctx->pc = 0x20DBCCu;
        goto label_20dbcc;
    }
    ctx->pc = 0x20DBC4u;
    {
        const bool branch_taken_0x20dbc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DBC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294964312), GPR_U32(ctx, 2));
        if (branch_taken_0x20dbc4) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DBCCu;
label_20dbcc:
    // 0x20dbcc: 0x8e02c598
    ctx->pc = 0x20dbccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294952344)));
label_20dbd0:
    // 0x20dbd0: 0x28420010
    ctx->pc = 0x20dbd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
label_20dbd4:
    // 0x20dbd4: 0x144002bd
label_20dbd8:
    if (ctx->pc == 0x20DBD8u) {
        ctx->pc = 0x20DBD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DBDCu;
        goto label_20dbdc;
    }
    ctx->pc = 0x20DBD4u;
    {
        const bool branch_taken_0x20dbd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DBD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dbd4) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DBDCu;
label_20dbdc:
    // 0x20dbdc: 0x10000039
label_20dbe0:
    if (ctx->pc == 0x20DBE0u) {
        ctx->pc = 0x20DBE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20DBE4u;
        goto label_20dbe4;
    }
    ctx->pc = 0x20DBDCu;
    {
        const bool branch_taken_0x20dbdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DBE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20dbdc) {
            ctx->pc = 0x20DCC4u;
            goto label_20dcc4;
        }
    }
    ctx->pc = 0x20DBE4u;
label_20dbe4:
    // 0x20dbe4: 0x3c04003c
    ctx->pc = 0x20dbe4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_20dbe8:
    // 0x20dbe8: 0x3c02003c
    ctx->pc = 0x20dbe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20dbec:
    // 0x20dbec: 0x8c42c508
    ctx->pc = 0x20dbecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952200)));
label_20dbf0:
    // 0x20dbf0: 0x2221018
    ctx->pc = 0x20dbf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20dbf4:
    // 0x20dbf4: 0x8c83c568
    ctx->pc = 0x20dbf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294952296)));
label_20dbf8:
    // 0x20dbf8: 0x431021
    ctx->pc = 0x20dbf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dbfc:
    // 0x20dbfc: 0xac82c568
    ctx->pc = 0x20dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952296), GPR_U32(ctx, 2));
label_20dc00:
    // 0x20dc00: 0x4400006
label_20dc04:
    if (ctx->pc == 0x20DC04u) {
        ctx->pc = 0x20DC04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952296));
        ctx->pc = 0x20DC08u;
        goto label_20dc08;
    }
    ctx->pc = 0x20DC00u;
    {
        const bool branch_taken_0x20dc00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20DC04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952296));
        if (branch_taken_0x20dc00) {
            ctx->pc = 0x20DC1Cu;
            goto label_20dc1c;
        }
    }
    ctx->pc = 0x20DC08u;
label_20dc08:
    // 0x20dc08: 0x40282d
    ctx->pc = 0x20dc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dc0c:
    // 0x20dc0c: 0x28a30100
    ctx->pc = 0x20dc0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 256));
label_20dc10:
    // 0x20dc10: 0x240200ff
    ctx->pc = 0x20dc10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
label_20dc14:
    // 0x20dc14: 0x10000002
label_20dc18:
    if (ctx->pc == 0x20DC18u) {
        ctx->pc = 0x20DC18u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x20DC1Cu;
        goto label_20dc1c;
    }
    ctx->pc = 0x20DC14u;
    {
        const bool branch_taken_0x20dc14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DC18u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x20dc14) {
            ctx->pc = 0x20DC20u;
            goto label_20dc20;
        }
    }
    ctx->pc = 0x20DC1Cu;
label_20dc1c:
    // 0x20dc1c: 0x282d
    ctx->pc = 0x20dc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dc20:
    // 0x20dc20: 0xac850000
    ctx->pc = 0x20dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_20dc24:
    // 0x20dc24: 0x3c10003c
    ctx->pc = 0x20dc24u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_20dc28:
    // 0x20dc28: 0xc088172
label_20dc2c:
    if (ctx->pc == 0x20DC2Cu) {
        ctx->pc = 0x20DC2Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294952296)));
        ctx->pc = 0x20DC30u;
        goto label_20dc30;
    }
    ctx->pc = 0x20DC28u;
    SET_GPR_U32(ctx, 31, 0x20DC30u);
    ctx->pc = 0x20DC2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294952296)));
    ctx->pc = 0x2205C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetVolMusic_0x2205c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC30u; }
    }
    if (ctx->pc != 0x20DC30u) { return; }
    ctx->pc = 0x20DC30u;
label_20dc30:
    // 0x20dc30: 0xc097422
label_20dc34:
    if (ctx->pc == 0x20DC34u) {
        ctx->pc = 0x20DC34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x20DC38u;
        goto label_20dc38;
    }
    ctx->pc = 0x20DC30u;
    SET_GPR_U32(ctx, 31, 0x20DC38u);
    ctx->pc = 0x20DC34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x25D088u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTuneUpdateVol_0x25d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC38u; }
    }
    if (ctx->pc != 0x20DC38u) { return; }
    ctx->pc = 0x20DC38u;
label_20dc38:
    // 0x20dc38: 0x3c030032
    ctx->pc = 0x20dc38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20dc3c:
    // 0x20dc3c: 0x8e02c568
    ctx->pc = 0x20dc3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294952296)));
label_20dc40:
    // 0x20dc40: 0x100002a1
label_20dc44:
    if (ctx->pc == 0x20DC44u) {
        ctx->pc = 0x20DC44u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964316), GPR_U32(ctx, 2));
        ctx->pc = 0x20DC48u;
        goto label_20dc48;
    }
    ctx->pc = 0x20DC40u;
    {
        const bool branch_taken_0x20dc40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DC44u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964316), GPR_U32(ctx, 2));
        if (branch_taken_0x20dc40) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DC48u;
label_20dc48:
    // 0x20dc48: 0x2682fffd
    ctx->pc = 0x20dc48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967293));
label_20dc4c:
    // 0x20dc4c: 0x2c420002
    ctx->pc = 0x20dc4cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_20dc50:
    // 0x20dc50: 0x1040029e
label_20dc54:
    if (ctx->pc == 0x20DC54u) {
        ctx->pc = 0x20DC54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DC58u;
        goto label_20dc58;
    }
    ctx->pc = 0x20DC50u;
    {
        const bool branch_taken_0x20dc50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DC54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dc50) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DC58u;
label_20dc58:
    // 0x20dc58: 0xc09819e
label_20dc5c:
    if (ctx->pc == 0x20DC5Cu) {
        ctx->pc = 0x20DC60u;
        goto label_20dc60;
    }
    ctx->pc = 0x20DC58u;
    SET_GPR_U32(ctx, 31, 0x20DC60u);
    ctx->pc = 0x260678u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorH_0x260678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC60u; }
    }
    if (ctx->pc != 0x20DC60u) { return; }
    ctx->pc = 0x20DC60u;
label_20dc60:
    // 0x20dc60: 0x8e440020
    ctx->pc = 0x20dc60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_20dc64:
    // 0x20dc64: 0x38840001
    ctx->pc = 0x20dc64u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
label_20dc68:
    // 0x20dc68: 0xae440020
    ctx->pc = 0x20dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
label_20dc6c:
    // 0x20dc6c: 0x3c020032
    ctx->pc = 0x20dc6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20dc70:
    // 0x20dc70: 0xc0881aa
label_20dc74:
    if (ctx->pc == 0x20DC74u) {
        ctx->pc = 0x20DC74u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964320), GPR_U32(ctx, 4));
        ctx->pc = 0x20DC78u;
        goto label_20dc78;
    }
    ctx->pc = 0x20DC70u;
    SET_GPR_U32(ctx, 31, 0x20DC78u);
    ctx->pc = 0x20DC74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964320), GPR_U32(ctx, 4));
    ctx->pc = 0x2206A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetStereo_0x2206a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC78u; }
    }
    if (ctx->pc != 0x20DC78u) { return; }
    ctx->pc = 0x20DC78u;
label_20dc78:
    // 0x20dc78: 0x10000294
label_20dc7c:
    if (ctx->pc == 0x20DC7Cu) {
        ctx->pc = 0x20DC7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DC80u;
        goto label_20dc80;
    }
    ctx->pc = 0x20DC78u;
    {
        const bool branch_taken_0x20dc78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DC7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dc78) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DC80u;
label_20dc80:
    // 0x20dc80: 0xc08328c
label_20dc84:
    if (ctx->pc == 0x20DC84u) {
        ctx->pc = 0x20DC88u;
        goto label_20dc88;
    }
    ctx->pc = 0x20DC80u;
    SET_GPR_U32(ctx, 31, 0x20DC88u);
    ctx->pc = 0x20CA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_audiomenu_0x20ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC88u; }
    }
    if (ctx->pc != 0x20DC88u) { return; }
    ctx->pc = 0x20DC88u;
label_20dc88:
    // 0x20dc88: 0xc0981b4
label_20dc8c:
    if (ctx->pc == 0x20DC8Cu) {
        ctx->pc = 0x20DC8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DC90u;
        goto label_20dc90;
    }
    ctx->pc = 0x20DC88u;
    SET_GPR_U32(ctx, 31, 0x20DC90u);
    ctx->pc = 0x20DC8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2606D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStart_0x2606d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC90u; }
    }
    if (ctx->pc != 0x20DC90u) { return; }
    ctx->pc = 0x20DC90u;
label_20dc90:
    // 0x20dc90: 0x24020001
    ctx->pc = 0x20dc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20dc94:
    // 0x20dc94: 0x1000028c
label_20dc98:
    if (ctx->pc == 0x20DC98u) {
        ctx->pc = 0x20DC98u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x20DC9Cu;
        goto label_20dc9c;
    }
    ctx->pc = 0x20DC94u;
    {
        const bool branch_taken_0x20dc94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DC98u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x20dc94) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DC9Cu;
label_20dc9c:
    // 0x20dc9c: 0x8e430004
    ctx->pc = 0x20dc9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20dca0:
    // 0x20dca0: 0x24020018
    ctx->pc = 0x20dca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_20dca4:
    // 0x20dca4: 0x14620289
label_20dca8:
    if (ctx->pc == 0x20DCA8u) {
        ctx->pc = 0x20DCA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DCACu;
        goto label_20dcac;
    }
    ctx->pc = 0x20DCA4u;
    {
        const bool branch_taken_0x20dca4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20DCA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dca4) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DCACu;
label_20dcac:
    // 0x20dcac: 0x3c10003c
    ctx->pc = 0x20dcacu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_20dcb0:
    // 0x20dcb0: 0x8e02c598
    ctx->pc = 0x20dcb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294952344)));
label_20dcb4:
    // 0x20dcb4: 0x2842003d
    ctx->pc = 0x20dcb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 61));
label_20dcb8:
    // 0x20dcb8: 0x14400284
label_20dcbc:
    if (ctx->pc == 0x20DCBCu) {
        ctx->pc = 0x20DCBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DCC0u;
        goto label_20dcc0;
    }
    ctx->pc = 0x20DCB8u;
    {
        const bool branch_taken_0x20dcb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DCBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dcb8) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DCC0u;
label_20dcc0:
    // 0x20dcc0: 0x202d
    ctx->pc = 0x20dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dcc4:
    // 0x20dcc4: 0xc097c12
label_20dcc8:
    if (ctx->pc == 0x20DCC8u) {
        ctx->pc = 0x20DCCCu;
        goto label_20dccc;
    }
    ctx->pc = 0x20DCC4u;
    SET_GPR_U32(ctx, 31, 0x20DCCCu);
    ctx->pc = 0x25F048u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVolSfx_0x25f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCCCu; }
    }
    if (ctx->pc != 0x20DCCCu) { return; }
    ctx->pc = 0x20DCCCu;
label_20dccc:
    // 0x20dccc: 0x1000027e
label_20dcd0:
    if (ctx->pc == 0x20DCD0u) {
        ctx->pc = 0x20DCD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952344), GPR_U32(ctx, 0));
        ctx->pc = 0x20DCD4u;
        goto label_20dcd4;
    }
    ctx->pc = 0x20DCCCu;
    {
        const bool branch_taken_0x20dccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DCD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952344), GPR_U32(ctx, 0));
        if (branch_taken_0x20dccc) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DCD4u;
label_20dcd4:
    // 0x20dcd4: 0x8e020084
    ctx->pc = 0x20dcd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20dcd8:
    // 0x20dcd8: 0x18400015
label_20dcdc:
    if (ctx->pc == 0x20DCDCu) {
        ctx->pc = 0x20DCDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DCE0u;
        goto label_20dce0;
    }
    ctx->pc = 0x20DCD8u;
    {
        const bool branch_taken_0x20dcd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20DCDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20dcd8) {
            ctx->pc = 0x20DD30u;
            goto label_20dd30;
        }
    }
    ctx->pc = 0x20DCE0u;
label_20dce0:
    // 0x20dce0: 0x3c020032
    ctx->pc = 0x20dce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20dce4:
    // 0x20dce4: 0x2447f458
    ctx->pc = 0x20dce4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964312));
label_20dce8:
    // 0x20dce8: 0x24050024
    ctx->pc = 0x20dce8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
label_20dcec:
    // 0x20dcec: 0x24060001
    ctx->pc = 0x20dcecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_20dcf0:
    // 0x20dcf0: 0x8ce20014
    ctx->pc = 0x20dcf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_20dcf4:
    // 0x20dcf4: 0x0
    ctx->pc = 0x20dcf4u;
    // NOP
label_20dcf8:
    // 0x20dcf8: 0x14820005
label_20dcfc:
    if (ctx->pc == 0x20DCFCu) {
        ctx->pc = 0x20DCFCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x20DD00u;
        goto label_20dd00;
    }
    ctx->pc = 0x20DCF8u;
    {
        const bool branch_taken_0x20dcf8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20DCFCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x20dcf8) {
            ctx->pc = 0x20DD10u;
            goto label_20dd10;
        }
    }
    ctx->pc = 0x20DD00u;
label_20dd00:
    // 0x20dd00: 0x851018
    ctx->pc = 0x20dd00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20dd04:
    // 0x20dd04: 0x431021
    ctx->pc = 0x20dd04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dd08:
    // 0x20dd08: 0x10000004
label_20dd0c:
    if (ctx->pc == 0x20DD0Cu) {
        ctx->pc = 0x20DD0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->pc = 0x20DD10u;
        goto label_20dd10;
    }
    ctx->pc = 0x20DD08u;
    {
        const bool branch_taken_0x20dd08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DD0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        if (branch_taken_0x20dd08) {
            ctx->pc = 0x20DD1Cu;
            goto label_20dd1c;
        }
    }
    ctx->pc = 0x20DD10u;
label_20dd10:
    // 0x20dd10: 0x851018
    ctx->pc = 0x20dd10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20dd14:
    // 0x20dd14: 0x431021
    ctx->pc = 0x20dd14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dd18:
    // 0x20dd18: 0xac40001c
    ctx->pc = 0x20dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_20dd1c:
    // 0x20dd1c: 0x24840001
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20dd20:
    // 0x20dd20: 0x8e020084
    ctx->pc = 0x20dd20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20dd24:
    // 0x20dd24: 0x82102a
    ctx->pc = 0x20dd24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_20dd28:
    // 0x20dd28: 0x5440fff3
label_20dd2c:
    if (ctx->pc == 0x20DD2Cu) {
        ctx->pc = 0x20DD2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->pc = 0x20DD30u;
        goto label_20dd30;
    }
    ctx->pc = 0x20DD28u;
    {
        const bool branch_taken_0x20dd28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20dd28) {
            ctx->pc = 0x20DD2Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->pc = 0x20DCF8u;
            goto label_20dcf8;
        }
    }
    ctx->pc = 0x20DD30u;
label_20dd30:
    // 0x20dd30: 0x24020001
    ctx->pc = 0x20dd30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20dd34:
    // 0x20dd34: 0x12820265
label_20dd38:
    if (ctx->pc == 0x20DD38u) {
        ctx->pc = 0x20DD38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DD3Cu;
        goto label_20dd3c;
    }
    ctx->pc = 0x20DD34u;
    {
        const bool branch_taken_0x20dd34 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DD38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dd34) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DD3Cu;
label_20dd3c:
    // 0x20dd3c: 0x1a800262
label_20dd40:
    if (ctx->pc == 0x20DD40u) {
        ctx->pc = 0x20DD40u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 31));
        ctx->pc = 0x20DD44u;
        goto label_20dd44;
    }
    ctx->pc = 0x20DD3Cu;
    {
        const bool branch_taken_0x20dd3c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20DD40u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 31));
        if (branch_taken_0x20dd3c) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DD44u;
label_20dd44:
    // 0x20dd44: 0x10400260
label_20dd48:
    if (ctx->pc == 0x20DD48u) {
        ctx->pc = 0x20DD48u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
        ctx->pc = 0x20DD4Cu;
        goto label_20dd4c;
    }
    ctx->pc = 0x20DD44u;
    {
        const bool branch_taken_0x20dd44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DD48u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
        if (branch_taken_0x20dd44) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DD4Cu;
label_20dd4c:
    // 0x20dd4c: 0x1440025f
label_20dd50:
    if (ctx->pc == 0x20DD50u) {
        ctx->pc = 0x20DD50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DD54u;
        goto label_20dd54;
    }
    ctx->pc = 0x20DD4Cu;
    {
        const bool branch_taken_0x20dd4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DD50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dd4c) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DD54u;
label_20dd54:
    // 0x20dd54: 0x3c030032
    ctx->pc = 0x20dd54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20dd58:
    // 0x20dd58: 0x8e020074
    ctx->pc = 0x20dd58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20dd5c:
    // 0x20dd5c: 0x10000186
label_20dd60:
    if (ctx->pc == 0x20DD60u) {
        ctx->pc = 0x20DD60u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964332), GPR_U32(ctx, 2));
        ctx->pc = 0x20DD64u;
        goto label_20dd64;
    }
    ctx->pc = 0x20DD5Cu;
    {
        const bool branch_taken_0x20dd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DD60u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964332), GPR_U32(ctx, 2));
        if (branch_taken_0x20dd5c) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20DD64u;
label_20dd64:
    // 0x20dd64: 0x8e020084
    ctx->pc = 0x20dd64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20dd68:
    // 0x20dd68: 0x18400015
label_20dd6c:
    if (ctx->pc == 0x20DD6Cu) {
        ctx->pc = 0x20DD6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DD70u;
        goto label_20dd70;
    }
    ctx->pc = 0x20DD68u;
    {
        const bool branch_taken_0x20dd68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20DD6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20dd68) {
            ctx->pc = 0x20DDC0u;
            goto label_20ddc0;
        }
    }
    ctx->pc = 0x20DD70u;
label_20dd70:
    // 0x20dd70: 0x3c020032
    ctx->pc = 0x20dd70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20dd74:
    // 0x20dd74: 0x2447f458
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964312));
label_20dd78:
    // 0x20dd78: 0x24050024
    ctx->pc = 0x20dd78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
label_20dd7c:
    // 0x20dd7c: 0x24060001
    ctx->pc = 0x20dd7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_20dd80:
    // 0x20dd80: 0x8ce2001c
    ctx->pc = 0x20dd80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_20dd84:
    // 0x20dd84: 0x0
    ctx->pc = 0x20dd84u;
    // NOP
label_20dd88:
    // 0x20dd88: 0x14820005
label_20dd8c:
    if (ctx->pc == 0x20DD8Cu) {
        ctx->pc = 0x20DD8Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x20DD90u;
        goto label_20dd90;
    }
    ctx->pc = 0x20DD88u;
    {
        const bool branch_taken_0x20dd88 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20DD8Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x20dd88) {
            ctx->pc = 0x20DDA0u;
            goto label_20dda0;
        }
    }
    ctx->pc = 0x20DD90u;
label_20dd90:
    // 0x20dd90: 0x851018
    ctx->pc = 0x20dd90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20dd94:
    // 0x20dd94: 0x431021
    ctx->pc = 0x20dd94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dd98:
    // 0x20dd98: 0x10000004
label_20dd9c:
    if (ctx->pc == 0x20DD9Cu) {
        ctx->pc = 0x20DD9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->pc = 0x20DDA0u;
        goto label_20dda0;
    }
    ctx->pc = 0x20DD98u;
    {
        const bool branch_taken_0x20dd98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DD9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        if (branch_taken_0x20dd98) {
            ctx->pc = 0x20DDACu;
            goto label_20ddac;
        }
    }
    ctx->pc = 0x20DDA0u;
label_20dda0:
    // 0x20dda0: 0x851018
    ctx->pc = 0x20dda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20dda4:
    // 0x20dda4: 0x431021
    ctx->pc = 0x20dda4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dda8:
    // 0x20dda8: 0xac40001c
    ctx->pc = 0x20dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_20ddac:
    // 0x20ddac: 0x24840001
    ctx->pc = 0x20ddacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20ddb0:
    // 0x20ddb0: 0x8e020084
    ctx->pc = 0x20ddb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20ddb4:
    // 0x20ddb4: 0x82102a
    ctx->pc = 0x20ddb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_20ddb8:
    // 0x20ddb8: 0x5440fff3
label_20ddbc:
    if (ctx->pc == 0x20DDBCu) {
        ctx->pc = 0x20DDBCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
        ctx->pc = 0x20DDC0u;
        goto label_20ddc0;
    }
    ctx->pc = 0x20DDB8u;
    {
        const bool branch_taken_0x20ddb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ddb8) {
            ctx->pc = 0x20DDBCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
            ctx->pc = 0x20DD88u;
            goto label_20dd88;
        }
    }
    ctx->pc = 0x20DDC0u;
label_20ddc0:
    // 0x20ddc0: 0x24020001
    ctx->pc = 0x20ddc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20ddc4:
    // 0x20ddc4: 0x12820241
label_20ddc8:
    if (ctx->pc == 0x20DDC8u) {
        ctx->pc = 0x20DDC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DDCCu;
        goto label_20ddcc;
    }
    ctx->pc = 0x20DDC4u;
    {
        const bool branch_taken_0x20ddc4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DDC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20ddc4) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DDCCu;
label_20ddcc:
    // 0x20ddcc: 0x1a80023e
label_20ddd0:
    if (ctx->pc == 0x20DDD0u) {
        ctx->pc = 0x20DDD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 31));
        ctx->pc = 0x20DDD4u;
        goto label_20ddd4;
    }
    ctx->pc = 0x20DDCCu;
    {
        const bool branch_taken_0x20ddcc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20DDD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 31));
        if (branch_taken_0x20ddcc) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DDD4u;
label_20ddd4:
    // 0x20ddd4: 0x1040023c
label_20ddd8:
    if (ctx->pc == 0x20DDD8u) {
        ctx->pc = 0x20DDD8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
        ctx->pc = 0x20DDDCu;
        goto label_20dddc;
    }
    ctx->pc = 0x20DDD4u;
    {
        const bool branch_taken_0x20ddd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DDD8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
        if (branch_taken_0x20ddd4) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DDDCu;
label_20dddc:
    // 0x20dddc: 0x1440023b
label_20dde0:
    if (ctx->pc == 0x20DDE0u) {
        ctx->pc = 0x20DDE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DDE4u;
        goto label_20dde4;
    }
    ctx->pc = 0x20DDDCu;
    {
        const bool branch_taken_0x20dddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DDE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dddc) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DDE4u;
label_20dde4:
    // 0x20dde4: 0x3c030032
    ctx->pc = 0x20dde4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20dde8:
    // 0x20dde8: 0x8e020074
    ctx->pc = 0x20dde8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20ddec:
    // 0x20ddec: 0x10000162
label_20ddf0:
    if (ctx->pc == 0x20DDF0u) {
        ctx->pc = 0x20DDF0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964340), GPR_U32(ctx, 2));
        ctx->pc = 0x20DDF4u;
        goto label_20ddf4;
    }
    ctx->pc = 0x20DDECu;
    {
        const bool branch_taken_0x20ddec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DDF0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964340), GPR_U32(ctx, 2));
        if (branch_taken_0x20ddec) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20DDF4u;
label_20ddf4:
    // 0x20ddf4: 0x8e020084
    ctx->pc = 0x20ddf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20ddf8:
    // 0x20ddf8: 0x18400015
label_20ddfc:
    if (ctx->pc == 0x20DDFCu) {
        ctx->pc = 0x20DDFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DE00u;
        goto label_20de00;
    }
    ctx->pc = 0x20DDF8u;
    {
        const bool branch_taken_0x20ddf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20DDFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ddf8) {
            ctx->pc = 0x20DE50u;
            goto label_20de50;
        }
    }
    ctx->pc = 0x20DE00u;
label_20de00:
    // 0x20de00: 0x3c020032
    ctx->pc = 0x20de00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20de04:
    // 0x20de04: 0x2447f458
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294964312));
label_20de08:
    // 0x20de08: 0x24050024
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
label_20de0c:
    // 0x20de0c: 0x24060001
    ctx->pc = 0x20de0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_20de10:
    // 0x20de10: 0x8ce20018
    ctx->pc = 0x20de10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_20de14:
    // 0x20de14: 0x0
    ctx->pc = 0x20de14u;
    // NOP
label_20de18:
    // 0x20de18: 0x14820005
label_20de1c:
    if (ctx->pc == 0x20DE1Cu) {
        ctx->pc = 0x20DE1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x20DE20u;
        goto label_20de20;
    }
    ctx->pc = 0x20DE18u;
    {
        const bool branch_taken_0x20de18 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20DE1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x20de18) {
            ctx->pc = 0x20DE30u;
            goto label_20de30;
        }
    }
    ctx->pc = 0x20DE20u;
label_20de20:
    // 0x20de20: 0x851018
    ctx->pc = 0x20de20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20de24:
    // 0x20de24: 0x431021
    ctx->pc = 0x20de24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20de28:
    // 0x20de28: 0x10000004
label_20de2c:
    if (ctx->pc == 0x20DE2Cu) {
        ctx->pc = 0x20DE2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->pc = 0x20DE30u;
        goto label_20de30;
    }
    ctx->pc = 0x20DE28u;
    {
        const bool branch_taken_0x20de28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DE2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        if (branch_taken_0x20de28) {
            ctx->pc = 0x20DE3Cu;
            goto label_20de3c;
        }
    }
    ctx->pc = 0x20DE30u;
label_20de30:
    // 0x20de30: 0x851018
    ctx->pc = 0x20de30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20de34:
    // 0x20de34: 0x431021
    ctx->pc = 0x20de34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20de38:
    // 0x20de38: 0xac40001c
    ctx->pc = 0x20de38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_20de3c:
    // 0x20de3c: 0x24840001
    ctx->pc = 0x20de3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20de40:
    // 0x20de40: 0x8e020084
    ctx->pc = 0x20de40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20de44:
    // 0x20de44: 0x82102a
    ctx->pc = 0x20de44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_20de48:
    // 0x20de48: 0x5440fff3
label_20de4c:
    if (ctx->pc == 0x20DE4Cu) {
        ctx->pc = 0x20DE4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
        ctx->pc = 0x20DE50u;
        goto label_20de50;
    }
    ctx->pc = 0x20DE48u;
    {
        const bool branch_taken_0x20de48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20de48) {
            ctx->pc = 0x20DE4Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
            ctx->pc = 0x20DE18u;
            goto label_20de18;
        }
    }
    ctx->pc = 0x20DE50u;
label_20de50:
    // 0x20de50: 0x2402001f
    ctx->pc = 0x20de50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_20de54:
    // 0x20de54: 0x12820008
label_20de58:
    if (ctx->pc == 0x20DE58u) {
        ctx->pc = 0x20DE58u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 32));
        ctx->pc = 0x20DE5Cu;
        goto label_20de5c;
    }
    ctx->pc = 0x20DE54u;
    {
        const bool branch_taken_0x20de54 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DE58u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 32));
        if (branch_taken_0x20de54) {
            ctx->pc = 0x20DE78u;
            goto label_20de78;
        }
    }
    ctx->pc = 0x20DE5Cu;
label_20de5c:
    // 0x20de5c: 0x1440021b
label_20de60:
    if (ctx->pc == 0x20DE60u) {
        ctx->pc = 0x20DE60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DE64u;
        goto label_20de64;
    }
    ctx->pc = 0x20DE5Cu;
    {
        const bool branch_taken_0x20de5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DE60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20de5c) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DE64u;
label_20de64:
    // 0x20de64: 0x24020020
    ctx->pc = 0x20de64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_20de68:
    // 0x20de68: 0x12820007
label_20de6c:
    if (ctx->pc == 0x20DE6Cu) {
        ctx->pc = 0x20DE6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DE70u;
        goto label_20de70;
    }
    ctx->pc = 0x20DE68u;
    {
        const bool branch_taken_0x20de68 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DE6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20de68) {
            ctx->pc = 0x20DE88u;
            goto label_20de88;
        }
    }
    ctx->pc = 0x20DE70u;
label_20de70:
    // 0x20de70: 0x10000217
label_20de74:
    if (ctx->pc == 0x20DE74u) {
        ctx->pc = 0x20DE74u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20DE78u;
        goto label_20de78;
    }
    ctx->pc = 0x20DE70u;
    {
        const bool branch_taken_0x20de70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DE74u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x20de70) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20DE78u;
label_20de78:
    // 0x20de78: 0x3c030032
    ctx->pc = 0x20de78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20de7c:
    // 0x20de7c: 0x24020001
    ctx->pc = 0x20de7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20de80:
    // 0x20de80: 0x1000013d
label_20de84:
    if (ctx->pc == 0x20DE84u) {
        ctx->pc = 0x20DE84u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964336), GPR_U32(ctx, 2));
        ctx->pc = 0x20DE88u;
        goto label_20de88;
    }
    ctx->pc = 0x20DE80u;
    {
        const bool branch_taken_0x20de80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DE84u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964336), GPR_U32(ctx, 2));
        if (branch_taken_0x20de80) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20DE88u;
label_20de88:
    // 0x20de88: 0x3c020032
    ctx->pc = 0x20de88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20de8c:
    // 0x20de8c: 0x1000013a
label_20de90:
    if (ctx->pc == 0x20DE90u) {
        ctx->pc = 0x20DE90u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964336), GPR_U32(ctx, 0));
        ctx->pc = 0x20DE94u;
        goto label_20de94;
    }
    ctx->pc = 0x20DE8Cu;
    {
        const bool branch_taken_0x20de8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DE90u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964336), GPR_U32(ctx, 0));
        if (branch_taken_0x20de8c) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20DE94u;
label_20de94:
    // 0x20de94: 0xc08348a
label_20de98:
    if (ctx->pc == 0x20DE98u) {
        ctx->pc = 0x20DE98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DE9Cu;
        goto label_20de9c;
    }
    ctx->pc = 0x20DE94u;
    SET_GPR_U32(ctx, 31, 0x20DE9Cu);
    ctx->pc = 0x20DE98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20D228u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_screenmenu_0x20d228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DE9Cu; }
    }
    if (ctx->pc != 0x20DE9Cu) { return; }
    ctx->pc = 0x20DE9Cu;
label_20de9c:
    // 0x20de9c: 0x26830002
    ctx->pc = 0x20de9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 2));
label_20dea0:
    // 0x20dea0: 0x2c620019
    ctx->pc = 0x20dea0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 25));
label_20dea4:
    // 0x20dea4: 0x10400208
label_20dea8:
    if (ctx->pc == 0x20DEA8u) {
        ctx->pc = 0x20DEA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20DEACu;
        goto label_20deac;
    }
    ctx->pc = 0x20DEA4u;
    {
        const bool branch_taken_0x20dea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DEA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20dea4) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20DEACu;
label_20deac:
    // 0x20deac: 0x244255f0
    ctx->pc = 0x20deacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22000));
label_20deb0:
    // 0x20deb0: 0x31880
    ctx->pc = 0x20deb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20deb4:
    // 0x20deb4: 0x621821
    ctx->pc = 0x20deb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20deb8:
    // 0x20deb8: 0x8c620000
    ctx->pc = 0x20deb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20debc:
    // 0x20debc: 0x400008
label_20dec0:
    if (ctx->pc == 0x20DEC0u) {
        ctx->pc = 0x20DEC4u;
        goto label_20dec4;
    }
    ctx->pc = 0x20DEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DEC4u;
label_20dec4:
    // 0x20dec4: 0x3c030032
    ctx->pc = 0x20dec4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20dec8:
    // 0x20dec8: 0x2463f458
    ctx->pc = 0x20dec8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964312));
label_20decc:
    // 0x20decc: 0x3c02003c
    ctx->pc = 0x20deccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20ded0:
    // 0x20ded0: 0x8c42c50c
    ctx->pc = 0x20ded0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952204)));
label_20ded4:
    // 0x20ded4: 0xac62000c
    ctx->pc = 0x20ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_20ded8:
    // 0x20ded8: 0x3c02003c
    ctx->pc = 0x20ded8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20dedc:
    // 0x20dedc: 0x8c42c510
    ctx->pc = 0x20dedcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952208)));
label_20dee0:
    // 0x20dee0: 0xac620010
    ctx->pc = 0x20dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_20dee4:
    // 0x20dee4: 0x202d
    ctx->pc = 0x20dee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dee8:
    // 0x20dee8: 0xc082c3a
label_20deec:
    if (ctx->pc == 0x20DEECu) {
        ctx->pc = 0x20DEECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DEF0u;
        goto label_20def0;
    }
    ctx->pc = 0x20DEE8u;
    SET_GPR_U32(ctx, 31, 0x20DEF0u);
    ctx->pc = 0x20DEECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DEF0u; }
    }
    if (ctx->pc != 0x20DEF0u) { return; }
    ctx->pc = 0x20DEF0u;
label_20def0:
    // 0x20def0: 0x10000121
label_20def4:
    if (ctx->pc == 0x20DEF4u) {
        ctx->pc = 0x20DEF8u;
        goto label_20def8;
    }
    ctx->pc = 0x20DEF0u;
    {
        const bool branch_taken_0x20def0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20def0) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20DEF8u;
label_20def8:
    // 0x20def8: 0x3c02003c
    ctx->pc = 0x20def8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20defc:
    // 0x20defc: 0xac40c50c
    ctx->pc = 0x20defcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952204), GPR_U32(ctx, 0));
label_20df00:
    // 0x20df00: 0x3c02003c
    ctx->pc = 0x20df00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20df04:
    // 0x20df04: 0xac40c510
    ctx->pc = 0x20df04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952208), GPR_U32(ctx, 0));
label_20df08:
    // 0x20df08: 0x202d
    ctx->pc = 0x20df08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20df0c:
    // 0x20df0c: 0xc0aa6d0
label_20df10:
    if (ctx->pc == 0x20DF10u) {
        ctx->pc = 0x20DF10u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DF14u;
        goto label_20df14;
    }
    ctx->pc = 0x20DF0Cu;
    SET_GPR_U32(ctx, 31, 0x20DF14u);
    ctx->pc = 0x20DF10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A9B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbScreenSetAdjust_0x2a9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DF14u; }
    }
    if (ctx->pc != 0x20DF14u) { return; }
    ctx->pc = 0x20DF14u;
label_20df14:
    // 0x20df14: 0x100001ed
label_20df18:
    if (ctx->pc == 0x20DF18u) {
        ctx->pc = 0x20DF18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DF1Cu;
        goto label_20df1c;
    }
    ctx->pc = 0x20DF14u;
    {
        const bool branch_taken_0x20df14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DF18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20df14) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DF1Cu;
label_20df1c:
    // 0x20df1c: 0x2410fffe
    ctx->pc = 0x20df1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967294));
label_20df20:
    // 0x20df20: 0x26100001
    ctx->pc = 0x20df20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20df24:
    // 0x20df24: 0x3c03003c
    ctx->pc = 0x20df24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_20df28:
    // 0x20df28: 0x102080
    ctx->pc = 0x20df28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
label_20df2c:
    // 0x20df2c: 0x8c62c50c
    ctx->pc = 0x20df2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294952204)));
label_20df30:
    // 0x20df30: 0x822021
    ctx->pc = 0x20df30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20df34:
    // 0x20df34: 0xac64c50c
    ctx->pc = 0x20df34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952204), GPR_U32(ctx, 4));
label_20df38:
    // 0x20df38: 0x2882ff80
    ctx->pc = 0x20df38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294967168));
label_20df3c:
    // 0x20df3c: 0x14400005
label_20df40:
    if (ctx->pc == 0x20DF40u) {
        ctx->pc = 0x20DF40u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294952204));
        ctx->pc = 0x20DF44u;
        goto label_20df44;
    }
    ctx->pc = 0x20DF3Cu;
    {
        const bool branch_taken_0x20df3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DF40u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294952204));
        if (branch_taken_0x20df3c) {
            ctx->pc = 0x20DF54u;
            goto label_20df54;
        }
    }
    ctx->pc = 0x20DF44u;
label_20df44:
    // 0x20df44: 0x28830081
    ctx->pc = 0x20df44u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 129));
label_20df48:
    // 0x20df48: 0x24020080
    ctx->pc = 0x20df48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_20df4c:
    // 0x20df4c: 0x10000011
label_20df50:
    if (ctx->pc == 0x20DF50u) {
        ctx->pc = 0x20DF50u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        ctx->pc = 0x20DF54u;
        goto label_20df54;
    }
    ctx->pc = 0x20DF4Cu;
    {
        const bool branch_taken_0x20df4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DF50u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x20df4c) {
            ctx->pc = 0x20DF94u;
            goto label_20df94;
        }
    }
    ctx->pc = 0x20DF54u;
label_20df54:
    // 0x20df54: 0x1000000f
label_20df58:
    if (ctx->pc == 0x20DF58u) {
        ctx->pc = 0x20DF58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->pc = 0x20DF5Cu;
        goto label_20df5c;
    }
    ctx->pc = 0x20DF54u;
    {
        const bool branch_taken_0x20df54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DF58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967168));
        if (branch_taken_0x20df54) {
            ctx->pc = 0x20DF94u;
            goto label_20df94;
        }
    }
    ctx->pc = 0x20DF5Cu;
label_20df5c:
    // 0x20df5c: 0x2410fffe
    ctx->pc = 0x20df5cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967294));
label_20df60:
    // 0x20df60: 0x26100001
    ctx->pc = 0x20df60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20df64:
    // 0x20df64: 0x3c02003c
    ctx->pc = 0x20df64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20df68:
    // 0x20df68: 0x8c43c510
    ctx->pc = 0x20df68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294952208)));
label_20df6c:
    // 0x20df6c: 0x2031821
    ctx->pc = 0x20df6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_20df70:
    // 0x20df70: 0xac43c510
    ctx->pc = 0x20df70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952208), GPR_U32(ctx, 3));
label_20df74:
    // 0x20df74: 0x2445c510
    ctx->pc = 0x20df74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294952208));
label_20df78:
    // 0x20df78: 0x2862ffd8
    ctx->pc = 0x20df78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967256));
label_20df7c:
    // 0x20df7c: 0x54400005
label_20df80:
    if (ctx->pc == 0x20DF80u) {
        ctx->pc = 0x20DF80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->pc = 0x20DF84u;
        goto label_20df84;
    }
    ctx->pc = 0x20DF7Cu;
    {
        const bool branch_taken_0x20df7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20df7c) {
            ctx->pc = 0x20DF80u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967256));
            ctx->pc = 0x20DF94u;
            goto label_20df94;
        }
    }
    ctx->pc = 0x20DF84u;
label_20df84:
    // 0x20df84: 0x60202d
    ctx->pc = 0x20df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20df88:
    // 0x20df88: 0x28830029
    ctx->pc = 0x20df88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 41));
label_20df8c:
    // 0x20df8c: 0x24020028
    ctx->pc = 0x20df8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
label_20df90:
    // 0x20df90: 0x43200a
    ctx->pc = 0x20df90u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_20df94:
    // 0x20df94: 0xaca40000
    ctx->pc = 0x20df94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_20df98:
    // 0x20df98: 0x3c02003c
    ctx->pc = 0x20df98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20df9c:
    // 0x20df9c: 0x3c03003c
    ctx->pc = 0x20df9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_20dfa0:
    // 0x20dfa0: 0x8c44c50c
    ctx->pc = 0x20dfa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952204)));
label_20dfa4:
    // 0x20dfa4: 0xc0aa6d0
label_20dfa8:
    if (ctx->pc == 0x20DFA8u) {
        ctx->pc = 0x20DFA8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294952208)));
        ctx->pc = 0x20DFACu;
        goto label_20dfac;
    }
    ctx->pc = 0x20DFA4u;
    SET_GPR_U32(ctx, 31, 0x20DFACu);
    ctx->pc = 0x20DFA8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294952208)));
    ctx->pc = 0x2A9B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbScreenSetAdjust_0x2a9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DFACu; }
    }
    if (ctx->pc != 0x20DFACu) { return; }
    ctx->pc = 0x20DFACu;
label_20dfac:
    // 0x20dfac: 0x100001c7
label_20dfb0:
    if (ctx->pc == 0x20DFB0u) {
        ctx->pc = 0x20DFB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DFB4u;
        goto label_20dfb4;
    }
    ctx->pc = 0x20DFACu;
    {
        const bool branch_taken_0x20dfac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DFB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dfac) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DFB4u;
label_20dfb4:
    // 0x20dfb4: 0x3c020032
    ctx->pc = 0x20dfb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20dfb8:
    // 0x20dfb8: 0x2442f458
    ctx->pc = 0x20dfb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964312));
label_20dfbc:
    // 0x20dfbc: 0x8c44000c
    ctx->pc = 0x20dfbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20dfc0:
    // 0x20dfc0: 0xc0aa6d0
label_20dfc4:
    if (ctx->pc == 0x20DFC4u) {
        ctx->pc = 0x20DFC4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x20DFC8u;
        goto label_20dfc8;
    }
    ctx->pc = 0x20DFC0u;
    SET_GPR_U32(ctx, 31, 0x20DFC8u);
    ctx->pc = 0x20DFC4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x2A9B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbScreenSetAdjust_0x2a9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DFC8u; }
    }
    if (ctx->pc != 0x20DFC8u) { return; }
    ctx->pc = 0x20DFC8u;
label_20dfc8:
    // 0x20dfc8: 0x100001c0
label_20dfcc:
    if (ctx->pc == 0x20DFCCu) {
        ctx->pc = 0x20DFCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DFD0u;
        goto label_20dfd0;
    }
    ctx->pc = 0x20DFC8u;
    {
        const bool branch_taken_0x20dfc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DFCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dfc8) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20DFD0u;
label_20dfd0:
    // 0x20dfd0: 0x24020022
    ctx->pc = 0x20dfd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
label_20dfd4:
    // 0x20dfd4: 0x1282001f
label_20dfd8:
    if (ctx->pc == 0x20DFD8u) {
        ctx->pc = 0x20DFD8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20DFDCu;
        goto label_20dfdc;
    }
    ctx->pc = 0x20DFD4u;
    {
        const bool branch_taken_0x20dfd4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DFD8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20dfd4) {
            ctx->pc = 0x20E054u;
            goto label_20e054;
        }
    }
    ctx->pc = 0x20DFDCu;
label_20dfdc:
    // 0x20dfdc: 0x2a820023
    ctx->pc = 0x20dfdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 35));
label_20dfe0:
    // 0x20dfe0: 0x10400005
label_20dfe4:
    if (ctx->pc == 0x20DFE4u) {
        ctx->pc = 0x20DFE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x20DFE8u;
        goto label_20dfe8;
    }
    ctx->pc = 0x20DFE0u;
    {
        const bool branch_taken_0x20dfe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DFE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x20dfe0) {
            ctx->pc = 0x20DFF8u;
            goto label_20dff8;
        }
    }
    ctx->pc = 0x20DFE8u;
label_20dfe8:
    // 0x20dfe8: 0x1282000a
label_20dfec:
    if (ctx->pc == 0x20DFECu) {
        ctx->pc = 0x20DFECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20DFF0u;
        goto label_20dff0;
    }
    ctx->pc = 0x20DFE8u;
    {
        const bool branch_taken_0x20dfe8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20DFECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20dfe8) {
            ctx->pc = 0x20E014u;
            goto label_20e014;
        }
    }
    ctx->pc = 0x20DFF0u;
label_20dff0:
    // 0x20dff0: 0x100001b7
label_20dff4:
    if (ctx->pc == 0x20DFF4u) {
        ctx->pc = 0x20DFF4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20DFF8u;
        goto label_20dff8;
    }
    ctx->pc = 0x20DFF0u;
    {
        const bool branch_taken_0x20dff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20DFF4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x20dff0) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20DFF8u;
label_20dff8:
    // 0x20dff8: 0x24020023
    ctx->pc = 0x20dff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
label_20dffc:
    // 0x20dffc: 0x12820018
label_20e000:
    if (ctx->pc == 0x20E000u) {
        ctx->pc = 0x20E000u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x20E004u;
        goto label_20e004;
    }
    ctx->pc = 0x20DFFCu;
    {
        const bool branch_taken_0x20dffc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E000u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x20dffc) {
            ctx->pc = 0x20E060u;
            goto label_20e060;
        }
    }
    ctx->pc = 0x20E004u;
label_20e004:
    // 0x20e004: 0x12820019
label_20e008:
    if (ctx->pc == 0x20E008u) {
        ctx->pc = 0x20E008u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E00Cu;
        goto label_20e00c;
    }
    ctx->pc = 0x20E004u;
    {
        const bool branch_taken_0x20e004 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E008u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e004) {
            ctx->pc = 0x20E06Cu;
            goto label_20e06c;
        }
    }
    ctx->pc = 0x20E00Cu;
label_20e00c:
    // 0x20e00c: 0x100001b0
label_20e010:
    if (ctx->pc == 0x20E010u) {
        ctx->pc = 0x20E010u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x20E014u;
        goto label_20e014;
    }
    ctx->pc = 0x20E00Cu;
    {
        const bool branch_taken_0x20e00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E010u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x20e00c) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20E014u;
label_20e014:
    // 0x20e014: 0x3c04003c
    ctx->pc = 0x20e014u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_20e018:
    // 0x20e018: 0x3c030031
    ctx->pc = 0x20e018u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_20e01c:
    // 0x20e01c: 0x24631b90
    ctx->pc = 0x20e01cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_20e020:
    // 0x20e020: 0x2402003c
    ctx->pc = 0x20e020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_20e024:
    // 0x20e024: 0xa21018
    ctx->pc = 0x20e024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e028:
    // 0x20e028: 0x621821
    ctx->pc = 0x20e028u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e02c:
    // 0x20e02c: 0x8c62002c
    ctx->pc = 0x20e02cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20e030:
    // 0x20e030: 0xac82c514
    ctx->pc = 0x20e030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952212), GPR_U32(ctx, 2));
label_20e034:
    // 0x20e034: 0x3c040032
    ctx->pc = 0x20e034u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20e038:
    // 0x20e038: 0x2484eaa8
    ctx->pc = 0x20e038u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961832));
label_20e03c:
    // 0x20e03c: 0xc082c3a
label_20e040:
    if (ctx->pc == 0x20E040u) {
        ctx->pc = 0x20E040u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E044u;
        goto label_20e044;
    }
    ctx->pc = 0x20E03Cu;
    SET_GPR_U32(ctx, 31, 0x20E044u);
    ctx->pc = 0x20E040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E044u; }
    }
    if (ctx->pc != 0x20E044u) { return; }
    ctx->pc = 0x20E044u;
label_20e044:
    // 0x20e044: 0xc0833a8
label_20e048:
    if (ctx->pc == 0x20E048u) {
        ctx->pc = 0x20E04Cu;
        goto label_20e04c;
    }
    ctx->pc = 0x20E044u;
    SET_GPR_U32(ctx, 31, 0x20E04Cu);
    ctx->pc = 0x20CEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_controlsmenu_0x20cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E04Cu; }
    }
    if (ctx->pc != 0x20E04Cu) { return; }
    ctx->pc = 0x20E04Cu;
label_20e04c:
    // 0x20e04c: 0x100000ca
label_20e050:
    if (ctx->pc == 0x20E050u) {
        ctx->pc = 0x20E054u;
        goto label_20e054;
    }
    ctx->pc = 0x20E04Cu;
    {
        const bool branch_taken_0x20e04c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e04c) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20E054u;
label_20e054:
    // 0x20e054: 0x3c040032
    ctx->pc = 0x20e054u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20e058:
    // 0x20e058: 0x10000113
label_20e05c:
    if (ctx->pc == 0x20E05Cu) {
        ctx->pc = 0x20E05Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962248));
        ctx->pc = 0x20E060u;
        goto label_20e060;
    }
    ctx->pc = 0x20E058u;
    {
        const bool branch_taken_0x20e058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E05Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962248));
        if (branch_taken_0x20e058) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20E060u;
label_20e060:
    // 0x20e060: 0x3c040032
    ctx->pc = 0x20e060u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20e064:
    // 0x20e064: 0x10000110
label_20e068:
    if (ctx->pc == 0x20E068u) {
        ctx->pc = 0x20E068u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962592));
        ctx->pc = 0x20E06Cu;
        goto label_20e06c;
    }
    ctx->pc = 0x20E064u;
    {
        const bool branch_taken_0x20e064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E068u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962592));
        if (branch_taken_0x20e064) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20E06Cu;
label_20e06c:
    // 0x20e06c: 0x3c040032
    ctx->pc = 0x20e06cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20e070:
    // 0x20e070: 0x1000010d
label_20e074:
    if (ctx->pc == 0x20E074u) {
        ctx->pc = 0x20E074u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962936));
        ctx->pc = 0x20E078u;
        goto label_20e078;
    }
    ctx->pc = 0x20E070u;
    {
        const bool branch_taken_0x20e070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E074u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962936));
        if (branch_taken_0x20e070) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20E078u;
label_20e078:
    // 0x20e078: 0x882d
    ctx->pc = 0x20e078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e07c:
    // 0x20e07c: 0x660000c
label_20e080:
    if (ctx->pc == 0x20E080u) {
        ctx->pc = 0x20E080u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E084u;
        goto label_20e084;
    }
    ctx->pc = 0x20E07Cu;
    {
        const bool branch_taken_0x20e07c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x20E080u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e07c) {
            ctx->pc = 0x20E0B0u;
            goto label_20e0b0;
        }
    }
    ctx->pc = 0x20E084u;
label_20e084:
    // 0x20e084: 0x8e04001c
    ctx->pc = 0x20e084u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20e088:
    // 0x20e088: 0x3c02003c
    ctx->pc = 0x20e088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20e08c:
    // 0x20e08c: 0x8c43c514
    ctx->pc = 0x20e08cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294952212)));
label_20e090:
    // 0x20e090: 0x31900
    ctx->pc = 0x20e090u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_20e094:
    // 0x20e094: 0x3c020032
    ctx->pc = 0x20e094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e098:
    // 0x20e098: 0x2442e880
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961280));
label_20e09c:
    // 0x20e09c: 0x621821
    ctx->pc = 0x20e09cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e0a0:
    // 0x20e0a0: 0xac830000
    ctx->pc = 0x20e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20e0a4:
    // 0x20e0a4: 0x200202d
    ctx->pc = 0x20e0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e0a8:
    // 0x20e0a8: 0xc0833e8
label_20e0ac:
    if (ctx->pc == 0x20E0ACu) {
        ctx->pc = 0x20E0ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E0B0u;
        goto label_20e0b0;
    }
    ctx->pc = 0x20E0A8u;
    SET_GPR_U32(ctx, 31, 0x20E0B0u);
    ctx->pc = 0x20E0ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20CFA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_controlsmenu_0x20cfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E0B0u; }
    }
    if (ctx->pc != 0x20E0B0u) { return; }
    ctx->pc = 0x20E0B0u;
label_20e0b0:
    // 0x20e0b0: 0x26830002
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 2));
label_20e0b4:
    // 0x20e0b4: 0x2c620024
    ctx->pc = 0x20e0b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 36));
label_20e0b8:
    // 0x20e0b8: 0x10400183
label_20e0bc:
    if (ctx->pc == 0x20E0BCu) {
        ctx->pc = 0x20E0BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20E0C0u;
        goto label_20e0c0;
    }
    ctx->pc = 0x20E0B8u;
    {
        const bool branch_taken_0x20e0b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E0BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20e0b8) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E0C0u;
label_20e0c0:
    // 0x20e0c0: 0x24425660
    ctx->pc = 0x20e0c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22112));
label_20e0c4:
    // 0x20e0c4: 0x31880
    ctx->pc = 0x20e0c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20e0c8:
    // 0x20e0c8: 0x621821
    ctx->pc = 0x20e0c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e0cc:
    // 0x20e0cc: 0x8c620000
    ctx->pc = 0x20e0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e0d0:
    // 0x20e0d0: 0x400008
label_20e0d4:
    if (ctx->pc == 0x20E0D4u) {
        ctx->pc = 0x20E0D8u;
        goto label_20e0d8;
    }
    ctx->pc = 0x20E0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E0D8u;
label_20e0d8:
    // 0x20e0d8: 0x2411fffe
    ctx->pc = 0x20e0d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967294));
label_20e0dc:
    // 0x20e0dc: 0x8e430004
    ctx->pc = 0x20e0dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20e0e0:
    // 0x20e0e0: 0x24020021
    ctx->pc = 0x20e0e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
label_20e0e4:
    // 0x20e0e4: 0x14620178
label_20e0e8:
    if (ctx->pc == 0x20E0E8u) {
        ctx->pc = 0x20E0E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x20E0ECu;
        goto label_20e0ec;
    }
    ctx->pc = 0x20E0E4u;
    {
        const bool branch_taken_0x20e0e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E0E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x20e0e4) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E0ECu;
label_20e0ec:
    // 0x20e0ec: 0x6a00176
label_20e0f0:
    if (ctx->pc == 0x20E0F0u) {
        ctx->pc = 0x20E0F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x20E0F4u;
        goto label_20e0f4;
    }
    ctx->pc = 0x20E0ECu;
    {
        const bool branch_taken_0x20e0ec = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x20E0F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20e0ec) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E0F4u;
label_20e0f4:
    // 0x20e0f4: 0x8c62c514
    ctx->pc = 0x20e0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294952212)));
label_20e0f8:
    // 0x20e0f8: 0x2221021
    ctx->pc = 0x20e0f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20e0fc:
    // 0x20e0fc: 0x4410003
label_20e100:
    if (ctx->pc == 0x20E100u) {
        ctx->pc = 0x20E100u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952212), GPR_U32(ctx, 2));
        ctx->pc = 0x20E104u;
        goto label_20e104;
    }
    ctx->pc = 0x20E0FCu;
    {
        const bool branch_taken_0x20e0fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20E100u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952212), GPR_U32(ctx, 2));
        if (branch_taken_0x20e0fc) {
            ctx->pc = 0x20E10Cu;
            goto label_20e10c;
        }
    }
    ctx->pc = 0x20E104u;
label_20e104:
    // 0x20e104: 0x24420004
    ctx->pc = 0x20e104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
label_20e108:
    // 0x20e108: 0xac62c514
    ctx->pc = 0x20e108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952212), GPR_U32(ctx, 2));
label_20e10c:
    // 0x20e10c: 0x3c05003c
    ctx->pc = 0x20e10cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_20e110:
    // 0x20e110: 0x8ca4c514
    ctx->pc = 0x20e110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294952212)));
label_20e114:
    // 0x20e114: 0x24820003
    ctx->pc = 0x20e114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
label_20e118:
    // 0x20e118: 0x2403ffff
    ctx->pc = 0x20e118u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e11c:
    // 0x20e11c: 0x64182a
    ctx->pc = 0x20e11cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_20e120:
    // 0x20e120: 0x83100b
    ctx->pc = 0x20e120u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_20e124:
    // 0x20e124: 0x21083
    ctx->pc = 0x20e124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_20e128:
    // 0x20e128: 0x21080
    ctx->pc = 0x20e128u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20e12c:
    // 0x20e12c: 0x822023
    ctx->pc = 0x20e12cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20e130:
    // 0x20e130: 0xc09819e
label_20e134:
    if (ctx->pc == 0x20E134u) {
        ctx->pc = 0x20E134u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294952212), GPR_U32(ctx, 4));
        ctx->pc = 0x20E138u;
        goto label_20e138;
    }
    ctx->pc = 0x20E130u;
    SET_GPR_U32(ctx, 31, 0x20E138u);
    ctx->pc = 0x20E134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952212), GPR_U32(ctx, 4));
    ctx->pc = 0x260678u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorH_0x260678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E138u; }
    }
    if (ctx->pc != 0x20E138u) { return; }
    ctx->pc = 0x20E138u;
label_20e138:
    // 0x20e138: 0x10000164
label_20e13c:
    if (ctx->pc == 0x20E13Cu) {
        ctx->pc = 0x20E13Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E140u;
        goto label_20e140;
    }
    ctx->pc = 0x20E138u;
    {
        const bool branch_taken_0x20e138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E13Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e138) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E140u;
label_20e140:
    // 0x20e140: 0x10000161
label_20e144:
    if (ctx->pc == 0x20E144u) {
        ctx->pc = 0x20E144u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E148u;
        goto label_20e148;
    }
    ctx->pc = 0x20E140u;
    {
        const bool branch_taken_0x20e140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E144u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e140) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E148u;
label_20e148:
    // 0x20e148: 0x3c030031
    ctx->pc = 0x20e148u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_20e14c:
    // 0x20e14c: 0x24631b90
    ctx->pc = 0x20e14cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_20e150:
    // 0x20e150: 0x2402003c
    ctx->pc = 0x20e150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_20e154:
    // 0x20e154: 0x2a21018
    ctx->pc = 0x20e154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e158:
    // 0x20e158: 0x621821
    ctx->pc = 0x20e158u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e15c:
    // 0x20e15c: 0x3c02003c
    ctx->pc = 0x20e15cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_20e160:
    // 0x20e160: 0x8c42c514
    ctx->pc = 0x20e160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952212)));
label_20e164:
    // 0x20e164: 0xc0833ca
label_20e168:
    if (ctx->pc == 0x20E168u) {
        ctx->pc = 0x20E168u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x20E16Cu;
        goto label_20e16c;
    }
    ctx->pc = 0x20E164u;
    SET_GPR_U32(ctx, 31, 0x20E16Cu);
    ctx->pc = 0x20E168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x20CF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_controlsmenu_0x20cf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E16Cu; }
    }
    if (ctx->pc != 0x20E16Cu) { return; }
    ctx->pc = 0x20E16Cu;
label_20e16c:
    // 0x20e16c: 0xc0981b4
label_20e170:
    if (ctx->pc == 0x20E170u) {
        ctx->pc = 0x20E170u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E174u;
        goto label_20e174;
    }
    ctx->pc = 0x20E16Cu;
    SET_GPR_U32(ctx, 31, 0x20E174u);
    ctx->pc = 0x20E170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2606D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStart_0x2606d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E174u; }
    }
    if (ctx->pc != 0x20E174u) { return; }
    ctx->pc = 0x20E174u;
label_20e174:
    // 0x20e174: 0x100000cc
label_20e178:
    if (ctx->pc == 0x20E178u) {
        ctx->pc = 0x20E178u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E17Cu;
        goto label_20e17c;
    }
    ctx->pc = 0x20E174u;
    {
        const bool branch_taken_0x20e174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E178u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e174) {
            ctx->pc = 0x20E4A8u;
            goto label_20e4a8;
        }
    }
    ctx->pc = 0x20E17Cu;
label_20e17c:
    // 0x20e17c: 0x260402d
    ctx->pc = 0x20e17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e180:
    // 0x20e180: 0x8e020084
    ctx->pc = 0x20e180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20e184:
    // 0x20e184: 0x18400018
label_20e188:
    if (ctx->pc == 0x20E188u) {
        ctx->pc = 0x20E188u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E18Cu;
        goto label_20e18c;
    }
    ctx->pc = 0x20E184u;
    {
        const bool branch_taken_0x20e184 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E188u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e184) {
            ctx->pc = 0x20E1E8u;
            goto label_20e1e8;
        }
    }
    ctx->pc = 0x20E18Cu;
label_20e18c:
    // 0x20e18c: 0x2403003c
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
label_20e190:
    // 0x20e190: 0x1031818
    ctx->pc = 0x20e190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e194:
    // 0x20e194: 0x3c020031
    ctx->pc = 0x20e194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20e198:
    // 0x20e198: 0x24421bc0
    ctx->pc = 0x20e198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_20e19c:
    // 0x20e19c: 0x623021
    ctx->pc = 0x20e19cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e1a0:
    // 0x20e1a0: 0x24050024
    ctx->pc = 0x20e1a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
label_20e1a4:
    // 0x20e1a4: 0x24070001
    ctx->pc = 0x20e1a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_20e1a8:
    // 0x20e1a8: 0x8cc20000
    ctx->pc = 0x20e1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20e1ac:
    // 0x20e1ac: 0x0
    ctx->pc = 0x20e1acu;
    // NOP
label_20e1b0:
    // 0x20e1b0: 0x14820005
label_20e1b4:
    if (ctx->pc == 0x20E1B4u) {
        ctx->pc = 0x20E1B4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x20E1B8u;
        goto label_20e1b8;
    }
    ctx->pc = 0x20E1B0u;
    {
        const bool branch_taken_0x20e1b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E1B4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x20e1b0) {
            ctx->pc = 0x20E1C8u;
            goto label_20e1c8;
        }
    }
    ctx->pc = 0x20E1B8u;
label_20e1b8:
    // 0x20e1b8: 0x851018
    ctx->pc = 0x20e1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e1bc:
    // 0x20e1bc: 0x431021
    ctx->pc = 0x20e1bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e1c0:
    // 0x20e1c0: 0x10000004
label_20e1c4:
    if (ctx->pc == 0x20E1C4u) {
        ctx->pc = 0x20E1C4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
        ctx->pc = 0x20E1C8u;
        goto label_20e1c8;
    }
    ctx->pc = 0x20E1C0u;
    {
        const bool branch_taken_0x20e1c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E1C4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
        if (branch_taken_0x20e1c0) {
            ctx->pc = 0x20E1D4u;
            goto label_20e1d4;
        }
    }
    ctx->pc = 0x20E1C8u;
label_20e1c8:
    // 0x20e1c8: 0x851018
    ctx->pc = 0x20e1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e1cc:
    // 0x20e1cc: 0x431021
    ctx->pc = 0x20e1ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e1d0:
    // 0x20e1d0: 0xac40001c
    ctx->pc = 0x20e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_20e1d4:
    // 0x20e1d4: 0x24840001
    ctx->pc = 0x20e1d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20e1d8:
    // 0x20e1d8: 0x8e020084
    ctx->pc = 0x20e1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20e1dc:
    // 0x20e1dc: 0x82102a
    ctx->pc = 0x20e1dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_20e1e0:
    // 0x20e1e0: 0x5440fff3
label_20e1e4:
    if (ctx->pc == 0x20E1E4u) {
        ctx->pc = 0x20E1E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x20E1E8u;
        goto label_20e1e8;
    }
    ctx->pc = 0x20E1E0u;
    {
        const bool branch_taken_0x20e1e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e1e0) {
            ctx->pc = 0x20E1E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x20E1B0u;
            goto label_20e1b0;
        }
    }
    ctx->pc = 0x20E1E8u;
label_20e1e8:
    // 0x20e1e8: 0x2402001a
    ctx->pc = 0x20e1e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
label_20e1ec:
    // 0x20e1ec: 0x12820008
label_20e1f0:
    if (ctx->pc == 0x20E1F0u) {
        ctx->pc = 0x20E1F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 26));
        ctx->pc = 0x20E1F4u;
        goto label_20e1f4;
    }
    ctx->pc = 0x20E1ECu;
    {
        const bool branch_taken_0x20e1ec = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E1F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 26));
        if (branch_taken_0x20e1ec) {
            ctx->pc = 0x20E210u;
            goto label_20e210;
        }
    }
    ctx->pc = 0x20E1F4u;
label_20e1f4:
    // 0x20e1f4: 0x14400135
label_20e1f8:
    if (ctx->pc == 0x20E1F8u) {
        ctx->pc = 0x20E1F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E1FCu;
        goto label_20e1fc;
    }
    ctx->pc = 0x20E1F4u;
    {
        const bool branch_taken_0x20e1f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E1F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e1f4) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E1FCu;
label_20e1fc:
    // 0x20e1fc: 0x2a82001f
    ctx->pc = 0x20e1fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 31));
label_20e200:
    // 0x20e200: 0x10400131
label_20e204:
    if (ctx->pc == 0x20E204u) {
        ctx->pc = 0x20E204u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
        ctx->pc = 0x20E208u;
        goto label_20e208;
    }
    ctx->pc = 0x20E200u;
    {
        const bool branch_taken_0x20e200 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E204u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
        if (branch_taken_0x20e200) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E208u;
label_20e208:
    // 0x20e208: 0x14400130
label_20e20c:
    if (ctx->pc == 0x20E20Cu) {
        ctx->pc = 0x20E20Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E210u;
        goto label_20e210;
    }
    ctx->pc = 0x20E208u;
    {
        const bool branch_taken_0x20e208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E20Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e208) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E210u;
label_20e210:
    // 0x20e210: 0x3c030031
    ctx->pc = 0x20e210u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_20e214:
    // 0x20e214: 0x24631b90
    ctx->pc = 0x20e214u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_20e218:
    // 0x20e218: 0x2402003c
    ctx->pc = 0x20e218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_20e21c:
    // 0x20e21c: 0x1021018
    ctx->pc = 0x20e21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e220:
    // 0x20e220: 0x621821
    ctx->pc = 0x20e220u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e224:
    // 0x20e224: 0x8e020074
    ctx->pc = 0x20e224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20e228:
    // 0x20e228: 0x10000053
label_20e22c:
    if (ctx->pc == 0x20E22Cu) {
        ctx->pc = 0x20E22Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x20E230u;
        goto label_20e230;
    }
    ctx->pc = 0x20E228u;
    {
        const bool branch_taken_0x20e228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E22Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x20e228) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20E230u;
label_20e230:
    // 0x20e230: 0x260402d
    ctx->pc = 0x20e230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e234:
    // 0x20e234: 0x8e020084
    ctx->pc = 0x20e234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20e238:
    // 0x20e238: 0x18400018
label_20e23c:
    if (ctx->pc == 0x20E23Cu) {
        ctx->pc = 0x20E23Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E240u;
        goto label_20e240;
    }
    ctx->pc = 0x20E238u;
    {
        const bool branch_taken_0x20e238 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E23Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e238) {
            ctx->pc = 0x20E29Cu;
            goto label_20e29c;
        }
    }
    ctx->pc = 0x20E240u;
label_20e240:
    // 0x20e240: 0x2403003c
    ctx->pc = 0x20e240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
label_20e244:
    // 0x20e244: 0x1031818
    ctx->pc = 0x20e244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e248:
    // 0x20e248: 0x3c020031
    ctx->pc = 0x20e248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20e24c:
    // 0x20e24c: 0x24421bc4
    ctx->pc = 0x20e24cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7108));
label_20e250:
    // 0x20e250: 0x623021
    ctx->pc = 0x20e250u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e254:
    // 0x20e254: 0x24050024
    ctx->pc = 0x20e254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
label_20e258:
    // 0x20e258: 0x24070001
    ctx->pc = 0x20e258u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_20e25c:
    // 0x20e25c: 0x8cc20000
    ctx->pc = 0x20e25cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20e260:
    // 0x20e260: 0x2c420001
    ctx->pc = 0x20e260u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_20e264:
    // 0x20e264: 0x14820005
label_20e268:
    if (ctx->pc == 0x20E268u) {
        ctx->pc = 0x20E268u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x20E26Cu;
        goto label_20e26c;
    }
    ctx->pc = 0x20E264u;
    {
        const bool branch_taken_0x20e264 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E268u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x20e264) {
            ctx->pc = 0x20E27Cu;
            goto label_20e27c;
        }
    }
    ctx->pc = 0x20E26Cu;
label_20e26c:
    // 0x20e26c: 0x851018
    ctx->pc = 0x20e26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e270:
    // 0x20e270: 0x431021
    ctx->pc = 0x20e270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e274:
    // 0x20e274: 0x10000004
label_20e278:
    if (ctx->pc == 0x20E278u) {
        ctx->pc = 0x20E278u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
        ctx->pc = 0x20E27Cu;
        goto label_20e27c;
    }
    ctx->pc = 0x20E274u;
    {
        const bool branch_taken_0x20e274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E278u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
        if (branch_taken_0x20e274) {
            ctx->pc = 0x20E288u;
            goto label_20e288;
        }
    }
    ctx->pc = 0x20E27Cu;
label_20e27c:
    // 0x20e27c: 0x851018
    ctx->pc = 0x20e27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e280:
    // 0x20e280: 0x431021
    ctx->pc = 0x20e280u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e284:
    // 0x20e284: 0xac40001c
    ctx->pc = 0x20e284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_20e288:
    // 0x20e288: 0x24840001
    ctx->pc = 0x20e288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20e28c:
    // 0x20e28c: 0x8e020084
    ctx->pc = 0x20e28cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20e290:
    // 0x20e290: 0x82102a
    ctx->pc = 0x20e290u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_20e294:
    // 0x20e294: 0x5440fff2
label_20e298:
    if (ctx->pc == 0x20E298u) {
        ctx->pc = 0x20E298u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x20E29Cu;
        goto label_20e29c;
    }
    ctx->pc = 0x20E294u;
    {
        const bool branch_taken_0x20e294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e294) {
            ctx->pc = 0x20E298u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x20E260u;
            goto label_20e260;
        }
    }
    ctx->pc = 0x20E29Cu;
label_20e29c:
    // 0x20e29c: 0x2a82001c
    ctx->pc = 0x20e29cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
label_20e2a0:
    // 0x20e2a0: 0x10400109
label_20e2a4:
    if (ctx->pc == 0x20E2A4u) {
        ctx->pc = 0x20E2A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 26));
        ctx->pc = 0x20E2A8u;
        goto label_20e2a8;
    }
    ctx->pc = 0x20E2A0u;
    {
        const bool branch_taken_0x20e2a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E2A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 26));
        if (branch_taken_0x20e2a0) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E2A8u;
label_20e2a8:
    // 0x20e2a8: 0x14400108
label_20e2ac:
    if (ctx->pc == 0x20E2ACu) {
        ctx->pc = 0x20E2ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E2B0u;
        goto label_20e2b0;
    }
    ctx->pc = 0x20E2A8u;
    {
        const bool branch_taken_0x20e2a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E2ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e2a8) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E2B0u;
label_20e2b0:
    // 0x20e2b0: 0x3c030031
    ctx->pc = 0x20e2b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_20e2b4:
    // 0x20e2b4: 0x24631b90
    ctx->pc = 0x20e2b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_20e2b8:
    // 0x20e2b8: 0x2402003c
    ctx->pc = 0x20e2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_20e2bc:
    // 0x20e2bc: 0x1021018
    ctx->pc = 0x20e2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e2c0:
    // 0x20e2c0: 0x621821
    ctx->pc = 0x20e2c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e2c4:
    // 0x20e2c4: 0x8e020074
    ctx->pc = 0x20e2c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20e2c8:
    // 0x20e2c8: 0x2c420001
    ctx->pc = 0x20e2c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_20e2cc:
    // 0x20e2cc: 0x1000002a
label_20e2d0:
    if (ctx->pc == 0x20E2D0u) {
        ctx->pc = 0x20E2D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x20E2D4u;
        goto label_20e2d4;
    }
    ctx->pc = 0x20E2CCu;
    {
        const bool branch_taken_0x20e2cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E2D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x20e2cc) {
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20E2D4u;
label_20e2d4:
    // 0x20e2d4: 0x260402d
    ctx->pc = 0x20e2d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e2d8:
    // 0x20e2d8: 0x8e020084
    ctx->pc = 0x20e2d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20e2dc:
    // 0x20e2dc: 0x18400019
label_20e2e0:
    if (ctx->pc == 0x20E2E0u) {
        ctx->pc = 0x20E2E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E2E4u;
        goto label_20e2e4;
    }
    ctx->pc = 0x20E2DCu;
    {
        const bool branch_taken_0x20e2dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E2E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e2dc) {
            ctx->pc = 0x20E344u;
            goto label_20e344;
        }
    }
    ctx->pc = 0x20E2E4u;
label_20e2e4:
    // 0x20e2e4: 0x2403003c
    ctx->pc = 0x20e2e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
label_20e2e8:
    // 0x20e2e8: 0x1031818
    ctx->pc = 0x20e2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e2ec:
    // 0x20e2ec: 0x3c020031
    ctx->pc = 0x20e2ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_20e2f0:
    // 0x20e2f0: 0x24421bc8
    ctx->pc = 0x20e2f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7112));
label_20e2f4:
    // 0x20e2f4: 0x623021
    ctx->pc = 0x20e2f4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e2f8:
    // 0x20e2f8: 0x24050024
    ctx->pc = 0x20e2f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
label_20e2fc:
    // 0x20e2fc: 0x24070001
    ctx->pc = 0x20e2fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_20e300:
    // 0x20e300: 0x8cc20000
    ctx->pc = 0x20e300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20e304:
    // 0x20e304: 0x0
    ctx->pc = 0x20e304u;
    // NOP
label_20e308:
    // 0x20e308: 0x2c420001
    ctx->pc = 0x20e308u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_20e30c:
    // 0x20e30c: 0x14820005
label_20e310:
    if (ctx->pc == 0x20E310u) {
        ctx->pc = 0x20E310u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x20E314u;
        goto label_20e314;
    }
    ctx->pc = 0x20E30Cu;
    {
        const bool branch_taken_0x20e30c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E310u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        if (branch_taken_0x20e30c) {
            ctx->pc = 0x20E324u;
            goto label_20e324;
        }
    }
    ctx->pc = 0x20E314u;
label_20e314:
    // 0x20e314: 0x851018
    ctx->pc = 0x20e314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e318:
    // 0x20e318: 0x431021
    ctx->pc = 0x20e318u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e31c:
    // 0x20e31c: 0x10000004
label_20e320:
    if (ctx->pc == 0x20E320u) {
        ctx->pc = 0x20E320u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
        ctx->pc = 0x20E324u;
        goto label_20e324;
    }
    ctx->pc = 0x20E31Cu;
    {
        const bool branch_taken_0x20e31c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E320u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
        if (branch_taken_0x20e31c) {
            ctx->pc = 0x20E330u;
            goto label_20e330;
        }
    }
    ctx->pc = 0x20E324u;
label_20e324:
    // 0x20e324: 0x851018
    ctx->pc = 0x20e324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e328:
    // 0x20e328: 0x431021
    ctx->pc = 0x20e328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e32c:
    // 0x20e32c: 0xac40001c
    ctx->pc = 0x20e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_20e330:
    // 0x20e330: 0x24840001
    ctx->pc = 0x20e330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20e334:
    // 0x20e334: 0x8e020084
    ctx->pc = 0x20e334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_20e338:
    // 0x20e338: 0x82102a
    ctx->pc = 0x20e338u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_20e33c:
    // 0x20e33c: 0x5440fff2
label_20e340:
    if (ctx->pc == 0x20E340u) {
        ctx->pc = 0x20E340u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x20E344u;
        goto label_20e344;
    }
    ctx->pc = 0x20E33Cu;
    {
        const bool branch_taken_0x20e33c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e33c) {
            ctx->pc = 0x20E340u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x20E308u;
            goto label_20e308;
        }
    }
    ctx->pc = 0x20E344u;
label_20e344:
    // 0x20e344: 0x2a82001c
    ctx->pc = 0x20e344u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
label_20e348:
    // 0x20e348: 0x104000df
label_20e34c:
    if (ctx->pc == 0x20E34Cu) {
        ctx->pc = 0x20E34Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 26));
        ctx->pc = 0x20E350u;
        goto label_20e350;
    }
    ctx->pc = 0x20E348u;
    {
        const bool branch_taken_0x20e348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E34Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 26));
        if (branch_taken_0x20e348) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E350u;
label_20e350:
    // 0x20e350: 0x144000de
label_20e354:
    if (ctx->pc == 0x20E354u) {
        ctx->pc = 0x20E354u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E358u;
        goto label_20e358;
    }
    ctx->pc = 0x20E350u;
    {
        const bool branch_taken_0x20e350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E354u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e350) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E358u;
label_20e358:
    // 0x20e358: 0x3c030031
    ctx->pc = 0x20e358u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_20e35c:
    // 0x20e35c: 0x24631b90
    ctx->pc = 0x20e35cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_20e360:
    // 0x20e360: 0x2402003c
    ctx->pc = 0x20e360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_20e364:
    // 0x20e364: 0x1021018
    ctx->pc = 0x20e364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20e368:
    // 0x20e368: 0x621821
    ctx->pc = 0x20e368u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e36c:
    // 0x20e36c: 0x8e020074
    ctx->pc = 0x20e36cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20e370:
    // 0x20e370: 0x2c420001
    ctx->pc = 0x20e370u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_20e374:
    // 0x20e374: 0xac620038
    ctx->pc = 0x20e374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_20e378:
    // 0x20e378: 0xc0981b4
label_20e37c:
    if (ctx->pc == 0x20E37Cu) {
        ctx->pc = 0x20E37Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E380u;
        goto label_20e380;
    }
    ctx->pc = 0x20E378u;
    SET_GPR_U32(ctx, 31, 0x20E380u);
    ctx->pc = 0x20E37Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2606D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStart_0x2606d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E380u; }
    }
    if (ctx->pc != 0x20E380u) { return; }
    ctx->pc = 0x20E380u;
label_20e380:
    // 0x20e380: 0x100000d2
label_20e384:
    if (ctx->pc == 0x20E384u) {
        ctx->pc = 0x20E384u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E388u;
        goto label_20e388;
    }
    ctx->pc = 0x20E380u;
    {
        const bool branch_taken_0x20e380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E384u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e380) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E388u;
label_20e388:
    // 0x20e388: 0x3c020032
    ctx->pc = 0x20e388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e38c:
    // 0x20e38c: 0xac54efe0
    ctx->pc = 0x20e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963168), GPR_U32(ctx, 20));
label_20e390:
    // 0x20e390: 0x26830002
    ctx->pc = 0x20e390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 2));
label_20e394:
    // 0x20e394: 0x2c62002d
    ctx->pc = 0x20e394u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 45));
label_20e398:
    // 0x20e398: 0x104000cb
label_20e39c:
    if (ctx->pc == 0x20E39Cu) {
        ctx->pc = 0x20E39Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x20E3A0u;
        goto label_20e3a0;
    }
    ctx->pc = 0x20E398u;
    {
        const bool branch_taken_0x20e398 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E39Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x20e398) {
            ctx->pc = 0x20E6C8u;
            goto label_20e6c8;
        }
    }
    ctx->pc = 0x20E3A0u;
label_20e3a0:
    // 0x20e3a0: 0x244256f0
    ctx->pc = 0x20e3a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22256));
label_20e3a4:
    // 0x20e3a4: 0x31880
    ctx->pc = 0x20e3a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20e3a8:
    // 0x20e3a8: 0x621821
    ctx->pc = 0x20e3a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20e3ac:
    // 0x20e3ac: 0x8c620000
    ctx->pc = 0x20e3acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e3b0:
    // 0x20e3b0: 0x400008
label_20e3b4:
    if (ctx->pc == 0x20E3B4u) {
        ctx->pc = 0x20E3B8u;
        goto label_20e3b8;
    }
    ctx->pc = 0x20E3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E3B8u;
label_20e3b8:
    // 0x20e3b8: 0xc08298c
label_20e3bc:
    if (ctx->pc == 0x20E3BCu) {
        ctx->pc = 0x20E3BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20E3C0u;
        goto label_20e3c0;
    }
    ctx->pc = 0x20E3B8u;
    SET_GPR_U32(ctx, 31, 0x20E3C0u);
    ctx->pc = 0x20E3BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20A630u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_general_hint_0x20a630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3C0u; }
    }
    if (ctx->pc != 0x20E3C0u) { return; }
    ctx->pc = 0x20E3C0u;
label_20e3c0:
    // 0x20e3c0: 0x3c100032
    ctx->pc = 0x20e3c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20e3c4:
    // 0x20e3c4: 0x2610f1d8
    ctx->pc = 0x20e3c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963672));
label_20e3c8:
    // 0x20e3c8: 0x3c02003a
    ctx->pc = 0x20e3c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_20e3cc:
    // 0x20e3cc: 0x24425440
    ctx->pc = 0x20e3ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21568));
label_20e3d0:
    // 0x20e3d0: 0xae020008
    ctx->pc = 0x20e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_20e3d4:
    // 0x20e3d4: 0x24040001
    ctx->pc = 0x20e3d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e3d8:
    // 0x20e3d8: 0x10000030
label_20e3dc:
    if (ctx->pc == 0x20E3DCu) {
        ctx->pc = 0x20E3DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20E3E0u;
        goto label_20e3e0;
    }
    ctx->pc = 0x20E3D8u;
    {
        const bool branch_taken_0x20e3d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E3DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x20e3d8) {
            ctx->pc = 0x20E49Cu;
            goto label_20e49c;
        }
    }
    ctx->pc = 0x20E3E0u;
label_20e3e0:
    // 0x20e3e0: 0xc0829ca
label_20e3e4:
    if (ctx->pc == 0x20E3E4u) {
        ctx->pc = 0x20E3E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20E3E8u;
        goto label_20e3e8;
    }
    ctx->pc = 0x20E3E0u;
    SET_GPR_U32(ctx, 31, 0x20E3E8u);
    ctx->pc = 0x20E3E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20A728u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_boss_hint_0x20a728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3E8u; }
    }
    if (ctx->pc != 0x20E3E8u) { return; }
    ctx->pc = 0x20E3E8u;
label_20e3e8:
    // 0x20e3e8: 0x3c020032
    ctx->pc = 0x20e3e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e3ec:
    // 0x20e3ec: 0x24040001
    ctx->pc = 0x20e3ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e3f0:
    // 0x20e3f0: 0x2405000c
    ctx->pc = 0x20e3f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
label_20e3f4:
    // 0x20e3f4: 0x8c46efec
    ctx->pc = 0x20e3f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294963180)));
label_20e3f8:
    // 0x20e3f8: 0xc08066c
label_20e3fc:
    if (ctx->pc == 0x20E3FCu) {
        ctx->pc = 0x20E3FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E400u;
        goto label_20e400;
    }
    ctx->pc = 0x20E3F8u;
    SET_GPR_U32(ctx, 31, 0x20E400u);
    ctx->pc = 0x20E3FCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2019B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollText_0x2019b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E400u; }
    }
    if (ctx->pc != 0x20E400u) { return; }
    ctx->pc = 0x20E400u;
label_20e400:
    // 0x20e400: 0x3c100032
    ctx->pc = 0x20e400u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20e404:
    // 0x20e404: 0x2610f1d8
    ctx->pc = 0x20e404u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963672));
label_20e408:
    // 0x20e408: 0xae020008
    ctx->pc = 0x20e408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_20e40c:
    // 0x20e40c: 0x24040001
    ctx->pc = 0x20e40cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e410:
    // 0x20e410: 0x10000022
label_20e414:
    if (ctx->pc == 0x20E414u) {
        ctx->pc = 0x20E414u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E418u;
        goto label_20e418;
    }
    ctx->pc = 0x20E410u;
    {
        const bool branch_taken_0x20e410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E414u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e410) {
            ctx->pc = 0x20E49Cu;
            goto label_20e49c;
        }
    }
    ctx->pc = 0x20E418u;
label_20e418:
    // 0x20e418: 0xc082a46
label_20e41c:
    if (ctx->pc == 0x20E41Cu) {
        ctx->pc = 0x20E41Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20E420u;
        goto label_20e420;
    }
    ctx->pc = 0x20E418u;
    SET_GPR_U32(ctx, 31, 0x20E420u);
    ctx->pc = 0x20E41Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20A918u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_legend_hint_0x20a918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E420u; }
    }
    if (ctx->pc != 0x20E420u) { return; }
    ctx->pc = 0x20E420u;
label_20e420:
    // 0x20e420: 0x3c020032
    ctx->pc = 0x20e420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e424:
    // 0x20e424: 0x24040001
    ctx->pc = 0x20e424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e428:
    // 0x20e428: 0x24050028
    ctx->pc = 0x20e428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 40));
label_20e42c:
    // 0x20e42c: 0x8c46eff8
    ctx->pc = 0x20e42cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294963192)));
label_20e430:
    // 0x20e430: 0xc08066c
label_20e434:
    if (ctx->pc == 0x20E434u) {
        ctx->pc = 0x20E434u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E438u;
        goto label_20e438;
    }
    ctx->pc = 0x20E430u;
    SET_GPR_U32(ctx, 31, 0x20E438u);
    ctx->pc = 0x20E434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2019B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollText_0x2019b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E438u; }
    }
    if (ctx->pc != 0x20E438u) { return; }
    ctx->pc = 0x20E438u;
label_20e438:
    // 0x20e438: 0x3c100032
    ctx->pc = 0x20e438u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20e43c:
    // 0x20e43c: 0x2610f1d8
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963672));
label_20e440:
    // 0x20e440: 0xae020008
    ctx->pc = 0x20e440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_20e444:
    // 0x20e444: 0x24040001
    ctx->pc = 0x20e444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e448:
    // 0x20e448: 0x10000014
label_20e44c:
    if (ctx->pc == 0x20E44Cu) {
        ctx->pc = 0x20E44Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20E450u;
        goto label_20e450;
    }
    ctx->pc = 0x20E448u;
    {
        const bool branch_taken_0x20e448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E44Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x20e448) {
            ctx->pc = 0x20E49Cu;
            goto label_20e49c;
        }
    }
    ctx->pc = 0x20E450u;
label_20e450:
    // 0x20e450: 0xc082ac2
label_20e454:
    if (ctx->pc == 0x20E454u) {
        ctx->pc = 0x20E454u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20E458u;
        goto label_20e458;
    }
    ctx->pc = 0x20E450u;
    SET_GPR_U32(ctx, 31, 0x20E458u);
    ctx->pc = 0x20E454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20AB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_rune_hint_0x20ab08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E458u; }
    }
    if (ctx->pc != 0x20E458u) { return; }
    ctx->pc = 0x20E458u;
label_20e458:
    // 0x20e458: 0x3c030032
    ctx->pc = 0x20e458u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20e45c:
    // 0x20e45c: 0x2463f2c0
    ctx->pc = 0x20e45cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963904));
label_20e460:
    // 0x20e460: 0x3c020032
    ctx->pc = 0x20e460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e464:
    // 0x20e464: 0x8c42f004
    ctx->pc = 0x20e464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963204)));
label_20e468:
    // 0x20e468: 0x21080
    ctx->pc = 0x20e468u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20e46c:
    // 0x20e46c: 0x431021
    ctx->pc = 0x20e46cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e470:
    // 0x20e470: 0x8c460000
    ctx->pc = 0x20e470u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e474:
    // 0x20e474: 0x24040001
    ctx->pc = 0x20e474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e478:
    // 0x20e478: 0x2405001b
    ctx->pc = 0x20e478u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 27));
label_20e47c:
    // 0x20e47c: 0x24c6ffff
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_20e480:
    // 0x20e480: 0xc08066c
label_20e484:
    if (ctx->pc == 0x20E484u) {
        ctx->pc = 0x20E484u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E488u;
        goto label_20e488;
    }
    ctx->pc = 0x20E480u;
    SET_GPR_U32(ctx, 31, 0x20E488u);
    ctx->pc = 0x20E484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2019B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollText_0x2019b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E488u; }
    }
    if (ctx->pc != 0x20E488u) { return; }
    ctx->pc = 0x20E488u;
label_20e488:
    // 0x20e488: 0x3c100032
    ctx->pc = 0x20e488u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_20e48c:
    // 0x20e48c: 0x2610f1d8
    ctx->pc = 0x20e48cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963672));
label_20e490:
    // 0x20e490: 0xae020008
    ctx->pc = 0x20e490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_20e494:
    // 0x20e494: 0x24040001
    ctx->pc = 0x20e494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e498:
    // 0x20e498: 0x24050001
    ctx->pc = 0x20e498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_20e49c:
    // 0x20e49c: 0xc080882
label_20e4a0:
    if (ctx->pc == 0x20E4A0u) {
        ctx->pc = 0x20E4A4u;
        goto label_20e4a4;
    }
    ctx->pc = 0x20E49Cu;
    SET_GPR_U32(ctx, 31, 0x20E4A4u);
    ctx->pc = 0x202208u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextListMax_0x202208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4A4u; }
    }
    if (ctx->pc != 0x20E4A4u) { return; }
    ctx->pc = 0x20E4A4u;
label_20e4a4:
    // 0x20e4a4: 0x200202d
    ctx->pc = 0x20e4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e4a8:
    // 0x20e4a8: 0xc082c3a
label_20e4ac:
    if (ctx->pc == 0x20E4ACu) {
        ctx->pc = 0x20E4ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E4B0u;
        goto label_20e4b0;
    }
    ctx->pc = 0x20E4A8u;
    SET_GPR_U32(ctx, 31, 0x20E4B0u);
    ctx->pc = 0x20E4ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4B0u; }
    }
    if (ctx->pc != 0x20E4B0u) { return; }
    ctx->pc = 0x20E4B0u;
label_20e4b0:
    // 0x20e4b0: 0x10000086
label_20e4b4:
    if (ctx->pc == 0x20E4B4u) {
        ctx->pc = 0x20E4B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E4B8u;
        goto label_20e4b8;
    }
    ctx->pc = 0x20E4B0u;
    {
        const bool branch_taken_0x20e4b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E4B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e4b0) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E4B8u;
label_20e4b8:
    // 0x20e4b8: 0xc09d22e
label_20e4bc:
    if (ctx->pc == 0x20E4BCu) {
        ctx->pc = 0x20E4BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E4C0u;
        goto label_20e4c0;
    }
    ctx->pc = 0x20E4B8u;
    SET_GPR_U32(ctx, 31, 0x20E4C0u);
    ctx->pc = 0x20E4BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2748B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerHintsDeActivate_0x2748b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4C0u; }
    }
    if (ctx->pc != 0x20E4C0u) { return; }
    ctx->pc = 0x20E4C0u;
label_20e4c0:
    // 0x20e4c0: 0x10000082
label_20e4c4:
    if (ctx->pc == 0x20E4C4u) {
        ctx->pc = 0x20E4C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x20E4C8u;
        goto label_20e4c8;
    }
    ctx->pc = 0x20E4C0u;
    {
        const bool branch_taken_0x20e4c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E4C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x20e4c0) {
            ctx->pc = 0x20E6CCu;
            goto label_20e6cc;
        }
    }
    ctx->pc = 0x20E4C8u;
label_20e4c8:
    // 0x20e4c8: 0x8e030028
    ctx->pc = 0x20e4c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20e4cc:
    // 0x20e4cc: 0x90710000
    ctx->pc = 0x20e4ccu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20e4d0:
    // 0x20e4d0: 0x118c00
    ctx->pc = 0x20e4d0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 16));
label_20e4d4:
    // 0x20e4d4: 0x90620004
    ctx->pc = 0x20e4d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_20e4d8:
    // 0x20e4d8: 0x21200
    ctx->pc = 0x20e4d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_20e4dc:
    // 0x20e4dc: 0x2228825
    ctx->pc = 0x20e4dcu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20e4e0:
    // 0x20e4e0: 0x90620008
    ctx->pc = 0x20e4e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_20e4e4:
    // 0x20e4e4: 0x2228825
    ctx->pc = 0x20e4e4u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20e4e8:
    // 0x20e4e8: 0xc080750
label_20e4ec:
    if (ctx->pc == 0x20E4ECu) {
        ctx->pc = 0x20E4ECu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20E4F0u;
        goto label_20e4f0;
    }
    ctx->pc = 0x20E4E8u;
    SET_GPR_U32(ctx, 31, 0x20E4F0u);
    ctx->pc = 0x20E4ECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetDrawStringScale_0x201d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4F0u; }
    }
    if (ctx->pc != 0x20E4F0u) { return; }
    ctx->pc = 0x20E4F0u;
label_20e4f0:
    // 0x20e4f0: 0x3c020032
    ctx->pc = 0x20e4f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e4f4:
    // 0x20e4f4: 0x8c43efe0
    ctx->pc = 0x20e4f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963168)));
label_20e4f8:
    // 0x20e4f8: 0x24020028
    ctx->pc = 0x20e4f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
label_20e4fc:
    // 0x20e4fc: 0x1062001e
label_20e500:
    if (ctx->pc == 0x20E500u) {
        ctx->pc = 0x20E500u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 41));
        ctx->pc = 0x20E504u;
        goto label_20e504;
    }
    ctx->pc = 0x20E4FCu;
    {
        const bool branch_taken_0x20e4fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E500u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 41));
        if (branch_taken_0x20e4fc) {
            ctx->pc = 0x20E578u;
            goto label_20e578;
        }
    }
    ctx->pc = 0x20E504u;
label_20e504:
    // 0x20e504: 0x10400005
label_20e508:
    if (ctx->pc == 0x20E508u) {
        ctx->pc = 0x20E508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x20E50Cu;
        goto label_20e50c;
    }
    ctx->pc = 0x20E504u;
    {
        const bool branch_taken_0x20e504 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
        if (branch_taken_0x20e504) {
            ctx->pc = 0x20E51Cu;
            goto label_20e51c;
        }
    }
    ctx->pc = 0x20E50Cu;
label_20e50c:
    // 0x20e50c: 0x1062000a
label_20e510:
    if (ctx->pc == 0x20E510u) {
        ctx->pc = 0x20E510u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x20E514u;
        goto label_20e514;
    }
    ctx->pc = 0x20E50Cu;
    {
        const bool branch_taken_0x20e50c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E510u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20e50c) {
            ctx->pc = 0x20E538u;
            goto label_20e538;
        }
    }
    ctx->pc = 0x20E514u;
label_20e514:
    // 0x20e514: 0x1000006a
label_20e518:
    if (ctx->pc == 0x20E518u) {
        ctx->pc = 0x20E51Cu;
        goto label_20e51c;
    }
    ctx->pc = 0x20E514u;
    {
        const bool branch_taken_0x20e514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e514) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E51Cu;
label_20e51c:
    // 0x20e51c: 0x24020029
    ctx->pc = 0x20e51cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
label_20e520:
    // 0x20e520: 0x10620030
label_20e524:
    if (ctx->pc == 0x20E524u) {
        ctx->pc = 0x20E524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x20E528u;
        goto label_20e528;
    }
    ctx->pc = 0x20E520u;
    {
        const bool branch_taken_0x20e520 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
        if (branch_taken_0x20e520) {
            ctx->pc = 0x20E5E4u;
            goto label_20e5e4;
        }
    }
    ctx->pc = 0x20E528u;
label_20e528:
    // 0x20e528: 0x10620048
label_20e52c:
    if (ctx->pc == 0x20E52Cu) {
        ctx->pc = 0x20E52Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x20E530u;
        goto label_20e530;
    }
    ctx->pc = 0x20E528u;
    {
        const bool branch_taken_0x20e528 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20E52Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 112));
        if (branch_taken_0x20e528) {
            ctx->pc = 0x20E64Cu;
            goto label_20e64c;
        }
    }
    ctx->pc = 0x20E530u;
label_20e530:
    // 0x20e530: 0x10000063
label_20e534:
    if (ctx->pc == 0x20E534u) {
        ctx->pc = 0x20E538u;
        goto label_20e538;
    }
    ctx->pc = 0x20E530u;
    {
        const bool branch_taken_0x20e530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e530) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E538u;
label_20e538:
    // 0x20e538: 0x8c46f1e8
    ctx->pc = 0x20e538u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294963688)));
label_20e53c:
    // 0x20e53c: 0x3c030032
    ctx->pc = 0x20e53cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20e540:
    // 0x20e540: 0x3c020032
    ctx->pc = 0x20e540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e544:
    // 0x20e544: 0x8c42efe8
    ctx->pc = 0x20e544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963176)));
label_20e548:
    // 0x20e548: 0xafa20000
    ctx->pc = 0x20e548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20e54c:
    // 0x20e54c: 0x24040001
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e550:
    // 0x20e550: 0x2405ff00
    ctx->pc = 0x20e550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
label_20e554:
    // 0x20e554: 0x63023
    ctx->pc = 0x20e554u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_20e558:
    // 0x20e558: 0x382d
    ctx->pc = 0x20e558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e55c:
    // 0x20e55c: 0x24080006
    ctx->pc = 0x20e55cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 6));
label_20e560:
    // 0x20e560: 0x220482d
    ctx->pc = 0x20e560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e564:
    // 0x20e564: 0x240a0003
    ctx->pc = 0x20e564u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 3));
label_20e568:
    // 0x20e568: 0xc080832
label_20e56c:
    if (ctx->pc == 0x20E56Cu) {
        ctx->pc = 0x20E56Cu;
        SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 3), 4294963172)));
        ctx->pc = 0x20E570u;
        goto label_20e570;
    }
    ctx->pc = 0x20E568u;
    SET_GPR_U32(ctx, 31, 0x20E570u);
    ctx->pc = 0x20E56Cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 3), 4294963172)));
    ctx->pc = 0x2020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawScrollListText_0x2020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E570u; }
    }
    if (ctx->pc != 0x20E570u) { return; }
    ctx->pc = 0x20E570u;
label_20e570:
    // 0x20e570: 0x10000053
label_20e574:
    if (ctx->pc == 0x20E574u) {
        ctx->pc = 0x20E578u;
        goto label_20e578;
    }
    ctx->pc = 0x20E570u;
    {
        const bool branch_taken_0x20e570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e570) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E578u;
label_20e578:
    // 0x20e578: 0x24060070
    ctx->pc = 0x20e578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 112));
label_20e57c:
    // 0x20e57c: 0x3c020032
    ctx->pc = 0x20e57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e580:
    // 0x20e580: 0x8c42eff0
    ctx->pc = 0x20e580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963184)));
label_20e584:
    // 0x20e584: 0x1840004e
label_20e588:
    if (ctx->pc == 0x20E588u) {
        ctx->pc = 0x20E588u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E58Cu;
        goto label_20e58c;
    }
    ctx->pc = 0x20E584u;
    {
        const bool branch_taken_0x20e584 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E588u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e584) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E58Cu;
label_20e58c:
    // 0x20e58c: 0x3c160032
    ctx->pc = 0x20e58cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
label_20e590:
    // 0x20e590: 0x3c150031
    ctx->pc = 0x20e590u;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
label_20e594:
    // 0x20e594: 0x3c120032
    ctx->pc = 0x20e594u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
label_20e598:
    // 0x20e598: 0xafb00000
    ctx->pc = 0x20e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_20e59c:
    // 0x20e59c: 0x0
    ctx->pc = 0x20e59cu;
    // NOP
label_20e5a0:
    // 0x20e5a0: 0x24040001
    ctx->pc = 0x20e5a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e5a4:
    // 0x20e5a4: 0x2405ff00
    ctx->pc = 0x20e5a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
label_20e5a8:
    // 0x20e5a8: 0x382d
    ctx->pc = 0x20e5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e5ac:
    // 0x20e5ac: 0x24080006
    ctx->pc = 0x20e5acu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 6));
label_20e5b0:
    // 0x20e5b0: 0x220482d
    ctx->pc = 0x20e5b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e5b4:
    // 0x20e5b4: 0x502d
    ctx->pc = 0x20e5b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e5b8:
    // 0x20e5b8: 0xc080832
label_20e5bc:
    if (ctx->pc == 0x20E5BCu) {
        ctx->pc = 0x20E5BCu;
        SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 22), 4294963180)));
        ctx->pc = 0x20E5C0u;
        goto label_20e5c0;
    }
    ctx->pc = 0x20E5B8u;
    SET_GPR_U32(ctx, 31, 0x20E5C0u);
    ctx->pc = 0x20E5BCu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 22), 4294963180)));
    ctx->pc = 0x2020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawScrollListText_0x2020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E5C0u; }
    }
    if (ctx->pc != 0x20E5C0u) { return; }
    ctx->pc = 0x20E5C0u;
label_20e5c0:
    // 0x20e5c0: 0x8ea2f284
    ctx->pc = 0x20e5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294963844)));
label_20e5c4:
    // 0x20e5c4: 0x24460010
    ctx->pc = 0x20e5c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 16));
label_20e5c8:
    // 0x20e5c8: 0x26100001
    ctx->pc = 0x20e5c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20e5cc:
    // 0x20e5cc: 0x8e42eff0
    ctx->pc = 0x20e5ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294963184)));
label_20e5d0:
    // 0x20e5d0: 0x202102a
    ctx->pc = 0x20e5d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_20e5d4:
    // 0x20e5d4: 0x5440fff2
label_20e5d8:
    if (ctx->pc == 0x20E5D8u) {
        ctx->pc = 0x20E5D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x20E5DCu;
        goto label_20e5dc;
    }
    ctx->pc = 0x20E5D4u;
    {
        const bool branch_taken_0x20e5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e5d4) {
            ctx->pc = 0x20E5D8u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
            ctx->pc = 0x20E5A0u;
            goto label_20e5a0;
        }
    }
    ctx->pc = 0x20E5DCu;
label_20e5dc:
    // 0x20e5dc: 0x10000038
label_20e5e0:
    if (ctx->pc == 0x20E5E0u) {
        ctx->pc = 0x20E5E4u;
        goto label_20e5e4;
    }
    ctx->pc = 0x20E5DCu;
    {
        const bool branch_taken_0x20e5dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e5dc) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E5E4u;
label_20e5e4:
    // 0x20e5e4: 0x24060070
    ctx->pc = 0x20e5e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 112));
label_20e5e8:
    // 0x20e5e8: 0x3c020032
    ctx->pc = 0x20e5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e5ec:
    // 0x20e5ec: 0x8c42effc
    ctx->pc = 0x20e5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963196)));
label_20e5f0:
    // 0x20e5f0: 0x18400033
label_20e5f4:
    if (ctx->pc == 0x20E5F4u) {
        ctx->pc = 0x20E5F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E5F8u;
        goto label_20e5f8;
    }
    ctx->pc = 0x20E5F0u;
    {
        const bool branch_taken_0x20e5f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E5F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e5f0) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E5F8u;
label_20e5f8:
    // 0x20e5f8: 0x3c160032
    ctx->pc = 0x20e5f8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
label_20e5fc:
    // 0x20e5fc: 0x3c150031
    ctx->pc = 0x20e5fcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
label_20e600:
    // 0x20e600: 0x3c120032
    ctx->pc = 0x20e600u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
label_20e604:
    // 0x20e604: 0xafb00000
    ctx->pc = 0x20e604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_20e608:
    // 0x20e608: 0x24040001
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e60c:
    // 0x20e60c: 0x2405ff00
    ctx->pc = 0x20e60cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
label_20e610:
    // 0x20e610: 0x382d
    ctx->pc = 0x20e610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e614:
    // 0x20e614: 0x24080006
    ctx->pc = 0x20e614u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 6));
label_20e618:
    // 0x20e618: 0x220482d
    ctx->pc = 0x20e618u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e61c:
    // 0x20e61c: 0x240a0002
    ctx->pc = 0x20e61cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2));
label_20e620:
    // 0x20e620: 0xc080832
label_20e624:
    if (ctx->pc == 0x20E624u) {
        ctx->pc = 0x20E624u;
        SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 22), 4294963192)));
        ctx->pc = 0x20E628u;
        goto label_20e628;
    }
    ctx->pc = 0x20E620u;
    SET_GPR_U32(ctx, 31, 0x20E628u);
    ctx->pc = 0x20E624u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 22), 4294963192)));
    ctx->pc = 0x2020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawScrollListText_0x2020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E628u; }
    }
    if (ctx->pc != 0x20E628u) { return; }
    ctx->pc = 0x20E628u;
label_20e628:
    // 0x20e628: 0x8ea2f284
    ctx->pc = 0x20e628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294963844)));
label_20e62c:
    // 0x20e62c: 0x24460010
    ctx->pc = 0x20e62cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 16));
label_20e630:
    // 0x20e630: 0x26100001
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20e634:
    // 0x20e634: 0x8e42effc
    ctx->pc = 0x20e634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294963196)));
label_20e638:
    // 0x20e638: 0x202102a
    ctx->pc = 0x20e638u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_20e63c:
    // 0x20e63c: 0x5440fff2
label_20e640:
    if (ctx->pc == 0x20E640u) {
        ctx->pc = 0x20E640u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x20E644u;
        goto label_20e644;
    }
    ctx->pc = 0x20E63Cu;
    {
        const bool branch_taken_0x20e63c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e63c) {
            ctx->pc = 0x20E640u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
            ctx->pc = 0x20E608u;
            goto label_20e608;
        }
    }
    ctx->pc = 0x20E644u;
label_20e644:
    // 0x20e644: 0x1000001e
label_20e648:
    if (ctx->pc == 0x20E648u) {
        ctx->pc = 0x20E64Cu;
        goto label_20e64c;
    }
    ctx->pc = 0x20E644u;
    {
        const bool branch_taken_0x20e644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e644) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E64Cu;
label_20e64c:
    // 0x20e64c: 0x3c030032
    ctx->pc = 0x20e64cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_20e650:
    // 0x20e650: 0x2463f2c0
    ctx->pc = 0x20e650u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963904));
label_20e654:
    // 0x20e654: 0x3c020032
    ctx->pc = 0x20e654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e658:
    // 0x20e658: 0x8c42f004
    ctx->pc = 0x20e658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963204)));
label_20e65c:
    // 0x20e65c: 0x21080
    ctx->pc = 0x20e65cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20e660:
    // 0x20e660: 0x431021
    ctx->pc = 0x20e660u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e664:
    // 0x20e664: 0x8c420000
    ctx->pc = 0x20e664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e668:
    // 0x20e668: 0x2452ffff
    ctx->pc = 0x20e668u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294967295));
label_20e66c:
    // 0x20e66c: 0x3c020032
    ctx->pc = 0x20e66cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e670:
    // 0x20e670: 0x8c42f008
    ctx->pc = 0x20e670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963208)));
label_20e674:
    // 0x20e674: 0x18400012
label_20e678:
    if (ctx->pc == 0x20E678u) {
        ctx->pc = 0x20E678u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E67Cu;
        goto label_20e67c;
    }
    ctx->pc = 0x20E674u;
    {
        const bool branch_taken_0x20e674 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E678u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e674) {
            ctx->pc = 0x20E6C0u;
            goto label_20e6c0;
        }
    }
    ctx->pc = 0x20E67Cu;
label_20e67c:
    // 0x20e67c: 0x3c160031
    ctx->pc = 0x20e67cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)49 << 16));
label_20e680:
    // 0x20e680: 0x3c150032
    ctx->pc = 0x20e680u;
    SET_GPR_U32(ctx, 21, ((uint32_t)50 << 16));
label_20e684:
    // 0x20e684: 0x0
    ctx->pc = 0x20e684u;
    // NOP
label_20e688:
    // 0x20e688: 0xafb00000
    ctx->pc = 0x20e688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_20e68c:
    // 0x20e68c: 0x24040001
    ctx->pc = 0x20e68cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20e690:
    // 0x20e690: 0x2405ff00
    ctx->pc = 0x20e690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
label_20e694:
    // 0x20e694: 0x382d
    ctx->pc = 0x20e694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e698:
    // 0x20e698: 0x24080006
    ctx->pc = 0x20e698u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 6));
label_20e69c:
    // 0x20e69c: 0x220482d
    ctx->pc = 0x20e69cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e6a0:
    // 0x20e6a0: 0x240a0001
    ctx->pc = 0x20e6a0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
label_20e6a4:
    // 0x20e6a4: 0xc080832
label_20e6a8:
    if (ctx->pc == 0x20E6A8u) {
        ctx->pc = 0x20E6A8u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E6ACu;
        goto label_20e6ac;
    }
    ctx->pc = 0x20E6A4u;
    SET_GPR_U32(ctx, 31, 0x20E6ACu);
    ctx->pc = 0x20E6A8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawScrollListText_0x2020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6ACu; }
    }
    if (ctx->pc != 0x20E6ACu) { return; }
    ctx->pc = 0x20E6ACu;
label_20e6ac:
    // 0x20e6ac: 0x26100001
    ctx->pc = 0x20e6acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20e6b0:
    // 0x20e6b0: 0x8ea2f008
    ctx->pc = 0x20e6b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294963208)));
label_20e6b4:
    // 0x20e6b4: 0x202102a
    ctx->pc = 0x20e6b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_20e6b8:
    // 0x20e6b8: 0x1440fff3
label_20e6bc:
    if (ctx->pc == 0x20E6BCu) {
        ctx->pc = 0x20E6BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 4294963844)));
        ctx->pc = 0x20E6C0u;
        goto label_20e6c0;
    }
    ctx->pc = 0x20E6B8u;
    {
        const bool branch_taken_0x20e6b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E6BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 4294963844)));
        if (branch_taken_0x20e6b8) {
            ctx->pc = 0x20E688u;
            goto label_20e688;
        }
    }
    ctx->pc = 0x20E6C0u;
label_20e6c0:
    // 0x20e6c0: 0xc080756
label_20e6c4:
    if (ctx->pc == 0x20E6C4u) {
        ctx->pc = 0x20E6C8u;
        goto label_20e6c8;
    }
    ctx->pc = 0x20E6C0u;
    SET_GPR_U32(ctx, 31, 0x20E6C8u);
    ctx->pc = 0x201D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RestoreDrawStringScale_0x201d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6C8u; }
    }
    if (ctx->pc != 0x20E6C8u) { return; }
    ctx->pc = 0x20E6C8u;
label_20e6c8:
    // 0x20e6c8: 0x26820002
    ctx->pc = 0x20e6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 2));
label_20e6cc:
    // 0x20e6cc: 0x2c420002
    ctx->pc = 0x20e6ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_20e6d0:
    // 0x20e6d0: 0x10400008
label_20e6d4:
    if (ctx->pc == 0x20E6D4u) {
        ctx->pc = 0x20E6D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E6D8u;
        goto label_20e6d8;
    }
    ctx->pc = 0x20E6D0u;
    {
        const bool branch_taken_0x20e6d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E6D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e6d0) {
            ctx->pc = 0x20E6F4u;
            goto label_20e6f4;
        }
    }
    ctx->pc = 0x20E6D8u;
label_20e6d8:
    // 0x20e6d8: 0xc082c3a
label_20e6dc:
    if (ctx->pc == 0x20E6DCu) {
        ctx->pc = 0x20E6DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E6E0u;
        goto label_20e6e0;
    }
    ctx->pc = 0x20E6D8u;
    SET_GPR_U32(ctx, 31, 0x20E6E0u);
    ctx->pc = 0x20E6DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6E0u; }
    }
    if (ctx->pc != 0x20E6E0u) { return; }
    ctx->pc = 0x20E6E0u;
label_20e6e0:
    // 0x20e6e0: 0x8fa30010
    ctx->pc = 0x20e6e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20e6e4:
    // 0x20e6e4: 0x14600004
label_20e6e8:
    if (ctx->pc == 0x20E6E8u) {
        ctx->pc = 0x20E6E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20E6ECu;
        goto label_20e6ec;
    }
    ctx->pc = 0x20E6E4u;
    {
        const bool branch_taken_0x20e6e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E6E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20e6e4) {
            ctx->pc = 0x20E6F8u;
            goto label_20e6f8;
        }
    }
    ctx->pc = 0x20E6ECu;
label_20e6ec:
    // 0x20e6ec: 0xc0981aa
label_20e6f0:
    if (ctx->pc == 0x20E6F0u) {
        ctx->pc = 0x20E6F4u;
        goto label_20e6f4;
    }
    ctx->pc = 0x20E6ECu;
    SET_GPR_U32(ctx, 31, 0x20E6F4u);
    ctx->pc = 0x2606A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioMenuExit_0x2606a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6F4u; }
    }
    if (ctx->pc != 0x20E6F4u) { return; }
    ctx->pc = 0x20E6F4u;
label_20e6f4:
    // 0x20e6f4: 0x24020001
    ctx->pc = 0x20e6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20e6f8:
    // 0x20e6f8: 0xdfbf00b0
    ctx->pc = 0x20e6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_20e6fc:
    // 0x20e6fc: 0xdfbe00a0
    ctx->pc = 0x20e6fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20e700:
    // 0x20e700: 0xdfb70090
    ctx->pc = 0x20e700u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20e704:
    // 0x20e704: 0xdfb60080
    ctx->pc = 0x20e704u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20e708:
    // 0x20e708: 0xdfb50070
    ctx->pc = 0x20e708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_20e70c:
    // 0x20e70c: 0xdfb40060
    ctx->pc = 0x20e70cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20e710:
    // 0x20e710: 0xdfb30050
    ctx->pc = 0x20e710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20e714:
    // 0x20e714: 0xdfb20040
    ctx->pc = 0x20e714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20e718:
    // 0x20e718: 0xdfb10030
    ctx->pc = 0x20e718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20e71c:
    // 0x20e71c: 0xdfb00020
    ctx->pc = 0x20e71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20e720:
    // 0x20e720: 0x3e00008
label_20e724:
    if (ctx->pc == 0x20E724u) {
        ctx->pc = 0x20E724u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x20E728u;
        goto label_fallthrough_0x20e720;
    }
    ctx->pc = 0x20E720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E724u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D500u: goto label_20d500;
            case 0x20D504u: goto label_20d504;
            case 0x20D508u: goto label_20d508;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D510u: goto label_20d510;
            case 0x20D514u: goto label_20d514;
            case 0x20D518u: goto label_20d518;
            case 0x20D51Cu: goto label_20d51c;
            case 0x20D520u: goto label_20d520;
            case 0x20D524u: goto label_20d524;
            case 0x20D528u: goto label_20d528;
            case 0x20D52Cu: goto label_20d52c;
            case 0x20D530u: goto label_20d530;
            case 0x20D534u: goto label_20d534;
            case 0x20D538u: goto label_20d538;
            case 0x20D53Cu: goto label_20d53c;
            case 0x20D540u: goto label_20d540;
            case 0x20D544u: goto label_20d544;
            case 0x20D548u: goto label_20d548;
            case 0x20D54Cu: goto label_20d54c;
            case 0x20D550u: goto label_20d550;
            case 0x20D554u: goto label_20d554;
            case 0x20D558u: goto label_20d558;
            case 0x20D55Cu: goto label_20d55c;
            case 0x20D560u: goto label_20d560;
            case 0x20D564u: goto label_20d564;
            case 0x20D568u: goto label_20d568;
            case 0x20D56Cu: goto label_20d56c;
            case 0x20D570u: goto label_20d570;
            case 0x20D574u: goto label_20d574;
            case 0x20D578u: goto label_20d578;
            case 0x20D57Cu: goto label_20d57c;
            case 0x20D580u: goto label_20d580;
            case 0x20D584u: goto label_20d584;
            case 0x20D588u: goto label_20d588;
            case 0x20D58Cu: goto label_20d58c;
            case 0x20D590u: goto label_20d590;
            case 0x20D594u: goto label_20d594;
            case 0x20D598u: goto label_20d598;
            case 0x20D59Cu: goto label_20d59c;
            case 0x20D5A0u: goto label_20d5a0;
            case 0x20D5A4u: goto label_20d5a4;
            case 0x20D5A8u: goto label_20d5a8;
            case 0x20D5ACu: goto label_20d5ac;
            case 0x20D5B0u: goto label_20d5b0;
            case 0x20D5B4u: goto label_20d5b4;
            case 0x20D5B8u: goto label_20d5b8;
            case 0x20D5BCu: goto label_20d5bc;
            case 0x20D5C0u: goto label_20d5c0;
            case 0x20D5C4u: goto label_20d5c4;
            case 0x20D5C8u: goto label_20d5c8;
            case 0x20D5CCu: goto label_20d5cc;
            case 0x20D5D0u: goto label_20d5d0;
            case 0x20D5D4u: goto label_20d5d4;
            case 0x20D5D8u: goto label_20d5d8;
            case 0x20D5DCu: goto label_20d5dc;
            case 0x20D5E0u: goto label_20d5e0;
            case 0x20D5E4u: goto label_20d5e4;
            case 0x20D5E8u: goto label_20d5e8;
            case 0x20D5ECu: goto label_20d5ec;
            case 0x20D5F0u: goto label_20d5f0;
            case 0x20D5F4u: goto label_20d5f4;
            case 0x20D5F8u: goto label_20d5f8;
            case 0x20D5FCu: goto label_20d5fc;
            case 0x20D600u: goto label_20d600;
            case 0x20D604u: goto label_20d604;
            case 0x20D608u: goto label_20d608;
            case 0x20D60Cu: goto label_20d60c;
            case 0x20D610u: goto label_20d610;
            case 0x20D614u: goto label_20d614;
            case 0x20D618u: goto label_20d618;
            case 0x20D61Cu: goto label_20d61c;
            case 0x20D620u: goto label_20d620;
            case 0x20D624u: goto label_20d624;
            case 0x20D628u: goto label_20d628;
            case 0x20D62Cu: goto label_20d62c;
            case 0x20D630u: goto label_20d630;
            case 0x20D634u: goto label_20d634;
            case 0x20D638u: goto label_20d638;
            case 0x20D63Cu: goto label_20d63c;
            case 0x20D640u: goto label_20d640;
            case 0x20D644u: goto label_20d644;
            case 0x20D648u: goto label_20d648;
            case 0x20D64Cu: goto label_20d64c;
            case 0x20D650u: goto label_20d650;
            case 0x20D654u: goto label_20d654;
            case 0x20D658u: goto label_20d658;
            case 0x20D65Cu: goto label_20d65c;
            case 0x20D660u: goto label_20d660;
            case 0x20D664u: goto label_20d664;
            case 0x20D668u: goto label_20d668;
            case 0x20D66Cu: goto label_20d66c;
            case 0x20D670u: goto label_20d670;
            case 0x20D674u: goto label_20d674;
            case 0x20D678u: goto label_20d678;
            case 0x20D67Cu: goto label_20d67c;
            case 0x20D680u: goto label_20d680;
            case 0x20D684u: goto label_20d684;
            case 0x20D688u: goto label_20d688;
            case 0x20D68Cu: goto label_20d68c;
            case 0x20D690u: goto label_20d690;
            case 0x20D694u: goto label_20d694;
            case 0x20D698u: goto label_20d698;
            case 0x20D69Cu: goto label_20d69c;
            case 0x20D6A0u: goto label_20d6a0;
            case 0x20D6A4u: goto label_20d6a4;
            case 0x20D6A8u: goto label_20d6a8;
            case 0x20D6ACu: goto label_20d6ac;
            case 0x20D6B0u: goto label_20d6b0;
            case 0x20D6B4u: goto label_20d6b4;
            case 0x20D6B8u: goto label_20d6b8;
            case 0x20D6BCu: goto label_20d6bc;
            case 0x20D6C0u: goto label_20d6c0;
            case 0x20D6C4u: goto label_20d6c4;
            case 0x20D6C8u: goto label_20d6c8;
            case 0x20D6CCu: goto label_20d6cc;
            case 0x20D6D0u: goto label_20d6d0;
            case 0x20D6D4u: goto label_20d6d4;
            case 0x20D6D8u: goto label_20d6d8;
            case 0x20D6DCu: goto label_20d6dc;
            case 0x20D6E0u: goto label_20d6e0;
            case 0x20D6E4u: goto label_20d6e4;
            case 0x20D6E8u: goto label_20d6e8;
            case 0x20D6ECu: goto label_20d6ec;
            case 0x20D6F0u: goto label_20d6f0;
            case 0x20D6F4u: goto label_20d6f4;
            case 0x20D6F8u: goto label_20d6f8;
            case 0x20D6FCu: goto label_20d6fc;
            case 0x20D700u: goto label_20d700;
            case 0x20D704u: goto label_20d704;
            case 0x20D708u: goto label_20d708;
            case 0x20D70Cu: goto label_20d70c;
            case 0x20D710u: goto label_20d710;
            case 0x20D714u: goto label_20d714;
            case 0x20D718u: goto label_20d718;
            case 0x20D71Cu: goto label_20d71c;
            case 0x20D720u: goto label_20d720;
            case 0x20D724u: goto label_20d724;
            case 0x20D728u: goto label_20d728;
            case 0x20D72Cu: goto label_20d72c;
            case 0x20D730u: goto label_20d730;
            case 0x20D734u: goto label_20d734;
            case 0x20D738u: goto label_20d738;
            case 0x20D73Cu: goto label_20d73c;
            case 0x20D740u: goto label_20d740;
            case 0x20D744u: goto label_20d744;
            case 0x20D748u: goto label_20d748;
            case 0x20D74Cu: goto label_20d74c;
            case 0x20D750u: goto label_20d750;
            case 0x20D754u: goto label_20d754;
            case 0x20D758u: goto label_20d758;
            case 0x20D75Cu: goto label_20d75c;
            case 0x20D760u: goto label_20d760;
            case 0x20D764u: goto label_20d764;
            case 0x20D768u: goto label_20d768;
            case 0x20D76Cu: goto label_20d76c;
            case 0x20D770u: goto label_20d770;
            case 0x20D774u: goto label_20d774;
            case 0x20D778u: goto label_20d778;
            case 0x20D77Cu: goto label_20d77c;
            case 0x20D780u: goto label_20d780;
            case 0x20D784u: goto label_20d784;
            case 0x20D788u: goto label_20d788;
            case 0x20D78Cu: goto label_20d78c;
            case 0x20D790u: goto label_20d790;
            case 0x20D794u: goto label_20d794;
            case 0x20D798u: goto label_20d798;
            case 0x20D79Cu: goto label_20d79c;
            case 0x20D7A0u: goto label_20d7a0;
            case 0x20D7A4u: goto label_20d7a4;
            case 0x20D7A8u: goto label_20d7a8;
            case 0x20D7ACu: goto label_20d7ac;
            case 0x20D7B0u: goto label_20d7b0;
            case 0x20D7B4u: goto label_20d7b4;
            case 0x20D7B8u: goto label_20d7b8;
            case 0x20D7BCu: goto label_20d7bc;
            case 0x20D7C0u: goto label_20d7c0;
            case 0x20D7C4u: goto label_20d7c4;
            case 0x20D7C8u: goto label_20d7c8;
            case 0x20D7CCu: goto label_20d7cc;
            case 0x20D7D0u: goto label_20d7d0;
            case 0x20D7D4u: goto label_20d7d4;
            case 0x20D7D8u: goto label_20d7d8;
            case 0x20D7DCu: goto label_20d7dc;
            case 0x20D7E0u: goto label_20d7e0;
            case 0x20D7E4u: goto label_20d7e4;
            case 0x20D7E8u: goto label_20d7e8;
            case 0x20D7ECu: goto label_20d7ec;
            case 0x20D7F0u: goto label_20d7f0;
            case 0x20D7F4u: goto label_20d7f4;
            case 0x20D7F8u: goto label_20d7f8;
            case 0x20D7FCu: goto label_20d7fc;
            case 0x20D800u: goto label_20d800;
            case 0x20D804u: goto label_20d804;
            case 0x20D808u: goto label_20d808;
            case 0x20D80Cu: goto label_20d80c;
            case 0x20D810u: goto label_20d810;
            case 0x20D814u: goto label_20d814;
            case 0x20D818u: goto label_20d818;
            case 0x20D81Cu: goto label_20d81c;
            case 0x20D820u: goto label_20d820;
            case 0x20D824u: goto label_20d824;
            case 0x20D828u: goto label_20d828;
            case 0x20D82Cu: goto label_20d82c;
            case 0x20D830u: goto label_20d830;
            case 0x20D834u: goto label_20d834;
            case 0x20D838u: goto label_20d838;
            case 0x20D83Cu: goto label_20d83c;
            case 0x20D840u: goto label_20d840;
            case 0x20D844u: goto label_20d844;
            case 0x20D848u: goto label_20d848;
            case 0x20D84Cu: goto label_20d84c;
            case 0x20D850u: goto label_20d850;
            case 0x20D854u: goto label_20d854;
            case 0x20D858u: goto label_20d858;
            case 0x20D85Cu: goto label_20d85c;
            case 0x20D860u: goto label_20d860;
            case 0x20D864u: goto label_20d864;
            case 0x20D868u: goto label_20d868;
            case 0x20D86Cu: goto label_20d86c;
            case 0x20D870u: goto label_20d870;
            case 0x20D874u: goto label_20d874;
            case 0x20D878u: goto label_20d878;
            case 0x20D87Cu: goto label_20d87c;
            case 0x20D880u: goto label_20d880;
            case 0x20D884u: goto label_20d884;
            case 0x20D888u: goto label_20d888;
            case 0x20D88Cu: goto label_20d88c;
            case 0x20D890u: goto label_20d890;
            case 0x20D894u: goto label_20d894;
            case 0x20D898u: goto label_20d898;
            case 0x20D89Cu: goto label_20d89c;
            case 0x20D8A0u: goto label_20d8a0;
            case 0x20D8A4u: goto label_20d8a4;
            case 0x20D8A8u: goto label_20d8a8;
            case 0x20D8ACu: goto label_20d8ac;
            case 0x20D8B0u: goto label_20d8b0;
            case 0x20D8B4u: goto label_20d8b4;
            case 0x20D8B8u: goto label_20d8b8;
            case 0x20D8BCu: goto label_20d8bc;
            case 0x20D8C0u: goto label_20d8c0;
            case 0x20D8C4u: goto label_20d8c4;
            case 0x20D8C8u: goto label_20d8c8;
            case 0x20D8CCu: goto label_20d8cc;
            case 0x20D8D0u: goto label_20d8d0;
            case 0x20D8D4u: goto label_20d8d4;
            case 0x20D8D8u: goto label_20d8d8;
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D8E0u: goto label_20d8e0;
            case 0x20D8E4u: goto label_20d8e4;
            case 0x20D8E8u: goto label_20d8e8;
            case 0x20D8ECu: goto label_20d8ec;
            case 0x20D8F0u: goto label_20d8f0;
            case 0x20D8F4u: goto label_20d8f4;
            case 0x20D8F8u: goto label_20d8f8;
            case 0x20D8FCu: goto label_20d8fc;
            case 0x20D900u: goto label_20d900;
            case 0x20D904u: goto label_20d904;
            case 0x20D908u: goto label_20d908;
            case 0x20D90Cu: goto label_20d90c;
            case 0x20D910u: goto label_20d910;
            case 0x20D914u: goto label_20d914;
            case 0x20D918u: goto label_20d918;
            case 0x20D91Cu: goto label_20d91c;
            case 0x20D920u: goto label_20d920;
            case 0x20D924u: goto label_20d924;
            case 0x20D928u: goto label_20d928;
            case 0x20D92Cu: goto label_20d92c;
            case 0x20D930u: goto label_20d930;
            case 0x20D934u: goto label_20d934;
            case 0x20D938u: goto label_20d938;
            case 0x20D93Cu: goto label_20d93c;
            case 0x20D940u: goto label_20d940;
            case 0x20D944u: goto label_20d944;
            case 0x20D948u: goto label_20d948;
            case 0x20D94Cu: goto label_20d94c;
            case 0x20D950u: goto label_20d950;
            case 0x20D954u: goto label_20d954;
            case 0x20D958u: goto label_20d958;
            case 0x20D95Cu: goto label_20d95c;
            case 0x20D960u: goto label_20d960;
            case 0x20D964u: goto label_20d964;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            case 0x20D970u: goto label_20d970;
            case 0x20D974u: goto label_20d974;
            case 0x20D978u: goto label_20d978;
            case 0x20D97Cu: goto label_20d97c;
            case 0x20D980u: goto label_20d980;
            case 0x20D984u: goto label_20d984;
            case 0x20D988u: goto label_20d988;
            case 0x20D98Cu: goto label_20d98c;
            case 0x20D990u: goto label_20d990;
            case 0x20D994u: goto label_20d994;
            case 0x20D998u: goto label_20d998;
            case 0x20D99Cu: goto label_20d99c;
            case 0x20D9A0u: goto label_20d9a0;
            case 0x20D9A4u: goto label_20d9a4;
            case 0x20D9A8u: goto label_20d9a8;
            case 0x20D9ACu: goto label_20d9ac;
            case 0x20D9B0u: goto label_20d9b0;
            case 0x20D9B4u: goto label_20d9b4;
            case 0x20D9B8u: goto label_20d9b8;
            case 0x20D9BCu: goto label_20d9bc;
            case 0x20D9C0u: goto label_20d9c0;
            case 0x20D9C4u: goto label_20d9c4;
            case 0x20D9C8u: goto label_20d9c8;
            case 0x20D9CCu: goto label_20d9cc;
            case 0x20D9D0u: goto label_20d9d0;
            case 0x20D9D4u: goto label_20d9d4;
            case 0x20D9D8u: goto label_20d9d8;
            case 0x20D9DCu: goto label_20d9dc;
            case 0x20D9E0u: goto label_20d9e0;
            case 0x20D9E4u: goto label_20d9e4;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20D9ECu: goto label_20d9ec;
            case 0x20D9F0u: goto label_20d9f0;
            case 0x20D9F4u: goto label_20d9f4;
            case 0x20D9F8u: goto label_20d9f8;
            case 0x20D9FCu: goto label_20d9fc;
            case 0x20DA00u: goto label_20da00;
            case 0x20DA04u: goto label_20da04;
            case 0x20DA08u: goto label_20da08;
            case 0x20DA0Cu: goto label_20da0c;
            case 0x20DA10u: goto label_20da10;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA18u: goto label_20da18;
            case 0x20DA1Cu: goto label_20da1c;
            case 0x20DA20u: goto label_20da20;
            case 0x20DA24u: goto label_20da24;
            case 0x20DA28u: goto label_20da28;
            case 0x20DA2Cu: goto label_20da2c;
            case 0x20DA30u: goto label_20da30;
            case 0x20DA34u: goto label_20da34;
            case 0x20DA38u: goto label_20da38;
            case 0x20DA3Cu: goto label_20da3c;
            case 0x20DA40u: goto label_20da40;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA48u: goto label_20da48;
            case 0x20DA4Cu: goto label_20da4c;
            case 0x20DA50u: goto label_20da50;
            case 0x20DA54u: goto label_20da54;
            case 0x20DA58u: goto label_20da58;
            case 0x20DA5Cu: goto label_20da5c;
            case 0x20DA60u: goto label_20da60;
            case 0x20DA64u: goto label_20da64;
            case 0x20DA68u: goto label_20da68;
            case 0x20DA6Cu: goto label_20da6c;
            case 0x20DA70u: goto label_20da70;
            case 0x20DA74u: goto label_20da74;
            case 0x20DA78u: goto label_20da78;
            case 0x20DA7Cu: goto label_20da7c;
            case 0x20DA80u: goto label_20da80;
            case 0x20DA84u: goto label_20da84;
            case 0x20DA88u: goto label_20da88;
            case 0x20DA8Cu: goto label_20da8c;
            case 0x20DA90u: goto label_20da90;
            case 0x20DA94u: goto label_20da94;
            case 0x20DA98u: goto label_20da98;
            case 0x20DA9Cu: goto label_20da9c;
            case 0x20DAA0u: goto label_20daa0;
            case 0x20DAA4u: goto label_20daa4;
            case 0x20DAA8u: goto label_20daa8;
            case 0x20DAACu: goto label_20daac;
            case 0x20DAB0u: goto label_20dab0;
            case 0x20DAB4u: goto label_20dab4;
            case 0x20DAB8u: goto label_20dab8;
            case 0x20DABCu: goto label_20dabc;
            case 0x20DAC0u: goto label_20dac0;
            case 0x20DAC4u: goto label_20dac4;
            case 0x20DAC8u: goto label_20dac8;
            case 0x20DACCu: goto label_20dacc;
            case 0x20DAD0u: goto label_20dad0;
            case 0x20DAD4u: goto label_20dad4;
            case 0x20DAD8u: goto label_20dad8;
            case 0x20DADCu: goto label_20dadc;
            case 0x20DAE0u: goto label_20dae0;
            case 0x20DAE4u: goto label_20dae4;
            case 0x20DAE8u: goto label_20dae8;
            case 0x20DAECu: goto label_20daec;
            case 0x20DAF0u: goto label_20daf0;
            case 0x20DAF4u: goto label_20daf4;
            case 0x20DAF8u: goto label_20daf8;
            case 0x20DAFCu: goto label_20dafc;
            case 0x20DB00u: goto label_20db00;
            case 0x20DB04u: goto label_20db04;
            case 0x20DB08u: goto label_20db08;
            case 0x20DB0Cu: goto label_20db0c;
            case 0x20DB10u: goto label_20db10;
            case 0x20DB14u: goto label_20db14;
            case 0x20DB18u: goto label_20db18;
            case 0x20DB1Cu: goto label_20db1c;
            case 0x20DB20u: goto label_20db20;
            case 0x20DB24u: goto label_20db24;
            case 0x20DB28u: goto label_20db28;
            case 0x20DB2Cu: goto label_20db2c;
            case 0x20DB30u: goto label_20db30;
            case 0x20DB34u: goto label_20db34;
            case 0x20DB38u: goto label_20db38;
            case 0x20DB3Cu: goto label_20db3c;
            case 0x20DB40u: goto label_20db40;
            case 0x20DB44u: goto label_20db44;
            case 0x20DB48u: goto label_20db48;
            case 0x20DB4Cu: goto label_20db4c;
            case 0x20DB50u: goto label_20db50;
            case 0x20DB54u: goto label_20db54;
            case 0x20DB58u: goto label_20db58;
            case 0x20DB5Cu: goto label_20db5c;
            case 0x20DB60u: goto label_20db60;
            case 0x20DB64u: goto label_20db64;
            case 0x20DB68u: goto label_20db68;
            case 0x20DB6Cu: goto label_20db6c;
            case 0x20DB70u: goto label_20db70;
            case 0x20DB74u: goto label_20db74;
            case 0x20DB78u: goto label_20db78;
            case 0x20DB7Cu: goto label_20db7c;
            case 0x20DB80u: goto label_20db80;
            case 0x20DB84u: goto label_20db84;
            case 0x20DB88u: goto label_20db88;
            case 0x20DB8Cu: goto label_20db8c;
            case 0x20DB90u: goto label_20db90;
            case 0x20DB94u: goto label_20db94;
            case 0x20DB98u: goto label_20db98;
            case 0x20DB9Cu: goto label_20db9c;
            case 0x20DBA0u: goto label_20dba0;
            case 0x20DBA4u: goto label_20dba4;
            case 0x20DBA8u: goto label_20dba8;
            case 0x20DBACu: goto label_20dbac;
            case 0x20DBB0u: goto label_20dbb0;
            case 0x20DBB4u: goto label_20dbb4;
            case 0x20DBB8u: goto label_20dbb8;
            case 0x20DBBCu: goto label_20dbbc;
            case 0x20DBC0u: goto label_20dbc0;
            case 0x20DBC4u: goto label_20dbc4;
            case 0x20DBC8u: goto label_20dbc8;
            case 0x20DBCCu: goto label_20dbcc;
            case 0x20DBD0u: goto label_20dbd0;
            case 0x20DBD4u: goto label_20dbd4;
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBDCu: goto label_20dbdc;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE4u: goto label_20dbe4;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DBECu: goto label_20dbec;
            case 0x20DBF0u: goto label_20dbf0;
            case 0x20DBF4u: goto label_20dbf4;
            case 0x20DBF8u: goto label_20dbf8;
            case 0x20DBFCu: goto label_20dbfc;
            case 0x20DC00u: goto label_20dc00;
            case 0x20DC04u: goto label_20dc04;
            case 0x20DC08u: goto label_20dc08;
            case 0x20DC0Cu: goto label_20dc0c;
            case 0x20DC10u: goto label_20dc10;
            case 0x20DC14u: goto label_20dc14;
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC1Cu: goto label_20dc1c;
            case 0x20DC20u: goto label_20dc20;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC28u: goto label_20dc28;
            case 0x20DC2Cu: goto label_20dc2c;
            case 0x20DC30u: goto label_20dc30;
            case 0x20DC34u: goto label_20dc34;
            case 0x20DC38u: goto label_20dc38;
            case 0x20DC3Cu: goto label_20dc3c;
            case 0x20DC40u: goto label_20dc40;
            case 0x20DC44u: goto label_20dc44;
            case 0x20DC48u: goto label_20dc48;
            case 0x20DC4Cu: goto label_20dc4c;
            case 0x20DC50u: goto label_20dc50;
            case 0x20DC54u: goto label_20dc54;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DC68u: goto label_20dc68;
            case 0x20DC6Cu: goto label_20dc6c;
            case 0x20DC70u: goto label_20dc70;
            case 0x20DC74u: goto label_20dc74;
            case 0x20DC78u: goto label_20dc78;
            case 0x20DC7Cu: goto label_20dc7c;
            case 0x20DC80u: goto label_20dc80;
            case 0x20DC84u: goto label_20dc84;
            case 0x20DC88u: goto label_20dc88;
            case 0x20DC8Cu: goto label_20dc8c;
            case 0x20DC90u: goto label_20dc90;
            case 0x20DC94u: goto label_20dc94;
            case 0x20DC98u: goto label_20dc98;
            case 0x20DC9Cu: goto label_20dc9c;
            case 0x20DCA0u: goto label_20dca0;
            case 0x20DCA4u: goto label_20dca4;
            case 0x20DCA8u: goto label_20dca8;
            case 0x20DCACu: goto label_20dcac;
            case 0x20DCB0u: goto label_20dcb0;
            case 0x20DCB4u: goto label_20dcb4;
            case 0x20DCB8u: goto label_20dcb8;
            case 0x20DCBCu: goto label_20dcbc;
            case 0x20DCC0u: goto label_20dcc0;
            case 0x20DCC4u: goto label_20dcc4;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCCCu: goto label_20dccc;
            case 0x20DCD0u: goto label_20dcd0;
            case 0x20DCD4u: goto label_20dcd4;
            case 0x20DCD8u: goto label_20dcd8;
            case 0x20DCDCu: goto label_20dcdc;
            case 0x20DCE0u: goto label_20dce0;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DCE8u: goto label_20dce8;
            case 0x20DCECu: goto label_20dcec;
            case 0x20DCF0u: goto label_20dcf0;
            case 0x20DCF4u: goto label_20dcf4;
            case 0x20DCF8u: goto label_20dcf8;
            case 0x20DCFCu: goto label_20dcfc;
            case 0x20DD00u: goto label_20dd00;
            case 0x20DD04u: goto label_20dd04;
            case 0x20DD08u: goto label_20dd08;
            case 0x20DD0Cu: goto label_20dd0c;
            case 0x20DD10u: goto label_20dd10;
            case 0x20DD14u: goto label_20dd14;
            case 0x20DD18u: goto label_20dd18;
            case 0x20DD1Cu: goto label_20dd1c;
            case 0x20DD20u: goto label_20dd20;
            case 0x20DD24u: goto label_20dd24;
            case 0x20DD28u: goto label_20dd28;
            case 0x20DD2Cu: goto label_20dd2c;
            case 0x20DD30u: goto label_20dd30;
            case 0x20DD34u: goto label_20dd34;
            case 0x20DD38u: goto label_20dd38;
            case 0x20DD3Cu: goto label_20dd3c;
            case 0x20DD40u: goto label_20dd40;
            case 0x20DD44u: goto label_20dd44;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD4Cu: goto label_20dd4c;
            case 0x20DD50u: goto label_20dd50;
            case 0x20DD54u: goto label_20dd54;
            case 0x20DD58u: goto label_20dd58;
            case 0x20DD5Cu: goto label_20dd5c;
            case 0x20DD60u: goto label_20dd60;
            case 0x20DD64u: goto label_20dd64;
            case 0x20DD68u: goto label_20dd68;
            case 0x20DD6Cu: goto label_20dd6c;
            case 0x20DD70u: goto label_20dd70;
            case 0x20DD74u: goto label_20dd74;
            case 0x20DD78u: goto label_20dd78;
            case 0x20DD7Cu: goto label_20dd7c;
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD84u: goto label_20dd84;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD8Cu: goto label_20dd8c;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD94u: goto label_20dd94;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA4u: goto label_20dda4;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDACu: goto label_20ddac;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB4u: goto label_20ddb4;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDBCu: goto label_20ddbc;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC4u: goto label_20ddc4;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD0u: goto label_20ddd0;
            case 0x20DDD4u: goto label_20ddd4;
            case 0x20DDD8u: goto label_20ddd8;
            case 0x20DDDCu: goto label_20dddc;
            case 0x20DDE0u: goto label_20dde0;
            case 0x20DDE4u: goto label_20dde4;
            case 0x20DDE8u: goto label_20dde8;
            case 0x20DDECu: goto label_20ddec;
            case 0x20DDF0u: goto label_20ddf0;
            case 0x20DDF4u: goto label_20ddf4;
            case 0x20DDF8u: goto label_20ddf8;
            case 0x20DDFCu: goto label_20ddfc;
            case 0x20DE00u: goto label_20de00;
            case 0x20DE04u: goto label_20de04;
            case 0x20DE08u: goto label_20de08;
            case 0x20DE0Cu: goto label_20de0c;
            case 0x20DE10u: goto label_20de10;
            case 0x20DE14u: goto label_20de14;
            case 0x20DE18u: goto label_20de18;
            case 0x20DE1Cu: goto label_20de1c;
            case 0x20DE20u: goto label_20de20;
            case 0x20DE24u: goto label_20de24;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE2Cu: goto label_20de2c;
            case 0x20DE30u: goto label_20de30;
            case 0x20DE34u: goto label_20de34;
            case 0x20DE38u: goto label_20de38;
            case 0x20DE3Cu: goto label_20de3c;
            case 0x20DE40u: goto label_20de40;
            case 0x20DE44u: goto label_20de44;
            case 0x20DE48u: goto label_20de48;
            case 0x20DE4Cu: goto label_20de4c;
            case 0x20DE50u: goto label_20de50;
            case 0x20DE54u: goto label_20de54;
            case 0x20DE58u: goto label_20de58;
            case 0x20DE5Cu: goto label_20de5c;
            case 0x20DE60u: goto label_20de60;
            case 0x20DE64u: goto label_20de64;
            case 0x20DE68u: goto label_20de68;
            case 0x20DE6Cu: goto label_20de6c;
            case 0x20DE70u: goto label_20de70;
            case 0x20DE74u: goto label_20de74;
            case 0x20DE78u: goto label_20de78;
            case 0x20DE7Cu: goto label_20de7c;
            case 0x20DE80u: goto label_20de80;
            case 0x20DE84u: goto label_20de84;
            case 0x20DE88u: goto label_20de88;
            case 0x20DE8Cu: goto label_20de8c;
            case 0x20DE90u: goto label_20de90;
            case 0x20DE94u: goto label_20de94;
            case 0x20DE98u: goto label_20de98;
            case 0x20DE9Cu: goto label_20de9c;
            case 0x20DEA0u: goto label_20dea0;
            case 0x20DEA4u: goto label_20dea4;
            case 0x20DEA8u: goto label_20dea8;
            case 0x20DEACu: goto label_20deac;
            case 0x20DEB0u: goto label_20deb0;
            case 0x20DEB4u: goto label_20deb4;
            case 0x20DEB8u: goto label_20deb8;
            case 0x20DEBCu: goto label_20debc;
            case 0x20DEC0u: goto label_20dec0;
            case 0x20DEC4u: goto label_20dec4;
            case 0x20DEC8u: goto label_20dec8;
            case 0x20DECCu: goto label_20decc;
            case 0x20DED0u: goto label_20ded0;
            case 0x20DED4u: goto label_20ded4;
            case 0x20DED8u: goto label_20ded8;
            case 0x20DEDCu: goto label_20dedc;
            case 0x20DEE0u: goto label_20dee0;
            case 0x20DEE4u: goto label_20dee4;
            case 0x20DEE8u: goto label_20dee8;
            case 0x20DEECu: goto label_20deec;
            case 0x20DEF0u: goto label_20def0;
            case 0x20DEF4u: goto label_20def4;
            case 0x20DEF8u: goto label_20def8;
            case 0x20DEFCu: goto label_20defc;
            case 0x20DF00u: goto label_20df00;
            case 0x20DF04u: goto label_20df04;
            case 0x20DF08u: goto label_20df08;
            case 0x20DF0Cu: goto label_20df0c;
            case 0x20DF10u: goto label_20df10;
            case 0x20DF14u: goto label_20df14;
            case 0x20DF18u: goto label_20df18;
            case 0x20DF1Cu: goto label_20df1c;
            case 0x20DF20u: goto label_20df20;
            case 0x20DF24u: goto label_20df24;
            case 0x20DF28u: goto label_20df28;
            case 0x20DF2Cu: goto label_20df2c;
            case 0x20DF30u: goto label_20df30;
            case 0x20DF34u: goto label_20df34;
            case 0x20DF38u: goto label_20df38;
            case 0x20DF3Cu: goto label_20df3c;
            case 0x20DF40u: goto label_20df40;
            case 0x20DF44u: goto label_20df44;
            case 0x20DF48u: goto label_20df48;
            case 0x20DF4Cu: goto label_20df4c;
            case 0x20DF50u: goto label_20df50;
            case 0x20DF54u: goto label_20df54;
            case 0x20DF58u: goto label_20df58;
            case 0x20DF5Cu: goto label_20df5c;
            case 0x20DF60u: goto label_20df60;
            case 0x20DF64u: goto label_20df64;
            case 0x20DF68u: goto label_20df68;
            case 0x20DF6Cu: goto label_20df6c;
            case 0x20DF70u: goto label_20df70;
            case 0x20DF74u: goto label_20df74;
            case 0x20DF78u: goto label_20df78;
            case 0x20DF7Cu: goto label_20df7c;
            case 0x20DF80u: goto label_20df80;
            case 0x20DF84u: goto label_20df84;
            case 0x20DF88u: goto label_20df88;
            case 0x20DF8Cu: goto label_20df8c;
            case 0x20DF90u: goto label_20df90;
            case 0x20DF94u: goto label_20df94;
            case 0x20DF98u: goto label_20df98;
            case 0x20DF9Cu: goto label_20df9c;
            case 0x20DFA0u: goto label_20dfa0;
            case 0x20DFA4u: goto label_20dfa4;
            case 0x20DFA8u: goto label_20dfa8;
            case 0x20DFACu: goto label_20dfac;
            case 0x20DFB0u: goto label_20dfb0;
            case 0x20DFB4u: goto label_20dfb4;
            case 0x20DFB8u: goto label_20dfb8;
            case 0x20DFBCu: goto label_20dfbc;
            case 0x20DFC0u: goto label_20dfc0;
            case 0x20DFC4u: goto label_20dfc4;
            case 0x20DFC8u: goto label_20dfc8;
            case 0x20DFCCu: goto label_20dfcc;
            case 0x20DFD0u: goto label_20dfd0;
            case 0x20DFD4u: goto label_20dfd4;
            case 0x20DFD8u: goto label_20dfd8;
            case 0x20DFDCu: goto label_20dfdc;
            case 0x20DFE0u: goto label_20dfe0;
            case 0x20DFE4u: goto label_20dfe4;
            case 0x20DFE8u: goto label_20dfe8;
            case 0x20DFECu: goto label_20dfec;
            case 0x20DFF0u: goto label_20dff0;
            case 0x20DFF4u: goto label_20dff4;
            case 0x20DFF8u: goto label_20dff8;
            case 0x20DFFCu: goto label_20dffc;
            case 0x20E000u: goto label_20e000;
            case 0x20E004u: goto label_20e004;
            case 0x20E008u: goto label_20e008;
            case 0x20E00Cu: goto label_20e00c;
            case 0x20E010u: goto label_20e010;
            case 0x20E014u: goto label_20e014;
            case 0x20E018u: goto label_20e018;
            case 0x20E01Cu: goto label_20e01c;
            case 0x20E020u: goto label_20e020;
            case 0x20E024u: goto label_20e024;
            case 0x20E028u: goto label_20e028;
            case 0x20E02Cu: goto label_20e02c;
            case 0x20E030u: goto label_20e030;
            case 0x20E034u: goto label_20e034;
            case 0x20E038u: goto label_20e038;
            case 0x20E03Cu: goto label_20e03c;
            case 0x20E040u: goto label_20e040;
            case 0x20E044u: goto label_20e044;
            case 0x20E048u: goto label_20e048;
            case 0x20E04Cu: goto label_20e04c;
            case 0x20E050u: goto label_20e050;
            case 0x20E054u: goto label_20e054;
            case 0x20E058u: goto label_20e058;
            case 0x20E05Cu: goto label_20e05c;
            case 0x20E060u: goto label_20e060;
            case 0x20E064u: goto label_20e064;
            case 0x20E068u: goto label_20e068;
            case 0x20E06Cu: goto label_20e06c;
            case 0x20E070u: goto label_20e070;
            case 0x20E074u: goto label_20e074;
            case 0x20E078u: goto label_20e078;
            case 0x20E07Cu: goto label_20e07c;
            case 0x20E080u: goto label_20e080;
            case 0x20E084u: goto label_20e084;
            case 0x20E088u: goto label_20e088;
            case 0x20E08Cu: goto label_20e08c;
            case 0x20E090u: goto label_20e090;
            case 0x20E094u: goto label_20e094;
            case 0x20E098u: goto label_20e098;
            case 0x20E09Cu: goto label_20e09c;
            case 0x20E0A0u: goto label_20e0a0;
            case 0x20E0A4u: goto label_20e0a4;
            case 0x20E0A8u: goto label_20e0a8;
            case 0x20E0ACu: goto label_20e0ac;
            case 0x20E0B0u: goto label_20e0b0;
            case 0x20E0B4u: goto label_20e0b4;
            case 0x20E0B8u: goto label_20e0b8;
            case 0x20E0BCu: goto label_20e0bc;
            case 0x20E0C0u: goto label_20e0c0;
            case 0x20E0C4u: goto label_20e0c4;
            case 0x20E0C8u: goto label_20e0c8;
            case 0x20E0CCu: goto label_20e0cc;
            case 0x20E0D0u: goto label_20e0d0;
            case 0x20E0D4u: goto label_20e0d4;
            case 0x20E0D8u: goto label_20e0d8;
            case 0x20E0DCu: goto label_20e0dc;
            case 0x20E0E0u: goto label_20e0e0;
            case 0x20E0E4u: goto label_20e0e4;
            case 0x20E0E8u: goto label_20e0e8;
            case 0x20E0ECu: goto label_20e0ec;
            case 0x20E0F0u: goto label_20e0f0;
            case 0x20E0F4u: goto label_20e0f4;
            case 0x20E0F8u: goto label_20e0f8;
            case 0x20E0FCu: goto label_20e0fc;
            case 0x20E100u: goto label_20e100;
            case 0x20E104u: goto label_20e104;
            case 0x20E108u: goto label_20e108;
            case 0x20E10Cu: goto label_20e10c;
            case 0x20E110u: goto label_20e110;
            case 0x20E114u: goto label_20e114;
            case 0x20E118u: goto label_20e118;
            case 0x20E11Cu: goto label_20e11c;
            case 0x20E120u: goto label_20e120;
            case 0x20E124u: goto label_20e124;
            case 0x20E128u: goto label_20e128;
            case 0x20E12Cu: goto label_20e12c;
            case 0x20E130u: goto label_20e130;
            case 0x20E134u: goto label_20e134;
            case 0x20E138u: goto label_20e138;
            case 0x20E13Cu: goto label_20e13c;
            case 0x20E140u: goto label_20e140;
            case 0x20E144u: goto label_20e144;
            case 0x20E148u: goto label_20e148;
            case 0x20E14Cu: goto label_20e14c;
            case 0x20E150u: goto label_20e150;
            case 0x20E154u: goto label_20e154;
            case 0x20E158u: goto label_20e158;
            case 0x20E15Cu: goto label_20e15c;
            case 0x20E160u: goto label_20e160;
            case 0x20E164u: goto label_20e164;
            case 0x20E168u: goto label_20e168;
            case 0x20E16Cu: goto label_20e16c;
            case 0x20E170u: goto label_20e170;
            case 0x20E174u: goto label_20e174;
            case 0x20E178u: goto label_20e178;
            case 0x20E17Cu: goto label_20e17c;
            case 0x20E180u: goto label_20e180;
            case 0x20E184u: goto label_20e184;
            case 0x20E188u: goto label_20e188;
            case 0x20E18Cu: goto label_20e18c;
            case 0x20E190u: goto label_20e190;
            case 0x20E194u: goto label_20e194;
            case 0x20E198u: goto label_20e198;
            case 0x20E19Cu: goto label_20e19c;
            case 0x20E1A0u: goto label_20e1a0;
            case 0x20E1A4u: goto label_20e1a4;
            case 0x20E1A8u: goto label_20e1a8;
            case 0x20E1ACu: goto label_20e1ac;
            case 0x20E1B0u: goto label_20e1b0;
            case 0x20E1B4u: goto label_20e1b4;
            case 0x20E1B8u: goto label_20e1b8;
            case 0x20E1BCu: goto label_20e1bc;
            case 0x20E1C0u: goto label_20e1c0;
            case 0x20E1C4u: goto label_20e1c4;
            case 0x20E1C8u: goto label_20e1c8;
            case 0x20E1CCu: goto label_20e1cc;
            case 0x20E1D0u: goto label_20e1d0;
            case 0x20E1D4u: goto label_20e1d4;
            case 0x20E1D8u: goto label_20e1d8;
            case 0x20E1DCu: goto label_20e1dc;
            case 0x20E1E0u: goto label_20e1e0;
            case 0x20E1E4u: goto label_20e1e4;
            case 0x20E1E8u: goto label_20e1e8;
            case 0x20E1ECu: goto label_20e1ec;
            case 0x20E1F0u: goto label_20e1f0;
            case 0x20E1F4u: goto label_20e1f4;
            case 0x20E1F8u: goto label_20e1f8;
            case 0x20E1FCu: goto label_20e1fc;
            case 0x20E200u: goto label_20e200;
            case 0x20E204u: goto label_20e204;
            case 0x20E208u: goto label_20e208;
            case 0x20E20Cu: goto label_20e20c;
            case 0x20E210u: goto label_20e210;
            case 0x20E214u: goto label_20e214;
            case 0x20E218u: goto label_20e218;
            case 0x20E21Cu: goto label_20e21c;
            case 0x20E220u: goto label_20e220;
            case 0x20E224u: goto label_20e224;
            case 0x20E228u: goto label_20e228;
            case 0x20E22Cu: goto label_20e22c;
            case 0x20E230u: goto label_20e230;
            case 0x20E234u: goto label_20e234;
            case 0x20E238u: goto label_20e238;
            case 0x20E23Cu: goto label_20e23c;
            case 0x20E240u: goto label_20e240;
            case 0x20E244u: goto label_20e244;
            case 0x20E248u: goto label_20e248;
            case 0x20E24Cu: goto label_20e24c;
            case 0x20E250u: goto label_20e250;
            case 0x20E254u: goto label_20e254;
            case 0x20E258u: goto label_20e258;
            case 0x20E25Cu: goto label_20e25c;
            case 0x20E260u: goto label_20e260;
            case 0x20E264u: goto label_20e264;
            case 0x20E268u: goto label_20e268;
            case 0x20E26Cu: goto label_20e26c;
            case 0x20E270u: goto label_20e270;
            case 0x20E274u: goto label_20e274;
            case 0x20E278u: goto label_20e278;
            case 0x20E27Cu: goto label_20e27c;
            case 0x20E280u: goto label_20e280;
            case 0x20E284u: goto label_20e284;
            case 0x20E288u: goto label_20e288;
            case 0x20E28Cu: goto label_20e28c;
            case 0x20E290u: goto label_20e290;
            case 0x20E294u: goto label_20e294;
            case 0x20E298u: goto label_20e298;
            case 0x20E29Cu: goto label_20e29c;
            case 0x20E2A0u: goto label_20e2a0;
            case 0x20E2A4u: goto label_20e2a4;
            case 0x20E2A8u: goto label_20e2a8;
            case 0x20E2ACu: goto label_20e2ac;
            case 0x20E2B0u: goto label_20e2b0;
            case 0x20E2B4u: goto label_20e2b4;
            case 0x20E2B8u: goto label_20e2b8;
            case 0x20E2BCu: goto label_20e2bc;
            case 0x20E2C0u: goto label_20e2c0;
            case 0x20E2C4u: goto label_20e2c4;
            case 0x20E2C8u: goto label_20e2c8;
            case 0x20E2CCu: goto label_20e2cc;
            case 0x20E2D0u: goto label_20e2d0;
            case 0x20E2D4u: goto label_20e2d4;
            case 0x20E2D8u: goto label_20e2d8;
            case 0x20E2DCu: goto label_20e2dc;
            case 0x20E2E0u: goto label_20e2e0;
            case 0x20E2E4u: goto label_20e2e4;
            case 0x20E2E8u: goto label_20e2e8;
            case 0x20E2ECu: goto label_20e2ec;
            case 0x20E2F0u: goto label_20e2f0;
            case 0x20E2F4u: goto label_20e2f4;
            case 0x20E2F8u: goto label_20e2f8;
            case 0x20E2FCu: goto label_20e2fc;
            case 0x20E300u: goto label_20e300;
            case 0x20E304u: goto label_20e304;
            case 0x20E308u: goto label_20e308;
            case 0x20E30Cu: goto label_20e30c;
            case 0x20E310u: goto label_20e310;
            case 0x20E314u: goto label_20e314;
            case 0x20E318u: goto label_20e318;
            case 0x20E31Cu: goto label_20e31c;
            case 0x20E320u: goto label_20e320;
            case 0x20E324u: goto label_20e324;
            case 0x20E328u: goto label_20e328;
            case 0x20E32Cu: goto label_20e32c;
            case 0x20E330u: goto label_20e330;
            case 0x20E334u: goto label_20e334;
            case 0x20E338u: goto label_20e338;
            case 0x20E33Cu: goto label_20e33c;
            case 0x20E340u: goto label_20e340;
            case 0x20E344u: goto label_20e344;
            case 0x20E348u: goto label_20e348;
            case 0x20E34Cu: goto label_20e34c;
            case 0x20E350u: goto label_20e350;
            case 0x20E354u: goto label_20e354;
            case 0x20E358u: goto label_20e358;
            case 0x20E35Cu: goto label_20e35c;
            case 0x20E360u: goto label_20e360;
            case 0x20E364u: goto label_20e364;
            case 0x20E368u: goto label_20e368;
            case 0x20E36Cu: goto label_20e36c;
            case 0x20E370u: goto label_20e370;
            case 0x20E374u: goto label_20e374;
            case 0x20E378u: goto label_20e378;
            case 0x20E37Cu: goto label_20e37c;
            case 0x20E380u: goto label_20e380;
            case 0x20E384u: goto label_20e384;
            case 0x20E388u: goto label_20e388;
            case 0x20E38Cu: goto label_20e38c;
            case 0x20E390u: goto label_20e390;
            case 0x20E394u: goto label_20e394;
            case 0x20E398u: goto label_20e398;
            case 0x20E39Cu: goto label_20e39c;
            case 0x20E3A0u: goto label_20e3a0;
            case 0x20E3A4u: goto label_20e3a4;
            case 0x20E3A8u: goto label_20e3a8;
            case 0x20E3ACu: goto label_20e3ac;
            case 0x20E3B0u: goto label_20e3b0;
            case 0x20E3B4u: goto label_20e3b4;
            case 0x20E3B8u: goto label_20e3b8;
            case 0x20E3BCu: goto label_20e3bc;
            case 0x20E3C0u: goto label_20e3c0;
            case 0x20E3C4u: goto label_20e3c4;
            case 0x20E3C8u: goto label_20e3c8;
            case 0x20E3CCu: goto label_20e3cc;
            case 0x20E3D0u: goto label_20e3d0;
            case 0x20E3D4u: goto label_20e3d4;
            case 0x20E3D8u: goto label_20e3d8;
            case 0x20E3DCu: goto label_20e3dc;
            case 0x20E3E0u: goto label_20e3e0;
            case 0x20E3E4u: goto label_20e3e4;
            case 0x20E3E8u: goto label_20e3e8;
            case 0x20E3ECu: goto label_20e3ec;
            case 0x20E3F0u: goto label_20e3f0;
            case 0x20E3F4u: goto label_20e3f4;
            case 0x20E3F8u: goto label_20e3f8;
            case 0x20E3FCu: goto label_20e3fc;
            case 0x20E400u: goto label_20e400;
            case 0x20E404u: goto label_20e404;
            case 0x20E408u: goto label_20e408;
            case 0x20E40Cu: goto label_20e40c;
            case 0x20E410u: goto label_20e410;
            case 0x20E414u: goto label_20e414;
            case 0x20E418u: goto label_20e418;
            case 0x20E41Cu: goto label_20e41c;
            case 0x20E420u: goto label_20e420;
            case 0x20E424u: goto label_20e424;
            case 0x20E428u: goto label_20e428;
            case 0x20E42Cu: goto label_20e42c;
            case 0x20E430u: goto label_20e430;
            case 0x20E434u: goto label_20e434;
            case 0x20E438u: goto label_20e438;
            case 0x20E43Cu: goto label_20e43c;
            case 0x20E440u: goto label_20e440;
            case 0x20E444u: goto label_20e444;
            case 0x20E448u: goto label_20e448;
            case 0x20E44Cu: goto label_20e44c;
            case 0x20E450u: goto label_20e450;
            case 0x20E454u: goto label_20e454;
            case 0x20E458u: goto label_20e458;
            case 0x20E45Cu: goto label_20e45c;
            case 0x20E460u: goto label_20e460;
            case 0x20E464u: goto label_20e464;
            case 0x20E468u: goto label_20e468;
            case 0x20E46Cu: goto label_20e46c;
            case 0x20E470u: goto label_20e470;
            case 0x20E474u: goto label_20e474;
            case 0x20E478u: goto label_20e478;
            case 0x20E47Cu: goto label_20e47c;
            case 0x20E480u: goto label_20e480;
            case 0x20E484u: goto label_20e484;
            case 0x20E488u: goto label_20e488;
            case 0x20E48Cu: goto label_20e48c;
            case 0x20E490u: goto label_20e490;
            case 0x20E494u: goto label_20e494;
            case 0x20E498u: goto label_20e498;
            case 0x20E49Cu: goto label_20e49c;
            case 0x20E4A0u: goto label_20e4a0;
            case 0x20E4A4u: goto label_20e4a4;
            case 0x20E4A8u: goto label_20e4a8;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E4B0u: goto label_20e4b0;
            case 0x20E4B4u: goto label_20e4b4;
            case 0x20E4B8u: goto label_20e4b8;
            case 0x20E4BCu: goto label_20e4bc;
            case 0x20E4C0u: goto label_20e4c0;
            case 0x20E4C4u: goto label_20e4c4;
            case 0x20E4C8u: goto label_20e4c8;
            case 0x20E4CCu: goto label_20e4cc;
            case 0x20E4D0u: goto label_20e4d0;
            case 0x20E4D4u: goto label_20e4d4;
            case 0x20E4D8u: goto label_20e4d8;
            case 0x20E4DCu: goto label_20e4dc;
            case 0x20E4E0u: goto label_20e4e0;
            case 0x20E4E4u: goto label_20e4e4;
            case 0x20E4E8u: goto label_20e4e8;
            case 0x20E4ECu: goto label_20e4ec;
            case 0x20E4F0u: goto label_20e4f0;
            case 0x20E4F4u: goto label_20e4f4;
            case 0x20E4F8u: goto label_20e4f8;
            case 0x20E4FCu: goto label_20e4fc;
            case 0x20E500u: goto label_20e500;
            case 0x20E504u: goto label_20e504;
            case 0x20E508u: goto label_20e508;
            case 0x20E50Cu: goto label_20e50c;
            case 0x20E510u: goto label_20e510;
            case 0x20E514u: goto label_20e514;
            case 0x20E518u: goto label_20e518;
            case 0x20E51Cu: goto label_20e51c;
            case 0x20E520u: goto label_20e520;
            case 0x20E524u: goto label_20e524;
            case 0x20E528u: goto label_20e528;
            case 0x20E52Cu: goto label_20e52c;
            case 0x20E530u: goto label_20e530;
            case 0x20E534u: goto label_20e534;
            case 0x20E538u: goto label_20e538;
            case 0x20E53Cu: goto label_20e53c;
            case 0x20E540u: goto label_20e540;
            case 0x20E544u: goto label_20e544;
            case 0x20E548u: goto label_20e548;
            case 0x20E54Cu: goto label_20e54c;
            case 0x20E550u: goto label_20e550;
            case 0x20E554u: goto label_20e554;
            case 0x20E558u: goto label_20e558;
            case 0x20E55Cu: goto label_20e55c;
            case 0x20E560u: goto label_20e560;
            case 0x20E564u: goto label_20e564;
            case 0x20E568u: goto label_20e568;
            case 0x20E56Cu: goto label_20e56c;
            case 0x20E570u: goto label_20e570;
            case 0x20E574u: goto label_20e574;
            case 0x20E578u: goto label_20e578;
            case 0x20E57Cu: goto label_20e57c;
            case 0x20E580u: goto label_20e580;
            case 0x20E584u: goto label_20e584;
            case 0x20E588u: goto label_20e588;
            case 0x20E58Cu: goto label_20e58c;
            case 0x20E590u: goto label_20e590;
            case 0x20E594u: goto label_20e594;
            case 0x20E598u: goto label_20e598;
            case 0x20E59Cu: goto label_20e59c;
            case 0x20E5A0u: goto label_20e5a0;
            case 0x20E5A4u: goto label_20e5a4;
            case 0x20E5A8u: goto label_20e5a8;
            case 0x20E5ACu: goto label_20e5ac;
            case 0x20E5B0u: goto label_20e5b0;
            case 0x20E5B4u: goto label_20e5b4;
            case 0x20E5B8u: goto label_20e5b8;
            case 0x20E5BCu: goto label_20e5bc;
            case 0x20E5C0u: goto label_20e5c0;
            case 0x20E5C4u: goto label_20e5c4;
            case 0x20E5C8u: goto label_20e5c8;
            case 0x20E5CCu: goto label_20e5cc;
            case 0x20E5D0u: goto label_20e5d0;
            case 0x20E5D4u: goto label_20e5d4;
            case 0x20E5D8u: goto label_20e5d8;
            case 0x20E5DCu: goto label_20e5dc;
            case 0x20E5E0u: goto label_20e5e0;
            case 0x20E5E4u: goto label_20e5e4;
            case 0x20E5E8u: goto label_20e5e8;
            case 0x20E5ECu: goto label_20e5ec;
            case 0x20E5F0u: goto label_20e5f0;
            case 0x20E5F4u: goto label_20e5f4;
            case 0x20E5F8u: goto label_20e5f8;
            case 0x20E5FCu: goto label_20e5fc;
            case 0x20E600u: goto label_20e600;
            case 0x20E604u: goto label_20e604;
            case 0x20E608u: goto label_20e608;
            case 0x20E60Cu: goto label_20e60c;
            case 0x20E610u: goto label_20e610;
            case 0x20E614u: goto label_20e614;
            case 0x20E618u: goto label_20e618;
            case 0x20E61Cu: goto label_20e61c;
            case 0x20E620u: goto label_20e620;
            case 0x20E624u: goto label_20e624;
            case 0x20E628u: goto label_20e628;
            case 0x20E62Cu: goto label_20e62c;
            case 0x20E630u: goto label_20e630;
            case 0x20E634u: goto label_20e634;
            case 0x20E638u: goto label_20e638;
            case 0x20E63Cu: goto label_20e63c;
            case 0x20E640u: goto label_20e640;
            case 0x20E644u: goto label_20e644;
            case 0x20E648u: goto label_20e648;
            case 0x20E64Cu: goto label_20e64c;
            case 0x20E650u: goto label_20e650;
            case 0x20E654u: goto label_20e654;
            case 0x20E658u: goto label_20e658;
            case 0x20E65Cu: goto label_20e65c;
            case 0x20E660u: goto label_20e660;
            case 0x20E664u: goto label_20e664;
            case 0x20E668u: goto label_20e668;
            case 0x20E66Cu: goto label_20e66c;
            case 0x20E670u: goto label_20e670;
            case 0x20E674u: goto label_20e674;
            case 0x20E678u: goto label_20e678;
            case 0x20E67Cu: goto label_20e67c;
            case 0x20E680u: goto label_20e680;
            case 0x20E684u: goto label_20e684;
            case 0x20E688u: goto label_20e688;
            case 0x20E68Cu: goto label_20e68c;
            case 0x20E690u: goto label_20e690;
            case 0x20E694u: goto label_20e694;
            case 0x20E698u: goto label_20e698;
            case 0x20E69Cu: goto label_20e69c;
            case 0x20E6A0u: goto label_20e6a0;
            case 0x20E6A4u: goto label_20e6a4;
            case 0x20E6A8u: goto label_20e6a8;
            case 0x20E6ACu: goto label_20e6ac;
            case 0x20E6B0u: goto label_20e6b0;
            case 0x20E6B4u: goto label_20e6b4;
            case 0x20E6B8u: goto label_20e6b8;
            case 0x20E6BCu: goto label_20e6bc;
            case 0x20E6C0u: goto label_20e6c0;
            case 0x20E6C4u: goto label_20e6c4;
            case 0x20E6C8u: goto label_20e6c8;
            case 0x20E6CCu: goto label_20e6cc;
            case 0x20E6D0u: goto label_20e6d0;
            case 0x20E6D4u: goto label_20e6d4;
            case 0x20E6D8u: goto label_20e6d8;
            case 0x20E6DCu: goto label_20e6dc;
            case 0x20E6E0u: goto label_20e6e0;
            case 0x20E6E4u: goto label_20e6e4;
            case 0x20E6E8u: goto label_20e6e8;
            case 0x20E6ECu: goto label_20e6ec;
            case 0x20E6F0u: goto label_20e6f0;
            case 0x20E6F4u: goto label_20e6f4;
            case 0x20E6F8u: goto label_20e6f8;
            case 0x20E6FCu: goto label_20e6fc;
            case 0x20E700u: goto label_20e700;
            case 0x20E704u: goto label_20e704;
            case 0x20E708u: goto label_20e708;
            case 0x20E70Cu: goto label_20e70c;
            case 0x20E710u: goto label_20e710;
            case 0x20E714u: goto label_20e714;
            case 0x20E718u: goto label_20e718;
            case 0x20E71Cu: goto label_20e71c;
            case 0x20E720u: goto label_20e720;
            case 0x20E724u: goto label_20e724;
            default: break;
        }
        return;
    }
label_fallthrough_0x20e720:
    ctx->pc = 0x20E728u;
}
