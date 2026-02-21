#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExecOSD
// Address: 0x303a00 - 0x303a10
void ExecOSD_0x303a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303a00u;

    // 0x303a00: 0x2403007b
    ctx->pc = 0x303a00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 123));
    // 0x303a04: 0xc
    ctx->pc = 0x303a04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303a08: 0x3e00008
    ctx->pc = 0x303A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303A10u;
}
