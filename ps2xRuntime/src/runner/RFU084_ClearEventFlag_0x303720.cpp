#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU084_ClearEventFlag
// Address: 0x303720 - 0x303730
void RFU084_ClearEventFlag_0x303720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303720u;

    // 0x303720: 0x24030054
    ctx->pc = 0x303720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 84));
    // 0x303724: 0xc
    ctx->pc = 0x303724u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303728: 0x3e00008
    ctx->pc = 0x303728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303730u;
}
