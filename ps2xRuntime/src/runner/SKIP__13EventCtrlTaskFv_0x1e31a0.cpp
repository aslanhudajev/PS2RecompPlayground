#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SKIP__13EventCtrlTaskFv
// Address: 0x1e31a0 - 0x1e31d4
void SKIP__13EventCtrlTaskFv_0x1e31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SKIP__13EventCtrlTaskFv");


    ctx->pc = 0x1e31a0u;

    // 0x1e31a0: 0x8c83000c
    ctx->pc = 0x1e31a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e31a4: 0x8c630004
    ctx->pc = 0x1e31a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e31a8: 0x10600004
    ctx->pc = 0x1E31A8u;
    {
        const bool branch_taken_0x1e31a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E31ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e31a8) {
            ctx->pc = 0x1E31BCu;
            goto label_1e31bc;
        }
    }
    ctx->pc = 0x1E31B0u;
    // 0x1e31b0: 0xaf808cec
    ctx->pc = 0x1e31b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 0));
    // 0x1e31b4: 0x10000003
    ctx->pc = 0x1E31B4u;
    {
        const bool branch_taken_0x1e31b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E31B8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937828), GPR_U32(ctx, 3));
        if (branch_taken_0x1e31b4) {
            ctx->pc = 0x1E31C4u;
            goto label_1e31c4;
        }
    }
    ctx->pc = 0x1E31BCu;
label_1e31bc:
    // 0x1e31bc: 0xaf808ce4
    ctx->pc = 0x1e31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937828), GPR_U32(ctx, 0));
    // 0x1e31c0: 0xaf808ce8
    ctx->pc = 0x1e31c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 0));
label_1e31c4:
    // 0x1e31c4: 0x8c83000c
    ctx->pc = 0x1e31c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e31c8: 0x24630008
    ctx->pc = 0x1e31c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e31cc: 0x3e00008
    ctx->pc = 0x1E31CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E31BCu: goto label_1e31bc;
            case 0x1E31C4u: goto label_1e31c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E31D4u;
}
