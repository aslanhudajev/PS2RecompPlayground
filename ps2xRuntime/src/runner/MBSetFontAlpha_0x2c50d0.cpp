#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFontAlpha
// Address: 0x2c50d0 - 0x2c510c
void MBSetFontAlpha_0x2c50d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c50d0u;

    // 0x2c50d0: 0x3c060038
    ctx->pc = 0x2c50d0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)56 << 16));
    // 0x2c50d4: 0x8cc5b16c
    ctx->pc = 0x2c50d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294947180)));
    // 0x2c50d8: 0x51602
    ctx->pc = 0x2c50d8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 24));
    // 0x2c50dc: 0x24030080
    ctx->pc = 0x2c50dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c50e0: 0x621023
    ctx->pc = 0x2c50e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c50e4: 0x42042
    ctx->pc = 0x2c50e4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x2c50e8: 0x641823
    ctx->pc = 0x2c50e8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c50ec: 0x3c0400ff
    ctx->pc = 0x2c50ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2c50f0: 0x3484ffff
    ctx->pc = 0x2c50f0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2c50f4: 0xa42824
    ctx->pc = 0x2c50f4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c50f8: 0x31e00
    ctx->pc = 0x2c50f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2c50fc: 0x651825
    ctx->pc = 0x2c50fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c5100: 0xacc3b16c
    ctx->pc = 0x2c5100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294947180), GPR_U32(ctx, 3));
    // 0x2c5104: 0x3e00008
    ctx->pc = 0x2C5104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5108u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C510Cu;
}
