#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetOsdConfigParam
// Address: 0x303690 - 0x3036a0
void GetOsdConfigParam_0x303690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303690u;

    // 0x303690: 0x2403004b
    ctx->pc = 0x303690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 75));
    // 0x303694: 0xc
    ctx->pc = 0x303694u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303698: 0x3e00008
    ctx->pc = 0x303698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3036A0u;
}
