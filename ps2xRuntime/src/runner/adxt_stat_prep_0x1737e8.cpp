#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_stat_prep
// Address: 0x1737e8 - 0x17395c
void adxt_stat_prep_0x1737e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_stat_prep");


    ctx->pc = 0x1737e8u;

label_1737e8:
    // 0x1737e8: 0x27bdff90
    ctx->pc = 0x1737e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_1737ec:
    // 0x1737ec: 0xffb30040
    ctx->pc = 0x1737ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1737f0:
    // 0x1737f0: 0xffb10020
    ctx->pc = 0x1737f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1737f4:
    // 0x1737f4: 0xffb00010
    ctx->pc = 0x1737f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1737f8:
    // 0x1737f8: 0x80882d
    ctx->pc = 0x1737f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1737fc:
    // 0x1737fc: 0xffbf0060
    ctx->pc = 0x1737fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_173800:
    // 0x173800: 0xffb40050
    ctx->pc = 0x173800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_173804:
    // 0x173804: 0xffb20030
    ctx->pc = 0x173804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_173808:
    // 0x173808: 0x8e32000c
    ctx->pc = 0x173808u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17380c:
    // 0x17380c: 0x8e340004
    ctx->pc = 0x17380cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_173810:
    // 0x173810: 0xc05b696
label_173814:
    if (ctx->pc == 0x173814u) {
        ctx->pc = 0x173814u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173818u;
        goto label_173818;
    }
    ctx->pc = 0x173810u;
    SET_GPR_U32(ctx, 31, 0x173818u);
    ctx->pc = 0x173814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetNumData_0x16da58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173818u; }
        else if (ctx->pc != 0x173818u) { ctx->pc = 0x173818u; }
    }
    if (ctx->pc != 0x173818u) { return; }
    ctx->pc = 0x173818u;
label_173818:
    // 0x173818: 0x40802d
    ctx->pc = 0x173818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17381c:
    // 0x17381c: 0xc05b69e
label_173820:
    if (ctx->pc == 0x173820u) {
        ctx->pc = 0x173820u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173824u;
        goto label_173824;
    }
    ctx->pc = 0x17381Cu;
    SET_GPR_U32(ctx, 31, 0x173824u);
    ctx->pc = 0x173820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetNumRoom_0x16da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173824u; }
        else if (ctx->pc != 0x173824u) { ctx->pc = 0x173824u; }
    }
    if (ctx->pc != 0x173824u) { return; }
    ctx->pc = 0x173824u;
label_173824:
    // 0x173824: 0x40982d
    ctx->pc = 0x173824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173828:
    // 0x173828: 0x8e220048
    ctx->pc = 0x173828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_17382c:
    // 0x17382c: 0x21040
    ctx->pc = 0x17382cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_173830:
    // 0x173830: 0x202802a
    ctx->pc = 0x173830u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_173834:
    // 0x173834: 0x5200000c
label_173838:
    if (ctx->pc == 0x173838u) {
        ctx->pc = 0x173838u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x17383Cu;
        goto label_17383c;
    }
    ctx->pc = 0x173834u;
    {
        const bool branch_taken_0x173834 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x173834) {
            ctx->pc = 0x173838u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x173868u;
            goto label_173868;
        }
    }
    ctx->pc = 0x17383Cu;
label_17383c:
    // 0x17383c: 0xc05b9f4
label_173840:
    if (ctx->pc == 0x173840u) {
        ctx->pc = 0x173840u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173844u;
        goto label_173844;
    }
    ctx->pc = 0x17383Cu;
    SET_GPR_U32(ctx, 31, 0x173844u);
    ctx->pc = 0x173840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetBlkSmpl_0x16e7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173844u; }
        else if (ctx->pc != 0x173844u) { ctx->pc = 0x173844u; }
    }
    if (ctx->pc != 0x173844u) { return; }
    ctx->pc = 0x173844u;
label_173844:
    // 0x173844: 0x53102a
    ctx->pc = 0x173844u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_173848:
    // 0x173848: 0x50400007
label_17384c:
    if (ctx->pc == 0x17384Cu) {
        ctx->pc = 0x17384Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x173850u;
        goto label_173850;
    }
    ctx->pc = 0x173848u;
    {
        const bool branch_taken_0x173848 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x173848) {
            ctx->pc = 0x17384Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x173868u;
            goto label_173868;
        }
    }
    ctx->pc = 0x173850u;
label_173850:
    // 0x173850: 0xc05b796
label_173854:
    if (ctx->pc == 0x173854u) {
        ctx->pc = 0x173854u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x173858u;
        goto label_173858;
    }
    ctx->pc = 0x173850u;
    SET_GPR_U32(ctx, 31, 0x173858u);
    ctx->pc = 0x173854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x16DE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetStat_0x16de58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173858u; }
        else if (ctx->pc != 0x173858u) { ctx->pc = 0x173858u; }
    }
    if (ctx->pc != 0x173858u) { return; }
    ctx->pc = 0x173858u;
label_173858:
    // 0x173858: 0x24030003
    ctx->pc = 0x173858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_17385c:
    // 0x17385c: 0x14430011
label_173860:
    if (ctx->pc == 0x173860u) {
        ctx->pc = 0x173864u;
        goto label_173864;
    }
    ctx->pc = 0x17385Cu;
    {
        const bool branch_taken_0x17385c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x17385c) {
            ctx->pc = 0x1738A4u;
            goto label_1738a4;
        }
    }
    ctx->pc = 0x173864u;
label_173864:
    // 0x173864: 0x82220070
    ctx->pc = 0x173864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_173868:
    // 0x173868: 0x1440000d
label_17386c:
    if (ctx->pc == 0x17386Cu) {
        ctx->pc = 0x17386Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173870u;
        goto label_173870;
    }
    ctx->pc = 0x173868u;
    {
        const bool branch_taken_0x173868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17386Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x173868) {
            ctx->pc = 0x1738A0u;
            goto label_1738a0;
        }
    }
    ctx->pc = 0x173870u;
label_173870:
    // 0x173870: 0x82220072
    ctx->pc = 0x173870u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_173874:
    // 0x173874: 0x14400008
label_173878:
    if (ctx->pc == 0x173878u) {
        ctx->pc = 0x173878u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x17387Cu;
        goto label_17387c;
    }
    ctx->pc = 0x173874u;
    {
        const bool branch_taken_0x173874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173878u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x173874) {
            ctx->pc = 0x173898u;
            goto label_173898;
        }
    }
    ctx->pc = 0x17387Cu;
label_17387c:
    // 0x17387c: 0x240202d
    ctx->pc = 0x17387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173880:
    // 0x173880: 0xc05b692
label_173884:
    if (ctx->pc == 0x173884u) {
        ctx->pc = 0x173884u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173888u;
        goto label_173888;
    }
    ctx->pc = 0x173880u;
    SET_GPR_U32(ctx, 31, 0x173888u);
    ctx->pc = 0x173884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetPlaySw_0x16da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173888u; }
        else if (ctx->pc != 0x173888u) { ctx->pc = 0x173888u; }
    }
    if (ctx->pc != 0x173888u) { return; }
    ctx->pc = 0x173888u;
label_173888:
    // 0x173888: 0x8f828120
    ctx->pc = 0x173888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
label_17388c:
    // 0x17388c: 0xae20009c
    ctx->pc = 0x17388cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_173890:
    // 0x173890: 0xae2200a0
    ctx->pc = 0x173890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_173894:
    // 0x173894: 0x24020003
    ctx->pc = 0x173894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_173898:
    // 0x173898: 0xa2220001
    ctx->pc = 0x173898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_17389c:
    // 0x17389c: 0x24020001
    ctx->pc = 0x17389cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1738a0:
    // 0x1738a0: 0xa2220071
    ctx->pc = 0x1738a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 2));
label_1738a4:
    // 0x1738a4: 0xc05b796
label_1738a8:
    if (ctx->pc == 0x1738A8u) {
        ctx->pc = 0x1738A8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1738ACu;
        goto label_1738ac;
    }
    ctx->pc = 0x1738A4u;
    SET_GPR_U32(ctx, 31, 0x1738ACu);
    ctx->pc = 0x1738A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x16DE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetStat_0x16de58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1738ACu; }
        else if (ctx->pc != 0x1738ACu) { ctx->pc = 0x1738ACu; }
    }
    if (ctx->pc != 0x1738ACu) { return; }
    ctx->pc = 0x1738ACu;
label_1738ac:
    // 0x1738ac: 0x24030003
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1738b0:
    // 0x1738b0: 0x14430023
label_1738b4:
    if (ctx->pc == 0x1738B4u) {
        ctx->pc = 0x1738B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x1738B8u;
        goto label_1738b8;
    }
    ctx->pc = 0x1738B0u;
    {
        const bool branch_taken_0x1738b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1738B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1738b0) {
            ctx->pc = 0x173940u;
            goto label_173940;
        }
    }
    ctx->pc = 0x1738B8u;
label_1738b8:
    // 0x1738b8: 0x220202d
    ctx->pc = 0x1738b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1738bc:
    // 0x1738bc: 0xc05c88e
label_1738c0:
    if (ctx->pc == 0x1738C0u) {
        ctx->pc = 0x1738C0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1738C4u;
        goto label_1738c4;
    }
    ctx->pc = 0x1738BCu;
    SET_GPR_U32(ctx, 31, 0x1738C4u);
    ctx->pc = 0x1738C0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172238u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetNumChan_0x172238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1738C4u; }
        else if (ctx->pc != 0x1738C4u) { ctx->pc = 0x1738C4u; }
    }
    if (ctx->pc != 0x1738C4u) { return; }
    ctx->pc = 0x1738C4u;
label_1738c4:
    // 0x1738c4: 0x40982d
    ctx->pc = 0x1738c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1738c8:
    // 0x1738c8: 0x8e220048
    ctx->pc = 0x1738c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1738cc:
    // 0x1738cc: 0x531018
    ctx->pc = 0x1738ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1738d0:
    // 0x1738d0: 0x1a60001a
label_1738d4:
    if (ctx->pc == 0x1738D4u) {
        ctx->pc = 0x1738D4u;
        SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1738D8u;
        goto label_1738d8;
    }
    ctx->pc = 0x1738D0u;
    {
        const bool branch_taken_0x1738d0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1738D4u;
        SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1738d0) {
            ctx->pc = 0x17393Cu;
            goto label_17393c;
        }
    }
    ctx->pc = 0x1738D8u;
label_1738d8:
    // 0x1738d8: 0x26310018
    ctx->pc = 0x1738d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 24));
label_1738dc:
    // 0x1738dc: 0x121080
    ctx->pc = 0x1738dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_1738e0:
    // 0x1738e0: 0x282d
    ctx->pc = 0x1738e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1738e4:
    // 0x1738e4: 0x2221021
    ctx->pc = 0x1738e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1738e8:
    // 0x1738e8: 0x280302d
    ctx->pc = 0x1738e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1738ec:
    // 0x1738ec: 0x8c500000
    ctx->pc = 0x1738ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1738f0:
    // 0x1738f0: 0x3a0382d
    ctx->pc = 0x1738f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1738f4:
    // 0x1738f4: 0x26520001
    ctx->pc = 0x1738f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1738f8:
    // 0x1738f8: 0x8e030000
    ctx->pc = 0x1738f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1738fc:
    // 0x1738fc: 0x8c620018
    ctx->pc = 0x1738fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_173900:
    // 0x173900: 0x40f809
label_173904:
    if (ctx->pc == 0x173904u) {
        ctx->pc = 0x173904u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173908u;
        goto label_173908;
    }
    ctx->pc = 0x173900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173908u);
        ctx->pc = 0x173904u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1737E8u: goto label_1737e8;
            case 0x1737ECu: goto label_1737ec;
            case 0x1737F0u: goto label_1737f0;
            case 0x1737F4u: goto label_1737f4;
            case 0x1737F8u: goto label_1737f8;
            case 0x1737FCu: goto label_1737fc;
            case 0x173800u: goto label_173800;
            case 0x173804u: goto label_173804;
            case 0x173808u: goto label_173808;
            case 0x17380Cu: goto label_17380c;
            case 0x173810u: goto label_173810;
            case 0x173814u: goto label_173814;
            case 0x173818u: goto label_173818;
            case 0x17381Cu: goto label_17381c;
            case 0x173820u: goto label_173820;
            case 0x173824u: goto label_173824;
            case 0x173828u: goto label_173828;
            case 0x17382Cu: goto label_17382c;
            case 0x173830u: goto label_173830;
            case 0x173834u: goto label_173834;
            case 0x173838u: goto label_173838;
            case 0x17383Cu: goto label_17383c;
            case 0x173840u: goto label_173840;
            case 0x173844u: goto label_173844;
            case 0x173848u: goto label_173848;
            case 0x17384Cu: goto label_17384c;
            case 0x173850u: goto label_173850;
            case 0x173854u: goto label_173854;
            case 0x173858u: goto label_173858;
            case 0x17385Cu: goto label_17385c;
            case 0x173860u: goto label_173860;
            case 0x173864u: goto label_173864;
            case 0x173868u: goto label_173868;
            case 0x17386Cu: goto label_17386c;
            case 0x173870u: goto label_173870;
            case 0x173874u: goto label_173874;
            case 0x173878u: goto label_173878;
            case 0x17387Cu: goto label_17387c;
            case 0x173880u: goto label_173880;
            case 0x173884u: goto label_173884;
            case 0x173888u: goto label_173888;
            case 0x17388Cu: goto label_17388c;
            case 0x173890u: goto label_173890;
            case 0x173894u: goto label_173894;
            case 0x173898u: goto label_173898;
            case 0x17389Cu: goto label_17389c;
            case 0x1738A0u: goto label_1738a0;
            case 0x1738A4u: goto label_1738a4;
            case 0x1738A8u: goto label_1738a8;
            case 0x1738ACu: goto label_1738ac;
            case 0x1738B0u: goto label_1738b0;
            case 0x1738B4u: goto label_1738b4;
            case 0x1738B8u: goto label_1738b8;
            case 0x1738BCu: goto label_1738bc;
            case 0x1738C0u: goto label_1738c0;
            case 0x1738C4u: goto label_1738c4;
            case 0x1738C8u: goto label_1738c8;
            case 0x1738CCu: goto label_1738cc;
            case 0x1738D0u: goto label_1738d0;
            case 0x1738D4u: goto label_1738d4;
            case 0x1738D8u: goto label_1738d8;
            case 0x1738DCu: goto label_1738dc;
            case 0x1738E0u: goto label_1738e0;
            case 0x1738E4u: goto label_1738e4;
            case 0x1738E8u: goto label_1738e8;
            case 0x1738ECu: goto label_1738ec;
            case 0x1738F0u: goto label_1738f0;
            case 0x1738F4u: goto label_1738f4;
            case 0x1738F8u: goto label_1738f8;
            case 0x1738FCu: goto label_1738fc;
            case 0x173900u: goto label_173900;
            case 0x173904u: goto label_173904;
            case 0x173908u: goto label_173908;
            case 0x17390Cu: goto label_17390c;
            case 0x173910u: goto label_173910;
            case 0x173914u: goto label_173914;
            case 0x173918u: goto label_173918;
            case 0x17391Cu: goto label_17391c;
            case 0x173920u: goto label_173920;
            case 0x173924u: goto label_173924;
            case 0x173928u: goto label_173928;
            case 0x17392Cu: goto label_17392c;
            case 0x173930u: goto label_173930;
            case 0x173934u: goto label_173934;
            case 0x173938u: goto label_173938;
            case 0x17393Cu: goto label_17393c;
            case 0x173940u: goto label_173940;
            case 0x173944u: goto label_173944;
            case 0x173948u: goto label_173948;
            case 0x17394Cu: goto label_17394c;
            case 0x173950u: goto label_173950;
            case 0x173954u: goto label_173954;
            case 0x173958u: goto label_173958;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173908u; }
            if (ctx->pc != 0x173908u) { return; }
        }
    }
    ctx->pc = 0x173908u;
label_173908:
    // 0x173908: 0x8fa40000
    ctx->pc = 0x173908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17390c:
    // 0x17390c: 0x282d
    ctx->pc = 0x17390cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173910:
    // 0x173910: 0xc050cfe
label_173914:
    if (ctx->pc == 0x173914u) {
        ctx->pc = 0x173914u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x173918u;
        goto label_173918;
    }
    ctx->pc = 0x173910u;
    SET_GPR_U32(ctx, 31, 0x173918u);
    ctx->pc = 0x173914u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173918u; }
        else if (ctx->pc != 0x173918u) { ctx->pc = 0x173918u; }
    }
    if (ctx->pc != 0x173918u) { return; }
    ctx->pc = 0x173918u;
label_173918:
    // 0x173918: 0x8e030000
    ctx->pc = 0x173918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17391c:
    // 0x17391c: 0x200202d
    ctx->pc = 0x17391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173920:
    // 0x173920: 0x24050001
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_173924:
    // 0x173924: 0x8c620020
    ctx->pc = 0x173924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_173928:
    // 0x173928: 0x40f809
label_17392c:
    if (ctx->pc == 0x17392Cu) {
        ctx->pc = 0x17392Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173930u;
        goto label_173930;
    }
    ctx->pc = 0x173928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173930u);
        ctx->pc = 0x17392Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1737E8u: goto label_1737e8;
            case 0x1737ECu: goto label_1737ec;
            case 0x1737F0u: goto label_1737f0;
            case 0x1737F4u: goto label_1737f4;
            case 0x1737F8u: goto label_1737f8;
            case 0x1737FCu: goto label_1737fc;
            case 0x173800u: goto label_173800;
            case 0x173804u: goto label_173804;
            case 0x173808u: goto label_173808;
            case 0x17380Cu: goto label_17380c;
            case 0x173810u: goto label_173810;
            case 0x173814u: goto label_173814;
            case 0x173818u: goto label_173818;
            case 0x17381Cu: goto label_17381c;
            case 0x173820u: goto label_173820;
            case 0x173824u: goto label_173824;
            case 0x173828u: goto label_173828;
            case 0x17382Cu: goto label_17382c;
            case 0x173830u: goto label_173830;
            case 0x173834u: goto label_173834;
            case 0x173838u: goto label_173838;
            case 0x17383Cu: goto label_17383c;
            case 0x173840u: goto label_173840;
            case 0x173844u: goto label_173844;
            case 0x173848u: goto label_173848;
            case 0x17384Cu: goto label_17384c;
            case 0x173850u: goto label_173850;
            case 0x173854u: goto label_173854;
            case 0x173858u: goto label_173858;
            case 0x17385Cu: goto label_17385c;
            case 0x173860u: goto label_173860;
            case 0x173864u: goto label_173864;
            case 0x173868u: goto label_173868;
            case 0x17386Cu: goto label_17386c;
            case 0x173870u: goto label_173870;
            case 0x173874u: goto label_173874;
            case 0x173878u: goto label_173878;
            case 0x17387Cu: goto label_17387c;
            case 0x173880u: goto label_173880;
            case 0x173884u: goto label_173884;
            case 0x173888u: goto label_173888;
            case 0x17388Cu: goto label_17388c;
            case 0x173890u: goto label_173890;
            case 0x173894u: goto label_173894;
            case 0x173898u: goto label_173898;
            case 0x17389Cu: goto label_17389c;
            case 0x1738A0u: goto label_1738a0;
            case 0x1738A4u: goto label_1738a4;
            case 0x1738A8u: goto label_1738a8;
            case 0x1738ACu: goto label_1738ac;
            case 0x1738B0u: goto label_1738b0;
            case 0x1738B4u: goto label_1738b4;
            case 0x1738B8u: goto label_1738b8;
            case 0x1738BCu: goto label_1738bc;
            case 0x1738C0u: goto label_1738c0;
            case 0x1738C4u: goto label_1738c4;
            case 0x1738C8u: goto label_1738c8;
            case 0x1738CCu: goto label_1738cc;
            case 0x1738D0u: goto label_1738d0;
            case 0x1738D4u: goto label_1738d4;
            case 0x1738D8u: goto label_1738d8;
            case 0x1738DCu: goto label_1738dc;
            case 0x1738E0u: goto label_1738e0;
            case 0x1738E4u: goto label_1738e4;
            case 0x1738E8u: goto label_1738e8;
            case 0x1738ECu: goto label_1738ec;
            case 0x1738F0u: goto label_1738f0;
            case 0x1738F4u: goto label_1738f4;
            case 0x1738F8u: goto label_1738f8;
            case 0x1738FCu: goto label_1738fc;
            case 0x173900u: goto label_173900;
            case 0x173904u: goto label_173904;
            case 0x173908u: goto label_173908;
            case 0x17390Cu: goto label_17390c;
            case 0x173910u: goto label_173910;
            case 0x173914u: goto label_173914;
            case 0x173918u: goto label_173918;
            case 0x17391Cu: goto label_17391c;
            case 0x173920u: goto label_173920;
            case 0x173924u: goto label_173924;
            case 0x173928u: goto label_173928;
            case 0x17392Cu: goto label_17392c;
            case 0x173930u: goto label_173930;
            case 0x173934u: goto label_173934;
            case 0x173938u: goto label_173938;
            case 0x17393Cu: goto label_17393c;
            case 0x173940u: goto label_173940;
            case 0x173944u: goto label_173944;
            case 0x173948u: goto label_173948;
            case 0x17394Cu: goto label_17394c;
            case 0x173950u: goto label_173950;
            case 0x173954u: goto label_173954;
            case 0x173958u: goto label_173958;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173930u; }
            if (ctx->pc != 0x173930u) { return; }
        }
    }
    ctx->pc = 0x173930u;
label_173930:
    // 0x173930: 0x253182a
    ctx->pc = 0x173930u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
label_173934:
    // 0x173934: 0x1460ffea
label_173938:
    if (ctx->pc == 0x173938u) {
        ctx->pc = 0x173938u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x17393Cu;
        goto label_17393c;
    }
    ctx->pc = 0x173934u;
    {
        const bool branch_taken_0x173934 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x173938u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x173934) {
            ctx->pc = 0x1738E0u;
            goto label_1738e0;
        }
    }
    ctx->pc = 0x17393Cu;
label_17393c:
    // 0x17393c: 0xdfbf0060
    ctx->pc = 0x17393cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_173940:
    // 0x173940: 0xdfb40050
    ctx->pc = 0x173940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_173944:
    // 0x173944: 0xdfb30040
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_173948:
    // 0x173948: 0xdfb20030
    ctx->pc = 0x173948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17394c:
    // 0x17394c: 0xdfb10020
    ctx->pc = 0x17394cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173950:
    // 0x173950: 0xdfb00010
    ctx->pc = 0x173950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173954:
    // 0x173954: 0x3e00008
label_173958:
    if (ctx->pc == 0x173958u) {
        ctx->pc = 0x173958u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17395Cu;
        goto label_fallthrough_0x173954;
    }
    ctx->pc = 0x173954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173958u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1737E8u: goto label_1737e8;
            case 0x1737ECu: goto label_1737ec;
            case 0x1737F0u: goto label_1737f0;
            case 0x1737F4u: goto label_1737f4;
            case 0x1737F8u: goto label_1737f8;
            case 0x1737FCu: goto label_1737fc;
            case 0x173800u: goto label_173800;
            case 0x173804u: goto label_173804;
            case 0x173808u: goto label_173808;
            case 0x17380Cu: goto label_17380c;
            case 0x173810u: goto label_173810;
            case 0x173814u: goto label_173814;
            case 0x173818u: goto label_173818;
            case 0x17381Cu: goto label_17381c;
            case 0x173820u: goto label_173820;
            case 0x173824u: goto label_173824;
            case 0x173828u: goto label_173828;
            case 0x17382Cu: goto label_17382c;
            case 0x173830u: goto label_173830;
            case 0x173834u: goto label_173834;
            case 0x173838u: goto label_173838;
            case 0x17383Cu: goto label_17383c;
            case 0x173840u: goto label_173840;
            case 0x173844u: goto label_173844;
            case 0x173848u: goto label_173848;
            case 0x17384Cu: goto label_17384c;
            case 0x173850u: goto label_173850;
            case 0x173854u: goto label_173854;
            case 0x173858u: goto label_173858;
            case 0x17385Cu: goto label_17385c;
            case 0x173860u: goto label_173860;
            case 0x173864u: goto label_173864;
            case 0x173868u: goto label_173868;
            case 0x17386Cu: goto label_17386c;
            case 0x173870u: goto label_173870;
            case 0x173874u: goto label_173874;
            case 0x173878u: goto label_173878;
            case 0x17387Cu: goto label_17387c;
            case 0x173880u: goto label_173880;
            case 0x173884u: goto label_173884;
            case 0x173888u: goto label_173888;
            case 0x17388Cu: goto label_17388c;
            case 0x173890u: goto label_173890;
            case 0x173894u: goto label_173894;
            case 0x173898u: goto label_173898;
            case 0x17389Cu: goto label_17389c;
            case 0x1738A0u: goto label_1738a0;
            case 0x1738A4u: goto label_1738a4;
            case 0x1738A8u: goto label_1738a8;
            case 0x1738ACu: goto label_1738ac;
            case 0x1738B0u: goto label_1738b0;
            case 0x1738B4u: goto label_1738b4;
            case 0x1738B8u: goto label_1738b8;
            case 0x1738BCu: goto label_1738bc;
            case 0x1738C0u: goto label_1738c0;
            case 0x1738C4u: goto label_1738c4;
            case 0x1738C8u: goto label_1738c8;
            case 0x1738CCu: goto label_1738cc;
            case 0x1738D0u: goto label_1738d0;
            case 0x1738D4u: goto label_1738d4;
            case 0x1738D8u: goto label_1738d8;
            case 0x1738DCu: goto label_1738dc;
            case 0x1738E0u: goto label_1738e0;
            case 0x1738E4u: goto label_1738e4;
            case 0x1738E8u: goto label_1738e8;
            case 0x1738ECu: goto label_1738ec;
            case 0x1738F0u: goto label_1738f0;
            case 0x1738F4u: goto label_1738f4;
            case 0x1738F8u: goto label_1738f8;
            case 0x1738FCu: goto label_1738fc;
            case 0x173900u: goto label_173900;
            case 0x173904u: goto label_173904;
            case 0x173908u: goto label_173908;
            case 0x17390Cu: goto label_17390c;
            case 0x173910u: goto label_173910;
            case 0x173914u: goto label_173914;
            case 0x173918u: goto label_173918;
            case 0x17391Cu: goto label_17391c;
            case 0x173920u: goto label_173920;
            case 0x173924u: goto label_173924;
            case 0x173928u: goto label_173928;
            case 0x17392Cu: goto label_17392c;
            case 0x173930u: goto label_173930;
            case 0x173934u: goto label_173934;
            case 0x173938u: goto label_173938;
            case 0x17393Cu: goto label_17393c;
            case 0x173940u: goto label_173940;
            case 0x173944u: goto label_173944;
            case 0x173948u: goto label_173948;
            case 0x17394Cu: goto label_17394c;
            case 0x173950u: goto label_173950;
            case 0x173954u: goto label_173954;
            case 0x173958u: goto label_173958;
            default: break;
        }
        return;
    }
label_fallthrough_0x173954:
    ctx->pc = 0x17395Cu;
}
