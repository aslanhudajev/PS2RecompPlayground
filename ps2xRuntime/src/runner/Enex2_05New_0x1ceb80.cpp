#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_05New
// Address: 0x1ceb80 - 0x1ceb88
void Enex2_05New_0x1ceb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_05New_0x1ceb80");
#endif

    ctx->pc = 0x1ceb80u;

    // 0x1ceb80: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEB88u;
}
