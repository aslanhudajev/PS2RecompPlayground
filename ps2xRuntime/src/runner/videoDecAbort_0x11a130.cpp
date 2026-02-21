#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecAbort
// Address: 0x11a130 - 0x11a140
void videoDecAbort_0x11a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a130u;

    // 0x11a130: 0x24030001
    ctx->pc = 0x11a130u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a134: 0x24020001
    ctx->pc = 0x11a134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a138: 0x3e00008
    ctx->pc = 0x11A138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A13Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A140u;
}
