#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_SetFlowLimit
// Address: 0x17a5f0 - 0x17a630
void LSC_SetFlowLimit_0x17a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_SetFlowLimit");


    ctx->pc = 0x17a5f0u;

    // 0x17a5f0: 0x14800004
    ctx->pc = 0x17A5F0u;
    {
        const bool branch_taken_0x17a5f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a5f0) {
            ctx->pc = 0x17A604u;
            goto label_17a604;
        }
    }
    ctx->pc = 0x17A5F8u;
    // 0x17a5f8: 0x3c04002c
    ctx->pc = 0x17a5f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a5fc: 0x805e9c6
    ctx->pc = 0x17A5FCu;
    ctx->pc = 0x17A600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    LSC_CallErrFunc_0x17a718(rdram, ctx, runtime); return;
    ctx->pc = 0x17A604u;
label_17a604:
    // 0x17a604: 0x4a20006
    ctx->pc = 0x17A604u;
    {
        const bool branch_taken_0x17a604 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x17a604) {
            ctx->pc = 0x17A608u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x17A620u;
            goto label_17a620;
        }
    }
    ctx->pc = 0x17A60Cu;
    // 0x17a60c: 0x8c820018
    ctx->pc = 0x17a60cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17a610: 0x45102a
    ctx->pc = 0x17a610u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x17a614: 0x10400004
    ctx->pc = 0x17A614u;
    {
        const bool branch_taken_0x17a614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17a614) {
            ctx->pc = 0x17A628u;
            goto label_17a628;
        }
    }
    ctx->pc = 0x17A61Cu;
    // 0x17a61c: 0x3c04002c
    ctx->pc = 0x17a61cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17a620:
    // 0x17a620: 0x805e9c6
    ctx->pc = 0x17A620u;
    ctx->pc = 0x17A624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949632));
    ctx->pc = 0x17A718u;
    LSC_CallErrFunc_0x17a718(rdram, ctx, runtime); return;
    ctx->pc = 0x17A628u;
label_17a628:
    // 0x17a628: 0x3e00008
    ctx->pc = 0x17A628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A62Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A604u: goto label_17a604;
            case 0x17A620u: goto label_17a620;
            case 0x17A628u: goto label_17a628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A630u;
}
