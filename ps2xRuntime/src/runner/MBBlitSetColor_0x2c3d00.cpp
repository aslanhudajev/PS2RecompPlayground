#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetColor
// Address: 0x2c3d00 - 0x2c3d48
void MBBlitSetColor_0x2c3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3d00u;

    // 0x2c3d00: 0x8c820000
    ctx->pc = 0x2c3d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3d04: 0x3c03ffff
    ctx->pc = 0x2c3d04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c3d08: 0x3463ffef
    ctx->pc = 0x2c3d08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65519));
    // 0x2c3d0c: 0x431024
    ctx->pc = 0x2c3d0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3d10: 0xac820000
    ctx->pc = 0x2c3d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c3d14: 0x52842
    ctx->pc = 0x2c3d14u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2c3d18: 0x3c02007f
    ctx->pc = 0x2c3d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
    // 0x2c3d1c: 0x34427f7f
    ctx->pc = 0x2c3d1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32639));
    // 0x2c3d20: 0xa22824
    ctx->pc = 0x2c3d20u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3d24: 0x3c020001
    ctx->pc = 0x2c3d24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2c3d28: 0x34420101
    ctx->pc = 0x2c3d28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x2c3d2c: 0xa22821
    ctx->pc = 0x2c3d2cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3d30: 0x8c82001c
    ctx->pc = 0x2c3d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c3d34: 0x3c03ff00
    ctx->pc = 0x2c3d34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65280 << 16));
    // 0x2c3d38: 0x431024
    ctx->pc = 0x2c3d38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3d3c: 0xa22825
    ctx->pc = 0x2c3d3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c3d40: 0x3e00008
    ctx->pc = 0x2C3D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3D44u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3D48u;
}
