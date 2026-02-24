#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU088_iPollEvnetFlag
// Address: 0x10e420 - 0x10e430
void RFU088_iPollEvnetFlag_0x10e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e420u;

    // 0x10e420: 0x2403ffa8
    ctx->pc = 0x10e420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x10e424: 0xc
    ctx->pc = 0x10e424u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e428: 0x3e00008
    ctx->pc = 0x10E428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E430u;
}
