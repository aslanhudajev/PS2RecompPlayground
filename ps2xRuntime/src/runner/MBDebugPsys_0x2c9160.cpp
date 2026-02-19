#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDebugPsys
// Address: 0x2c9160 - 0x2c916c
void MBDebugPsys_0x2c9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9160u;

    // 0x2c9160: 0x3c02003a
    ctx->pc = 0x2c9160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c9164: 0x3e00008
    ctx->pc = 0x2C9164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9168u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945424), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C916Cu;
}
