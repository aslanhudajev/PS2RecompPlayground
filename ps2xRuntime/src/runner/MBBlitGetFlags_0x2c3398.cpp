#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitGetFlags
// Address: 0x2c3398 - 0x2c33a0
void MBBlitGetFlags_0x2c3398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3398u;

    // 0x2c3398: 0x3e00008
    ctx->pc = 0x2C3398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C339Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C33A0u;
}
