#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ExecOSD
// Address: 0x154d00 - 0x154d10
void ExecOSD_0x154d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ExecOSD");


    ctx->pc = 0x154d00u;

    // 0x154d00: 0x2403007b
    ctx->pc = 0x154d00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 123));
    // 0x154d04: 0xc
    ctx->pc = 0x154d04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154d08: 0x3e00008
    ctx->pc = 0x154D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154D10u;
}
