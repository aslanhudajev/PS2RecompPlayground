#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CheckReadBuf
// Address: 0x2dceb8 - 0x2dcf10
void CheckReadBuf_0x2dceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dceb8u;

    // 0x2dceb8: 0x3c020005
    ctx->pc = 0x2dceb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2dcebc: 0x822021
    ctx->pc = 0x2dcebcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dcec0: 0x8c830008
    ctx->pc = 0x2dcec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dcec4: 0x3c020005
    ctx->pc = 0x2dcec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2dcec8: 0x3442000c
    ctx->pc = 0x2dcec8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 12));
    // 0x2dcecc: 0x43102b
    ctx->pc = 0x2dceccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dced0: 0x1440000b
    ctx->pc = 0x2DCED0u;
    {
        const bool branch_taken_0x2dced0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dced0) {
            ctx->pc = 0x2DCF00u;
            goto label_2dcf00;
        }
    }
    ctx->pc = 0x2DCED8u;
    // 0x2dced8: 0x8c820000
    ctx->pc = 0x2dced8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dcedc: 0x4400008
    ctx->pc = 0x2DCEDCu;
    {
        const bool branch_taken_0x2dcedc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DCEE0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
        if (branch_taken_0x2dcedc) {
            ctx->pc = 0x2DCF00u;
            goto label_2dcf00;
        }
    }
    ctx->pc = 0x2DCEE4u;
    // 0x2dcee4: 0x14400006
    ctx->pc = 0x2DCEE4u;
    {
        const bool branch_taken_0x2dcee4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dcee4) {
            ctx->pc = 0x2DCF00u;
            goto label_2dcf00;
        }
    }
    ctx->pc = 0x2DCEECu;
    // 0x2dceec: 0x8c820004
    ctx->pc = 0x2dceecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dcef0: 0x4400003
    ctx->pc = 0x2DCEF0u;
    {
        const bool branch_taken_0x2dcef0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DCEF4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
        if (branch_taken_0x2dcef0) {
            ctx->pc = 0x2DCF00u;
            goto label_2dcf00;
        }
    }
    ctx->pc = 0x2DCEF8u;
    // 0x2dcef8: 0x10400003
    ctx->pc = 0x2DCEF8u;
    {
        const bool branch_taken_0x2dcef8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dcef8) {
            ctx->pc = 0x2DCF08u;
            goto label_2dcf08;
        }
    }
    ctx->pc = 0x2DCF00u;
label_2dcf00:
    // 0x2dcf00: 0x3e00008
    ctx->pc = 0x2DCF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCF04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCF00u: goto label_2dcf00;
            case 0x2DCF08u: goto label_2dcf08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DCF08u;
label_2dcf08:
    // 0x2dcf08: 0x3e00008
    ctx->pc = 0x2DCF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCF0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCF00u: goto label_2dcf00;
            case 0x2DCF08u: goto label_2dcf08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DCF10u;
}
