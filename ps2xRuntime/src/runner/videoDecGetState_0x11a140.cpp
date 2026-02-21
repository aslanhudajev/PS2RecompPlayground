#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecGetState
// Address: 0x11a140 - 0x11a148
void videoDecGetState_0x11a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a140u;

    // 0x11a140: 0x3e00008
    ctx->pc = 0x11A140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A144u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A148u;
}
