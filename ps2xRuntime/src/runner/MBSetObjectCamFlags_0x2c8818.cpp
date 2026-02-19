#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetObjectCamFlags
// Address: 0x2c8818 - 0x2c8834
void MBSetObjectCamFlags_0x2c8818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8818u;

    // 0x2c8818: 0x8c820060
    ctx->pc = 0x2c8818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2c881c: 0x3c03f0ff
    ctx->pc = 0x2c881cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)61695 << 16));
    // 0x2c8820: 0x3463ffff
    ctx->pc = 0x2c8820u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2c8824: 0x431024
    ctx->pc = 0x2c8824u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8828: 0xa22825
    ctx->pc = 0x2c8828u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c882c: 0x3e00008
    ctx->pc = 0x2C882Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8830u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8834u;
}
