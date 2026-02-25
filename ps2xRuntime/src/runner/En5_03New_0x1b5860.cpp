#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_03New
// Address: 0x1b5860 - 0x1b5868
void En5_03New_0x1b5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_03New_0x1b5860");
#endif

    ctx->pc = 0x1b5860u;

    // 0x1b5860: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5868u;
}
