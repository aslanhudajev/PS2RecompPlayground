#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewDirSingle1
// Address: 0x2ccc68 - 0x2ccca4
void getNewDirSingle1_0x2ccc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ccc68u;

    // 0x2ccc68: 0x27bdfff0
    ctx->pc = 0x2ccc68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ccc6c: 0xffbf0000
    ctx->pc = 0x2ccc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ccc70: 0x80102d
    ctx->pc = 0x2ccc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc74: 0x3c03002d
    ctx->pc = 0x2ccc74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
    // 0x2ccc78: 0x2463cca8
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954152));
    // 0x2ccc7c: 0xac430064
    ctx->pc = 0x2ccc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x2ccc80: 0x9443002c
    ctx->pc = 0x2ccc80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ccc84: 0x3063fff7
    ctx->pc = 0x2ccc84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65527));
    // 0x2ccc88: 0xa443002c
    ctx->pc = 0x2ccc88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccc8c: 0xc0b325e
    ctx->pc = 0x2CCC8Cu;
    SET_GPR_U32(ctx, 31, 0x2CCC94u);
    ctx->pc = 0x2CCC90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x2CC978u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCurrentDir_0x2cc978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCC94u; }
    }
    if (ctx->pc != 0x2CCC94u) { return; }
    ctx->pc = 0x2CCC94u;
    // 0x2ccc94: 0x102d
    ctx->pc = 0x2ccc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc98: 0xdfbf0000
    ctx->pc = 0x2ccc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccc9c: 0x3e00008
    ctx->pc = 0x2CCC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCCA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCCA4u;
}
