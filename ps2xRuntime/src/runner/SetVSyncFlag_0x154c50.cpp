#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetVSyncFlag
// Address: 0x154c50 - 0x154c60
void SetVSyncFlag_0x154c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetVSyncFlag");


    ctx->pc = 0x154c50u;

    // 0x154c50: 0x24030073
    ctx->pc = 0x154c50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 115));
    // 0x154c54: 0xc
    ctx->pc = 0x154c54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154c58: 0x3e00008
    ctx->pc = 0x154C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154C60u;
}
