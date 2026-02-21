#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1DebugMidSetup
// Address: 0x2bce20 - 0x2bce28
void pbVu1DebugMidSetup_0x2bce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bce20u;

    // 0x2bce20: 0x3e00008
    ctx->pc = 0x2BCE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCE28u;
}
