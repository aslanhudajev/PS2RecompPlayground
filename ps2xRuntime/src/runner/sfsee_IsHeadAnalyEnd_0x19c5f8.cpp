#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_IsHeadAnalyEnd
// Address: 0x19c5f8 - 0x19c618
void sfsee_IsHeadAnalyEnd_0x19c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_IsHeadAnalyEnd");


    ctx->pc = 0x19c5f8u;

    // 0x19c5f8: 0x8c840000
    ctx->pc = 0x19c5f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c5fc: 0x24020001
    ctx->pc = 0x19c5fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c600: 0x14820003
    ctx->pc = 0x19C600u;
    {
        const bool branch_taken_0x19c600 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x19c600) {
            ctx->pc = 0x19C610u;
            goto label_19c610;
        }
    }
    ctx->pc = 0x19C608u;
    // 0x19c608: 0x3e00008
    ctx->pc = 0x19C608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C60Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C610u: goto label_19c610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C610u;
label_19c610:
    // 0x19c610: 0x3e00008
    ctx->pc = 0x19C610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C614u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C610u: goto label_19c610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C618u;
}
