#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalDBLvlChar
// Address: 0x2b4320 - 0x2b4354
void evalDBLvlChar_0x2b4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4320u;

    // 0x2b4320: 0x3c050037
    ctx->pc = 0x2b4320u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2b4324: 0x8ca220ac
    ctx->pc = 0x2b4324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8364)));
    // 0x2b4328: 0x8c430008
    ctx->pc = 0x2b4328u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b432c: 0x8c440024
    ctx->pc = 0x2b432cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b4330: 0x641821
    ctx->pc = 0x2b4330u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4334: 0x90420020
    ctx->pc = 0x2b4334u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b4338: 0xa0620000
    ctx->pc = 0x2b4338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b433c: 0x8ca320ac
    ctx->pc = 0x2b433cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8364)));
    // 0x2b4340: 0x8c620024
    ctx->pc = 0x2b4340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b4344: 0x8c630008
    ctx->pc = 0x2b4344u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b4348: 0x431021
    ctx->pc = 0x2b4348u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b434c: 0x3e00008
    ctx->pc = 0x2B434Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4350u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4354u;
}
