#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispDead__7BudTaskFv
// Address: 0x204e00 - 0x20506c
void DispDead__7BudTaskFv_0x204e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispDead__7BudTaskFv");


    ctx->pc = 0x204e00u;

    // 0x204e00: 0x27bdffa0
    ctx->pc = 0x204e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x204e04: 0x7fbf0040
    ctx->pc = 0x204e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x204e08: 0x7fb30030
    ctx->pc = 0x204e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x204e0c: 0x7fb20020
    ctx->pc = 0x204e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x204e10: 0x7fb10010
    ctx->pc = 0x204e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204e14: 0x70809e28
    ctx->pc = 0x204e14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x204e18: 0x3c020050
    ctx->pc = 0x204e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x204e1c: 0x2444e510
    ctx->pc = 0x204e1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x204e20: 0xc07ce18
    ctx->pc = 0x204E20u;
    SET_GPR_U32(ctx, 31, 0x204E28u);
    ctx->pc = 0x204E24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E28u; }
        else if (ctx->pc != 0x204E28u) { ctx->pc = 0x204E28u; }
    }
    if (ctx->pc != 0x204E28u) { return; }
    ctx->pc = 0x204E28u;
    // 0x204e28: 0x1c400015
    ctx->pc = 0x204E28u;
    {
        const bool branch_taken_0x204e28 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x204e28) {
            ctx->pc = 0x204E80u;
            goto label_204e80;
        }
    }
    ctx->pc = 0x204E30u;
    // 0x204e30: 0xc6610038
    ctx->pc = 0x204e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e34: 0xc660002c
    ctx->pc = 0x204e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204e38: 0x46010000
    ctx->pc = 0x204e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204e3c: 0xe660002c
    ctx->pc = 0x204e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x204e40: 0xc661003c
    ctx->pc = 0x204e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e44: 0xc6600030
    ctx->pc = 0x204e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204e48: 0x46010000
    ctx->pc = 0x204e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204e4c: 0xe6600030
    ctx->pc = 0x204e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x204e50: 0xc6610040
    ctx->pc = 0x204e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e54: 0xc6600034
    ctx->pc = 0x204e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204e58: 0x46010000
    ctx->pc = 0x204e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204e5c: 0xe6600034
    ctx->pc = 0x204e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x204e60: 0xc6610048
    ctx->pc = 0x204e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e64: 0xc660003c
    ctx->pc = 0x204e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204e68: 0x46010000
    ctx->pc = 0x204e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204e6c: 0xe660003c
    ctx->pc = 0x204e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x204e70: 0xc661004c
    ctx->pc = 0x204e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204e74: 0xc6600044
    ctx->pc = 0x204e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204e78: 0x46010000
    ctx->pc = 0x204e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204e7c: 0xe6600044
    ctx->pc = 0x204e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_204e80:
    // 0x204e80: 0xc6600044
    ctx->pc = 0x204e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204e84: 0x44800800
    ctx->pc = 0x204e84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x204e88: 0x0
    ctx->pc = 0x204e88u;
    // NOP
    // 0x204e8c: 0x46010036
    ctx->pc = 0x204e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204e90: 0x0
    ctx->pc = 0x204e90u;
    // NOP
    // 0x204e94: 0x45000003
    ctx->pc = 0x204E94u;
    {
        const bool branch_taken_0x204e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204e94) {
            ctx->pc = 0x204EA4u;
            goto label_204ea4;
        }
    }
    ctx->pc = 0x204E9Cu;
    // 0x204e9c: 0xc06898c
    ctx->pc = 0x204E9Cu;
    SET_GPR_U32(ctx, 31, 0x204EA4u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EA4u; }
        else if (ctx->pc != 0x204EA4u) { ctx->pc = 0x204EA4u; }
    }
    if (ctx->pc != 0x204EA4u) { return; }
    ctx->pc = 0x204EA4u;
label_204ea4:
    // 0x204ea4: 0x4bede37d
    ctx->pc = 0x204ea4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x204ea8: 0x4bedeb7d
    ctx->pc = 0x204ea8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x204eac: 0x4bedf37d
    ctx->pc = 0x204eacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x204eb0: 0xc06c20d
    ctx->pc = 0x204EB0u;
    SET_GPR_U32(ctx, 31, 0x204EB8u);
    ctx->pc = 0x204EB4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EB8u; }
        else if (ctx->pc != 0x204EB8u) { ctx->pc = 0x204EB8u; }
    }
    if (ctx->pc != 0x204EB8u) { return; }
    ctx->pc = 0x204EB8u;
    // 0x204eb8: 0xc66d0030
    ctx->pc = 0x204eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204ebc: 0xc66e0034
    ctx->pc = 0x204ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x204ec0: 0xc06c202
    ctx->pc = 0x204EC0u;
    SET_GPR_U32(ctx, 31, 0x204EC8u);
    ctx->pc = 0x204EC4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EC8u; }
        else if (ctx->pc != 0x204EC8u) { ctx->pc = 0x204EC8u; }
    }
    if (ctx->pc != 0x204EC8u) { return; }
    ctx->pc = 0x204EC8u;
    // 0x204ec8: 0xc06c157
    ctx->pc = 0x204EC8u;
    SET_GPR_U32(ctx, 31, 0x204ED0u);
    ctx->pc = 0x204ECCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 88)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ED0u; }
        else if (ctx->pc != 0x204ED0u) { ctx->pc = 0x204ED0u; }
    }
    if (ctx->pc != 0x204ED0u) { return; }
    ctx->pc = 0x204ED0u;
    // 0x204ed0: 0xc06c0fb
    ctx->pc = 0x204ED0u;
    SET_GPR_U32(ctx, 31, 0x204ED8u);
    ctx->pc = 0x204ED4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ED8u; }
        else if (ctx->pc != 0x204ED8u) { ctx->pc = 0x204ED8u; }
    }
    if (ctx->pc != 0x204ED8u) { return; }
    ctx->pc = 0x204ED8u;
    // 0x204ed8: 0xc06c09f
    ctx->pc = 0x204ED8u;
    SET_GPR_U32(ctx, 31, 0x204EE0u);
    ctx->pc = 0x204EDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 80)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EE0u; }
        else if (ctx->pc != 0x204EE0u) { ctx->pc = 0x204EE0u; }
    }
    if (ctx->pc != 0x204EE0u) { return; }
    ctx->pc = 0x204EE0u;
    // 0x204ee0: 0x8e62014c
    ctx->pc = 0x204ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x204ee4: 0xc44d001c
    ctx->pc = 0x204ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204ee8: 0xc44e0020
    ctx->pc = 0x204ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x204eec: 0xc06c202
    ctx->pc = 0x204EECu;
    SET_GPR_U32(ctx, 31, 0x204EF4u);
    ctx->pc = 0x204EF0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EF4u; }
        else if (ctx->pc != 0x204EF4u) { ctx->pc = 0x204EF4u; }
    }
    if (ctx->pc != 0x204EF4u) { return; }
    ctx->pc = 0x204EF4u;
    // 0x204ef4: 0xc06bfd2
    ctx->pc = 0x204EF4u;
    SET_GPR_U32(ctx, 31, 0x204EFCu);
    ctx->pc = 0x204EF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EFCu; }
        else if (ctx->pc != 0x204EFCu) { ctx->pc = 0x204EFCu; }
    }
    if (ctx->pc != 0x204EFCu) { return; }
    ctx->pc = 0x204EFCu;
    // 0x204efc: 0x27b00054
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 84));
    // 0x204f00: 0xc6000000
    ctx->pc = 0x204f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204f04: 0x3c024120
    ctx->pc = 0x204f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16672 << 16));
    // 0x204f08: 0x44820800
    ctx->pc = 0x204f08u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x204f0c: 0x72602628
    ctx->pc = 0x204f0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x204f10: 0x27a50050
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x204f14: 0x46010000
    ctx->pc = 0x204f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204f18: 0xc253ac0
    ctx->pc = 0x204F18u;
    SET_GPR_U32(ctx, 31, 0x204F20u);
    ctx->pc = 0x204F1Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->pc = 0x94EB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        EN_HighGet__FP9EnemyTaskP11tagNLpoint3_0x94eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F20u; }
        else if (ctx->pc != 0x204F20u) { ctx->pc = 0x204F20u; }
    }
    if (ctx->pc != 0x204F20u) { return; }
    ctx->pc = 0x204F20u;
    // 0x204f20: 0xc6030000
    ctx->pc = 0x204f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x204f24: 0x3c024120
    ctx->pc = 0x204f24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16672 << 16));
    // 0x204f28: 0x44821000
    ctx->pc = 0x204f28u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x204f2c: 0x3c023f80
    ctx->pc = 0x204f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x204f30: 0x44820800
    ctx->pc = 0x204f30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x204f34: 0x46021881
    ctx->pc = 0x204f34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x204f38: 0x46011041
    ctx->pc = 0x204f38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x204f3c: 0x46010036
    ctx->pc = 0x204f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204f40: 0x0
    ctx->pc = 0x204f40u;
    // NOP
    // 0x204f44: 0x45010008
    ctx->pc = 0x204F44u;
    {
        const bool branch_taken_0x204f44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204f44) {
            ctx->pc = 0x204F68u;
            goto label_204f68;
        }
    }
    ctx->pc = 0x204F4Cu;
    // 0x204f4c: 0xae600048
    ctx->pc = 0x204f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x204f50: 0xae600040
    ctx->pc = 0x204f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x204f54: 0xae60003c
    ctx->pc = 0x204f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x204f58: 0x3c02bcf5
    ctx->pc = 0x204f58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48373 << 16));
    // 0x204f5c: 0xae600038
    ctx->pc = 0x204f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
    // 0x204f60: 0x3442c28f
    ctx->pc = 0x204f60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49807));
    // 0x204f64: 0xae62004c
    ctx->pc = 0x204f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
label_204f68:
    // 0x204f68: 0x8f848c48
    ctx->pc = 0x204f68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x204f6c: 0x8c830004
    ctx->pc = 0x204f6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204f70: 0x31040
    ctx->pc = 0x204f70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x204f74: 0x431021
    ctx->pc = 0x204f74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204f78: 0x21080
    ctx->pc = 0x204f78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x204f7c: 0x431021
    ctx->pc = 0x204f7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204f80: 0x21100
    ctx->pc = 0x204f80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x204f84: 0x821021
    ctx->pc = 0x204f84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204f88: 0xc06c038
    ctx->pc = 0x204F88u;
    SET_GPR_U32(ctx, 31, 0x204F90u);
    ctx->pc = 0x204F8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F90u; }
        else if (ctx->pc != 0x204F90u) { ctx->pc = 0x204F90u; }
    }
    if (ctx->pc != 0x204F90u) { return; }
    ctx->pc = 0x204F90u;
    // 0x204f90: 0xc66d0030
    ctx->pc = 0x204f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204f94: 0xc66e0034
    ctx->pc = 0x204f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x204f98: 0xc06c202
    ctx->pc = 0x204F98u;
    SET_GPR_U32(ctx, 31, 0x204FA0u);
    ctx->pc = 0x204F9Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FA0u; }
        else if (ctx->pc != 0x204FA0u) { ctx->pc = 0x204FA0u; }
    }
    if (ctx->pc != 0x204FA0u) { return; }
    ctx->pc = 0x204FA0u;
    // 0x204fa0: 0xc06c157
    ctx->pc = 0x204FA0u;
    SET_GPR_U32(ctx, 31, 0x204FA8u);
    ctx->pc = 0x204FA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 88)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FA8u; }
        else if (ctx->pc != 0x204FA8u) { ctx->pc = 0x204FA8u; }
    }
    if (ctx->pc != 0x204FA8u) { return; }
    ctx->pc = 0x204FA8u;
    // 0x204fa8: 0xc06c0fb
    ctx->pc = 0x204FA8u;
    SET_GPR_U32(ctx, 31, 0x204FB0u);
    ctx->pc = 0x204FACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FB0u; }
        else if (ctx->pc != 0x204FB0u) { ctx->pc = 0x204FB0u; }
    }
    if (ctx->pc != 0x204FB0u) { return; }
    ctx->pc = 0x204FB0u;
    // 0x204fb0: 0xc06c09f
    ctx->pc = 0x204FB0u;
    SET_GPR_U32(ctx, 31, 0x204FB8u);
    ctx->pc = 0x204FB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 80)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FB8u; }
        else if (ctx->pc != 0x204FB8u) { ctx->pc = 0x204FB8u; }
    }
    if (ctx->pc != 0x204FB8u) { return; }
    ctx->pc = 0x204FB8u;
    // 0x204fb8: 0x70008628
    ctx->pc = 0x204fb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204fbc: 0x70009628
    ctx->pc = 0x204fbcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_204fc0:
    // 0x204fc0: 0x8e63014c
    ctx->pc = 0x204fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x204fc4: 0x721821
    ctx->pc = 0x204fc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x204fc8: 0x8c630000
    ctx->pc = 0x204fc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204fcc: 0x50600019
    ctx->pc = 0x204FCCu;
    {
        const bool branch_taken_0x204fcc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x204fcc) {
            ctx->pc = 0x204FD0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x205034u;
            goto label_205034;
        }
    }
    ctx->pc = 0x204FD4u;
    // 0x204fd4: 0x8c650000
    ctx->pc = 0x204fd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204fd8: 0x3c020027
    ctx->pc = 0x204fd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x204fdc: 0x2444cfb0
    ctx->pc = 0x204fdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x204fe0: 0x3c020050
    ctx->pc = 0x204fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x204fe4: 0x52880
    ctx->pc = 0x204fe4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x204fe8: 0x852021
    ctx->pc = 0x204fe8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x204fec: 0x8c910000
    ctx->pc = 0x204fecu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204ff0: 0x2443ea20
    ctx->pc = 0x204ff0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x204ff4: 0x3c028000
    ctx->pc = 0x204ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x204ff8: 0x112403
    ctx->pc = 0x204ff8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 16));
    // 0x204ffc: 0x3085ffff
    ctx->pc = 0x204ffcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65535));
    // 0x205000: 0x52100
    ctx->pc = 0x205000u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x205004: 0x641821
    ctx->pc = 0x205004u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x205008: 0x8c630000
    ctx->pc = 0x205008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20500c: 0x621024
    ctx->pc = 0x20500cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205010: 0x14400003
    ctx->pc = 0x205010u;
    {
        const bool branch_taken_0x205010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205014u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x205010) {
            ctx->pc = 0x205020u;
            goto label_205020;
        }
    }
    ctx->pc = 0x205018u;
    // 0x205018: 0xc0863cc
    ctx->pc = 0x205018u;
    SET_GPR_U32(ctx, 31, 0x205020u);
    ctx->pc = 0x20501Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205020u; }
        else if (ctx->pc != 0x205020u) { ctx->pc = 0x205020u; }
    }
    if (ctx->pc != 0x205020u) { return; }
    ctx->pc = 0x205020u;
label_205020:
    // 0x205020: 0xc66c0044
    ctx->pc = 0x205020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205024: 0xc0853e4
    ctx->pc = 0x205024u;
    SET_GPR_U32(ctx, 31, 0x20502Cu);
    ctx->pc = 0x205028u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20502Cu; }
        else if (ctx->pc != 0x20502Cu) { ctx->pc = 0x20502Cu; }
    }
    if (ctx->pc != 0x20502Cu) { return; }
    ctx->pc = 0x20502Cu;
    // 0x20502c: 0x0
    ctx->pc = 0x20502cu;
    // NOP
    // 0x205030: 0x26100001
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_205034:
    // 0x205034: 0x2a030002
    ctx->pc = 0x205034u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x205038: 0x1460ffe1
    ctx->pc = 0x205038u;
    {
        const bool branch_taken_0x205038 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20503Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x205038) {
            ctx->pc = 0x204FC0u;
            goto label_204fc0;
        }
    }
    ctx->pc = 0x205040u;
    // 0x205040: 0x4bff6b7e
    ctx->pc = 0x205040u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x205044: 0x4bfe6b7e
    ctx->pc = 0x205044u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x205048: 0x4bfd6b7e
    ctx->pc = 0x205048u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20504c: 0x4bfc6b7e
    ctx->pc = 0x20504cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x205050: 0x7bbf0040
    ctx->pc = 0x205050u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205054: 0x7bb30030
    ctx->pc = 0x205054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205058: 0x7bb20020
    ctx->pc = 0x205058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20505c: 0x7bb10010
    ctx->pc = 0x20505cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205060: 0x7bb00000
    ctx->pc = 0x205060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205064: 0x3e00008
    ctx->pc = 0x205064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204E80u: goto label_204e80;
            case 0x204EA4u: goto label_204ea4;
            case 0x204F68u: goto label_204f68;
            case 0x204FC0u: goto label_204fc0;
            case 0x205020u: goto label_205020;
            case 0x205034u: goto label_205034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20506Cu;
}
