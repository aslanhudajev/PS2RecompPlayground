#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FreeHiMem
// Address: 0x2d3c48 - 0x2d3c68
void FreeHiMem_0x2d3c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3c48u;

    // 0x2d3c48: 0x3c04003a
    ctx->pc = 0x2d3c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d3c4c: 0x3c05003a
    ctx->pc = 0x2d3c4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2d3c50: 0x8c822310
    ctx->pc = 0x2d3c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8976)));
    // 0x2d3c54: 0x8ca321e8
    ctx->pc = 0x2d3c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8680)));
    // 0x2d3c58: 0x431021
    ctx->pc = 0x2d3c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3c5c: 0xac822310
    ctx->pc = 0x2d3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8976), GPR_U32(ctx, 2));
    // 0x2d3c60: 0x3e00008
    ctx->pc = 0x2D3C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C64u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8680), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3C68u;
}
