#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage8mapItemCreate
// Address: 0x143b50 - 0x143b58
void stage8mapItemCreate_0x143b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage8mapItemCreate_0x143b50");
#endif

    ctx->pc = 0x143b50u;

    // 0x143b50: 0x3e00008  jr          $ra
    ctx->pc = 0x143B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143B58u;
}
