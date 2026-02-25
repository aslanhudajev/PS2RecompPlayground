#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_01New
// Address: 0x1b3ee0 - 0x1b3ee8
void En5_01New_0x1b3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_01New_0x1b3ee0");
#endif

    ctx->pc = 0x1b3ee0u;

    // 0x1b3ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3EE8u;
}
