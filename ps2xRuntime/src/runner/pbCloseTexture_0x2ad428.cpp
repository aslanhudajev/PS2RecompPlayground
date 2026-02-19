#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseTexture
// Address: 0x2ad428 - 0x2ad438
void pbCloseTexture_0x2ad428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad428u;

    // 0x2ad428: 0x3c020036
    ctx->pc = 0x2ad428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad42c: 0x8c42dee0
    ctx->pc = 0x2ad42cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad430: 0x3e00008
    ctx->pc = 0x2AD430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD434u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD438u;
}
