#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_enemies
// Address: 0x23b588 - 0x23bf04
void do_enemies_0x23b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23b588u;

label_23b588:
    // 0x23b588: 0x27bdff70
    ctx->pc = 0x23b588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_23b58c:
    // 0x23b58c: 0xffbf0070
    ctx->pc = 0x23b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_23b590:
    // 0x23b590: 0xffb60060
    ctx->pc = 0x23b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_23b594:
    // 0x23b594: 0xffb50050
    ctx->pc = 0x23b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_23b598:
    // 0x23b598: 0xffb40040
    ctx->pc = 0x23b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23b59c:
    // 0x23b59c: 0xffb30030
    ctx->pc = 0x23b59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23b5a0:
    // 0x23b5a0: 0xffb20020
    ctx->pc = 0x23b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b5a4:
    // 0x23b5a4: 0xffb10010
    ctx->pc = 0x23b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23b5a8:
    // 0x23b5a8: 0xffb00000
    ctx->pc = 0x23b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b5ac:
    // 0x23b5ac: 0xe7b50088
    ctx->pc = 0x23b5acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23b5b0:
    // 0x23b5b0: 0xe7b40080
    ctx->pc = 0x23b5b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_23b5b4:
    // 0x23b5b4: 0xc0a646e
label_23b5b8:
    if (ctx->pc == 0x23B5B8u) {
        ctx->pc = 0x23B5B8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B5BCu;
        goto label_23b5bc;
    }
    ctx->pc = 0x23B5B4u;
    SET_GPR_U32(ctx, 31, 0x23B5BCu);
    ctx->pc = 0x23B5B8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2991B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessCritterList_0x2991b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B5BCu; }
    }
    if (ctx->pc != 0x23B5BCu) { return; }
    ctx->pc = 0x23B5BCu;
label_23b5bc:
    // 0x23b5bc: 0x3c020036
    ctx->pc = 0x23b5bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_23b5c0:
    // 0x23b5c0: 0x8c44d938
    ctx->pc = 0x23b5c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957368)));
label_23b5c4:
    // 0x23b5c4: 0x4800007
label_23b5c8:
    if (ctx->pc == 0x23B5C8u) {
        ctx->pc = 0x23B5C8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        ctx->pc = 0x23B5CCu;
        goto label_23b5cc;
    }
    ctx->pc = 0x23B5C4u;
    {
        const bool branch_taken_0x23b5c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23B5C8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x23b5c4) {
            ctx->pc = 0x23B5E4u;
            goto label_23b5e4;
        }
    }
    ctx->pc = 0x23B5CCu;
label_23b5cc:
    // 0x23b5cc: 0x2463dfd0
    ctx->pc = 0x23b5ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
label_23b5d0:
    // 0x23b5d0: 0x240203b0
    ctx->pc = 0x23b5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
label_23b5d4:
    // 0x23b5d4: 0x821018
    ctx->pc = 0x23b5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_23b5d8:
    // 0x23b5d8: 0x431021
    ctx->pc = 0x23b5d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b5dc:
    // 0x23b5dc: 0x24030001
    ctx->pc = 0x23b5dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_23b5e0:
    // 0x23b5e0: 0xac4300c8
    ctx->pc = 0x23b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_23b5e4:
    // 0x23b5e4: 0x3c020031
    ctx->pc = 0x23b5e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23b5e8:
    // 0x23b5e8: 0x3c030031
    ctx->pc = 0x23b5e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_23b5ec:
    // 0x23b5ec: 0x8c42ff9c
    ctx->pc = 0x23b5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_23b5f0:
    // 0x23b5f0: 0x8c630024
    ctx->pc = 0x23b5f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23b5f4:
    // 0x23b5f4: 0x431025
    ctx->pc = 0x23b5f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b5f8:
    // 0x23b5f8: 0x14400237
label_23b5fc:
    if (ctx->pc == 0x23B5FCu) {
        ctx->pc = 0x23B5FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23B600u;
        goto label_23b600;
    }
    ctx->pc = 0x23B5F8u;
    {
        const bool branch_taken_0x23b5f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23B5FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x23b5f8) {
            ctx->pc = 0x23BED8u;
            goto label_23bed8;
        }
    }
    ctx->pc = 0x23B600u;
label_23b600:
    // 0x23b600: 0x3c020032
    ctx->pc = 0x23b600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_23b604:
    // 0x23b604: 0x8c420808
    ctx->pc = 0x23b604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
label_23b608:
    // 0x23b608: 0x1040002a
label_23b60c:
    if (ctx->pc == 0x23B60Cu) {
        ctx->pc = 0x23B60Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x23B610u;
        goto label_23b610;
    }
    ctx->pc = 0x23B608u;
    {
        const bool branch_taken_0x23b608 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B60Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x23b608) {
            ctx->pc = 0x23B6B4u;
            goto label_23b6b4;
        }
    }
    ctx->pc = 0x23B610u;
label_23b610:
    // 0x23b610: 0x8c42080c
    ctx->pc = 0x23b610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_23b614:
    // 0x23b614: 0x10400230
label_23b618:
    if (ctx->pc == 0x23B618u) {
        ctx->pc = 0x23B618u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x23B61Cu;
        goto label_23b61c;
    }
    ctx->pc = 0x23B614u;
    {
        const bool branch_taken_0x23b614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B618u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23b614) {
            ctx->pc = 0x23BED8u;
            goto label_23bed8;
        }
    }
    ctx->pc = 0x23B61Cu;
label_23b61c:
    // 0x23b61c: 0x2451dfd0
    ctx->pc = 0x23b61cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294959056));
label_23b620:
    // 0x23b620: 0x3c020033
    ctx->pc = 0x23b620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23b624:
    // 0x23b624: 0x8c423c00
    ctx->pc = 0x23b624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_23b628:
    // 0x23b628: 0x1840022b
label_23b62c:
    if (ctx->pc == 0x23B62Cu) {
        ctx->pc = 0x23B62Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B630u;
        goto label_23b630;
    }
    ctx->pc = 0x23B628u;
    {
        const bool branch_taken_0x23b628 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23B62Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b628) {
            ctx->pc = 0x23BED8u;
            goto label_23bed8;
        }
    }
    ctx->pc = 0x23B630u;
label_23b630:
    // 0x23b630: 0x24160001
    ctx->pc = 0x23b630u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
label_23b634:
    // 0x23b634: 0x3c150036
    ctx->pc = 0x23b634u;
    SET_GPR_U32(ctx, 21, ((uint32_t)54 << 16));
label_23b638:
    // 0x23b638: 0x2414001d
    ctx->pc = 0x23b638u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 29));
label_23b63c:
    // 0x23b63c: 0x24130003
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
label_23b640:
    // 0x23b640: 0x3c100033
    ctx->pc = 0x23b640u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_23b644:
    // 0x23b644: 0x0
    ctx->pc = 0x23b644u;
    // NOP
label_23b648:
    // 0x23b648: 0x8e2400c8
    ctx->pc = 0x23b648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_23b64c:
    // 0x23b64c: 0x54960013
label_23b650:
    if (ctx->pc == 0x23B650u) {
        ctx->pc = 0x23B650u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x23B654u;
        goto label_23b654;
    }
    ctx->pc = 0x23B64Cu;
    {
        const bool branch_taken_0x23b64c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 22));
        if (branch_taken_0x23b64c) {
            ctx->pc = 0x23B650u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x23B69Cu;
            goto label_23b69c;
        }
    }
    ctx->pc = 0x23B654u;
label_23b654:
    // 0x23b654: 0x8e230000
    ctx->pc = 0x23b654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b658:
    // 0x23b658: 0x8ea2d934
    ctx->pc = 0x23b658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294957364)));
label_23b65c:
    // 0x23b65c: 0x5062000f
label_23b660:
    if (ctx->pc == 0x23B660u) {
        ctx->pc = 0x23B660u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x23B664u;
        goto label_23b664;
    }
    ctx->pc = 0x23B65Cu;
    {
        const bool branch_taken_0x23b65c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23b65c) {
            ctx->pc = 0x23B660u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x23B69Cu;
            goto label_23b69c;
        }
    }
    ctx->pc = 0x23B664u;
label_23b664:
    // 0x23b664: 0x54740003
label_23b668:
    if (ctx->pc == 0x23B668u) {
        ctx->pc = 0x23B668u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x23B66Cu;
        goto label_23b66c;
    }
    ctx->pc = 0x23B664u;
    {
        const bool branch_taken_0x23b664 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        if (branch_taken_0x23b664) {
            ctx->pc = 0x23B668u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x23B674u;
            goto label_23b674;
        }
    }
    ctx->pc = 0x23B66Cu;
label_23b66c:
    // 0x23b66c: 0x10000004
label_23b670:
    if (ctx->pc == 0x23B670u) {
        ctx->pc = 0x23B670u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 4));
        ctx->pc = 0x23B674u;
        goto label_23b674;
    }
    ctx->pc = 0x23B66Cu;
    {
        const bool branch_taken_0x23b66c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B670u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 4));
        if (branch_taken_0x23b66c) {
            ctx->pc = 0x23B680u;
            goto label_23b680;
        }
    }
    ctx->pc = 0x23B674u;
label_23b674:
    // 0x23b674: 0x54400002
label_23b678:
    if (ctx->pc == 0x23B678u) {
        ctx->pc = 0x23B678u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x23B67Cu;
        goto label_23b67c;
    }
    ctx->pc = 0x23B674u;
    {
        const bool branch_taken_0x23b674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23b674) {
            ctx->pc = 0x23B678u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
            ctx->pc = 0x23B680u;
            goto label_23b680;
        }
    }
    ctx->pc = 0x23B67Cu;
label_23b67c:
    // 0x23b67c: 0xae3300e4
    ctx->pc = 0x23b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 19));
label_23b680:
    // 0x23b680: 0x8e220080
    ctx->pc = 0x23b680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_23b684:
    // 0x23b684: 0x50400005
label_23b688:
    if (ctx->pc == 0x23B688u) {
        ctx->pc = 0x23B688u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x23B68Cu;
        goto label_23b68c;
    }
    ctx->pc = 0x23B684u;
    {
        const bool branch_taken_0x23b684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23b684) {
            ctx->pc = 0x23B688u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x23B69Cu;
            goto label_23b69c;
        }
    }
    ctx->pc = 0x23B68Cu;
label_23b68c:
    // 0x23b68c: 0xc09e494
label_23b690:
    if (ctx->pc == 0x23B690u) {
        ctx->pc = 0x23B690u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B694u;
        goto label_23b694;
    }
    ctx->pc = 0x23B68Cu;
    SET_GPR_U32(ctx, 31, 0x23B694u);
    ctx->pc = 0x23B690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279250u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoEnemyAction_0x279250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B694u; }
    }
    if (ctx->pc != 0x23B694u) { return; }
    ctx->pc = 0x23B694u;
label_23b694:
    // 0x23b694: 0xae2200e0
    ctx->pc = 0x23b694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_23b698:
    // 0x23b698: 0x26520001
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_23b69c:
    // 0x23b69c: 0x8e023c00
    ctx->pc = 0x23b69cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15360)));
label_23b6a0:
    // 0x23b6a0: 0x242102a
    ctx->pc = 0x23b6a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_23b6a4:
    // 0x23b6a4: 0x1440ffe8
label_23b6a8:
    if (ctx->pc == 0x23B6A8u) {
        ctx->pc = 0x23B6A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 944));
        ctx->pc = 0x23B6ACu;
        goto label_23b6ac;
    }
    ctx->pc = 0x23B6A4u;
    {
        const bool branch_taken_0x23b6a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23B6A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 944));
        if (branch_taken_0x23b6a4) {
            ctx->pc = 0x23B648u;
            goto label_23b648;
        }
    }
    ctx->pc = 0x23B6ACu;
label_23b6ac:
    // 0x23b6ac: 0x1000020a
label_23b6b0:
    if (ctx->pc == 0x23B6B0u) {
        ctx->pc = 0x23B6B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23B6B4u;
        goto label_23b6b4;
    }
    ctx->pc = 0x23B6ACu;
    {
        const bool branch_taken_0x23b6ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B6B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x23b6ac) {
            ctx->pc = 0x23BED8u;
            goto label_23bed8;
        }
    }
    ctx->pc = 0x23B6B4u;
label_23b6b4:
    // 0x23b6b4: 0x902d
    ctx->pc = 0x23b6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b6b8:
    // 0x23b6b8: 0x3c020032
    ctx->pc = 0x23b6b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_23b6bc:
    // 0x23b6bc: 0x24431bc0
    ctx->pc = 0x23b6bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7104));
label_23b6c0:
    // 0x23b6c0: 0x24040001
    ctx->pc = 0x23b6c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_23b6c4:
    // 0x23b6c4: 0x0
    ctx->pc = 0x23b6c4u;
    // NOP
label_23b6c8:
    // 0x23b6c8: 0x8c6200fc
    ctx->pc = 0x23b6c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_23b6cc:
    // 0x23b6cc: 0x14440003
label_23b6d0:
    if (ctx->pc == 0x23B6D0u) {
        ctx->pc = 0x23B6D0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x23B6D4u;
        goto label_23b6d4;
    }
    ctx->pc = 0x23B6CCu;
    {
        const bool branch_taken_0x23b6cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x23B6D0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x23b6cc) {
            ctx->pc = 0x23B6DCu;
            goto label_23b6dc;
        }
    }
    ctx->pc = 0x23B6D4u;
label_23b6d4:
    // 0x23b6d4: 0xac600940
    ctx->pc = 0x23b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2368), GPR_U32(ctx, 0));
label_23b6d8:
    // 0x23b6d8: 0xac600944
    ctx->pc = 0x23b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2372), GPR_U32(ctx, 0));
label_23b6dc:
    // 0x23b6dc: 0x2a420004
    ctx->pc = 0x23b6dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_23b6e0:
    // 0x23b6e0: 0x1440fff9
label_23b6e4:
    if (ctx->pc == 0x23B6E4u) {
        ctx->pc = 0x23B6E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
        ctx->pc = 0x23B6E8u;
        goto label_23b6e8;
    }
    ctx->pc = 0x23B6E0u;
    {
        const bool branch_taken_0x23b6e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23B6E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
        if (branch_taken_0x23b6e0) {
            ctx->pc = 0x23B6C8u;
            goto label_23b6c8;
        }
    }
    ctx->pc = 0x23B6E8u;
label_23b6e8:
    // 0x23b6e8: 0x3c02003c
    ctx->pc = 0x23b6e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_23b6ec:
    // 0x23b6ec: 0xac401b68
    ctx->pc = 0x23b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_23b6f0:
    // 0x23b6f0: 0x3c020034
    ctx->pc = 0x23b6f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_23b6f4:
    // 0x23b6f4: 0x8c45e7c8
    ctx->pc = 0x23b6f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_23b6f8:
    // 0x23b6f8: 0x3c030031
    ctx->pc = 0x23b6f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_23b6fc:
    // 0x23b6fc: 0x8c62ffbc
    ctx->pc = 0x23b6fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_23b700:
    // 0x23b700: 0x4400005
label_23b704:
    if (ctx->pc == 0x23B704u) {
        ctx->pc = 0x23B704u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        ctx->pc = 0x23B708u;
        goto label_23b708;
    }
    ctx->pc = 0x23B700u;
    {
        const bool branch_taken_0x23b700 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23B704u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x23b700) {
            ctx->pc = 0x23B718u;
            goto label_23b718;
        }
    }
    ctx->pc = 0x23B708u;
label_23b708:
    // 0x23b708: 0x44820800
    ctx->pc = 0x23b708u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_23b70c:
    // 0x23b70c: 0x46800860
    ctx->pc = 0x23b70cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_23b710:
    // 0x23b710: 0x10000009
label_23b714:
    if (ctx->pc == 0x23B714u) {
        ctx->pc = 0x23B714u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x23B718u;
        goto label_23b718;
    }
    ctx->pc = 0x23B710u;
    {
        const bool branch_taken_0x23b710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B714u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23b710) {
            ctx->pc = 0x23B738u;
            goto label_23b738;
        }
    }
    ctx->pc = 0x23B718u;
label_23b718:
    // 0x23b718: 0x8c820000
    ctx->pc = 0x23b718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b71c:
    // 0x23b71c: 0x30430001
    ctx->pc = 0x23b71cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_23b720:
    // 0x23b720: 0x21042
    ctx->pc = 0x23b720u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_23b724:
    // 0x23b724: 0x621825
    ctx->pc = 0x23b724u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b728:
    // 0x23b728: 0x44830800
    ctx->pc = 0x23b728u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_23b72c:
    // 0x23b72c: 0x46800860
    ctx->pc = 0x23b72cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_23b730:
    // 0x23b730: 0x46010840
    ctx->pc = 0x23b730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23b734:
    // 0x23b734: 0xc4a000b0
    ctx->pc = 0x23b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b738:
    // 0x23b738: 0x46000842
    ctx->pc = 0x23b738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23b73c:
    // 0x23b73c: 0x902d
    ctx->pc = 0x23b73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b740:
    // 0x23b740: 0x3c02003c
    ctx->pc = 0x23b740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_23b744:
    // 0x23b744: 0x24451bb8
    ctx->pc = 0x23b744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7096));
label_23b748:
    // 0x23b748: 0x3c020033
    ctx->pc = 0x23b748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23b74c:
    // 0x23b74c: 0x2444d748
    ctx->pc = 0x23b74cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294956872));
label_23b750:
    // 0x23b750: 0x121080
    ctx->pc = 0x23b750u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_23b754:
    // 0x23b754: 0x451821
    ctx->pc = 0x23b754u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23b758:
    // 0x23b758: 0x441021
    ctx->pc = 0x23b758u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23b75c:
    // 0x23b75c: 0xc4400000
    ctx->pc = 0x23b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b760:
    // 0x23b760: 0x46000802
    ctx->pc = 0x23b760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23b764:
    // 0x23b764: 0x26520001
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_23b768:
    // 0x23b768: 0x2a42002d
    ctx->pc = 0x23b768u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 45));
label_23b76c:
    // 0x23b76c: 0x1440fff8
label_23b770:
    if (ctx->pc == 0x23B770u) {
        ctx->pc = 0x23B770u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x23B774u;
        goto label_23b774;
    }
    ctx->pc = 0x23B76Cu;
    {
        const bool branch_taken_0x23b76c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23B770u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x23b76c) {
            ctx->pc = 0x23B750u;
            goto label_23b750;
        }
    }
    ctx->pc = 0x23B774u;
label_23b774:
    // 0x23b774: 0xc08e666
label_23b778:
    if (ctx->pc == 0x23B778u) {
        ctx->pc = 0x23B778u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B77Cu;
        goto label_23b77c;
    }
    ctx->pc = 0x23B774u;
    SET_GPR_U32(ctx, 31, 0x23B77Cu);
    ctx->pc = 0x23B778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239998u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_suicide_bomber_index_0x239998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B77Cu; }
    }
    if (ctx->pc != 0x23B77Cu) { return; }
    ctx->pc = 0x23B77Cu;
label_23b77c:
    // 0x23b77c: 0x3c020033
    ctx->pc = 0x23b77cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23b780:
    // 0x23b780: 0xac403c04
    ctx->pc = 0x23b780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15364), GPR_U32(ctx, 0));
label_23b784:
    // 0x23b784: 0x3c020033
    ctx->pc = 0x23b784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23b788:
    // 0x23b788: 0x2451dfd0
    ctx->pc = 0x23b788u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294959056));
label_23b78c:
    // 0x23b78c: 0x3c020033
    ctx->pc = 0x23b78cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23b790:
    // 0x23b790: 0x8c423c00
    ctx->pc = 0x23b790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_23b794:
    // 0x23b794: 0x1840001e
label_23b798:
    if (ctx->pc == 0x23B798u) {
        ctx->pc = 0x23B798u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        ctx->pc = 0x23B79Cu;
        goto label_23b79c;
    }
    ctx->pc = 0x23B794u;
    {
        const bool branch_taken_0x23b794 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23B798u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23b794) {
            ctx->pc = 0x23B810u;
            goto label_23b810;
        }
    }
    ctx->pc = 0x23B79Cu;
label_23b79c:
    // 0x23b79c: 0x3c014170
    ctx->pc = 0x23b79cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_23b7a0:
    // 0x23b7a0: 0x4481a800
    ctx->pc = 0x23b7a0u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_23b7a4:
    // 0x23b7a4: 0x3c130033
    ctx->pc = 0x23b7a4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)51 << 16));
label_23b7a8:
    // 0x23b7a8: 0x3c140033
    ctx->pc = 0x23b7a8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)51 << 16));
label_23b7ac:
    // 0x23b7ac: 0x0
    ctx->pc = 0x23b7acu;
    // NOP
label_23b7b0:
    // 0x23b7b0: 0x8e2200c8
    ctx->pc = 0x23b7b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_23b7b4:
    // 0x23b7b4: 0x10400010
label_23b7b8:
    if (ctx->pc == 0x23B7B8u) {
        ctx->pc = 0x23B7B8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x23B7BCu;
        goto label_23b7bc;
    }
    ctx->pc = 0x23B7B4u;
    {
        const bool branch_taken_0x23b7b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B7B8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x23b7b4) {
            ctx->pc = 0x23B7F8u;
            goto label_23b7f8;
        }
    }
    ctx->pc = 0x23B7BCu;
label_23b7bc:
    // 0x23b7bc: 0xc634024c
    ctx->pc = 0x23b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23b7c0:
    // 0x23b7c0: 0x4614a500
    ctx->pc = 0x23b7c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_23b7c4:
    // 0x23b7c4: 0x200202d
    ctx->pc = 0x23b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b7c8:
    // 0x23b7c8: 0xc0b1084
label_23b7cc:
    if (ctx->pc == 0x23B7CCu) {
        ctx->pc = 0x23B7CCu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x23B7D0u;
        goto label_23b7d0;
    }
    ctx->pc = 0x23B7C8u;
    SET_GPR_U32(ctx, 31, 0x23B7D0u);
    ctx->pc = 0x23B7CCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C4210u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible_0x2c4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B7D0u; }
    }
    if (ctx->pc != 0x23B7D0u) { return; }
    ctx->pc = 0x23B7D0u;
label_23b7d0:
    // 0x23b7d0: 0xa62202ee
    ctx->pc = 0x23b7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 750), (uint16_t)GPR_U32(ctx, 2));
label_23b7d4:
    // 0x23b7d4: 0x200202d
    ctx->pc = 0x23b7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b7d8:
    // 0x23b7d8: 0xc0b1084
label_23b7dc:
    if (ctx->pc == 0x23B7DCu) {
        ctx->pc = 0x23B7DCu;
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->pc = 0x23B7E0u;
        goto label_23b7e0;
    }
    ctx->pc = 0x23B7D8u;
    SET_GPR_U32(ctx, 31, 0x23B7E0u);
    ctx->pc = 0x23B7DCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->pc = 0x2C4210u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible_0x2c4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B7E0u; }
    }
    if (ctx->pc != 0x23B7E0u) { return; }
    ctx->pc = 0x23B7E0u;
label_23b7e0:
    // 0x23b7e0: 0xa62202f0
    ctx->pc = 0x23b7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 752), (uint16_t)GPR_U32(ctx, 2));
label_23b7e4:
    // 0x23b7e4: 0x862202ee
    ctx->pc = 0x23b7e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 750)));
label_23b7e8:
    // 0x23b7e8: 0x10400003
label_23b7ec:
    if (ctx->pc == 0x23B7ECu) {
        ctx->pc = 0x23B7ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 15364)));
        ctx->pc = 0x23B7F0u;
        goto label_23b7f0;
    }
    ctx->pc = 0x23B7E8u;
    {
        const bool branch_taken_0x23b7e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B7ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 15364)));
        if (branch_taken_0x23b7e8) {
            ctx->pc = 0x23B7F8u;
            goto label_23b7f8;
        }
    }
    ctx->pc = 0x23B7F0u;
label_23b7f0:
    // 0x23b7f0: 0x24420001
    ctx->pc = 0x23b7f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_23b7f4:
    // 0x23b7f4: 0xae623c04
    ctx->pc = 0x23b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15364), GPR_U32(ctx, 2));
label_23b7f8:
    // 0x23b7f8: 0x26520001
    ctx->pc = 0x23b7f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_23b7fc:
    // 0x23b7fc: 0x8e823c00
    ctx->pc = 0x23b7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 15360)));
label_23b800:
    // 0x23b800: 0x242102a
    ctx->pc = 0x23b800u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_23b804:
    // 0x23b804: 0x1440ffea
label_23b808:
    if (ctx->pc == 0x23B808u) {
        ctx->pc = 0x23B808u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 944));
        ctx->pc = 0x23B80Cu;
        goto label_23b80c;
    }
    ctx->pc = 0x23B804u;
    {
        const bool branch_taken_0x23b804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23B808u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 944));
        if (branch_taken_0x23b804) {
            ctx->pc = 0x23B7B0u;
            goto label_23b7b0;
        }
    }
    ctx->pc = 0x23B80Cu;
label_23b80c:
    // 0x23b80c: 0x3c020033
    ctx->pc = 0x23b80cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23b810:
    // 0x23b810: 0x2451dfd0
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294959056));
label_23b814:
    // 0x23b814: 0x3c020033
    ctx->pc = 0x23b814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23b818:
    // 0x23b818: 0x8c423c00
    ctx->pc = 0x23b818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_23b81c:
    // 0x23b81c: 0x1840018c
label_23b820:
    if (ctx->pc == 0x23B820u) {
        ctx->pc = 0x23B820u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B824u;
        goto label_23b824;
    }
    ctx->pc = 0x23B81Cu;
    {
        const bool branch_taken_0x23b81c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23B820u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b81c) {
            ctx->pc = 0x23BE50u;
            goto label_23be50;
        }
    }
    ctx->pc = 0x23B824u;
label_23b824:
    // 0x23b824: 0x0
    ctx->pc = 0x23b824u;
    // NOP
label_23b828:
    // 0x23b828: 0x96220324
    ctx->pc = 0x23b828u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
label_23b82c:
    // 0x23b82c: 0xa6220326
    ctx->pc = 0x23b82cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 806), (uint16_t)GPR_U32(ctx, 2));
label_23b830:
    // 0x23b830: 0x3c030031
    ctx->pc = 0x23b830u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_23b834:
    // 0x23b834: 0x8e220380
    ctx->pc = 0x23b834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_23b838:
    // 0x23b838: 0x8c63ffbc
    ctx->pc = 0x23b838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_23b83c:
    // 0x23b83c: 0x431021
    ctx->pc = 0x23b83cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b840:
    // 0x23b840: 0xae220380
    ctx->pc = 0x23b840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
label_23b844:
    // 0x23b844: 0x44800000
    ctx->pc = 0x23b844u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_23b848:
    // 0x23b848: 0xc6210390
    ctx->pc = 0x23b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b84c:
    // 0x23b84c: 0x46010034
    ctx->pc = 0x23b84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23b850:
    // 0x23b850: 0x0
    ctx->pc = 0x23b850u;
    // NOP
label_23b854:
    // 0x23b854: 0x45000004
label_23b858:
    if (ctx->pc == 0x23B858u) {
        ctx->pc = 0x23B858u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x23B85Cu;
        goto label_23b85c;
    }
    ctx->pc = 0x23B854u;
    {
        const bool branch_taken_0x23b854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B858u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23b854) {
            ctx->pc = 0x23B868u;
            goto label_23b868;
        }
    }
    ctx->pc = 0x23B85Cu;
label_23b85c:
    // 0x23b85c: 0xc440ffa8
    ctx->pc = 0x23b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b860:
    // 0x23b860: 0x46000801
    ctx->pc = 0x23b860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23b864:
    // 0x23b864: 0xe6200390
    ctx->pc = 0x23b864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
label_23b868:
    // 0x23b868: 0x8e220000
    ctx->pc = 0x23b868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b86c:
    // 0x23b86c: 0x54400003
label_23b870:
    if (ctx->pc == 0x23B870u) {
        ctx->pc = 0x23B870u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x23B874u;
        goto label_23b874;
    }
    ctx->pc = 0x23B86Cu;
    {
        const bool branch_taken_0x23b86c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23b86c) {
            ctx->pc = 0x23B870u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
            ctx->pc = 0x23B87Cu;
            goto label_23b87c;
        }
    }
    ctx->pc = 0x23B874u;
label_23b874:
    // 0x23b874: 0x24020003
    ctx->pc = 0x23b874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_23b878:
    // 0x23b878: 0xae2200e4
    ctx->pc = 0x23b878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
label_23b87c:
    // 0x23b87c: 0x8e2300c8
    ctx->pc = 0x23b87cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_23b880:
    // 0x23b880: 0x2c620009
    ctx->pc = 0x23b880u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
label_23b884:
    // 0x23b884: 0x104000f1
label_23b888:
    if (ctx->pc == 0x23B888u) {
        ctx->pc = 0x23B888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x23B88Cu;
        goto label_23b88c;
    }
    ctx->pc = 0x23B884u;
    {
        const bool branch_taken_0x23b884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x23b884) {
            ctx->pc = 0x23BC4Cu;
            goto label_23bc4c;
        }
    }
    ctx->pc = 0x23B88Cu;
label_23b88c:
    // 0x23b88c: 0x24427f90
    ctx->pc = 0x23b88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32656));
label_23b890:
    // 0x23b890: 0x31880
    ctx->pc = 0x23b890u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_23b894:
    // 0x23b894: 0x621821
    ctx->pc = 0x23b894u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b898:
    // 0x23b898: 0x8c620000
    ctx->pc = 0x23b898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b89c:
    // 0x23b89c: 0x400008
label_23b8a0:
    if (ctx->pc == 0x23B8A0u) {
        ctx->pc = 0x23B8A4u;
        goto label_23b8a4;
    }
    ctx->pc = 0x23B89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B588u: goto label_23b588;
            case 0x23B58Cu: goto label_23b58c;
            case 0x23B590u: goto label_23b590;
            case 0x23B594u: goto label_23b594;
            case 0x23B598u: goto label_23b598;
            case 0x23B59Cu: goto label_23b59c;
            case 0x23B5A0u: goto label_23b5a0;
            case 0x23B5A4u: goto label_23b5a4;
            case 0x23B5A8u: goto label_23b5a8;
            case 0x23B5ACu: goto label_23b5ac;
            case 0x23B5B0u: goto label_23b5b0;
            case 0x23B5B4u: goto label_23b5b4;
            case 0x23B5B8u: goto label_23b5b8;
            case 0x23B5BCu: goto label_23b5bc;
            case 0x23B5C0u: goto label_23b5c0;
            case 0x23B5C4u: goto label_23b5c4;
            case 0x23B5C8u: goto label_23b5c8;
            case 0x23B5CCu: goto label_23b5cc;
            case 0x23B5D0u: goto label_23b5d0;
            case 0x23B5D4u: goto label_23b5d4;
            case 0x23B5D8u: goto label_23b5d8;
            case 0x23B5DCu: goto label_23b5dc;
            case 0x23B5E0u: goto label_23b5e0;
            case 0x23B5E4u: goto label_23b5e4;
            case 0x23B5E8u: goto label_23b5e8;
            case 0x23B5ECu: goto label_23b5ec;
            case 0x23B5F0u: goto label_23b5f0;
            case 0x23B5F4u: goto label_23b5f4;
            case 0x23B5F8u: goto label_23b5f8;
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B600u: goto label_23b600;
            case 0x23B604u: goto label_23b604;
            case 0x23B608u: goto label_23b608;
            case 0x23B60Cu: goto label_23b60c;
            case 0x23B610u: goto label_23b610;
            case 0x23B614u: goto label_23b614;
            case 0x23B618u: goto label_23b618;
            case 0x23B61Cu: goto label_23b61c;
            case 0x23B620u: goto label_23b620;
            case 0x23B624u: goto label_23b624;
            case 0x23B628u: goto label_23b628;
            case 0x23B62Cu: goto label_23b62c;
            case 0x23B630u: goto label_23b630;
            case 0x23B634u: goto label_23b634;
            case 0x23B638u: goto label_23b638;
            case 0x23B63Cu: goto label_23b63c;
            case 0x23B640u: goto label_23b640;
            case 0x23B644u: goto label_23b644;
            case 0x23B648u: goto label_23b648;
            case 0x23B64Cu: goto label_23b64c;
            case 0x23B650u: goto label_23b650;
            case 0x23B654u: goto label_23b654;
            case 0x23B658u: goto label_23b658;
            case 0x23B65Cu: goto label_23b65c;
            case 0x23B660u: goto label_23b660;
            case 0x23B664u: goto label_23b664;
            case 0x23B668u: goto label_23b668;
            case 0x23B66Cu: goto label_23b66c;
            case 0x23B670u: goto label_23b670;
            case 0x23B674u: goto label_23b674;
            case 0x23B678u: goto label_23b678;
            case 0x23B67Cu: goto label_23b67c;
            case 0x23B680u: goto label_23b680;
            case 0x23B684u: goto label_23b684;
            case 0x23B688u: goto label_23b688;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B690u: goto label_23b690;
            case 0x23B694u: goto label_23b694;
            case 0x23B698u: goto label_23b698;
            case 0x23B69Cu: goto label_23b69c;
            case 0x23B6A0u: goto label_23b6a0;
            case 0x23B6A4u: goto label_23b6a4;
            case 0x23B6A8u: goto label_23b6a8;
            case 0x23B6ACu: goto label_23b6ac;
            case 0x23B6B0u: goto label_23b6b0;
            case 0x23B6B4u: goto label_23b6b4;
            case 0x23B6B8u: goto label_23b6b8;
            case 0x23B6BCu: goto label_23b6bc;
            case 0x23B6C0u: goto label_23b6c0;
            case 0x23B6C4u: goto label_23b6c4;
            case 0x23B6C8u: goto label_23b6c8;
            case 0x23B6CCu: goto label_23b6cc;
            case 0x23B6D0u: goto label_23b6d0;
            case 0x23B6D4u: goto label_23b6d4;
            case 0x23B6D8u: goto label_23b6d8;
            case 0x23B6DCu: goto label_23b6dc;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B6E4u: goto label_23b6e4;
            case 0x23B6E8u: goto label_23b6e8;
            case 0x23B6ECu: goto label_23b6ec;
            case 0x23B6F0u: goto label_23b6f0;
            case 0x23B6F4u: goto label_23b6f4;
            case 0x23B6F8u: goto label_23b6f8;
            case 0x23B6FCu: goto label_23b6fc;
            case 0x23B700u: goto label_23b700;
            case 0x23B704u: goto label_23b704;
            case 0x23B708u: goto label_23b708;
            case 0x23B70Cu: goto label_23b70c;
            case 0x23B710u: goto label_23b710;
            case 0x23B714u: goto label_23b714;
            case 0x23B718u: goto label_23b718;
            case 0x23B71Cu: goto label_23b71c;
            case 0x23B720u: goto label_23b720;
            case 0x23B724u: goto label_23b724;
            case 0x23B728u: goto label_23b728;
            case 0x23B72Cu: goto label_23b72c;
            case 0x23B730u: goto label_23b730;
            case 0x23B734u: goto label_23b734;
            case 0x23B738u: goto label_23b738;
            case 0x23B73Cu: goto label_23b73c;
            case 0x23B740u: goto label_23b740;
            case 0x23B744u: goto label_23b744;
            case 0x23B748u: goto label_23b748;
            case 0x23B74Cu: goto label_23b74c;
            case 0x23B750u: goto label_23b750;
            case 0x23B754u: goto label_23b754;
            case 0x23B758u: goto label_23b758;
            case 0x23B75Cu: goto label_23b75c;
            case 0x23B760u: goto label_23b760;
            case 0x23B764u: goto label_23b764;
            case 0x23B768u: goto label_23b768;
            case 0x23B76Cu: goto label_23b76c;
            case 0x23B770u: goto label_23b770;
            case 0x23B774u: goto label_23b774;
            case 0x23B778u: goto label_23b778;
            case 0x23B77Cu: goto label_23b77c;
            case 0x23B780u: goto label_23b780;
            case 0x23B784u: goto label_23b784;
            case 0x23B788u: goto label_23b788;
            case 0x23B78Cu: goto label_23b78c;
            case 0x23B790u: goto label_23b790;
            case 0x23B794u: goto label_23b794;
            case 0x23B798u: goto label_23b798;
            case 0x23B79Cu: goto label_23b79c;
            case 0x23B7A0u: goto label_23b7a0;
            case 0x23B7A4u: goto label_23b7a4;
            case 0x23B7A8u: goto label_23b7a8;
            case 0x23B7ACu: goto label_23b7ac;
            case 0x23B7B0u: goto label_23b7b0;
            case 0x23B7B4u: goto label_23b7b4;
            case 0x23B7B8u: goto label_23b7b8;
            case 0x23B7BCu: goto label_23b7bc;
            case 0x23B7C0u: goto label_23b7c0;
            case 0x23B7C4u: goto label_23b7c4;
            case 0x23B7C8u: goto label_23b7c8;
            case 0x23B7CCu: goto label_23b7cc;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B7D4u: goto label_23b7d4;
            case 0x23B7D8u: goto label_23b7d8;
            case 0x23B7DCu: goto label_23b7dc;
            case 0x23B7E0u: goto label_23b7e0;
            case 0x23B7E4u: goto label_23b7e4;
            case 0x23B7E8u: goto label_23b7e8;
            case 0x23B7ECu: goto label_23b7ec;
            case 0x23B7F0u: goto label_23b7f0;
            case 0x23B7F4u: goto label_23b7f4;
            case 0x23B7F8u: goto label_23b7f8;
            case 0x23B7FCu: goto label_23b7fc;
            case 0x23B800u: goto label_23b800;
            case 0x23B804u: goto label_23b804;
            case 0x23B808u: goto label_23b808;
            case 0x23B80Cu: goto label_23b80c;
            case 0x23B810u: goto label_23b810;
            case 0x23B814u: goto label_23b814;
            case 0x23B818u: goto label_23b818;
            case 0x23B81Cu: goto label_23b81c;
            case 0x23B820u: goto label_23b820;
            case 0x23B824u: goto label_23b824;
            case 0x23B828u: goto label_23b828;
            case 0x23B82Cu: goto label_23b82c;
            case 0x23B830u: goto label_23b830;
            case 0x23B834u: goto label_23b834;
            case 0x23B838u: goto label_23b838;
            case 0x23B83Cu: goto label_23b83c;
            case 0x23B840u: goto label_23b840;
            case 0x23B844u: goto label_23b844;
            case 0x23B848u: goto label_23b848;
            case 0x23B84Cu: goto label_23b84c;
            case 0x23B850u: goto label_23b850;
            case 0x23B854u: goto label_23b854;
            case 0x23B858u: goto label_23b858;
            case 0x23B85Cu: goto label_23b85c;
            case 0x23B860u: goto label_23b860;
            case 0x23B864u: goto label_23b864;
            case 0x23B868u: goto label_23b868;
            case 0x23B86Cu: goto label_23b86c;
            case 0x23B870u: goto label_23b870;
            case 0x23B874u: goto label_23b874;
            case 0x23B878u: goto label_23b878;
            case 0x23B87Cu: goto label_23b87c;
            case 0x23B880u: goto label_23b880;
            case 0x23B884u: goto label_23b884;
            case 0x23B888u: goto label_23b888;
            case 0x23B88Cu: goto label_23b88c;
            case 0x23B890u: goto label_23b890;
            case 0x23B894u: goto label_23b894;
            case 0x23B898u: goto label_23b898;
            case 0x23B89Cu: goto label_23b89c;
            case 0x23B8A0u: goto label_23b8a0;
            case 0x23B8A4u: goto label_23b8a4;
            case 0x23B8A8u: goto label_23b8a8;
            case 0x23B8ACu: goto label_23b8ac;
            case 0x23B8B0u: goto label_23b8b0;
            case 0x23B8B4u: goto label_23b8b4;
            case 0x23B8B8u: goto label_23b8b8;
            case 0x23B8BCu: goto label_23b8bc;
            case 0x23B8C0u: goto label_23b8c0;
            case 0x23B8C4u: goto label_23b8c4;
            case 0x23B8C8u: goto label_23b8c8;
            case 0x23B8CCu: goto label_23b8cc;
            case 0x23B8D0u: goto label_23b8d0;
            case 0x23B8D4u: goto label_23b8d4;
            case 0x23B8D8u: goto label_23b8d8;
            case 0x23B8DCu: goto label_23b8dc;
            case 0x23B8E0u: goto label_23b8e0;
            case 0x23B8E4u: goto label_23b8e4;
            case 0x23B8E8u: goto label_23b8e8;
            case 0x23B8ECu: goto label_23b8ec;
            case 0x23B8F0u: goto label_23b8f0;
            case 0x23B8F4u: goto label_23b8f4;
            case 0x23B8F8u: goto label_23b8f8;
            case 0x23B8FCu: goto label_23b8fc;
            case 0x23B900u: goto label_23b900;
            case 0x23B904u: goto label_23b904;
            case 0x23B908u: goto label_23b908;
            case 0x23B90Cu: goto label_23b90c;
            case 0x23B910u: goto label_23b910;
            case 0x23B914u: goto label_23b914;
            case 0x23B918u: goto label_23b918;
            case 0x23B91Cu: goto label_23b91c;
            case 0x23B920u: goto label_23b920;
            case 0x23B924u: goto label_23b924;
            case 0x23B928u: goto label_23b928;
            case 0x23B92Cu: goto label_23b92c;
            case 0x23B930u: goto label_23b930;
            case 0x23B934u: goto label_23b934;
            case 0x23B938u: goto label_23b938;
            case 0x23B93Cu: goto label_23b93c;
            case 0x23B940u: goto label_23b940;
            case 0x23B944u: goto label_23b944;
            case 0x23B948u: goto label_23b948;
            case 0x23B94Cu: goto label_23b94c;
            case 0x23B950u: goto label_23b950;
            case 0x23B954u: goto label_23b954;
            case 0x23B958u: goto label_23b958;
            case 0x23B95Cu: goto label_23b95c;
            case 0x23B960u: goto label_23b960;
            case 0x23B964u: goto label_23b964;
            case 0x23B968u: goto label_23b968;
            case 0x23B96Cu: goto label_23b96c;
            case 0x23B970u: goto label_23b970;
            case 0x23B974u: goto label_23b974;
            case 0x23B978u: goto label_23b978;
            case 0x23B97Cu: goto label_23b97c;
            case 0x23B980u: goto label_23b980;
            case 0x23B984u: goto label_23b984;
            case 0x23B988u: goto label_23b988;
            case 0x23B98Cu: goto label_23b98c;
            case 0x23B990u: goto label_23b990;
            case 0x23B994u: goto label_23b994;
            case 0x23B998u: goto label_23b998;
            case 0x23B99Cu: goto label_23b99c;
            case 0x23B9A0u: goto label_23b9a0;
            case 0x23B9A4u: goto label_23b9a4;
            case 0x23B9A8u: goto label_23b9a8;
            case 0x23B9ACu: goto label_23b9ac;
            case 0x23B9B0u: goto label_23b9b0;
            case 0x23B9B4u: goto label_23b9b4;
            case 0x23B9B8u: goto label_23b9b8;
            case 0x23B9BCu: goto label_23b9bc;
            case 0x23B9C0u: goto label_23b9c0;
            case 0x23B9C4u: goto label_23b9c4;
            case 0x23B9C8u: goto label_23b9c8;
            case 0x23B9CCu: goto label_23b9cc;
            case 0x23B9D0u: goto label_23b9d0;
            case 0x23B9D4u: goto label_23b9d4;
            case 0x23B9D8u: goto label_23b9d8;
            case 0x23B9DCu: goto label_23b9dc;
            case 0x23B9E0u: goto label_23b9e0;
            case 0x23B9E4u: goto label_23b9e4;
            case 0x23B9E8u: goto label_23b9e8;
            case 0x23B9ECu: goto label_23b9ec;
            case 0x23B9F0u: goto label_23b9f0;
            case 0x23B9F4u: goto label_23b9f4;
            case 0x23B9F8u: goto label_23b9f8;
            case 0x23B9FCu: goto label_23b9fc;
            case 0x23BA00u: goto label_23ba00;
            case 0x23BA04u: goto label_23ba04;
            case 0x23BA08u: goto label_23ba08;
            case 0x23BA0Cu: goto label_23ba0c;
            case 0x23BA10u: goto label_23ba10;
            case 0x23BA14u: goto label_23ba14;
            case 0x23BA18u: goto label_23ba18;
            case 0x23BA1Cu: goto label_23ba1c;
            case 0x23BA20u: goto label_23ba20;
            case 0x23BA24u: goto label_23ba24;
            case 0x23BA28u: goto label_23ba28;
            case 0x23BA2Cu: goto label_23ba2c;
            case 0x23BA30u: goto label_23ba30;
            case 0x23BA34u: goto label_23ba34;
            case 0x23BA38u: goto label_23ba38;
            case 0x23BA3Cu: goto label_23ba3c;
            case 0x23BA40u: goto label_23ba40;
            case 0x23BA44u: goto label_23ba44;
            case 0x23BA48u: goto label_23ba48;
            case 0x23BA4Cu: goto label_23ba4c;
            case 0x23BA50u: goto label_23ba50;
            case 0x23BA54u: goto label_23ba54;
            case 0x23BA58u: goto label_23ba58;
            case 0x23BA5Cu: goto label_23ba5c;
            case 0x23BA60u: goto label_23ba60;
            case 0x23BA64u: goto label_23ba64;
            case 0x23BA68u: goto label_23ba68;
            case 0x23BA6Cu: goto label_23ba6c;
            case 0x23BA70u: goto label_23ba70;
            case 0x23BA74u: goto label_23ba74;
            case 0x23BA78u: goto label_23ba78;
            case 0x23BA7Cu: goto label_23ba7c;
            case 0x23BA80u: goto label_23ba80;
            case 0x23BA84u: goto label_23ba84;
            case 0x23BA88u: goto label_23ba88;
            case 0x23BA8Cu: goto label_23ba8c;
            case 0x23BA90u: goto label_23ba90;
            case 0x23BA94u: goto label_23ba94;
            case 0x23BA98u: goto label_23ba98;
            case 0x23BA9Cu: goto label_23ba9c;
            case 0x23BAA0u: goto label_23baa0;
            case 0x23BAA4u: goto label_23baa4;
            case 0x23BAA8u: goto label_23baa8;
            case 0x23BAACu: goto label_23baac;
            case 0x23BAB0u: goto label_23bab0;
            case 0x23BAB4u: goto label_23bab4;
            case 0x23BAB8u: goto label_23bab8;
            case 0x23BABCu: goto label_23babc;
            case 0x23BAC0u: goto label_23bac0;
            case 0x23BAC4u: goto label_23bac4;
            case 0x23BAC8u: goto label_23bac8;
            case 0x23BACCu: goto label_23bacc;
            case 0x23BAD0u: goto label_23bad0;
            case 0x23BAD4u: goto label_23bad4;
            case 0x23BAD8u: goto label_23bad8;
            case 0x23BADCu: goto label_23badc;
            case 0x23BAE0u: goto label_23bae0;
            case 0x23BAE4u: goto label_23bae4;
            case 0x23BAE8u: goto label_23bae8;
            case 0x23BAECu: goto label_23baec;
            case 0x23BAF0u: goto label_23baf0;
            case 0x23BAF4u: goto label_23baf4;
            case 0x23BAF8u: goto label_23baf8;
            case 0x23BAFCu: goto label_23bafc;
            case 0x23BB00u: goto label_23bb00;
            case 0x23BB04u: goto label_23bb04;
            case 0x23BB08u: goto label_23bb08;
            case 0x23BB0Cu: goto label_23bb0c;
            case 0x23BB10u: goto label_23bb10;
            case 0x23BB14u: goto label_23bb14;
            case 0x23BB18u: goto label_23bb18;
            case 0x23BB1Cu: goto label_23bb1c;
            case 0x23BB20u: goto label_23bb20;
            case 0x23BB24u: goto label_23bb24;
            case 0x23BB28u: goto label_23bb28;
            case 0x23BB2Cu: goto label_23bb2c;
            case 0x23BB30u: goto label_23bb30;
            case 0x23BB34u: goto label_23bb34;
            case 0x23BB38u: goto label_23bb38;
            case 0x23BB3Cu: goto label_23bb3c;
            case 0x23BB40u: goto label_23bb40;
            case 0x23BB44u: goto label_23bb44;
            case 0x23BB48u: goto label_23bb48;
            case 0x23BB4Cu: goto label_23bb4c;
            case 0x23BB50u: goto label_23bb50;
            case 0x23BB54u: goto label_23bb54;
            case 0x23BB58u: goto label_23bb58;
            case 0x23BB5Cu: goto label_23bb5c;
            case 0x23BB60u: goto label_23bb60;
            case 0x23BB64u: goto label_23bb64;
            case 0x23BB68u: goto label_23bb68;
            case 0x23BB6Cu: goto label_23bb6c;
            case 0x23BB70u: goto label_23bb70;
            case 0x23BB74u: goto label_23bb74;
            case 0x23BB78u: goto label_23bb78;
            case 0x23BB7Cu: goto label_23bb7c;
            case 0x23BB80u: goto label_23bb80;
            case 0x23BB84u: goto label_23bb84;
            case 0x23BB88u: goto label_23bb88;
            case 0x23BB8Cu: goto label_23bb8c;
            case 0x23BB90u: goto label_23bb90;
            case 0x23BB94u: goto label_23bb94;
            case 0x23BB98u: goto label_23bb98;
            case 0x23BB9Cu: goto label_23bb9c;
            case 0x23BBA0u: goto label_23bba0;
            case 0x23BBA4u: goto label_23bba4;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BBACu: goto label_23bbac;
            case 0x23BBB0u: goto label_23bbb0;
            case 0x23BBB4u: goto label_23bbb4;
            case 0x23BBB8u: goto label_23bbb8;
            case 0x23BBBCu: goto label_23bbbc;
            case 0x23BBC0u: goto label_23bbc0;
            case 0x23BBC4u: goto label_23bbc4;
            case 0x23BBC8u: goto label_23bbc8;
            case 0x23BBCCu: goto label_23bbcc;
            case 0x23BBD0u: goto label_23bbd0;
            case 0x23BBD4u: goto label_23bbd4;
            case 0x23BBD8u: goto label_23bbd8;
            case 0x23BBDCu: goto label_23bbdc;
            case 0x23BBE0u: goto label_23bbe0;
            case 0x23BBE4u: goto label_23bbe4;
            case 0x23BBE8u: goto label_23bbe8;
            case 0x23BBECu: goto label_23bbec;
            case 0x23BBF0u: goto label_23bbf0;
            case 0x23BBF4u: goto label_23bbf4;
            case 0x23BBF8u: goto label_23bbf8;
            case 0x23BBFCu: goto label_23bbfc;
            case 0x23BC00u: goto label_23bc00;
            case 0x23BC04u: goto label_23bc04;
            case 0x23BC08u: goto label_23bc08;
            case 0x23BC0Cu: goto label_23bc0c;
            case 0x23BC10u: goto label_23bc10;
            case 0x23BC14u: goto label_23bc14;
            case 0x23BC18u: goto label_23bc18;
            case 0x23BC1Cu: goto label_23bc1c;
            case 0x23BC20u: goto label_23bc20;
            case 0x23BC24u: goto label_23bc24;
            case 0x23BC28u: goto label_23bc28;
            case 0x23BC2Cu: goto label_23bc2c;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BC34u: goto label_23bc34;
            case 0x23BC38u: goto label_23bc38;
            case 0x23BC3Cu: goto label_23bc3c;
            case 0x23BC40u: goto label_23bc40;
            case 0x23BC44u: goto label_23bc44;
            case 0x23BC48u: goto label_23bc48;
            case 0x23BC4Cu: goto label_23bc4c;
            case 0x23BC50u: goto label_23bc50;
            case 0x23BC54u: goto label_23bc54;
            case 0x23BC58u: goto label_23bc58;
            case 0x23BC5Cu: goto label_23bc5c;
            case 0x23BC60u: goto label_23bc60;
            case 0x23BC64u: goto label_23bc64;
            case 0x23BC68u: goto label_23bc68;
            case 0x23BC6Cu: goto label_23bc6c;
            case 0x23BC70u: goto label_23bc70;
            case 0x23BC74u: goto label_23bc74;
            case 0x23BC78u: goto label_23bc78;
            case 0x23BC7Cu: goto label_23bc7c;
            case 0x23BC80u: goto label_23bc80;
            case 0x23BC84u: goto label_23bc84;
            case 0x23BC88u: goto label_23bc88;
            case 0x23BC8Cu: goto label_23bc8c;
            case 0x23BC90u: goto label_23bc90;
            case 0x23BC94u: goto label_23bc94;
            case 0x23BC98u: goto label_23bc98;
            case 0x23BC9Cu: goto label_23bc9c;
            case 0x23BCA0u: goto label_23bca0;
            case 0x23BCA4u: goto label_23bca4;
            case 0x23BCA8u: goto label_23bca8;
            case 0x23BCACu: goto label_23bcac;
            case 0x23BCB0u: goto label_23bcb0;
            case 0x23BCB4u: goto label_23bcb4;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BCBCu: goto label_23bcbc;
            case 0x23BCC0u: goto label_23bcc0;
            case 0x23BCC4u: goto label_23bcc4;
            case 0x23BCC8u: goto label_23bcc8;
            case 0x23BCCCu: goto label_23bccc;
            case 0x23BCD0u: goto label_23bcd0;
            case 0x23BCD4u: goto label_23bcd4;
            case 0x23BCD8u: goto label_23bcd8;
            case 0x23BCDCu: goto label_23bcdc;
            case 0x23BCE0u: goto label_23bce0;
            case 0x23BCE4u: goto label_23bce4;
            case 0x23BCE8u: goto label_23bce8;
            case 0x23BCECu: goto label_23bcec;
            case 0x23BCF0u: goto label_23bcf0;
            case 0x23BCF4u: goto label_23bcf4;
            case 0x23BCF8u: goto label_23bcf8;
            case 0x23BCFCu: goto label_23bcfc;
            case 0x23BD00u: goto label_23bd00;
            case 0x23BD04u: goto label_23bd04;
            case 0x23BD08u: goto label_23bd08;
            case 0x23BD0Cu: goto label_23bd0c;
            case 0x23BD10u: goto label_23bd10;
            case 0x23BD14u: goto label_23bd14;
            case 0x23BD18u: goto label_23bd18;
            case 0x23BD1Cu: goto label_23bd1c;
            case 0x23BD20u: goto label_23bd20;
            case 0x23BD24u: goto label_23bd24;
            case 0x23BD28u: goto label_23bd28;
            case 0x23BD2Cu: goto label_23bd2c;
            case 0x23BD30u: goto label_23bd30;
            case 0x23BD34u: goto label_23bd34;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BD3Cu: goto label_23bd3c;
            case 0x23BD40u: goto label_23bd40;
            case 0x23BD44u: goto label_23bd44;
            case 0x23BD48u: goto label_23bd48;
            case 0x23BD4Cu: goto label_23bd4c;
            case 0x23BD50u: goto label_23bd50;
            case 0x23BD54u: goto label_23bd54;
            case 0x23BD58u: goto label_23bd58;
            case 0x23BD5Cu: goto label_23bd5c;
            case 0x23BD60u: goto label_23bd60;
            case 0x23BD64u: goto label_23bd64;
            case 0x23BD68u: goto label_23bd68;
            case 0x23BD6Cu: goto label_23bd6c;
            case 0x23BD70u: goto label_23bd70;
            case 0x23BD74u: goto label_23bd74;
            case 0x23BD78u: goto label_23bd78;
            case 0x23BD7Cu: goto label_23bd7c;
            case 0x23BD80u: goto label_23bd80;
            case 0x23BD84u: goto label_23bd84;
            case 0x23BD88u: goto label_23bd88;
            case 0x23BD8Cu: goto label_23bd8c;
            case 0x23BD90u: goto label_23bd90;
            case 0x23BD94u: goto label_23bd94;
            case 0x23BD98u: goto label_23bd98;
            case 0x23BD9Cu: goto label_23bd9c;
            case 0x23BDA0u: goto label_23bda0;
            case 0x23BDA4u: goto label_23bda4;
            case 0x23BDA8u: goto label_23bda8;
            case 0x23BDACu: goto label_23bdac;
            case 0x23BDB0u: goto label_23bdb0;
            case 0x23BDB4u: goto label_23bdb4;
            case 0x23BDB8u: goto label_23bdb8;
            case 0x23BDBCu: goto label_23bdbc;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BDC4u: goto label_23bdc4;
            case 0x23BDC8u: goto label_23bdc8;
            case 0x23BDCCu: goto label_23bdcc;
            case 0x23BDD0u: goto label_23bdd0;
            case 0x23BDD4u: goto label_23bdd4;
            case 0x23BDD8u: goto label_23bdd8;
            case 0x23BDDCu: goto label_23bddc;
            case 0x23BDE0u: goto label_23bde0;
            case 0x23BDE4u: goto label_23bde4;
            case 0x23BDE8u: goto label_23bde8;
            case 0x23BDECu: goto label_23bdec;
            case 0x23BDF0u: goto label_23bdf0;
            case 0x23BDF4u: goto label_23bdf4;
            case 0x23BDF8u: goto label_23bdf8;
            case 0x23BDFCu: goto label_23bdfc;
            case 0x23BE00u: goto label_23be00;
            case 0x23BE04u: goto label_23be04;
            case 0x23BE08u: goto label_23be08;
            case 0x23BE0Cu: goto label_23be0c;
            case 0x23BE10u: goto label_23be10;
            case 0x23BE14u: goto label_23be14;
            case 0x23BE18u: goto label_23be18;
            case 0x23BE1Cu: goto label_23be1c;
            case 0x23BE20u: goto label_23be20;
            case 0x23BE24u: goto label_23be24;
            case 0x23BE28u: goto label_23be28;
            case 0x23BE2Cu: goto label_23be2c;
            case 0x23BE30u: goto label_23be30;
            case 0x23BE34u: goto label_23be34;
            case 0x23BE38u: goto label_23be38;
            case 0x23BE3Cu: goto label_23be3c;
            case 0x23BE40u: goto label_23be40;
            case 0x23BE44u: goto label_23be44;
            case 0x23BE48u: goto label_23be48;
            case 0x23BE4Cu: goto label_23be4c;
            case 0x23BE50u: goto label_23be50;
            case 0x23BE54u: goto label_23be54;
            case 0x23BE58u: goto label_23be58;
            case 0x23BE5Cu: goto label_23be5c;
            case 0x23BE60u: goto label_23be60;
            case 0x23BE64u: goto label_23be64;
            case 0x23BE68u: goto label_23be68;
            case 0x23BE6Cu: goto label_23be6c;
            case 0x23BE70u: goto label_23be70;
            case 0x23BE74u: goto label_23be74;
            case 0x23BE78u: goto label_23be78;
            case 0x23BE7Cu: goto label_23be7c;
            case 0x23BE80u: goto label_23be80;
            case 0x23BE84u: goto label_23be84;
            case 0x23BE88u: goto label_23be88;
            case 0x23BE8Cu: goto label_23be8c;
            case 0x23BE90u: goto label_23be90;
            case 0x23BE94u: goto label_23be94;
            case 0x23BE98u: goto label_23be98;
            case 0x23BE9Cu: goto label_23be9c;
            case 0x23BEA0u: goto label_23bea0;
            case 0x23BEA4u: goto label_23bea4;
            case 0x23BEA8u: goto label_23bea8;
            case 0x23BEACu: goto label_23beac;
            case 0x23BEB0u: goto label_23beb0;
            case 0x23BEB4u: goto label_23beb4;
            case 0x23BEB8u: goto label_23beb8;
            case 0x23BEBCu: goto label_23bebc;
            case 0x23BEC0u: goto label_23bec0;
            case 0x23BEC4u: goto label_23bec4;
            case 0x23BEC8u: goto label_23bec8;
            case 0x23BECCu: goto label_23becc;
            case 0x23BED0u: goto label_23bed0;
            case 0x23BED4u: goto label_23bed4;
            case 0x23BED8u: goto label_23bed8;
            case 0x23BEDCu: goto label_23bedc;
            case 0x23BEE0u: goto label_23bee0;
            case 0x23BEE4u: goto label_23bee4;
            case 0x23BEE8u: goto label_23bee8;
            case 0x23BEECu: goto label_23beec;
            case 0x23BEF0u: goto label_23bef0;
            case 0x23BEF4u: goto label_23bef4;
            case 0x23BEF8u: goto label_23bef8;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF00u: goto label_23bf00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B8A4u;
label_23b8a4:
    // 0x23b8a4: 0x3c020036
    ctx->pc = 0x23b8a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_23b8a8:
    // 0x23b8a8: 0x8e230000
    ctx->pc = 0x23b8a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b8ac:
    // 0x23b8ac: 0x8c42d934
    ctx->pc = 0x23b8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_23b8b0:
    // 0x23b8b0: 0x106200e6
label_23b8b4:
    if (ctx->pc == 0x23B8B4u) {
        ctx->pc = 0x23B8B4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x23B8B8u;
        goto label_23b8b8;
    }
    ctx->pc = 0x23B8B0u;
    {
        const bool branch_taken_0x23b8b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23B8B4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x23b8b0) {
            ctx->pc = 0x23BC4Cu;
            goto label_23bc4c;
        }
    }
    ctx->pc = 0x23B8B8u;
label_23b8b8:
    // 0x23b8b8: 0x26240010
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
label_23b8bc:
    // 0x23b8bc: 0x26250240
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 576));
label_23b8c0:
    // 0x23b8c0: 0xc080d02
label_23b8c4:
    if (ctx->pc == 0x23B8C4u) {
        ctx->pc = 0x23B8C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
        ctx->pc = 0x23B8C8u;
        goto label_23b8c8;
    }
    ctx->pc = 0x23B8C0u;
    SET_GPR_U32(ctx, 31, 0x23B8C8u);
    ctx->pc = 0x23B8C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8C8u; }
    }
    if (ctx->pc != 0x23B8C8u) { return; }
    ctx->pc = 0x23B8C8u;
label_23b8c8:
    // 0x23b8c8: 0x3c020032
    ctx->pc = 0x23b8c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_23b8cc:
    // 0x23b8cc: 0x8c4207f8
    ctx->pc = 0x23b8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
label_23b8d0:
    // 0x23b8d0: 0x1040000c
label_23b8d4:
    if (ctx->pc == 0x23B8D4u) {
        ctx->pc = 0x23B8D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x23B8D8u;
        goto label_23b8d8;
    }
    ctx->pc = 0x23B8D0u;
    {
        const bool branch_taken_0x23b8d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B8D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23b8d0) {
            ctx->pc = 0x23B904u;
            goto label_23b904;
        }
    }
    ctx->pc = 0x23B8D8u;
label_23b8d8:
    // 0x23b8d8: 0xc62000a4
    ctx->pc = 0x23b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b8dc:
    // 0x23b8dc: 0xc441ffa8
    ctx->pc = 0x23b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b8e0:
    // 0x23b8e0: 0x46010000
    ctx->pc = 0x23b8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23b8e4:
    // 0x23b8e4: 0xe62000a4
    ctx->pc = 0x23b8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_23b8e8:
    // 0x23b8e8: 0xc08eb84
label_23b8ec:
    if (ctx->pc == 0x23B8ECu) {
        ctx->pc = 0x23B8ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B8F0u;
        goto label_23b8f0;
    }
    ctx->pc = 0x23B8E8u;
    SET_GPR_U32(ctx, 31, 0x23B8F0u);
    ctx->pc = 0x23B8ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_knockback_control_0x23ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8F0u; }
    }
    if (ctx->pc != 0x23B8F0u) { return; }
    ctx->pc = 0x23B8F0u;
label_23b8f0:
    // 0x23b8f0: 0x44806000
    ctx->pc = 0x23b8f0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_23b8f4:
    // 0x23b8f4: 0xc090d78
label_23b8f8:
    if (ctx->pc == 0x23B8F8u) {
        ctx->pc = 0x23B8F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B8FCu;
        goto label_23b8fc;
    }
    ctx->pc = 0x23B8F4u;
    SET_GPR_U32(ctx, 31, 0x23B8FCu);
    ctx->pc = 0x23B8F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2435E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_collide_0x2435e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8FCu; }
    }
    if (ctx->pc != 0x23B8FCu) { return; }
    ctx->pc = 0x23B8FCu;
label_23b8fc:
    // 0x23b8fc: 0x10000042
label_23b900:
    if (ctx->pc == 0x23B900u) {
        ctx->pc = 0x23B900u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 504));
        ctx->pc = 0x23B904u;
        goto label_23b904;
    }
    ctx->pc = 0x23B8FCu;
    {
        const bool branch_taken_0x23b8fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B900u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 504));
        if (branch_taken_0x23b8fc) {
            ctx->pc = 0x23BA08u;
            goto label_23ba08;
        }
    }
    ctx->pc = 0x23B904u;
label_23b904:
    // 0x23b904: 0x3c020036
    ctx->pc = 0x23b904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_23b908:
    // 0x23b908: 0x8c42dbac
    ctx->pc = 0x23b908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
label_23b90c:
    // 0x23b90c: 0x1040000c
label_23b910:
    if (ctx->pc == 0x23B910u) {
        ctx->pc = 0x23B914u;
        goto label_23b914;
    }
    ctx->pc = 0x23B90Cu;
    {
        const bool branch_taken_0x23b90c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23b90c) {
            ctx->pc = 0x23B940u;
            goto label_23b940;
        }
    }
    ctx->pc = 0x23B914u;
label_23b914:
    // 0x23b914: 0xae2000e4
    ctx->pc = 0x23b914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_23b918:
    // 0x23b918: 0xc09e494
label_23b91c:
    if (ctx->pc == 0x23B91Cu) {
        ctx->pc = 0x23B91Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B920u;
        goto label_23b920;
    }
    ctx->pc = 0x23B918u;
    SET_GPR_U32(ctx, 31, 0x23B920u);
    ctx->pc = 0x23B91Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279250u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoEnemyAction_0x279250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B920u; }
    }
    if (ctx->pc != 0x23B920u) { return; }
    ctx->pc = 0x23B920u;
label_23b920:
    // 0x23b920: 0xae2200e0
    ctx->pc = 0x23b920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_23b924:
    // 0x23b924: 0x44806000
    ctx->pc = 0x23b924u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_23b928:
    // 0x23b928: 0xc090d78
label_23b92c:
    if (ctx->pc == 0x23B92Cu) {
        ctx->pc = 0x23B92Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B930u;
        goto label_23b930;
    }
    ctx->pc = 0x23B928u;
    SET_GPR_U32(ctx, 31, 0x23B930u);
    ctx->pc = 0x23B92Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2435E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_collide_0x2435e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B930u; }
    }
    if (ctx->pc != 0x23B930u) { return; }
    ctx->pc = 0x23B930u;
label_23b930:
    // 0x23b930: 0xc08eb84
label_23b934:
    if (ctx->pc == 0x23B934u) {
        ctx->pc = 0x23B934u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B938u;
        goto label_23b938;
    }
    ctx->pc = 0x23B930u;
    SET_GPR_U32(ctx, 31, 0x23B938u);
    ctx->pc = 0x23B934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_knockback_control_0x23ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B938u; }
    }
    if (ctx->pc != 0x23B938u) { return; }
    ctx->pc = 0x23B938u;
label_23b938:
    // 0x23b938: 0x10000033
label_23b93c:
    if (ctx->pc == 0x23B93Cu) {
        ctx->pc = 0x23B93Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 504));
        ctx->pc = 0x23B940u;
        goto label_23b940;
    }
    ctx->pc = 0x23B938u;
    {
        const bool branch_taken_0x23b938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B93Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 504));
        if (branch_taken_0x23b938) {
            ctx->pc = 0x23BA08u;
            goto label_23ba08;
        }
    }
    ctx->pc = 0x23B940u;
label_23b940:
    // 0x23b940: 0xc08dcee
label_23b944:
    if (ctx->pc == 0x23B944u) {
        ctx->pc = 0x23B944u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B948u;
        goto label_23b948;
    }
    ctx->pc = 0x23B940u;
    SET_GPR_U32(ctx, 31, 0x23B948u);
    ctx->pc = 0x23B944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2373B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_closest_player_0x2373b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B948u; }
    }
    if (ctx->pc != 0x23B948u) { return; }
    ctx->pc = 0x23B948u;
label_23b948:
    // 0x23b948: 0xc08ea84
label_23b94c:
    if (ctx->pc == 0x23B94Cu) {
        ctx->pc = 0x23B94Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B950u;
        goto label_23b950;
    }
    ctx->pc = 0x23B948u;
    SET_GPR_U32(ctx, 31, 0x23B950u);
    ctx->pc = 0x23B94Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23AA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_attack_control_0x23aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B950u; }
    }
    if (ctx->pc != 0x23B950u) { return; }
    ctx->pc = 0x23B950u;
label_23b950:
    // 0x23b950: 0xc08eb84
label_23b954:
    if (ctx->pc == 0x23B954u) {
        ctx->pc = 0x23B954u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B958u;
        goto label_23b958;
    }
    ctx->pc = 0x23B950u;
    SET_GPR_U32(ctx, 31, 0x23B958u);
    ctx->pc = 0x23B954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_knockback_control_0x23ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B958u; }
    }
    if (ctx->pc != 0x23B958u) { return; }
    ctx->pc = 0x23B958u;
label_23b958:
    // 0x23b958: 0x40034800
    ctx->pc = 0x23b958u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_23b95c:
    // 0x23b95c: 0x3c10003a
    ctx->pc = 0x23b95cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_23b960:
    // 0x23b960: 0x8e0221d0
    ctx->pc = 0x23b960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_23b964:
    // 0x23b964: 0xac430148
    ctx->pc = 0x23b964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 3));
label_23b968:
    // 0x23b968: 0xc08eca0
label_23b96c:
    if (ctx->pc == 0x23B96Cu) {
        ctx->pc = 0x23B96Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B970u;
        goto label_23b970;
    }
    ctx->pc = 0x23B968u;
    SET_GPR_U32(ctx, 31, 0x23B970u);
    ctx->pc = 0x23B96Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23B280u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_ai_control_0x23b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B970u; }
    }
    if (ctx->pc != 0x23B970u) { return; }
    ctx->pc = 0x23B970u;
label_23b970:
    // 0x23b970: 0x544000b7
label_23b974:
    if (ctx->pc == 0x23B974u) {
        ctx->pc = 0x23B974u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->pc = 0x23B978u;
        goto label_23b978;
    }
    ctx->pc = 0x23B970u;
    {
        const bool branch_taken_0x23b970 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23b970) {
            ctx->pc = 0x23B974u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23B978u;
label_23b978:
    // 0x23b978: 0x40034800
    ctx->pc = 0x23b978u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_23b97c:
    // 0x23b97c: 0x8e0421d0
    ctx->pc = 0x23b97cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_23b980:
    // 0x23b980: 0x8c820148
    ctx->pc = 0x23b980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_23b984:
    // 0x23b984: 0x621823
    ctx->pc = 0x23b984u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b988:
    // 0x23b988: 0x8c820140
    ctx->pc = 0x23b988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_23b98c:
    // 0x23b98c: 0x621821
    ctx->pc = 0x23b98cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b990:
    // 0x23b990: 0xac830140
    ctx->pc = 0x23b990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 3));
label_23b994:
    // 0x23b994: 0x8c820144
    ctx->pc = 0x23b994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 324)));
label_23b998:
    // 0x23b998: 0x24420001
    ctx->pc = 0x23b998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_23b99c:
    // 0x23b99c: 0xac820144
    ctx->pc = 0x23b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
label_23b9a0:
    // 0x23b9a0: 0x40024800
    ctx->pc = 0x23b9a0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_23b9a4:
    // 0x23b9a4: 0xac820358
    ctx->pc = 0x23b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 2));
label_23b9a8:
    // 0x23b9a8: 0x8e220080
    ctx->pc = 0x23b9a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_23b9ac:
    // 0x23b9ac: 0x50400005
label_23b9b0:
    if (ctx->pc == 0x23B9B0u) {
        ctx->pc = 0x23B9B0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->pc = 0x23B9B4u;
        goto label_23b9b4;
    }
    ctx->pc = 0x23B9ACu;
    {
        const bool branch_taken_0x23b9ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23b9ac) {
            ctx->pc = 0x23B9B0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->pc = 0x23B9C4u;
            goto label_23b9c4;
        }
    }
    ctx->pc = 0x23B9B4u;
label_23b9b4:
    // 0x23b9b4: 0xc09e494
label_23b9b8:
    if (ctx->pc == 0x23B9B8u) {
        ctx->pc = 0x23B9B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B9BCu;
        goto label_23b9bc;
    }
    ctx->pc = 0x23B9B4u;
    SET_GPR_U32(ctx, 31, 0x23B9BCu);
    ctx->pc = 0x23B9B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279250u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoEnemyAction_0x279250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B9BCu; }
    }
    if (ctx->pc != 0x23B9BCu) { return; }
    ctx->pc = 0x23B9BCu;
label_23b9bc:
    // 0x23b9bc: 0xae2200e0
    ctx->pc = 0x23b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_23b9c0:
    // 0x23b9c0: 0x8e2300e0
    ctx->pc = 0x23b9c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_23b9c4:
    // 0x23b9c4: 0x8e2400e4
    ctx->pc = 0x23b9c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_23b9c8:
    // 0x23b9c8: 0x2402ffff
    ctx->pc = 0x23b9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23b9cc:
    // 0x23b9cc: 0x641826
    ctx->pc = 0x23b9ccu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23b9d0:
    // 0x23b9d0: 0x3100b
    ctx->pc = 0x23b9d0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_23b9d4:
    // 0x23b9d4: 0xae2203a4
    ctx->pc = 0x23b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 2));
label_23b9d8:
    // 0x23b9d8: 0x40034800
    ctx->pc = 0x23b9d8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_23b9dc:
    // 0x23b9dc: 0x3c02003a
    ctx->pc = 0x23b9dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_23b9e0:
    // 0x23b9e0: 0x8c4421d0
    ctx->pc = 0x23b9e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
label_23b9e4:
    // 0x23b9e4: 0x8c820358
    ctx->pc = 0x23b9e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 856)));
label_23b9e8:
    // 0x23b9e8: 0x621823
    ctx->pc = 0x23b9e8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b9ec:
    // 0x23b9ec: 0x8c820350
    ctx->pc = 0x23b9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 848)));
label_23b9f0:
    // 0x23b9f0: 0x621821
    ctx->pc = 0x23b9f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b9f4:
    // 0x23b9f4: 0xac830350
    ctx->pc = 0x23b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 848), GPR_U32(ctx, 3));
label_23b9f8:
    // 0x23b9f8: 0x8c820354
    ctx->pc = 0x23b9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 852)));
label_23b9fc:
    // 0x23b9fc: 0x24420001
    ctx->pc = 0x23b9fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_23ba00:
    // 0x23ba00: 0xac820354
    ctx->pc = 0x23ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 852), GPR_U32(ctx, 2));
label_23ba04:
    // 0x23ba04: 0x262401f8
    ctx->pc = 0x23ba04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 504));
label_23ba08:
    // 0x23ba08: 0x8e250070
    ctx->pc = 0x23ba08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23ba0c:
    // 0x23ba0c: 0xc09ff98
label_23ba10:
    if (ctx->pc == 0x23BA10u) {
        ctx->pc = 0x23BA10u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BA14u;
        goto label_23ba14;
    }
    ctx->pc = 0x23BA0Cu;
    SET_GPR_U32(ctx, 31, 0x23BA14u);
    ctx->pc = 0x23BA10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessSkinFX_0x27fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA14u; }
    }
    if (ctx->pc != 0x23BA14u) { return; }
    ctx->pc = 0x23BA14u;
label_23ba14:
    // 0x23ba14: 0xc080ce2
label_23ba18:
    if (ctx->pc == 0x23BA18u) {
        ctx->pc = 0x23BA18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x23BA1Cu;
        goto label_23ba1c;
    }
    ctx->pc = 0x23BA14u;
    SET_GPR_U32(ctx, 31, 0x23BA1Cu);
    ctx->pc = 0x23BA18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA1Cu; }
    }
    if (ctx->pc != 0x23BA1Cu) { return; }
    ctx->pc = 0x23BA1Cu;
label_23ba1c:
    // 0x23ba1c: 0x1000008c
label_23ba20:
    if (ctx->pc == 0x23BA20u) {
        ctx->pc = 0x23BA20u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->pc = 0x23BA24u;
        goto label_23ba24;
    }
    ctx->pc = 0x23BA1Cu;
    {
        const bool branch_taken_0x23ba1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BA20u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
        if (branch_taken_0x23ba1c) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BA24u;
label_23ba24:
    // 0x23ba24: 0x26240010
    ctx->pc = 0x23ba24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
label_23ba28:
    // 0x23ba28: 0x26250240
    ctx->pc = 0x23ba28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 576));
label_23ba2c:
    // 0x23ba2c: 0xc080d02
label_23ba30:
    if (ctx->pc == 0x23BA30u) {
        ctx->pc = 0x23BA30u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
        ctx->pc = 0x23BA34u;
        goto label_23ba34;
    }
    ctx->pc = 0x23BA2Cu;
    SET_GPR_U32(ctx, 31, 0x23BA34u);
    ctx->pc = 0x23BA30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA34u; }
    }
    if (ctx->pc != 0x23BA34u) { return; }
    ctx->pc = 0x23BA34u;
label_23ba34:
    // 0x23ba34: 0x10000085
label_23ba38:
    if (ctx->pc == 0x23BA38u) {
        ctx->pc = 0x23BA38u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x23BA3Cu;
        goto label_23ba3c;
    }
    ctx->pc = 0x23BA34u;
    {
        const bool branch_taken_0x23ba34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BA38u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x23ba34) {
            ctx->pc = 0x23BC4Cu;
            goto label_23bc4c;
        }
    }
    ctx->pc = 0x23BA3Cu;
label_23ba3c:
    // 0x23ba3c: 0x26240010
    ctx->pc = 0x23ba3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
label_23ba40:
    // 0x23ba40: 0x26250240
    ctx->pc = 0x23ba40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 576));
label_23ba44:
    // 0x23ba44: 0xc080d02
label_23ba48:
    if (ctx->pc == 0x23BA48u) {
        ctx->pc = 0x23BA48u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
        ctx->pc = 0x23BA4Cu;
        goto label_23ba4c;
    }
    ctx->pc = 0x23BA44u;
    SET_GPR_U32(ctx, 31, 0x23BA4Cu);
    ctx->pc = 0x23BA48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 564));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA4Cu; }
    }
    if (ctx->pc != 0x23BA4Cu) { return; }
    ctx->pc = 0x23BA4Cu;
label_23ba4c:
    // 0x23ba4c: 0x3c020036
    ctx->pc = 0x23ba4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_23ba50:
    // 0x23ba50: 0x8e230000
    ctx->pc = 0x23ba50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23ba54:
    // 0x23ba54: 0x8c42d934
    ctx->pc = 0x23ba54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_23ba58:
    // 0x23ba58: 0x10620071
label_23ba5c:
    if (ctx->pc == 0x23BA5Cu) {
        ctx->pc = 0x23BA5Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x23BA60u;
        goto label_23ba60;
    }
    ctx->pc = 0x23BA58u;
    {
        const bool branch_taken_0x23ba58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23BA5Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x23ba58) {
            ctx->pc = 0x23BC20u;
            goto label_23bc20;
        }
    }
    ctx->pc = 0x23BA60u;
label_23ba60:
    // 0x23ba60: 0x2402001e
    ctx->pc = 0x23ba60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_23ba64:
    // 0x23ba64: 0x14620030
label_23ba68:
    if (ctx->pc == 0x23BA68u) {
        ctx->pc = 0x23BA6Cu;
        goto label_23ba6c;
    }
    ctx->pc = 0x23BA64u;
    {
        const bool branch_taken_0x23ba64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23ba64) {
            ctx->pc = 0x23BB28u;
            goto label_23bb28;
        }
    }
    ctx->pc = 0x23BA6Cu;
label_23ba6c:
    // 0x23ba6c: 0x8e2401f4
    ctx->pc = 0x23ba6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_23ba70:
    // 0x23ba70: 0x4800004
label_23ba74:
    if (ctx->pc == 0x23BA74u) {
        ctx->pc = 0x23BA74u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 924)));
        ctx->pc = 0x23BA78u;
        goto label_23ba78;
    }
    ctx->pc = 0x23BA70u;
    {
        const bool branch_taken_0x23ba70 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23BA74u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 924)));
        if (branch_taken_0x23ba70) {
            ctx->pc = 0x23BA84u;
            goto label_23ba84;
        }
    }
    ctx->pc = 0x23BA78u;
label_23ba78:
    // 0x23ba78: 0xc09e964
label_23ba7c:
    if (ctx->pc == 0x23BA7Cu) {
        ctx->pc = 0x23BA7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23BA80u;
        goto label_23ba80;
    }
    ctx->pc = 0x23BA78u;
    SET_GPR_U32(ctx, 31, 0x23BA80u);
    ctx->pc = 0x23BA7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA80u; }
    }
    if (ctx->pc != 0x23BA80u) { return; }
    ctx->pc = 0x23BA80u;
label_23ba80:
    // 0x23ba80: 0xae2201f4
    ctx->pc = 0x23ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
label_23ba84:
    // 0x23ba84: 0x2a0200ff
    ctx->pc = 0x23ba84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 255));
label_23ba88:
    // 0x23ba88: 0x54400012
label_23ba8c:
    if (ctx->pc == 0x23BA8Cu) {
        ctx->pc = 0x23BA8Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x23BA90u;
        goto label_23ba90;
    }
    ctx->pc = 0x23BA88u;
    {
        const bool branch_taken_0x23ba88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23ba88) {
            ctx->pc = 0x23BA8Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x23BAD4u;
            goto label_23bad4;
        }
    }
    ctx->pc = 0x23BA90u;
label_23ba90:
    // 0x23ba90: 0x8e220334
    ctx->pc = 0x23ba90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23ba94:
    // 0x23ba94: 0x1040005c
label_23ba98:
    if (ctx->pc == 0x23BA98u) {
        ctx->pc = 0x23BA98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x23BA9Cu;
        goto label_23ba9c;
    }
    ctx->pc = 0x23BA94u;
    {
        const bool branch_taken_0x23ba94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BA98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23ba94) {
            ctx->pc = 0x23BC08u;
            goto label_23bc08;
        }
    }
    ctx->pc = 0x23BA9Cu;
label_23ba9c:
    // 0x23ba9c: 0x8623021a
    ctx->pc = 0x23ba9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
label_23baa0:
    // 0x23baa0: 0x14620007
label_23baa4:
    if (ctx->pc == 0x23BAA4u) {
        ctx->pc = 0x23BAA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 131));
        ctx->pc = 0x23BAA8u;
        goto label_23baa8;
    }
    ctx->pc = 0x23BAA0u;
    {
        const bool branch_taken_0x23baa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23BAA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 131));
        if (branch_taken_0x23baa0) {
            ctx->pc = 0x23BAC0u;
            goto label_23bac0;
        }
    }
    ctx->pc = 0x23BAA8u;
label_23baa8:
    // 0x23baa8: 0x24040081
    ctx->pc = 0x23baa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 129));
label_23baac:
    // 0x23baac: 0x8e250298
    ctx->pc = 0x23baacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_23bab0:
    // 0x23bab0: 0xc0a3a1c
label_23bab4:
    if (ctx->pc == 0x23BAB4u) {
        ctx->pc = 0x23BAB4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x23BAB8u;
        goto label_23bab8;
    }
    ctx->pc = 0x23BAB0u;
    SET_GPR_U32(ctx, 31, 0x23BAB8u);
    ctx->pc = 0x23BAB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAB8u; }
    }
    if (ctx->pc != 0x23BAB8u) { return; }
    ctx->pc = 0x23BAB8u;
label_23bab8:
    // 0x23bab8: 0x10000053
label_23babc:
    if (ctx->pc == 0x23BABCu) {
        ctx->pc = 0x23BAC0u;
        goto label_23bac0;
    }
    ctx->pc = 0x23BAB8u;
    {
        const bool branch_taken_0x23bab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23bab8) {
            ctx->pc = 0x23BC08u;
            goto label_23bc08;
        }
    }
    ctx->pc = 0x23BAC0u;
label_23bac0:
    // 0x23bac0: 0x8e250298
    ctx->pc = 0x23bac0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_23bac4:
    // 0x23bac4: 0xc0a3a1c
label_23bac8:
    if (ctx->pc == 0x23BAC8u) {
        ctx->pc = 0x23BAC8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x23BACCu;
        goto label_23bacc;
    }
    ctx->pc = 0x23BAC4u;
    SET_GPR_U32(ctx, 31, 0x23BACCu);
    ctx->pc = 0x23BAC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BACCu; }
    }
    if (ctx->pc != 0x23BACCu) { return; }
    ctx->pc = 0x23BACCu;
label_23bacc:
    // 0x23bacc: 0x1000004e
label_23bad0:
    if (ctx->pc == 0x23BAD0u) {
        ctx->pc = 0x23BAD4u;
        goto label_23bad4;
    }
    ctx->pc = 0x23BACCu;
    {
        const bool branch_taken_0x23bacc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23bacc) {
            ctx->pc = 0x23BC08u;
            goto label_23bc08;
        }
    }
    ctx->pc = 0x23BAD4u;
label_23bad4:
    // 0x23bad4: 0x200282d
    ctx->pc = 0x23bad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bad8:
    // 0x23bad8: 0xc0b40c0
label_23badc:
    if (ctx->pc == 0x23BADCu) {
        ctx->pc = 0x23BADCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23BAE0u;
        goto label_23bae0;
    }
    ctx->pc = 0x23BAD8u;
    SET_GPR_U32(ctx, 31, 0x23BAE0u);
    ctx->pc = 0x23BADCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAE0u; }
    }
    if (ctx->pc != 0x23BAE0u) { return; }
    ctx->pc = 0x23BAE0u;
label_23bae0:
    // 0x23bae0: 0x3c020031
    ctx->pc = 0x23bae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23bae4:
    // 0x23bae4: 0x8c42ffbc
    ctx->pc = 0x23bae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_23bae8:
    // 0x23bae8: 0x21080
    ctx->pc = 0x23bae8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_23baec:
    // 0x23baec: 0x8e23039c
    ctx->pc = 0x23baecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 924)));
label_23baf0:
    // 0x23baf0: 0x431021
    ctx->pc = 0x23baf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23baf4:
    // 0x23baf4: 0xae22039c
    ctx->pc = 0x23baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 2));
label_23baf8:
    // 0x23baf8: 0x3c020031
    ctx->pc = 0x23baf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23bafc:
    // 0x23bafc: 0xc441ffa8
    ctx->pc = 0x23bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23bb00:
    // 0x23bb00: 0x3c014120
    ctx->pc = 0x23bb00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_23bb04:
    // 0x23bb04: 0x44810000
    ctx->pc = 0x23bb04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23bb08:
    // 0x23bb08: 0x46000842
    ctx->pc = 0x23bb08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23bb0c:
    // 0x23bb0c: 0xc6200044
    ctx->pc = 0x23bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bb10:
    // 0x23bb10: 0x46000840
    ctx->pc = 0x23bb10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23bb14:
    // 0x23bb14: 0xe6210044
    ctx->pc = 0x23bb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_23bb18:
    // 0x23bb18: 0xc080ce2
label_23bb1c:
    if (ctx->pc == 0x23BB1Cu) {
        ctx->pc = 0x23BB1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x23BB20u;
        goto label_23bb20;
    }
    ctx->pc = 0x23BB18u;
    SET_GPR_U32(ctx, 31, 0x23BB20u);
    ctx->pc = 0x23BB1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB20u; }
    }
    if (ctx->pc != 0x23BB20u) { return; }
    ctx->pc = 0x23BB20u;
label_23bb20:
    // 0x23bb20: 0x10000040
label_23bb24:
    if (ctx->pc == 0x23BB24u) {
        ctx->pc = 0x23BB24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
        ctx->pc = 0x23BB28u;
        goto label_23bb28;
    }
    ctx->pc = 0x23BB20u;
    {
        const bool branch_taken_0x23bb20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BB24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
        if (branch_taken_0x23bb20) {
            ctx->pc = 0x23BC24u;
            goto label_23bc24;
        }
    }
    ctx->pc = 0x23BB28u;
label_23bb28:
    // 0x23bb28: 0xc08eb84
label_23bb2c:
    if (ctx->pc == 0x23BB2Cu) {
        ctx->pc = 0x23BB2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BB30u;
        goto label_23bb30;
    }
    ctx->pc = 0x23BB28u;
    SET_GPR_U32(ctx, 31, 0x23BB30u);
    ctx->pc = 0x23BB2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_knockback_control_0x23ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB30u; }
    }
    if (ctx->pc != 0x23BB30u) { return; }
    ctx->pc = 0x23BB30u;
label_23bb30:
    // 0x23bb30: 0x24020020
    ctx->pc = 0x23bb30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_23bb34:
    // 0x23bb34: 0xae2200e4
    ctx->pc = 0x23bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
label_23bb38:
    // 0x23bb38: 0xc08f20c
label_23bb3c:
    if (ctx->pc == 0x23BB3Cu) {
        ctx->pc = 0x23BB3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BB40u;
        goto label_23bb40;
    }
    ctx->pc = 0x23BB38u;
    SET_GPR_U32(ctx, 31, 0x23BB40u);
    ctx->pc = 0x23BB3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB40u; }
    }
    if (ctx->pc != 0x23BB40u) { return; }
    ctx->pc = 0x23BB40u;
label_23bb40:
    // 0x23bb40: 0xe6200258
    ctx->pc = 0x23bb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 600), bits); }
label_23bb44:
    // 0x23bb44: 0xc090e82
label_23bb48:
    if (ctx->pc == 0x23BB48u) {
        ctx->pc = 0x23BB48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BB4Cu;
        goto label_23bb4c;
    }
    ctx->pc = 0x23BB44u;
    SET_GPR_U32(ctx, 31, 0x23BB4Cu);
    ctx->pc = 0x23BB48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB4Cu; }
    }
    if (ctx->pc != 0x23BB4Cu) { return; }
    ctx->pc = 0x23BB4Cu;
label_23bb4c:
    // 0x23bb4c: 0x8e220080
    ctx->pc = 0x23bb4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_23bb50:
    // 0x23bb50: 0x1040000e
label_23bb54:
    if (ctx->pc == 0x23BB54u) {
        ctx->pc = 0x23BB54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x23BB58u;
        goto label_23bb58;
    }
    ctx->pc = 0x23BB50u;
    {
        const bool branch_taken_0x23bb50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BB54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x23bb50) {
            ctx->pc = 0x23BB8Cu;
            goto label_23bb8c;
        }
    }
    ctx->pc = 0x23BB58u;
label_23bb58:
    // 0x23bb58: 0x8e230000
    ctx->pc = 0x23bb58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23bb5c:
    // 0x23bb5c: 0x8c42d934
    ctx->pc = 0x23bb5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_23bb60:
    // 0x23bb60: 0x50620005
label_23bb64:
    if (ctx->pc == 0x23BB64u) {
        ctx->pc = 0x23BB64u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->pc = 0x23BB68u;
        goto label_23bb68;
    }
    ctx->pc = 0x23BB60u;
    {
        const bool branch_taken_0x23bb60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23bb60) {
            ctx->pc = 0x23BB64u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->pc = 0x23BB78u;
            goto label_23bb78;
        }
    }
    ctx->pc = 0x23BB68u;
label_23bb68:
    // 0x23bb68: 0xc09e494
label_23bb6c:
    if (ctx->pc == 0x23BB6Cu) {
        ctx->pc = 0x23BB6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BB70u;
        goto label_23bb70;
    }
    ctx->pc = 0x23BB68u;
    SET_GPR_U32(ctx, 31, 0x23BB70u);
    ctx->pc = 0x23BB6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279250u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoEnemyAction_0x279250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB70u; }
    }
    if (ctx->pc != 0x23BB70u) { return; }
    ctx->pc = 0x23BB70u;
label_23bb70:
    // 0x23bb70: 0xae2200e0
    ctx->pc = 0x23bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_23bb74:
    // 0x23bb74: 0x8e2300e0
    ctx->pc = 0x23bb74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_23bb78:
    // 0x23bb78: 0x8e2200e4
    ctx->pc = 0x23bb78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_23bb7c:
    // 0x23bb7c: 0x54620003
label_23bb80:
    if (ctx->pc == 0x23BB80u) {
        ctx->pc = 0x23BB80u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
        ctx->pc = 0x23BB84u;
        goto label_23bb84;
    }
    ctx->pc = 0x23BB7Cu;
    {
        const bool branch_taken_0x23bb7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23bb7c) {
            ctx->pc = 0x23BB80u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
            ctx->pc = 0x23BB8Cu;
            goto label_23bb8c;
        }
    }
    ctx->pc = 0x23BB84u;
label_23bb84:
    // 0x23bb84: 0x2402ffff
    ctx->pc = 0x23bb84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23bb88:
    // 0x23bb88: 0xae2203a4
    ctx->pc = 0x23bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 2));
label_23bb8c:
    // 0x23bb8c: 0x262401f8
    ctx->pc = 0x23bb8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 504));
label_23bb90:
    // 0x23bb90: 0x8e250070
    ctx->pc = 0x23bb90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23bb94:
    // 0x23bb94: 0xc09ff98
label_23bb98:
    if (ctx->pc == 0x23BB98u) {
        ctx->pc = 0x23BB98u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BB9Cu;
        goto label_23bb9c;
    }
    ctx->pc = 0x23BB94u;
    SET_GPR_U32(ctx, 31, 0x23BB9Cu);
    ctx->pc = 0x23BB98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessSkinFX_0x27fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB9Cu; }
    }
    if (ctx->pc != 0x23BB9Cu) { return; }
    ctx->pc = 0x23BB9Cu;
label_23bb9c:
    // 0x23bb9c: 0x8e2300e0
    ctx->pc = 0x23bb9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_23bba0:
    // 0x23bba0: 0x2462ffe4
    ctx->pc = 0x23bba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967268));
label_23bba4:
    // 0x23bba4: 0x2c420002
    ctx->pc = 0x23bba4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_23bba8:
    // 0x23bba8: 0x54400005
label_23bbac:
    if (ctx->pc == 0x23BBACu) {
        ctx->pc = 0x23BBACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x23BBB0u;
        goto label_23bbb0;
    }
    ctx->pc = 0x23BBA8u;
    {
        const bool branch_taken_0x23bba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23bba8) {
            ctx->pc = 0x23BBACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23BBC0u;
            goto label_23bbc0;
        }
    }
    ctx->pc = 0x23BBB0u;
label_23bbb0:
    // 0x23bbb0: 0x24020020
    ctx->pc = 0x23bbb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_23bbb4:
    // 0x23bbb4: 0x54620007
label_23bbb8:
    if (ctx->pc == 0x23BBB8u) {
        ctx->pc = 0x23BBB8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x23BBBCu;
        goto label_23bbbc;
    }
    ctx->pc = 0x23BBB4u;
    {
        const bool branch_taken_0x23bbb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23bbb4) {
            ctx->pc = 0x23BBB8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x23BBD4u;
            goto label_23bbd4;
        }
    }
    ctx->pc = 0x23BBBCu;
label_23bbbc:
    // 0x23bbbc: 0xc62101f8
    ctx->pc = 0x23bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23bbc0:
    // 0x23bbc0: 0x44800000
    ctx->pc = 0x23bbc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_23bbc4:
    // 0x23bbc4: 0x46000836
    ctx->pc = 0x23bbc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bbc8:
    // 0x23bbc8: 0x45000013
label_23bbcc:
    if (ctx->pc == 0x23BBCCu) {
        ctx->pc = 0x23BBD0u;
        goto label_23bbd0;
    }
    ctx->pc = 0x23BBC8u;
    {
        const bool branch_taken_0x23bbc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bbc8) {
            ctx->pc = 0x23BC18u;
            goto label_23bc18;
        }
    }
    ctx->pc = 0x23BBD0u;
label_23bbd0:
    // 0x23bbd0: 0x8e230000
    ctx->pc = 0x23bbd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23bbd4:
    // 0x23bbd4: 0x2402001d
    ctx->pc = 0x23bbd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
label_23bbd8:
    // 0x23bbd8: 0x1462000b
label_23bbdc:
    if (ctx->pc == 0x23BBDCu) {
        ctx->pc = 0x23BBE0u;
        goto label_23bbe0;
    }
    ctx->pc = 0x23BBD8u;
    {
        const bool branch_taken_0x23bbd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23bbd8) {
            ctx->pc = 0x23BC08u;
            goto label_23bc08;
        }
    }
    ctx->pc = 0x23BBE0u;
label_23bbe0:
    // 0x23bbe0: 0xc0b5c24
label_23bbe4:
    if (ctx->pc == 0x23BBE4u) {
        ctx->pc = 0x23BBE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x23BBE8u;
        goto label_23bbe8;
    }
    ctx->pc = 0x23BBE0u;
    SET_GPR_U32(ctx, 31, 0x23BBE8u);
    ctx->pc = 0x23BBE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBE8u; }
    }
    if (ctx->pc != 0x23BBE8u) { return; }
    ctx->pc = 0x23BBE8u;
label_23bbe8:
    // 0x23bbe8: 0x14400005
label_23bbec:
    if (ctx->pc == 0x23BBECu) {
        ctx->pc = 0x23BBF0u;
        goto label_23bbf0;
    }
    ctx->pc = 0x23BBE8u;
    {
        const bool branch_taken_0x23bbe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23bbe8) {
            ctx->pc = 0x23BC00u;
            goto label_23bc00;
        }
    }
    ctx->pc = 0x23BBF0u;
label_23bbf0:
    // 0x23bbf0: 0xc0977a0
label_23bbf4:
    if (ctx->pc == 0x23BBF4u) {
        ctx->pc = 0x23BBF4u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
        ctx->pc = 0x23BBF8u;
        goto label_23bbf8;
    }
    ctx->pc = 0x23BBF0u;
    SET_GPR_U32(ctx, 31, 0x23BBF8u);
    ctx->pc = 0x23BBF4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
    ctx->pc = 0x25DE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSuchBravery_0x25de80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBF8u; }
    }
    if (ctx->pc != 0x23BBF8u) { return; }
    ctx->pc = 0x23BBF8u;
label_23bbf8:
    // 0x23bbf8: 0x10000003
label_23bbfc:
    if (ctx->pc == 0x23BBFCu) {
        ctx->pc = 0x23BC00u;
        goto label_23bc00;
    }
    ctx->pc = 0x23BBF8u;
    {
        const bool branch_taken_0x23bbf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23bbf8) {
            ctx->pc = 0x23BC08u;
            goto label_23bc08;
        }
    }
    ctx->pc = 0x23BC00u;
label_23bc00:
    // 0x23bc00: 0xc0977ae
label_23bc04:
    if (ctx->pc == 0x23BC04u) {
        ctx->pc = 0x23BC04u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
        ctx->pc = 0x23BC08u;
        goto label_23bc08;
    }
    ctx->pc = 0x23BC00u;
    SET_GPR_U32(ctx, 31, 0x23BC08u);
    ctx->pc = 0x23BC04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
    ctx->pc = 0x25DEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioHeroicEffort_0x25deb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC08u; }
    }
    if (ctx->pc != 0x23BC08u) { return; }
    ctx->pc = 0x23BC08u;
label_23bc08:
    // 0x23bc08: 0xc08e734
label_23bc0c:
    if (ctx->pc == 0x23BC0Cu) {
        ctx->pc = 0x23BC0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BC10u;
        goto label_23bc10;
    }
    ctx->pc = 0x23BC08u;
    SET_GPR_U32(ctx, 31, 0x23BC10u);
    ctx->pc = 0x23BC0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_enemy_0x239cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC10u; }
    }
    if (ctx->pc != 0x23BC10u) { return; }
    ctx->pc = 0x23BC10u;
label_23bc10:
    // 0x23bc10: 0x1000000f
label_23bc14:
    if (ctx->pc == 0x23BC14u) {
        ctx->pc = 0x23BC14u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->pc = 0x23BC18u;
        goto label_23bc18;
    }
    ctx->pc = 0x23BC10u;
    {
        const bool branch_taken_0x23bc10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BC14u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
        if (branch_taken_0x23bc10) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BC18u;
label_23bc18:
    // 0x23bc18: 0xc080ce2
label_23bc1c:
    if (ctx->pc == 0x23BC1Cu) {
        ctx->pc = 0x23BC1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x23BC20u;
        goto label_23bc20;
    }
    ctx->pc = 0x23BC18u;
    SET_GPR_U32(ctx, 31, 0x23BC20u);
    ctx->pc = 0x23BC1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC20u; }
    }
    if (ctx->pc != 0x23BC20u) { return; }
    ctx->pc = 0x23BC20u;
label_23bc20:
    // 0x23bc20: 0x8e2201f0
    ctx->pc = 0x23bc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23bc24:
    // 0x23bc24: 0x5040000a
label_23bc28:
    if (ctx->pc == 0x23BC28u) {
        ctx->pc = 0x23BC28u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->pc = 0x23BC2Cu;
        goto label_23bc2c;
    }
    ctx->pc = 0x23BC24u;
    {
        const bool branch_taken_0x23bc24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23bc24) {
            ctx->pc = 0x23BC28u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BC2Cu;
label_23bc2c:
    // 0x23bc2c: 0xc6200040
    ctx->pc = 0x23bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc30:
    // 0x23bc30: 0xe4400030
    ctx->pc = 0x23bc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_23bc34:
    // 0x23bc34: 0x8e2201f0
    ctx->pc = 0x23bc34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23bc38:
    // 0x23bc38: 0xc6200044
    ctx->pc = 0x23bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc3c:
    // 0x23bc3c: 0xe4400034
    ctx->pc = 0x23bc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_23bc40:
    // 0x23bc40: 0x8e2201f0
    ctx->pc = 0x23bc40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23bc44:
    // 0x23bc44: 0xc6200048
    ctx->pc = 0x23bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc48:
    // 0x23bc48: 0xe4400038
    ctx->pc = 0x23bc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_23bc4c:
    // 0x23bc4c: 0x96220324
    ctx->pc = 0x23bc4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
label_23bc50:
    // 0x23bc50: 0xa6220328
    ctx->pc = 0x23bc50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 808), (uint16_t)GPR_U32(ctx, 2));
label_23bc54:
    // 0x23bc54: 0x96220326
    ctx->pc = 0x23bc54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 806)));
label_23bc58:
    // 0x23bc58: 0xa6220324
    ctx->pc = 0x23bc58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
label_23bc5c:
    // 0x23bc5c: 0x8e240380
    ctx->pc = 0x23bc5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_23bc60:
    // 0x23bc60: 0x8e23037c
    ctx->pc = 0x23bc60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 892)));
label_23bc64:
    // 0x23bc64: 0x83102a
    ctx->pc = 0x23bc64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
label_23bc68:
    // 0x23bc68: 0x54400004
label_23bc6c:
    if (ctx->pc == 0x23BC6Cu) {
        ctx->pc = 0x23BC6Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x23BC70u;
        goto label_23bc70;
    }
    ctx->pc = 0x23BC68u;
    {
        const bool branch_taken_0x23bc68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23bc68) {
            ctx->pc = 0x23BC6Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23BC7Cu;
            goto label_23bc7c;
        }
    }
    ctx->pc = 0x23BC70u;
label_23bc70:
    // 0x23bc70: 0x831023
    ctx->pc = 0x23bc70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23bc74:
    // 0x23bc74: 0xae220380
    ctx->pc = 0x23bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
label_23bc78:
    // 0x23bc78: 0xc6210270
    ctx->pc = 0x23bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23bc7c:
    // 0x23bc7c: 0x3c013f4c
    ctx->pc = 0x23bc7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_23bc80:
    // 0x23bc80: 0x3421cccd
    ctx->pc = 0x23bc80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_23bc84:
    // 0x23bc84: 0x44811000
    ctx->pc = 0x23bc84u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_23bc88:
    // 0x23bc88: 0x46020842
    ctx->pc = 0x23bc88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_23bc8c:
    // 0x23bc8c: 0xe6210270
    ctx->pc = 0x23bc8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
label_23bc90:
    // 0x23bc90: 0xc6200274
    ctx->pc = 0x23bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc94:
    // 0x23bc94: 0x46020002
    ctx->pc = 0x23bc94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_23bc98:
    // 0x23bc98: 0xe6200274
    ctx->pc = 0x23bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
label_23bc9c:
    // 0x23bc9c: 0xc6200278
    ctx->pc = 0x23bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bca0:
    // 0x23bca0: 0x46020002
    ctx->pc = 0x23bca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_23bca4:
    // 0x23bca4: 0xe6200278
    ctx->pc = 0x23bca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
label_23bca8:
    // 0x23bca8: 0x46000845
    ctx->pc = 0x23bca8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_23bcac:
    // 0x23bcac: 0x3c013c23
    ctx->pc = 0x23bcacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_23bcb0:
    // 0x23bcb0: 0x3421d70a
    ctx->pc = 0x23bcb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_23bcb4:
    // 0x23bcb4: 0x44810000
    ctx->pc = 0x23bcb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23bcb8:
    // 0x23bcb8: 0x46000834
    ctx->pc = 0x23bcb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bcbc:
    // 0x23bcbc: 0x0
    ctx->pc = 0x23bcbcu;
    // NOP
label_23bcc0:
    // 0x23bcc0: 0x45030001
label_23bcc4:
    if (ctx->pc == 0x23BCC4u) {
        ctx->pc = 0x23BCC4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
        ctx->pc = 0x23BCC8u;
        goto label_23bcc8;
    }
    ctx->pc = 0x23BCC0u;
    {
        const bool branch_taken_0x23bcc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bcc0) {
            ctx->pc = 0x23BCC4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
            ctx->pc = 0x23BCC8u;
            goto label_23bcc8;
        }
    }
    ctx->pc = 0x23BCC8u;
label_23bcc8:
    // 0x23bcc8: 0xc6200274
    ctx->pc = 0x23bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bccc:
    // 0x23bccc: 0x46000005
    ctx->pc = 0x23bcccu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_23bcd0:
    // 0x23bcd0: 0x3c013c23
    ctx->pc = 0x23bcd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_23bcd4:
    // 0x23bcd4: 0x3421d70a
    ctx->pc = 0x23bcd4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_23bcd8:
    // 0x23bcd8: 0x44810800
    ctx->pc = 0x23bcd8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_23bcdc:
    // 0x23bcdc: 0x46010034
    ctx->pc = 0x23bcdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bce0:
    // 0x23bce0: 0x0
    ctx->pc = 0x23bce0u;
    // NOP
label_23bce4:
    // 0x23bce4: 0x45030001
label_23bce8:
    if (ctx->pc == 0x23BCE8u) {
        ctx->pc = 0x23BCE8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
        ctx->pc = 0x23BCECu;
        goto label_23bcec;
    }
    ctx->pc = 0x23BCE4u;
    {
        const bool branch_taken_0x23bce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bce4) {
            ctx->pc = 0x23BCE8u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
            ctx->pc = 0x23BCECu;
            goto label_23bcec;
        }
    }
    ctx->pc = 0x23BCECu;
label_23bcec:
    // 0x23bcec: 0xc6200278
    ctx->pc = 0x23bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bcf0:
    // 0x23bcf0: 0x46000005
    ctx->pc = 0x23bcf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_23bcf4:
    // 0x23bcf4: 0x3c013c23
    ctx->pc = 0x23bcf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_23bcf8:
    // 0x23bcf8: 0x3421d70a
    ctx->pc = 0x23bcf8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_23bcfc:
    // 0x23bcfc: 0x44810800
    ctx->pc = 0x23bcfcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_23bd00:
    // 0x23bd00: 0x46010034
    ctx->pc = 0x23bd00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bd04:
    // 0x23bd04: 0x0
    ctx->pc = 0x23bd04u;
    // NOP
label_23bd08:
    // 0x23bd08: 0x45030001
label_23bd0c:
    if (ctx->pc == 0x23BD0Cu) {
        ctx->pc = 0x23BD0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
        ctx->pc = 0x23BD10u;
        goto label_23bd10;
    }
    ctx->pc = 0x23BD08u;
    {
        const bool branch_taken_0x23bd08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bd08) {
            ctx->pc = 0x23BD0Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
            ctx->pc = 0x23BD10u;
            goto label_23bd10;
        }
    }
    ctx->pc = 0x23BD10u;
label_23bd10:
    // 0x23bd10: 0xc6220274
    ctx->pc = 0x23bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23bd14:
    // 0x23bd14: 0x44801800
    ctx->pc = 0x23bd14u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_23bd18:
    // 0x23bd18: 0x46021834
    ctx->pc = 0x23bd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bd1c:
    // 0x23bd1c: 0x0
    ctx->pc = 0x23bd1cu;
    // NOP
label_23bd20:
    // 0x23bd20: 0x4500000b
label_23bd24:
    if (ctx->pc == 0x23BD24u) {
        ctx->pc = 0x23BD24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x23BD28u;
        goto label_23bd28;
    }
    ctx->pc = 0x23BD20u;
    {
        const bool branch_taken_0x23bd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23BD24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23bd20) {
            ctx->pc = 0x23BD50u;
            goto label_23bd50;
        }
    }
    ctx->pc = 0x23BD28u;
label_23bd28:
    // 0x23bd28: 0xc440ffa8
    ctx->pc = 0x23bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bd2c:
    // 0x23bd2c: 0x3c0142c8
    ctx->pc = 0x23bd2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
label_23bd30:
    // 0x23bd30: 0x44810800
    ctx->pc = 0x23bd30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_23bd34:
    // 0x23bd34: 0x46010002
    ctx->pc = 0x23bd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_23bd38:
    // 0x23bd38: 0x46001001
    ctx->pc = 0x23bd38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_23bd3c:
    // 0x23bd3c: 0x46030034
    ctx->pc = 0x23bd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bd40:
    // 0x23bd40: 0x0
    ctx->pc = 0x23bd40u;
    // NOP
label_23bd44:
    // 0x23bd44: 0x45000002
label_23bd48:
    if (ctx->pc == 0x23BD48u) {
        ctx->pc = 0x23BD48u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
        ctx->pc = 0x23BD4Cu;
        goto label_23bd4c;
    }
    ctx->pc = 0x23BD44u;
    {
        const bool branch_taken_0x23bd44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23BD48u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
        if (branch_taken_0x23bd44) {
            ctx->pc = 0x23BD50u;
            goto label_23bd50;
        }
    }
    ctx->pc = 0x23BD4Cu;
label_23bd4c:
    // 0x23bd4c: 0xe6230274
    ctx->pc = 0x23bd4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
label_23bd50:
    // 0x23bd50: 0x3c020036
    ctx->pc = 0x23bd50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_23bd54:
    // 0x23bd54: 0x8c42d934
    ctx->pc = 0x23bd54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_23bd58:
    // 0x23bd58: 0x4430038
label_23bd5c:
    if (ctx->pc == 0x23BD5Cu) {
        ctx->pc = 0x23BD5Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x23BD60u;
        goto label_23bd60;
    }
    ctx->pc = 0x23BD58u;
    {
        const bool branch_taken_0x23bd58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23bd58) {
            ctx->pc = 0x23BD5Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x23BE3Cu;
            goto label_23be3c;
        }
    }
    ctx->pc = 0x23BD60u;
label_23bd60:
    // 0x23bd60: 0x3c100032
    ctx->pc = 0x23bd60u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_23bd64:
    // 0x23bd64: 0xc60107fc
    ctx->pc = 0x23bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23bd68:
    // 0x23bd68: 0x3c013f80
    ctx->pc = 0x23bd68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_23bd6c:
    // 0x23bd6c: 0x44810000
    ctx->pc = 0x23bd6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23bd70:
    // 0x23bd70: 0x46000832
    ctx->pc = 0x23bd70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23bd74:
    // 0x23bd74: 0x0
    ctx->pc = 0x23bd74u;
    // NOP
label_23bd78:
    // 0x23bd78: 0x45010016
label_23bd7c:
    if (ctx->pc == 0x23BD7Cu) {
        ctx->pc = 0x23BD7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x23BD80u;
        goto label_23bd80;
    }
    ctx->pc = 0x23BD78u;
    {
        const bool branch_taken_0x23bd78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23BD7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        if (branch_taken_0x23bd78) {
            ctx->pc = 0x23BDD4u;
            goto label_23bdd4;
        }
    }
    ctx->pc = 0x23BD80u;
label_23bd80:
    // 0x23bd80: 0x1080000a
label_23bd84:
    if (ctx->pc == 0x23BD84u) {
        ctx->pc = 0x23BD84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x23BD88u;
        goto label_23bd88;
    }
    ctx->pc = 0x23BD80u;
    {
        const bool branch_taken_0x23bd80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BD84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x23bd80) {
            ctx->pc = 0x23BDACu;
            goto label_23bdac;
        }
    }
    ctx->pc = 0x23BD88u;
label_23bd88:
    // 0x23bd88: 0xc0b41b8
label_23bd8c:
    if (ctx->pc == 0x23BD8Cu) {
        ctx->pc = 0x23BD8Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BD90u;
        goto label_23bd90;
    }
    ctx->pc = 0x23BD88u;
    SET_GPR_U32(ctx, 31, 0x23BD90u);
    ctx->pc = 0x23BD8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD90u; }
    }
    if (ctx->pc != 0x23BD90u) { return; }
    ctx->pc = 0x23BD90u;
label_23bd90:
    // 0x23bd90: 0x8e220070
    ctx->pc = 0x23bd90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23bd94:
    // 0x23bd94: 0xc60007fc
    ctx->pc = 0x23bd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bd98:
    // 0x23bd98: 0xe4400040
    ctx->pc = 0x23bd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_23bd9c:
    // 0x23bd9c: 0x8e220070
    ctx->pc = 0x23bd9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23bda0:
    // 0x23bda0: 0xe4400044
    ctx->pc = 0x23bda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_23bda4:
    // 0x23bda4: 0x8e220070
    ctx->pc = 0x23bda4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23bda8:
    // 0x23bda8: 0xe4400048
    ctx->pc = 0x23bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_23bdac:
    // 0x23bdac: 0x8e2401f0
    ctx->pc = 0x23bdacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23bdb0:
    // 0x23bdb0: 0x10800021
label_23bdb4:
    if (ctx->pc == 0x23BDB4u) {
        ctx->pc = 0x23BDB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x23BDB8u;
        goto label_23bdb8;
    }
    ctx->pc = 0x23BDB0u;
    {
        const bool branch_taken_0x23bdb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BDB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x23bdb0) {
            ctx->pc = 0x23BE38u;
            goto label_23be38;
        }
    }
    ctx->pc = 0x23BDB8u;
label_23bdb8:
    // 0x23bdb8: 0xc0b41b8
label_23bdbc:
    if (ctx->pc == 0x23BDBCu) {
        ctx->pc = 0x23BDBCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BDC0u;
        goto label_23bdc0;
    }
    ctx->pc = 0x23BDB8u;
    SET_GPR_U32(ctx, 31, 0x23BDC0u);
    ctx->pc = 0x23BDBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDC0u; }
    }
    if (ctx->pc != 0x23BDC0u) { return; }
    ctx->pc = 0x23BDC0u;
label_23bdc0:
    // 0x23bdc0: 0x8e2301f0
    ctx->pc = 0x23bdc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23bdc4:
    // 0x23bdc4: 0x3c020032
    ctx->pc = 0x23bdc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_23bdc8:
    // 0x23bdc8: 0xc44007fc
    ctx->pc = 0x23bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bdcc:
    // 0x23bdcc: 0x10000016
label_23bdd0:
    if (ctx->pc == 0x23BDD0u) {
        ctx->pc = 0x23BDD0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->pc = 0x23BDD4u;
        goto label_23bdd4;
    }
    ctx->pc = 0x23BDCCu;
    {
        const bool branch_taken_0x23bdcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BDD0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        if (branch_taken_0x23bdcc) {
            ctx->pc = 0x23BE28u;
            goto label_23be28;
        }
    }
    ctx->pc = 0x23BDD4u;
label_23bdd4:
    // 0x23bdd4: 0x1080000b
label_23bdd8:
    if (ctx->pc == 0x23BDD8u) {
        ctx->pc = 0x23BDD8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x23BDDCu;
        goto label_23bddc;
    }
    ctx->pc = 0x23BDD4u;
    {
        const bool branch_taken_0x23bdd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BDD8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x23bdd4) {
            ctx->pc = 0x23BE04u;
            goto label_23be04;
        }
    }
    ctx->pc = 0x23BDDCu;
label_23bddc:
    // 0x23bddc: 0xc0b41e4
label_23bde0:
    if (ctx->pc == 0x23BDE0u) {
        ctx->pc = 0x23BDE0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BDE4u;
        goto label_23bde4;
    }
    ctx->pc = 0x23BDDCu;
    SET_GPR_U32(ctx, 31, 0x23BDE4u);
    ctx->pc = 0x23BDE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDE4u; }
    }
    if (ctx->pc != 0x23BDE4u) { return; }
    ctx->pc = 0x23BDE4u;
label_23bde4:
    // 0x23bde4: 0x8e220070
    ctx->pc = 0x23bde4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23bde8:
    // 0x23bde8: 0x3c013f80
    ctx->pc = 0x23bde8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_23bdec:
    // 0x23bdec: 0x44810000
    ctx->pc = 0x23bdecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23bdf0:
    // 0x23bdf0: 0xe4400040
    ctx->pc = 0x23bdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_23bdf4:
    // 0x23bdf4: 0x8e220070
    ctx->pc = 0x23bdf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23bdf8:
    // 0x23bdf8: 0xe4400044
    ctx->pc = 0x23bdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_23bdfc:
    // 0x23bdfc: 0x8e220070
    ctx->pc = 0x23bdfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_23be00:
    // 0x23be00: 0xe4400048
    ctx->pc = 0x23be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_23be04:
    // 0x23be04: 0x8e2401f0
    ctx->pc = 0x23be04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23be08:
    // 0x23be08: 0x1080000b
label_23be0c:
    if (ctx->pc == 0x23BE0Cu) {
        ctx->pc = 0x23BE0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x23BE10u;
        goto label_23be10;
    }
    ctx->pc = 0x23BE08u;
    {
        const bool branch_taken_0x23be08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BE0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x23be08) {
            ctx->pc = 0x23BE38u;
            goto label_23be38;
        }
    }
    ctx->pc = 0x23BE10u;
label_23be10:
    // 0x23be10: 0xc0b41e4
label_23be14:
    if (ctx->pc == 0x23BE14u) {
        ctx->pc = 0x23BE14u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BE18u;
        goto label_23be18;
    }
    ctx->pc = 0x23BE10u;
    SET_GPR_U32(ctx, 31, 0x23BE18u);
    ctx->pc = 0x23BE14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE18u; }
    }
    if (ctx->pc != 0x23BE18u) { return; }
    ctx->pc = 0x23BE18u;
label_23be18:
    // 0x23be18: 0x8e2201f0
    ctx->pc = 0x23be18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23be1c:
    // 0x23be1c: 0x3c013f80
    ctx->pc = 0x23be1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_23be20:
    // 0x23be20: 0x44810000
    ctx->pc = 0x23be20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23be24:
    // 0x23be24: 0xe4400040
    ctx->pc = 0x23be24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_23be28:
    // 0x23be28: 0x8e2201f0
    ctx->pc = 0x23be28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23be2c:
    // 0x23be2c: 0xe4400044
    ctx->pc = 0x23be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_23be30:
    // 0x23be30: 0x8e2201f0
    ctx->pc = 0x23be30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_23be34:
    // 0x23be34: 0xe4400048
    ctx->pc = 0x23be34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_23be38:
    // 0x23be38: 0x26520001
    ctx->pc = 0x23be38u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_23be3c:
    // 0x23be3c: 0x3c020033
    ctx->pc = 0x23be3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23be40:
    // 0x23be40: 0x8c423c00
    ctx->pc = 0x23be40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_23be44:
    // 0x23be44: 0x242102a
    ctx->pc = 0x23be44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_23be48:
    // 0x23be48: 0x1440fe77
label_23be4c:
    if (ctx->pc == 0x23BE4Cu) {
        ctx->pc = 0x23BE4Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 944));
        ctx->pc = 0x23BE50u;
        goto label_23be50;
    }
    ctx->pc = 0x23BE48u;
    {
        const bool branch_taken_0x23be48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23BE4Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 944));
        if (branch_taken_0x23be48) {
            ctx->pc = 0x23B828u;
            goto label_23b828;
        }
    }
    ctx->pc = 0x23BE50u;
label_23be50:
    // 0x23be50: 0x3c02003c
    ctx->pc = 0x23be50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_23be54:
    // 0x23be54: 0x8c421b68
    ctx->pc = 0x23be54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7016)));
label_23be58:
    // 0x23be58: 0x14400004
label_23be5c:
    if (ctx->pc == 0x23BE5Cu) {
        ctx->pc = 0x23BE5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x23BE60u;
        goto label_23be60;
    }
    ctx->pc = 0x23BE58u;
    {
        const bool branch_taken_0x23be58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23BE5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23be58) {
            ctx->pc = 0x23BE6Cu;
            goto label_23be6c;
        }
    }
    ctx->pc = 0x23BE60u;
label_23be60:
    // 0x23be60: 0xc097484
label_23be64:
    if (ctx->pc == 0x23BE64u) {
        ctx->pc = 0x23BE68u;
        goto label_23be68;
    }
    ctx->pc = 0x23BE60u;
    SET_GPR_U32(ctx, 31, 0x23BE68u);
    ctx->pc = 0x25D210u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_death_sound_0x25d210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BE68u; }
    }
    if (ctx->pc != 0x23BE68u) { return; }
    ctx->pc = 0x23BE68u;
label_23be68:
    // 0x23be68: 0x3c020031
    ctx->pc = 0x23be68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23be6c:
    // 0x23be6c: 0xdc430e28
    ctx->pc = 0x23be6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_23be70:
    // 0x23be70: 0x30620010
    ctx->pc = 0x23be70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_23be74:
    // 0x23be74: 0x10400017
label_23be78:
    if (ctx->pc == 0x23BE78u) {
        ctx->pc = 0x23BE78u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x23BE7Cu;
        goto label_23be7c;
    }
    ctx->pc = 0x23BE74u;
    {
        const bool branch_taken_0x23be74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BE78u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x23be74) {
            ctx->pc = 0x23BED4u;
            goto label_23bed4;
        }
    }
    ctx->pc = 0x23BE7Cu;
label_23be7c:
    // 0x23be7c: 0x2103c
    ctx->pc = 0x23be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23be80:
    // 0x23be80: 0x2103f
    ctx->pc = 0x23be80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23be84:
    // 0x23be84: 0x10400013
label_23be88:
    if (ctx->pc == 0x23BE88u) {
        ctx->pc = 0x23BE88u;
        SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
        ctx->pc = 0x23BE8Cu;
        goto label_23be8c;
    }
    ctx->pc = 0x23BE84u;
    {
        const bool branch_taken_0x23be84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23BE88u;
        SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
        if (branch_taken_0x23be84) {
            ctx->pc = 0x23BED4u;
            goto label_23bed4;
        }
    }
    ctx->pc = 0x23BE8Cu;
label_23be8c:
    // 0x23be8c: 0x2604f2a8
    ctx->pc = 0x23be8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294963880));
label_23be90:
    // 0x23be90: 0x3c05003a
    ctx->pc = 0x23be90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_23be94:
    // 0x23be94: 0x24a57f88
    ctx->pc = 0x23be94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32648));
label_23be98:
    // 0x23be98: 0xc0b6252
label_23be9c:
    if (ctx->pc == 0x23BE9Cu) {
        ctx->pc = 0x23BE9Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BEA0u;
        goto label_23bea0;
    }
    ctx->pc = 0x23BE98u;
    SET_GPR_U32(ctx, 31, 0x23BEA0u);
    ctx->pc = 0x23BE9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEA0u; }
    }
    if (ctx->pc != 0x23BEA0u) { return; }
    ctx->pc = 0x23BEA0u;
label_23bea0:
    // 0x23bea0: 0x2404ff00
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
label_23bea4:
    // 0x23bea4: 0x24050144
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 324));
label_23bea8:
    // 0x23bea8: 0x302d
    ctx->pc = 0x23bea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23beac:
    // 0x23beac: 0x3c0700ff
    ctx->pc = 0x23beacu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_23beb0:
    // 0x23beb0: 0x3c013f99
    ctx->pc = 0x23beb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
label_23beb4:
    // 0x23beb4: 0x3421999a
    ctx->pc = 0x23beb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_23beb8:
    // 0x23beb8: 0x44816000
    ctx->pc = 0x23beb8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_23bebc:
    // 0x23bebc: 0xc080510
label_23bec0:
    if (ctx->pc == 0x23BEC0u) {
        ctx->pc = 0x23BEC0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4294963880));
        ctx->pc = 0x23BEC4u;
        goto label_23bec4;
    }
    ctx->pc = 0x23BEBCu;
    SET_GPR_U32(ctx, 31, 0x23BEC4u);
    ctx->pc = 0x23BEC0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4294963880));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BEC4u; }
    }
    if (ctx->pc != 0x23BEC4u) { return; }
    ctx->pc = 0x23BEC4u;
label_23bec4:
    // 0x23bec4: 0x8c430000
    ctx->pc = 0x23bec4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23bec8:
    // 0x23bec8: 0x3c040004
    ctx->pc = 0x23bec8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
label_23becc:
    // 0x23becc: 0x641825
    ctx->pc = 0x23beccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23bed0:
    // 0x23bed0: 0xac430000
    ctx->pc = 0x23bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23bed4:
    // 0x23bed4: 0xdfbf0070
    ctx->pc = 0x23bed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23bed8:
    // 0x23bed8: 0xdfb60060
    ctx->pc = 0x23bed8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23bedc:
    // 0x23bedc: 0xdfb50050
    ctx->pc = 0x23bedcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23bee0:
    // 0x23bee0: 0xdfb40040
    ctx->pc = 0x23bee0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23bee4:
    // 0x23bee4: 0xdfb30030
    ctx->pc = 0x23bee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23bee8:
    // 0x23bee8: 0xdfb20020
    ctx->pc = 0x23bee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23beec:
    // 0x23beec: 0xdfb10010
    ctx->pc = 0x23beecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23bef0:
    // 0x23bef0: 0xdfb00000
    ctx->pc = 0x23bef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23bef4:
    // 0x23bef4: 0xc7b50088
    ctx->pc = 0x23bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_23bef8:
    // 0x23bef8: 0xc7b40080
    ctx->pc = 0x23bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23befc:
    // 0x23befc: 0x3e00008
label_23bf00:
    if (ctx->pc == 0x23BF00u) {
        ctx->pc = 0x23BF00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x23BF04u;
        goto label_fallthrough_0x23befc;
    }
    ctx->pc = 0x23BEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B588u: goto label_23b588;
            case 0x23B58Cu: goto label_23b58c;
            case 0x23B590u: goto label_23b590;
            case 0x23B594u: goto label_23b594;
            case 0x23B598u: goto label_23b598;
            case 0x23B59Cu: goto label_23b59c;
            case 0x23B5A0u: goto label_23b5a0;
            case 0x23B5A4u: goto label_23b5a4;
            case 0x23B5A8u: goto label_23b5a8;
            case 0x23B5ACu: goto label_23b5ac;
            case 0x23B5B0u: goto label_23b5b0;
            case 0x23B5B4u: goto label_23b5b4;
            case 0x23B5B8u: goto label_23b5b8;
            case 0x23B5BCu: goto label_23b5bc;
            case 0x23B5C0u: goto label_23b5c0;
            case 0x23B5C4u: goto label_23b5c4;
            case 0x23B5C8u: goto label_23b5c8;
            case 0x23B5CCu: goto label_23b5cc;
            case 0x23B5D0u: goto label_23b5d0;
            case 0x23B5D4u: goto label_23b5d4;
            case 0x23B5D8u: goto label_23b5d8;
            case 0x23B5DCu: goto label_23b5dc;
            case 0x23B5E0u: goto label_23b5e0;
            case 0x23B5E4u: goto label_23b5e4;
            case 0x23B5E8u: goto label_23b5e8;
            case 0x23B5ECu: goto label_23b5ec;
            case 0x23B5F0u: goto label_23b5f0;
            case 0x23B5F4u: goto label_23b5f4;
            case 0x23B5F8u: goto label_23b5f8;
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B600u: goto label_23b600;
            case 0x23B604u: goto label_23b604;
            case 0x23B608u: goto label_23b608;
            case 0x23B60Cu: goto label_23b60c;
            case 0x23B610u: goto label_23b610;
            case 0x23B614u: goto label_23b614;
            case 0x23B618u: goto label_23b618;
            case 0x23B61Cu: goto label_23b61c;
            case 0x23B620u: goto label_23b620;
            case 0x23B624u: goto label_23b624;
            case 0x23B628u: goto label_23b628;
            case 0x23B62Cu: goto label_23b62c;
            case 0x23B630u: goto label_23b630;
            case 0x23B634u: goto label_23b634;
            case 0x23B638u: goto label_23b638;
            case 0x23B63Cu: goto label_23b63c;
            case 0x23B640u: goto label_23b640;
            case 0x23B644u: goto label_23b644;
            case 0x23B648u: goto label_23b648;
            case 0x23B64Cu: goto label_23b64c;
            case 0x23B650u: goto label_23b650;
            case 0x23B654u: goto label_23b654;
            case 0x23B658u: goto label_23b658;
            case 0x23B65Cu: goto label_23b65c;
            case 0x23B660u: goto label_23b660;
            case 0x23B664u: goto label_23b664;
            case 0x23B668u: goto label_23b668;
            case 0x23B66Cu: goto label_23b66c;
            case 0x23B670u: goto label_23b670;
            case 0x23B674u: goto label_23b674;
            case 0x23B678u: goto label_23b678;
            case 0x23B67Cu: goto label_23b67c;
            case 0x23B680u: goto label_23b680;
            case 0x23B684u: goto label_23b684;
            case 0x23B688u: goto label_23b688;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B690u: goto label_23b690;
            case 0x23B694u: goto label_23b694;
            case 0x23B698u: goto label_23b698;
            case 0x23B69Cu: goto label_23b69c;
            case 0x23B6A0u: goto label_23b6a0;
            case 0x23B6A4u: goto label_23b6a4;
            case 0x23B6A8u: goto label_23b6a8;
            case 0x23B6ACu: goto label_23b6ac;
            case 0x23B6B0u: goto label_23b6b0;
            case 0x23B6B4u: goto label_23b6b4;
            case 0x23B6B8u: goto label_23b6b8;
            case 0x23B6BCu: goto label_23b6bc;
            case 0x23B6C0u: goto label_23b6c0;
            case 0x23B6C4u: goto label_23b6c4;
            case 0x23B6C8u: goto label_23b6c8;
            case 0x23B6CCu: goto label_23b6cc;
            case 0x23B6D0u: goto label_23b6d0;
            case 0x23B6D4u: goto label_23b6d4;
            case 0x23B6D8u: goto label_23b6d8;
            case 0x23B6DCu: goto label_23b6dc;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B6E4u: goto label_23b6e4;
            case 0x23B6E8u: goto label_23b6e8;
            case 0x23B6ECu: goto label_23b6ec;
            case 0x23B6F0u: goto label_23b6f0;
            case 0x23B6F4u: goto label_23b6f4;
            case 0x23B6F8u: goto label_23b6f8;
            case 0x23B6FCu: goto label_23b6fc;
            case 0x23B700u: goto label_23b700;
            case 0x23B704u: goto label_23b704;
            case 0x23B708u: goto label_23b708;
            case 0x23B70Cu: goto label_23b70c;
            case 0x23B710u: goto label_23b710;
            case 0x23B714u: goto label_23b714;
            case 0x23B718u: goto label_23b718;
            case 0x23B71Cu: goto label_23b71c;
            case 0x23B720u: goto label_23b720;
            case 0x23B724u: goto label_23b724;
            case 0x23B728u: goto label_23b728;
            case 0x23B72Cu: goto label_23b72c;
            case 0x23B730u: goto label_23b730;
            case 0x23B734u: goto label_23b734;
            case 0x23B738u: goto label_23b738;
            case 0x23B73Cu: goto label_23b73c;
            case 0x23B740u: goto label_23b740;
            case 0x23B744u: goto label_23b744;
            case 0x23B748u: goto label_23b748;
            case 0x23B74Cu: goto label_23b74c;
            case 0x23B750u: goto label_23b750;
            case 0x23B754u: goto label_23b754;
            case 0x23B758u: goto label_23b758;
            case 0x23B75Cu: goto label_23b75c;
            case 0x23B760u: goto label_23b760;
            case 0x23B764u: goto label_23b764;
            case 0x23B768u: goto label_23b768;
            case 0x23B76Cu: goto label_23b76c;
            case 0x23B770u: goto label_23b770;
            case 0x23B774u: goto label_23b774;
            case 0x23B778u: goto label_23b778;
            case 0x23B77Cu: goto label_23b77c;
            case 0x23B780u: goto label_23b780;
            case 0x23B784u: goto label_23b784;
            case 0x23B788u: goto label_23b788;
            case 0x23B78Cu: goto label_23b78c;
            case 0x23B790u: goto label_23b790;
            case 0x23B794u: goto label_23b794;
            case 0x23B798u: goto label_23b798;
            case 0x23B79Cu: goto label_23b79c;
            case 0x23B7A0u: goto label_23b7a0;
            case 0x23B7A4u: goto label_23b7a4;
            case 0x23B7A8u: goto label_23b7a8;
            case 0x23B7ACu: goto label_23b7ac;
            case 0x23B7B0u: goto label_23b7b0;
            case 0x23B7B4u: goto label_23b7b4;
            case 0x23B7B8u: goto label_23b7b8;
            case 0x23B7BCu: goto label_23b7bc;
            case 0x23B7C0u: goto label_23b7c0;
            case 0x23B7C4u: goto label_23b7c4;
            case 0x23B7C8u: goto label_23b7c8;
            case 0x23B7CCu: goto label_23b7cc;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B7D4u: goto label_23b7d4;
            case 0x23B7D8u: goto label_23b7d8;
            case 0x23B7DCu: goto label_23b7dc;
            case 0x23B7E0u: goto label_23b7e0;
            case 0x23B7E4u: goto label_23b7e4;
            case 0x23B7E8u: goto label_23b7e8;
            case 0x23B7ECu: goto label_23b7ec;
            case 0x23B7F0u: goto label_23b7f0;
            case 0x23B7F4u: goto label_23b7f4;
            case 0x23B7F8u: goto label_23b7f8;
            case 0x23B7FCu: goto label_23b7fc;
            case 0x23B800u: goto label_23b800;
            case 0x23B804u: goto label_23b804;
            case 0x23B808u: goto label_23b808;
            case 0x23B80Cu: goto label_23b80c;
            case 0x23B810u: goto label_23b810;
            case 0x23B814u: goto label_23b814;
            case 0x23B818u: goto label_23b818;
            case 0x23B81Cu: goto label_23b81c;
            case 0x23B820u: goto label_23b820;
            case 0x23B824u: goto label_23b824;
            case 0x23B828u: goto label_23b828;
            case 0x23B82Cu: goto label_23b82c;
            case 0x23B830u: goto label_23b830;
            case 0x23B834u: goto label_23b834;
            case 0x23B838u: goto label_23b838;
            case 0x23B83Cu: goto label_23b83c;
            case 0x23B840u: goto label_23b840;
            case 0x23B844u: goto label_23b844;
            case 0x23B848u: goto label_23b848;
            case 0x23B84Cu: goto label_23b84c;
            case 0x23B850u: goto label_23b850;
            case 0x23B854u: goto label_23b854;
            case 0x23B858u: goto label_23b858;
            case 0x23B85Cu: goto label_23b85c;
            case 0x23B860u: goto label_23b860;
            case 0x23B864u: goto label_23b864;
            case 0x23B868u: goto label_23b868;
            case 0x23B86Cu: goto label_23b86c;
            case 0x23B870u: goto label_23b870;
            case 0x23B874u: goto label_23b874;
            case 0x23B878u: goto label_23b878;
            case 0x23B87Cu: goto label_23b87c;
            case 0x23B880u: goto label_23b880;
            case 0x23B884u: goto label_23b884;
            case 0x23B888u: goto label_23b888;
            case 0x23B88Cu: goto label_23b88c;
            case 0x23B890u: goto label_23b890;
            case 0x23B894u: goto label_23b894;
            case 0x23B898u: goto label_23b898;
            case 0x23B89Cu: goto label_23b89c;
            case 0x23B8A0u: goto label_23b8a0;
            case 0x23B8A4u: goto label_23b8a4;
            case 0x23B8A8u: goto label_23b8a8;
            case 0x23B8ACu: goto label_23b8ac;
            case 0x23B8B0u: goto label_23b8b0;
            case 0x23B8B4u: goto label_23b8b4;
            case 0x23B8B8u: goto label_23b8b8;
            case 0x23B8BCu: goto label_23b8bc;
            case 0x23B8C0u: goto label_23b8c0;
            case 0x23B8C4u: goto label_23b8c4;
            case 0x23B8C8u: goto label_23b8c8;
            case 0x23B8CCu: goto label_23b8cc;
            case 0x23B8D0u: goto label_23b8d0;
            case 0x23B8D4u: goto label_23b8d4;
            case 0x23B8D8u: goto label_23b8d8;
            case 0x23B8DCu: goto label_23b8dc;
            case 0x23B8E0u: goto label_23b8e0;
            case 0x23B8E4u: goto label_23b8e4;
            case 0x23B8E8u: goto label_23b8e8;
            case 0x23B8ECu: goto label_23b8ec;
            case 0x23B8F0u: goto label_23b8f0;
            case 0x23B8F4u: goto label_23b8f4;
            case 0x23B8F8u: goto label_23b8f8;
            case 0x23B8FCu: goto label_23b8fc;
            case 0x23B900u: goto label_23b900;
            case 0x23B904u: goto label_23b904;
            case 0x23B908u: goto label_23b908;
            case 0x23B90Cu: goto label_23b90c;
            case 0x23B910u: goto label_23b910;
            case 0x23B914u: goto label_23b914;
            case 0x23B918u: goto label_23b918;
            case 0x23B91Cu: goto label_23b91c;
            case 0x23B920u: goto label_23b920;
            case 0x23B924u: goto label_23b924;
            case 0x23B928u: goto label_23b928;
            case 0x23B92Cu: goto label_23b92c;
            case 0x23B930u: goto label_23b930;
            case 0x23B934u: goto label_23b934;
            case 0x23B938u: goto label_23b938;
            case 0x23B93Cu: goto label_23b93c;
            case 0x23B940u: goto label_23b940;
            case 0x23B944u: goto label_23b944;
            case 0x23B948u: goto label_23b948;
            case 0x23B94Cu: goto label_23b94c;
            case 0x23B950u: goto label_23b950;
            case 0x23B954u: goto label_23b954;
            case 0x23B958u: goto label_23b958;
            case 0x23B95Cu: goto label_23b95c;
            case 0x23B960u: goto label_23b960;
            case 0x23B964u: goto label_23b964;
            case 0x23B968u: goto label_23b968;
            case 0x23B96Cu: goto label_23b96c;
            case 0x23B970u: goto label_23b970;
            case 0x23B974u: goto label_23b974;
            case 0x23B978u: goto label_23b978;
            case 0x23B97Cu: goto label_23b97c;
            case 0x23B980u: goto label_23b980;
            case 0x23B984u: goto label_23b984;
            case 0x23B988u: goto label_23b988;
            case 0x23B98Cu: goto label_23b98c;
            case 0x23B990u: goto label_23b990;
            case 0x23B994u: goto label_23b994;
            case 0x23B998u: goto label_23b998;
            case 0x23B99Cu: goto label_23b99c;
            case 0x23B9A0u: goto label_23b9a0;
            case 0x23B9A4u: goto label_23b9a4;
            case 0x23B9A8u: goto label_23b9a8;
            case 0x23B9ACu: goto label_23b9ac;
            case 0x23B9B0u: goto label_23b9b0;
            case 0x23B9B4u: goto label_23b9b4;
            case 0x23B9B8u: goto label_23b9b8;
            case 0x23B9BCu: goto label_23b9bc;
            case 0x23B9C0u: goto label_23b9c0;
            case 0x23B9C4u: goto label_23b9c4;
            case 0x23B9C8u: goto label_23b9c8;
            case 0x23B9CCu: goto label_23b9cc;
            case 0x23B9D0u: goto label_23b9d0;
            case 0x23B9D4u: goto label_23b9d4;
            case 0x23B9D8u: goto label_23b9d8;
            case 0x23B9DCu: goto label_23b9dc;
            case 0x23B9E0u: goto label_23b9e0;
            case 0x23B9E4u: goto label_23b9e4;
            case 0x23B9E8u: goto label_23b9e8;
            case 0x23B9ECu: goto label_23b9ec;
            case 0x23B9F0u: goto label_23b9f0;
            case 0x23B9F4u: goto label_23b9f4;
            case 0x23B9F8u: goto label_23b9f8;
            case 0x23B9FCu: goto label_23b9fc;
            case 0x23BA00u: goto label_23ba00;
            case 0x23BA04u: goto label_23ba04;
            case 0x23BA08u: goto label_23ba08;
            case 0x23BA0Cu: goto label_23ba0c;
            case 0x23BA10u: goto label_23ba10;
            case 0x23BA14u: goto label_23ba14;
            case 0x23BA18u: goto label_23ba18;
            case 0x23BA1Cu: goto label_23ba1c;
            case 0x23BA20u: goto label_23ba20;
            case 0x23BA24u: goto label_23ba24;
            case 0x23BA28u: goto label_23ba28;
            case 0x23BA2Cu: goto label_23ba2c;
            case 0x23BA30u: goto label_23ba30;
            case 0x23BA34u: goto label_23ba34;
            case 0x23BA38u: goto label_23ba38;
            case 0x23BA3Cu: goto label_23ba3c;
            case 0x23BA40u: goto label_23ba40;
            case 0x23BA44u: goto label_23ba44;
            case 0x23BA48u: goto label_23ba48;
            case 0x23BA4Cu: goto label_23ba4c;
            case 0x23BA50u: goto label_23ba50;
            case 0x23BA54u: goto label_23ba54;
            case 0x23BA58u: goto label_23ba58;
            case 0x23BA5Cu: goto label_23ba5c;
            case 0x23BA60u: goto label_23ba60;
            case 0x23BA64u: goto label_23ba64;
            case 0x23BA68u: goto label_23ba68;
            case 0x23BA6Cu: goto label_23ba6c;
            case 0x23BA70u: goto label_23ba70;
            case 0x23BA74u: goto label_23ba74;
            case 0x23BA78u: goto label_23ba78;
            case 0x23BA7Cu: goto label_23ba7c;
            case 0x23BA80u: goto label_23ba80;
            case 0x23BA84u: goto label_23ba84;
            case 0x23BA88u: goto label_23ba88;
            case 0x23BA8Cu: goto label_23ba8c;
            case 0x23BA90u: goto label_23ba90;
            case 0x23BA94u: goto label_23ba94;
            case 0x23BA98u: goto label_23ba98;
            case 0x23BA9Cu: goto label_23ba9c;
            case 0x23BAA0u: goto label_23baa0;
            case 0x23BAA4u: goto label_23baa4;
            case 0x23BAA8u: goto label_23baa8;
            case 0x23BAACu: goto label_23baac;
            case 0x23BAB0u: goto label_23bab0;
            case 0x23BAB4u: goto label_23bab4;
            case 0x23BAB8u: goto label_23bab8;
            case 0x23BABCu: goto label_23babc;
            case 0x23BAC0u: goto label_23bac0;
            case 0x23BAC4u: goto label_23bac4;
            case 0x23BAC8u: goto label_23bac8;
            case 0x23BACCu: goto label_23bacc;
            case 0x23BAD0u: goto label_23bad0;
            case 0x23BAD4u: goto label_23bad4;
            case 0x23BAD8u: goto label_23bad8;
            case 0x23BADCu: goto label_23badc;
            case 0x23BAE0u: goto label_23bae0;
            case 0x23BAE4u: goto label_23bae4;
            case 0x23BAE8u: goto label_23bae8;
            case 0x23BAECu: goto label_23baec;
            case 0x23BAF0u: goto label_23baf0;
            case 0x23BAF4u: goto label_23baf4;
            case 0x23BAF8u: goto label_23baf8;
            case 0x23BAFCu: goto label_23bafc;
            case 0x23BB00u: goto label_23bb00;
            case 0x23BB04u: goto label_23bb04;
            case 0x23BB08u: goto label_23bb08;
            case 0x23BB0Cu: goto label_23bb0c;
            case 0x23BB10u: goto label_23bb10;
            case 0x23BB14u: goto label_23bb14;
            case 0x23BB18u: goto label_23bb18;
            case 0x23BB1Cu: goto label_23bb1c;
            case 0x23BB20u: goto label_23bb20;
            case 0x23BB24u: goto label_23bb24;
            case 0x23BB28u: goto label_23bb28;
            case 0x23BB2Cu: goto label_23bb2c;
            case 0x23BB30u: goto label_23bb30;
            case 0x23BB34u: goto label_23bb34;
            case 0x23BB38u: goto label_23bb38;
            case 0x23BB3Cu: goto label_23bb3c;
            case 0x23BB40u: goto label_23bb40;
            case 0x23BB44u: goto label_23bb44;
            case 0x23BB48u: goto label_23bb48;
            case 0x23BB4Cu: goto label_23bb4c;
            case 0x23BB50u: goto label_23bb50;
            case 0x23BB54u: goto label_23bb54;
            case 0x23BB58u: goto label_23bb58;
            case 0x23BB5Cu: goto label_23bb5c;
            case 0x23BB60u: goto label_23bb60;
            case 0x23BB64u: goto label_23bb64;
            case 0x23BB68u: goto label_23bb68;
            case 0x23BB6Cu: goto label_23bb6c;
            case 0x23BB70u: goto label_23bb70;
            case 0x23BB74u: goto label_23bb74;
            case 0x23BB78u: goto label_23bb78;
            case 0x23BB7Cu: goto label_23bb7c;
            case 0x23BB80u: goto label_23bb80;
            case 0x23BB84u: goto label_23bb84;
            case 0x23BB88u: goto label_23bb88;
            case 0x23BB8Cu: goto label_23bb8c;
            case 0x23BB90u: goto label_23bb90;
            case 0x23BB94u: goto label_23bb94;
            case 0x23BB98u: goto label_23bb98;
            case 0x23BB9Cu: goto label_23bb9c;
            case 0x23BBA0u: goto label_23bba0;
            case 0x23BBA4u: goto label_23bba4;
            case 0x23BBA8u: goto label_23bba8;
            case 0x23BBACu: goto label_23bbac;
            case 0x23BBB0u: goto label_23bbb0;
            case 0x23BBB4u: goto label_23bbb4;
            case 0x23BBB8u: goto label_23bbb8;
            case 0x23BBBCu: goto label_23bbbc;
            case 0x23BBC0u: goto label_23bbc0;
            case 0x23BBC4u: goto label_23bbc4;
            case 0x23BBC8u: goto label_23bbc8;
            case 0x23BBCCu: goto label_23bbcc;
            case 0x23BBD0u: goto label_23bbd0;
            case 0x23BBD4u: goto label_23bbd4;
            case 0x23BBD8u: goto label_23bbd8;
            case 0x23BBDCu: goto label_23bbdc;
            case 0x23BBE0u: goto label_23bbe0;
            case 0x23BBE4u: goto label_23bbe4;
            case 0x23BBE8u: goto label_23bbe8;
            case 0x23BBECu: goto label_23bbec;
            case 0x23BBF0u: goto label_23bbf0;
            case 0x23BBF4u: goto label_23bbf4;
            case 0x23BBF8u: goto label_23bbf8;
            case 0x23BBFCu: goto label_23bbfc;
            case 0x23BC00u: goto label_23bc00;
            case 0x23BC04u: goto label_23bc04;
            case 0x23BC08u: goto label_23bc08;
            case 0x23BC0Cu: goto label_23bc0c;
            case 0x23BC10u: goto label_23bc10;
            case 0x23BC14u: goto label_23bc14;
            case 0x23BC18u: goto label_23bc18;
            case 0x23BC1Cu: goto label_23bc1c;
            case 0x23BC20u: goto label_23bc20;
            case 0x23BC24u: goto label_23bc24;
            case 0x23BC28u: goto label_23bc28;
            case 0x23BC2Cu: goto label_23bc2c;
            case 0x23BC30u: goto label_23bc30;
            case 0x23BC34u: goto label_23bc34;
            case 0x23BC38u: goto label_23bc38;
            case 0x23BC3Cu: goto label_23bc3c;
            case 0x23BC40u: goto label_23bc40;
            case 0x23BC44u: goto label_23bc44;
            case 0x23BC48u: goto label_23bc48;
            case 0x23BC4Cu: goto label_23bc4c;
            case 0x23BC50u: goto label_23bc50;
            case 0x23BC54u: goto label_23bc54;
            case 0x23BC58u: goto label_23bc58;
            case 0x23BC5Cu: goto label_23bc5c;
            case 0x23BC60u: goto label_23bc60;
            case 0x23BC64u: goto label_23bc64;
            case 0x23BC68u: goto label_23bc68;
            case 0x23BC6Cu: goto label_23bc6c;
            case 0x23BC70u: goto label_23bc70;
            case 0x23BC74u: goto label_23bc74;
            case 0x23BC78u: goto label_23bc78;
            case 0x23BC7Cu: goto label_23bc7c;
            case 0x23BC80u: goto label_23bc80;
            case 0x23BC84u: goto label_23bc84;
            case 0x23BC88u: goto label_23bc88;
            case 0x23BC8Cu: goto label_23bc8c;
            case 0x23BC90u: goto label_23bc90;
            case 0x23BC94u: goto label_23bc94;
            case 0x23BC98u: goto label_23bc98;
            case 0x23BC9Cu: goto label_23bc9c;
            case 0x23BCA0u: goto label_23bca0;
            case 0x23BCA4u: goto label_23bca4;
            case 0x23BCA8u: goto label_23bca8;
            case 0x23BCACu: goto label_23bcac;
            case 0x23BCB0u: goto label_23bcb0;
            case 0x23BCB4u: goto label_23bcb4;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BCBCu: goto label_23bcbc;
            case 0x23BCC0u: goto label_23bcc0;
            case 0x23BCC4u: goto label_23bcc4;
            case 0x23BCC8u: goto label_23bcc8;
            case 0x23BCCCu: goto label_23bccc;
            case 0x23BCD0u: goto label_23bcd0;
            case 0x23BCD4u: goto label_23bcd4;
            case 0x23BCD8u: goto label_23bcd8;
            case 0x23BCDCu: goto label_23bcdc;
            case 0x23BCE0u: goto label_23bce0;
            case 0x23BCE4u: goto label_23bce4;
            case 0x23BCE8u: goto label_23bce8;
            case 0x23BCECu: goto label_23bcec;
            case 0x23BCF0u: goto label_23bcf0;
            case 0x23BCF4u: goto label_23bcf4;
            case 0x23BCF8u: goto label_23bcf8;
            case 0x23BCFCu: goto label_23bcfc;
            case 0x23BD00u: goto label_23bd00;
            case 0x23BD04u: goto label_23bd04;
            case 0x23BD08u: goto label_23bd08;
            case 0x23BD0Cu: goto label_23bd0c;
            case 0x23BD10u: goto label_23bd10;
            case 0x23BD14u: goto label_23bd14;
            case 0x23BD18u: goto label_23bd18;
            case 0x23BD1Cu: goto label_23bd1c;
            case 0x23BD20u: goto label_23bd20;
            case 0x23BD24u: goto label_23bd24;
            case 0x23BD28u: goto label_23bd28;
            case 0x23BD2Cu: goto label_23bd2c;
            case 0x23BD30u: goto label_23bd30;
            case 0x23BD34u: goto label_23bd34;
            case 0x23BD38u: goto label_23bd38;
            case 0x23BD3Cu: goto label_23bd3c;
            case 0x23BD40u: goto label_23bd40;
            case 0x23BD44u: goto label_23bd44;
            case 0x23BD48u: goto label_23bd48;
            case 0x23BD4Cu: goto label_23bd4c;
            case 0x23BD50u: goto label_23bd50;
            case 0x23BD54u: goto label_23bd54;
            case 0x23BD58u: goto label_23bd58;
            case 0x23BD5Cu: goto label_23bd5c;
            case 0x23BD60u: goto label_23bd60;
            case 0x23BD64u: goto label_23bd64;
            case 0x23BD68u: goto label_23bd68;
            case 0x23BD6Cu: goto label_23bd6c;
            case 0x23BD70u: goto label_23bd70;
            case 0x23BD74u: goto label_23bd74;
            case 0x23BD78u: goto label_23bd78;
            case 0x23BD7Cu: goto label_23bd7c;
            case 0x23BD80u: goto label_23bd80;
            case 0x23BD84u: goto label_23bd84;
            case 0x23BD88u: goto label_23bd88;
            case 0x23BD8Cu: goto label_23bd8c;
            case 0x23BD90u: goto label_23bd90;
            case 0x23BD94u: goto label_23bd94;
            case 0x23BD98u: goto label_23bd98;
            case 0x23BD9Cu: goto label_23bd9c;
            case 0x23BDA0u: goto label_23bda0;
            case 0x23BDA4u: goto label_23bda4;
            case 0x23BDA8u: goto label_23bda8;
            case 0x23BDACu: goto label_23bdac;
            case 0x23BDB0u: goto label_23bdb0;
            case 0x23BDB4u: goto label_23bdb4;
            case 0x23BDB8u: goto label_23bdb8;
            case 0x23BDBCu: goto label_23bdbc;
            case 0x23BDC0u: goto label_23bdc0;
            case 0x23BDC4u: goto label_23bdc4;
            case 0x23BDC8u: goto label_23bdc8;
            case 0x23BDCCu: goto label_23bdcc;
            case 0x23BDD0u: goto label_23bdd0;
            case 0x23BDD4u: goto label_23bdd4;
            case 0x23BDD8u: goto label_23bdd8;
            case 0x23BDDCu: goto label_23bddc;
            case 0x23BDE0u: goto label_23bde0;
            case 0x23BDE4u: goto label_23bde4;
            case 0x23BDE8u: goto label_23bde8;
            case 0x23BDECu: goto label_23bdec;
            case 0x23BDF0u: goto label_23bdf0;
            case 0x23BDF4u: goto label_23bdf4;
            case 0x23BDF8u: goto label_23bdf8;
            case 0x23BDFCu: goto label_23bdfc;
            case 0x23BE00u: goto label_23be00;
            case 0x23BE04u: goto label_23be04;
            case 0x23BE08u: goto label_23be08;
            case 0x23BE0Cu: goto label_23be0c;
            case 0x23BE10u: goto label_23be10;
            case 0x23BE14u: goto label_23be14;
            case 0x23BE18u: goto label_23be18;
            case 0x23BE1Cu: goto label_23be1c;
            case 0x23BE20u: goto label_23be20;
            case 0x23BE24u: goto label_23be24;
            case 0x23BE28u: goto label_23be28;
            case 0x23BE2Cu: goto label_23be2c;
            case 0x23BE30u: goto label_23be30;
            case 0x23BE34u: goto label_23be34;
            case 0x23BE38u: goto label_23be38;
            case 0x23BE3Cu: goto label_23be3c;
            case 0x23BE40u: goto label_23be40;
            case 0x23BE44u: goto label_23be44;
            case 0x23BE48u: goto label_23be48;
            case 0x23BE4Cu: goto label_23be4c;
            case 0x23BE50u: goto label_23be50;
            case 0x23BE54u: goto label_23be54;
            case 0x23BE58u: goto label_23be58;
            case 0x23BE5Cu: goto label_23be5c;
            case 0x23BE60u: goto label_23be60;
            case 0x23BE64u: goto label_23be64;
            case 0x23BE68u: goto label_23be68;
            case 0x23BE6Cu: goto label_23be6c;
            case 0x23BE70u: goto label_23be70;
            case 0x23BE74u: goto label_23be74;
            case 0x23BE78u: goto label_23be78;
            case 0x23BE7Cu: goto label_23be7c;
            case 0x23BE80u: goto label_23be80;
            case 0x23BE84u: goto label_23be84;
            case 0x23BE88u: goto label_23be88;
            case 0x23BE8Cu: goto label_23be8c;
            case 0x23BE90u: goto label_23be90;
            case 0x23BE94u: goto label_23be94;
            case 0x23BE98u: goto label_23be98;
            case 0x23BE9Cu: goto label_23be9c;
            case 0x23BEA0u: goto label_23bea0;
            case 0x23BEA4u: goto label_23bea4;
            case 0x23BEA8u: goto label_23bea8;
            case 0x23BEACu: goto label_23beac;
            case 0x23BEB0u: goto label_23beb0;
            case 0x23BEB4u: goto label_23beb4;
            case 0x23BEB8u: goto label_23beb8;
            case 0x23BEBCu: goto label_23bebc;
            case 0x23BEC0u: goto label_23bec0;
            case 0x23BEC4u: goto label_23bec4;
            case 0x23BEC8u: goto label_23bec8;
            case 0x23BECCu: goto label_23becc;
            case 0x23BED0u: goto label_23bed0;
            case 0x23BED4u: goto label_23bed4;
            case 0x23BED8u: goto label_23bed8;
            case 0x23BEDCu: goto label_23bedc;
            case 0x23BEE0u: goto label_23bee0;
            case 0x23BEE4u: goto label_23bee4;
            case 0x23BEE8u: goto label_23bee8;
            case 0x23BEECu: goto label_23beec;
            case 0x23BEF0u: goto label_23bef0;
            case 0x23BEF4u: goto label_23bef4;
            case 0x23BEF8u: goto label_23bef8;
            case 0x23BEFCu: goto label_23befc;
            case 0x23BF00u: goto label_23bf00;
            default: break;
        }
        return;
    }
label_fallthrough_0x23befc:
    ctx->pc = 0x23BF04u;
}
