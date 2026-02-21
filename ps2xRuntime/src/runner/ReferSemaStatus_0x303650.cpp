#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReferSemaStatus
// Address: 0x303650 - 0x303660
void ReferSemaStatus_0x303650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303650u;

    // 0x303650: 0x24030047
    ctx->pc = 0x303650u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x303654: 0xc
    ctx->pc = 0x303654u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303658: 0x3e00008
    ctx->pc = 0x303658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303660u;
}
