#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrintSetOpaqueMode
// Address: 0x1abaa0 - 0x1ababc
void nlPrintSetOpaqueMode_0x1abaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrintSetOpaqueMode");


    ctx->pc = 0x1abaa0u;

    // 0x1abaa0: 0x10800003
    ctx->pc = 0x1ABAA0u;
    {
        const bool branch_taken_0x1abaa0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABAA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1abaa0) {
            ctx->pc = 0x1ABAB0u;
            goto label_1abab0;
        }
    }
    ctx->pc = 0x1ABAA8u;
    // 0x1abaa8: 0x10000002
    ctx->pc = 0x1ABAA8u;
    {
        const bool branch_taken_0x1abaa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABAACu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937196), GPR_U32(ctx, 0));
        if (branch_taken_0x1abaa8) {
            ctx->pc = 0x1ABAB4u;
            goto label_1abab4;
        }
    }
    ctx->pc = 0x1ABAB0u;
label_1abab0:
    // 0x1abab0: 0xaf838a6c
    ctx->pc = 0x1abab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937196), GPR_U32(ctx, 3));
label_1abab4:
    // 0x1abab4: 0x3e00008
    ctx->pc = 0x1ABAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAB4u: goto label_1abab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABABCu;
}
