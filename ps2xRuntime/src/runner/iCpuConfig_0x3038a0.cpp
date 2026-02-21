#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iCpuConfig
// Address: 0x3038a0 - 0x3038b0
void iCpuConfig_0x3038a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3038a0u;

    // 0x3038a0: 0x2403ff96
    ctx->pc = 0x3038a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x3038a4: 0xc
    ctx->pc = 0x3038a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3038a8: 0x3e00008
    ctx->pc = 0x3038A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3038B0u;
}
