#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetOsdConfigParam
// Address: 0x303680 - 0x303690
void SetOsdConfigParam_0x303680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303680u;

    // 0x303680: 0x2403004a
    ctx->pc = 0x303680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 74));
    // 0x303684: 0xc
    ctx->pc = 0x303684u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303688: 0x3e00008
    ctx->pc = 0x303688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303690u;
}
