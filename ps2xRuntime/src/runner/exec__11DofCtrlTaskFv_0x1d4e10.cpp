#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__11DofCtrlTaskFv
// Address: 0x1d4e10 - 0x1d4e3c
void exec__11DofCtrlTaskFv_0x1d4e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__11DofCtrlTaskFv");


    ctx->pc = 0x1d4e10u;

    // 0x1d4e10: 0x27bdfff0
    ctx->pc = 0x1d4e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4e14: 0x7fbf0000
    ctx->pc = 0x1d4e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d4e18: 0x8c830004
    ctx->pc = 0x1d4e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4e1c: 0x30630001
    ctx->pc = 0x1d4e1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1d4e20: 0x10600003
    ctx->pc = 0x1D4E20u;
    {
        const bool branch_taken_0x1d4e20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4e20) {
            ctx->pc = 0x1D4E30u;
            goto label_1d4e30;
        }
    }
    ctx->pc = 0x1D4E28u;
    // 0x1d4e28: 0xc069740
    ctx->pc = 0x1D4E28u;
    SET_GPR_U32(ctx, 31, 0x1D4E30u);
    ctx->pc = 0x1A5D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofExec2_0x1a5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E30u; }
        else if (ctx->pc != 0x1D4E30u) { ctx->pc = 0x1D4E30u; }
    }
    if (ctx->pc != 0x1D4E30u) { return; }
    ctx->pc = 0x1D4E30u;
label_1d4e30:
    // 0x1d4e30: 0x7bbf0000
    ctx->pc = 0x1d4e30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4e34: 0x3e00008
    ctx->pc = 0x1D4E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4E38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4E30u: goto label_1d4e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4E3Cu;
}
