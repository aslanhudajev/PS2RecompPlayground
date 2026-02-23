#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iChangeThreadPriority
// Address: 0x154780 - 0x154790
void iChangeThreadPriority_0x154780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iChangeThreadPriority");


    ctx->pc = 0x154780u;

    // 0x154780: 0x2403ffd6
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x154784: 0xc
    ctx->pc = 0x154784u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154788: 0x3e00008
    ctx->pc = 0x154788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154790u;
}
