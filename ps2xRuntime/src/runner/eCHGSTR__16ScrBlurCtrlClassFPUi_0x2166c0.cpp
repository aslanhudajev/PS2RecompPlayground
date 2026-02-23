#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eCHGSTR__16ScrBlurCtrlClassFPUi
// Address: 0x2166c0 - 0x2166f8
void eCHGSTR__16ScrBlurCtrlClassFPUi_0x2166c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eCHGSTR__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x2166c0u;

    // 0x2166c0: 0x8ca30008
    ctx->pc = 0x2166c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2166c4: 0x24a20010
    ctx->pc = 0x2166c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2166c8: 0xac830010
    ctx->pc = 0x2166c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2166cc: 0xc4a2000c
    ctx->pc = 0x2166ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2166d0: 0xc4800010
    ctx->pc = 0x2166d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2166d4: 0xc4810008
    ctx->pc = 0x2166d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2166d8: 0x468010a0
    ctx->pc = 0x2166d8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2166dc: 0x46800020
    ctx->pc = 0x2166dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2166e0: 0x46011041
    ctx->pc = 0x2166e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2166e4: 0x46000803
    ctx->pc = 0x2166e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2166e8: 0x0
    ctx->pc = 0x2166e8u;
    // NOP
    // 0x2166ec: 0x0
    ctx->pc = 0x2166ecu;
    // NOP
    // 0x2166f0: 0x3e00008
    ctx->pc = 0x2166F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2166F8u;
}
