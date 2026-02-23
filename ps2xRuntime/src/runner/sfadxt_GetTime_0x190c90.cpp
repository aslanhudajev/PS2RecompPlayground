#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_GetTime
// Address: 0x190c90 - 0x190d40
void sfadxt_GetTime_0x190c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_GetTime");


    ctx->pc = 0x190c90u;

    // 0x190c90: 0x27bdff90
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x190c94: 0xffb40050
    ctx->pc = 0x190c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x190c98: 0xffb30040
    ctx->pc = 0x190c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x190c9c: 0xc0a02d
    ctx->pc = 0x190c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ca0: 0xffb10020
    ctx->pc = 0x190ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x190ca4: 0xa0982d
    ctx->pc = 0x190ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ca8: 0xffb00010
    ctx->pc = 0x190ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x190cac: 0xffbf0060
    ctx->pc = 0x190cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x190cb0: 0x80802d
    ctx->pc = 0x190cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cb4: 0xffb20030
    ctx->pc = 0x190cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x190cb8: 0x26113e20
    ctx->pc = 0x190cb8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 15904));
    // 0x190cbc: 0xc067854
    ctx->pc = 0x190CBCu;
    SET_GPR_U32(ctx, 31, 0x190CC4u);
    ctx->pc = 0x190CC0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 15904)));
    ctx->pc = 0x19E150u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_ChkRegularTime_0x19e150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CC4u; }
        else if (ctx->pc != 0x190CC4u) { ctx->pc = 0x190CC4u; }
    }
    if (ctx->pc != 0x190CC4u) { return; }
    ctx->pc = 0x190CC4u;
    // 0x190cc4: 0x54400003
    ctx->pc = 0x190CC4u;
    {
        const bool branch_taken_0x190cc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x190cc4) {
            ctx->pc = 0x190CC8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->pc = 0x190CD4u;
            goto label_190cd4;
        }
    }
    ctx->pc = 0x190CCCu;
    // 0x190ccc: 0x10000014
    ctx->pc = 0x190CCCu;
    {
        const bool branch_taken_0x190ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190CD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190ccc) {
            ctx->pc = 0x190D20u;
            goto label_190d20;
        }
    }
    ctx->pc = 0x190CD4u;
label_190cd4:
    // 0x190cd4: 0x24020004
    ctx->pc = 0x190cd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x190cd8: 0x5462000d
    ctx->pc = 0x190CD8u;
    {
        const bool branch_taken_0x190cd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x190cd8) {
            ctx->pc = 0x190CDCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->pc = 0x190D10u;
            goto label_190d10;
        }
    }
    ctx->pc = 0x190CE0u;
    // 0x190ce0: 0x240202d
    ctx->pc = 0x190ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ce4: 0x3a0282d
    ctx->pc = 0x190ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ce8: 0xc05c7ca
    ctx->pc = 0x190CE8u;
    SET_GPR_U32(ctx, 31, 0x190CF0u);
    ctx->pc = 0x190CECu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x171F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetTime_0x171f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CF0u; }
        else if (ctx->pc != 0x190CF0u) { ctx->pc = 0x190CF0u; }
    }
    if (ctx->pc != 0x190CF0u) { return; }
    ctx->pc = 0x190CF0u;
    // 0x190cf0: 0x8fa30000
    ctx->pc = 0x190cf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190cf4: 0x8e240024
    ctx->pc = 0x190cf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x190cf8: 0x83102a
    ctx->pc = 0x190cf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x190cfc: 0x10400004
    ctx->pc = 0x190CFCu;
    {
        const bool branch_taken_0x190cfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190D00u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x190cfc) {
            ctx->pc = 0x190D10u;
            goto label_190d10;
        }
    }
    ctx->pc = 0x190D04u;
    // 0x190d04: 0x60202d
    ctx->pc = 0x190d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d08: 0xae230024
    ctx->pc = 0x190d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x190d0c: 0xae220028
    ctx->pc = 0x190d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_190d10:
    // 0x190d10: 0xae640000
    ctx->pc = 0x190d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x190d14: 0x102d
    ctx->pc = 0x190d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d18: 0x8e230028
    ctx->pc = 0x190d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x190d1c: 0xae830000
    ctx->pc = 0x190d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_190d20:
    // 0x190d20: 0xdfbf0060
    ctx->pc = 0x190d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190d24: 0xdfb40050
    ctx->pc = 0x190d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190d28: 0xdfb30040
    ctx->pc = 0x190d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190d2c: 0xdfb20030
    ctx->pc = 0x190d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190d30: 0xdfb10020
    ctx->pc = 0x190d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190d34: 0xdfb00010
    ctx->pc = 0x190d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190d38: 0x3e00008
    ctx->pc = 0x190D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190D3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190CD4u: goto label_190cd4;
            case 0x190D10u: goto label_190d10;
            case 0x190D20u: goto label_190d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190D40u;
}
