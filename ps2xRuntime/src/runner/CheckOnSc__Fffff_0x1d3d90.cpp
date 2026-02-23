#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CheckOnSc__Fffff
// Address: 0x1d3d90 - 0x1d4234
void CheckOnSc__Fffff_0x1d3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CheckOnSc__Fffff");


    ctx->pc = 0x1d3d90u;

    // 0x1d3d90: 0x27bdff00
    ctx->pc = 0x1d3d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1d3d94: 0x7fbf00a0
    ctx->pc = 0x1d3d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1d3d98: 0x7fbe0090
    ctx->pc = 0x1d3d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d3d9c: 0x7fb70080
    ctx->pc = 0x1d3d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d3da0: 0x7fb60070
    ctx->pc = 0x1d3da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d3da4: 0x7fb50060
    ctx->pc = 0x1d3da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d3da8: 0x7fb40050
    ctx->pc = 0x1d3da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d3dac: 0x7fb30040
    ctx->pc = 0x1d3dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d3db0: 0x7fb20030
    ctx->pc = 0x1d3db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d3db4: 0x7fb10020
    ctx->pc = 0x1d3db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d3db8: 0x7fb00010
    ctx->pc = 0x1d3db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3dbc: 0xe7b50004
    ctx->pc = 0x1d3dbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d3dc0: 0xe7b40000
    ctx->pc = 0x1d3dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d3dc4: 0xc7808c50
    ctx->pc = 0x1d3dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3dc8: 0x3c0243a0
    ctx->pc = 0x1d3dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17312 << 16));
    // 0x1d3dcc: 0xe7ac00c0
    ctx->pc = 0x1d3dccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1d3dd0: 0x44820800
    ctx->pc = 0x1d3dd0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1d3dd4: 0xe7ad00c4
    ctx->pc = 0x1d3dd4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1d3dd8: 0x46007d46
    ctx->pc = 0x1d3dd8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x1d3ddc: 0x46000b03
    ctx->pc = 0x1d3ddcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1d3de0: 0xe7ae00c8
    ctx->pc = 0x1d3de0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d3de4: 0x70008628
    ctx->pc = 0x1d3de4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3de8: 0x70008e28
    ctx->pc = 0x1d3de8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3dec: 0x70009628
    ctx->pc = 0x1d3decu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3df0: 0x70009e28
    ctx->pc = 0x1d3df0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3df4: 0x7000be28
    ctx->pc = 0x1d3df4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3df8: 0x7000b628
    ctx->pc = 0x1d3df8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3dfc: 0x7000a628
    ctx->pc = 0x1d3dfcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3e00: 0x0
    ctx->pc = 0x1d3e00u;
    // NOP
    // 0x1d3e04: 0x0
    ctx->pc = 0x1d3e04u;
    // NOP
    // 0x1d3e08: 0xc069e20
    ctx->pc = 0x1D3E08u;
    SET_GPR_U32(ctx, 31, 0x1D3E10u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E10u; }
        else if (ctx->pc != 0x1D3E10u) { ctx->pc = 0x1D3E10u; }
    }
    if (ctx->pc != 0x1D3E10u) { return; }
    ctx->pc = 0x1D3E10u;
    // 0x1d3e10: 0xc7808c50
    ctx->pc = 0x1d3e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3e14: 0x7040f628
    ctx->pc = 0x1d3e14u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d3e18: 0x3c024360
    ctx->pc = 0x1d3e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17248 << 16));
    // 0x1d3e1c: 0x44820800
    ctx->pc = 0x1d3e1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1d3e20: 0x0
    ctx->pc = 0x1d3e20u;
    // NOP
    // 0x1d3e24: 0x46000b03
    ctx->pc = 0x1d3e24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1d3e28: 0x0
    ctx->pc = 0x1d3e28u;
    // NOP
    // 0x1d3e2c: 0x0
    ctx->pc = 0x1d3e2cu;
    // NOP
    // 0x1d3e30: 0xc069e20
    ctx->pc = 0x1D3E30u;
    SET_GPR_U32(ctx, 31, 0x1D3E38u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E38u; }
        else if (ctx->pc != 0x1D3E38u) { ctx->pc = 0x1D3E38u; }
    }
    if (ctx->pc != 0x1D3E38u) { return; }
    ctx->pc = 0x1D3E38u;
    // 0x1d3e38: 0xafa200bc
    ctx->pc = 0x1d3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1d3e3c: 0x4bede37d
    ctx->pc = 0x1d3e3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d3e40: 0x4bedeb7d
    ctx->pc = 0x1d3e40u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d3e44: 0x4bedf37d
    ctx->pc = 0x1d3e44u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d3e48: 0x4bedfb7d
    ctx->pc = 0x1d3e48u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d3e4c: 0x8f848c48
    ctx->pc = 0x1d3e4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1d3e50: 0x8c830004
    ctx->pc = 0x1d3e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d3e54: 0x31040
    ctx->pc = 0x1d3e54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3e58: 0x431021
    ctx->pc = 0x1d3e58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3e5c: 0x21080
    ctx->pc = 0x1d3e5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3e60: 0x431021
    ctx->pc = 0x1d3e60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3e64: 0x21100
    ctx->pc = 0x1d3e64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3e68: 0x821021
    ctx->pc = 0x1d3e68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3e6c: 0xc06c038
    ctx->pc = 0x1D3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E74u);
    ctx->pc = 0x1D3E70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E74u; }
        else if (ctx->pc != 0x1D3E74u) { ctx->pc = 0x1D3E74u; }
    }
    if (ctx->pc != 0x1D3E74u) { return; }
    ctx->pc = 0x1D3E74u;
    // 0x1d3e74: 0x27a400c0
    ctx->pc = 0x1d3e74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d3e78: 0xc06bf00
    ctx->pc = 0x1D3E78u;
    SET_GPR_U32(ctx, 31, 0x1D3E80u);
    ctx->pc = 0x1D3E7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E80u; }
        else if (ctx->pc != 0x1D3E80u) { ctx->pc = 0x1D3E80u; }
    }
    if (ctx->pc != 0x1D3E80u) { return; }
    ctx->pc = 0x1D3E80u;
    // 0x1d3e80: 0xc06c20d
    ctx->pc = 0x1D3E80u;
    SET_GPR_U32(ctx, 31, 0x1D3E88u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E88u; }
        else if (ctx->pc != 0x1D3E88u) { ctx->pc = 0x1D3E88u; }
    }
    if (ctx->pc != 0x1D3E88u) { return; }
    ctx->pc = 0x1D3E88u;
    // 0x1d3e88: 0xc06c0fb
    ctx->pc = 0x1D3E88u;
    SET_GPR_U32(ctx, 31, 0x1D3E90u);
    ctx->pc = 0x1D3E8Cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E90u; }
        else if (ctx->pc != 0x1D3E90u) { ctx->pc = 0x1D3E90u; }
    }
    if (ctx->pc != 0x1D3E90u) { return; }
    ctx->pc = 0x1D3E90u;
    // 0x1d3e90: 0x27b500d8
    ctx->pc = 0x1d3e90u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 216));
    // 0x1d3e94: 0x27a200d4
    ctx->pc = 0x1d3e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
    // 0x1d3e98: 0xc44d0000
    ctx->pc = 0x1d3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d3e9c: 0xc6ae0000
    ctx->pc = 0x1d3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d3ea0: 0xc06c202
    ctx->pc = 0x1D3EA0u;
    SET_GPR_U32(ctx, 31, 0x1D3EA8u);
    ctx->pc = 0x1D3EA4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3EA8u; }
        else if (ctx->pc != 0x1D3EA8u) { ctx->pc = 0x1D3EA8u; }
    }
    if (ctx->pc != 0x1D3EA8u) { return; }
    ctx->pc = 0x1D3EA8u;
    // 0x1d3ea8: 0xc06bfd2
    ctx->pc = 0x1D3EA8u;
    SET_GPR_U32(ctx, 31, 0x1D3EB0u);
    ctx->pc = 0x1D3EACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3EB0u; }
        else if (ctx->pc != 0x1D3EB0u) { ctx->pc = 0x1D3EB0u; }
    }
    if (ctx->pc != 0x1D3EB0u) { return; }
    ctx->pc = 0x1D3EB0u;
    // 0x1d3eb0: 0xc7a100e0
    ctx->pc = 0x1d3eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3eb4: 0x4600ad07
    ctx->pc = 0x1d3eb4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
    // 0x1d3eb8: 0x46140836
    ctx->pc = 0x1d3eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3ebc: 0x0
    ctx->pc = 0x1d3ebcu;
    // NOP
    // 0x1d3ec0: 0x45000003
    ctx->pc = 0x1D3EC0u;
    {
        const bool branch_taken_0x1d3ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3ec0) {
            ctx->pc = 0x1D3ED0u;
            goto label_1d3ed0;
        }
    }
    ctx->pc = 0x1D3EC8u;
    // 0x1d3ec8: 0x10000008
    ctx->pc = 0x1D3EC8u;
    {
        const bool branch_taken_0x1d3ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3ECCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d3ec8) {
            ctx->pc = 0x1D3EECu;
            goto label_1d3eec;
        }
    }
    ctx->pc = 0x1D3ED0u;
label_1d3ed0:
    // 0x1d3ed0: 0x44800000
    ctx->pc = 0x1d3ed0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d3ed4: 0x0
    ctx->pc = 0x1d3ed4u;
    // NOP
    // 0x1d3ed8: 0x46000836
    ctx->pc = 0x1d3ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3edc: 0x0
    ctx->pc = 0x1d3edcu;
    // NOP
    // 0x1d3ee0: 0x45010003
    ctx->pc = 0x1D3EE0u;
    {
        const bool branch_taken_0x1d3ee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3EE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 232));
        if (branch_taken_0x1d3ee0) {
            ctx->pc = 0x1D3EF0u;
            goto label_1d3ef0;
        }
    }
    ctx->pc = 0x1D3EE8u;
    // 0x1d3ee8: 0x26100001
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d3eec:
    // 0x1d3eec: 0x27a200e8
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 232));
label_1d3ef0:
    // 0x1d3ef0: 0xc4410000
    ctx->pc = 0x1d3ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3ef4: 0x46150834
    ctx->pc = 0x1d3ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3ef8: 0x0
    ctx->pc = 0x1d3ef8u;
    // NOP
    // 0x1d3efc: 0x45010003
    ctx->pc = 0x1D3EFCu;
    {
        const bool branch_taken_0x1d3efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3efc) {
            ctx->pc = 0x1D3F0Cu;
            goto label_1d3f0c;
        }
    }
    ctx->pc = 0x1D3F04u;
    // 0x1d3f04: 0x10000008
    ctx->pc = 0x1D3F04u;
    {
        const bool branch_taken_0x1d3f04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3F08u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d3f04) {
            ctx->pc = 0x1D3F28u;
            goto label_1d3f28;
        }
    }
    ctx->pc = 0x1D3F0Cu;
label_1d3f0c:
    // 0x1d3f0c: 0x44800000
    ctx->pc = 0x1d3f0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d3f10: 0x0
    ctx->pc = 0x1d3f10u;
    // NOP
    // 0x1d3f14: 0x46000836
    ctx->pc = 0x1d3f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3f18: 0x0
    ctx->pc = 0x1d3f18u;
    // NOP
    // 0x1d3f1c: 0x45010002
    ctx->pc = 0x1D3F1Cu;
    {
        const bool branch_taken_0x1d3f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3f1c) {
            ctx->pc = 0x1D3F28u;
            goto label_1d3f28;
        }
    }
    ctx->pc = 0x1D3F24u;
    // 0x1d3f24: 0x26100002
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_1d3f28:
    // 0x1d3f28: 0xc06c20d
    ctx->pc = 0x1D3F28u;
    SET_GPR_U32(ctx, 31, 0x1D3F30u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F30u; }
        else if (ctx->pc != 0x1D3F30u) { ctx->pc = 0x1D3F30u; }
    }
    if (ctx->pc != 0x1D3F30u) { return; }
    ctx->pc = 0x1D3F30u;
    // 0x1d3f30: 0xc06c0fb
    ctx->pc = 0x1D3F30u;
    SET_GPR_U32(ctx, 31, 0x1D3F38u);
    ctx->pc = 0x1D3F34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F38u; }
        else if (ctx->pc != 0x1D3F38u) { ctx->pc = 0x1D3F38u; }
    }
    if (ctx->pc != 0x1D3F38u) { return; }
    ctx->pc = 0x1D3F38u;
    // 0x1d3f38: 0x27a200d4
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
    // 0x1d3f3c: 0xc44d0000
    ctx->pc = 0x1d3f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d3f40: 0xc6ae0000
    ctx->pc = 0x1d3f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d3f44: 0xc06c202
    ctx->pc = 0x1D3F44u;
    SET_GPR_U32(ctx, 31, 0x1D3F4Cu);
    ctx->pc = 0x1D3F48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F4Cu; }
        else if (ctx->pc != 0x1D3F4Cu) { ctx->pc = 0x1D3F4Cu; }
    }
    if (ctx->pc != 0x1D3F4Cu) { return; }
    ctx->pc = 0x1D3F4Cu;
    // 0x1d3f4c: 0xc06bfd2
    ctx->pc = 0x1D3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F54u);
    ctx->pc = 0x1D3F50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3F54u; }
        else if (ctx->pc != 0x1D3F54u) { ctx->pc = 0x1D3F54u; }
    }
    if (ctx->pc != 0x1D3F54u) { return; }
    ctx->pc = 0x1D3F54u;
    // 0x1d3f54: 0xc7a100f0
    ctx->pc = 0x1d3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3f58: 0x46150834
    ctx->pc = 0x1d3f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3f5c: 0x0
    ctx->pc = 0x1d3f5cu;
    // NOP
    // 0x1d3f60: 0x45010003
    ctx->pc = 0x1D3F60u;
    {
        const bool branch_taken_0x1d3f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3f60) {
            ctx->pc = 0x1D3F70u;
            goto label_1d3f70;
        }
    }
    ctx->pc = 0x1D3F68u;
    // 0x1d3f68: 0x10000008
    ctx->pc = 0x1D3F68u;
    {
        const bool branch_taken_0x1d3f68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3F6Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d3f68) {
            ctx->pc = 0x1D3F8Cu;
            goto label_1d3f8c;
        }
    }
    ctx->pc = 0x1D3F70u;
label_1d3f70:
    // 0x1d3f70: 0x44800000
    ctx->pc = 0x1d3f70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d3f74: 0x0
    ctx->pc = 0x1d3f74u;
    // NOP
    // 0x1d3f78: 0x46000834
    ctx->pc = 0x1d3f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3f7c: 0x0
    ctx->pc = 0x1d3f7cu;
    // NOP
    // 0x1d3f80: 0x45000003
    ctx->pc = 0x1D3F80u;
    {
        const bool branch_taken_0x1d3f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3F84u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 248));
        if (branch_taken_0x1d3f80) {
            ctx->pc = 0x1D3F90u;
            goto label_1d3f90;
        }
    }
    ctx->pc = 0x1D3F88u;
    // 0x1d3f88: 0x26310001
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1d3f8c:
    // 0x1d3f8c: 0x27be00f8
    ctx->pc = 0x1d3f8cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 248));
label_1d3f90:
    // 0x1d3f90: 0xc7c10000
    ctx->pc = 0x1d3f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3f94: 0x46150834
    ctx->pc = 0x1d3f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3f98: 0x0
    ctx->pc = 0x1d3f98u;
    // NOP
    // 0x1d3f9c: 0x45010003
    ctx->pc = 0x1D3F9Cu;
    {
        const bool branch_taken_0x1d3f9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3f9c) {
            ctx->pc = 0x1D3FACu;
            goto label_1d3fac;
        }
    }
    ctx->pc = 0x1D3FA4u;
    // 0x1d3fa4: 0x10000008
    ctx->pc = 0x1D3FA4u;
    {
        const bool branch_taken_0x1d3fa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3FA8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d3fa4) {
            ctx->pc = 0x1D3FC8u;
            goto label_1d3fc8;
        }
    }
    ctx->pc = 0x1D3FACu;
label_1d3fac:
    // 0x1d3fac: 0x44800000
    ctx->pc = 0x1d3facu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d3fb0: 0x0
    ctx->pc = 0x1d3fb0u;
    // NOP
    // 0x1d3fb4: 0x46000836
    ctx->pc = 0x1d3fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3fb8: 0x0
    ctx->pc = 0x1d3fb8u;
    // NOP
    // 0x1d3fbc: 0x45010002
    ctx->pc = 0x1D3FBCu;
    {
        const bool branch_taken_0x1d3fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3fbc) {
            ctx->pc = 0x1D3FC8u;
            goto label_1d3fc8;
        }
    }
    ctx->pc = 0x1D3FC4u;
    // 0x1d3fc4: 0x26310002
    ctx->pc = 0x1d3fc4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
label_1d3fc8:
    // 0x1d3fc8: 0xc06c20d
    ctx->pc = 0x1D3FC8u;
    SET_GPR_U32(ctx, 31, 0x1D3FD0u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FD0u; }
        else if (ctx->pc != 0x1D3FD0u) { ctx->pc = 0x1D3FD0u; }
    }
    if (ctx->pc != 0x1D3FD0u) { return; }
    ctx->pc = 0x1D3FD0u;
    // 0x1d3fd0: 0x8fa200bc
    ctx->pc = 0x1d3fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d3fd4: 0xc06c09f
    ctx->pc = 0x1D3FD4u;
    SET_GPR_U32(ctx, 31, 0x1D3FDCu);
    ctx->pc = 0x1D3FD8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FDCu; }
        else if (ctx->pc != 0x1D3FDCu) { ctx->pc = 0x1D3FDCu; }
    }
    if (ctx->pc != 0x1D3FDCu) { return; }
    ctx->pc = 0x1D3FDCu;
    // 0x1d3fdc: 0x27a200d4
    ctx->pc = 0x1d3fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
    // 0x1d3fe0: 0xc44d0000
    ctx->pc = 0x1d3fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d3fe4: 0xc6ae0000
    ctx->pc = 0x1d3fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d3fe8: 0xc06c202
    ctx->pc = 0x1D3FE8u;
    SET_GPR_U32(ctx, 31, 0x1D3FF0u);
    ctx->pc = 0x1D3FECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FF0u; }
        else if (ctx->pc != 0x1D3FF0u) { ctx->pc = 0x1D3FF0u; }
    }
    if (ctx->pc != 0x1D3FF0u) { return; }
    ctx->pc = 0x1D3FF0u;
    // 0x1d3ff0: 0xc06bfd2
    ctx->pc = 0x1D3FF0u;
    SET_GPR_U32(ctx, 31, 0x1D3FF8u);
    ctx->pc = 0x1D3FF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FF8u; }
        else if (ctx->pc != 0x1D3FF8u) { ctx->pc = 0x1D3FF8u; }
    }
    if (ctx->pc != 0x1D3FF8u) { return; }
    ctx->pc = 0x1D3FF8u;
    // 0x1d3ff8: 0xc7a100e4
    ctx->pc = 0x1d3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3ffc: 0x46150834
    ctx->pc = 0x1d3ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4000: 0x0
    ctx->pc = 0x1d4000u;
    // NOP
    // 0x1d4004: 0x45010003
    ctx->pc = 0x1D4004u;
    {
        const bool branch_taken_0x1d4004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4004) {
            ctx->pc = 0x1D4014u;
            goto label_1d4014;
        }
    }
    ctx->pc = 0x1D400Cu;
    // 0x1d400c: 0x10000008
    ctx->pc = 0x1D400Cu;
    {
        const bool branch_taken_0x1d400c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4010u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d400c) {
            ctx->pc = 0x1D4030u;
            goto label_1d4030;
        }
    }
    ctx->pc = 0x1D4014u;
label_1d4014:
    // 0x1d4014: 0x44800000
    ctx->pc = 0x1d4014u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d4018: 0x0
    ctx->pc = 0x1d4018u;
    // NOP
    // 0x1d401c: 0x46000834
    ctx->pc = 0x1d401cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4020: 0x0
    ctx->pc = 0x1d4020u;
    // NOP
    // 0x1d4024: 0x45000003
    ctx->pc = 0x1D4024u;
    {
        const bool branch_taken_0x1d4024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4028u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 232));
        if (branch_taken_0x1d4024) {
            ctx->pc = 0x1D4034u;
            goto label_1d4034;
        }
    }
    ctx->pc = 0x1D402Cu;
    // 0x1d402c: 0x26520001
    ctx->pc = 0x1d402cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1d4030:
    // 0x1d4030: 0x27a200e8
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 232));
label_1d4034:
    // 0x1d4034: 0xc4410000
    ctx->pc = 0x1d4034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4038: 0x46150834
    ctx->pc = 0x1d4038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d403c: 0x0
    ctx->pc = 0x1d403cu;
    // NOP
    // 0x1d4040: 0x45010003
    ctx->pc = 0x1D4040u;
    {
        const bool branch_taken_0x1d4040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4040) {
            ctx->pc = 0x1D4050u;
            goto label_1d4050;
        }
    }
    ctx->pc = 0x1D4048u;
    // 0x1d4048: 0x10000008
    ctx->pc = 0x1D4048u;
    {
        const bool branch_taken_0x1d4048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D404Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d4048) {
            ctx->pc = 0x1D406Cu;
            goto label_1d406c;
        }
    }
    ctx->pc = 0x1D4050u;
label_1d4050:
    // 0x1d4050: 0x44800000
    ctx->pc = 0x1d4050u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d4054: 0x0
    ctx->pc = 0x1d4054u;
    // NOP
    // 0x1d4058: 0x46000836
    ctx->pc = 0x1d4058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d405c: 0x0
    ctx->pc = 0x1d405cu;
    // NOP
    // 0x1d4060: 0x45010002
    ctx->pc = 0x1D4060u;
    {
        const bool branch_taken_0x1d4060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4060) {
            ctx->pc = 0x1D406Cu;
            goto label_1d406c;
        }
    }
    ctx->pc = 0x1D4068u;
    // 0x1d4068: 0x26520002
    ctx->pc = 0x1d4068u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
label_1d406c:
    // 0x1d406c: 0xc06c20d
    ctx->pc = 0x1D406Cu;
    SET_GPR_U32(ctx, 31, 0x1D4074u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4074u; }
        else if (ctx->pc != 0x1D4074u) { ctx->pc = 0x1D4074u; }
    }
    if (ctx->pc != 0x1D4074u) { return; }
    ctx->pc = 0x1D4074u;
    // 0x1d4074: 0xc06c09f
    ctx->pc = 0x1D4074u;
    SET_GPR_U32(ctx, 31, 0x1D407Cu);
    ctx->pc = 0x1D4078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 188)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D407Cu; }
        else if (ctx->pc != 0x1D407Cu) { ctx->pc = 0x1D407Cu; }
    }
    if (ctx->pc != 0x1D407Cu) { return; }
    ctx->pc = 0x1D407Cu;
    // 0x1d407c: 0x27a200d4
    ctx->pc = 0x1d407cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
    // 0x1d4080: 0xc44d0000
    ctx->pc = 0x1d4080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d4084: 0xc6ae0000
    ctx->pc = 0x1d4084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d4088: 0xc06c202
    ctx->pc = 0x1D4088u;
    SET_GPR_U32(ctx, 31, 0x1D4090u);
    ctx->pc = 0x1D408Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4090u; }
        else if (ctx->pc != 0x1D4090u) { ctx->pc = 0x1D4090u; }
    }
    if (ctx->pc != 0x1D4090u) { return; }
    ctx->pc = 0x1D4090u;
    // 0x1d4090: 0xc06bfd2
    ctx->pc = 0x1D4090u;
    SET_GPR_U32(ctx, 31, 0x1D4098u);
    ctx->pc = 0x1D4094u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4098u; }
        else if (ctx->pc != 0x1D4098u) { ctx->pc = 0x1D4098u; }
    }
    if (ctx->pc != 0x1D4098u) { return; }
    ctx->pc = 0x1D4098u;
    // 0x1d4098: 0xc7a100f4
    ctx->pc = 0x1d4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d409c: 0x46140836
    ctx->pc = 0x1d409cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d40a0: 0x0
    ctx->pc = 0x1d40a0u;
    // NOP
    // 0x1d40a4: 0x45000003
    ctx->pc = 0x1D40A4u;
    {
        const bool branch_taken_0x1d40a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d40a4) {
            ctx->pc = 0x1D40B4u;
            goto label_1d40b4;
        }
    }
    ctx->pc = 0x1D40ACu;
    // 0x1d40ac: 0x10000008
    ctx->pc = 0x1D40ACu;
    {
        const bool branch_taken_0x1d40ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D40B0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d40ac) {
            ctx->pc = 0x1D40D0u;
            goto label_1d40d0;
        }
    }
    ctx->pc = 0x1D40B4u;
label_1d40b4:
    // 0x1d40b4: 0x44800000
    ctx->pc = 0x1d40b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d40b8: 0x0
    ctx->pc = 0x1d40b8u;
    // NOP
    // 0x1d40bc: 0x46000836
    ctx->pc = 0x1d40bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d40c0: 0x0
    ctx->pc = 0x1d40c0u;
    // NOP
    // 0x1d40c4: 0x45010002
    ctx->pc = 0x1D40C4u;
    {
        const bool branch_taken_0x1d40c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d40c4) {
            ctx->pc = 0x1D40D0u;
            goto label_1d40d0;
        }
    }
    ctx->pc = 0x1D40CCu;
    // 0x1d40cc: 0x26730001
    ctx->pc = 0x1d40ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d40d0:
    // 0x1d40d0: 0xc7c10000
    ctx->pc = 0x1d40d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d40d4: 0x46150834
    ctx->pc = 0x1d40d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d40d8: 0x0
    ctx->pc = 0x1d40d8u;
    // NOP
    // 0x1d40dc: 0x45010003
    ctx->pc = 0x1D40DCu;
    {
        const bool branch_taken_0x1d40dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d40dc) {
            ctx->pc = 0x1D40ECu;
            goto label_1d40ec;
        }
    }
    ctx->pc = 0x1D40E4u;
    // 0x1d40e4: 0x10000008
    ctx->pc = 0x1D40E4u;
    {
        const bool branch_taken_0x1d40e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D40E8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d40e4) {
            ctx->pc = 0x1D4108u;
            goto label_1d4108;
        }
    }
    ctx->pc = 0x1D40ECu;
label_1d40ec:
    // 0x1d40ec: 0x44800000
    ctx->pc = 0x1d40ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1d40f0: 0x0
    ctx->pc = 0x1d40f0u;
    // NOP
    // 0x1d40f4: 0x46000836
    ctx->pc = 0x1d40f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d40f8: 0x0
    ctx->pc = 0x1d40f8u;
    // NOP
    // 0x1d40fc: 0x45010003
    ctx->pc = 0x1D40FCu;
    {
        const bool branch_taken_0x1d40fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4100u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1d40fc) {
            ctx->pc = 0x1D410Cu;
            goto label_1d410c;
        }
    }
    ctx->pc = 0x1D4104u;
    // 0x1d4104: 0x26730002
    ctx->pc = 0x1d4104u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
label_1d4108:
    // 0x1d4108: 0x2111818
    ctx->pc = 0x1d4108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_1d410c:
    // 0x1d410c: 0x24020006
    ctx->pc = 0x1d410cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d4110: 0x1062000c
    ctx->pc = 0x1D4110u;
    {
        const bool branch_taken_0x1d4110 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D4114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1d4110) {
            ctx->pc = 0x1D4144u;
            goto label_1d4144;
        }
    }
    ctx->pc = 0x1D4118u;
    // 0x1d4118: 0x1062000a
    ctx->pc = 0x1D4118u;
    {
        const bool branch_taken_0x1d4118 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D411Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d4118) {
            ctx->pc = 0x1D4144u;
            goto label_1d4144;
        }
    }
    ctx->pc = 0x1D4120u;
    // 0x1d4120: 0x50620006
    ctx->pc = 0x1D4120u;
    {
        const bool branch_taken_0x1d4120 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d4120) {
            ctx->pc = 0x1D4124u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1D413Cu;
            goto label_1d413c;
        }
    }
    ctx->pc = 0x1D4128u;
    // 0x1d4128: 0x10600003
    ctx->pc = 0x1D4128u;
    {
        const bool branch_taken_0x1d4128 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4128) {
            ctx->pc = 0x1D4138u;
            goto label_1d4138;
        }
    }
    ctx->pc = 0x1D4130u;
    // 0x1d4130: 0x1000000f
    ctx->pc = 0x1D4130u;
    {
        const bool branch_taken_0x1d4130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4134u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1d4130) {
            ctx->pc = 0x1D4170u;
            goto label_1d4170;
        }
    }
    ctx->pc = 0x1D4138u;
label_1d4138:
    // 0x1d4138: 0x24170001
    ctx->pc = 0x1d4138u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_1d413c:
    // 0x1d413c: 0x1000000b
    ctx->pc = 0x1D413Cu;
    {
        const bool branch_taken_0x1d413c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d413c) {
            ctx->pc = 0x1D416Cu;
            goto label_1d416c;
        }
    }
    ctx->pc = 0x1D4144u;
label_1d4144:
    // 0x1d4144: 0xc7a100d0
    ctx->pc = 0x1d4144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4148: 0xc6a00000
    ctx->pc = 0x1d4148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d414c: 0x4601081a
    ctx->pc = 0x1d414cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1d4150: 0xc06c2a8
    ctx->pc = 0x1D4150u;
    SET_GPR_U32(ctx, 31, 0x1D4158u);
    ctx->pc = 0x1D4154u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4158u; }
        else if (ctx->pc != 0x1D4158u) { ctx->pc = 0x1D4158u; }
    }
    if (ctx->pc != 0x1D4158u) { return; }
    ctx->pc = 0x1D4158u;
    // 0x1d4158: 0x46150034
    ctx->pc = 0x1d4158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d415c: 0x0
    ctx->pc = 0x1d415cu;
    // NOP
    // 0x1d4160: 0x45000002
    ctx->pc = 0x1D4160u;
    {
        const bool branch_taken_0x1d4160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4160) {
            ctx->pc = 0x1D416Cu;
            goto label_1d416c;
        }
    }
    ctx->pc = 0x1D4168u;
    // 0x1d4168: 0x24170001
    ctx->pc = 0x1d4168u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_1d416c:
    // 0x1d416c: 0x2531818
    ctx->pc = 0x1d416cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_1d4170:
    // 0x1d4170: 0x24020006
    ctx->pc = 0x1d4170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d4174: 0x1062000e
    ctx->pc = 0x1D4174u;
    {
        const bool branch_taken_0x1d4174 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D4178u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
        if (branch_taken_0x1d4174) {
            ctx->pc = 0x1D41B0u;
            goto label_1d41b0;
        }
    }
    ctx->pc = 0x1D417Cu;
    // 0x1d417c: 0x24020004
    ctx->pc = 0x1d417cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4180: 0x1062000a
    ctx->pc = 0x1D4180u;
    {
        const bool branch_taken_0x1d4180 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D4184u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d4180) {
            ctx->pc = 0x1D41ACu;
            goto label_1d41ac;
        }
    }
    ctx->pc = 0x1D4188u;
    // 0x1d4188: 0x50620006
    ctx->pc = 0x1D4188u;
    {
        const bool branch_taken_0x1d4188 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d4188) {
            ctx->pc = 0x1D418Cu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1D41A4u;
            goto label_1d41a4;
        }
    }
    ctx->pc = 0x1D4190u;
    // 0x1d4190: 0x10600003
    ctx->pc = 0x1D4190u;
    {
        const bool branch_taken_0x1d4190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4190) {
            ctx->pc = 0x1D41A0u;
            goto label_1d41a0;
        }
    }
    ctx->pc = 0x1D4198u;
    // 0x1d4198: 0x10000010
    ctx->pc = 0x1D4198u;
    {
        const bool branch_taken_0x1d4198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D419Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d4198) {
            ctx->pc = 0x1D41DCu;
            goto label_1d41dc;
        }
    }
    ctx->pc = 0x1D41A0u;
label_1d41a0:
    // 0x1d41a0: 0x24160001
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
label_1d41a4:
    // 0x1d41a4: 0x1000000c
    ctx->pc = 0x1D41A4u;
    {
        const bool branch_taken_0x1d41a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d41a4) {
            ctx->pc = 0x1D41D8u;
            goto label_1d41d8;
        }
    }
    ctx->pc = 0x1D41ACu;
label_1d41ac:
    // 0x1d41ac: 0x27a200d4
    ctx->pc = 0x1d41acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 212));
label_1d41b0:
    // 0x1d41b0: 0xc4410000
    ctx->pc = 0x1d41b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d41b4: 0xc6a00000
    ctx->pc = 0x1d41b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d41b8: 0x4601081a
    ctx->pc = 0x1d41b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1d41bc: 0xc06c2a8
    ctx->pc = 0x1D41BCu;
    SET_GPR_U32(ctx, 31, 0x1D41C4u);
    ctx->pc = 0x1D41C0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41C4u; }
        else if (ctx->pc != 0x1D41C4u) { ctx->pc = 0x1D41C4u; }
    }
    if (ctx->pc != 0x1D41C4u) { return; }
    ctx->pc = 0x1D41C4u;
    // 0x1d41c4: 0x46150034
    ctx->pc = 0x1d41c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d41c8: 0x0
    ctx->pc = 0x1d41c8u;
    // NOP
    // 0x1d41cc: 0x45000002
    ctx->pc = 0x1D41CCu;
    {
        const bool branch_taken_0x1d41cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d41cc) {
            ctx->pc = 0x1D41D8u;
            goto label_1d41d8;
        }
    }
    ctx->pc = 0x1D41D4u;
    // 0x1d41d4: 0x24160001
    ctx->pc = 0x1d41d4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
label_1d41d8:
    // 0x1d41d8: 0x4bff6b7e
    ctx->pc = 0x1d41d8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1d41dc:
    // 0x1d41dc: 0x4bfe6b7e
    ctx->pc = 0x1d41dcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d41e0: 0x4bfd6b7e
    ctx->pc = 0x1d41e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d41e4: 0x12800003
    ctx->pc = 0x1D41E4u;
    {
        const bool branch_taken_0x1d41e4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D41E8u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1d41e4) {
            ctx->pc = 0x1D41F4u;
            goto label_1d41f4;
        }
    }
    ctx->pc = 0x1D41ECu;
    // 0x1d41ec: 0x10000003
    ctx->pc = 0x1D41ECu;
    {
        const bool branch_taken_0x1d41ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D41F0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d41ec) {
            ctx->pc = 0x1D41FCu;
            goto label_1d41fc;
        }
    }
    ctx->pc = 0x1D41F4u;
label_1d41f4:
    // 0x1d41f4: 0x2f61024
    ctx->pc = 0x1d41f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x1d41f8: 0x2102b
    ctx->pc = 0x1d41f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d41fc:
    // 0x1d41fc: 0x7bbf00a0
    ctx->pc = 0x1d41fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4200: 0x7bbe0090
    ctx->pc = 0x1d4200u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4204: 0x7bb70080
    ctx->pc = 0x1d4204u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4208: 0x7bb60070
    ctx->pc = 0x1d4208u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d420c: 0x7bb50060
    ctx->pc = 0x1d420cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4210: 0x7bb40050
    ctx->pc = 0x1d4210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4214: 0x7bb30040
    ctx->pc = 0x1d4214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4218: 0x7bb20030
    ctx->pc = 0x1d4218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d421c: 0x7bb10020
    ctx->pc = 0x1d421cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4220: 0x7bb00010
    ctx->pc = 0x1d4220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4224: 0xc7b50004
    ctx->pc = 0x1d4224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d4228: 0xc7b40000
    ctx->pc = 0x1d4228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d422c: 0x3e00008
    ctx->pc = 0x1D422Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3ED0u: goto label_1d3ed0;
            case 0x1D3EECu: goto label_1d3eec;
            case 0x1D3EF0u: goto label_1d3ef0;
            case 0x1D3F0Cu: goto label_1d3f0c;
            case 0x1D3F28u: goto label_1d3f28;
            case 0x1D3F70u: goto label_1d3f70;
            case 0x1D3F8Cu: goto label_1d3f8c;
            case 0x1D3F90u: goto label_1d3f90;
            case 0x1D3FACu: goto label_1d3fac;
            case 0x1D3FC8u: goto label_1d3fc8;
            case 0x1D4014u: goto label_1d4014;
            case 0x1D4030u: goto label_1d4030;
            case 0x1D4034u: goto label_1d4034;
            case 0x1D4050u: goto label_1d4050;
            case 0x1D406Cu: goto label_1d406c;
            case 0x1D40B4u: goto label_1d40b4;
            case 0x1D40D0u: goto label_1d40d0;
            case 0x1D40ECu: goto label_1d40ec;
            case 0x1D4108u: goto label_1d4108;
            case 0x1D410Cu: goto label_1d410c;
            case 0x1D4138u: goto label_1d4138;
            case 0x1D413Cu: goto label_1d413c;
            case 0x1D4144u: goto label_1d4144;
            case 0x1D416Cu: goto label_1d416c;
            case 0x1D4170u: goto label_1d4170;
            case 0x1D41A0u: goto label_1d41a0;
            case 0x1D41A4u: goto label_1d41a4;
            case 0x1D41ACu: goto label_1d41ac;
            case 0x1D41B0u: goto label_1d41b0;
            case 0x1D41D8u: goto label_1d41d8;
            case 0x1D41DCu: goto label_1d41dc;
            case 0x1D41F4u: goto label_1d41f4;
            case 0x1D41FCu: goto label_1d41fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4234u;
}
