#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReserveMem
// Address: 0x2d3f60 - 0x2d3f70
void ReserveMem_0x2d3f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3f60u;

    // 0x2d3f60: 0x3c03003a
    ctx->pc = 0x2d3f60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d3f64: 0x24020001
    ctx->pc = 0x2d3f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3f68: 0x3e00008
    ctx->pc = 0x2D3F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3F6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 9048), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3F70u;
}
