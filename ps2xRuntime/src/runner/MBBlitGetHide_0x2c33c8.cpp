#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitGetHide
// Address: 0x2c33c8 - 0x2c33d4
void MBBlitGetHide_0x2c33c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c33c8u;

    // 0x2c33c8: 0x8c820000
    ctx->pc = 0x2c33c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c33cc: 0x3e00008
    ctx->pc = 0x2C33CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C33D0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C33D4u;
}
