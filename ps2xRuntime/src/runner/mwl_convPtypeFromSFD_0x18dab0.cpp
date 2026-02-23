#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_convPtypeFromSFD
// Address: 0x18dab0 - 0x18db18
void mwl_convPtypeFromSFD_0x18dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_convPtypeFromSFD");


    ctx->pc = 0x18dab0u;

    // 0x18dab0: 0x27bdfff0
    ctx->pc = 0x18dab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18dab4: 0x24020002
    ctx->pc = 0x18dab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dab8: 0x10820014
    ctx->pc = 0x18DAB8u;
    {
        const bool branch_taken_0x18dab8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DABCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x18dab8) {
            ctx->pc = 0x18DB0Cu;
            goto label_18db0c;
        }
    }
    ctx->pc = 0x18DAC0u;
    // 0x18dac0: 0x2c820003
    ctx->pc = 0x18dac0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x18dac4: 0x10400005
    ctx->pc = 0x18DAC4u;
    {
        const bool branch_taken_0x18dac4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DAC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18dac4) {
            ctx->pc = 0x18DADCu;
            goto label_18dadc;
        }
    }
    ctx->pc = 0x18DACCu;
    // 0x18dacc: 0x10820010
    ctx->pc = 0x18DACCu;
    {
        const bool branch_taken_0x18dacc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DAD0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x18dacc) {
            ctx->pc = 0x18DB10u;
            goto label_18db10;
        }
    }
    ctx->pc = 0x18DAD4u;
    // 0x18dad4: 0x1000000a
    ctx->pc = 0x18DAD4u;
    {
        const bool branch_taken_0x18dad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DAD8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18dad4) {
            ctx->pc = 0x18DB00u;
            goto label_18db00;
        }
    }
    ctx->pc = 0x18DADCu;
label_18dadc:
    // 0x18dadc: 0x24020003
    ctx->pc = 0x18dadcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18dae0: 0x10820005
    ctx->pc = 0x18DAE0u;
    {
        const bool branch_taken_0x18dae0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DAE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x18dae0) {
            ctx->pc = 0x18DAF8u;
            goto label_18daf8;
        }
    }
    ctx->pc = 0x18DAE8u;
    // 0x18dae8: 0x10820008
    ctx->pc = 0x18DAE8u;
    {
        const bool branch_taken_0x18dae8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DAECu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18dae8) {
            ctx->pc = 0x18DB0Cu;
            goto label_18db0c;
        }
    }
    ctx->pc = 0x18DAF0u;
    // 0x18daf0: 0x10000003
    ctx->pc = 0x18DAF0u;
    {
        const bool branch_taken_0x18daf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18daf0) {
            ctx->pc = 0x18DB00u;
            goto label_18db00;
        }
    }
    ctx->pc = 0x18DAF8u;
label_18daf8:
    // 0x18daf8: 0x10000004
    ctx->pc = 0x18DAF8u;
    {
        const bool branch_taken_0x18daf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DAFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x18daf8) {
            ctx->pc = 0x18DB0Cu;
            goto label_18db0c;
        }
    }
    ctx->pc = 0x18DB00u;
label_18db00:
    // 0x18db00: 0xc063dda
    ctx->pc = 0x18DB00u;
    SET_GPR_U32(ctx, 31, 0x18DB08u);
    ctx->pc = 0x18DB04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954744));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB08u; }
        else if (ctx->pc != 0x18DB08u) { ctx->pc = 0x18DB08u; }
    }
    if (ctx->pc != 0x18DB08u) { return; }
    ctx->pc = 0x18DB08u;
    // 0x18db08: 0x24020001
    ctx->pc = 0x18db08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18db0c:
    // 0x18db0c: 0xdfbf0000
    ctx->pc = 0x18db0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18db10:
    // 0x18db10: 0x3e00008
    ctx->pc = 0x18DB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DB14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DADCu: goto label_18dadc;
            case 0x18DAF8u: goto label_18daf8;
            case 0x18DB00u: goto label_18db00;
            case 0x18DB0Cu: goto label_18db0c;
            case 0x18DB10u: goto label_18db10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DB18u;
}
