#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001B0AA0
// Address: 0x1b0aa0 - 0x1b0ab0
void sub_001B0AA0_0x1b0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001B0AA0");


    ctx->pc = 0x1b0aa0u;

    // 0x1b0aa0: 0x460c0004
    ctx->pc = 0x1b0aa0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b0aa4: 0x3e00008
    ctx->pc = 0x1B0AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0AACu;
    // 0x1b0aac: 0x0
    ctx->pc = 0x1b0aacu;
    // NOP
}
