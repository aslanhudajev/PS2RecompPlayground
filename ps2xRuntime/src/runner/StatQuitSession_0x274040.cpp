#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StatQuitSession
// Address: 0x274040 - 0x27404c
void StatQuitSession_0x274040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274040u;

    // 0x274040: 0x3c02003c
    ctx->pc = 0x274040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x274044: 0x3e00008
    ctx->pc = 0x274044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274048u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 14832), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27404Cu;
}
