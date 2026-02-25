#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage5BossNew
// Address: 0x1bfc40 - 0x1bfc48
void Stage5BossNew_0x1bfc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage5BossNew_0x1bfc40");
#endif

    ctx->pc = 0x1bfc40u;

    // 0x1bfc40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFC48u;
}
