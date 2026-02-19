#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFontColor
// Address: 0x2c5130 - 0x2c5174
void MBSetFontColor_0x2c5130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5130u;

    // 0x2c5130: 0x3c060038
    ctx->pc = 0x2c5130u;
    SET_GPR_U32(ctx, 6, ((uint32_t)56 << 16));
    // 0x2c5134: 0x8cc2b16c
    ctx->pc = 0x2c5134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294947180)));
    // 0x2c5138: 0x3c0700ff
    ctx->pc = 0x2c5138u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2c513c: 0x34e7ffff
    ctx->pc = 0x2c513cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2c5140: 0x3c05ff00
    ctx->pc = 0x2c5140u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x2c5144: 0x452824
    ctx->pc = 0x2c5144u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c5148: 0x42042
    ctx->pc = 0x2c5148u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x2c514c: 0x3c03007f
    ctx->pc = 0x2c514cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)127 << 16));
    // 0x2c5150: 0x34637f7f
    ctx->pc = 0x2c5150u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32639));
    // 0x2c5154: 0x832024
    ctx->pc = 0x2c5154u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c5158: 0x3c030001
    ctx->pc = 0x2c5158u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2c515c: 0x34630101
    ctx->pc = 0x2c515cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 257));
    // 0x2c5160: 0x832021
    ctx->pc = 0x2c5160u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c5164: 0x852025
    ctx->pc = 0x2c5164u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c5168: 0xacc4b16c
    ctx->pc = 0x2c5168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294947180), GPR_U32(ctx, 4));
    // 0x2c516c: 0x3e00008
    ctx->pc = 0x2C516Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5170u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5174u;
}
