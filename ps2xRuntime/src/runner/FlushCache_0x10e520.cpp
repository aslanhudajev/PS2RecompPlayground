#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FlushCache
// Address: 0x10e520 - 0x10e530
void FlushCache_0x10e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e520u;

    // 0x10e520: 0x24030064
    ctx->pc = 0x10e520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x10e524: 0xc
    ctx->pc = 0x10e524u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e528: 0x3e00008
    ctx->pc = 0x10E528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E530u;
}
