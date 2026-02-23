#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT
// Address: 0x1f0550 - 0x1f083c
void SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT_0x1f0550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT");


    ctx->pc = 0x1f0550u;

    // 0x1f0550: 0x27bdff60
    ctx->pc = 0x1f0550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f0554: 0x7fbf0060
    ctx->pc = 0x1f0554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1f0558: 0x7fb50050
    ctx->pc = 0x1f0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f055c: 0x7fb40040
    ctx->pc = 0x1f055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f0560: 0x7fb30030
    ctx->pc = 0x1f0560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f0564: 0x7fb20020
    ctx->pc = 0x1f0564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f0568: 0x7fb10010
    ctx->pc = 0x1f0568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f056c: 0x7fb00000
    ctx->pc = 0x1f056cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0570: 0x7080a628
    ctx->pc = 0x1f0570u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f0574: 0x12800050
    ctx->pc = 0x1F0574u;
    {
        const bool branch_taken_0x1f0574 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0578u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f0574) {
            ctx->pc = 0x1F06B8u;
            goto label_1f06b8;
        }
    }
    ctx->pc = 0x1F057Cu;
    // 0x1f057c: 0xc06aa7c
    ctx->pc = 0x1F057Cu;
    SET_GPR_U32(ctx, 31, 0x1F0584u);
    ctx->pc = 0x1F0580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AA9F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetGlobalAmbience_0x1aa9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0584u; }
        else if (ctx->pc != 0x1F0584u) { ctx->pc = 0x1F0584u; }
    }
    if (ctx->pc != 0x1F0584u) { return; }
    ctx->pc = 0x1F0584u;
    // 0x1f0584: 0x8e840048
    ctx->pc = 0x1f0584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1f0588: 0x8e85004c
    ctx->pc = 0x1f0588u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1f058c: 0x27a60080
    ctx->pc = 0x1f058cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f0590: 0xc07c210
    ctx->pc = 0x1F0590u;
    SET_GPR_U32(ctx, 31, 0x1F0598u);
    ctx->pc = 0x1F0594u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1F0840u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetShadingLightVector__FiiP11tagNLpoint3P11tagNLpoint3_0x1f0840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0598u; }
        else if (ctx->pc != 0x1F0598u) { ctx->pc = 0x1F0598u; }
    }
    if (ctx->pc != 0x1F0598u) { return; }
    ctx->pc = 0x1F0598u;
    // 0x1f0598: 0x70002628
    ctx->pc = 0x1f0598u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f059c: 0xc069ad8
    ctx->pc = 0x1F059Cu;
    SET_GPR_U32(ctx, 31, 0x1F05A4u);
    ctx->pc = 0x1F05A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1A6B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightType_0x1a6b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05A4u; }
        else if (ctx->pc != 0x1F05A4u) { ctx->pc = 0x1F05A4u; }
    }
    if (ctx->pc != 0x1F05A4u) { return; }
    ctx->pc = 0x1F05A4u;
    // 0x1f05a4: 0xc7ac0080
    ctx->pc = 0x1f05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f05a8: 0xc7ad0084
    ctx->pc = 0x1f05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f05ac: 0xc7ae0088
    ctx->pc = 0x1f05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f05b0: 0xc069a70
    ctx->pc = 0x1F05B0u;
    SET_GPR_U32(ctx, 31, 0x1F05B8u);
    ctx->pc = 0x1F05B4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A69C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightDir_0x1a69c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05B8u; }
        else if (ctx->pc != 0x1F05B8u) { ctx->pc = 0x1F05B8u; }
    }
    if (ctx->pc != 0x1F05B8u) { return; }
    ctx->pc = 0x1F05B8u;
    // 0x1f05b8: 0x70002628
    ctx->pc = 0x1f05b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f05bc: 0xc069b30
    ctx->pc = 0x1F05BCu;
    SET_GPR_U32(ctx, 31, 0x1F05C4u);
    ctx->pc = 0x1F05C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A6CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightSwitch_0x1a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05C4u; }
        else if (ctx->pc != 0x1F05C4u) { ctx->pc = 0x1F05C4u; }
    }
    if (ctx->pc != 0x1F05C4u) { return; }
    ctx->pc = 0x1F05C4u;
    // 0x1f05c4: 0xafa00070
    ctx->pc = 0x1f05c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1f05c8: 0xc680001c
    ctx->pc = 0x1f05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f05cc: 0x3c023f4c
    ctx->pc = 0x1f05ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
    // 0x1f05d0: 0x3442cccd
    ctx->pc = 0x1f05d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1f05d4: 0x44820800
    ctx->pc = 0x1f05d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1f05d8: 0x27b10074
    ctx->pc = 0x1f05d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 116));
    // 0x1f05dc: 0x27b20078
    ctx->pc = 0x1f05dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1f05e0: 0x46000802
    ctx->pc = 0x1f05e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f05e4: 0x27b3007c
    ctx->pc = 0x1f05e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 124));
    // 0x1f05e8: 0x70002628
    ctx->pc = 0x1f05e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f05ec: 0x27a50070
    ctx->pc = 0x1f05ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f05f0: 0xe6200000
    ctx->pc = 0x1f05f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f05f4: 0xc6800020
    ctx->pc = 0x1f05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f05f8: 0x46000802
    ctx->pc = 0x1f05f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f05fc: 0xe6400000
    ctx->pc = 0x1f05fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f0600: 0xc6800024
    ctx->pc = 0x1f0600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0604: 0x46000802
    ctx->pc = 0x1f0604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0608: 0xc069b08
    ctx->pc = 0x1F0608u;
    SET_GPR_U32(ctx, 31, 0x1F0610u);
    ctx->pc = 0x1F060Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x1A6C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightDiffuse_0x1a6c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0610u; }
        else if (ctx->pc != 0x1F0610u) { ctx->pc = 0x1F0610u; }
    }
    if (ctx->pc != 0x1F0610u) { return; }
    ctx->pc = 0x1F0610u;
    // 0x1f0610: 0xc6810028
    ctx->pc = 0x1f0610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0614: 0x3c024040
    ctx->pc = 0x1f0614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x1f0618: 0x44820000
    ctx->pc = 0x1f0618u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1f061c: 0x70002628
    ctx->pc = 0x1f061cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0620: 0x27a50070
    ctx->pc = 0x1f0620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f0624: 0xe6210000
    ctx->pc = 0x1f0624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f0628: 0xc681002c
    ctx->pc = 0x1f0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f062c: 0xe6410000
    ctx->pc = 0x1f062cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f0630: 0xc6810030
    ctx->pc = 0x1f0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0634: 0xe6610000
    ctx->pc = 0x1f0634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f0638: 0xc6820028
    ctx->pc = 0x1f0638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f063c: 0xc681002c
    ctx->pc = 0x1f063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0640: 0x46011040
    ctx->pc = 0x1f0640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f0644: 0x46011040
    ctx->pc = 0x1f0644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f0648: 0x46000803
    ctx->pc = 0x1f0648u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1f064c: 0x0
    ctx->pc = 0x1f064cu;
    // NOP
    // 0x1f0650: 0x0
    ctx->pc = 0x1f0650u;
    // NOP
    // 0x1f0654: 0xc069b1c
    ctx->pc = 0x1F0654u;
    SET_GPR_U32(ctx, 31, 0x1F065Cu);
    ctx->pc = 0x1F0658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->pc = 0x1A6C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightSpecular_0x1a6c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F065Cu; }
        else if (ctx->pc != 0x1F065Cu) { ctx->pc = 0x1F065Cu; }
    }
    if (ctx->pc != 0x1F065Cu) { return; }
    ctx->pc = 0x1F065Cu;
    // 0x1f065c: 0xafa00070
    ctx->pc = 0x1f065cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1f0660: 0xc6800034
    ctx->pc = 0x1f0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0664: 0x3c023f4c
    ctx->pc = 0x1f0664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
    // 0x1f0668: 0x3442cccd
    ctx->pc = 0x1f0668u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1f066c: 0x44820800
    ctx->pc = 0x1f066cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1f0670: 0x27a40070
    ctx->pc = 0x1f0670u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f0674: 0x46000802
    ctx->pc = 0x1f0674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0678: 0xe6200000
    ctx->pc = 0x1f0678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f067c: 0xc6800038
    ctx->pc = 0x1f067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0680: 0x46000802
    ctx->pc = 0x1f0680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0684: 0xe6400000
    ctx->pc = 0x1f0684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f0688: 0xc680003c
    ctx->pc = 0x1f0688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f068c: 0x46000802
    ctx->pc = 0x1f068cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0690: 0xc069ae4
    ctx->pc = 0x1F0690u;
    SET_GPR_U32(ctx, 31, 0x1F0698u);
    ctx->pc = 0x1F0694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x1A6B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightGlobalAmbient_0x1a6b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0698u; }
        else if (ctx->pc != 0x1F0698u) { ctx->pc = 0x1F0698u; }
    }
    if (ctx->pc != 0x1F0698u) { return; }
    ctx->pc = 0x1F0698u;
    // 0x1f0698: 0xc68d0008
    ctx->pc = 0x1f0698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f069c: 0xc68e000c
    ctx->pc = 0x1f069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f06a0: 0xc06aa94
    ctx->pc = 0x1F06A0u;
    SET_GPR_U32(ctx, 31, 0x1F06A8u);
    ctx->pc = 0x1F06A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AAA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColorBase_0x1aaa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06A8u; }
        else if (ctx->pc != 0x1F06A8u) { ctx->pc = 0x1F06A8u; }
    }
    if (ctx->pc != 0x1F06A8u) { return; }
    ctx->pc = 0x1F06A8u;
    // 0x1f06a8: 0xc68d0014
    ctx->pc = 0x1f06a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f06ac: 0xc68e0018
    ctx->pc = 0x1f06acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f06b0: 0xc06aa9c
    ctx->pc = 0x1F06B0u;
    SET_GPR_U32(ctx, 31, 0x1F06B8u);
    ctx->pc = 0x1F06B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AAA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColorOffset_0x1aaa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06B8u; }
        else if (ctx->pc != 0x1F06B8u) { ctx->pc = 0x1F06B8u; }
    }
    if (ctx->pc != 0x1F06B8u) { return; }
    ctx->pc = 0x1F06B8u;
label_1f06b8:
    // 0x1f06b8: 0x12000055
    ctx->pc = 0x1F06B8u;
    {
        const bool branch_taken_0x1f06b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F06BCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f06b8) {
            ctx->pc = 0x1F0810u;
            goto label_1f0810;
        }
    }
    ctx->pc = 0x1F06C0u;
label_1f06c0:
    // 0x1f06c0: 0x8e050004
    ctx->pc = 0x1f06c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f06c4: 0x26320001
    ctx->pc = 0x1f06c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f06c8: 0xc069b30
    ctx->pc = 0x1F06C8u;
    SET_GPR_U32(ctx, 31, 0x1F06D0u);
    ctx->pc = 0x1F06CCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A6CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightSwitch_0x1a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06D0u; }
        else if (ctx->pc != 0x1F06D0u) { ctx->pc = 0x1F06D0u; }
    }
    if (ctx->pc != 0x1F06D0u) { return; }
    ctx->pc = 0x1F06D0u;
    // 0x1f06d0: 0x8e020004
    ctx->pc = 0x1f06d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f06d4: 0x5040004b
    ctx->pc = 0x1F06D4u;
    {
        const bool branch_taken_0x1f06d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f06d4) {
            ctx->pc = 0x1F06D8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1F0804u;
            goto label_1f0804;
        }
    }
    ctx->pc = 0x1F06DCu;
    // 0x1f06dc: 0x8e040020
    ctx->pc = 0x1f06dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f06e0: 0x8e050024
    ctx->pc = 0x1f06e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f06e4: 0x27a60080
    ctx->pc = 0x1f06e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f06e8: 0xc07c210
    ctx->pc = 0x1F06E8u;
    SET_GPR_U32(ctx, 31, 0x1F06F0u);
    ctx->pc = 0x1F06ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1F0840u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetShadingLightVector__FiiP11tagNLpoint3P11tagNLpoint3_0x1f0840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06F0u; }
        else if (ctx->pc != 0x1F06F0u) { ctx->pc = 0x1F06F0u; }
    }
    if (ctx->pc != 0x1F06F0u) { return; }
    ctx->pc = 0x1F06F0u;
    // 0x1f06f0: 0x8e050000
    ctx->pc = 0x1f06f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f06f4: 0xc069ad8
    ctx->pc = 0x1F06F4u;
    SET_GPR_U32(ctx, 31, 0x1F06FCu);
    ctx->pc = 0x1F06F8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A6B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightType_0x1a6b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06FCu; }
        else if (ctx->pc != 0x1F06FCu) { ctx->pc = 0x1F06FCu; }
    }
    if (ctx->pc != 0x1F06FCu) { return; }
    ctx->pc = 0x1F06FCu;
    // 0x1f06fc: 0xc7ac0080
    ctx->pc = 0x1f06fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0700: 0xc7ad0084
    ctx->pc = 0x1f0700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0704: 0xc7ae0088
    ctx->pc = 0x1f0704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f0708: 0xc069a70
    ctx->pc = 0x1F0708u;
    SET_GPR_U32(ctx, 31, 0x1F0710u);
    ctx->pc = 0x1F070Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A69C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightDir_0x1a69c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0710u; }
        else if (ctx->pc != 0x1F0710u) { ctx->pc = 0x1F0710u; }
    }
    if (ctx->pc != 0x1F0710u) { return; }
    ctx->pc = 0x1F0710u;
    // 0x1f0710: 0xafa00070
    ctx->pc = 0x1f0710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1f0714: 0xc6000008
    ctx->pc = 0x1f0714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0718: 0x3c023f4c
    ctx->pc = 0x1f0718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
    // 0x1f071c: 0x3442cccd
    ctx->pc = 0x1f071cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1f0720: 0x44820800
    ctx->pc = 0x1f0720u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1f0724: 0x27b30074
    ctx->pc = 0x1f0724u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 116));
    // 0x1f0728: 0x27b40078
    ctx->pc = 0x1f0728u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1f072c: 0x46000802
    ctx->pc = 0x1f072cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0730: 0x27b5007c
    ctx->pc = 0x1f0730u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 124));
    // 0x1f0734: 0x72402628
    ctx->pc = 0x1f0734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1f0738: 0x27a50070
    ctx->pc = 0x1f0738u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f073c: 0xe6600000
    ctx->pc = 0x1f073cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f0740: 0xc600000c
    ctx->pc = 0x1f0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0744: 0x46000802
    ctx->pc = 0x1f0744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0748: 0xe6800000
    ctx->pc = 0x1f0748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1f074c: 0xc6000010
    ctx->pc = 0x1f074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0750: 0x46000802
    ctx->pc = 0x1f0750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0754: 0xc069b08
    ctx->pc = 0x1F0754u;
    SET_GPR_U32(ctx, 31, 0x1F075Cu);
    ctx->pc = 0x1F0758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->pc = 0x1A6C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightDiffuse_0x1a6c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F075Cu; }
        else if (ctx->pc != 0x1F075Cu) { ctx->pc = 0x1F075Cu; }
    }
    if (ctx->pc != 0x1F075Cu) { return; }
    ctx->pc = 0x1F075Cu;
    // 0x1f075c: 0xc6010014
    ctx->pc = 0x1f075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0760: 0x3c024040
    ctx->pc = 0x1f0760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x1f0764: 0x44820000
    ctx->pc = 0x1f0764u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1f0768: 0x72402628
    ctx->pc = 0x1f0768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1f076c: 0x27a50070
    ctx->pc = 0x1f076cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f0770: 0xe6610000
    ctx->pc = 0x1f0770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1f0774: 0xc6010018
    ctx->pc = 0x1f0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0778: 0xe6810000
    ctx->pc = 0x1f0778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1f077c: 0xc601001c
    ctx->pc = 0x1f077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0780: 0xe6a10000
    ctx->pc = 0x1f0780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1f0784: 0xc6020014
    ctx->pc = 0x1f0784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0788: 0xc6010018
    ctx->pc = 0x1f0788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f078c: 0x46011040
    ctx->pc = 0x1f078cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f0790: 0x46011040
    ctx->pc = 0x1f0790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f0794: 0x46000803
    ctx->pc = 0x1f0794u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1f0798: 0x0
    ctx->pc = 0x1f0798u;
    // NOP
    // 0x1f079c: 0x0
    ctx->pc = 0x1f079cu;
    // NOP
    // 0x1f07a0: 0xc069b1c
    ctx->pc = 0x1F07A0u;
    SET_GPR_U32(ctx, 31, 0x1F07A8u);
    ctx->pc = 0x1F07A4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->pc = 0x1A6C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightSpecular_0x1a6c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07A8u; }
        else if (ctx->pc != 0x1F07A8u) { ctx->pc = 0x1F07A8u; }
    }
    if (ctx->pc != 0x1F07A8u) { return; }
    ctx->pc = 0x1F07A8u;
    // 0x1f07a8: 0x8e030000
    ctx->pc = 0x1f07a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f07ac: 0x24020002
    ctx->pc = 0x1f07acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f07b0: 0x10620013
    ctx->pc = 0x1F07B0u;
    {
        const bool branch_taken_0x1f07b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f07b0) {
            ctx->pc = 0x1F0800u;
            goto label_1f0800;
        }
    }
    ctx->pc = 0x1F07B8u;
    // 0x1f07b8: 0xc60c0028
    ctx->pc = 0x1f07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f07bc: 0xc60d002c
    ctx->pc = 0x1f07bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f07c0: 0xc60e0030
    ctx->pc = 0x1f07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f07c4: 0xc069a8c
    ctx->pc = 0x1F07C4u;
    SET_GPR_U32(ctx, 31, 0x1F07CCu);
    ctx->pc = 0x1F07C8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A6A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightAttenuation_0x1a6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07CCu; }
        else if (ctx->pc != 0x1F07CCu) { ctx->pc = 0x1F07CCu; }
    }
    if (ctx->pc != 0x1F07CCu) { return; }
    ctx->pc = 0x1F07CCu;
    // 0x1f07cc: 0xc6000034
    ctx->pc = 0x1f07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f07d0: 0x72402628
    ctx->pc = 0x1f07d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1f07d4: 0xc069a98
    ctx->pc = 0x1F07D4u;
    SET_GPR_U32(ctx, 31, 0x1F07DCu);
    ctx->pc = 0x1F07D8u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x1A6A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightEffectiveRadius_0x1a6a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07DCu; }
        else if (ctx->pc != 0x1F07DCu) { ctx->pc = 0x1F07DCu; }
    }
    if (ctx->pc != 0x1F07DCu) { return; }
    ctx->pc = 0x1F07DCu;
    // 0x1f07dc: 0x8e050038
    ctx->pc = 0x1f07dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1f07e0: 0xc069ac0
    ctx->pc = 0x1F07E0u;
    SET_GPR_U32(ctx, 31, 0x1F07E8u);
    ctx->pc = 0x1F07E4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A6B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightCutoffAng_0x1a6b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07E8u; }
        else if (ctx->pc != 0x1F07E8u) { ctx->pc = 0x1F07E8u; }
    }
    if (ctx->pc != 0x1F07E8u) { return; }
    ctx->pc = 0x1F07E8u;
    // 0x1f07e8: 0xc60c003c
    ctx->pc = 0x1f07e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f07ec: 0xc60d0040
    ctx->pc = 0x1f07ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f07f0: 0xc60e0044
    ctx->pc = 0x1f07f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f07f4: 0xc069a80
    ctx->pc = 0x1F07F4u;
    SET_GPR_U32(ctx, 31, 0x1F07FCu);
    ctx->pc = 0x1F07F8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A6A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightPos_0x1a6a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F07FCu; }
        else if (ctx->pc != 0x1F07FCu) { ctx->pc = 0x1F07FCu; }
    }
    if (ctx->pc != 0x1F07FCu) { return; }
    ctx->pc = 0x1F07FCu;
    // 0x1f07fc: 0x0
    ctx->pc = 0x1f07fcu;
    // NOP
label_1f0800:
    // 0x1f0800: 0x26310001
    ctx->pc = 0x1f0800u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1f0804:
    // 0x1f0804: 0x2a220003
    ctx->pc = 0x1f0804u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x1f0808: 0x1440ffad
    ctx->pc = 0x1F0808u;
    {
        const bool branch_taken_0x1f0808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F080Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 72));
        if (branch_taken_0x1f0808) {
            ctx->pc = 0x1F06C0u;
            goto label_1f06c0;
        }
    }
    ctx->pc = 0x1F0810u;
label_1f0810:
    // 0x1f0810: 0xc069b48
    ctx->pc = 0x1F0810u;
    SET_GPR_U32(ctx, 31, 0x1F0818u);
    ctx->pc = 0x1A6D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightViewTrans_0x1a6d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0818u; }
        else if (ctx->pc != 0x1F0818u) { ctx->pc = 0x1F0818u; }
    }
    if (ctx->pc != 0x1F0818u) { return; }
    ctx->pc = 0x1F0818u;
    // 0x1f0818: 0x7bbf0060
    ctx->pc = 0x1f0818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f081c: 0x7bb50050
    ctx->pc = 0x1f081cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0820: 0x7bb40040
    ctx->pc = 0x1f0820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0824: 0x7bb30030
    ctx->pc = 0x1f0824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0828: 0x7bb20020
    ctx->pc = 0x1f0828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f082c: 0x7bb10010
    ctx->pc = 0x1f082cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0830: 0x7bb00000
    ctx->pc = 0x1f0830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0834: 0x3e00008
    ctx->pc = 0x1F0834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F06B8u: goto label_1f06b8;
            case 0x1F06C0u: goto label_1f06c0;
            case 0x1F0800u: goto label_1f0800;
            case 0x1F0804u: goto label_1f0804;
            case 0x1F0810u: goto label_1f0810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F083Cu;
}
