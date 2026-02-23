#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CheckCulling__FP10OBJCULLING
// Address: 0x2154a0 - 0x21557c
void CheckCulling__FP10OBJCULLING_0x2154a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CheckCulling__FP10OBJCULLING");


    ctx->pc = 0x2154a0u;

    // 0x2154a0: 0x27bdffc0
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2154a4: 0x7fbf0010
    ctx->pc = 0x2154a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2154a8: 0x7fb00000
    ctx->pc = 0x2154a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2154ac: 0xc4800000
    ctx->pc = 0x2154acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2154b0: 0x70808628
    ctx->pc = 0x2154b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2154b4: 0x27a50030
    ctx->pc = 0x2154b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2154b8: 0xe7a00020
    ctx->pc = 0x2154b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2154bc: 0xc4800004
    ctx->pc = 0x2154bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2154c0: 0xe7a00024
    ctx->pc = 0x2154c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2154c4: 0xc4800008
    ctx->pc = 0x2154c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2154c8: 0xe7a00028
    ctx->pc = 0x2154c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2154cc: 0xc06bf00
    ctx->pc = 0x2154CCu;
    SET_GPR_U32(ctx, 31, 0x2154D4u);
    ctx->pc = 0x2154D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154D4u; }
        else if (ctx->pc != 0x2154D4u) { ctx->pc = 0x2154D4u; }
    }
    if (ctx->pc != 0x2154D4u) { return; }
    ctx->pc = 0x2154D4u;
    // 0x2154d4: 0xc605000c
    ctx->pc = 0x2154d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2154d8: 0xc7a60038
    ctx->pc = 0x2154d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2154dc: 0x44800000
    ctx->pc = 0x2154dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2154e0: 0x46053041
    ctx->pc = 0x2154e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2154e4: 0x46000836
    ctx->pc = 0x2154e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2154e8: 0x0
    ctx->pc = 0x2154e8u;
    // NOP
    // 0x2154ec: 0x4500001f
    ctx->pc = 0x2154ECu;
    {
        const bool branch_taken_0x2154ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2154F0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2154ec) {
            ctx->pc = 0x21556Cu;
            goto label_21556c;
        }
    }
    ctx->pc = 0x2154F4u;
    // 0x2154f4: 0xc7828c50
    ctx->pc = 0x2154f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2154f8: 0x3c024360
    ctx->pc = 0x2154f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17248 << 16));
    // 0x2154fc: 0x44821800
    ctx->pc = 0x2154fcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x215500: 0xc7808c58
    ctx->pc = 0x215500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215504: 0x3c023fb6
    ctx->pc = 0x215504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x215508: 0x3442db6e
    ctx->pc = 0x215508u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x21550c: 0x46031083
    ctx->pc = 0x21550cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x215510: 0xc7a40030
    ctx->pc = 0x215510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215514: 0x46002803
    ctx->pc = 0x215514u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[0] = ctx->f[5] / ctx->f[0];
    // 0x215518: 0x44820800
    ctx->pc = 0x215518u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21551c: 0x0
    ctx->pc = 0x21551cu;
    // NOP
    // 0x215520: 0x46003001
    ctx->pc = 0x215520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x215524: 0x46020843
    ctx->pc = 0x215524u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x215528: 0x46000842
    ctx->pc = 0x215528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21552c: 0x46002005
    ctx->pc = 0x21552cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x215530: 0x46000007
    ctx->pc = 0x215530u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x215534: 0x46010036
    ctx->pc = 0x215534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215538: 0x0
    ctx->pc = 0x215538u;
    // NOP
    // 0x21553c: 0x4501000a
    ctx->pc = 0x21553Cu;
    {
        const bool branch_taken_0x21553c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21553c) {
            ctx->pc = 0x215568u;
            goto label_215568;
        }
    }
    ctx->pc = 0x215544u;
    // 0x215544: 0xc7a00034
    ctx->pc = 0x215544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215548: 0x46000005
    ctx->pc = 0x215548u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21554c: 0x46000007
    ctx->pc = 0x21554cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x215550: 0x46010036
    ctx->pc = 0x215550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215554: 0x0
    ctx->pc = 0x215554u;
    // NOP
    // 0x215558: 0x45010003
    ctx->pc = 0x215558u;
    {
        const bool branch_taken_0x215558 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21555Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x215558) {
            ctx->pc = 0x215568u;
            goto label_215568;
        }
    }
    ctx->pc = 0x215560u;
    // 0x215560: 0x10000003
    ctx->pc = 0x215560u;
    {
        const bool branch_taken_0x215560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215564u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x215560) {
            ctx->pc = 0x215570u;
            goto label_215570;
        }
    }
    ctx->pc = 0x215568u;
label_215568:
    // 0x215568: 0x70001628
    ctx->pc = 0x215568u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21556c:
    // 0x21556c: 0x7bbf0010
    ctx->pc = 0x21556cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_215570:
    // 0x215570: 0x7bb00000
    ctx->pc = 0x215570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215574: 0x3e00008
    ctx->pc = 0x215574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215568u: goto label_215568;
            case 0x21556Cu: goto label_21556c;
            case 0x215570u: goto label_215570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21557Cu;
}
