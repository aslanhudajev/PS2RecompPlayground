#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcFrm__7CFcurveFfPf
// Address: 0x1e6f90 - 0x1e6fe4
void calcFrm__7CFcurveFfPf_0x1e6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcFrm__7CFcurveFfPf");


    ctx->pc = 0x1e6f90u;

    // 0x1e6f90: 0x27bdffc0
    ctx->pc = 0x1e6f90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e6f94: 0x7fbf0020
    ctx->pc = 0x1e6f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e6f98: 0x7fb10010
    ctx->pc = 0x1e6f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6f9c: 0x7fb00000
    ctx->pc = 0x1e6f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6fa0: 0x70a08628
    ctx->pc = 0x1e6fa0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6fa4: 0xc079bfc
    ctx->pc = 0x1E6FA4u;
    SET_GPR_U32(ctx, 31, 0x1E6FACu);
    ctx->pc = 0x1E6FA8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFrm__7CFcurveFf_0x1e6ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FACu; }
        else if (ctx->pc != 0x1E6FACu) { ctx->pc = 0x1E6FACu; }
    }
    if (ctx->pc != 0x1E6FACu) { return; }
    ctx->pc = 0x1E6FACu;
    // 0x1e6fac: 0x72202628
    ctx->pc = 0x1e6facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e6fb0: 0xc079cc8
    ctx->pc = 0x1E6FB0u;
    SET_GPR_U32(ctx, 31, 0x1E6FB8u);
    ctx->pc = 0x1E6FB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1E7320u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcXYZ__7CFcurveFP11tagNLpoint3_0x1e7320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FB8u; }
        else if (ctx->pc != 0x1E6FB8u) { ctx->pc = 0x1E6FB8u; }
    }
    if (ctx->pc != 0x1E6FB8u) { return; }
    ctx->pc = 0x1E6FB8u;
    // 0x1e6fb8: 0xc7a00030
    ctx->pc = 0x1e6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6fbc: 0xe6000000
    ctx->pc = 0x1e6fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1e6fc0: 0xc7a00034
    ctx->pc = 0x1e6fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6fc4: 0xe6000004
    ctx->pc = 0x1e6fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1e6fc8: 0xc7a00038
    ctx->pc = 0x1e6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6fcc: 0xe6000008
    ctx->pc = 0x1e6fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1e6fd0: 0x7bbf0020
    ctx->pc = 0x1e6fd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6fd4: 0x7bb10010
    ctx->pc = 0x1e6fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6fd8: 0x7bb00000
    ctx->pc = 0x1e6fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6fdc: 0x3e00008
    ctx->pc = 0x1E6FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6FE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6FE4u;
}
