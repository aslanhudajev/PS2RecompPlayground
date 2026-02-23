#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU063
// Address: 0x1548d0 - 0x1548e0
void RFU063_0x1548d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU063");


    ctx->pc = 0x1548d0u;

    // 0x1548d0: 0x2403003f
    ctx->pc = 0x1548d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1548d4: 0xc
    ctx->pc = 0x1548d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1548d8: 0x3e00008
    ctx->pc = 0x1548D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1548E0u;
}
