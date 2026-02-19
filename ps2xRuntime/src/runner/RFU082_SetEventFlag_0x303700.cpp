#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU082_SetEventFlag
// Address: 0x303700 - 0x303710
void RFU082_SetEventFlag_0x303700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303700u;

    // 0x303700: 0x24030052
    ctx->pc = 0x303700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 82));
    // 0x303704: 0xc
    ctx->pc = 0x303704u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303708: 0x3e00008
    ctx->pc = 0x303708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303710u;
}
