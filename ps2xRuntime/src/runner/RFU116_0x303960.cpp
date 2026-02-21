#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU116
// Address: 0x303960 - 0x303970
void RFU116_0x303960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303960u;

    // 0x303960: 0x24030074
    ctx->pc = 0x303960u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 116));
    // 0x303964: 0xc
    ctx->pc = 0x303964u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303968: 0x3e00008
    ctx->pc = 0x303968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303970u;
}
