#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8TrueBossNew
// Address: 0x1ed040 - 0x1ed048
void Stage8TrueBossNew_0x1ed040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8TrueBossNew_0x1ed040");
#endif

    ctx->pc = 0x1ed040u;

    // 0x1ed040: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED048u;
}
