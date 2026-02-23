#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ReferSemaStatus
// Address: 0x154950 - 0x154960
void ReferSemaStatus_0x154950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ReferSemaStatus");


    ctx->pc = 0x154950u;

    // 0x154950: 0x24030047
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x154954: 0xc
    ctx->pc = 0x154954u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154958: 0x3e00008
    ctx->pc = 0x154958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154960u;
}
