#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nop__22CameraMgrInternalClassFi
// Address: 0x1ca0e0 - 0x1ca0e8
void nop__22CameraMgrInternalClassFi_0x1ca0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nop__22CameraMgrInternalClassFi");


    ctx->pc = 0x1ca0e0u;

    // 0x1ca0e0: 0x3e00008
    ctx->pc = 0x1CA0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA0E8u;
}
