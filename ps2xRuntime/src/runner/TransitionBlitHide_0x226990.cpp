#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TransitionBlitHide
// Address: 0x226990 - 0x2269b0
void TransitionBlitHide_0x226990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226990u;

    // 0x226990: 0x3c020032
    ctx->pc = 0x226990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226994: 0x8c440890
    ctx->pc = 0x226994u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2192)));
    // 0x226998: 0x10800003
    ctx->pc = 0x226998u;
    {
        const bool branch_taken_0x226998 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x226998) {
            ctx->pc = 0x2269A8u;
            goto label_2269a8;
        }
    }
    ctx->pc = 0x2269A0u;
    // 0x2269a0: 0x80b0ce8
    ctx->pc = 0x2269A0u;
    ctx->pc = 0x2269A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    MBBlitSetHide_0x2c33a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2269A8u;
label_2269a8:
    // 0x2269a8: 0x3e00008
    ctx->pc = 0x2269A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2269A8u: goto label_2269a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2269B0u;
}
