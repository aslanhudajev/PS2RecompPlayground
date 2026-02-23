#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU073
// Address: 0x154970 - 0x154980
void RFU073_0x154970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU073");


    ctx->pc = 0x154970u;

    // 0x154970: 0x24030049
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 73));
    // 0x154974: 0xc
    ctx->pc = 0x154974u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154978: 0x3e00008
    ctx->pc = 0x154978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154980u;
}
