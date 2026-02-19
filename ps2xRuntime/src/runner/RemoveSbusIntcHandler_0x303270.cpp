#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RemoveSbusIntcHandler
// Address: 0x303270 - 0x303280
void RemoveSbusIntcHandler_0x303270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303270u;

    // 0x303270: 0x2403000b
    ctx->pc = 0x303270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x303274: 0xc
    ctx->pc = 0x303274u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303278: 0x3e00008
    ctx->pc = 0x303278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303280u;
}
