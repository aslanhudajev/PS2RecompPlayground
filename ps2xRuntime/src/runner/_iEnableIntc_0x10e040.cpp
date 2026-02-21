#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iEnableIntc
// Address: 0x10e040 - 0x10e050
void _iEnableIntc_0x10e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e040u;

    // 0x10e040: 0x2403ffe6
    ctx->pc = 0x10e040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x10e044: 0xc
    ctx->pc = 0x10e044u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e048: 0x3e00008
    ctx->pc = 0x10E048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E050u;
}
