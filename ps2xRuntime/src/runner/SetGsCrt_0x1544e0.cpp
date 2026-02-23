#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetGsCrt
// Address: 0x1544e0 - 0x1544f0
void SetGsCrt_0x1544e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetGsCrt");


    ctx->pc = 0x1544e0u;

    // 0x1544e0: 0x24030002
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1544e4: 0xc
    ctx->pc = 0x1544e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1544e8: 0x3e00008
    ctx->pc = 0x1544E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1544F0u;
}
