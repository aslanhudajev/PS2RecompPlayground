#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGLoadObjects
// Address: 0x2c7788 - 0x2c77b0
void BGLoadObjects_0x2c7788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7788u;

    // 0x2c7788: 0x8c830010
    ctx->pc = 0x2c7788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c778c: 0x24020001
    ctx->pc = 0x2c778cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7790: 0x10620005
    ctx->pc = 0x2C7790u;
    {
        const bool branch_taken_0x2c7790 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2c7790) {
            ctx->pc = 0x2C77A8u;
            goto label_2c77a8;
        }
    }
    ctx->pc = 0x2C7798u;
    // 0x2c7798: 0x8c820004
    ctx->pc = 0x2c7798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c779c: 0x8c830008
    ctx->pc = 0x2c779cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c77a0: 0x431021
    ctx->pc = 0x2c77a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c77a4: 0xac820004
    ctx->pc = 0x2c77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2c77a8:
    // 0x2c77a8: 0x3e00008
    ctx->pc = 0x2C77A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C77A8u: goto label_2c77a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C77B0u;
}
