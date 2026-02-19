#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BytesFree
// Address: 0x2d3e80 - 0x2d3e98
void BytesFree_0x2d3e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3e80u;

    // 0x2d3e80: 0x3c02003a
    ctx->pc = 0x2d3e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3e84: 0x3c03003a
    ctx->pc = 0x2d3e84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d3e88: 0x8c442310
    ctx->pc = 0x2d3e88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8976)));
    // 0x2d3e8c: 0x8c62230c
    ctx->pc = 0x2d3e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8972)));
    // 0x2d3e90: 0x3e00008
    ctx->pc = 0x2D3E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3E94u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3E98u;
}
