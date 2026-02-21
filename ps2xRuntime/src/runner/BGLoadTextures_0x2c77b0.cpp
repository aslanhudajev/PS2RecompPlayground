#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGLoadTextures
// Address: 0x2c77b0 - 0x2c77d8
void BGLoadTextures_0x2c77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c77b0u;

    // 0x2c77b0: 0x8c830010
    ctx->pc = 0x2c77b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c77b4: 0x24020001
    ctx->pc = 0x2c77b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c77b8: 0x10620005
    ctx->pc = 0x2C77B8u;
    {
        const bool branch_taken_0x2c77b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2c77b8) {
            ctx->pc = 0x2C77D0u;
            goto label_2c77d0;
        }
    }
    ctx->pc = 0x2C77C0u;
    // 0x2c77c0: 0x8c820004
    ctx->pc = 0x2c77c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c77c4: 0x8c830008
    ctx->pc = 0x2c77c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c77c8: 0x431021
    ctx->pc = 0x2c77c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c77cc: 0xac820004
    ctx->pc = 0x2c77ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2c77d0:
    // 0x2c77d0: 0x3e00008
    ctx->pc = 0x2C77D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C77D0u: goto label_2c77d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C77D8u;
}
