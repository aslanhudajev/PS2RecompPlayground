#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU008
// Address: 0x303240 - 0x303250
void RFU008_0x303240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303240u;

    // 0x303240: 0x24030008
    ctx->pc = 0x303240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x303244: 0xc
    ctx->pc = 0x303244u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303248: 0x3e00008
    ctx->pc = 0x303248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303250u;
}
