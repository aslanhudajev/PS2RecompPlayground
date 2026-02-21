#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitGetAlpha
// Address: 0x2c3dd8 - 0x2c3dec
void MBBlitGetAlpha_0x2c3dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3dd8u;

    // 0x2c3dd8: 0x9082001f
    ctx->pc = 0x2c3dd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x2c3ddc: 0x24030080
    ctx->pc = 0x2c3ddcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c3de0: 0x621023
    ctx->pc = 0x2c3de0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3de4: 0x3e00008
    ctx->pc = 0x2C3DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3DE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3DECu;
}
