#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st5dcOotaki__14TrnKomono2TaskFv
// Address: 0x222c40 - 0x222e34
void st5dcOotaki__14TrnKomono2TaskFv_0x222c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st5dcOotaki__14TrnKomono2TaskFv");


    ctx->pc = 0x222c40u;

    // 0x222c40: 0x27bdff60
    ctx->pc = 0x222c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x222c44: 0x7fbf0060
    ctx->pc = 0x222c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x222c48: 0x7fb40050
    ctx->pc = 0x222c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x222c4c: 0x7fb30040
    ctx->pc = 0x222c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x222c50: 0x7fb20030
    ctx->pc = 0x222c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x222c54: 0x7fb10020
    ctx->pc = 0x222c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x222c58: 0x7fb00010
    ctx->pc = 0x222c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222c5c: 0xe7b40000
    ctx->pc = 0x222c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x222c60: 0xc4800064
    ctx->pc = 0x222c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222c64: 0x8c850060
    ctx->pc = 0x222c64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x222c68: 0x7080a628
    ctx->pc = 0x222c68u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x222c6c: 0xc08822c
    ctx->pc = 0x222C6Cu;
    SET_GPR_U32(ctx, 31, 0x222C74u);
    ctx->pc = 0x222C70u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x2208B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCloseCamPath__14TrnKomono2TaskFif_0x2208b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C74u; }
        else if (ctx->pc != 0x222C74u) { ctx->pc = 0x222C74u; }
    }
    if (ctx->pc != 0x222C74u) { return; }
    ctx->pc = 0x222C74u;
    // 0x222c74: 0x70008e28
    ctx->pc = 0x222c74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222c78: 0x10000045
    ctx->pc = 0x222C78u;
    {
        const bool branch_taken_0x222c78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222C7Cu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x222c78) {
            ctx->pc = 0x222D90u;
            goto label_222d90;
        }
    }
    ctx->pc = 0x222C80u;
label_222c80:
    // 0x222c80: 0x8e820168
    ctx->pc = 0x222c80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 360)));
    // 0x222c84: 0xc68c004c
    ctx->pc = 0x222c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x222c88: 0x27a50080
    ctx->pc = 0x222c88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    // 0x222c8c: 0xc079bd4
    ctx->pc = 0x222C8Cu;
    SET_GPR_U32(ctx, 31, 0x222C94u);
    ctx->pc = 0x222C90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C94u; }
        else if (ctx->pc != 0x222C94u) { ctx->pc = 0x222C94u; }
    }
    if (ctx->pc != 0x222C94u) { return; }
    ctx->pc = 0x222C94u;
    // 0x222c94: 0x8e82016c
    ctx->pc = 0x222c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 364)));
    // 0x222c98: 0xc68c004c
    ctx->pc = 0x222c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x222c9c: 0x27a50090
    ctx->pc = 0x222c9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x222ca0: 0xc079bd4
    ctx->pc = 0x222CA0u;
    SET_GPR_U32(ctx, 31, 0x222CA8u);
    ctx->pc = 0x222CA4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222CA8u; }
        else if (ctx->pc != 0x222CA8u) { ctx->pc = 0x222CA8u; }
    }
    if (ctx->pc != 0x222CA8u) { return; }
    ctx->pc = 0x222CA8u;
    // 0x222ca8: 0x3c02002c
    ctx->pc = 0x222ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x222cac: 0x70008628
    ctx->pc = 0x222cacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222cb0: 0x10000031
    ctx->pc = 0x222CB0u;
    {
        const bool branch_taken_0x222cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222CB4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 6880));
        if (branch_taken_0x222cb0) {
            ctx->pc = 0x222D78u;
            goto label_222d78;
        }
    }
    ctx->pc = 0x222CB8u;
label_222cb8:
    // 0x222cb8: 0x4bede37d
    ctx->pc = 0x222cb8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x222cbc: 0x4bedeb7d
    ctx->pc = 0x222cbcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x222cc0: 0x4bedf37d
    ctx->pc = 0x222cc0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x222cc4: 0x4bedfb7d
    ctx->pc = 0x222cc4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x222cc8: 0xc64d0004
    ctx->pc = 0x222cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222ccc: 0xc64e0008
    ctx->pc = 0x222cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222cd0: 0xc06c202
    ctx->pc = 0x222CD0u;
    SET_GPR_U32(ctx, 31, 0x222CD8u);
    ctx->pc = 0x222CD4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222CD8u; }
        else if (ctx->pc != 0x222CD8u) { ctx->pc = 0x222CD8u; }
    }
    if (ctx->pc != 0x222CD8u) { return; }
    ctx->pc = 0x222CD8u;
    // 0x222cd8: 0xc06c0fb
    ctx->pc = 0x222CD8u;
    SET_GPR_U32(ctx, 31, 0x222CE0u);
    ctx->pc = 0x222CDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222CE0u; }
        else if (ctx->pc != 0x222CE0u) { ctx->pc = 0x222CE0u; }
    }
    if (ctx->pc != 0x222CE0u) { return; }
    ctx->pc = 0x222CE0u;
    // 0x222ce0: 0xc7ad0084
    ctx->pc = 0x222ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222ce4: 0xc7ae0088
    ctx->pc = 0x222ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222ce8: 0xc06c202
    ctx->pc = 0x222CE8u;
    SET_GPR_U32(ctx, 31, 0x222CF0u);
    ctx->pc = 0x222CECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222CF0u; }
        else if (ctx->pc != 0x222CF0u) { ctx->pc = 0x222CF0u; }
    }
    if (ctx->pc != 0x222CF0u) { return; }
    ctx->pc = 0x222CF0u;
    // 0x222cf0: 0xc7b40080
    ctx->pc = 0x222cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222cf4: 0xc7ad0094
    ctx->pc = 0x222cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222cf8: 0x46146836
    ctx->pc = 0x222cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222cfc: 0x0
    ctx->pc = 0x222cfcu;
    // NOP
    // 0x222d00: 0x45010003
    ctx->pc = 0x222D00u;
    {
        const bool branch_taken_0x222d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222d00) {
            ctx->pc = 0x222D10u;
            goto label_222d10;
        }
    }
    ctx->pc = 0x222D08u;
    // 0x222d08: 0x46006d06
    ctx->pc = 0x222d08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x222d0c: 0x0
    ctx->pc = 0x222d0cu;
    // NOP
label_222d10:
    // 0x222d10: 0xc7ae0098
    ctx->pc = 0x222d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222d14: 0x46147036
    ctx->pc = 0x222d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222d18: 0x0
    ctx->pc = 0x222d18u;
    // NOP
    // 0x222d1c: 0x45010002
    ctx->pc = 0x222D1Cu;
    {
        const bool branch_taken_0x222d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222d1c) {
            ctx->pc = 0x222D28u;
            goto label_222d28;
        }
    }
    ctx->pc = 0x222D24u;
    // 0x222d24: 0x46007506
    ctx->pc = 0x222d24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_222d28:
    // 0x222d28: 0xc06c1b3
    ctx->pc = 0x222D28u;
    SET_GPR_U32(ctx, 31, 0x222D30u);
    ctx->pc = 0x222D2Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D30u; }
        else if (ctx->pc != 0x222D30u) { ctx->pc = 0x222D30u; }
    }
    if (ctx->pc != 0x222D30u) { return; }
    ctx->pc = 0x222D30u;
    // 0x222d30: 0xc06b218
    ctx->pc = 0x222D30u;
    SET_GPR_U32(ctx, 31, 0x222D38u);
    ctx->pc = 0x222D34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D38u; }
        else if (ctx->pc != 0x222D38u) { ctx->pc = 0x222D38u; }
    }
    if (ctx->pc != 0x222D38u) { return; }
    ctx->pc = 0x222D38u;
    // 0x222d38: 0x3c020048
    ctx->pc = 0x222d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)72 << 16));
    // 0x222d3c: 0x3444002b
    ctx->pc = 0x222d3cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 43));
    // 0x222d40: 0xc085438
    ctx->pc = 0x222D40u;
    SET_GPR_U32(ctx, 31, 0x222D48u);
    ctx->pc = 0x222D44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2150E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjCulling__FiP10OBJCULLING_0x2150e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D48u; }
        else if (ctx->pc != 0x222D48u) { ctx->pc = 0x222D48u; }
    }
    if (ctx->pc != 0x222D48u) { return; }
    ctx->pc = 0x222D48u;
    // 0x222d48: 0xc085528
    ctx->pc = 0x222D48u;
    SET_GPR_U32(ctx, 31, 0x222D50u);
    ctx->pc = 0x222D4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2154A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckCulling__FP10OBJCULLING_0x2154a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D50u; }
        else if (ctx->pc != 0x222D50u) { ctx->pc = 0x222D50u; }
    }
    if (ctx->pc != 0x222D50u) { return; }
    ctx->pc = 0x222D50u;
    // 0x222d50: 0x10400003
    ctx->pc = 0x222D50u;
    {
        const bool branch_taken_0x222d50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222D54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)72 << 16));
        if (branch_taken_0x222d50) {
            ctx->pc = 0x222D60u;
            goto label_222d60;
        }
    }
    ctx->pc = 0x222D58u;
    // 0x222d58: 0xc0853ac
    ctx->pc = 0x222D58u;
    SET_GPR_U32(ctx, 31, 0x222D60u);
    ctx->pc = 0x222D5Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 43));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D60u; }
        else if (ctx->pc != 0x222D60u) { ctx->pc = 0x222D60u; }
    }
    if (ctx->pc != 0x222D60u) { return; }
    ctx->pc = 0x222D60u;
label_222d60:
    // 0x222d60: 0x4bff6b7e
    ctx->pc = 0x222d60u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x222d64: 0x4bfe6b7e
    ctx->pc = 0x222d64u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222d68: 0x4bfd6b7e
    ctx->pc = 0x222d68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x222d6c: 0x4bfc6b7e
    ctx->pc = 0x222d6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x222d70: 0x26100001
    ctx->pc = 0x222d70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222d74: 0x26520024
    ctx->pc = 0x222d74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 36));
label_222d78:
    // 0x222d78: 0x2e020008
    ctx->pc = 0x222d78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 8));
    // 0x222d7c: 0x1440ffce
    ctx->pc = 0x222D7Cu;
    {
        const bool branch_taken_0x222d7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222d7c) {
            ctx->pc = 0x222CB8u;
            goto label_222cb8;
        }
    }
    ctx->pc = 0x222D84u;
    // 0x222d84: 0x2673001c
    ctx->pc = 0x222d84u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 28));
    // 0x222d88: 0x26310001
    ctx->pc = 0x222d88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x222d8c: 0x0
    ctx->pc = 0x222d8cu;
    // NOP
label_222d90:
    // 0x222d90: 0x8e8200cc
    ctx->pc = 0x222d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x222d94: 0x222102a
    ctx->pc = 0x222d94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x222d98: 0x1440ffb9
    ctx->pc = 0x222D98u;
    {
        const bool branch_taken_0x222d98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222d98) {
            ctx->pc = 0x222C80u;
            goto label_222c80;
        }
    }
    ctx->pc = 0x222DA0u;
    // 0x222da0: 0x8f828cec
    ctx->pc = 0x222da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x222da4: 0x14400004
    ctx->pc = 0x222DA4u;
    {
        const bool branch_taken_0x222da4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222da4) {
            ctx->pc = 0x222DB8u;
            goto label_222db8;
        }
    }
    ctx->pc = 0x222DACu;
    // 0x222dac: 0x8f828ce8
    ctx->pc = 0x222dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x222db0: 0x10400003
    ctx->pc = 0x222DB0u;
    {
        const bool branch_taken_0x222db0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x222db0) {
            ctx->pc = 0x222DC0u;
            goto label_222dc0;
        }
    }
    ctx->pc = 0x222DB8u;
label_222db8:
    // 0x222db8: 0xc06898c
    ctx->pc = 0x222DB8u;
    SET_GPR_U32(ctx, 31, 0x222DC0u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DC0u; }
        else if (ctx->pc != 0x222DC0u) { ctx->pc = 0x222DC0u; }
    }
    if (ctx->pc != 0x222DC0u) { return; }
    ctx->pc = 0x222DC0u;
label_222dc0:
    // 0x222dc0: 0x3c020050
    ctx->pc = 0x222dc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x222dc4: 0xc07ce18
    ctx->pc = 0x222DC4u;
    SET_GPR_U32(ctx, 31, 0x222DCCu);
    ctx->pc = 0x222DC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DCCu; }
        else if (ctx->pc != 0x222DCCu) { ctx->pc = 0x222DCCu; }
    }
    if (ctx->pc != 0x222DCCu) { return; }
    ctx->pc = 0x222DCCu;
    // 0x222dcc: 0x1c400010
    ctx->pc = 0x222DCCu;
    {
        const bool branch_taken_0x222dcc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x222dcc) {
            ctx->pc = 0x222E10u;
            goto label_222e10;
        }
    }
    ctx->pc = 0x222DD4u;
    // 0x222dd4: 0xc681004c
    ctx->pc = 0x222dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222dd8: 0x3c033f99
    ctx->pc = 0x222dd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
    // 0x222ddc: 0x3463999a
    ctx->pc = 0x222ddcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x222de0: 0x44830000
    ctx->pc = 0x222de0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x222de4: 0x0
    ctx->pc = 0x222de4u;
    // NOP
    // 0x222de8: 0x46000840
    ctx->pc = 0x222de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x222dec: 0xe681004c
    ctx->pc = 0x222decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x222df0: 0xc680002c
    ctx->pc = 0x222df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222df4: 0x46800020
    ctx->pc = 0x222df4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x222df8: 0x46000836
    ctx->pc = 0x222df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222dfc: 0x0
    ctx->pc = 0x222dfcu;
    // NOP
    // 0x222e00: 0x45010003
    ctx->pc = 0x222E00u;
    {
        const bool branch_taken_0x222e00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222e00) {
            ctx->pc = 0x222E10u;
            goto label_222e10;
        }
    }
    ctx->pc = 0x222E08u;
    // 0x222e08: 0x46000801
    ctx->pc = 0x222e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x222e0c: 0xe680004c
    ctx->pc = 0x222e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
label_222e10:
    // 0x222e10: 0x7bbf0060
    ctx->pc = 0x222e10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222e14: 0x7bb40050
    ctx->pc = 0x222e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222e18: 0x7bb30040
    ctx->pc = 0x222e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222e1c: 0x7bb20030
    ctx->pc = 0x222e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222e20: 0x7bb10020
    ctx->pc = 0x222e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222e24: 0x7bb00010
    ctx->pc = 0x222e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222e28: 0xc7b40000
    ctx->pc = 0x222e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222e2c: 0x3e00008
    ctx->pc = 0x222E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222C80u: goto label_222c80;
            case 0x222CB8u: goto label_222cb8;
            case 0x222D10u: goto label_222d10;
            case 0x222D28u: goto label_222d28;
            case 0x222D60u: goto label_222d60;
            case 0x222D78u: goto label_222d78;
            case 0x222D90u: goto label_222d90;
            case 0x222DB8u: goto label_222db8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222E10u: goto label_222e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222E34u;
}
