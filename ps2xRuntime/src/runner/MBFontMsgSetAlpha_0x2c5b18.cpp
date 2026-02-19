#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBFontMsgSetAlpha
// Address: 0x2c5b18 - 0x2c5b4c
void MBFontMsgSetAlpha_0x2c5b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5b18u;

    // 0x2c5b18: 0x8c860028
    ctx->pc = 0x2c5b18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2c5b1c: 0x61602
    ctx->pc = 0x2c5b1cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 24));
    // 0x2c5b20: 0x52842
    ctx->pc = 0x2c5b20u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2c5b24: 0x24030080
    ctx->pc = 0x2c5b24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c5b28: 0x651823
    ctx->pc = 0x2c5b28u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c5b2c: 0x3c0500ff
    ctx->pc = 0x2c5b2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)255 << 16));
    // 0x2c5b30: 0x34a5ffff
    ctx->pc = 0x2c5b30u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x2c5b34: 0xc53024
    ctx->pc = 0x2c5b34u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2c5b38: 0x31e00
    ctx->pc = 0x2c5b38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2c5b3c: 0x661825
    ctx->pc = 0x2c5b3cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c5b40: 0xac830028
    ctx->pc = 0x2c5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2c5b44: 0x3e00008
    ctx->pc = 0x2C5B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5B48u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5B4Cu;
}
