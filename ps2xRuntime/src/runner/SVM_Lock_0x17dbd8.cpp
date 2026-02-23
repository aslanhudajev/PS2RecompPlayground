#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_Lock
// Address: 0x17dbd8 - 0x17dc00
void SVM_Lock_0x17dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_Lock");
    ctx->pc = 0x17dbd8u;

label_17dbd8:
    // 0x17dbd8: 0x27bdfff0
    ctx->pc = 0x17dbd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17dbdc:
    // 0x17dbdc: 0x8f828910
    ctx->pc = 0x17dbdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_17dbe0:
    // 0x17dbe0: 0x10400004
label_17dbe4:
    if (ctx->pc == 0x17DBE4u) {
        ctx->pc = 0x17DBE4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17DBE8u;
        goto label_17dbe8;
    }
    ctx->pc = 0x17DBE0u;
    {
        const bool branch_taken_0x17dbe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DBE4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17dbe0) {
            ctx->pc = 0x17DBF4u;
            goto label_17dbf4;
        }
    }
    ctx->pc = 0x17DBE8u;
label_17dbe8:
    // 0x17dbe8: 0x8f848914
    ctx->pc = 0x17dbe8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_17dbec:
    // 0x17dbec: 0x40f809
label_17dbf0:
    if (ctx->pc == 0x17DBF0u) {
        ctx->pc = 0x17DBF4u;
        goto label_17dbf4;
    }
    ctx->pc = 0x17DBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DBF4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DBD8u: goto label_17dbd8;
            case 0x17DBDCu: goto label_17dbdc;
            case 0x17DBE0u: goto label_17dbe0;
            case 0x17DBE4u: goto label_17dbe4;
            case 0x17DBE8u: goto label_17dbe8;
            case 0x17DBECu: goto label_17dbec;
            case 0x17DBF0u: goto label_17dbf0;
            case 0x17DBF4u: goto label_17dbf4;
            case 0x17DBF8u: goto label_17dbf8;
            case 0x17DBFCu: goto label_17dbfc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17DBF4u; }
            if (ctx->pc != 0x17DBF4u) { return; }
        }
    }
    ctx->pc = 0x17DBF4u;
label_17dbf4:
    // 0x17dbf4: 0xdfbf0000
    ctx->pc = 0x17dbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17dbf8:
    // 0x17dbf8: 0x3e00008
label_17dbfc:
    if (ctx->pc == 0x17DBFCu) {
        ctx->pc = 0x17DBFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17DC00u;
        goto label_fallthrough_0x17dbf8;
    }
    ctx->pc = 0x17DBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DBFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DBD8u: goto label_17dbd8;
            case 0x17DBDCu: goto label_17dbdc;
            case 0x17DBE0u: goto label_17dbe0;
            case 0x17DBE4u: goto label_17dbe4;
            case 0x17DBE8u: goto label_17dbe8;
            case 0x17DBECu: goto label_17dbec;
            case 0x17DBF0u: goto label_17dbf0;
            case 0x17DBF4u: goto label_17dbf4;
            case 0x17DBF8u: goto label_17dbf8;
            case 0x17DBFCu: goto label_17dbfc;
            default: break;
        }
        return;
    }
label_fallthrough_0x17dbf8:
    ctx->pc = 0x17DC00u;
}
