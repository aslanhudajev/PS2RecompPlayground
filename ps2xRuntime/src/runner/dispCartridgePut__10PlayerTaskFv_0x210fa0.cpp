#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispCartridgePut__10PlayerTaskFv
// Address: 0x210fa0 - 0x211110
void dispCartridgePut__10PlayerTaskFv_0x210fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispCartridgePut__10PlayerTaskFv");


    ctx->pc = 0x210fa0u;

    // 0x210fa0: 0x27bdffc0
    ctx->pc = 0x210fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210fa4: 0x7fbf0030
    ctx->pc = 0x210fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x210fa8: 0x7fb20020
    ctx->pc = 0x210fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x210fac: 0x7fb10010
    ctx->pc = 0x210facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x210fb0: 0x7fb00000
    ctx->pc = 0x210fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210fb4: 0x70808628
    ctx->pc = 0x210fb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x210fb8: 0xc0843c0
    ctx->pc = 0x210FB8u;
    SET_GPR_U32(ctx, 31, 0x210FC0u);
    ctx->pc = 0x210FBCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    ctx->pc = 0x210F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlCartType__Fi_0x210f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210FC0u; }
        else if (ctx->pc != 0x210FC0u) { ctx->pc = 0x210FC0u; }
    }
    if (ctx->pc != 0x210FC0u) { return; }
    ctx->pc = 0x210FC0u;
    // 0x210fc0: 0x4bede37d
    ctx->pc = 0x210fc0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x210fc4: 0x4bedeb7d
    ctx->pc = 0x210fc4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x210fc8: 0x4bedf37d
    ctx->pc = 0x210fc8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x210fcc: 0x4bedfb7d
    ctx->pc = 0x210fccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x210fd0: 0x21880
    ctx->pc = 0x210fd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x210fd4: 0x621821
    ctx->pc = 0x210fd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210fd8: 0x32080
    ctx->pc = 0x210fd8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x210fdc: 0x3c030027
    ctx->pc = 0x210fdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x210fe0: 0x261124e4
    ctx->pc = 0x210fe0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 9444));
    // 0x210fe4: 0x246333e0
    ctx->pc = 0x210fe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 13280));
    // 0x210fe8: 0x70008628
    ctx->pc = 0x210fe8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210fec: 0x649021
    ctx->pc = 0x210fecu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_210ff0:
    // 0x210ff0: 0x8e230018
    ctx->pc = 0x210ff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x210ff4: 0x50600039
    ctx->pc = 0x210FF4u;
    {
        const bool branch_taken_0x210ff4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x210ff4) {
            ctx->pc = 0x210FF8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2110DCu;
            goto label_2110dc;
        }
    }
    ctx->pc = 0x210FFCu;
    // 0x210ffc: 0xc06c20d
    ctx->pc = 0x210FFCu;
    SET_GPR_U32(ctx, 31, 0x211004u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211004u; }
        else if (ctx->pc != 0x211004u) { ctx->pc = 0x211004u; }
    }
    if (ctx->pc != 0x211004u) { return; }
    ctx->pc = 0x211004u;
    // 0x211004: 0xc62d0004
    ctx->pc = 0x211004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x211008: 0xc62e0008
    ctx->pc = 0x211008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21100c: 0xc06c202
    ctx->pc = 0x21100Cu;
    SET_GPR_U32(ctx, 31, 0x211014u);
    ctx->pc = 0x211010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211014u; }
        else if (ctx->pc != 0x211014u) { ctx->pc = 0x211014u; }
    }
    if (ctx->pc != 0x211014u) { return; }
    ctx->pc = 0x211014u;
    // 0x211014: 0xc06c09f
    ctx->pc = 0x211014u;
    SET_GPR_U32(ctx, 31, 0x21101Cu);
    ctx->pc = 0x211018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21101Cu; }
        else if (ctx->pc != 0x21101Cu) { ctx->pc = 0x21101Cu; }
    }
    if (ctx->pc != 0x21101Cu) { return; }
    ctx->pc = 0x21101Cu;
    // 0x21101c: 0x3c023aaa
    ctx->pc = 0x21101cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15018 << 16));
    // 0x211020: 0x344264c3
    ctx->pc = 0x211020u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 25795));
    // 0x211024: 0x44826000
    ctx->pc = 0x211024u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211028: 0x0
    ctx->pc = 0x211028u;
    // NOP
    // 0x21102c: 0x46006346
    ctx->pc = 0x21102cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x211030: 0xc06c1b3
    ctx->pc = 0x211030u;
    SET_GPR_U32(ctx, 31, 0x211038u);
    ctx->pc = 0x211034u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211038u; }
        else if (ctx->pc != 0x211038u) { ctx->pc = 0x211038u; }
    }
    if (ctx->pc != 0x211038u) { return; }
    ctx->pc = 0x211038u;
    // 0x211038: 0x4bede37d
    ctx->pc = 0x211038u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21103c: 0x4bedeb7d
    ctx->pc = 0x21103cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x211040: 0x4bedf37d
    ctx->pc = 0x211040u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x211044: 0x4bedfb7d
    ctx->pc = 0x211044u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x211048: 0xc06c09f
    ctx->pc = 0x211048u;
    SET_GPR_U32(ctx, 31, 0x211050u);
    ctx->pc = 0x21104Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211050u; }
        else if (ctx->pc != 0x211050u) { ctx->pc = 0x211050u; }
    }
    if (ctx->pc != 0x211050u) { return; }
    ctx->pc = 0x211050u;
    // 0x211050: 0xc64c0010
    ctx->pc = 0x211050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x211054: 0x46006346
    ctx->pc = 0x211054u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x211058: 0xc06c1b3
    ctx->pc = 0x211058u;
    SET_GPR_U32(ctx, 31, 0x211060u);
    ctx->pc = 0x21105Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211060u; }
        else if (ctx->pc != 0x211060u) { ctx->pc = 0x211060u; }
    }
    if (ctx->pc != 0x211060u) { return; }
    ctx->pc = 0x211060u;
    // 0x211060: 0xc6400010
    ctx->pc = 0x211060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211064: 0x3c023aaa
    ctx->pc = 0x211064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15018 << 16));
    // 0x211068: 0x344264c3
    ctx->pc = 0x211068u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 25795));
    // 0x21106c: 0x44820800
    ctx->pc = 0x21106cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x211070: 0xc06b218
    ctx->pc = 0x211070u;
    SET_GPR_U32(ctx, 31, 0x211078u);
    ctx->pc = 0x211074u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211078u; }
        else if (ctx->pc != 0x211078u) { ctx->pc = 0x211078u; }
    }
    if (ctx->pc != 0x211078u) { return; }
    ctx->pc = 0x211078u;
    // 0x211078: 0x8e440004
    ctx->pc = 0x211078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21107c: 0xc085400
    ctx->pc = 0x21107Cu;
    SET_GPR_U32(ctx, 31, 0x211084u);
    ctx->pc = 0x211080u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211084u; }
        else if (ctx->pc != 0x211084u) { ctx->pc = 0x211084u; }
    }
    if (ctx->pc != 0x211084u) { return; }
    ctx->pc = 0x211084u;
    // 0x211084: 0x4bff6b7e
    ctx->pc = 0x211084u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x211088: 0x4bfe6b7e
    ctx->pc = 0x211088u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21108c: 0x4bfd6b7e
    ctx->pc = 0x21108cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211090: 0x4bfc6b7e
    ctx->pc = 0x211090u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x211094: 0x8e230020
    ctx->pc = 0x211094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x211098: 0x1060000f
    ctx->pc = 0x211098u;
    {
        const bool branch_taken_0x211098 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x211098) {
            ctx->pc = 0x2110D8u;
            goto label_2110d8;
        }
    }
    ctx->pc = 0x2110A0u;
    // 0x2110a0: 0xc64e0008
    ctx->pc = 0x2110a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2110a4: 0x44806000
    ctx->pc = 0x2110a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2110a8: 0xc06c202
    ctx->pc = 0x2110A8u;
    SET_GPR_U32(ctx, 31, 0x2110B0u);
    ctx->pc = 0x2110ACu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110B0u; }
        else if (ctx->pc != 0x2110B0u) { ctx->pc = 0x2110B0u; }
    }
    if (ctx->pc != 0x2110B0u) { return; }
    ctx->pc = 0x2110B0u;
    // 0x2110b0: 0x8e230020
    ctx->pc = 0x2110b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2110b4: 0x3c020001
    ctx->pc = 0x2110b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2110b8: 0x3442000b
    ctx->pc = 0x2110b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11));
    // 0x2110bc: 0x24050001
    ctx->pc = 0x2110bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2110c0: 0xc085400
    ctx->pc = 0x2110C0u;
    SET_GPR_U32(ctx, 31, 0x2110C8u);
    ctx->pc = 0x2110C4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110C8u; }
        else if (ctx->pc != 0x2110C8u) { ctx->pc = 0x2110C8u; }
    }
    if (ctx->pc != 0x2110C8u) { return; }
    ctx->pc = 0x2110C8u;
    // 0x2110c8: 0x8e230020
    ctx->pc = 0x2110c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2110cc: 0x2463ffff
    ctx->pc = 0x2110ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2110d0: 0xae230020
    ctx->pc = 0x2110d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x2110d4: 0x0
    ctx->pc = 0x2110d4u;
    // NOP
label_2110d8:
    // 0x2110d8: 0x26100001
    ctx->pc = 0x2110d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2110dc:
    // 0x2110dc: 0x2a030012
    ctx->pc = 0x2110dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 18));
    // 0x2110e0: 0x1460ffc3
    ctx->pc = 0x2110E0u;
    {
        const bool branch_taken_0x2110e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2110E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 44));
        if (branch_taken_0x2110e0) {
            ctx->pc = 0x210FF0u;
            goto label_210ff0;
        }
    }
    ctx->pc = 0x2110E8u;
    // 0x2110e8: 0x4bff6b7e
    ctx->pc = 0x2110e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2110ec: 0x4bfe6b7e
    ctx->pc = 0x2110ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2110f0: 0x4bfd6b7e
    ctx->pc = 0x2110f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2110f4: 0x4bfc6b7e
    ctx->pc = 0x2110f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2110f8: 0x7bbf0030
    ctx->pc = 0x2110f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2110fc: 0x7bb20020
    ctx->pc = 0x2110fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211100: 0x7bb10010
    ctx->pc = 0x211100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211104: 0x7bb00000
    ctx->pc = 0x211104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211108: 0x3e00008
    ctx->pc = 0x211108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21110Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210FF0u: goto label_210ff0;
            case 0x2110D8u: goto label_2110d8;
            case 0x2110DCu: goto label_2110dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211110u;
}
