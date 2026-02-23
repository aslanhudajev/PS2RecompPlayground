#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_ChkPrmPt
// Address: 0x16a5f8 - 0x16a63c
void adxf_ChkPrmPt_0x16a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_ChkPrmPt");


    ctx->pc = 0x16a5f8u;

    // 0x16a5f8: 0x27bdfff0
    ctx->pc = 0x16a5f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a5fc: 0x2c840100
    ctx->pc = 0x16a5fcu;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 256));
    // 0x16a600: 0x14800004
    ctx->pc = 0x16A600u;
    {
        const bool branch_taken_0x16a600 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A604u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16a600) {
            ctx->pc = 0x16A614u;
            goto label_16a614;
        }
    }
    ctx->pc = 0x16A608u;
    // 0x16a608: 0x3c04002c
    ctx->pc = 0x16a608u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16a60c: 0x10000005
    ctx->pc = 0x16A60Cu;
    {
        const bool branch_taken_0x16a60c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A610u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938944));
        if (branch_taken_0x16a60c) {
            ctx->pc = 0x16A624u;
            goto label_16a624;
        }
    }
    ctx->pc = 0x16A614u;
label_16a614:
    // 0x16a614: 0x14a00006
    ctx->pc = 0x16A614u;
    {
        const bool branch_taken_0x16a614 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A618u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a614) {
            ctx->pc = 0x16A630u;
            goto label_16a630;
        }
    }
    ctx->pc = 0x16A61Cu;
    // 0x16a61c: 0x3c04002c
    ctx->pc = 0x16a61cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16a620: 0x24849178
    ctx->pc = 0x16a620u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939000));
label_16a624:
    // 0x16a624: 0xc05a854
    ctx->pc = 0x16A624u;
    SET_GPR_U32(ctx, 31, 0x16A62Cu);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A62Cu; }
        else if (ctx->pc != 0x16A62Cu) { ctx->pc = 0x16A62Cu; }
    }
    if (ctx->pc != 0x16A62Cu) { return; }
    ctx->pc = 0x16A62Cu;
    // 0x16a62c: 0x2402fffd
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_16a630:
    // 0x16a630: 0xdfbf0000
    ctx->pc = 0x16a630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a634: 0x3e00008
    ctx->pc = 0x16A634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A614u: goto label_16a614;
            case 0x16A624u: goto label_16a624;
            case 0x16A630u: goto label_16a630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A63Cu;
}
