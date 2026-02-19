#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TimerSpeed
// Address: 0x2d2f30 - 0x2d2f3c
void TimerSpeed_0x2d2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2f30u;

    // 0x2d2f30: 0x3c02004c
    ctx->pc = 0x2d2f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x2d2f34: 0x3e00008
    ctx->pc = 0x2D2F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F38u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19264));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2F3Cu;
}
