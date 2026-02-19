#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _RefImageInit
// Address: 0x2eea88 - 0x2eeaa8
void ps2__RefImageInit_0x2eea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2eea88u;

    // 0x2eea88: 0x51103
    ctx->pc = 0x2eea88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2eea8c: 0x61903
    ctx->pc = 0x2eea8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2eea90: 0xac82000c
    ctx->pc = 0x2eea90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2eea94: 0xac830010
    ctx->pc = 0x2eea94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2eea98: 0x24020001
    ctx->pc = 0x2eea98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eea9c: 0xac850004
    ctx->pc = 0x2eea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2eeaa0: 0x3e00008
    ctx->pc = 0x2EEAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEAA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EEAA8u;
}
