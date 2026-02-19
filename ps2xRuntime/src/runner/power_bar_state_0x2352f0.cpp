#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: power_bar_state
// Address: 0x2352f0 - 0x235394
void power_bar_state_0x2352f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2352f0u;

    // 0x2352f0: 0xc4810804
    ctx->pc = 0x2352f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2352f4: 0x3c013c23
    ctx->pc = 0x2352f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x2352f8: 0x3421d70a
    ctx->pc = 0x2352f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2352fc: 0x44810000
    ctx->pc = 0x2352fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x235300: 0x46000842
    ctx->pc = 0x235300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x235304: 0x3c013ecc
    ctx->pc = 0x235304u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16076 << 16));
    // 0x235308: 0x3421cccd
    ctx->pc = 0x235308u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23530c: 0x44810000
    ctx->pc = 0x23530cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x235310: 0x46000834
    ctx->pc = 0x235310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235314: 0x0
    ctx->pc = 0x235314u;
    // NOP
    // 0x235318: 0x45000006
    ctx->pc = 0x235318u;
    {
        const bool branch_taken_0x235318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23531Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x235318) {
            ctx->pc = 0x235334u;
            goto label_235334;
        }
    }
    ctx->pc = 0x235320u;
    // 0x235320: 0x0
    ctx->pc = 0x235320u;
    // NOP
    // 0x235324: 0x0
    ctx->pc = 0x235324u;
    // NOP
    // 0x235328: 0x46000803
    ctx->pc = 0x235328u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x23532c: 0x3e00008
    ctx->pc = 0x23532Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235330u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235334u: goto label_235334;
            case 0x235380u: goto label_235380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x235334u;
label_235334:
    // 0x235334: 0x3c013f7d
    ctx->pc = 0x235334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16253 << 16));
    // 0x235338: 0x342170a4
    ctx->pc = 0x235338u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 28836));
    // 0x23533c: 0x44810000
    ctx->pc = 0x23533cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x235340: 0x46000834
    ctx->pc = 0x235340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235344: 0x0
    ctx->pc = 0x235344u;
    // NOP
    // 0x235348: 0x4500000d
    ctx->pc = 0x235348u;
    {
        const bool branch_taken_0x235348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23534Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x235348) {
            ctx->pc = 0x235380u;
            goto label_235380;
        }
    }
    ctx->pc = 0x235350u;
    // 0x235350: 0x3c013ecc
    ctx->pc = 0x235350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16076 << 16));
    // 0x235354: 0x3421cccd
    ctx->pc = 0x235354u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x235358: 0x44810000
    ctx->pc = 0x235358u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23535c: 0x46000801
    ctx->pc = 0x23535cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x235360: 0x3c013f19
    ctx->pc = 0x235360u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x235364: 0x3421999a
    ctx->pc = 0x235364u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x235368: 0x44810800
    ctx->pc = 0x235368u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23536c: 0x0
    ctx->pc = 0x23536cu;
    // NOP
    // 0x235370: 0x0
    ctx->pc = 0x235370u;
    // NOP
    // 0x235374: 0x46010003
    ctx->pc = 0x235374u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x235378: 0x3e00008
    ctx->pc = 0x235378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23537Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235334u: goto label_235334;
            case 0x235380u: goto label_235380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x235380u;
label_235380:
    // 0x235380: 0x3c013f80
    ctx->pc = 0x235380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x235384: 0x44810000
    ctx->pc = 0x235384u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x235388: 0xe4a00000
    ctx->pc = 0x235388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x23538c: 0x3e00008
    ctx->pc = 0x23538Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235390u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235334u: goto label_235334;
            case 0x235380u: goto label_235380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x235394u;
}
