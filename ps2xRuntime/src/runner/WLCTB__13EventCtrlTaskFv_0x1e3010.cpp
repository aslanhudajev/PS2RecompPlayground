#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WLCTB__13EventCtrlTaskFv
// Address: 0x1e3010 - 0x1e3048
void WLCTB__13EventCtrlTaskFv_0x1e3010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WLCTB__13EventCtrlTaskFv");


    ctx->pc = 0x1e3010u;

    // 0x1e3010: 0x8c83000c
    ctx->pc = 0x1e3010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3014: 0x24630004
    ctx->pc = 0x1e3014u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e3018: 0xaf838c7c
    ctx->pc = 0x1e3018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 3));
    // 0x1e301c: 0x2403ffff
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3020:
    // 0x1e3020: 0x8c85000c
    ctx->pc = 0x1e3020u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3024: 0x24a50004
    ctx->pc = 0x1e3024u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e3028: 0xac85000c
    ctx->pc = 0x1e3028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1e302c: 0x8c86000c
    ctx->pc = 0x1e302cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3030: 0x8cc50000
    ctx->pc = 0x1e3030u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e3034: 0x14a3fffa
    ctx->pc = 0x1E3034u;
    {
        const bool branch_taken_0x1e3034 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e3034) {
            ctx->pc = 0x1E3020u;
            goto label_1e3020;
        }
    }
    ctx->pc = 0x1E303Cu;
    // 0x1e303c: 0x24c30004
    ctx->pc = 0x1e303cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e3040: 0x3e00008
    ctx->pc = 0x1E3040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3044u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3020u: goto label_1e3020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3048u;
}
