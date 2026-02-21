#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetPTex
// Address: 0x2c9c58 - 0x2c9c94
void MBPsysSetPTex_0x2c9c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9c58u;

    // 0x2c9c58: 0x3c020036
    ctx->pc = 0x2c9c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c9c5c: 0x8c42dee0
    ctx->pc = 0x2c9c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c9c60: 0x8c840070
    ctx->pc = 0x2c9c60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c9c64: 0xac850088
    ctx->pc = 0x2c9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
    // 0x2c9c68: 0x8c430038
    ctx->pc = 0x2c9c68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2c9c6c: 0x51402
    ctx->pc = 0x2c9c6cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 16));
    // 0x2c9c70: 0x21100
    ctx->pc = 0x2c9c70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9c74: 0x621821
    ctx->pc = 0x2c9c74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9c78: 0x8c620004
    ctx->pc = 0x2c9c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c9c7c: 0x30a5ffff
    ctx->pc = 0x2c9c7cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x2c9c80: 0x52980
    ctx->pc = 0x2c9c80u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2c9c84: 0x8c420058
    ctx->pc = 0x2c9c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c9c88: 0xa22821
    ctx->pc = 0x2c9c88u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c9c8c: 0x3e00008
    ctx->pc = 0x2C9C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9C90u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9C94u;
}
