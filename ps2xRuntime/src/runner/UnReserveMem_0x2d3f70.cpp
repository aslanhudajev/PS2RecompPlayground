#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UnReserveMem
// Address: 0x2d3f70 - 0x2d3f7c
void UnReserveMem_0x2d3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3f70u;

    // 0x2d3f70: 0x3c02003a
    ctx->pc = 0x2d3f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3f74: 0x3e00008
    ctx->pc = 0x2D3F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3F78u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 9048), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3F7Cu;
}
