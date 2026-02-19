#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddSbusIntcHandler
// Address: 0x303260 - 0x303270
void AddSbusIntcHandler_0x303260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303260u;

    // 0x303260: 0x2403000a
    ctx->pc = 0x303260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x303264: 0xc
    ctx->pc = 0x303264u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303268: 0x3e00008
    ctx->pc = 0x303268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303270u;
}
