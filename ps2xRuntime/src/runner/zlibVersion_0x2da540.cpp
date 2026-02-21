#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: zlibVersion
// Address: 0x2da540 - 0x2da54c
void zlibVersion_0x2da540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2da540u;

    // 0x2da540: 0x3c02003c
    ctx->pc = 0x2da540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2da544: 0x3e00008
    ctx->pc = 0x2DA544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA548u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934976));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DA54Cu;
}
