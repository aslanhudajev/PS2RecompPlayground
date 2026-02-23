#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: unexpected__3stdFv
// Address: 0x1c7620 - 0x1c7640
void unexpected__3stdFv_0x1c7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("unexpected__3stdFv");


    ctx->pc = 0x1c7620u;

label_1c7620:
    // 0x1c7620: 0x27bdfff0
    ctx->pc = 0x1c7620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7624:
    // 0x1c7624: 0x7fbf0000
    ctx->pc = 0x1c7624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1c7628:
    // 0x1c7628: 0x8f828350
    ctx->pc = 0x1c7628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935376)));
label_1c762c:
    // 0x1c762c: 0x40f809
label_1c7630:
    if (ctx->pc == 0x1C7630u) {
        ctx->pc = 0x1C7634u;
        goto label_1c7634;
    }
    ctx->pc = 0x1C762Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7634u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7620u: goto label_1c7620;
            case 0x1C7624u: goto label_1c7624;
            case 0x1C7628u: goto label_1c7628;
            case 0x1C762Cu: goto label_1c762c;
            case 0x1C7630u: goto label_1c7630;
            case 0x1C7634u: goto label_1c7634;
            case 0x1C7638u: goto label_1c7638;
            case 0x1C763Cu: goto label_1c763c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7634u; }
            if (ctx->pc != 0x1C7634u) { return; }
        }
    }
    ctx->pc = 0x1C7634u;
label_1c7634:
    // 0x1c7634: 0x7bbf0000
    ctx->pc = 0x1c7634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7638:
    // 0x1c7638: 0x3e00008
label_1c763c:
    if (ctx->pc == 0x1C763Cu) {
        ctx->pc = 0x1C763Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7640u;
        goto label_fallthrough_0x1c7638;
    }
    ctx->pc = 0x1C7638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C763Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7620u: goto label_1c7620;
            case 0x1C7624u: goto label_1c7624;
            case 0x1C7628u: goto label_1c7628;
            case 0x1C762Cu: goto label_1c762c;
            case 0x1C7630u: goto label_1c7630;
            case 0x1C7634u: goto label_1c7634;
            case 0x1C7638u: goto label_1c7638;
            case 0x1C763Cu: goto label_1c763c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1c7638:
    ctx->pc = 0x1C7640u;
}
