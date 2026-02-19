#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RotateThreadReadyQueue
// Address: 0x303490 - 0x3034a0
void RotateThreadReadyQueue_0x303490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303490u;

    // 0x303490: 0x2403002b
    ctx->pc = 0x303490u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 43));
    // 0x303494: 0xc
    ctx->pc = 0x303494u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303498: 0x3e00008
    ctx->pc = 0x303498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3034A0u;
}
