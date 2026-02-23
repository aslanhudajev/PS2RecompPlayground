#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU008
// Address: 0x154540 - 0x154550
void RFU008_0x154540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU008");


    ctx->pc = 0x154540u;

    // 0x154540: 0x24030008
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x154544: 0xc
    ctx->pc = 0x154544u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154548: 0x3e00008
    ctx->pc = 0x154548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154550u;
}
