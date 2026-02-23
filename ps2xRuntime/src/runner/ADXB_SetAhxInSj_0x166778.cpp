#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_SetAhxInSj
// Address: 0x166778 - 0x1667a0
void ADXB_SetAhxInSj_0x166778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_SetAhxInSj");


    ctx->pc = 0x166778u;

label_166778:
    // 0x166778: 0x27bdfff0
    ctx->pc = 0x166778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_16677c:
    // 0x16677c: 0xffbf0000
    ctx->pc = 0x16677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_166780:
    // 0x166780: 0x8c8400ac
    ctx->pc = 0x166780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_166784:
    // 0x166784: 0x10800003
label_166788:
    if (ctx->pc == 0x166788u) {
        ctx->pc = 0x166788u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934676)));
        ctx->pc = 0x16678Cu;
        goto label_16678c;
    }
    ctx->pc = 0x166784u;
    {
        const bool branch_taken_0x166784 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x166788u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934676)));
        if (branch_taken_0x166784) {
            ctx->pc = 0x166794u;
            goto label_166794;
        }
    }
    ctx->pc = 0x16678Cu;
label_16678c:
    // 0x16678c: 0x40f809
label_166790:
    if (ctx->pc == 0x166790u) {
        ctx->pc = 0x166794u;
        goto label_166794;
    }
    ctx->pc = 0x16678Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166794u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166778u: goto label_166778;
            case 0x16677Cu: goto label_16677c;
            case 0x166780u: goto label_166780;
            case 0x166784u: goto label_166784;
            case 0x166788u: goto label_166788;
            case 0x16678Cu: goto label_16678c;
            case 0x166790u: goto label_166790;
            case 0x166794u: goto label_166794;
            case 0x166798u: goto label_166798;
            case 0x16679Cu: goto label_16679c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166794u; }
            if (ctx->pc != 0x166794u) { return; }
        }
    }
    ctx->pc = 0x166794u;
label_166794:
    // 0x166794: 0xdfbf0000
    ctx->pc = 0x166794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166798:
    // 0x166798: 0x3e00008
label_16679c:
    if (ctx->pc == 0x16679Cu) {
        ctx->pc = 0x16679Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1667A0u;
        goto label_fallthrough_0x166798;
    }
    ctx->pc = 0x166798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16679Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166778u: goto label_166778;
            case 0x16677Cu: goto label_16677c;
            case 0x166780u: goto label_166780;
            case 0x166784u: goto label_166784;
            case 0x166788u: goto label_166788;
            case 0x16678Cu: goto label_16678c;
            case 0x166790u: goto label_166790;
            case 0x166794u: goto label_166794;
            case 0x166798u: goto label_166798;
            case 0x16679Cu: goto label_16679c;
            default: break;
        }
        return;
    }
label_fallthrough_0x166798:
    ctx->pc = 0x1667A0u;
}
