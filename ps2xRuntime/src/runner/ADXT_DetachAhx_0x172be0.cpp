#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_DetachAhx
// Address: 0x172be0 - 0x172c04
void ADXT_DetachAhx_0x172be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_DetachAhx");


    ctx->pc = 0x172be0u;

label_172be0:
    // 0x172be0: 0x27bdfff0
    ctx->pc = 0x172be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_172be4:
    // 0x172be4: 0x8f828254
    ctx->pc = 0x172be4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935124)));
label_172be8:
    // 0x172be8: 0x10400003
label_172bec:
    if (ctx->pc == 0x172BECu) {
        ctx->pc = 0x172BECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x172BF0u;
        goto label_172bf0;
    }
    ctx->pc = 0x172BE8u;
    {
        const bool branch_taken_0x172be8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172BECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x172be8) {
            ctx->pc = 0x172BF8u;
            goto label_172bf8;
        }
    }
    ctx->pc = 0x172BF0u;
label_172bf0:
    // 0x172bf0: 0x40f809
label_172bf4:
    if (ctx->pc == 0x172BF4u) {
        ctx->pc = 0x172BF8u;
        goto label_172bf8;
    }
    ctx->pc = 0x172BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172BF8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172BE0u: goto label_172be0;
            case 0x172BE4u: goto label_172be4;
            case 0x172BE8u: goto label_172be8;
            case 0x172BECu: goto label_172bec;
            case 0x172BF0u: goto label_172bf0;
            case 0x172BF4u: goto label_172bf4;
            case 0x172BF8u: goto label_172bf8;
            case 0x172BFCu: goto label_172bfc;
            case 0x172C00u: goto label_172c00;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172BF8u; }
            if (ctx->pc != 0x172BF8u) { return; }
        }
    }
    ctx->pc = 0x172BF8u;
label_172bf8:
    // 0x172bf8: 0xdfbf0000
    ctx->pc = 0x172bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172bfc:
    // 0x172bfc: 0x3e00008
label_172c00:
    if (ctx->pc == 0x172C00u) {
        ctx->pc = 0x172C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x172C04u;
        goto label_fallthrough_0x172bfc;
    }
    ctx->pc = 0x172BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172BE0u: goto label_172be0;
            case 0x172BE4u: goto label_172be4;
            case 0x172BE8u: goto label_172be8;
            case 0x172BECu: goto label_172bec;
            case 0x172BF0u: goto label_172bf0;
            case 0x172BF4u: goto label_172bf4;
            case 0x172BF8u: goto label_172bf8;
            case 0x172BFCu: goto label_172bfc;
            case 0x172C00u: goto label_172c00;
            default: break;
        }
        return;
    }
label_fallthrough_0x172bfc:
    ctx->pc = 0x172C04u;
}
