#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ChkPrepFlg
// Address: 0x195b70 - 0x195c18
void sfmpv_ChkPrepFlg_0x195b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ChkPrepFlg");


    ctx->pc = 0x195b70u;

    // 0x195b70: 0x27bdffb0
    ctx->pc = 0x195b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x195b74: 0xffb00000
    ctx->pc = 0x195b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195b78: 0xffb30030
    ctx->pc = 0x195b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x195b7c: 0x80802d
    ctx->pc = 0x195b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b80: 0xffbf0040
    ctx->pc = 0x195b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x195b84: 0x26023738
    ctx->pc = 0x195b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 14136));
    // 0x195b88: 0xffb10010
    ctx->pc = 0x195b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x195b8c: 0x24130001
    ctx->pc = 0x195b8cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x195b90: 0xffb20020
    ctx->pc = 0x195b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x195b94: 0x8c5206b0
    ctx->pc = 0x195b94u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    // 0x195b98: 0x8c5106ac
    ctx->pc = 0x195b98u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x195b9c: 0xc064a54
    ctx->pc = 0x195B9Cu;
    SET_GPR_U32(ctx, 31, 0x195BA4u);
    ctx->pc = 0x195BA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BA4u; }
        else if (ctx->pc != 0x195BA4u) { ctx->pc = 0x195BA4u; }
    }
    if (ctx->pc != 0x195BA4u) { return; }
    ctx->pc = 0x195BA4u;
    // 0x195ba4: 0x10530015
    ctx->pc = 0x195BA4u;
    {
        const bool branch_taken_0x195ba4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x195BA8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195ba4) {
            ctx->pc = 0x195BFCu;
            goto label_195bfc;
        }
    }
    ctx->pc = 0x195BACu;
    // 0x195bac: 0xc064a54
    ctx->pc = 0x195BACu;
    SET_GPR_U32(ctx, 31, 0x195BB4u);
    ctx->pc = 0x195BB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BB4u; }
        else if (ctx->pc != 0x195BB4u) { ctx->pc = 0x195BB4u; }
    }
    if (ctx->pc != 0x195BB4u) { return; }
    ctx->pc = 0x195BB4u;
    // 0x195bb4: 0x14530012
    ctx->pc = 0x195BB4u;
    {
        const bool branch_taken_0x195bb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x195BB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x195bb4) {
            ctx->pc = 0x195C00u;
            goto label_195c00;
        }
    }
    ctx->pc = 0x195BBCu;
    // 0x195bbc: 0xc065706
    ctx->pc = 0x195BBCu;
    SET_GPR_U32(ctx, 31, 0x195BC4u);
    ctx->pc = 0x195BC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsPrepEnd_0x195c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BC4u; }
        else if (ctx->pc != 0x195BC4u) { ctx->pc = 0x195BC4u; }
    }
    if (ctx->pc != 0x195BC4u) { return; }
    ctx->pc = 0x195BC4u;
    // 0x195bc4: 0x1040000e
    ctx->pc = 0x195BC4u;
    {
        const bool branch_taken_0x195bc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195BC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x195bc4) {
            ctx->pc = 0x195C00u;
            goto label_195c00;
        }
    }
    ctx->pc = 0x195BCCu;
    // 0x195bcc: 0x240282d
    ctx->pc = 0x195bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bd0: 0x200202d
    ctx->pc = 0x195bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bd4: 0xc064a4e
    ctx->pc = 0x195BD4u;
    SET_GPR_U32(ctx, 31, 0x195BDCu);
    ctx->pc = 0x195BD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x192938u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetPrepFlg_0x192938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BDCu; }
        else if (ctx->pc != 0x195BDCu) { ctx->pc = 0x195BDCu; }
    }
    if (ctx->pc != 0x195BDCu) { return; }
    ctx->pc = 0x195BDCu;
    // 0x195bdc: 0x200202d
    ctx->pc = 0x195bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195be0: 0xdfbf0040
    ctx->pc = 0x195be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195be4: 0xdfb30030
    ctx->pc = 0x195be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195be8: 0xdfb20020
    ctx->pc = 0x195be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195bec: 0xdfb10010
    ctx->pc = 0x195becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195bf0: 0xdfb00000
    ctx->pc = 0x195bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195bf4: 0x8065748
    ctx->pc = 0x195BF4u;
    ctx->pc = 0x195BF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x195D20u;
    sfmpv_FixedStartTtu_0x195d20(rdram, ctx, runtime); return;
    ctx->pc = 0x195BFCu;
label_195bfc:
    // 0x195bfc: 0xdfbf0040
    ctx->pc = 0x195bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_195c00:
    // 0x195c00: 0xdfb30030
    ctx->pc = 0x195c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195c04: 0xdfb20020
    ctx->pc = 0x195c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195c08: 0xdfb10010
    ctx->pc = 0x195c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195c0c: 0xdfb00000
    ctx->pc = 0x195c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c10: 0x3e00008
    ctx->pc = 0x195C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195BFCu: goto label_195bfc;
            case 0x195C00u: goto label_195c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195C18u;
}
