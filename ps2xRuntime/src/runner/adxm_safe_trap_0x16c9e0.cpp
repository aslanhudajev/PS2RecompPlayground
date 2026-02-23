#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_safe_trap
// Address: 0x16c9e0 - 0x16c9e8
void adxm_safe_trap_0x16c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_safe_trap");


    ctx->pc = 0x16c9e0u;

    // 0x16c9e0: 0x3e00008
    ctx->pc = 0x16C9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C9E8u;
}
