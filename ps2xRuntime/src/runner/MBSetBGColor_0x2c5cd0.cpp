#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetBGColor
// Address: 0x2c5cd0 - 0x2c5d00
void MBSetBGColor_0x2c5cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5cd0u;

    // 0x2c5cd0: 0x3c020036
    ctx->pc = 0x2c5cd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c5cd4: 0x8c42dee0
    ctx->pc = 0x2c5cd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c5cd8: 0x8c430010
    ctx->pc = 0x2c5cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c5cdc: 0x42400
    ctx->pc = 0x2c5cdcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x2c5ce0: 0x52a00
    ctx->pc = 0x2c5ce0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x2c5ce4: 0x852025
    ctx->pc = 0x2c5ce4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c5ce8: 0x862025
    ctx->pc = 0x2c5ce8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2c5cec: 0xac64001c
    ctx->pc = 0x2c5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x2c5cf0: 0x8c430010
    ctx->pc = 0x2c5cf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c5cf4: 0x24020001
    ctx->pc = 0x2c5cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5cf8: 0x3e00008
    ctx->pc = 0x2C5CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5D00u;
}
