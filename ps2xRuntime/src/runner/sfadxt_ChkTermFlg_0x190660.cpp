#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_ChkTermFlg
// Address: 0x190660 - 0x1907b0
void sfadxt_ChkTermFlg_0x190660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_ChkTermFlg");


    ctx->pc = 0x190660u;

    // 0x190660: 0x27bdffa0
    ctx->pc = 0x190660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x190664: 0xffb40040
    ctx->pc = 0x190664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x190668: 0xffb30030
    ctx->pc = 0x190668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19066c: 0xffb20020
    ctx->pc = 0x19066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x190670: 0xa0982d
    ctx->pc = 0x190670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190674: 0xffb10010
    ctx->pc = 0x190674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x190678: 0xffbf0050
    ctx->pc = 0x190678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19067c: 0x80882d
    ctx->pc = 0x19067cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190680: 0xffb00000
    ctx->pc = 0x190680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190684: 0x26343e20
    ctx->pc = 0x190684u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 15904));
    // 0x190688: 0x8e303e20
    ctx->pc = 0x190688u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 15904)));
    // 0x19068c: 0xc05c752
    ctx->pc = 0x19068Cu;
    SET_GPR_U32(ctx, 31, 0x190694u);
    ctx->pc = 0x190690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetStat_0x171d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190694u; }
        else if (ctx->pc != 0x190694u) { ctx->pc = 0x190694u; }
    }
    if (ctx->pc != 0x190694u) { return; }
    ctx->pc = 0x190694u;
    // 0x190694: 0x200202d
    ctx->pc = 0x190694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190698: 0xc05c982
    ctx->pc = 0x190698u;
    SET_GPR_U32(ctx, 31, 0x1906A0u);
    ctx->pc = 0x19069Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172608u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetErrCode_0x172608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906A0u; }
        else if (ctx->pc != 0x1906A0u) { ctx->pc = 0x1906A0u; }
    }
    if (ctx->pc != 0x1906A0u) { return; }
    ctx->pc = 0x1906A0u;
    // 0x1906a0: 0x40802d
    ctx->pc = 0x1906a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906a4: 0x12000002
    ctx->pc = 0x1906A4u;
    {
        const bool branch_taken_0x1906a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1906A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
        if (branch_taken_0x1906a4) {
            ctx->pc = 0x1906B0u;
            goto label_1906b0;
        }
    }
    ctx->pc = 0x1906ACu;
    // 0x1906ac: 0xac50c674
    ctx->pc = 0x1906acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952564), GPR_U32(ctx, 16));
label_1906b0:
    // 0x1906b0: 0x220202d
    ctx->pc = 0x1906b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906b4: 0xc0674c2
    ctx->pc = 0x1906B4u;
    SET_GPR_U32(ctx, 31, 0x1906BCu);
    ctx->pc = 0x1906B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906BCu; }
        else if (ctx->pc != 0x1906BCu) { ctx->pc = 0x1906BCu; }
    }
    if (ctx->pc != 0x1906BCu) { return; }
    ctx->pc = 0x1906BCu;
    // 0x1906bc: 0x2800a
    ctx->pc = 0x1906bcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x1906c0: 0x2402ffff
    ctx->pc = 0x1906c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1906c4: 0x1202000b
    ctx->pc = 0x1906C4u;
    {
        const bool branch_taken_0x1906c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1906C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1906c4) {
            ctx->pc = 0x1906F4u;
            goto label_1906f4;
        }
    }
    ctx->pc = 0x1906CCu;
    // 0x1906cc: 0x6010005
    ctx->pc = 0x1906CCu;
    {
        const bool branch_taken_0x1906cc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1906D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1906cc) {
            ctx->pc = 0x1906E4u;
            goto label_1906e4;
        }
    }
    ctx->pc = 0x1906D4u;
    // 0x1906d4: 0x1202000c
    ctx->pc = 0x1906D4u;
    {
        const bool branch_taken_0x1906d4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x1906d4) {
            ctx->pc = 0x190708u;
            goto label_190708;
        }
    }
    ctx->pc = 0x1906DCu;
    // 0x1906dc: 0x1000000f
    ctx->pc = 0x1906DCu;
    {
        const bool branch_taken_0x1906dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1906dc) {
            ctx->pc = 0x19071Cu;
            goto label_19071c;
        }
    }
    ctx->pc = 0x1906E4u;
label_1906e4:
    // 0x1906e4: 0x1600000d
    ctx->pc = 0x1906E4u;
    {
        const bool branch_taken_0x1906e4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1906E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1906e4) {
            ctx->pc = 0x19071Cu;
            goto label_19071c;
        }
    }
    ctx->pc = 0x1906ECu;
    // 0x1906ec: 0x10000010
    ctx->pc = 0x1906ECu;
    {
        const bool branch_taken_0x1906ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1906ec) {
            ctx->pc = 0x190730u;
            goto label_190730;
        }
    }
    ctx->pc = 0x1906F4u;
label_1906f4:
    // 0x1906f4: 0x3c05ff00
    ctx->pc = 0x1906f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1906f8: 0xc064ea0
    ctx->pc = 0x1906F8u;
    SET_GPR_U32(ctx, 31, 0x190700u);
    ctx->pc = 0x1906FCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3080));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190700u; }
        else if (ctx->pc != 0x190700u) { ctx->pc = 0x190700u; }
    }
    if (ctx->pc != 0x190700u) { return; }
    ctx->pc = 0x190700u;
    // 0x190700: 0x1000000b
    ctx->pc = 0x190700u;
    {
        const bool branch_taken_0x190700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190704u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x190700) {
            ctx->pc = 0x190730u;
            goto label_190730;
        }
    }
    ctx->pc = 0x190708u;
label_190708:
    // 0x190708: 0x3c05ff00
    ctx->pc = 0x190708u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19070c: 0xc064ea0
    ctx->pc = 0x19070Cu;
    SET_GPR_U32(ctx, 31, 0x190714u);
    ctx->pc = 0x190710u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3081));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190714u; }
        else if (ctx->pc != 0x190714u) { ctx->pc = 0x190714u; }
    }
    if (ctx->pc != 0x190714u) { return; }
    ctx->pc = 0x190714u;
    // 0x190714: 0x10000006
    ctx->pc = 0x190714u;
    {
        const bool branch_taken_0x190714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190718u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x190714) {
            ctx->pc = 0x190730u;
            goto label_190730;
        }
    }
    ctx->pc = 0x19071Cu;
label_19071c:
    // 0x19071c: 0x3c05ff00
    ctx->pc = 0x19071cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190720: 0x220202d
    ctx->pc = 0x190720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190724: 0xc064ea0
    ctx->pc = 0x190724u;
    SET_GPR_U32(ctx, 31, 0x19072Cu);
    ctx->pc = 0x190728u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3079));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19072Cu; }
        else if (ctx->pc != 0x19072Cu) { ctx->pc = 0x19072Cu; }
    }
    if (ctx->pc != 0x19072Cu) { return; }
    ctx->pc = 0x19072Cu;
    // 0x19072c: 0x24020005
    ctx->pc = 0x19072cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_190730:
    // 0x190730: 0x12420003
    ctx->pc = 0x190730u;
    {
        const bool branch_taken_0x190730 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x190734u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190730) {
            ctx->pc = 0x190740u;
            goto label_190740;
        }
    }
    ctx->pc = 0x190738u;
    // 0x190738: 0x12000003
    ctx->pc = 0x190738u;
    {
        const bool branch_taken_0x190738 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x190738) {
            ctx->pc = 0x190748u;
            goto label_190748;
        }
    }
    ctx->pc = 0x190740u;
label_190740:
    // 0x190740: 0xc064216
    ctx->pc = 0x190740u;
    SET_GPR_U32(ctx, 31, 0x190748u);
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x190858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_SetTermDst_0x190858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190748u; }
        else if (ctx->pc != 0x190748u) { ctx->pc = 0x190748u; }
    }
    if (ctx->pc != 0x190748u) { return; }
    ctx->pc = 0x190748u;
label_190748:
    // 0x190748: 0xc064206
    ctx->pc = 0x190748u;
    SET_GPR_U32(ctx, 31, 0x190750u);
    ctx->pc = 0x19074Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190818u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetTermSrc_0x190818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190750u; }
        else if (ctx->pc != 0x190750u) { ctx->pc = 0x190750u; }
    }
    if (ctx->pc != 0x190750u) { return; }
    ctx->pc = 0x190750u;
    // 0x190750: 0x24030001
    ctx->pc = 0x190750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x190754: 0x1443000f
    ctx->pc = 0x190754u;
    {
        const bool branch_taken_0x190754 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x190758u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x190754) {
            ctx->pc = 0x190794u;
            goto label_190794;
        }
    }
    ctx->pc = 0x19075Cu;
    // 0x19075c: 0x5660000e
    ctx->pc = 0x19075Cu;
    {
        const bool branch_taken_0x19075c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x19075c) {
            ctx->pc = 0x190760u;
            SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x190798u;
            goto label_190798;
        }
    }
    ctx->pc = 0x190764u;
    // 0x190764: 0x8e820048
    ctx->pc = 0x190764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x190768: 0x1440000b
    ctx->pc = 0x190768u;
    {
        const bool branch_taken_0x190768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19076Cu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x190768) {
            ctx->pc = 0x190798u;
            goto label_190798;
        }
    }
    ctx->pc = 0x190770u;
    // 0x190770: 0x220202d
    ctx->pc = 0x190770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190774: 0xdfbf0050
    ctx->pc = 0x190774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190778: 0x24050001
    ctx->pc = 0x190778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19077c: 0xdfb30030
    ctx->pc = 0x19077cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190780: 0xdfb20020
    ctx->pc = 0x190780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190784: 0xdfb10010
    ctx->pc = 0x190784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190788: 0xdfb00000
    ctx->pc = 0x190788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19078c: 0x8064216
    ctx->pc = 0x19078Cu;
    ctx->pc = 0x190790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x190858u;
    sfadxt_SetTermDst_0x190858(rdram, ctx, runtime); return;
    ctx->pc = 0x190794u;
label_190794:
    // 0x190794: 0xdfb40040
    ctx->pc = 0x190794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_190798:
    // 0x190798: 0xdfb30030
    ctx->pc = 0x190798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19079c: 0xdfb20020
    ctx->pc = 0x19079cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1907a0: 0xdfb10010
    ctx->pc = 0x1907a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1907a4: 0xdfb00000
    ctx->pc = 0x1907a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1907a8: 0x3e00008
    ctx->pc = 0x1907A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1907ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1906B0u: goto label_1906b0;
            case 0x1906E4u: goto label_1906e4;
            case 0x1906F4u: goto label_1906f4;
            case 0x190708u: goto label_190708;
            case 0x19071Cu: goto label_19071c;
            case 0x190730u: goto label_190730;
            case 0x190740u: goto label_190740;
            case 0x190748u: goto label_190748;
            case 0x190794u: goto label_190794;
            case 0x190798u: goto label_190798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1907B0u;
}
