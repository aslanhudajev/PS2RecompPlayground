#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: vr_destruct
// Address: 0x1a43d0 - 0x1a43f8
void vr_destruct_0x1a43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("vr_destruct");


    ctx->pc = 0x1a43d0u;

label_1a43d0:
    // 0x1a43d0: 0x27bdfff0
    ctx->pc = 0x1a43d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a43d4:
    // 0x1a43d4: 0x10800005
label_1a43d8:
    if (ctx->pc == 0x1A43D8u) {
        ctx->pc = 0x1A43D8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        ctx->pc = 0x1A43DCu;
        goto label_1a43dc;
    }
    ctx->pc = 0x1A43D4u;
    {
        const bool branch_taken_0x1a43d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A43D8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1a43d4) {
            ctx->pc = 0x1A43ECu;
            goto label_1a43ec;
        }
    }
    ctx->pc = 0x1A43DCu;
label_1a43dc:
    // 0x1a43dc: 0x8c990030
    ctx->pc = 0x1a43dcu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1a43e0:
    // 0x1a43e0: 0x8f390008
    ctx->pc = 0x1a43e0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a43e4:
    // 0x1a43e4: 0x320f809
label_1a43e8:
    if (ctx->pc == 0x1A43E8u) {
        ctx->pc = 0x1A43E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A43ECu;
        goto label_1a43ec;
    }
    ctx->pc = 0x1A43E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A43ECu);
        ctx->pc = 0x1A43E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A43D0u: goto label_1a43d0;
            case 0x1A43D4u: goto label_1a43d4;
            case 0x1A43D8u: goto label_1a43d8;
            case 0x1A43DCu: goto label_1a43dc;
            case 0x1A43E0u: goto label_1a43e0;
            case 0x1A43E4u: goto label_1a43e4;
            case 0x1A43E8u: goto label_1a43e8;
            case 0x1A43ECu: goto label_1a43ec;
            case 0x1A43F0u: goto label_1a43f0;
            case 0x1A43F4u: goto label_1a43f4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A43ECu; }
            if (ctx->pc != 0x1A43ECu) { return; }
        }
    }
    ctx->pc = 0x1A43ECu;
label_1a43ec:
    // 0x1a43ec: 0x7bbf0000
    ctx->pc = 0x1a43ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a43f0:
    // 0x1a43f0: 0x3e00008
label_1a43f4:
    if (ctx->pc == 0x1A43F4u) {
        ctx->pc = 0x1A43F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A43F8u;
        goto label_fallthrough_0x1a43f0;
    }
    ctx->pc = 0x1A43F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A43D0u: goto label_1a43d0;
            case 0x1A43D4u: goto label_1a43d4;
            case 0x1A43D8u: goto label_1a43d8;
            case 0x1A43DCu: goto label_1a43dc;
            case 0x1A43E0u: goto label_1a43e0;
            case 0x1A43E4u: goto label_1a43e4;
            case 0x1A43E8u: goto label_1a43e8;
            case 0x1A43ECu: goto label_1a43ec;
            case 0x1A43F0u: goto label_1a43f0;
            case 0x1A43F4u: goto label_1a43f4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a43f0:
    ctx->pc = 0x1A43F8u;
}
