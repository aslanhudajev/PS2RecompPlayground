#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetPgifHandler
// Address: 0x303940 - 0x303950
void SetPgifHandler_0x303940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303940u;

    // 0x303940: 0x24030072
    ctx->pc = 0x303940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 114));
    // 0x303944: 0xc
    ctx->pc = 0x303944u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303948: 0x3e00008
    ctx->pc = 0x303948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303950u;
}
