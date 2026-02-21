#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BlitBarProfilerGrid
// Address: 0x2d2c88 - 0x2d2d00
void BlitBarProfilerGrid_0x2d2c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2c88u;

    // 0x2d2c88: 0x27bdffb0
    ctx->pc = 0x2d2c88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2c8c: 0xffbf0040
    ctx->pc = 0x2d2c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d2c90: 0xffb30030
    ctx->pc = 0x2d2c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d2c94: 0xffb20020
    ctx->pc = 0x2d2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2c98: 0xffb10010
    ctx->pc = 0x2d2c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2c9c: 0xffb00000
    ctx->pc = 0x2d2c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2ca0: 0x80982d
    ctx->pc = 0x2d2ca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ca4: 0xa0882d
    ctx->pc = 0x2d2ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ca8: 0xc0b0c48
    ctx->pc = 0x2D2CA8u;
    SET_GPR_U32(ctx, 31, 0x2D2CB0u);
    ctx->pc = 0x2D2CACu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3120u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempQuad_0x2c3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CB0u; }
    }
    if (ctx->pc != 0x2D2CB0u) { return; }
    ctx->pc = 0x2D2CB0u;
    // 0x2d2cb0: 0x40802d
    ctx->pc = 0x2d2cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cb4: 0x200202d
    ctx->pc = 0x2d2cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cb8: 0x220282d
    ctx->pc = 0x2d2cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cbc: 0x3c013f80
    ctx->pc = 0x2d2cbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d2cc0: 0x44816000
    ctx->pc = 0x2d2cc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d2cc4: 0xc0b0df2
    ctx->pc = 0x2D2CC4u;
    SET_GPR_U32(ctx, 31, 0x2D2CCCu);
    ctx->pc = 0x2D2CC8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CCCu; }
    }
    if (ctx->pc != 0x2D2CCCu) { return; }
    ctx->pc = 0x2D2CCCu;
    // 0x2d2ccc: 0x200202d
    ctx->pc = 0x2d2cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cd0: 0x240500e0
    ctx->pc = 0x2d2cd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2d2cd4: 0xc0b0cf6
    ctx->pc = 0x2D2CD4u;
    SET_GPR_U32(ctx, 31, 0x2D2CDCu);
    ctx->pc = 0x2D2CD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CDCu; }
    }
    if (ctx->pc != 0x2D2CDCu) { return; }
    ctx->pc = 0x2D2CDCu;
    // 0x2d2cdc: 0x200202d
    ctx->pc = 0x2d2cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ce0: 0x260282d
    ctx->pc = 0x2d2ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ce4: 0xdfbf0040
    ctx->pc = 0x2d2ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2ce8: 0xdfb30030
    ctx->pc = 0x2d2ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2cec: 0xdfb20020
    ctx->pc = 0x2d2cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2cf0: 0xdfb10010
    ctx->pc = 0x2d2cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2cf4: 0xdfb00000
    ctx->pc = 0x2d2cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2cf8: 0x80b0f40
    ctx->pc = 0x2D2CF8u;
    ctx->pc = 0x2D2CFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2C3D00u;
    MBBlitSetColor_0x2c3d00(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2D00u;
}
