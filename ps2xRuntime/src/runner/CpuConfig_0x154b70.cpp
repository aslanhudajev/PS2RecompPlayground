#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CpuConfig
// Address: 0x154b70 - 0x154b80
void CpuConfig_0x154b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CpuConfig");


    ctx->pc = 0x154b70u;

    // 0x154b70: 0x24030066
    ctx->pc = 0x154b70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 102));
    // 0x154b74: 0xc
    ctx->pc = 0x154b74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b78: 0x3e00008
    ctx->pc = 0x154B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B80u;
}
