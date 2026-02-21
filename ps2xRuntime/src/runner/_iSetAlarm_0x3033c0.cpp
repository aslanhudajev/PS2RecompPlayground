#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iSetAlarm
// Address: 0x3033c0 - 0x3033d0
void _iSetAlarm_0x3033c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3033c0u;

    // 0x3033c0: 0x2403ffe2
    ctx->pc = 0x3033c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x3033c4: 0xc
    ctx->pc = 0x3033c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3033c8: 0x3e00008
    ctx->pc = 0x3033C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3033D0u;
}
