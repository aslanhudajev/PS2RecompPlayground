#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_IsrTrans
// Address: 0x17ed68 - 0x17ed80
void DCT_IsrTrans_0x17ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_IsrTrans");


    ctx->pc = 0x17ed68u;

    // 0x17ed68: 0x4a10003
    ctx->pc = 0x17ED68u;
    {
        const bool branch_taken_0x17ed68 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17ed68) {
            ctx->pc = 0x17ED78u;
            goto label_17ed78;
        }
    }
    ctx->pc = 0x17ED70u;
    // 0x17ed70: 0x805fc6c
    ctx->pc = 0x17ED70u;
    ctx->pc = 0x17ED74u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->pc = 0x17F1B0u;
    MSID_JRevDctDense_0x17f1b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17ED78u;
label_17ed78:
    // 0x17ed78: 0x805fbf8
    ctx->pc = 0x17ED78u;
    ctx->pc = 0x17EFE0u;
    MSID_JRevDctSparse_0x17efe0(rdram, ctx, runtime); return;
    ctx->pc = 0x17ED80u;
}
