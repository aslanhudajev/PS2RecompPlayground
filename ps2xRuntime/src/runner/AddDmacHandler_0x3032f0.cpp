#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddDmacHandler
// Address: 0x3032f0 - 0x303300
void AddDmacHandler_0x3032f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3032f0u;

    // 0x3032f0: 0x24030012
    ctx->pc = 0x3032f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x3032f4: 0xc
    ctx->pc = 0x3032f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3032f8: 0x3e00008
    ctx->pc = 0x3032F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303300u;
}
