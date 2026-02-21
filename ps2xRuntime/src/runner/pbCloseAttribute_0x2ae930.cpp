#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseAttribute
// Address: 0x2ae930 - 0x2ae940
void pbCloseAttribute_0x2ae930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae930u;

    // 0x2ae930: 0x3c020036
    ctx->pc = 0x2ae930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ae934: 0x8c42dee0
    ctx->pc = 0x2ae934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ae938: 0x3e00008
    ctx->pc = 0x2AE938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE93Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE940u;
}
