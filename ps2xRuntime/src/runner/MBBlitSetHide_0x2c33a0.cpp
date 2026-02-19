#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetHide
// Address: 0x2c33a0 - 0x2c33c8
void MBBlitSetHide_0x2c33a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c33a0u;

    // 0x2c33a0: 0x10a00004
    ctx->pc = 0x2C33A0u;
    {
        const bool branch_taken_0x2c33a0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C33A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2c33a0) {
            ctx->pc = 0x2C33B4u;
            goto label_2c33b4;
        }
    }
    ctx->pc = 0x2C33A8u;
    // 0x2c33a8: 0x34420001
    ctx->pc = 0x2c33a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2c33ac: 0x3e00008
    ctx->pc = 0x2C33ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C33B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C33B4u: goto label_2c33b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C33B4u;
label_2c33b4:
    // 0x2c33b4: 0x3c03ffff
    ctx->pc = 0x2c33b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c33b8: 0x3463fffe
    ctx->pc = 0x2c33b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65534));
    // 0x2c33bc: 0x431024
    ctx->pc = 0x2c33bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c33c0: 0x3e00008
    ctx->pc = 0x2C33C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C33C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C33B4u: goto label_2c33b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C33C8u;
}
