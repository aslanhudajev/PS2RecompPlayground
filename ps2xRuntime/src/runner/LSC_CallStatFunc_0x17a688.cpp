#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_CallStatFunc
// Address: 0x17a688 - 0x17a6b0
void LSC_CallStatFunc_0x17a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_CallStatFunc");


    ctx->pc = 0x17a688u;

label_17a688:
    // 0x17a688: 0x27bdfff0
    ctx->pc = 0x17a688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17a68c:
    // 0x17a68c: 0x8f82829c
    ctx->pc = 0x17a68cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935196)));
label_17a690:
    // 0x17a690: 0x10400004
label_17a694:
    if (ctx->pc == 0x17A694u) {
        ctx->pc = 0x17A694u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17A698u;
        goto label_17a698;
    }
    ctx->pc = 0x17A690u;
    {
        const bool branch_taken_0x17a690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A694u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17a690) {
            ctx->pc = 0x17A6A4u;
            goto label_17a6a4;
        }
    }
    ctx->pc = 0x17A698u;
label_17a698:
    // 0x17a698: 0x8f8482a0
    ctx->pc = 0x17a698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935200)));
label_17a69c:
    // 0x17a69c: 0x40f809
label_17a6a0:
    if (ctx->pc == 0x17A6A0u) {
        ctx->pc = 0x17A6A0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
        ctx->pc = 0x17A6A4u;
        goto label_17a6a4;
    }
    ctx->pc = 0x17A69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A6A4u);
        ctx->pc = 0x17A6A0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A688u: goto label_17a688;
            case 0x17A68Cu: goto label_17a68c;
            case 0x17A690u: goto label_17a690;
            case 0x17A694u: goto label_17a694;
            case 0x17A698u: goto label_17a698;
            case 0x17A69Cu: goto label_17a69c;
            case 0x17A6A0u: goto label_17a6a0;
            case 0x17A6A4u: goto label_17a6a4;
            case 0x17A6A8u: goto label_17a6a8;
            case 0x17A6ACu: goto label_17a6ac;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A6A4u; }
            if (ctx->pc != 0x17A6A4u) { return; }
        }
    }
    ctx->pc = 0x17A6A4u;
label_17a6a4:
    // 0x17a6a4: 0xdfbf0000
    ctx->pc = 0x17a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a6a8:
    // 0x17a6a8: 0x3e00008
label_17a6ac:
    if (ctx->pc == 0x17A6ACu) {
        ctx->pc = 0x17A6ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17A6B0u;
        goto label_fallthrough_0x17a6a8;
    }
    ctx->pc = 0x17A6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A688u: goto label_17a688;
            case 0x17A68Cu: goto label_17a68c;
            case 0x17A690u: goto label_17a690;
            case 0x17A694u: goto label_17a694;
            case 0x17A698u: goto label_17a698;
            case 0x17A69Cu: goto label_17a69c;
            case 0x17A6A0u: goto label_17a6a0;
            case 0x17A6A4u: goto label_17a6a4;
            case 0x17A6A8u: goto label_17a6a8;
            case 0x17A6ACu: goto label_17a6ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x17a6a8:
    ctx->pc = 0x17A6B0u;
}
