#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8BossNew
// Address: 0x1e0800 - 0x1e0808
void Stage8BossNew_0x1e0800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8BossNew_0x1e0800");
#endif

    ctx->pc = 0x1e0800u;

    // 0x1e0800: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0808u;
}
