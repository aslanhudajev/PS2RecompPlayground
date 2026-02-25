#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossNew
// Address: 0x1b7ce0 - 0x1b7ce8
void Stage7BossNew_0x1b7ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossNew_0x1b7ce0");
#endif

    ctx->pc = 0x1b7ce0u;

    // 0x1b7ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7CE8u;
}
