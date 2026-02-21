#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddIntcHandler
// Address: 0x10df80 - 0x10df90
void AddIntcHandler_0x10df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10df80u;

    // 0x10df80: 0x24030010
    ctx->pc = 0x10df80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x10df84: 0xc
    ctx->pc = 0x10df84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df88: 0x3e00008
    ctx->pc = 0x10DF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF90u;
}
