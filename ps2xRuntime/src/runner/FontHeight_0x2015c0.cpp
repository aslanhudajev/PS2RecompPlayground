#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FontHeight
// Address: 0x2015c0 - 0x2015f8
void FontHeight_0x2015c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2015c0u;

    // 0x2015c0: 0x27bdffe0
    ctx->pc = 0x2015c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2015c4: 0xffbf0000
    ctx->pc = 0x2015c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2015c8: 0xe7b40010
    ctx->pc = 0x2015c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2015cc: 0xc0b16ba
    ctx->pc = 0x2015CCu;
    SET_GPR_U32(ctx, 31, 0x2015D4u);
    ctx->pc = 0x2015D0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C5AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontHeight_0x2c5ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015D4u; }
    }
    if (ctx->pc != 0x2015D4u) { return; }
    ctx->pc = 0x2015D4u;
    // 0x2015d4: 0x44820000
    ctx->pc = 0x2015d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2015d8: 0x46800020
    ctx->pc = 0x2015d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2015dc: 0x46140002
    ctx->pc = 0x2015dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2015e0: 0x46000064
    ctx->pc = 0x2015e0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2015e4: 0x44020800
    ctx->pc = 0x2015e4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2015e8: 0xdfbf0000
    ctx->pc = 0x2015e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2015ec: 0xc7b40010
    ctx->pc = 0x2015ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2015f0: 0x3e00008
    ctx->pc = 0x2015F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2015F8u;
}
