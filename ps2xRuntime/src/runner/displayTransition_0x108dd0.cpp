#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: displayTransition
// Address: 0x108dd0 - 0x108dd8
void displayTransition_0x108dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("displayTransition_0x108dd0");
#endif

    ctx->pc = 0x108dd0u;

    // 0x108dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x108DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108DD8u;
}
