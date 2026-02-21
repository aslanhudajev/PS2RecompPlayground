#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU086_WaitEvnetFlag
// Address: 0x303740 - 0x303750
void RFU086_WaitEvnetFlag_0x303740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303740u;

    // 0x303740: 0x24030056
    ctx->pc = 0x303740u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 86));
    // 0x303744: 0xc
    ctx->pc = 0x303744u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303748: 0x3e00008
    ctx->pc = 0x303748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303750u;
}
