#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlWaitVSync
// Address: 0x1af6c0 - 0x1af704
void nlWaitVSync_0x1af6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlWaitVSync");


    ctx->pc = 0x1af6c0u;

label_1af6c0:
    // 0x1af6c0: 0x27bdfff0
    ctx->pc = 0x1af6c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1af6c4:
    // 0x1af6c4: 0x7fbf0000
    ctx->pc = 0x1af6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1af6c8:
    // 0x1af6c8: 0x8f838ae0
    ctx->pc = 0x1af6c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937312)));
label_1af6cc:
    // 0x1af6cc: 0x10000006
label_1af6d0:
    if (ctx->pc == 0x1AF6D0u) {
        ctx->pc = 0x1AF6D0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937308), GPR_U32(ctx, 3));
        ctx->pc = 0x1AF6D4u;
        goto label_1af6d4;
    }
    ctx->pc = 0x1AF6CCu;
    {
        const bool branch_taken_0x1af6cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF6D0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937308), GPR_U32(ctx, 3));
        if (branch_taken_0x1af6cc) {
            ctx->pc = 0x1AF6E8u;
            goto label_1af6e8;
        }
    }
    ctx->pc = 0x1AF6D4u;
label_1af6d4:
    // 0x1af6d4: 0x8f838ad0
    ctx->pc = 0x1af6d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1af6d8:
    // 0x1af6d8: 0x10600003
label_1af6dc:
    if (ctx->pc == 0x1AF6DCu) {
        ctx->pc = 0x1AF6E0u;
        goto label_1af6e0;
    }
    ctx->pc = 0x1AF6D8u;
    {
        const bool branch_taken_0x1af6d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1af6d8) {
            ctx->pc = 0x1AF6E8u;
            goto label_1af6e8;
        }
    }
    ctx->pc = 0x1AF6E0u;
label_1af6e0:
    // 0x1af6e0: 0x60f809
label_1af6e4:
    if (ctx->pc == 0x1AF6E4u) {
        ctx->pc = 0x1AF6E8u;
        goto label_1af6e8;
    }
    ctx->pc = 0x1AF6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF6E8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF6C0u: goto label_1af6c0;
            case 0x1AF6C4u: goto label_1af6c4;
            case 0x1AF6C8u: goto label_1af6c8;
            case 0x1AF6CCu: goto label_1af6cc;
            case 0x1AF6D0u: goto label_1af6d0;
            case 0x1AF6D4u: goto label_1af6d4;
            case 0x1AF6D8u: goto label_1af6d8;
            case 0x1AF6DCu: goto label_1af6dc;
            case 0x1AF6E0u: goto label_1af6e0;
            case 0x1AF6E4u: goto label_1af6e4;
            case 0x1AF6E8u: goto label_1af6e8;
            case 0x1AF6ECu: goto label_1af6ec;
            case 0x1AF6F0u: goto label_1af6f0;
            case 0x1AF6F4u: goto label_1af6f4;
            case 0x1AF6F8u: goto label_1af6f8;
            case 0x1AF6FCu: goto label_1af6fc;
            case 0x1AF700u: goto label_1af700;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AF6E8u; }
            if (ctx->pc != 0x1AF6E8u) { return; }
        }
    }
    ctx->pc = 0x1AF6E8u;
label_1af6e8:
    // 0x1af6e8: 0x8f848ae0
    ctx->pc = 0x1af6e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937312)));
label_1af6ec:
    // 0x1af6ec: 0x8f838adc
    ctx->pc = 0x1af6ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
label_1af6f0:
    // 0x1af6f0: 0x1083fff8
label_1af6f4:
    if (ctx->pc == 0x1AF6F4u) {
        ctx->pc = 0x1AF6F8u;
        goto label_1af6f8;
    }
    ctx->pc = 0x1AF6F0u;
    {
        const bool branch_taken_0x1af6f0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1af6f0) {
            ctx->pc = 0x1AF6D4u;
            goto label_1af6d4;
        }
    }
    ctx->pc = 0x1AF6F8u;
label_1af6f8:
    // 0x1af6f8: 0x7bbf0000
    ctx->pc = 0x1af6f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af6fc:
    // 0x1af6fc: 0x3e00008
label_1af700:
    if (ctx->pc == 0x1AF700u) {
        ctx->pc = 0x1AF700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1AF704u;
        goto label_fallthrough_0x1af6fc;
    }
    ctx->pc = 0x1AF6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF6C0u: goto label_1af6c0;
            case 0x1AF6C4u: goto label_1af6c4;
            case 0x1AF6C8u: goto label_1af6c8;
            case 0x1AF6CCu: goto label_1af6cc;
            case 0x1AF6D0u: goto label_1af6d0;
            case 0x1AF6D4u: goto label_1af6d4;
            case 0x1AF6D8u: goto label_1af6d8;
            case 0x1AF6DCu: goto label_1af6dc;
            case 0x1AF6E0u: goto label_1af6e0;
            case 0x1AF6E4u: goto label_1af6e4;
            case 0x1AF6E8u: goto label_1af6e8;
            case 0x1AF6ECu: goto label_1af6ec;
            case 0x1AF6F0u: goto label_1af6f0;
            case 0x1AF6F4u: goto label_1af6f4;
            case 0x1AF6F8u: goto label_1af6f8;
            case 0x1AF6FCu: goto label_1af6fc;
            case 0x1AF700u: goto label_1af700;
            default: break;
        }
        return;
    }
label_fallthrough_0x1af6fc:
    ctx->pc = 0x1AF704u;
}
