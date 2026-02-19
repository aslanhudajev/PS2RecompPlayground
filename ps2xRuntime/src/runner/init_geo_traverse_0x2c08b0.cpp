#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_geo_traverse
// Address: 0x2c08b0 - 0x2c0908
void init_geo_traverse_0x2c08b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c08b0u;

    // 0x2c08b0: 0x27bdfff0
    ctx->pc = 0x2c08b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c08b4: 0xffbf0000
    ctx->pc = 0x2c08b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c08b8: 0x3c02003a
    ctx->pc = 0x2c08b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c08bc: 0x8c441bd0
    ctx->pc = 0x2c08bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2c08c0: 0x248400f0
    ctx->pc = 0x2c08c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 240));
    // 0x2c08c4: 0x3c05003d
    ctx->pc = 0x2c08c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
    // 0x2c08c8: 0xc0b5494
    ctx->pc = 0x2C08C8u;
    SET_GPR_U32(ctx, 31, 0x2C08D0u);
    ctx->pc = 0x2C08CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942976));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C08D0u; }
    }
    if (ctx->pc != 0x2C08D0u) { return; }
    ctx->pc = 0x2C08D0u;
    // 0x2c08d0: 0x3c03003d
    ctx->pc = 0x2c08d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c08d4: 0x24020001
    ctx->pc = 0x2c08d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c08d8: 0xac62b100
    ctx->pc = 0x2c08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947072), GPR_U32(ctx, 2));
    // 0x2c08dc: 0x3c02003d
    ctx->pc = 0x2c08dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c08e0: 0xac40a0f0
    ctx->pc = 0x2c08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942960), GPR_U32(ctx, 0));
    // 0x2c08e4: 0x3c020037
    ctx->pc = 0x2c08e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c08e8: 0x3c01bf80
    ctx->pc = 0x2c08e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2c08ec: 0x44810000
    ctx->pc = 0x2c08ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c08f0: 0xe44028dc
    ctx->pc = 0x2c08f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 10460), bits); }
    // 0x2c08f4: 0x3c02003d
    ctx->pc = 0x2c08f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c08f8: 0xac40b800
    ctx->pc = 0x2c08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948864), GPR_U32(ctx, 0));
    // 0x2c08fc: 0xdfbf0000
    ctx->pc = 0x2c08fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0900: 0x3e00008
    ctx->pc = 0x2C0900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0904u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0908u;
}
