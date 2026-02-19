#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_optmenu
// Address: 0x20c518 - 0x20c8a4
void do_optmenu_0x20c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20c518u;

    // 0x20c518: 0x27bdffd0
    ctx->pc = 0x20c518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20c51c: 0xffbf0020
    ctx->pc = 0x20c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20c520: 0xffb10010
    ctx->pc = 0x20c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20c524: 0xffb00000
    ctx->pc = 0x20c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c528: 0x80802d
    ctx->pc = 0x20c528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c52c: 0xc08312a
    ctx->pc = 0x20C52Cu;
    SET_GPR_U32(ctx, 31, 0x20C534u);
    ctx->pc = 0x20C530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20C4A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_options_time_0x20c4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C534u; }
    }
    if (ctx->pc != 0x20C534u) { return; }
    ctx->pc = 0x20C534u;
    // 0x20c534: 0x3c02003c
    ctx->pc = 0x20c534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20c538: 0x8e03007c
    ctx->pc = 0x20c538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x20c53c: 0x8c42c508
    ctx->pc = 0x20c53cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952200)));
    // 0x20c540: 0x621821
    ctx->pc = 0x20c540u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c544: 0xae03007c
    ctx->pc = 0x20c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x20c548: 0x8e040078
    ctx->pc = 0x20c548u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x20c54c: 0x4800009
    ctx->pc = 0x20C54Cu;
    {
        const bool branch_taken_0x20c54c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20C550u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x20c54c) {
            ctx->pc = 0x20C574u;
            goto label_20c574;
        }
    }
    ctx->pc = 0x20C554u;
    // 0x20c554: 0x24631b90
    ctx->pc = 0x20c554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x20c558: 0x2402003c
    ctx->pc = 0x20c558u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x20c55c: 0x821018
    ctx->pc = 0x20c55cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20c560: 0x622021
    ctx->pc = 0x20c560u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c564: 0x8c860008
    ctx->pc = 0x20c564u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20c568: 0x80182d
    ctx->pc = 0x20c568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c56c: 0x10000005
    ctx->pc = 0x20C56Cu;
    {
        const bool branch_taken_0x20c56c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C570u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        if (branch_taken_0x20c56c) {
            ctx->pc = 0x20C584u;
            goto label_20c584;
        }
    }
    ctx->pc = 0x20C574u;
label_20c574:
    // 0x20c574: 0x3c020031
    ctx->pc = 0x20c574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20c578: 0x8c461b48
    ctx->pc = 0x20c578u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 6984)));
    // 0x20c57c: 0x3c020031
    ctx->pc = 0x20c57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20c580: 0x8c471b30
    ctx->pc = 0x20c580u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 6960)));
label_20c584:
    // 0x20c584: 0x8e020084
    ctx->pc = 0x20c584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20c588: 0x54400011
    ctx->pc = 0x20C588u;
    {
        const bool branch_taken_0x20c588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20c588) {
            ctx->pc = 0x20C58Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x20C5D0u;
            goto label_20c5d0;
        }
    }
    ctx->pc = 0x20C590u;
    // 0x20c590: 0x8e02001c
    ctx->pc = 0x20c590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c594: 0x8c420000
    ctx->pc = 0x20c594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c598: 0x1040000b
    ctx->pc = 0x20C598u;
    {
        const bool branch_taken_0x20c598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C59Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20c598) {
            ctx->pc = 0x20C5C8u;
            goto label_20c5c8;
        }
    }
    ctx->pc = 0x20C5A0u;
    // 0x20c5a0: 0x8e08001c
    ctx->pc = 0x20c5a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c5a4: 0x24040024
    ctx->pc = 0x20c5a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
label_20c5a8:
    // 0x20c5a8: 0x24630001
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c5ac: 0x642818
    ctx->pc = 0x20c5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20c5b0: 0xa81021
    ctx->pc = 0x20c5b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x20c5b4: 0x8c420000
    ctx->pc = 0x20c5b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c5b8: 0x0
    ctx->pc = 0x20c5b8u;
    // NOP
    // 0x20c5bc: 0x0
    ctx->pc = 0x20c5bcu;
    // NOP
    // 0x20c5c0: 0x1440fff9
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C5C8u;
label_20c5c8:
    // 0x20c5c8: 0xae030084
    ctx->pc = 0x20c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x20c5cc: 0x8e030074
    ctx->pc = 0x20c5ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20c5d0:
    // 0x20c5d0: 0x60282d
    ctx->pc = 0x20c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c5d4: 0x8e04001c
    ctx->pc = 0x20c5d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c5d8: 0x24020024
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20c5dc: 0x624018
    ctx->pc = 0x20c5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20c5e0: 0x1041821
    ctx->pc = 0x20c5e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x20c5e4: 0x8c620020
    ctx->pc = 0x20c5e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x20c5e8: 0x441000b
    ctx->pc = 0x20C5E8u;
    {
        const bool branch_taken_0x20c5e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C5ECu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20c5e8) {
            ctx->pc = 0x20C618u;
            goto label_20c618;
        }
    }
    ctx->pc = 0x20C5F0u;
    // 0x20c5f0: 0x24030024
    ctx->pc = 0x20c5f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20c5f4: 0x0
    ctx->pc = 0x20c5f4u;
    // NOP
label_20c5f8:
    // 0x20c5f8: 0x24a20001
    ctx->pc = 0x20c5f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20c5fc: 0xae020074
    ctx->pc = 0x20c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x20c600: 0x40282d
    ctx->pc = 0x20c600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c604: 0x432018
    ctx->pc = 0x20c604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20c608: 0x891021
    ctx->pc = 0x20c608u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x20c60c: 0x8c420020
    ctx->pc = 0x20c60cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20c610: 0x440fff9
    ctx->pc = 0x20C610u;
    {
        const bool branch_taken_0x20c610 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20c610) {
            ctx->pc = 0x20C5F8u;
            goto label_20c5f8;
        }
    }
    ctx->pc = 0x20C618u;
label_20c618:
    // 0x20c618: 0x8e020074
    ctx->pc = 0x20c618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c61c: 0x8e030084
    ctx->pc = 0x20c61cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20c620: 0x43102a
    ctx->pc = 0x20c620u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x20c624: 0x50400001
    ctx->pc = 0x20C624u;
    {
        const bool branch_taken_0x20c624 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c624) {
            ctx->pc = 0x20C628u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
            ctx->pc = 0x20C62Cu;
            goto label_20c62c;
        }
    }
    ctx->pc = 0x20C62Cu;
label_20c62c:
    // 0x20c62c: 0x8e030078
    ctx->pc = 0x20c62cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x20c630: 0x460000a
    ctx->pc = 0x20C630u;
    {
        const bool branch_taken_0x20c630 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20C634u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20c630) {
            ctx->pc = 0x20C65Cu;
            goto label_20c65c;
        }
    }
    ctx->pc = 0x20C638u;
    // 0x20c638: 0x24040001
    ctx->pc = 0x20c638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c63c: 0x641804
    ctx->pc = 0x20c63cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x20c640: 0x8c4207b4
    ctx->pc = 0x20c640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
    // 0x20c644: 0x621824
    ctx->pc = 0x20c644u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c648: 0x54600005
    ctx->pc = 0x20C648u;
    {
        const bool branch_taken_0x20c648 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20c648) {
            ctx->pc = 0x20C64Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x20C660u;
            goto label_20c660;
        }
    }
    ctx->pc = 0x20C650u;
    // 0x20c650: 0x3c020032
    ctx->pc = 0x20c650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c654: 0x10000016
    ctx->pc = 0x20C654u;
    {
        const bool branch_taken_0x20c654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C658u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955872), GPR_U32(ctx, 4));
        if (branch_taken_0x20c654) {
            ctx->pc = 0x20C6B0u;
            goto label_20c6b0;
        }
    }
    ctx->pc = 0x20C65Cu;
label_20c65c:
    // 0x20c65c: 0x8e030000
    ctx->pc = 0x20c65cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c660:
    // 0x20c660: 0x24020002
    ctx->pc = 0x20c660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c664: 0x54620007
    ctx->pc = 0x20C664u;
    {
        const bool branch_taken_0x20c664 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20c664) {
            ctx->pc = 0x20C668u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x20C684u;
            goto label_20c684;
        }
    }
    ctx->pc = 0x20C66Cu;
    // 0x20c66c: 0x3c020004
    ctx->pc = 0x20c66cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x20c670: 0xc21024
    ctx->pc = 0x20c670u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20c674: 0x1040000b
    ctx->pc = 0x20C674u;
    {
        const bool branch_taken_0x20c674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C678u;
        SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
        if (branch_taken_0x20c674) {
            ctx->pc = 0x20C6A4u;
            goto label_20c6a4;
        }
    }
    ctx->pc = 0x20C67Cu;
    // 0x20c67c: 0x10000009
    ctx->pc = 0x20C67Cu;
    {
        const bool branch_taken_0x20c67c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C680u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x20c67c) {
            ctx->pc = 0x20C6A4u;
            goto label_20c6a4;
        }
    }
    ctx->pc = 0x20C684u;
label_20c684:
    // 0x20c684: 0x10400007
    ctx->pc = 0x20C684u;
    {
        const bool branch_taken_0x20c684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C688u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x20c684) {
            ctx->pc = 0x20C6A4u;
            goto label_20c6a4;
        }
    }
    ctx->pc = 0x20C68Cu;
    // 0x20c68c: 0xc21024
    ctx->pc = 0x20c68cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20c690: 0x10400006
    ctx->pc = 0x20C690u;
    {
        const bool branch_taken_0x20c690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C694u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x20c690) {
            ctx->pc = 0x20C6ACu;
            goto label_20c6ac;
        }
    }
    ctx->pc = 0x20C698u;
    // 0x20c698: 0x24020001
    ctx->pc = 0x20c698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c69c: 0x10000003
    ctx->pc = 0x20C69Cu;
    {
        const bool branch_taken_0x20c69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C6A0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955872), GPR_U32(ctx, 2));
        if (branch_taken_0x20c69c) {
            ctx->pc = 0x20C6ACu;
            goto label_20c6ac;
        }
    }
    ctx->pc = 0x20C6A4u;
label_20c6a4:
    // 0x20c6a4: 0x3c020032
    ctx->pc = 0x20c6a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20c6a8: 0xac40d360
    ctx->pc = 0x20c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955872), GPR_U32(ctx, 0));
label_20c6ac:
    // 0x20c6ac: 0x3c020032
    ctx->pc = 0x20c6acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20c6b0:
    // 0x20c6b0: 0x8c42d360
    ctx->pc = 0x20c6b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955872)));
    // 0x20c6b4: 0x14400076
    ctx->pc = 0x20C6B4u;
    {
        const bool branch_taken_0x20c6b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C6B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x20c6b4) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C6BCu;
    // 0x20c6bc: 0x3c020200
    ctx->pc = 0x20c6bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x20c6c0: 0xc21024
    ctx->pc = 0x20c6c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20c6c4: 0x10400019
    ctx->pc = 0x20C6C4u;
    {
        const bool branch_taken_0x20c6c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C6C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x20c6c4) {
            ctx->pc = 0x20C72Cu;
            goto label_20c72c;
        }
    }
    ctx->pc = 0x20C6CCu;
    // 0x20c6cc: 0x8e020074
    ctx->pc = 0x20c6ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c6d0: 0x8e04001c
    ctx->pc = 0x20c6d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c6d4: 0x431018
    ctx->pc = 0x20c6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20c6d8: 0x441021
    ctx->pc = 0x20c6d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20c6dc: 0x8c420020
    ctx->pc = 0x20c6dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20c6e0: 0x440000e
    ctx->pc = 0x20C6E0u;
    {
        const bool branch_taken_0x20c6e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20c6e0) {
            ctx->pc = 0x20C71Cu;
            goto label_20c71c;
        }
    }
    ctx->pc = 0x20C6E8u;
    // 0x20c6e8: 0x8e020020
    ctx->pc = 0x20c6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20c6ec: 0x30420400
    ctx->pc = 0x20c6ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x20c6f0: 0x50400006
    ctx->pc = 0x20C6F0u;
    {
        const bool branch_taken_0x20c6f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c6f0) {
            ctx->pc = 0x20C6F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x20C70Cu;
            goto label_20c70c;
        }
    }
    ctx->pc = 0x20C6F8u;
    // 0x20c6f8: 0xc0981a6
    ctx->pc = 0x20C6F8u;
    SET_GPR_U32(ctx, 31, 0x20C700u);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C700u; }
    }
    if (ctx->pc != 0x20C700u) { return; }
    ctx->pc = 0x20C700u;
    // 0x20c700: 0x8e020074
    ctx->pc = 0x20c700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c704: 0x8e04001c
    ctx->pc = 0x20c704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c708: 0x24030024
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
label_20c70c:
    // 0x20c70c: 0x431018
    ctx->pc = 0x20c70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20c710: 0x441021
    ctx->pc = 0x20c710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20c714: 0x1000005e
    ctx->pc = 0x20C714u;
    {
        const bool branch_taken_0x20c714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C718u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        if (branch_taken_0x20c714) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C71Cu;
label_20c71c:
    // 0x20c71c: 0xc098196
    ctx->pc = 0x20C71Cu;
    SET_GPR_U32(ctx, 31, 0x20C724u);
    ctx->pc = 0x260658u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBuzzer_0x260658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C724u; }
    }
    if (ctx->pc != 0x20C724u) { return; }
    ctx->pc = 0x20C724u;
    // 0x20c724: 0x1000005a
    ctx->pc = 0x20C724u;
    {
        const bool branch_taken_0x20c724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C728u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20c724) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C72Cu;
label_20c72c:
    // 0x20c72c: 0x3c020800
    ctx->pc = 0x20c72cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
    // 0x20c730: 0xc21024
    ctx->pc = 0x20c730u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20c734: 0x10400009
    ctx->pc = 0x20C734u;
    {
        const bool branch_taken_0x20c734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C738u;
        SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
        if (branch_taken_0x20c734) {
            ctx->pc = 0x20C75Cu;
            goto label_20c75c;
        }
    }
    ctx->pc = 0x20C73Cu;
    // 0x20c73c: 0x8e020020
    ctx->pc = 0x20c73cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20c740: 0x30420800
    ctx->pc = 0x20c740u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x20c744: 0x10400052
    ctx->pc = 0x20C744u;
    {
        const bool branch_taken_0x20c744 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C748u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20c744) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C74Cu;
    // 0x20c74c: 0xc0981aa
    ctx->pc = 0x20C74Cu;
    SET_GPR_U32(ctx, 31, 0x20C754u);
    ctx->pc = 0x2606A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioMenuExit_0x2606a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C754u; }
    }
    if (ctx->pc != 0x20C754u) { return; }
    ctx->pc = 0x20C754u;
    // 0x20c754: 0x1000004e
    ctx->pc = 0x20C754u;
    {
        const bool branch_taken_0x20c754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C758u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20c754) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C75Cu;
label_20c75c:
    // 0x20c75c: 0xc21024
    ctx->pc = 0x20c75cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20c760: 0x1440004b
    ctx->pc = 0x20C760u;
    {
        const bool branch_taken_0x20c760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C764u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x20c760) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C768u;
    // 0x20c768: 0x30c20003
    ctx->pc = 0x20c768u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 3));
    // 0x20c76c: 0x14400048
    ctx->pc = 0x20C76Cu;
    {
        const bool branch_taken_0x20c76c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C770u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x20c76c) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C774u;
    // 0x20c774: 0x30c2000c
    ctx->pc = 0x20c774u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 12));
    // 0x20c778: 0x14400045
    ctx->pc = 0x20C778u;
    {
        const bool branch_taken_0x20c778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C77Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x20c778) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C780u;
    // 0x20c780: 0x12200032
    ctx->pc = 0x20C780u;
    {
        const bool branch_taken_0x20c780 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C784u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 48));
        if (branch_taken_0x20c780) {
            ctx->pc = 0x20C84Cu;
            goto label_20c84c;
        }
    }
    ctx->pc = 0x20C788u;
    // 0x20c788: 0x8e02001c
    ctx->pc = 0x20c788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c78c: 0x8c420000
    ctx->pc = 0x20c78cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c790: 0x1040002d
    ctx->pc = 0x20C790u;
    {
        const bool branch_taken_0x20c790 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C794u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 192));
        if (branch_taken_0x20c790) {
            ctx->pc = 0x20C848u;
            goto label_20c848;
        }
    }
    ctx->pc = 0x20C798u;
    // 0x20c798: 0x10400014
    ctx->pc = 0x20C798u;
    {
        const bool branch_taken_0x20c798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C79Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 48));
        if (branch_taken_0x20c798) {
            ctx->pc = 0x20C7ECu;
            goto label_20c7ec;
        }
    }
    ctx->pc = 0x20C7A0u;
    // 0x20c7a0: 0x8e050074
    ctx->pc = 0x20c7a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c7a4: 0x8e040084
    ctx->pc = 0x20c7a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20c7a8: 0x24060024
    ctx->pc = 0x20c7a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20c7ac: 0x8e020074
    ctx->pc = 0x20c7acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20c7b0:
    // 0x20c7b0: 0x24420001
    ctx->pc = 0x20c7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c7b4: 0xae020074
    ctx->pc = 0x20c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x20c7b8: 0x44102a
    ctx->pc = 0x20c7b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x20c7bc: 0x50400001
    ctx->pc = 0x20C7BCu;
    {
        const bool branch_taken_0x20c7bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c7bc) {
            ctx->pc = 0x20C7C0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
            ctx->pc = 0x20C7C4u;
            goto label_20c7c4;
        }
    }
    ctx->pc = 0x20C7C4u;
label_20c7c4:
    // 0x20c7c4: 0x8e020074
    ctx->pc = 0x20c7c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c7c8: 0x1045001b
    ctx->pc = 0x20C7C8u;
    {
        const bool branch_taken_0x20c7c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x20C7CCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20c7c8) {
            ctx->pc = 0x20C838u;
            goto label_20c838;
        }
    }
    ctx->pc = 0x20C7D0u;
    // 0x20c7d0: 0x8e03001c
    ctx->pc = 0x20c7d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c7d4: 0x431021
    ctx->pc = 0x20c7d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c7d8: 0x8c420020
    ctx->pc = 0x20c7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20c7dc: 0x442fff4
    ctx->pc = 0x20C7DCu;
    {
        const bool branch_taken_0x20c7dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20c7dc) {
            ctx->pc = 0x20C7E0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x20C7B0u;
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C7E4u;
    // 0x20c7e4: 0x10000014
    ctx->pc = 0x20C7E4u;
    {
        const bool branch_taken_0x20c7e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c7e4) {
            ctx->pc = 0x20C838u;
            goto label_20c838;
        }
    }
    ctx->pc = 0x20C7ECu;
label_20c7ec:
    // 0x20c7ec: 0x1040001c
    ctx->pc = 0x20C7ECu;
    {
        const bool branch_taken_0x20c7ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C7F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x20c7ec) {
            ctx->pc = 0x20C860u;
            goto label_20c860;
        }
    }
    ctx->pc = 0x20C7F4u;
    // 0x20c7f4: 0x8e040074
    ctx->pc = 0x20c7f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c7f8: 0x8e020074
    ctx->pc = 0x20c7f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c7fc: 0x0
    ctx->pc = 0x20c7fcu;
    // NOP
label_20c800:
    // 0x20c800: 0x2442ffff
    ctx->pc = 0x20c800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20c804: 0x4410004
    ctx->pc = 0x20C804u;
    {
        const bool branch_taken_0x20c804 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C808u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        if (branch_taken_0x20c804) {
            ctx->pc = 0x20C818u;
            goto label_20c818;
        }
    }
    ctx->pc = 0x20C80Cu;
    // 0x20c80c: 0x8e020084
    ctx->pc = 0x20c80cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20c810: 0x2442ffff
    ctx->pc = 0x20c810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20c814: 0xae020074
    ctx->pc = 0x20c814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20c818:
    // 0x20c818: 0x8e020074
    ctx->pc = 0x20c818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x20c81c: 0x10440006
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x20C820u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C838u;
            goto label_20c838;
        }
    }
    ctx->pc = 0x20C824u;
    // 0x20c824: 0x8e03001c
    ctx->pc = 0x20c824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20c828: 0x431021
    ctx->pc = 0x20c828u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c82c: 0x8c420020
    ctx->pc = 0x20c82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20c830: 0x442fff3
    ctx->pc = 0x20C830u;
    {
        const bool branch_taken_0x20c830 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20c830) {
            ctx->pc = 0x20C834u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x20C800u;
            goto label_20c800;
        }
    }
    ctx->pc = 0x20C838u;
label_20c838:
    // 0x20c838: 0xc09819a
    ctx->pc = 0x20C838u;
    SET_GPR_U32(ctx, 31, 0x20C840u);
    ctx->pc = 0x260668u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorV_0x260668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C840u; }
    }
    if (ctx->pc != 0x20C840u) { return; }
    ctx->pc = 0x20C840u;
    // 0x20c840: 0x10000013
    ctx->pc = 0x20C840u;
    {
        const bool branch_taken_0x20c840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C844u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20c840) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C848u;
label_20c848:
    // 0x20c848: 0x30c20030
    ctx->pc = 0x20c848u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 48));
label_20c84c:
    // 0x20c84c: 0x14400010
    ctx->pc = 0x20C84Cu;
    {
        const bool branch_taken_0x20c84c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C850u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x20c84c) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C854u;
    // 0x20c854: 0x30c200c0
    ctx->pc = 0x20c854u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 192));
    // 0x20c858: 0x1440000d
    ctx->pc = 0x20C858u;
    {
        const bool branch_taken_0x20c858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C85Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x20c858) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C860u;
label_20c860:
    // 0x20c860: 0x30e20003
    ctx->pc = 0x20c860u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 3));
    // 0x20c864: 0x1440000a
    ctx->pc = 0x20C864u;
    {
        const bool branch_taken_0x20c864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C868u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x20c864) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C86Cu;
    // 0x20c86c: 0x30e2000c
    ctx->pc = 0x20c86cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 12));
    // 0x20c870: 0x14400007
    ctx->pc = 0x20C870u;
    {
        const bool branch_taken_0x20c870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x20c870) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C878u;
    // 0x20c878: 0x30e20030
    ctx->pc = 0x20c878u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 48));
    // 0x20c87c: 0x14400004
    ctx->pc = 0x20C87Cu;
    {
        const bool branch_taken_0x20c87c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20C880u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x20c87c) {
            ctx->pc = 0x20C890u;
            goto label_20c890;
        }
    }
    ctx->pc = 0x20C884u;
    // 0x20c884: 0x30e300c0
    ctx->pc = 0x20c884u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 192));
    // 0x20c888: 0x2402000a
    ctx->pc = 0x20c888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20c88c: 0x3100a
    ctx->pc = 0x20c88cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_20c890:
    // 0x20c890: 0xdfbf0020
    ctx->pc = 0x20c890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c894: 0xdfb10010
    ctx->pc = 0x20c894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c898: 0xdfb00000
    ctx->pc = 0x20c898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c89c: 0x3e00008
    ctx->pc = 0x20C89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C8A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C574u: goto label_20c574;
            case 0x20C584u: goto label_20c584;
            case 0x20C5A8u: goto label_20c5a8;
            case 0x20C5C8u: goto label_20c5c8;
            case 0x20C5D0u: goto label_20c5d0;
            case 0x20C5F8u: goto label_20c5f8;
            case 0x20C618u: goto label_20c618;
            case 0x20C62Cu: goto label_20c62c;
            case 0x20C65Cu: goto label_20c65c;
            case 0x20C660u: goto label_20c660;
            case 0x20C684u: goto label_20c684;
            case 0x20C6A4u: goto label_20c6a4;
            case 0x20C6ACu: goto label_20c6ac;
            case 0x20C6B0u: goto label_20c6b0;
            case 0x20C70Cu: goto label_20c70c;
            case 0x20C71Cu: goto label_20c71c;
            case 0x20C72Cu: goto label_20c72c;
            case 0x20C75Cu: goto label_20c75c;
            case 0x20C7B0u: goto label_20c7b0;
            case 0x20C7C4u: goto label_20c7c4;
            case 0x20C7ECu: goto label_20c7ec;
            case 0x20C800u: goto label_20c800;
            case 0x20C818u: goto label_20c818;
            case 0x20C838u: goto label_20c838;
            case 0x20C848u: goto label_20c848;
            case 0x20C84Cu: goto label_20c84c;
            case 0x20C860u: goto label_20c860;
            case 0x20C890u: goto label_20c890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C8A4u;
}
