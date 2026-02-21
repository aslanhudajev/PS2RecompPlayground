#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetGsHParam
// Address: 0x10e360 - 0x10e370
void GetGsHParam_0x10e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e360u;

    // 0x10e360: 0x2403004c
    ctx->pc = 0x10e360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 76));
    // 0x10e364: 0xc
    ctx->pc = 0x10e364u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e368: 0x3e00008
    ctx->pc = 0x10E368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E370u;
}
