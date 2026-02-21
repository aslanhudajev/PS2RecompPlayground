#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CheckFingerLoModes
// Address: 0x2a2a80 - 0x2a2a88
void CheckFingerLoModes_0x2a2a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2a80u;

    // 0x2a2a80: 0x3e00008
    ctx->pc = 0x2A2A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2A88u;
}
