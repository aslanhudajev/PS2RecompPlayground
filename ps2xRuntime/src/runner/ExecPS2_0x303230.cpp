#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExecPS2
// Address: 0x303230 - 0x303240
void ExecPS2_0x303230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303230u;

    // 0x303230: 0x24030007
    ctx->pc = 0x303230u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x303234: 0xc
    ctx->pc = 0x303234u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303238: 0x3e00008
    ctx->pc = 0x303238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303240u;
}
