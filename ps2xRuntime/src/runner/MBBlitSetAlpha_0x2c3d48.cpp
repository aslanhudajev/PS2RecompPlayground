#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetAlpha
// Address: 0x2c3d48 - 0x2c3d88
void MBBlitSetAlpha_0x2c3d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3d48u;

    // 0x2c3d48: 0x8c820000
    ctx->pc = 0x2c3d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3d4c: 0x3c03ffff
    ctx->pc = 0x2c3d4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c3d50: 0x3463ffef
    ctx->pc = 0x2c3d50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65519));
    // 0x2c3d54: 0x431024
    ctx->pc = 0x2c3d54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3d58: 0xac820000
    ctx->pc = 0x2c3d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c3d5c: 0x52842
    ctx->pc = 0x2c3d5cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2c3d60: 0x24020080
    ctx->pc = 0x2c3d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c3d64: 0x451023
    ctx->pc = 0x2c3d64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c3d68: 0x8c83001c
    ctx->pc = 0x2c3d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c3d6c: 0x3c0500ff
    ctx->pc = 0x2c3d6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)255 << 16));
    // 0x2c3d70: 0x34a5ffff
    ctx->pc = 0x2c3d70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x2c3d74: 0x651824
    ctx->pc = 0x2c3d74u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c3d78: 0x21600
    ctx->pc = 0x2c3d78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x2c3d7c: 0x431025
    ctx->pc = 0x2c3d7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3d80: 0x3e00008
    ctx->pc = 0x2C3D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3D84u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3D88u;
}
