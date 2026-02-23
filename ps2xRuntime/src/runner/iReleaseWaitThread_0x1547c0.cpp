#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iReleaseWaitThread
// Address: 0x1547c0 - 0x1547d0
void iReleaseWaitThread_0x1547c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iReleaseWaitThread");


    ctx->pc = 0x1547c0u;

    // 0x1547c0: 0x2403ffd2
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x1547c4: 0xc
    ctx->pc = 0x1547c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1547c8: 0x3e00008
    ctx->pc = 0x1547C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1547D0u;
}
