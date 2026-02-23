#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Ent_ShotRay__Fiff
// Address: 0x1d3b50 - 0x1d3cf0
void Ent_ShotRay__Fiff_0x1d3b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Ent_ShotRay__Fiff");


    ctx->pc = 0x1d3b50u;

    // 0x1d3b50: 0x41040
    ctx->pc = 0x1d3b50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d3b54: 0x441021
    ctx->pc = 0x1d3b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3b58: 0x21080
    ctx->pc = 0x1d3b58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3b5c: 0x441021
    ctx->pc = 0x1d3b5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3b60: 0x27bdff70
    ctx->pc = 0x1d3b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d3b64: 0x218c0
    ctx->pc = 0x1d3b64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3b68: 0x7fbf0010
    ctx->pc = 0x1d3b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d3b6c: 0x3c020050
    ctx->pc = 0x1d3b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3b70: 0x7fb00000
    ctx->pc = 0x1d3b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3b74: 0x24420200
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d3b78: 0x438021
    ctx->pc = 0x1d3b78u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3b7c: 0x4bede37d
    ctx->pc = 0x1d3b7cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d3b80: 0x4bedeb7d
    ctx->pc = 0x1d3b80u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d3b84: 0x4bedf37d
    ctx->pc = 0x1d3b84u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d3b88: 0x4bedfb7d
    ctx->pc = 0x1d3b88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d3b8c: 0xc7808c50
    ctx->pc = 0x1d3b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3b90: 0xe7ac0028
    ctx->pc = 0x1d3b90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d3b94: 0xe7ad002c
    ctx->pc = 0x1d3b94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1d3b98: 0x26050054
    ctx->pc = 0x1d3b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 84));
    // 0x1d3b9c: 0x27a40028
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 40));
    // 0x1d3ba0: 0x46000007
    ctx->pc = 0x1d3ba0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3ba4: 0xc06be8f
    ctx->pc = 0x1D3BA4u;
    SET_GPR_U32(ctx, 31, 0x1D3BACu);
    ctx->pc = 0x1D3BA8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x1AFA3Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFA3C_0x1afa3c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BACu; }
        else if (ctx->pc != 0x1D3BACu) { ctx->pc = 0x1D3BACu; }
    }
    if (ctx->pc != 0x1D3BACu) { return; }
    ctx->pc = 0x1D3BACu;
    // 0x1d3bac: 0xc60c0054
    ctx->pc = 0x1d3bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d3bb0: 0xc60d0058
    ctx->pc = 0x1d3bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d3bb4: 0xc60e005c
    ctx->pc = 0x1d3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d3bb8: 0x27a40088
    ctx->pc = 0x1d3bb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 136));
    // 0x1d3bbc: 0xc072348
    ctx->pc = 0x1D3BBCu;
    SET_GPR_U32(ctx, 31, 0x1D3BC4u);
    ctx->pc = 0x1D3BC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 140));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BC4u; }
        else if (ctx->pc != 0x1D3BC4u) { ctx->pc = 0x1D3BC4u; }
    }
    if (ctx->pc != 0x1D3BC4u) { return; }
    ctx->pc = 0x1D3BC4u;
    // 0x1d3bc4: 0x8f848c48
    ctx->pc = 0x1d3bc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1d3bc8: 0x8c830004
    ctx->pc = 0x1d3bc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d3bcc: 0x31040
    ctx->pc = 0x1d3bccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3bd0: 0x431021
    ctx->pc = 0x1d3bd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3bd4: 0x21080
    ctx->pc = 0x1d3bd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3bd8: 0x431021
    ctx->pc = 0x1d3bd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3bdc: 0x21100
    ctx->pc = 0x1d3bdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3be0: 0x821021
    ctx->pc = 0x1d3be0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3be4: 0xc06c038
    ctx->pc = 0x1D3BE4u;
    SET_GPR_U32(ctx, 31, 0x1D3BECu);
    ctx->pc = 0x1D3BE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BECu; }
        else if (ctx->pc != 0x1D3BECu) { ctx->pc = 0x1D3BECu; }
    }
    if (ctx->pc != 0x1D3BECu) { return; }
    ctx->pc = 0x1D3BECu;
    // 0x1d3bec: 0xc6000048
    ctx->pc = 0x1d3becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3bf0: 0x27a40038
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d3bf4: 0x27a50048
    ctx->pc = 0x1d3bf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1d3bf8: 0xe7a00038
    ctx->pc = 0x1d3bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d3bfc: 0xc600004c
    ctx->pc = 0x1d3bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c00: 0xe7a0003c
    ctx->pc = 0x1d3c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1d3c04: 0xc6000050
    ctx->pc = 0x1d3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c08: 0xc06bf00
    ctx->pc = 0x1D3C08u;
    SET_GPR_U32(ctx, 31, 0x1D3C10u);
    ctx->pc = 0x1D3C0Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C10u; }
        else if (ctx->pc != 0x1D3C10u) { ctx->pc = 0x1D3C10u; }
    }
    if (ctx->pc != 0x1D3C10u) { return; }
    ctx->pc = 0x1D3C10u;
    // 0x1d3c10: 0xc7a00048
    ctx->pc = 0x1d3c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c14: 0x27a40058
    ctx->pc = 0x1d3c14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 88));
    // 0x1d3c18: 0xe6000018
    ctx->pc = 0x1d3c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d3c1c: 0xc7a0004c
    ctx->pc = 0x1d3c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c20: 0xe600001c
    ctx->pc = 0x1d3c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d3c24: 0xc7a00050
    ctx->pc = 0x1d3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c28: 0xe6000020
    ctx->pc = 0x1d3c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d3c2c: 0xafa00058
    ctx->pc = 0x1d3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1d3c30: 0xafa0005c
    ctx->pc = 0x1d3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x1d3c34: 0xc06c1ca
    ctx->pc = 0x1D3C34u;
    SET_GPR_U32(ctx, 31, 0x1D3C3Cu);
    ctx->pc = 0x1D3C38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->pc = 0x1B0728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0728_0x1b0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C3Cu; }
        else if (ctx->pc != 0x1D3C3Cu) { ctx->pc = 0x1D3C3Cu; }
    }
    if (ctx->pc != 0x1D3C3Cu) { return; }
    ctx->pc = 0x1D3C3Cu;
    // 0x1d3c3c: 0xc6000054
    ctx->pc = 0x1d3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c40: 0x27a40068
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d3c44: 0x27a50078
    ctx->pc = 0x1d3c44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1d3c48: 0xe7a00068
    ctx->pc = 0x1d3c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1d3c4c: 0xc6000058
    ctx->pc = 0x1d3c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c50: 0xe7a0006c
    ctx->pc = 0x1d3c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1d3c54: 0xc600005c
    ctx->pc = 0x1d3c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c58: 0xc06bf00
    ctx->pc = 0x1D3C58u;
    SET_GPR_U32(ctx, 31, 0x1D3C60u);
    ctx->pc = 0x1D3C5Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C60u; }
        else if (ctx->pc != 0x1D3C60u) { ctx->pc = 0x1D3C60u; }
    }
    if (ctx->pc != 0x1D3C60u) { return; }
    ctx->pc = 0x1D3C60u;
    // 0x1d3c60: 0xc7a00078
    ctx->pc = 0x1d3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c64: 0xe6000024
    ctx->pc = 0x1d3c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d3c68: 0xc7a0007c
    ctx->pc = 0x1d3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c6c: 0xe6000028
    ctx->pc = 0x1d3c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1d3c70: 0xc7a00080
    ctx->pc = 0x1d3c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3c74: 0xe600002c
    ctx->pc = 0x1d3c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d3c78: 0x8fa20088
    ctx->pc = 0x1d3c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d3c7c: 0x21023
    ctx->pc = 0x1d3c7cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d3c80: 0xae020030
    ctx->pc = 0x1d3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d3c84: 0x8fa2008c
    ctx->pc = 0x1d3c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1d3c88: 0x21023
    ctx->pc = 0x1d3c88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d3c8c: 0xae020034
    ctx->pc = 0x1d3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1d3c90: 0x8fa20088
    ctx->pc = 0x1d3c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d3c94: 0xc06c24e
    ctx->pc = 0x1D3C94u;
    SET_GPR_U32(ctx, 31, 0x1D3C9Cu);
    ctx->pc = 0x1D3C98u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C9Cu; }
        else if (ctx->pc != 0x1D3C9Cu) { ctx->pc = 0x1D3C9Cu; }
    }
    if (ctx->pc != 0x1D3C9Cu) { return; }
    ctx->pc = 0x1D3C9Cu;
    // 0x1d3c9c: 0xe6000038
    ctx->pc = 0x1d3c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1d3ca0: 0x8fa20088
    ctx->pc = 0x1d3ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d3ca4: 0xc06c26d
    ctx->pc = 0x1D3CA4u;
    SET_GPR_U32(ctx, 31, 0x1D3CACu);
    ctx->pc = 0x1D3CA8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CACu; }
        else if (ctx->pc != 0x1D3CACu) { ctx->pc = 0x1D3CACu; }
    }
    if (ctx->pc != 0x1D3CACu) { return; }
    ctx->pc = 0x1D3CACu;
    // 0x1d3cac: 0xe600003c
    ctx->pc = 0x1d3cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1d3cb0: 0x8fa2008c
    ctx->pc = 0x1d3cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1d3cb4: 0xc06c24e
    ctx->pc = 0x1D3CB4u;
    SET_GPR_U32(ctx, 31, 0x1D3CBCu);
    ctx->pc = 0x1D3CB8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CBCu; }
        else if (ctx->pc != 0x1D3CBCu) { ctx->pc = 0x1D3CBCu; }
    }
    if (ctx->pc != 0x1D3CBCu) { return; }
    ctx->pc = 0x1D3CBCu;
    // 0x1d3cbc: 0xe6000040
    ctx->pc = 0x1d3cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1d3cc0: 0x8fa2008c
    ctx->pc = 0x1d3cc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1d3cc4: 0xc06c26d
    ctx->pc = 0x1D3CC4u;
    SET_GPR_U32(ctx, 31, 0x1D3CCCu);
    ctx->pc = 0x1D3CC8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CCCu; }
        else if (ctx->pc != 0x1D3CCCu) { ctx->pc = 0x1D3CCCu; }
    }
    if (ctx->pc != 0x1D3CCCu) { return; }
    ctx->pc = 0x1D3CCCu;
    // 0x1d3ccc: 0xe6000044
    ctx->pc = 0x1d3cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1d3cd0: 0x4bff6b7e
    ctx->pc = 0x1d3cd0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d3cd4: 0x4bfe6b7e
    ctx->pc = 0x1d3cd4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d3cd8: 0x4bfd6b7e
    ctx->pc = 0x1d3cd8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d3cdc: 0x4bfc6b7e
    ctx->pc = 0x1d3cdcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d3ce0: 0x7bbf0010
    ctx->pc = 0x1d3ce0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3ce4: 0x7bb00000
    ctx->pc = 0x1d3ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3ce8: 0x3e00008
    ctx->pc = 0x1D3CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3CF0u;
}
