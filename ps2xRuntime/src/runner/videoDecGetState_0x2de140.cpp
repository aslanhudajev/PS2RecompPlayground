#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecGetState
// Address: 0x2de140 - 0x2de148
void videoDecGetState_0x2de140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de140u;

    // 0x2de140: 0x3e00008
    ctx->pc = 0x2DE140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE144u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE148u;
}
