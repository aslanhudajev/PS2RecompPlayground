#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ErrFunc_SOFDEC__FPvPc
// Address: 0x1eed20 - 0x1eed28
void ErrFunc_SOFDEC__FPvPc_0x1eed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ErrFunc_SOFDEC__FPvPc");


    ctx->pc = 0x1eed20u;

    // 0x1eed20: 0x3e00008
    ctx->pc = 0x1EED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EED28u;
}
