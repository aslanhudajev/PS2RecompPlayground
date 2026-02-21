#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeSetEmpty
// Address: 0x2cfb88 - 0x2cfba8
void MBNodeSetEmpty_0x2cfb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cfb88u;

    // 0x2cfb88: 0xa0800052
    ctx->pc = 0x2cfb88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb8c: 0xac800078
    ctx->pc = 0x2cfb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x2cfb90: 0xac800074
    ctx->pc = 0x2cfb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x2cfb94: 0x3c03003a
    ctx->pc = 0x2cfb94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cfb98: 0x8c6214b0
    ctx->pc = 0x2cfb98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 5296)));
    // 0x2cfb9c: 0xac82007c
    ctx->pc = 0x2cfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x2cfba0: 0x3e00008
    ctx->pc = 0x2CFBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFBA4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 5296), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFBA8u;
}
