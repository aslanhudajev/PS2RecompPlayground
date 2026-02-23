#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetThreadId
// Address: 0x1547d0 - 0x1547e0
void GetThreadId_0x1547d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetThreadId");


    ctx->pc = 0x1547d0u;

    // 0x1547d0: 0x2403002f
    ctx->pc = 0x1547d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1547d4: 0xc
    ctx->pc = 0x1547d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1547d8: 0x3e00008
    ctx->pc = 0x1547D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1547E0u;
}
