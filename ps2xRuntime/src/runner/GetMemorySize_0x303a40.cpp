#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMemorySize
// Address: 0x303a40 - 0x303a50
void GetMemorySize_0x303a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303a40u;

    // 0x303a40: 0x2403007f
    ctx->pc = 0x303a40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x303a44: 0xc
    ctx->pc = 0x303a44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303a48: 0x3e00008
    ctx->pc = 0x303A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303A50u;
}
