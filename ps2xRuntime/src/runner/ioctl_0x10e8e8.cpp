#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ioctl
// Address: 0x10e8e8 - 0x10e8f0
void ioctl_0x10e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e8e8u;

    // 0x10e8e8: 0x3e00008
    ctx->pc = 0x10E8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E8F0u;
}
