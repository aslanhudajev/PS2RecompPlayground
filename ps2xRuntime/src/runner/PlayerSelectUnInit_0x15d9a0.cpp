#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlayerSelectUnInit
// Address: 0x15d9a0 - 0x15d9a8
void PlayerSelectUnInit_0x15d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlayerSelectUnInit_0x15d9a0");
#endif

    ctx->pc = 0x15d9a0u;

    // 0x15d9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D9A8u;
}
