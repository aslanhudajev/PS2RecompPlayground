#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DecodeOneUnit
// Address: 0x196368 - 0x196570
void sfmpv_DecodeOneUnit_0x196368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DecodeOneUnit");


    ctx->pc = 0x196368u;

    // 0x196368: 0x27bdff70
    ctx->pc = 0x196368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19636c: 0xffb50060
    ctx->pc = 0x19636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x196370: 0xffb20030
    ctx->pc = 0x196370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x196374: 0x100a82d
    ctx->pc = 0x196374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196378: 0xffb60070
    ctx->pc = 0x196378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x19637c: 0xe0902d
    ctx->pc = 0x19637cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196380: 0xffb40050
    ctx->pc = 0x196380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x196384: 0xb02d
    ctx->pc = 0x196384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196388: 0xffb30040
    ctx->pc = 0x196388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19638c: 0xffb10020
    ctx->pc = 0x19638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x196390: 0xc0982d
    ctx->pc = 0x196390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196394: 0xffb00010
    ctx->pc = 0x196394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x196398: 0xa0882d
    ctx->pc = 0x196398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19639c: 0xffbf0080
    ctx->pc = 0x19639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1963a0: 0x80802d
    ctx->pc = 0x1963a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963a4: 0xae400000
    ctx->pc = 0x1963a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1963a8: 0x26143740
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 14144));
    // 0x1963ac: 0xc0669e8
    ctx->pc = 0x1963ACu;
    SET_GPR_U32(ctx, 31, 0x1963B4u);
    ctx->pc = 0x1963B0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x19A7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_IsPscEnough_0x19a7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963B4u; }
        else if (ctx->pc != 0x1963B4u) { ctx->pc = 0x1963B4u; }
    }
    if (ctx->pc != 0x1963B4u) { return; }
    ctx->pc = 0x1963B4u;
    // 0x1963b4: 0x10400049
    ctx->pc = 0x1963B4u;
    {
        const bool branch_taken_0x1963b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1963B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1963b4) {
            ctx->pc = 0x1964DCu;
            goto label_1964dc;
        }
    }
    ctx->pc = 0x1963BCu;
    // 0x1963bc: 0x8e860030
    ctx->pc = 0x1963bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1963c0: 0xafb10000
    ctx->pc = 0x1963c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1963c4: 0x260282d
    ctx->pc = 0x1963c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c8: 0xc06595c
    ctx->pc = 0x1963C8u;
    SET_GPR_U32(ctx, 31, 0x1963D0u);
    ctx->pc = 0x1963CCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    ctx->pc = 0x196570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetCurDelim_0x196570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963D0u; }
        else if (ctx->pc != 0x1963D0u) { ctx->pc = 0x1963D0u; }
    }
    if (ctx->pc != 0x1963D0u) { return; }
    ctx->pc = 0x1963D0u;
    // 0x1963d0: 0x40882d
    ctx->pc = 0x1963d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963d4: 0x322200c8
    ctx->pc = 0x1963d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 200));
    // 0x1963d8: 0x10400003
    ctx->pc = 0x1963D8u;
    {
        const bool branch_taken_0x1963d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1963DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1963d8) {
            ctx->pc = 0x1963E8u;
            goto label_1963e8;
        }
    }
    ctx->pc = 0x1963E0u;
    // 0x1963e0: 0xc066398
    ctx->pc = 0x1963E0u;
    SET_GPR_U32(ctx, 31, 0x1963E8u);
    ctx->pc = 0x1963E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x198E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_SetGopStat_0x198e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963E8u; }
        else if (ctx->pc != 0x1963E8u) { ctx->pc = 0x1963E8u; }
    }
    if (ctx->pc != 0x1963E8u) { return; }
    ctx->pc = 0x1963E8u;
label_1963e8:
    // 0x1963e8: 0x24020080
    ctx->pc = 0x1963e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1963ec: 0x16220017
    ctx->pc = 0x1963ECu;
    {
        const bool branch_taken_0x1963ec = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1963F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1963ec) {
            ctx->pc = 0x19644Cu;
            goto label_19644c;
        }
    }
    ctx->pc = 0x1963F4u;
    // 0x1963f4: 0xc06596e
    ctx->pc = 0x1963F4u;
    SET_GPR_U32(ctx, 31, 0x1963FCu);
    ctx->pc = 0x1963F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1965B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_FixedForSeek_0x1965b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963FCu; }
        else if (ctx->pc != 0x1963FCu) { ctx->pc = 0x1963FCu; }
    }
    if (ctx->pc != 0x1963FCu) { return; }
    ctx->pc = 0x1963FCu;
    // 0x1963fc: 0xc064a7c
    ctx->pc = 0x1963FCu;
    SET_GPR_U32(ctx, 31, 0x196404u);
    ctx->pc = 0x196400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1929F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_IsEndcodeSkip_0x1929f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196404u; }
        else if (ctx->pc != 0x196404u) { ctx->pc = 0x196404u; }
    }
    if (ctx->pc != 0x196404u) { return; }
    ctx->pc = 0x196404u;
    // 0x196404: 0x10400008
    ctx->pc = 0x196404u;
    {
        const bool branch_taken_0x196404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196408u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196404) {
            ctx->pc = 0x196428u;
            goto label_196428;
        }
    }
    ctx->pc = 0x19640Cu;
    // 0x19640c: 0x240302d
    ctx->pc = 0x19640cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196410: 0xc06599a
    ctx->pc = 0x196410u;
    SET_GPR_U32(ctx, 31, 0x196418u);
    ctx->pc = 0x196414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196668u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_Concat_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196418u; }
        else if (ctx->pc != 0x196418u) { ctx->pc = 0x196418u; }
    }
    if (ctx->pc != 0x196418u) { return; }
    ctx->pc = 0x196418u;
    // 0x196418: 0x1440004b
    ctx->pc = 0x196418u;
    {
        const bool branch_taken_0x196418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19641Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196418) {
            ctx->pc = 0x196548u;
            goto label_196548;
        }
    }
    ctx->pc = 0x196420u;
    // 0x196420: 0x10000047
    ctx->pc = 0x196420u;
    {
        const bool branch_taken_0x196420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196424u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196420) {
            ctx->pc = 0x196540u;
            goto label_196540;
        }
    }
    ctx->pc = 0x196428u;
label_196428:
    // 0x196428: 0xc064a96
    ctx->pc = 0x196428u;
    SET_GPR_U32(ctx, 31, 0x196430u);
    ctx->pc = 0x19642Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_IsVideoEndcodeSkip_0x192a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196430u; }
        else if (ctx->pc != 0x196430u) { ctx->pc = 0x196430u; }
    }
    if (ctx->pc != 0x196430u) { return; }
    ctx->pc = 0x196430u;
    // 0x196430: 0x10400005
    ctx->pc = 0x196430u;
    {
        const bool branch_taken_0x196430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196434u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196430) {
            ctx->pc = 0x196448u;
            goto label_196448;
        }
    }
    ctx->pc = 0x196438u;
    // 0x196438: 0xc065a26
    ctx->pc = 0x196438u;
    SET_GPR_U32(ctx, 31, 0x196440u);
    ctx->pc = 0x19643Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196898u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DiscardSec_0x196898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196440u; }
        else if (ctx->pc != 0x196440u) { ctx->pc = 0x196440u; }
    }
    if (ctx->pc != 0x196440u) { return; }
    ctx->pc = 0x196440u;
    // 0x196440: 0x1000003f
    ctx->pc = 0x196440u;
    {
        const bool branch_taken_0x196440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196444u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196440) {
            ctx->pc = 0x196540u;
            goto label_196540;
        }
    }
    ctx->pc = 0x196448u;
label_196448:
    // 0x196448: 0x200202d
    ctx->pc = 0x196448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19644c:
    // 0x19644c: 0x260282d
    ctx->pc = 0x19644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196450: 0xc065a48
    ctx->pc = 0x196450u;
    SET_GPR_U32(ctx, 31, 0x196458u);
    ctx->pc = 0x196454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsTerm_0x196920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196458u; }
        else if (ctx->pc != 0x196458u) { ctx->pc = 0x196458u; }
    }
    if (ctx->pc != 0x196458u) { return; }
    ctx->pc = 0x196458u;
    // 0x196458: 0x10400005
    ctx->pc = 0x196458u;
    {
        const bool branch_taken_0x196458 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19645Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 5));
        if (branch_taken_0x196458) {
            ctx->pc = 0x196470u;
            goto label_196470;
        }
    }
    ctx->pc = 0x196460u;
    // 0x196460: 0xc066392
    ctx->pc = 0x196460u;
    SET_GPR_U32(ctx, 31, 0x196468u);
    ctx->pc = 0x196464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_TermDec_0x198e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196468u; }
        else if (ctx->pc != 0x196468u) { ctx->pc = 0x196468u; }
    }
    if (ctx->pc != 0x196468u) { return; }
    ctx->pc = 0x196468u;
    // 0x196468: 0x10000037
    ctx->pc = 0x196468u;
    {
        const bool branch_taken_0x196468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19646Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196468) {
            ctx->pc = 0x196548u;
            goto label_196548;
        }
    }
    ctx->pc = 0x196470u;
label_196470:
    // 0x196470: 0x14400035
    ctx->pc = 0x196470u;
    {
        const bool branch_taken_0x196470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x196474u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196470) {
            ctx->pc = 0x196548u;
            goto label_196548;
        }
    }
    ctx->pc = 0x196478u;
    // 0x196478: 0x3222004c
    ctx->pc = 0x196478u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 76));
    // 0x19647c: 0x10400010
    ctx->pc = 0x19647Cu;
    {
        const bool branch_taken_0x19647c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19647c) {
            ctx->pc = 0x1964C0u;
            goto label_1964c0;
        }
    }
    ctx->pc = 0x196484u;
    // 0x196484: 0x8e870030
    ctx->pc = 0x196484u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x196488: 0x240302d
    ctx->pc = 0x196488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19648c: 0x3a0282d
    ctx->pc = 0x19648cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196490: 0x2273824
    ctx->pc = 0x196490u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x196494: 0xc065a84
    ctx->pc = 0x196494u;
    SET_GPR_U32(ctx, 31, 0x19649Cu);
    ctx->pc = 0x196498u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->pc = 0x196A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DecodePicAtr_0x196a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19649Cu; }
        else if (ctx->pc != 0x19649Cu) { ctx->pc = 0x19649Cu; }
    }
    if (ctx->pc != 0x19649Cu) { return; }
    ctx->pc = 0x19649Cu;
    // 0x19649c: 0x40b02d
    ctx->pc = 0x19649cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964a0: 0x16c00029
    ctx->pc = 0x1964A0u;
    {
        const bool branch_taken_0x1964a0 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x1964A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1964a0) {
            ctx->pc = 0x196548u;
            goto label_196548;
        }
    }
    ctx->pc = 0x1964A8u;
    // 0x1964a8: 0x8e820030
    ctx->pc = 0x1964a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1964ac: 0x2221024
    ctx->pc = 0x1964acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1964b0: 0x10400022
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 204));
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x19653Cu;
            goto label_19653c;
        }
    }
    ctx->pc = 0x1964B8u;
    // 0x1964b8: 0x10000020
    ctx->pc = 0x1964B8u;
    {
        const bool branch_taken_0x1964b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964BCu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x1964b8) {
            ctx->pc = 0x19653Cu;
            goto label_19653c;
        }
    }
    ctx->pc = 0x1964C0u;
label_1964c0:
    // 0x1964c0: 0x32220002
    ctx->pc = 0x1964c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 2));
    // 0x1964c4: 0x10400018
    ctx->pc = 0x1964C4u;
    {
        const bool branch_taken_0x1964c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x1964c4) {
            ctx->pc = 0x196528u;
            goto label_196528;
        }
    }
    ctx->pc = 0x1964CCu;
    // 0x1964cc: 0xc065e1c
    ctx->pc = 0x1964CCu;
    SET_GPR_U32(ctx, 31, 0x1964D4u);
    ctx->pc = 0x1964D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsConcatTimeFix_0x197870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964D4u; }
        else if (ctx->pc != 0x1964D4u) { ctx->pc = 0x1964D4u; }
    }
    if (ctx->pc != 0x1964D4u) { return; }
    ctx->pc = 0x1964D4u;
    // 0x1964d4: 0x14400003
    ctx->pc = 0x1964D4u;
    {
        const bool branch_taken_0x1964d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1964D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1964d4) {
            ctx->pc = 0x1964E4u;
            goto label_1964e4;
        }
    }
    ctx->pc = 0x1964DCu;
label_1964dc:
    // 0x1964dc: 0x1000001a
    ctx->pc = 0x1964DCu;
    {
        const bool branch_taken_0x1964dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1964dc) {
            ctx->pc = 0x196548u;
            goto label_196548;
        }
    }
    ctx->pc = 0x1964E4u;
label_1964e4:
    // 0x1964e4: 0xc065e20
    ctx->pc = 0x1964E4u;
    SET_GPR_U32(ctx, 31, 0x1964ECu);
    ctx->pc = 0x1964E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsSkip_0x197880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964ECu; }
        else if (ctx->pc != 0x1964ECu) { ctx->pc = 0x1964ECu; }
    }
    if (ctx->pc != 0x1964ECu) { return; }
    ctx->pc = 0x1964ECu;
    // 0x1964ec: 0x10400009
    ctx->pc = 0x1964ECu;
    {
        const bool branch_taken_0x1964ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1964F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1964ec) {
            ctx->pc = 0x196514u;
            goto label_196514;
        }
    }
    ctx->pc = 0x1964F4u;
    // 0x1964f4: 0x240302d
    ctx->pc = 0x1964f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964f8: 0xc065f52
    ctx->pc = 0x1964F8u;
    SET_GPR_U32(ctx, 31, 0x196500u);
    ctx->pc = 0x1964FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SkipFrm_0x197d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196500u; }
        else if (ctx->pc != 0x196500u) { ctx->pc = 0x196500u; }
    }
    if (ctx->pc != 0x196500u) { return; }
    ctx->pc = 0x196500u;
    // 0x196500: 0x40b02d
    ctx->pc = 0x196500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196504: 0x16c00010
    ctx->pc = 0x196504u;
    {
        const bool branch_taken_0x196504 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x196508u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196504) {
            ctx->pc = 0x196548u;
            goto label_196548;
        }
    }
    ctx->pc = 0x19650Cu;
    // 0x19650c: 0x1000000c
    ctx->pc = 0x19650Cu;
    {
        const bool branch_taken_0x19650c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19650c) {
            ctx->pc = 0x196540u;
            goto label_196540;
        }
    }
    ctx->pc = 0x196514u;
label_196514:
    // 0x196514: 0x240302d
    ctx->pc = 0x196514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196518: 0xc065f94
    ctx->pc = 0x196518u;
    SET_GPR_U32(ctx, 31, 0x196520u);
    ctx->pc = 0x19651Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DecodeFrm_0x197e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196520u; }
        else if (ctx->pc != 0x196520u) { ctx->pc = 0x196520u; }
    }
    if (ctx->pc != 0x196520u) { return; }
    ctx->pc = 0x196520u;
    // 0x196520: 0x10000008
    ctx->pc = 0x196520u;
    {
        const bool branch_taken_0x196520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196524u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196520) {
            ctx->pc = 0x196544u;
            goto label_196544;
        }
    }
    ctx->pc = 0x196528u;
label_196528:
    // 0x196528: 0x12220006
    ctx->pc = 0x196528u;
    {
        const bool branch_taken_0x196528 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x19652Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196528) {
            ctx->pc = 0x196544u;
            goto label_196544;
        }
    }
    ctx->pc = 0x196530u;
    // 0x196530: 0x3a0202d
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196534: 0xc066114
    ctx->pc = 0x196534u;
    SET_GPR_U32(ctx, 31, 0x19653Cu);
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 204));
    ctx->pc = 0x198450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GoDdelim_0x198450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19653Cu; }
        else if (ctx->pc != 0x19653Cu) { ctx->pc = 0x19653Cu; }
    }
    if (ctx->pc != 0x19653Cu) { return; }
    ctx->pc = 0x19653Cu;
label_19653c:
    // 0x19653c: 0x24020001
    ctx->pc = 0x19653cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_196540:
    // 0x196540: 0xaea20000
    ctx->pc = 0x196540u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_196544:
    // 0x196544: 0x2c0102d
    ctx->pc = 0x196544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_196548:
    // 0x196548: 0xdfbf0080
    ctx->pc = 0x196548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19654c: 0xdfb60070
    ctx->pc = 0x19654cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196550: 0xdfb50060
    ctx->pc = 0x196550u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196554: 0xdfb40050
    ctx->pc = 0x196554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196558: 0xdfb30040
    ctx->pc = 0x196558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19655c: 0xdfb20030
    ctx->pc = 0x19655cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196560: 0xdfb10020
    ctx->pc = 0x196560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196564: 0xdfb00010
    ctx->pc = 0x196564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196568: 0x3e00008
    ctx->pc = 0x196568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19656Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1963E8u: goto label_1963e8;
            case 0x196428u: goto label_196428;
            case 0x196448u: goto label_196448;
            case 0x19644Cu: goto label_19644c;
            case 0x196470u: goto label_196470;
            case 0x1964C0u: goto label_1964c0;
            case 0x1964DCu: goto label_1964dc;
            case 0x1964E4u: goto label_1964e4;
            case 0x196514u: goto label_196514;
            case 0x196528u: goto label_196528;
            case 0x19653Cu: goto label_19653c;
            case 0x196540u: goto label_196540;
            case 0x196544u: goto label_196544;
            case 0x196548u: goto label_196548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196570u;
}
