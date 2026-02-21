#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitFrame
// Address: 0x2a8c20 - 0x2a8c38
void pbInitFrame_0x2a8c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8c20u;

    // 0x2a8c20: 0x3c020036
    ctx->pc = 0x2a8c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8c24: 0x8c43dee0
    ctx->pc = 0x2a8c24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8c28: 0x3c020037
    ctx->pc = 0x2a8c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8c2c: 0x24428360
    ctx->pc = 0x2a8c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935392));
    // 0x2a8c30: 0x80aa31c
    ctx->pc = 0x2A8C30u;
    ctx->pc = 0x2A8C34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x2A8C70u;
    MBInitFrameMode_0x2a8c70(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8C38u;
}
