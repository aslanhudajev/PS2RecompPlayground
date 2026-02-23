#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsCallUsrErrFn
// Address: 0x1741a8 - 0x1741d4
void cvFsCallUsrErrFn_0x1741a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsCallUsrErrFn");


    ctx->pc = 0x1741a8u;

label_1741a8:
    // 0x1741a8: 0x3c020024
    ctx->pc = 0x1741a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_1741ac:
    // 0x1741ac: 0x27bdfff0
    ctx->pc = 0x1741acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1741b0:
    // 0x1741b0: 0x8c438764
    ctx->pc = 0x1741b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294936420)));
label_1741b4:
    // 0x1741b4: 0x10600004
label_1741b8:
    if (ctx->pc == 0x1741B8u) {
        ctx->pc = 0x1741B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1741BCu;
        goto label_1741bc;
    }
    ctx->pc = 0x1741B4u;
    {
        const bool branch_taken_0x1741b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1741B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1741b4) {
            ctx->pc = 0x1741C8u;
            goto label_1741c8;
        }
    }
    ctx->pc = 0x1741BCu;
label_1741bc:
    // 0x1741bc: 0x3c020024
    ctx->pc = 0x1741bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_1741c0:
    // 0x1741c0: 0x60f809
label_1741c4:
    if (ctx->pc == 0x1741C4u) {
        ctx->pc = 0x1741C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294936424)));
        ctx->pc = 0x1741C8u;
        goto label_1741c8;
    }
    ctx->pc = 0x1741C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1741C8u);
        ctx->pc = 0x1741C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294936424)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1741A8u: goto label_1741a8;
            case 0x1741ACu: goto label_1741ac;
            case 0x1741B0u: goto label_1741b0;
            case 0x1741B4u: goto label_1741b4;
            case 0x1741B8u: goto label_1741b8;
            case 0x1741BCu: goto label_1741bc;
            case 0x1741C0u: goto label_1741c0;
            case 0x1741C4u: goto label_1741c4;
            case 0x1741C8u: goto label_1741c8;
            case 0x1741CCu: goto label_1741cc;
            case 0x1741D0u: goto label_1741d0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1741C8u; }
            if (ctx->pc != 0x1741C8u) { return; }
        }
    }
    ctx->pc = 0x1741C8u;
label_1741c8:
    // 0x1741c8: 0xdfbf0000
    ctx->pc = 0x1741c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1741cc:
    // 0x1741cc: 0x3e00008
label_1741d0:
    if (ctx->pc == 0x1741D0u) {
        ctx->pc = 0x1741D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1741D4u;
        goto label_fallthrough_0x1741cc;
    }
    ctx->pc = 0x1741CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1741A8u: goto label_1741a8;
            case 0x1741ACu: goto label_1741ac;
            case 0x1741B0u: goto label_1741b0;
            case 0x1741B4u: goto label_1741b4;
            case 0x1741B8u: goto label_1741b8;
            case 0x1741BCu: goto label_1741bc;
            case 0x1741C0u: goto label_1741c0;
            case 0x1741C4u: goto label_1741c4;
            case 0x1741C8u: goto label_1741c8;
            case 0x1741CCu: goto label_1741cc;
            case 0x1741D0u: goto label_1741d0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1741cc:
    ctx->pc = 0x1741D4u;
}
