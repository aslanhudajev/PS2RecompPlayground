#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_CallErr1
// Address: 0x17dcb0 - 0x17dcfc
void SVM_CallErr1_0x17dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_CallErr1");


    ctx->pc = 0x17dcb0u;

label_17dcb0:
    // 0x17dcb0: 0x27bdffe0
    ctx->pc = 0x17dcb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_17dcb4:
    // 0x17dcb4: 0x3c020024
    ctx->pc = 0x17dcb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17dcb8:
    // 0x17dcb8: 0xffb00000
    ctx->pc = 0x17dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17dcbc:
    // 0x17dcbc: 0x80282d
    ctx->pc = 0x17dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17dcc0:
    // 0x17dcc0: 0x245013b8
    ctx->pc = 0x17dcc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 5048));
label_17dcc4:
    // 0x17dcc4: 0xffbf0010
    ctx->pc = 0x17dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17dcc8:
    // 0x17dcc8: 0x200202d
    ctx->pc = 0x17dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17dccc:
    // 0x17dccc: 0xc05167c
label_17dcd0:
    if (ctx->pc == 0x17DCD0u) {
        ctx->pc = 0x17DCD0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x17DCD4u;
        goto label_17dcd4;
    }
    ctx->pc = 0x17DCCCu;
    SET_GPR_U32(ctx, 31, 0x17DCD4u);
    ctx->pc = 0x17DCD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DCD4u; }
        else if (ctx->pc != 0x17DCD4u) { ctx->pc = 0x17DCD4u; }
    }
    if (ctx->pc != 0x17DCD4u) { return; }
    ctx->pc = 0x17DCD4u;
label_17dcd4:
    // 0x17dcd4: 0x8f828920
    ctx->pc = 0x17dcd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_17dcd8:
    // 0x17dcd8: 0x10400005
label_17dcdc:
    if (ctx->pc == 0x17DCDCu) {
        ctx->pc = 0x17DCDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x17DCE0u;
        goto label_17dce0;
    }
    ctx->pc = 0x17DCD8u;
    {
        const bool branch_taken_0x17dcd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DCDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x17dcd8) {
            ctx->pc = 0x17DCF0u;
            goto label_17dcf0;
        }
    }
    ctx->pc = 0x17DCE0u;
label_17dce0:
    // 0x17dce0: 0x8f848924
    ctx->pc = 0x17dce0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_17dce4:
    // 0x17dce4: 0x40f809
label_17dce8:
    if (ctx->pc == 0x17DCE8u) {
        ctx->pc = 0x17DCE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17DCECu;
        goto label_17dcec;
    }
    ctx->pc = 0x17DCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DCECu);
        ctx->pc = 0x17DCE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DCB0u: goto label_17dcb0;
            case 0x17DCB4u: goto label_17dcb4;
            case 0x17DCB8u: goto label_17dcb8;
            case 0x17DCBCu: goto label_17dcbc;
            case 0x17DCC0u: goto label_17dcc0;
            case 0x17DCC4u: goto label_17dcc4;
            case 0x17DCC8u: goto label_17dcc8;
            case 0x17DCCCu: goto label_17dccc;
            case 0x17DCD0u: goto label_17dcd0;
            case 0x17DCD4u: goto label_17dcd4;
            case 0x17DCD8u: goto label_17dcd8;
            case 0x17DCDCu: goto label_17dcdc;
            case 0x17DCE0u: goto label_17dce0;
            case 0x17DCE4u: goto label_17dce4;
            case 0x17DCE8u: goto label_17dce8;
            case 0x17DCECu: goto label_17dcec;
            case 0x17DCF0u: goto label_17dcf0;
            case 0x17DCF4u: goto label_17dcf4;
            case 0x17DCF8u: goto label_17dcf8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17DCECu; }
            if (ctx->pc != 0x17DCECu) { return; }
        }
    }
    ctx->pc = 0x17DCECu;
label_17dcec:
    // 0x17dcec: 0xdfbf0010
    ctx->pc = 0x17dcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17dcf0:
    // 0x17dcf0: 0xdfb00000
    ctx->pc = 0x17dcf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17dcf4:
    // 0x17dcf4: 0x3e00008
label_17dcf8:
    if (ctx->pc == 0x17DCF8u) {
        ctx->pc = 0x17DCF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17DCFCu;
        goto label_fallthrough_0x17dcf4;
    }
    ctx->pc = 0x17DCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DCB0u: goto label_17dcb0;
            case 0x17DCB4u: goto label_17dcb4;
            case 0x17DCB8u: goto label_17dcb8;
            case 0x17DCBCu: goto label_17dcbc;
            case 0x17DCC0u: goto label_17dcc0;
            case 0x17DCC4u: goto label_17dcc4;
            case 0x17DCC8u: goto label_17dcc8;
            case 0x17DCCCu: goto label_17dccc;
            case 0x17DCD0u: goto label_17dcd0;
            case 0x17DCD4u: goto label_17dcd4;
            case 0x17DCD8u: goto label_17dcd8;
            case 0x17DCDCu: goto label_17dcdc;
            case 0x17DCE0u: goto label_17dce0;
            case 0x17DCE4u: goto label_17dce4;
            case 0x17DCE8u: goto label_17dce8;
            case 0x17DCECu: goto label_17dcec;
            case 0x17DCF0u: goto label_17dcf0;
            case 0x17DCF4u: goto label_17dcf4;
            case 0x17DCF8u: goto label_17dcf8;
            default: break;
        }
        return;
    }
label_fallthrough_0x17dcf4:
    ctx->pc = 0x17DCFCu;
}
