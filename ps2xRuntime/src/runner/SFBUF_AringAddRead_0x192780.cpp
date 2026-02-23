#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_AringAddRead
// Address: 0x192780 - 0x192864
void SFBUF_AringAddRead_0x192780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_AringAddRead");


    ctx->pc = 0x192780u;

    // 0x192780: 0x24020388
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x192784: 0x27bdffa0
    ctx->pc = 0x192784u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x192788: 0xa22818
    ctx->pc = 0x192788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x19278c: 0xffb20030
    ctx->pc = 0x19278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192790: 0x80902d
    ctx->pc = 0x192790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192794: 0xffb30040
    ctx->pc = 0x192794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x192798: 0xffb10020
    ctx->pc = 0x192798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19279c: 0x26430d34
    ctx->pc = 0x19279cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 3380));
    // 0x1927a0: 0xffbf0050
    ctx->pc = 0x1927a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1927a4: 0xc0882d
    ctx->pc = 0x1927a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927a8: 0xffb00010
    ctx->pc = 0x1927a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1927ac: 0x982d
    ctx->pc = 0x1927acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927b0: 0x651821
    ctx->pc = 0x1927b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1927b4: 0x12200024
    ctx->pc = 0x1927B4u;
    {
        const bool branch_taken_0x1927b4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1927B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1927b4) {
            ctx->pc = 0x192848u;
            goto label_192848;
        }
    }
    ctx->pc = 0x1927BCu;
    // 0x1927bc: 0x8c620004
    ctx->pc = 0x1927bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1927c0: 0x14400007
    ctx->pc = 0x1927C0u;
    {
        const bool branch_taken_0x1927c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1927C4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1927c0) {
            ctx->pc = 0x1927E0u;
            goto label_1927e0;
        }
    }
    ctx->pc = 0x1927C8u;
    // 0x1927c8: 0x3c05ff00
    ctx->pc = 0x1927c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1927cc: 0x240202d
    ctx->pc = 0x1927ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927d0: 0xc064ea0
    ctx->pc = 0x1927D0u;
    SET_GPR_U32(ctx, 31, 0x1927D8u);
    ctx->pc = 0x1927D4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927D8u; }
        else if (ctx->pc != 0x1927D8u) { ctx->pc = 0x1927D8u; }
    }
    if (ctx->pc != 0x1927D8u) { return; }
    ctx->pc = 0x1927D8u;
    // 0x1927d8: 0x1000001c
    ctx->pc = 0x1927D8u;
    {
        const bool branch_taken_0x1927d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1927DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1927d8) {
            ctx->pc = 0x19284Cu;
            goto label_19284c;
        }
    }
    ctx->pc = 0x1927E0u;
label_1927e0:
    // 0x1927e0: 0xc064f3a
    ctx->pc = 0x1927E0u;
    SET_GPR_U32(ctx, 31, 0x1927E8u);
    ctx->pc = 0x1927E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927E8u; }
        else if (ctx->pc != 0x1927E8u) { ctx->pc = 0x1927E8u; }
    }
    if (ctx->pc != 0x1927E8u) { return; }
    ctx->pc = 0x1927E8u;
    // 0x1927e8: 0x8e020024
    ctx->pc = 0x1927e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1927ec: 0x8e04001c
    ctx->pc = 0x1927ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1927f0: 0x511821
    ctx->pc = 0x1927f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1927f4: 0x64102a
    ctx->pc = 0x1927f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1927f8: 0x14400003
    ctx->pc = 0x1927F8u;
    {
        const bool branch_taken_0x1927f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1927FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        if (branch_taken_0x1927f8) {
            ctx->pc = 0x192808u;
            goto label_192808;
        }
    }
    ctx->pc = 0x192800u;
    // 0x192800: 0x641023
    ctx->pc = 0x192800u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192804: 0xae020024
    ctx->pc = 0x192804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_192808:
    // 0x192808: 0x8e02002c
    ctx->pc = 0x192808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x19280c: 0x8e030028
    ctx->pc = 0x19280cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x192810: 0x511021
    ctx->pc = 0x192810u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x192814: 0x62182a
    ctx->pc = 0x192814u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x192818: 0x10600006
    ctx->pc = 0x192818u;
    {
        const bool branch_taken_0x192818 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19281Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x192818) {
            ctx->pc = 0x192834u;
            goto label_192834;
        }
    }
    ctx->pc = 0x192820u;
    // 0x192820: 0x3c05ff00
    ctx->pc = 0x192820u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x192824: 0x240202d
    ctx->pc = 0x192824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192828: 0xc064ea0
    ctx->pc = 0x192828u;
    SET_GPR_U32(ctx, 31, 0x192830u);
    ctx->pc = 0x19282Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1031));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192830u; }
        else if (ctx->pc != 0x192830u) { ctx->pc = 0x192830u; }
    }
    if (ctx->pc != 0x192830u) { return; }
    ctx->pc = 0x192830u;
    // 0x192830: 0x40982d
    ctx->pc = 0x192830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192834:
    // 0x192834: 0x24020001
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x192838: 0x3a0202d
    ctx->pc = 0x192838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19283c: 0xc064f44
    ctx->pc = 0x19283Cu;
    SET_GPR_U32(ctx, 31, 0x192844u);
    ctx->pc = 0x192840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192844u; }
        else if (ctx->pc != 0x192844u) { ctx->pc = 0x192844u; }
    }
    if (ctx->pc != 0x192844u) { return; }
    ctx->pc = 0x192844u;
    // 0x192844: 0x260102d
    ctx->pc = 0x192844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_192848:
    // 0x192848: 0xdfbf0050
    ctx->pc = 0x192848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19284c:
    // 0x19284c: 0xdfb30040
    ctx->pc = 0x19284cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192850: 0xdfb20030
    ctx->pc = 0x192850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192854: 0xdfb10020
    ctx->pc = 0x192854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192858: 0xdfb00010
    ctx->pc = 0x192858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19285c: 0x3e00008
    ctx->pc = 0x19285Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192860u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1927E0u: goto label_1927e0;
            case 0x192808u: goto label_192808;
            case 0x192834u: goto label_192834;
            case 0x192848u: goto label_192848;
            case 0x19284Cu: goto label_19284c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192864u;
}
