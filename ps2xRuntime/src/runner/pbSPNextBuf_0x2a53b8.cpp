#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSPNextBuf
// Address: 0x2a53b8 - 0x2a53e0
void pbSPNextBuf_0x2a53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a53b8u;

    // 0x2a53b8: 0x3c040036
    ctx->pc = 0x2a53b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x2a53bc: 0x24847fd8
    ctx->pc = 0x2a53bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32728));
    // 0x2a53c0: 0x3c050036
    ctx->pc = 0x2a53c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
    // 0x2a53c4: 0x8ca37fd0
    ctx->pc = 0x2a53c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 32720)));
    // 0x2a53c8: 0x31080
    ctx->pc = 0x2a53c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a53cc: 0x441021
    ctx->pc = 0x2a53ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a53d0: 0x8c420000
    ctx->pc = 0x2a53d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a53d4: 0x38630001
    ctx->pc = 0x2a53d4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x2a53d8: 0x3e00008
    ctx->pc = 0x2A53D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A53DCu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 32720), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A53E0u;
}
