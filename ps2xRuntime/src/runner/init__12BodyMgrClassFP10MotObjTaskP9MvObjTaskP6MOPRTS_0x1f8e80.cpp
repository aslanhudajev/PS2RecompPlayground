#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS
// Address: 0x1f8e80 - 0x1f91fc
void init__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1f8e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS");


    ctx->pc = 0x1f8e80u;

    // 0x1f8e80: 0x27bdff90
    ctx->pc = 0x1f8e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f8e84: 0x7fbf0060
    ctx->pc = 0x1f8e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1f8e88: 0x7fb50050
    ctx->pc = 0x1f8e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f8e8c: 0x7fb40040
    ctx->pc = 0x1f8e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f8e90: 0x7fb30030
    ctx->pc = 0x1f8e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f8e94: 0x7fb20020
    ctx->pc = 0x1f8e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f8e98: 0x7fb10010
    ctx->pc = 0x1f8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f8e9c: 0x7fb00000
    ctx->pc = 0x1f8e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8ea0: 0x70a0a628
    ctx->pc = 0x1f8ea0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f8ea4: 0x70c09e28
    ctx->pc = 0x1f8ea4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1f8ea8: 0x84a5002c
    ctx->pc = 0x1f8ea8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1f8eac: 0x8e860004
    ctx->pc = 0x1f8eacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1f8eb0: 0x7080ae28
    ctx->pc = 0x1f8eb0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f8eb4: 0x70e09628
    ctx->pc = 0x1f8eb4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1f8eb8: 0x27848d4c
    ctx->pc = 0x1f8eb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1f8ebc: 0xc07f1d8
    ctx->pc = 0x1F8EBCu;
    SET_GPR_U32(ctx, 31, 0x1F8EC4u);
    ctx->pc = 0x1F8EC0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8EC4u; }
        else if (ctx->pc != 0x1F8EC4u) { ctx->pc = 0x1F8EC4u; }
    }
    if (ctx->pc != 0x1F8EC4u) { return; }
    ctx->pc = 0x1F8EC4u;
    // 0x1f8ec4: 0x8683002c
    ctx->pc = 0x1f8ec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1f8ec8: 0x70408628
    ctx->pc = 0x1f8ec8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f8ecc: 0x3c0101f3
    ctx->pc = 0x1f8eccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1f8ed0: 0x31080
    ctx->pc = 0x1f8ed0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f8ed4: 0x410821
    ctx->pc = 0x1f8ed4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f8ed8: 0x8c319730
    ctx->pc = 0x1f8ed8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
    // 0x1f8edc: 0x4bede37d
    ctx->pc = 0x1f8edcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1f8ee0: 0x4bedeb7d
    ctx->pc = 0x1f8ee0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1f8ee4: 0x4bedf37d
    ctx->pc = 0x1f8ee4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1f8ee8: 0x4bedfb7d
    ctx->pc = 0x1f8ee8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1f8eec: 0x24020021
    ctx->pc = 0x1f8eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1f8ef0: 0x10620005
    ctx->pc = 0x1F8EF0u;
    {
        const bool branch_taken_0x1f8ef0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F8EF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16332 << 16));
        if (branch_taken_0x1f8ef0) {
            ctx->pc = 0x1F8F08u;
            goto label_1f8f08;
        }
    }
    ctx->pc = 0x1F8EF8u;
    // 0x1f8ef8: 0x3c023f80
    ctx->pc = 0x1f8ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f8efc: 0x10000004
    ctx->pc = 0x1F8EFCu;
    {
        const bool branch_taken_0x1f8efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F8F00u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 7328), GPR_U32(ctx, 2));
        if (branch_taken_0x1f8efc) {
            ctx->pc = 0x1F8F10u;
            goto label_1f8f10;
        }
    }
    ctx->pc = 0x1F8F04u;
    // 0x1f8f04: 0x3c023fcc
    ctx->pc = 0x1f8f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16332 << 16));
label_1f8f08:
    // 0x1f8f08: 0x3442cccd
    ctx->pc = 0x1f8f08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1f8f0c: 0xae821ca0
    ctx->pc = 0x1f8f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7328), GPR_U32(ctx, 2));
label_1f8f10:
    // 0x1f8f10: 0xae80000c
    ctx->pc = 0x1f8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x1f8f14: 0xae80001c
    ctx->pc = 0x1f8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x1f8f18: 0xae800014
    ctx->pc = 0x1f8f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x1f8f1c: 0xa280003a
    ctx->pc = 0x1f8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8f20: 0x24020003
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8f24: 0xae821c9c
    ctx->pc = 0x1f8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7324), GPR_U32(ctx, 2));
    // 0x1f8f28: 0x24020005
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f8f2c: 0xae821c98
    ctx->pc = 0x1f8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7320), GPR_U32(ctx, 2));
    // 0x1f8f30: 0xa280003c
    ctx->pc = 0x1f8f30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8f34: 0x2602000c
    ctx->pc = 0x1f8f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f8f38: 0xaea20060
    ctx->pc = 0x1f8f38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
    // 0x1f8f3c: 0xaeb20000
    ctx->pc = 0x1f8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x1f8f40: 0x72a02628
    ctx->pc = 0x1f8f40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1f8f44: 0x70002e28
    ctx->pc = 0x1f8f44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f8f48: 0x70003628
    ctx->pc = 0x1f8f48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f8f4c: 0xc07ec0c
    ctx->pc = 0x1F8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F8F54u);
    ctx->pc = 0x1F8F50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 20));
    ctx->pc = 0x1FB030u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDivNum__12BodyMgrClassFii_0x1fb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F54u; }
        else if (ctx->pc != 0x1F8F54u) { ctx->pc = 0x1F8F54u; }
    }
    if (ctx->pc != 0x1F8F54u) { return; }
    ctx->pc = 0x1F8F54u;
    // 0x1f8f54: 0x8f848c48
    ctx->pc = 0x1f8f54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f8f58: 0x8c830004
    ctx->pc = 0x1f8f58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f8f5c: 0x31040
    ctx->pc = 0x1f8f5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8f60: 0x431021
    ctx->pc = 0x1f8f60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f8f64: 0x21080
    ctx->pc = 0x1f8f64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8f68: 0x431021
    ctx->pc = 0x1f8f68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f8f6c: 0x21100
    ctx->pc = 0x1f8f6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f8f70: 0x821021
    ctx->pc = 0x1f8f70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f8f74: 0xc06c038
    ctx->pc = 0x1F8F74u;
    SET_GPR_U32(ctx, 31, 0x1F8F7Cu);
    ctx->pc = 0x1F8F78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F7Cu; }
        else if (ctx->pc != 0x1F8F7Cu) { ctx->pc = 0x1F8F7Cu; }
    }
    if (ctx->pc != 0x1F8F7Cu) { return; }
    ctx->pc = 0x1F8F7Cu;
    // 0x1f8f7c: 0xc66d0004
    ctx->pc = 0x1f8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f8f80: 0xc66e0008
    ctx->pc = 0x1f8f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f8f84: 0xc06c202
    ctx->pc = 0x1F8F84u;
    SET_GPR_U32(ctx, 31, 0x1F8F8Cu);
    ctx->pc = 0x1F8F88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F8Cu; }
        else if (ctx->pc != 0x1F8F8Cu) { ctx->pc = 0x1F8F8Cu; }
    }
    if (ctx->pc != 0x1F8F8Cu) { return; }
    ctx->pc = 0x1F8F8Cu;
    // 0x1f8f8c: 0xc68c1ca0
    ctx->pc = 0x1f8f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f8f90: 0x46006346
    ctx->pc = 0x1f8f90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f8f94: 0xc06c1b3
    ctx->pc = 0x1F8F94u;
    SET_GPR_U32(ctx, 31, 0x1F8F9Cu);
    ctx->pc = 0x1F8F98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F9Cu; }
        else if (ctx->pc != 0x1F8F9Cu) { ctx->pc = 0x1F8F9Cu; }
    }
    if (ctx->pc != 0x1F8F9Cu) { return; }
    ctx->pc = 0x1F8F9Cu;
    // 0x1f8f9c: 0x8e831c98
    ctx->pc = 0x1f8f9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7320)));
    // 0x1f8fa0: 0x24020004
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8fa4: 0x1062002e
    ctx->pc = 0x1F8FA4u;
    {
        const bool branch_taken_0x1f8fa4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f8fa4) {
            ctx->pc = 0x1F9060u;
            goto label_1f9060;
        }
    }
    ctx->pc = 0x1F8FACu;
    // 0x1f8fac: 0x24020003
    ctx->pc = 0x1f8facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8fb0: 0x10620023
    ctx->pc = 0x1F8FB0u;
    {
        const bool branch_taken_0x1f8fb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f8fb0) {
            ctx->pc = 0x1F9040u;
            goto label_1f9040;
        }
    }
    ctx->pc = 0x1F8FB8u;
    // 0x1f8fb8: 0x24020002
    ctx->pc = 0x1f8fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8fbc: 0x10620018
    ctx->pc = 0x1F8FBCu;
    {
        const bool branch_taken_0x1f8fbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f8fbc) {
            ctx->pc = 0x1F9020u;
            goto label_1f9020;
        }
    }
    ctx->pc = 0x1F8FC4u;
    // 0x1f8fc4: 0x24020001
    ctx->pc = 0x1f8fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8fc8: 0x1062000d
    ctx->pc = 0x1F8FC8u;
    {
        const bool branch_taken_0x1f8fc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f8fc8) {
            ctx->pc = 0x1F9000u;
            goto label_1f9000;
        }
    }
    ctx->pc = 0x1F8FD0u;
    // 0x1f8fd0: 0x10600003
    ctx->pc = 0x1F8FD0u;
    {
        const bool branch_taken_0x1f8fd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f8fd0) {
            ctx->pc = 0x1F8FE0u;
            goto label_1f8fe0;
        }
    }
    ctx->pc = 0x1F8FD8u;
    // 0x1f8fd8: 0x1000002a
    ctx->pc = 0x1F8FD8u;
    {
        const bool branch_taken_0x1f8fd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F8FDCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
        if (branch_taken_0x1f8fd8) {
            ctx->pc = 0x1F9084u;
            goto label_1f9084;
        }
    }
    ctx->pc = 0x1F8FE0u;
label_1f8fe0:
    // 0x1f8fe0: 0xc06c09f
    ctx->pc = 0x1F8FE0u;
    SET_GPR_U32(ctx, 31, 0x1F8FE8u);
    ctx->pc = 0x1F8FE4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FE8u; }
        else if (ctx->pc != 0x1F8FE8u) { ctx->pc = 0x1F8FE8u; }
    }
    if (ctx->pc != 0x1F8FE8u) { return; }
    ctx->pc = 0x1F8FE8u;
    // 0x1f8fe8: 0xc06c0fb
    ctx->pc = 0x1F8FE8u;
    SET_GPR_U32(ctx, 31, 0x1F8FF0u);
    ctx->pc = 0x1F8FECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FF0u; }
        else if (ctx->pc != 0x1F8FF0u) { ctx->pc = 0x1F8FF0u; }
    }
    if (ctx->pc != 0x1F8FF0u) { return; }
    ctx->pc = 0x1F8FF0u;
    // 0x1f8ff0: 0xc06c157
    ctx->pc = 0x1F8FF0u;
    SET_GPR_U32(ctx, 31, 0x1F8FF8u);
    ctx->pc = 0x1F8FF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FF8u; }
        else if (ctx->pc != 0x1F8FF8u) { ctx->pc = 0x1F8FF8u; }
    }
    if (ctx->pc != 0x1F8FF8u) { return; }
    ctx->pc = 0x1F8FF8u;
    // 0x1f8ff8: 0x10000029
    ctx->pc = 0x1F8FF8u;
    {
        const bool branch_taken_0x1f8ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F8FFCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1f8ff8) {
            ctx->pc = 0x1F90A0u;
            goto label_1f90a0;
        }
    }
    ctx->pc = 0x1F9000u;
label_1f9000:
    // 0x1f9000: 0xc06c09f
    ctx->pc = 0x1F9000u;
    SET_GPR_U32(ctx, 31, 0x1F9008u);
    ctx->pc = 0x1F9004u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9008u; }
        else if (ctx->pc != 0x1F9008u) { ctx->pc = 0x1F9008u; }
    }
    if (ctx->pc != 0x1F9008u) { return; }
    ctx->pc = 0x1F9008u;
    // 0x1f9008: 0xc06c157
    ctx->pc = 0x1F9008u;
    SET_GPR_U32(ctx, 31, 0x1F9010u);
    ctx->pc = 0x1F900Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9010u; }
        else if (ctx->pc != 0x1F9010u) { ctx->pc = 0x1F9010u; }
    }
    if (ctx->pc != 0x1F9010u) { return; }
    ctx->pc = 0x1F9010u;
    // 0x1f9010: 0xc06c0fb
    ctx->pc = 0x1F9010u;
    SET_GPR_U32(ctx, 31, 0x1F9018u);
    ctx->pc = 0x1F9014u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9018u; }
        else if (ctx->pc != 0x1F9018u) { ctx->pc = 0x1F9018u; }
    }
    if (ctx->pc != 0x1F9018u) { return; }
    ctx->pc = 0x1F9018u;
    // 0x1f9018: 0x10000020
    ctx->pc = 0x1F9018u;
    {
        const bool branch_taken_0x1f9018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9018) {
            ctx->pc = 0x1F909Cu;
            goto label_1f909c;
        }
    }
    ctx->pc = 0x1F9020u;
label_1f9020:
    // 0x1f9020: 0xc06c0fb
    ctx->pc = 0x1F9020u;
    SET_GPR_U32(ctx, 31, 0x1F9028u);
    ctx->pc = 0x1F9024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9028u; }
        else if (ctx->pc != 0x1F9028u) { ctx->pc = 0x1F9028u; }
    }
    if (ctx->pc != 0x1F9028u) { return; }
    ctx->pc = 0x1F9028u;
    // 0x1f9028: 0xc06c09f
    ctx->pc = 0x1F9028u;
    SET_GPR_U32(ctx, 31, 0x1F9030u);
    ctx->pc = 0x1F902Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9030u; }
        else if (ctx->pc != 0x1F9030u) { ctx->pc = 0x1F9030u; }
    }
    if (ctx->pc != 0x1F9030u) { return; }
    ctx->pc = 0x1F9030u;
    // 0x1f9030: 0xc06c157
    ctx->pc = 0x1F9030u;
    SET_GPR_U32(ctx, 31, 0x1F9038u);
    ctx->pc = 0x1F9034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9038u; }
        else if (ctx->pc != 0x1F9038u) { ctx->pc = 0x1F9038u; }
    }
    if (ctx->pc != 0x1F9038u) { return; }
    ctx->pc = 0x1F9038u;
    // 0x1f9038: 0x10000018
    ctx->pc = 0x1F9038u;
    {
        const bool branch_taken_0x1f9038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9038) {
            ctx->pc = 0x1F909Cu;
            goto label_1f909c;
        }
    }
    ctx->pc = 0x1F9040u;
label_1f9040:
    // 0x1f9040: 0xc06c0fb
    ctx->pc = 0x1F9040u;
    SET_GPR_U32(ctx, 31, 0x1F9048u);
    ctx->pc = 0x1F9044u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9048u; }
        else if (ctx->pc != 0x1F9048u) { ctx->pc = 0x1F9048u; }
    }
    if (ctx->pc != 0x1F9048u) { return; }
    ctx->pc = 0x1F9048u;
    // 0x1f9048: 0xc06c157
    ctx->pc = 0x1F9048u;
    SET_GPR_U32(ctx, 31, 0x1F9050u);
    ctx->pc = 0x1F904Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9050u; }
        else if (ctx->pc != 0x1F9050u) { ctx->pc = 0x1F9050u; }
    }
    if (ctx->pc != 0x1F9050u) { return; }
    ctx->pc = 0x1F9050u;
    // 0x1f9050: 0xc06c09f
    ctx->pc = 0x1F9050u;
    SET_GPR_U32(ctx, 31, 0x1F9058u);
    ctx->pc = 0x1F9054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9058u; }
        else if (ctx->pc != 0x1F9058u) { ctx->pc = 0x1F9058u; }
    }
    if (ctx->pc != 0x1F9058u) { return; }
    ctx->pc = 0x1F9058u;
    // 0x1f9058: 0x10000010
    ctx->pc = 0x1F9058u;
    {
        const bool branch_taken_0x1f9058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9058) {
            ctx->pc = 0x1F909Cu;
            goto label_1f909c;
        }
    }
    ctx->pc = 0x1F9060u;
label_1f9060:
    // 0x1f9060: 0xc06c157
    ctx->pc = 0x1F9060u;
    SET_GPR_U32(ctx, 31, 0x1F9068u);
    ctx->pc = 0x1F9064u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9068u; }
        else if (ctx->pc != 0x1F9068u) { ctx->pc = 0x1F9068u; }
    }
    if (ctx->pc != 0x1F9068u) { return; }
    ctx->pc = 0x1F9068u;
    // 0x1f9068: 0xc06c09f
    ctx->pc = 0x1F9068u;
    SET_GPR_U32(ctx, 31, 0x1F9070u);
    ctx->pc = 0x1F906Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9070u; }
        else if (ctx->pc != 0x1F9070u) { ctx->pc = 0x1F9070u; }
    }
    if (ctx->pc != 0x1F9070u) { return; }
    ctx->pc = 0x1F9070u;
    // 0x1f9070: 0xc06c0fb
    ctx->pc = 0x1F9070u;
    SET_GPR_U32(ctx, 31, 0x1F9078u);
    ctx->pc = 0x1F9074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9078u; }
        else if (ctx->pc != 0x1F9078u) { ctx->pc = 0x1F9078u; }
    }
    if (ctx->pc != 0x1F9078u) { return; }
    ctx->pc = 0x1F9078u;
    // 0x1f9078: 0x10000008
    ctx->pc = 0x1F9078u;
    {
        const bool branch_taken_0x1f9078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f9078) {
            ctx->pc = 0x1F909Cu;
            goto label_1f909c;
        }
    }
    ctx->pc = 0x1F9080u;
    // 0x1f9080: 0x8e64002c
    ctx->pc = 0x1f9080u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1f9084:
    // 0x1f9084: 0xc06c157
    ctx->pc = 0x1F9084u;
    SET_GPR_U32(ctx, 31, 0x1F908Cu);
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F908Cu; }
        else if (ctx->pc != 0x1F908Cu) { ctx->pc = 0x1F908Cu; }
    }
    if (ctx->pc != 0x1F908Cu) { return; }
    ctx->pc = 0x1F908Cu;
    // 0x1f908c: 0xc06c0fb
    ctx->pc = 0x1F908Cu;
    SET_GPR_U32(ctx, 31, 0x1F9094u);
    ctx->pc = 0x1F9090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9094u; }
        else if (ctx->pc != 0x1F9094u) { ctx->pc = 0x1F9094u; }
    }
    if (ctx->pc != 0x1F9094u) { return; }
    ctx->pc = 0x1F9094u;
    // 0x1f9094: 0xc06c09f
    ctx->pc = 0x1F9094u;
    SET_GPR_U32(ctx, 31, 0x1F909Cu);
    ctx->pc = 0x1F9098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F909Cu; }
        else if (ctx->pc != 0x1F909Cu) { ctx->pc = 0x1F909Cu; }
    }
    if (ctx->pc != 0x1F909Cu) { return; }
    ctx->pc = 0x1F909Cu;
label_1f909c:
    // 0x1f909c: 0xc6000000
    ctx->pc = 0x1f909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f90a0:
    // 0x1f90a0: 0xe680004c
    ctx->pc = 0x1f90a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x1f90a4: 0xc6000004
    ctx->pc = 0x1f90a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f90a8: 0xe6800050
    ctx->pc = 0x1f90a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
    // 0x1f90ac: 0xc6000008
    ctx->pc = 0x1f90acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f90b0: 0xe6800054
    ctx->pc = 0x1f90b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
    // 0x1f90b4: 0xc680004c
    ctx->pc = 0x1f90b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f90b8: 0xe6800040
    ctx->pc = 0x1f90b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x1f90bc: 0xc6800050
    ctx->pc = 0x1f90bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f90c0: 0xe6800044
    ctx->pc = 0x1f90c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    // 0x1f90c4: 0xc6800054
    ctx->pc = 0x1f90c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f90c8: 0xe6800048
    ctx->pc = 0x1f90c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x1f90cc: 0x8e831c9c
    ctx->pc = 0x1f90ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 7324)));
    // 0x1f90d0: 0x30620010
    ctx->pc = 0x1f90d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x1f90d4: 0x1440000e
    ctx->pc = 0x1F90D4u;
    {
        const bool branch_taken_0x1f90d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f90d4) {
            ctx->pc = 0x1F9110u;
            goto label_1f9110;
        }
    }
    ctx->pc = 0x1F90DCu;
    // 0x1f90dc: 0x30620002
    ctx->pc = 0x1f90dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x1f90e0: 0x10400007
    ctx->pc = 0x1F90E0u;
    {
        const bool branch_taken_0x1f90e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f90e0) {
            ctx->pc = 0x1F9100u;
            goto label_1f9100;
        }
    }
    ctx->pc = 0x1F90E8u;
    // 0x1f90e8: 0xc68d0044
    ctx->pc = 0x1f90e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f90ec: 0x44806000
    ctx->pc = 0x1f90ecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1f90f0: 0xc06c202
    ctx->pc = 0x1F90F0u;
    SET_GPR_U32(ctx, 31, 0x1F90F8u);
    ctx->pc = 0x1F90F4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90F8u; }
        else if (ctx->pc != 0x1F90F8u) { ctx->pc = 0x1F90F8u; }
    }
    if (ctx->pc != 0x1F90F8u) { return; }
    ctx->pc = 0x1F90F8u;
    // 0x1f90f8: 0x10000006
    ctx->pc = 0x1F90F8u;
    {
        const bool branch_taken_0x1f90f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F90FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 96)));
        if (branch_taken_0x1f90f8) {
            ctx->pc = 0x1F9114u;
            goto label_1f9114;
        }
    }
    ctx->pc = 0x1F9100u;
label_1f9100:
    // 0x1f9100: 0xc68d0044
    ctx->pc = 0x1f9100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f9104: 0xc68e0048
    ctx->pc = 0x1f9104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f9108: 0xc06c202
    ctx->pc = 0x1F9108u;
    SET_GPR_U32(ctx, 31, 0x1F9110u);
    ctx->pc = 0x1F910Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9110u; }
        else if (ctx->pc != 0x1F9110u) { ctx->pc = 0x1F9110u; }
    }
    if (ctx->pc != 0x1F9110u) { return; }
    ctx->pc = 0x1F9110u;
label_1f9110:
    // 0x1f9110: 0x8ea30060
    ctx->pc = 0x1f9110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_1f9114:
    // 0x1f9114: 0x8ea20000
    ctx->pc = 0x1f9114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f9118: 0x84630000
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f911c: 0xac430004
    ctx->pc = 0x1f911cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1f9120: 0x8ea30060
    ctx->pc = 0x1f9120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1f9124: 0x8ea20000
    ctx->pc = 0x1f9124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f9128: 0x84630002
    ctx->pc = 0x1f9128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f912c: 0xac430008
    ctx->pc = 0x1f912cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1f9130: 0x8ea30060
    ctx->pc = 0x1f9130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1f9134: 0x8ea20000
    ctx->pc = 0x1f9134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f9138: 0x84630004
    ctx->pc = 0x1f9138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f913c: 0xac43000c
    ctx->pc = 0x1f913cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1f9140: 0x8ea20060
    ctx->pc = 0x1f9140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1f9144: 0xc06c157
    ctx->pc = 0x1F9144u;
    SET_GPR_U32(ctx, 31, 0x1F914Cu);
    ctx->pc = 0x1F9148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F914Cu; }
        else if (ctx->pc != 0x1F914Cu) { ctx->pc = 0x1F914Cu; }
    }
    if (ctx->pc != 0x1F914Cu) { return; }
    ctx->pc = 0x1F914Cu;
    // 0x1f914c: 0x8ea20060
    ctx->pc = 0x1f914cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1f9150: 0xc06c0fb
    ctx->pc = 0x1F9150u;
    SET_GPR_U32(ctx, 31, 0x1F9158u);
    ctx->pc = 0x1F9154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9158u; }
        else if (ctx->pc != 0x1F9158u) { ctx->pc = 0x1F9158u; }
    }
    if (ctx->pc != 0x1F9158u) { return; }
    ctx->pc = 0x1F9158u;
    // 0x1f9158: 0x8ea20060
    ctx->pc = 0x1f9158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1f915c: 0xc06c09f
    ctx->pc = 0x1F915Cu;
    SET_GPR_U32(ctx, 31, 0x1F9164u);
    ctx->pc = 0x1F9160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9164u; }
        else if (ctx->pc != 0x1F9164u) { ctx->pc = 0x1F9164u; }
    }
    if (ctx->pc != 0x1F9164u) { return; }
    ctx->pc = 0x1F9164u;
    // 0x1f9164: 0x70008628
    ctx->pc = 0x1f9164u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9168: 0x10000007
    ctx->pc = 0x1F9168u;
    {
        const bool branch_taken_0x1f9168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F916Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f9168) {
            ctx->pc = 0x1F9188u;
            goto label_1f9188;
        }
    }
    ctx->pc = 0x1F9170u;
label_1f9170:
    // 0x1f9170: 0x8e450024
    ctx->pc = 0x1f9170u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f9174: 0xc07edbc
    ctx->pc = 0x1F9174u;
    SET_GPR_U32(ctx, 31, 0x1F917Cu);
    ctx->pc = 0x1F9178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsInit_rcv__12BodyMgrClassFP7_BODYPT_0x1fb6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F917Cu; }
        else if (ctx->pc != 0x1F917Cu) { ctx->pc = 0x1F917Cu; }
    }
    if (ctx->pc != 0x1F917Cu) { return; }
    ctx->pc = 0x1F917Cu;
    // 0x1f917c: 0x26520004
    ctx->pc = 0x1f917cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f9180: 0x26100001
    ctx->pc = 0x1f9180u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f9184: 0x0
    ctx->pc = 0x1f9184u;
    // NOP
label_1f9188:
    // 0x1f9188: 0x86230022
    ctx->pc = 0x1f9188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1f918c: 0x203182a
    ctx->pc = 0x1f918cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1f9190: 0x1460fff7
    ctx->pc = 0x1F9190u;
    {
        const bool branch_taken_0x1f9190 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f9190) {
            ctx->pc = 0x1F9170u;
            goto label_1f9170;
        }
    }
    ctx->pc = 0x1F9198u;
    // 0x1f9198: 0x4bff6b7e
    ctx->pc = 0x1f9198u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1f919c: 0x4bfe6b7e
    ctx->pc = 0x1f919cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1f91a0: 0x4bfd6b7e
    ctx->pc = 0x1f91a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1f91a4: 0x4bfc6b7e
    ctx->pc = 0x1f91a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1f91a8: 0x8684002c
    ctx->pc = 0x1f91a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1f91ac: 0x3c030027
    ctx->pc = 0x1f91acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1f91b0: 0x246323f0
    ctx->pc = 0x1f91b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9200));
    // 0x1f91b4: 0x42080
    ctx->pc = 0x1f91b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f91b8: 0x641821
    ctx->pc = 0x1f91b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f91bc: 0x8c630000
    ctx->pc = 0x1f91bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f91c0: 0x10600005
    ctx->pc = 0x1F91C0u;
    {
        const bool branch_taken_0x1f91c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f91c0) {
            ctx->pc = 0x1F91D8u;
            goto label_1f91d8;
        }
    }
    ctx->pc = 0x1F91C8u;
    // 0x1f91c8: 0x3c020051
    ctx->pc = 0x1f91c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f91cc: 0x72802e28
    ctx->pc = 0x1f91ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1f91d0: 0xc07f930
    ctx->pc = 0x1F91D0u;
    SET_GPR_U32(ctx, 31, 0x1F91D8u);
    ctx->pc = 0x1F91D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FE4C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        data_set__15OneSkinMgrClassFP10MotObjTask_0x1fe4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F91D8u; }
        else if (ctx->pc != 0x1F91D8u) { ctx->pc = 0x1F91D8u; }
    }
    if (ctx->pc != 0x1F91D8u) { return; }
    ctx->pc = 0x1F91D8u;
label_1f91d8:
    // 0x1f91d8: 0x7bbf0060
    ctx->pc = 0x1f91d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f91dc: 0x7bb50050
    ctx->pc = 0x1f91dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f91e0: 0x7bb40040
    ctx->pc = 0x1f91e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f91e4: 0x7bb30030
    ctx->pc = 0x1f91e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f91e8: 0x7bb20020
    ctx->pc = 0x1f91e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f91ec: 0x7bb10010
    ctx->pc = 0x1f91ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f91f0: 0x7bb00000
    ctx->pc = 0x1f91f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f91f4: 0x3e00008
    ctx->pc = 0x1F91F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F91F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8F08u: goto label_1f8f08;
            case 0x1F8F10u: goto label_1f8f10;
            case 0x1F8FE0u: goto label_1f8fe0;
            case 0x1F9000u: goto label_1f9000;
            case 0x1F9020u: goto label_1f9020;
            case 0x1F9040u: goto label_1f9040;
            case 0x1F9060u: goto label_1f9060;
            case 0x1F9084u: goto label_1f9084;
            case 0x1F909Cu: goto label_1f909c;
            case 0x1F90A0u: goto label_1f90a0;
            case 0x1F9100u: goto label_1f9100;
            case 0x1F9110u: goto label_1f9110;
            case 0x1F9114u: goto label_1f9114;
            case 0x1F9170u: goto label_1f9170;
            case 0x1F9188u: goto label_1f9188;
            case 0x1F91D8u: goto label_1f91d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F91FCu;
}
