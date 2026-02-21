#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU085_iClearEventFlag
// Address: 0x303730 - 0x303740
void RFU085_iClearEventFlag_0x303730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303730u;

    // 0x303730: 0x2403ffab
    ctx->pc = 0x303730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x303734: 0xc
    ctx->pc = 0x303734u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303738: 0x3e00008
    ctx->pc = 0x303738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303740u;
}
