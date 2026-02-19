#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PopMatrix
// Address: 0x2c0a18 - 0x2c0a2c
void PopMatrix_0x2c0a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0a18u;

    // 0x2c0a18: 0x3c03003d
    ctx->pc = 0x2c0a18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c0a1c: 0x8c62a0f0
    ctx->pc = 0x2c0a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942960)));
    // 0x2c0a20: 0x2442ffff
    ctx->pc = 0x2c0a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c0a24: 0x3e00008
    ctx->pc = 0x2C0A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0A28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942960), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0A2Cu;
}
