#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossNew
// Address: 0x1d5b40 - 0x1d5b48
void Stageex1BossNew_0x1d5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossNew_0x1d5b40");
#endif

    ctx->pc = 0x1d5b40u;

    // 0x1d5b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5B48u;
}
