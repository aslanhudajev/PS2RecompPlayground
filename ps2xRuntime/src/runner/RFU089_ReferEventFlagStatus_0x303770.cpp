#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU089_ReferEventFlagStatus
// Address: 0x303770 - 0x303780
void RFU089_ReferEventFlagStatus_0x303770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303770u;

    // 0x303770: 0x24030059
    ctx->pc = 0x303770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 89));
    // 0x303774: 0xc
    ctx->pc = 0x303774u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303778: 0x3e00008
    ctx->pc = 0x303778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303780u;
}
