#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ticks_for_firescroll
// Address: 0x228ca8 - 0x228cb0
void ticks_for_firescroll_0x228ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x228ca8u;

    // 0x228ca8: 0x3e00008
    ctx->pc = 0x228CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228CB0u;
}
