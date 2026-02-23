#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispCredInCoin__11CreditClassFv
// Address: 0x1d4a50 - 0x1d4a58
void dispCredInCoin__11CreditClassFv_0x1d4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispCredInCoin__11CreditClassFv");


    ctx->pc = 0x1d4a50u;

    // 0x1d4a50: 0x3e00008
    ctx->pc = 0x1D4A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4A58u;
}
