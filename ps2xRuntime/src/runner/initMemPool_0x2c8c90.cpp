#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initMemPool
// Address: 0x2c8c90 - 0x2c8cf4
void initMemPool_0x2c8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8c90u;

    // 0x2c8c90: 0x27bdffe0
    ctx->pc = 0x2c8c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8c94: 0xffbf0010
    ctx->pc = 0x2c8c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8c98: 0xffb00000
    ctx->pc = 0x2c8c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8c9c: 0x80802d
    ctx->pc = 0x2c8c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ca0: 0xa0202d
    ctx->pc = 0x2c8ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ca4: 0xae000000
    ctx->pc = 0x2c8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c8ca8: 0xae040004
    ctx->pc = 0x2c8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x2c8cac: 0xae040008
    ctx->pc = 0x2c8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2c8cb0: 0x24020001
    ctx->pc = 0x2c8cb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8cb4: 0xae02000c
    ctx->pc = 0x2c8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c8cb8: 0xc0b4f52
    ctx->pc = 0x2C8CB8u;
    SET_GPR_U32(ctx, 31, 0x2C8CC0u);
    ctx->pc = 0x2C8CBCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CC0u; }
    }
    if (ctx->pc != 0x2C8CC0u) { return; }
    ctx->pc = 0x2C8CC0u;
    // 0x2c8cc0: 0xae020014
    ctx->pc = 0x2c8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2c8cc4: 0xae020020
    ctx->pc = 0x2c8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2c8cc8: 0xae020018
    ctx->pc = 0x2c8cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2c8ccc: 0xae02001c
    ctx->pc = 0x2c8cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2c8cd0: 0x8e030008
    ctx->pc = 0x2c8cd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c8cd4: 0xac430000
    ctx->pc = 0x2c8cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c8cd8: 0xac400004
    ctx->pc = 0x2c8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c8cdc: 0xac400008
    ctx->pc = 0x2c8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c8ce0: 0xac40000c
    ctx->pc = 0x2c8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2c8ce4: 0xdfbf0010
    ctx->pc = 0x2c8ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ce8: 0xdfb00000
    ctx->pc = 0x2c8ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8cec: 0x3e00008
    ctx->pc = 0x2C8CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8CF4u;
}
