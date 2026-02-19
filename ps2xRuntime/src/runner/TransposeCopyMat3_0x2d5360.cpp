#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TransposeCopyMat3
// Address: 0x2d5360 - 0x2d53bc
void TransposeCopyMat3_0x2d5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5360u;

    // 0x2d5360: 0x8c820000
    ctx->pc = 0x2d5360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5364: 0x8c830010
    ctx->pc = 0x2d5364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d5368: 0x8c880020
    ctx->pc = 0x2d5368u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d536c: 0xaca20000
    ctx->pc = 0x2d536cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d5370: 0xaca30004
    ctx->pc = 0x2d5370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2d5374: 0xaca80008
    ctx->pc = 0x2d5374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x2d5378: 0xaca0000c
    ctx->pc = 0x2d5378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2d537c: 0x8c820004
    ctx->pc = 0x2d537cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d5380: 0x8c830014
    ctx->pc = 0x2d5380u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d5384: 0x8c880024
    ctx->pc = 0x2d5384u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2d5388: 0xaca20010
    ctx->pc = 0x2d5388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x2d538c: 0xaca30014
    ctx->pc = 0x2d538cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2d5390: 0xaca80018
    ctx->pc = 0x2d5390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x2d5394: 0xaca0001c
    ctx->pc = 0x2d5394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2d5398: 0x8c820008
    ctx->pc = 0x2d5398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d539c: 0x8c830018
    ctx->pc = 0x2d539cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d53a0: 0x8c880028
    ctx->pc = 0x2d53a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d53a4: 0xaca20020
    ctx->pc = 0x2d53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x2d53a8: 0xaca30024
    ctx->pc = 0x2d53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x2d53ac: 0xaca80028
    ctx->pc = 0x2d53acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 8));
    // 0x2d53b0: 0xaca0002c
    ctx->pc = 0x2d53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x2d53b4: 0x3e00008
    ctx->pc = 0x2D53B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D53BCu;
}
