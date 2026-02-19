#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcMaxObjSize
// Address: 0x21f3f0 - 0x21f430
void CalcMaxObjSize_0x21f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f3f0u;

    // 0x21f3f0: 0xc4800030
    ctx->pc = 0x21f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f3f4: 0x46000000
    ctx->pc = 0x21f3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x21f3f8: 0x0
    ctx->pc = 0x21f3f8u;
    // NOP
    // 0x21f3fc: 0x0
    ctx->pc = 0x21f3fcu;
    // NOP
    // 0x21f400: 0x460c0303
    ctx->pc = 0x21f400u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x21f404: 0x46006064
    ctx->pc = 0x21f404u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[12]);
    // 0x21f408: 0x44030800
    ctx->pc = 0x21f408u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x21f40c: 0x24630002
    ctx->pc = 0x21f40cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x21f410: 0x0
    ctx->pc = 0x21f410u;
    // NOP
    // 0x21f414: 0x0
    ctx->pc = 0x21f414u;
    // NOP
    // 0x21f418: 0x460d0003
    ctx->pc = 0x21f418u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x21f41c: 0x46000064
    ctx->pc = 0x21f41cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21f420: 0x44020800
    ctx->pc = 0x21f420u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21f424: 0x24420002
    ctx->pc = 0x21f424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x21f428: 0x3e00008
    ctx->pc = 0x21F428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F42Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F430u;
}
