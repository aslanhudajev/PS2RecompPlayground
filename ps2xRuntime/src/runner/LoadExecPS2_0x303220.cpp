#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadExecPS2
// Address: 0x303220 - 0x303230
void LoadExecPS2_0x303220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303220u;

    // 0x303220: 0x24030006
    ctx->pc = 0x303220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x303224: 0xc
    ctx->pc = 0x303224u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303228: 0x3e00008
    ctx->pc = 0x303228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303230u;
}
