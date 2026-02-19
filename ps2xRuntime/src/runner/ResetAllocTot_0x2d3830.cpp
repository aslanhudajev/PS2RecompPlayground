#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetAllocTot
// Address: 0x2d3830 - 0x2d3844
void ResetAllocTot_0x2d3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3830u;

    // 0x2d3830: 0x3c02003d
    ctx->pc = 0x2d3830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d3834: 0xac402cf0
    ctx->pc = 0x2d3834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11504), GPR_U32(ctx, 0));
    // 0x2d3838: 0x3c02003d
    ctx->pc = 0x2d3838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d383c: 0x3e00008
    ctx->pc = 0x2D383Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3840u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 11508), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3844u;
}
