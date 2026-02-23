#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch__11CreditClassFv
// Address: 0x1d4a10 - 0x1d4a18
void synch__11CreditClassFv_0x1d4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch__11CreditClassFv");


    ctx->pc = 0x1d4a10u;

    // 0x1d4a10: 0x3e00008
    ctx->pc = 0x1D4A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4A18u;
}
