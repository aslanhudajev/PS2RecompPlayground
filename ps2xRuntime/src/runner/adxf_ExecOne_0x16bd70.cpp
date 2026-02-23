#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_ExecOne
// Address: 0x16bd70 - 0x16bde4
void adxf_ExecOne_0x16bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_ExecOne");


    ctx->pc = 0x16bd70u;

    // 0x16bd70: 0x27bdffd0
    ctx->pc = 0x16bd70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bd74: 0x24030002
    ctx->pc = 0x16bd74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bd78: 0xffb00010
    ctx->pc = 0x16bd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16bd7c: 0xffbf0020
    ctx->pc = 0x16bd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16bd80: 0x80802d
    ctx->pc = 0x16bd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd84: 0x82020001
    ctx->pc = 0x16bd84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x16bd88: 0x14430013
    ctx->pc = 0x16BD88u;
    {
        const bool branch_taken_0x16bd88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16BD8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16bd88) {
            ctx->pc = 0x16BDD8u;
            goto label_16bdd8;
        }
    }
    ctx->pc = 0x16BD90u;
    // 0x16bd90: 0xc05c2e0
    ctx->pc = 0x16BD90u;
    SET_GPR_U32(ctx, 31, 0x16BD98u);
    ctx->pc = 0x16BD94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x170B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetStat_0x170b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD98u; }
        else if (ctx->pc != 0x16BD98u) { ctx->pc = 0x16BD98u; }
    }
    if (ctx->pc != 0x16BD98u) { return; }
    ctx->pc = 0x16BD98u;
    // 0x16bd98: 0x8e040004
    ctx->pc = 0x16bd98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16bd9c: 0x3a0282d
    ctx->pc = 0x16bd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bda0: 0xc05c420
    ctx->pc = 0x16BDA0u;
    SET_GPR_U32(ctx, 31, 0x16BDA8u);
    ctx->pc = 0x16BDA4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x171080u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetCurOfst_0x171080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDA8u; }
        else if (ctx->pc != 0x16BDA8u) { ctx->pc = 0x16BDA8u; }
    }
    if (ctx->pc != 0x16BDA8u) { return; }
    ctx->pc = 0x16BDA8u;
    // 0x16bda8: 0x92020001
    ctx->pc = 0x16bda8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x16bdac: 0x8fa30000
    ctx->pc = 0x16bdacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bdb0: 0x2442fffd
    ctx->pc = 0x16bdb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x16bdb4: 0x2c420002
    ctx->pc = 0x16bdb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x16bdb8: 0x10400006
    ctx->pc = 0x16BDB8u;
    {
        const bool branch_taken_0x16bdb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BDBCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        if (branch_taken_0x16bdb8) {
            ctx->pc = 0x16BDD4u;
            goto label_16bdd4;
        }
    }
    ctx->pc = 0x16BDC0u;
    // 0x16bdc0: 0x8e020014
    ctx->pc = 0x16bdc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16bdc4: 0x200202d
    ctx->pc = 0x16bdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdc8: 0x431021
    ctx->pc = 0x16bdc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bdcc: 0xc05adf0
    ctx->pc = 0x16BDCCu;
    SET_GPR_U32(ctx, 31, 0x16BDD4u);
    ctx->pc = 0x16BDD0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x16B7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_CloseSjStm_0x16b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BDD4u; }
        else if (ctx->pc != 0x16BDD4u) { ctx->pc = 0x16BDD4u; }
    }
    if (ctx->pc != 0x16BDD4u) { return; }
    ctx->pc = 0x16BDD4u;
label_16bdd4:
    // 0x16bdd4: 0xdfbf0020
    ctx->pc = 0x16bdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16bdd8:
    // 0x16bdd8: 0xdfb00010
    ctx->pc = 0x16bdd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bddc: 0x3e00008
    ctx->pc = 0x16BDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BDE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BDD4u: goto label_16bdd4;
            case 0x16BDD8u: goto label_16bdd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BDE4u;
}
