#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: gmtCalcDepthComplexity
// Address: 0x2cf418 - 0x2cf420
void gmtCalcDepthComplexity_0x2cf418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf418u;

    // 0x2cf418: 0x3e00008
    ctx->pc = 0x2CF418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF420u;
}
