#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetColorAlpha
// Address: 0x2c3d88 - 0x2c3dd4
void MBBlitSetColorAlpha_0x2c3d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3d88u;

    // 0x2c3d88: 0x8c820000
    ctx->pc = 0x2c3d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3d8c: 0x3c03ffff
    ctx->pc = 0x2c3d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c3d90: 0x3463ffef
    ctx->pc = 0x2c3d90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65519));
    // 0x2c3d94: 0x431024
    ctx->pc = 0x2c3d94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3d98: 0xac820000
    ctx->pc = 0x2c3d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c3d9c: 0x52842
    ctx->pc = 0x2c3d9cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2c3da0: 0x3c02007f
    ctx->pc = 0x2c3da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
    // 0x2c3da4: 0x34427f7f
    ctx->pc = 0x2c3da4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32639));
    // 0x2c3da8: 0xa22824
    ctx->pc = 0x2c3da8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3dac: 0x3c020001
    ctx->pc = 0x2c3dacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2c3db0: 0x34420101
    ctx->pc = 0x2c3db0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x2c3db4: 0xa22821
    ctx->pc = 0x2c3db4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3db8: 0x63042
    ctx->pc = 0x2c3db8u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 1));
    // 0x2c3dbc: 0x24020080
    ctx->pc = 0x2c3dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c3dc0: 0x461023
    ctx->pc = 0x2c3dc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c3dc4: 0x21600
    ctx->pc = 0x2c3dc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x2c3dc8: 0x451025
    ctx->pc = 0x2c3dc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c3dcc: 0x3e00008
    ctx->pc = 0x2C3DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3DD4u;
}
