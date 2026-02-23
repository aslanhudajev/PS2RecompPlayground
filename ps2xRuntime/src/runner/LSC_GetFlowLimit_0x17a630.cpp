#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_GetFlowLimit
// Address: 0x17a630 - 0x17a660
void LSC_GetFlowLimit_0x17a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_GetFlowLimit");


    ctx->pc = 0x17a630u;

    // 0x17a630: 0x27bdfff0
    ctx->pc = 0x17a630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a634: 0x14800006
    ctx->pc = 0x17A634u;
    {
        const bool branch_taken_0x17a634 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A638u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17a634) {
            ctx->pc = 0x17A650u;
            goto label_17a650;
        }
    }
    ctx->pc = 0x17A63Cu;
    // 0x17a63c: 0x3c04002c
    ctx->pc = 0x17a63cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a640: 0xc05e9c6
    ctx->pc = 0x17A640u;
    SET_GPR_U32(ctx, 31, 0x17A648u);
    ctx->pc = 0x17A644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A648u; }
        else if (ctx->pc != 0x17A648u) { ctx->pc = 0x17A648u; }
    }
    if (ctx->pc != 0x17A648u) { return; }
    ctx->pc = 0x17A648u;
    // 0x17a648: 0x10000002
    ctx->pc = 0x17A648u;
    {
        const bool branch_taken_0x17a648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A64Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a648) {
            ctx->pc = 0x17A654u;
            goto label_17a654;
        }
    }
    ctx->pc = 0x17A650u;
label_17a650:
    // 0x17a650: 0x8c820014
    ctx->pc = 0x17a650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_17a654:
    // 0x17a654: 0xdfbf0000
    ctx->pc = 0x17a654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a658: 0x3e00008
    ctx->pc = 0x17A658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A65Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A650u: goto label_17a650;
            case 0x17A654u: goto label_17a654;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A660u;
}
