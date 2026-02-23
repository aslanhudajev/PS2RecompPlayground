#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initWaterPillar__9FcvEffectFv
// Address: 0x1dd1f0 - 0x1dd288
void initWaterPillar__9FcvEffectFv_0x1dd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initWaterPillar__9FcvEffectFv");


    ctx->pc = 0x1dd1f0u;

    // 0x1dd1f0: 0x27bdffe0
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd1f4: 0x7fbf0010
    ctx->pc = 0x1dd1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd1f8: 0x7fb00000
    ctx->pc = 0x1dd1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd1fc: 0x70808628
    ctx->pc = 0x1dd1fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd200: 0xc0761c4
    ctx->pc = 0x1DD200u;
    SET_GPR_U32(ctx, 31, 0x1DD208u);
    ctx->pc = 0x1DD204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD208u; }
        else if (ctx->pc != 0x1DD208u) { ctx->pc = 0x1DD208u; }
    }
    if (ctx->pc != 0x1DD208u) { return; }
    ctx->pc = 0x1DD208u;
    // 0x1dd208: 0xae020054
    ctx->pc = 0x1dd208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd20c: 0x3c024220
    ctx->pc = 0x1dd20cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16928 << 16));
    // 0x1dd210: 0xae020028
    ctx->pc = 0x1dd210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd214: 0x8e040054
    ctx->pc = 0x1dd214u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd218: 0x3c020021
    ctx->pc = 0x1dd218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1dd21c: 0x3445000f
    ctx->pc = 0x1dd21cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 15));
    // 0x1dd220: 0x3c02009d
    ctx->pc = 0x1dd220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)157 << 16));
    // 0x1dd224: 0x2446d940
    ctx->pc = 0x1dd224u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x1dd228: 0xc079e80
    ctx->pc = 0x1DD228u;
    SET_GPR_U32(ctx, 31, 0x1DD230u);
    ctx->pc = 0x1DD22Cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD230u; }
        else if (ctx->pc != 0x1DD230u) { ctx->pc = 0x1DD230u; }
    }
    if (ctx->pc != 0x1DD230u) { return; }
    ctx->pc = 0x1DD230u;
    // 0x1dd230: 0xc60c002c
    ctx->pc = 0x1dd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd234: 0x3c033f80
    ctx->pc = 0x1dd234u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dd238: 0x44830000
    ctx->pc = 0x1dd238u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dd23c: 0x0
    ctx->pc = 0x1dd23cu;
    // NOP
    // 0x1dd240: 0x460c0032
    ctx->pc = 0x1dd240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd244: 0x0
    ctx->pc = 0x1dd244u;
    // NOP
    // 0x1dd248: 0x45010003
    ctx->pc = 0x1DD248u;
    {
        const bool branch_taken_0x1dd248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd248) {
            ctx->pc = 0x1DD258u;
            goto label_1dd258;
        }
    }
    ctx->pc = 0x1DD250u;
    // 0x1dd250: 0xc079ecc
    ctx->pc = 0x1DD250u;
    SET_GPR_U32(ctx, 31, 0x1DD258u);
    ctx->pc = 0x1DD254u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD258u; }
        else if (ctx->pc != 0x1DD258u) { ctx->pc = 0x1DD258u; }
    }
    if (ctx->pc != 0x1DD258u) { return; }
    ctx->pc = 0x1DD258u;
label_1dd258:
    // 0x1dd258: 0x3c030027
    ctx->pc = 0x1dd258u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd25c: 0x24638f50
    ctx->pc = 0x1dd25cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938448));
    // 0x1dd260: 0xc4620000
    ctx->pc = 0x1dd260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd264: 0xc4610004
    ctx->pc = 0x1dd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd268: 0xc4600008
    ctx->pc = 0x1dd268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd26c: 0xe6020114
    ctx->pc = 0x1dd26cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd270: 0xe6010118
    ctx->pc = 0x1dd270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd274: 0xe600011c
    ctx->pc = 0x1dd274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd278: 0x7bbf0010
    ctx->pc = 0x1dd278u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd27c: 0x7bb00000
    ctx->pc = 0x1dd27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd280: 0x3e00008
    ctx->pc = 0x1DD280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD284u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD258u: goto label_1dd258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD288u;
}
