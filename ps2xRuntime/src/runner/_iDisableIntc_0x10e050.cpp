#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iDisableIntc
// Address: 0x10e050 - 0x10e060
void _iDisableIntc_0x10e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e050u;

    // 0x10e050: 0x2403ffe5
    ctx->pc = 0x10e050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x10e054: 0xc
    ctx->pc = 0x10e054u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e058: 0x3e00008
    ctx->pc = 0x10E058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E060u;
}
