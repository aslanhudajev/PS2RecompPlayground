#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iGsPutIMR
// Address: 0x303930 - 0x303940
void iGsPutIMR_0x303930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303930u;

    // 0x303930: 0x2403ff8f
    ctx->pc = 0x303930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x303934: 0xc
    ctx->pc = 0x303934u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303938: 0x3e00008
    ctx->pc = 0x303938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303940u;
}
