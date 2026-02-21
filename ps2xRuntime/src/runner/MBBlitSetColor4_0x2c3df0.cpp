#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetColor4
// Address: 0x2c3df0 - 0x2c3e10
void MBBlitSetColor4_0x2c3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3df0u;

    // 0x2c3df0: 0x8c820000
    ctx->pc = 0x2c3df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3df4: 0x34420010
    ctx->pc = 0x2c3df4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
    // 0x2c3df8: 0xac820000
    ctx->pc = 0x2c3df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c3dfc: 0xac85001c
    ctx->pc = 0x2c3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x2c3e00: 0xac860020
    ctx->pc = 0x2c3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2c3e04: 0xac870024
    ctx->pc = 0x2c3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x2c3e08: 0x3e00008
    ctx->pc = 0x2C3E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3E10u;
}
