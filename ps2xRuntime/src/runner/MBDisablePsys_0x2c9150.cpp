#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDisablePsys
// Address: 0x2c9150 - 0x2c9160
void MBDisablePsys_0x2c9150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9150u;

    // 0x2c9150: 0x3c03003a
    ctx->pc = 0x2c9150u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c9154: 0x2402ffff
    ctx->pc = 0x2c9154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9158: 0x3e00008
    ctx->pc = 0x2C9158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C915Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945424), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9160u;
}
