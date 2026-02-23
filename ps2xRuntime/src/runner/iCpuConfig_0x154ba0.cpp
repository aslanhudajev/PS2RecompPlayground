#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iCpuConfig
// Address: 0x154ba0 - 0x154bb0
void iCpuConfig_0x154ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iCpuConfig");


    ctx->pc = 0x154ba0u;

    // 0x154ba0: 0x2403ff96
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x154ba4: 0xc
    ctx->pc = 0x154ba4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154ba8: 0x3e00008
    ctx->pc = 0x154BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154BB0u;
}
