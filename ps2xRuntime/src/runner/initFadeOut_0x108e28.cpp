#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initFadeOut
// Address: 0x108e28 - 0x108e34
void initFadeOut_0x108e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108e28u;

    // 0x108e28: 0x2402007f
    ctx->pc = 0x108e28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x108e2c: 0x3e00008
    ctx->pc = 0x108E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E30u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108E34u;
}
