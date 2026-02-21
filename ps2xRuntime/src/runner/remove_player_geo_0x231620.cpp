#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: remove_player_geo
// Address: 0x231620 - 0x2317ec
void remove_player_geo_0x231620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231620u;

    // 0x231620: 0x27bdffd0
    ctx->pc = 0x231620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231624: 0xffbf0020
    ctx->pc = 0x231624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x231628: 0xffb10010
    ctx->pc = 0x231628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23162c: 0xffb00000
    ctx->pc = 0x23162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231630: 0x80882d
    ctx->pc = 0x231630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231634: 0x24032b00
    ctx->pc = 0x231634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231638: 0x2231818
    ctx->pc = 0x231638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23163c: 0x3c020032
    ctx->pc = 0x23163cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231640: 0x24421bc0
    ctx->pc = 0x231640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x231644: 0x628021
    ctx->pc = 0x231644u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231648: 0xc08ac3e
    ctx->pc = 0x231648u;
    SET_GPR_U32(ctx, 31, 0x231650u);
    ctx->pc = 0x23164Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B0F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        clearDebugNode_0x22b0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231650u; }
    }
    if (ctx->pc != 0x231650u) { return; }
    ctx->pc = 0x231650u;
    // 0x231650: 0x8e0407d0
    ctx->pc = 0x231650u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2000)));
    // 0x231654: 0x4820004
    ctx->pc = 0x231654u;
    {
        const bool branch_taken_0x231654 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x231654) {
            ctx->pc = 0x231658u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
            ctx->pc = 0x231668u;
            goto label_231668;
        }
    }
    ctx->pc = 0x23165Cu;
    // 0x23165c: 0xc0844b2
    ctx->pc = 0x23165Cu;
    SET_GPR_U32(ctx, 31, 0x231664u);
    ctx->pc = 0x2112C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DelSpecialTexmod_0x2112c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231664u; }
    }
    if (ctx->pc != 0x231664u) { return; }
    ctx->pc = 0x231664u;
    // 0x231664: 0x8e0406b8
    ctx->pc = 0x231664u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
label_231668:
    // 0x231668: 0x50800005
    ctx->pc = 0x231668u;
    {
        const bool branch_taken_0x231668 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x231668) {
            ctx->pc = 0x23166Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
            ctx->pc = 0x231680u;
            goto label_231680;
        }
    }
    ctx->pc = 0x231670u;
    // 0x231670: 0xc0b3f1a
    ctx->pc = 0x231670u;
    SET_GPR_U32(ctx, 31, 0x231678u);
    ctx->pc = 0x231674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231678u; }
    }
    if (ctx->pc != 0x231678u) { return; }
    ctx->pc = 0x231678u;
    // 0x231678: 0xae0006b8
    ctx->pc = 0x231678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1720), GPR_U32(ctx, 0));
    // 0x23167c: 0x8e020720
    ctx->pc = 0x23167cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1824)));
label_231680:
    // 0x231680: 0x50400004
    ctx->pc = 0x231680u;
    {
        const bool branch_taken_0x231680 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231680) {
            ctx->pc = 0x231684u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1896)));
            ctx->pc = 0x231694u;
            goto label_231694;
        }
    }
    ctx->pc = 0x231688u;
    // 0x231688: 0xc08496c
    ctx->pc = 0x231688u;
    SET_GPR_U32(ctx, 31, 0x231690u);
    ctx->pc = 0x23168Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1824));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231690u; }
    }
    if (ctx->pc != 0x231690u) { return; }
    ctx->pc = 0x231690u;
    // 0x231690: 0x8e020768
    ctx->pc = 0x231690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_231694:
    // 0x231694: 0x50400004
    ctx->pc = 0x231694u;
    {
        const bool branch_taken_0x231694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231694) {
            ctx->pc = 0x231698u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
            ctx->pc = 0x2316A8u;
            goto label_2316a8;
        }
    }
    ctx->pc = 0x23169Cu;
    // 0x23169c: 0xc08496c
    ctx->pc = 0x23169Cu;
    SET_GPR_U32(ctx, 31, 0x2316A4u);
    ctx->pc = 0x2316A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1896));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2316A4u; }
    }
    if (ctx->pc != 0x2316A4u) { return; }
    ctx->pc = 0x2316A4u;
    // 0x2316a4: 0x8e0206bc
    ctx->pc = 0x2316a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1724)));
label_2316a8:
    // 0x2316a8: 0x50400004
    ctx->pc = 0x2316A8u;
    {
        const bool branch_taken_0x2316a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2316a8) {
            ctx->pc = 0x2316ACu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->pc = 0x2316BCu;
            goto label_2316bc;
        }
    }
    ctx->pc = 0x2316B0u;
    // 0x2316b0: 0xc08496c
    ctx->pc = 0x2316B0u;
    SET_GPR_U32(ctx, 31, 0x2316B8u);
    ctx->pc = 0x2316B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1724));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2316B8u; }
    }
    if (ctx->pc != 0x2316B8u) { return; }
    ctx->pc = 0x2316B8u;
    // 0x2316b8: 0x8e040708
    ctx->pc = 0x2316b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_2316bc:
    // 0x2316bc: 0x50800005
    ctx->pc = 0x2316BCu;
    {
        const bool branch_taken_0x2316bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2316bc) {
            ctx->pc = 0x2316C0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
            ctx->pc = 0x2316D4u;
            goto label_2316d4;
        }
    }
    ctx->pc = 0x2316C4u;
    // 0x2316c4: 0xc0b3f1a
    ctx->pc = 0x2316C4u;
    SET_GPR_U32(ctx, 31, 0x2316CCu);
    ctx->pc = 0x2316C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2316CCu; }
    }
    if (ctx->pc != 0x2316CCu) { return; }
    ctx->pc = 0x2316CCu;
    // 0x2316cc: 0xae000708
    ctx->pc = 0x2316ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 0));
    // 0x2316d0: 0x8e040704
    ctx->pc = 0x2316d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_2316d4:
    // 0x2316d4: 0x50800005
    ctx->pc = 0x2316D4u;
    {
        const bool branch_taken_0x2316d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2316d4) {
            ctx->pc = 0x2316D8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
            ctx->pc = 0x2316ECu;
            goto label_2316ec;
        }
    }
    ctx->pc = 0x2316DCu;
    // 0x2316dc: 0xc0b3f1a
    ctx->pc = 0x2316DCu;
    SET_GPR_U32(ctx, 31, 0x2316E4u);
    ctx->pc = 0x2316E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2316E4u; }
    }
    if (ctx->pc != 0x2316E4u) { return; }
    ctx->pc = 0x2316E4u;
    // 0x2316e4: 0xae000704
    ctx->pc = 0x2316e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    // 0x2316e8: 0x8e04070c
    ctx->pc = 0x2316e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1804)));
label_2316ec:
    // 0x2316ec: 0x50800005
    ctx->pc = 0x2316ECu;
    {
        const bool branch_taken_0x2316ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2316ec) {
            ctx->pc = 0x2316F0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1812)));
            ctx->pc = 0x231704u;
            goto label_231704;
        }
    }
    ctx->pc = 0x2316F4u;
    // 0x2316f4: 0xc0b3f1a
    ctx->pc = 0x2316F4u;
    SET_GPR_U32(ctx, 31, 0x2316FCu);
    ctx->pc = 0x2316F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2316FCu; }
    }
    if (ctx->pc != 0x2316FCu) { return; }
    ctx->pc = 0x2316FCu;
    // 0x2316fc: 0xae00070c
    ctx->pc = 0x2316fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 0));
    // 0x231700: 0x8e040714
    ctx->pc = 0x231700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1812)));
label_231704:
    // 0x231704: 0x50800005
    ctx->pc = 0x231704u;
    {
        const bool branch_taken_0x231704 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x231704) {
            ctx->pc = 0x231708u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1816)));
            ctx->pc = 0x23171Cu;
            goto label_23171c;
        }
    }
    ctx->pc = 0x23170Cu;
    // 0x23170c: 0xc0b3f1a
    ctx->pc = 0x23170Cu;
    SET_GPR_U32(ctx, 31, 0x231714u);
    ctx->pc = 0x231710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231714u; }
    }
    if (ctx->pc != 0x231714u) { return; }
    ctx->pc = 0x231714u;
    // 0x231714: 0xae000714
    ctx->pc = 0x231714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1812), GPR_U32(ctx, 0));
    // 0x231718: 0x8e040718
    ctx->pc = 0x231718u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1816)));
label_23171c:
    // 0x23171c: 0x50800005
    ctx->pc = 0x23171Cu;
    {
        const bool branch_taken_0x23171c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x23171c) {
            ctx->pc = 0x231720u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x231734u;
            goto label_231734;
        }
    }
    ctx->pc = 0x231724u;
    // 0x231724: 0xc0b3f1a
    ctx->pc = 0x231724u;
    SET_GPR_U32(ctx, 31, 0x23172Cu);
    ctx->pc = 0x231728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23172Cu; }
    }
    if (ctx->pc != 0x23172Cu) { return; }
    ctx->pc = 0x23172Cu;
    // 0x23172c: 0xae000718
    ctx->pc = 0x23172cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 0));
    // 0x231730: 0x8e020080
    ctx->pc = 0x231730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_231734:
    // 0x231734: 0x50400012
    ctx->pc = 0x231734u;
    {
        const bool branch_taken_0x231734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231734) {
            ctx->pc = 0x231738u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x231780u;
            goto label_231780;
        }
    }
    ctx->pc = 0x23173Cu;
    // 0x23173c: 0x8c420078
    ctx->pc = 0x23173cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x231740: 0x5040000f
    ctx->pc = 0x231740u;
    {
        const bool branch_taken_0x231740 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231740) {
            ctx->pc = 0x231744u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x231780u;
            goto label_231780;
        }
    }
    ctx->pc = 0x231748u;
    // 0x231748: 0x8c42007c
    ctx->pc = 0x231748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x23174c: 0x5040000c
    ctx->pc = 0x23174Cu;
    {
        const bool branch_taken_0x23174c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23174c) {
            ctx->pc = 0x231750u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x231780u;
            goto label_231780;
        }
    }
    ctx->pc = 0x231754u;
    // 0x231754: 0x8e030080
    ctx->pc = 0x231754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_231758:
    // 0x231758: 0x8c620078
    ctx->pc = 0x231758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x23175c: 0x8c44007c
    ctx->pc = 0x23175cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x231760: 0xc0b3f94
    ctx->pc = 0x231760u;
    SET_GPR_U32(ctx, 31, 0x231768u);
    ctx->pc = 0x231764u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 116)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231768u; }
    }
    if (ctx->pc != 0x231768u) { return; }
    ctx->pc = 0x231768u;
    // 0x231768: 0x8e020080
    ctx->pc = 0x231768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x23176c: 0x8c420078
    ctx->pc = 0x23176cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x231770: 0x8c42007c
    ctx->pc = 0x231770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x231774: 0x5440fff8
    ctx->pc = 0x231774u;
    {
        const bool branch_taken_0x231774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x231774) {
            ctx->pc = 0x231778u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x231758u;
            goto label_231758;
        }
    }
    ctx->pc = 0x23177Cu;
    // 0x23177c: 0x8e040080
    ctx->pc = 0x23177cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_231780:
    // 0x231780: 0x24050001
    ctx->pc = 0x231780u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x231784: 0xc09ea22
    ctx->pc = 0x231784u;
    SET_GPR_U32(ctx, 31, 0x23178Cu);
    ctx->pc = 0x231788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27A888u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxDeleteParented_0x27a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23178Cu; }
    }
    if (ctx->pc != 0x23178Cu) { return; }
    ctx->pc = 0x23178Cu;
    // 0x23178c: 0xc08496c
    ctx->pc = 0x23178Cu;
    SET_GPR_U32(ctx, 31, 0x231794u);
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231794u; }
    }
    if (ctx->pc != 0x231794u) { return; }
    ctx->pc = 0x231794u;
    // 0x231794: 0x8e020080
    ctx->pc = 0x231794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x231798: 0x5040000b
    ctx->pc = 0x231798u;
    {
        const bool branch_taken_0x231798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x231798) {
            ctx->pc = 0x23179Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
            ctx->pc = 0x2317C8u;
            goto label_2317c8;
        }
    }
    ctx->pc = 0x2317A0u;
    // 0x2317a0: 0x8c420078
    ctx->pc = 0x2317a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2317a4: 0x10400003
    ctx->pc = 0x2317A4u;
    {
        const bool branch_taken_0x2317a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2317A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2317a4) {
            ctx->pc = 0x2317B4u;
            goto label_2317b4;
        }
    }
    ctx->pc = 0x2317ACu;
    // 0x2317ac: 0xc0b492e
    ctx->pc = 0x2317ACu;
    SET_GPR_U32(ctx, 31, 0x2317B4u);
    ctx->pc = 0x2317B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30648));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317B4u; }
    }
    if (ctx->pc != 0x2317B4u) { return; }
    ctx->pc = 0x2317B4u;
label_2317b4:
    // 0x2317b4: 0x8e040080
    ctx->pc = 0x2317b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2317b8: 0xc0b3f1a
    ctx->pc = 0x2317B8u;
    SET_GPR_U32(ctx, 31, 0x2317C0u);
    ctx->pc = 0x2317BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317C0u; }
    }
    if (ctx->pc != 0x2317C0u) { return; }
    ctx->pc = 0x2317C0u;
    // 0x2317c0: 0xae000080
    ctx->pc = 0x2317c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2317c4: 0x8e0406a0
    ctx->pc = 0x2317c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_2317c8:
    // 0x2317c8: 0xc0b3f1a
    ctx->pc = 0x2317C8u;
    SET_GPR_U32(ctx, 31, 0x2317D0u);
    ctx->pc = 0x2317CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317D0u; }
    }
    if (ctx->pc != 0x2317D0u) { return; }
    ctx->pc = 0x2317D0u;
    // 0x2317d0: 0xae0006a0
    ctx->pc = 0x2317d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
    // 0x2317d4: 0x220202d
    ctx->pc = 0x2317d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317d8: 0xdfbf0020
    ctx->pc = 0x2317d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2317dc: 0xdfb10010
    ctx->pc = 0x2317dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2317e0: 0xdfb00000
    ctx->pc = 0x2317e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2317e4: 0x80936fa
    ctx->pc = 0x2317E4u;
    ctx->pc = 0x2317E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x24DBE8u;
    ClearPlyrData_0x24dbe8(rdram, ctx, runtime); return;
    ctx->pc = 0x2317ECu;
}
