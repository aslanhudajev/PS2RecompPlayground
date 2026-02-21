#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU083_iSetEventFlag
// Address: 0x303710 - 0x303720
void RFU083_iSetEventFlag_0x303710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303710u;

    // 0x303710: 0x2403ffad
    ctx->pc = 0x303710u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x303714: 0xc
    ctx->pc = 0x303714u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303718: 0x3e00008
    ctx->pc = 0x303718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303720u;
}
