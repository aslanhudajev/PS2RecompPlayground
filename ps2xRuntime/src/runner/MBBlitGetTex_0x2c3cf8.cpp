#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitGetTex
// Address: 0x2c3cf8 - 0x2c3d00
void MBBlitGetTex_0x2c3cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3cf8u;

    // 0x2c3cf8: 0x3e00008
    ctx->pc = 0x2C3CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3CFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3D00u;
}
