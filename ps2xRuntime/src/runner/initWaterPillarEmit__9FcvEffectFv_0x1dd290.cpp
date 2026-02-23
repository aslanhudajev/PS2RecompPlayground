#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initWaterPillarEmit__9FcvEffectFv
// Address: 0x1dd290 - 0x1dd32c
void initWaterPillarEmit__9FcvEffectFv_0x1dd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initWaterPillarEmit__9FcvEffectFv");


    ctx->pc = 0x1dd290u;

    // 0x1dd290: 0x27bdffe0
    ctx->pc = 0x1dd290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd294: 0x7fbf0010
    ctx->pc = 0x1dd294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd298: 0x7fb00000
    ctx->pc = 0x1dd298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd29c: 0x70808628
    ctx->pc = 0x1dd29cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd2a0: 0xc0761c4
    ctx->pc = 0x1DD2A0u;
    SET_GPR_U32(ctx, 31, 0x1DD2A8u);
    ctx->pc = 0x1DD2A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2A8u; }
        else if (ctx->pc != 0x1DD2A8u) { ctx->pc = 0x1DD2A8u; }
    }
    if (ctx->pc != 0x1DD2A8u) { return; }
    ctx->pc = 0x1DD2A8u;
    // 0x1dd2a8: 0xae020054
    ctx->pc = 0x1dd2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd2ac: 0x3c0241a0
    ctx->pc = 0x1dd2acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
    // 0x1dd2b0: 0xae020028
    ctx->pc = 0x1dd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd2b4: 0x3c020021
    ctx->pc = 0x1dd2b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1dd2b8: 0x3445007a
    ctx->pc = 0x1dd2b8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 122));
    // 0x1dd2bc: 0x3c02009e
    ctx->pc = 0x1dd2bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)158 << 16));
    // 0x1dd2c0: 0x24469b20
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294941472));
    // 0x1dd2c4: 0x3c02009e
    ctx->pc = 0x1dd2c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)158 << 16));
    // 0x1dd2c8: 0x8e040054
    ctx->pc = 0x1dd2c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd2cc: 0xc079e80
    ctx->pc = 0x1DD2CCu;
    SET_GPR_U32(ctx, 31, 0x1DD2D4u);
    ctx->pc = 0x1DD2D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294941776));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2D4u; }
        else if (ctx->pc != 0x1DD2D4u) { ctx->pc = 0x1DD2D4u; }
    }
    if (ctx->pc != 0x1DD2D4u) { return; }
    ctx->pc = 0x1DD2D4u;
    // 0x1dd2d4: 0xc60c002c
    ctx->pc = 0x1dd2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd2d8: 0x3c033f80
    ctx->pc = 0x1dd2d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dd2dc: 0x44830000
    ctx->pc = 0x1dd2dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dd2e0: 0x0
    ctx->pc = 0x1dd2e0u;
    // NOP
    // 0x1dd2e4: 0x460c0032
    ctx->pc = 0x1dd2e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd2e8: 0x0
    ctx->pc = 0x1dd2e8u;
    // NOP
    // 0x1dd2ec: 0x45010003
    ctx->pc = 0x1DD2ECu;
    {
        const bool branch_taken_0x1dd2ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd2ec) {
            ctx->pc = 0x1DD2FCu;
            goto label_1dd2fc;
        }
    }
    ctx->pc = 0x1DD2F4u;
    // 0x1dd2f4: 0xc079ecc
    ctx->pc = 0x1DD2F4u;
    SET_GPR_U32(ctx, 31, 0x1DD2FCu);
    ctx->pc = 0x1DD2F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2FCu; }
        else if (ctx->pc != 0x1DD2FCu) { ctx->pc = 0x1DD2FCu; }
    }
    if (ctx->pc != 0x1DD2FCu) { return; }
    ctx->pc = 0x1DD2FCu;
label_1dd2fc:
    // 0x1dd2fc: 0x3c030027
    ctx->pc = 0x1dd2fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd300: 0x24638f60
    ctx->pc = 0x1dd300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938464));
    // 0x1dd304: 0xc4620000
    ctx->pc = 0x1dd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd308: 0xc4610004
    ctx->pc = 0x1dd308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd30c: 0xc4600008
    ctx->pc = 0x1dd30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd310: 0xe6020114
    ctx->pc = 0x1dd310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd314: 0xe6010118
    ctx->pc = 0x1dd314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd318: 0xe600011c
    ctx->pc = 0x1dd318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd31c: 0x7bbf0010
    ctx->pc = 0x1dd31cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd320: 0x7bb00000
    ctx->pc = 0x1dd320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd324: 0x3e00008
    ctx->pc = 0x1DD324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD2FCu: goto label_1dd2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD32Cu;
}
