#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Disp__10PeopleTaskFv
// Address: 0x205f60 - 0x206214
void Disp__10PeopleTaskFv_0x205f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Disp__10PeopleTaskFv");


    ctx->pc = 0x205f60u;

    // 0x205f60: 0x27bdff80
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x205f64: 0x7fbf0030
    ctx->pc = 0x205f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x205f68: 0x7fb20020
    ctx->pc = 0x205f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x205f6c: 0x7fb10010
    ctx->pc = 0x205f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205f70: 0x7fb00000
    ctx->pc = 0x205f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205f74: 0x70809628
    ctx->pc = 0x205f74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x205f78: 0x80841cc0
    ctx->pc = 0x205f78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7360)));
    // 0x205f7c: 0x28810002
    ctx->pc = 0x205f7cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 2));
    // 0x205f80: 0x10200018
    ctx->pc = 0x205F80u;
    {
        const bool branch_taken_0x205f80 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x205F84u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x205f80) {
            ctx->pc = 0x205FE4u;
            goto label_205fe4;
        }
    }
    ctx->pc = 0x205F88u;
    // 0x205f88: 0x14830016
    ctx->pc = 0x205F88u;
    {
        const bool branch_taken_0x205f88 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x205f88) {
            ctx->pc = 0x205FE4u;
            goto label_205fe4;
        }
    }
    ctx->pc = 0x205F90u;
    // 0x205f90: 0x8e441ccc
    ctx->pc = 0x205f90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7372)));
    // 0x205f94: 0x30830002
    ctx->pc = 0x205f94u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x205f98: 0x10600012
    ctx->pc = 0x205F98u;
    {
        const bool branch_taken_0x205f98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x205F9Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x205f98) {
            ctx->pc = 0x205FE4u;
            goto label_205fe4;
        }
    }
    ctx->pc = 0x205FA0u;
    // 0x205fa0: 0x10600010
    ctx->pc = 0x205FA0u;
    {
        const bool branch_taken_0x205fa0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x205fa0) {
            ctx->pc = 0x205FE4u;
            goto label_205fe4;
        }
    }
    ctx->pc = 0x205FA8u;
    // 0x205fa8: 0x4bede37d
    ctx->pc = 0x205fa8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x205fac: 0x4bedeb7d
    ctx->pc = 0x205facu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x205fb0: 0x4bedf37d
    ctx->pc = 0x205fb0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x205fb4: 0x4bedfb7d
    ctx->pc = 0x205fb4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x205fb8: 0x3c024040
    ctx->pc = 0x205fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x205fbc: 0xc6400274
    ctx->pc = 0x205fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205fc0: 0x44820800
    ctx->pc = 0x205fc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x205fc4: 0x8e440030
    ctx->pc = 0x205fc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x205fc8: 0x72402e28
    ctx->pc = 0x205fc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x205fcc: 0xc253430
    ctx->pc = 0x205FCCu;
    SET_GPR_U32(ctx, 31, 0x205FD4u);
    ctx->pc = 0x205FD0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x94D0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnEtc4ShadowPut__FP11tagNLpoint3fP9EnemyTask_0x94d0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205FD4u; }
        else if (ctx->pc != 0x205FD4u) { ctx->pc = 0x205FD4u; }
    }
    if (ctx->pc != 0x205FD4u) { return; }
    ctx->pc = 0x205FD4u;
    // 0x205fd4: 0x4bff6b7e
    ctx->pc = 0x205fd4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x205fd8: 0x4bfe6b7e
    ctx->pc = 0x205fd8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x205fdc: 0x4bfd6b7e
    ctx->pc = 0x205fdcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x205fe0: 0x4bfc6b7e
    ctx->pc = 0x205fe0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_205fe4:
    // 0x205fe4: 0x8f848cb0
    ctx->pc = 0x205fe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x205fe8: 0x24030001
    ctx->pc = 0x205fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x205fec: 0x30840004
    ctx->pc = 0x205fecu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 4));
    // 0x205ff0: 0x4180a
    ctx->pc = 0x205ff0u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x205ff4: 0x1460001d
    ctx->pc = 0x205FF4u;
    {
        const bool branch_taken_0x205ff4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x205FF8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x205ff4) {
            ctx->pc = 0x20606Cu;
            goto label_20606c;
        }
    }
    ctx->pc = 0x205FFCu;
    // 0x205ffc: 0xc0810b8
    ctx->pc = 0x205FFCu;
    SET_GPR_U32(ctx, 31, 0x206004u);
    ctx->pc = 0x2042E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LocalLightOn__FP10PeopleTask_0x2042e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206004u; }
        else if (ctx->pc != 0x206004u) { ctx->pc = 0x206004u; }
    }
    if (ctx->pc != 0x206004u) { return; }
    ctx->pc = 0x206004u;
    // 0x206004: 0x12400003
    ctx->pc = 0x206004u;
    {
        const bool branch_taken_0x206004 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x206008u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206004) {
            ctx->pc = 0x206014u;
            goto label_206014;
        }
    }
    ctx->pc = 0x20600Cu;
    // 0x20600c: 0x8e460030
    ctx->pc = 0x20600cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x206010: 0x0
    ctx->pc = 0x206010u;
    // NOP
label_206014:
    // 0x206014: 0x12400002
    ctx->pc = 0x206014u;
    {
        const bool branch_taken_0x206014 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x206018u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206014) {
            ctx->pc = 0x206020u;
            goto label_206020;
        }
    }
    ctx->pc = 0x20601Cu;
    // 0x20601c: 0x24a50030
    ctx->pc = 0x20601cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_206020:
    // 0x206020: 0x3c02004a
    ctx->pc = 0x206020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x206024: 0x2444e8e0
    ctx->pc = 0x206024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    // 0x206028: 0xc07e480
    ctx->pc = 0x206028u;
    SET_GPR_U32(ctx, 31, 0x206030u);
    ctx->pc = 0x20602Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 160));
    ctx->pc = 0x1F9200u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrl__12BodyMgrClassFP10MotObjTaskP9MvObjTaskP6MOPRTS_0x1f9200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206030u; }
        else if (ctx->pc != 0x206030u) { ctx->pc = 0x206030u; }
    }
    if (ctx->pc != 0x206030u) { return; }
    ctx->pc = 0x206030u;
    // 0x206030: 0x8643005c
    ctx->pc = 0x206030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x206034: 0x2402003a
    ctx->pc = 0x206034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x206038: 0x10620003
    ctx->pc = 0x206038u;
    {
        const bool branch_taken_0x206038 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20603Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x206038) {
            ctx->pc = 0x206048u;
            goto label_206048;
        }
    }
    ctx->pc = 0x206040u;
    // 0x206040: 0x10000008
    ctx->pc = 0x206040u;
    {
        const bool branch_taken_0x206040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x206040) {
            ctx->pc = 0x206064u;
            goto label_206064;
        }
    }
    ctx->pc = 0x206048u;
label_206048:
    // 0x206048: 0x12400002
    ctx->pc = 0x206048u;
    {
        const bool branch_taken_0x206048 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x20604Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x206048) {
            ctx->pc = 0x206054u;
            goto label_206054;
        }
    }
    ctx->pc = 0x206050u;
    // 0x206050: 0x24a50030
    ctx->pc = 0x206050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_206054:
    // 0x206054: 0x24442250
    ctx->pc = 0x206054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    // 0x206058: 0x3c020027
    ctx->pc = 0x206058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20605c: 0xc07fb50
    ctx->pc = 0x20605Cu;
    SET_GPR_U32(ctx, 31, 0x206064u);
    ctx->pc = 0x206060u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7232));
    ctx->pc = 0x1FED40u;
    {
        const uint32_t __entryPc = ctx->pc;
        attach__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DB_0x1fed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206064u; }
        else if (ctx->pc != 0x206064u) { ctx->pc = 0x206064u; }
    }
    if (ctx->pc != 0x206064u) { return; }
    ctx->pc = 0x206064u;
label_206064:
    // 0x206064: 0xc0810e8
    ctx->pc = 0x206064u;
    SET_GPR_U32(ctx, 31, 0x20606Cu);
    ctx->pc = 0x2043A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LocalLightOff__Fv_0x2043a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20606Cu; }
        else if (ctx->pc != 0x20606Cu) { ctx->pc = 0x20606Cu; }
    }
    if (ctx->pc != 0x20606Cu) { return; }
    ctx->pc = 0x20606Cu;
label_20606c:
    // 0x20606c: 0x8e44001c
    ctx->pc = 0x20606cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x206070: 0x8e430018
    ctx->pc = 0x206070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x206074: 0x64082a
    ctx->pc = 0x206074u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x206078: 0x10200011
    ctx->pc = 0x206078u;
    {
        const bool branch_taken_0x206078 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x206078) {
            ctx->pc = 0x2060C0u;
            goto label_2060c0;
        }
    }
    ctx->pc = 0x206080u;
    // 0x206080: 0xc641034c
    ctx->pc = 0x206080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206084: 0x3c023f99
    ctx->pc = 0x206084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
    // 0x206088: 0x3442999a
    ctx->pc = 0x206088u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x20608c: 0x27a30044
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 68));
    // 0x206090: 0x44820000
    ctx->pc = 0x206090u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x206094: 0x72402628
    ctx->pc = 0x206094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x206098: 0xe7a10040
    ctx->pc = 0x206098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20609c: 0xc6410350
    ctx->pc = 0x20609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2060a0: 0x27a50040
    ctx->pc = 0x2060a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2060a4: 0xe4610000
    ctx->pc = 0x2060a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2060a8: 0xc6410354
    ctx->pc = 0x2060a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2060ac: 0xe7a10048
    ctx->pc = 0x2060acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2060b0: 0xc4610000
    ctx->pc = 0x2060b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2060b4: 0x46000800
    ctx->pc = 0x2060b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2060b8: 0xc253ba4
    ctx->pc = 0x2060B8u;
    SET_GPR_U32(ctx, 31, 0x2060C0u);
    ctx->pc = 0x2060BCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x94EE90u;
    {
        const uint32_t __entryPc = ctx->pc;
        EN_LifeDisp__FP9EnemyTaskP11tagNLpoint3_0x94ee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060C0u; }
        else if (ctx->pc != 0x2060C0u) { ctx->pc = 0x2060C0u; }
    }
    if (ctx->pc != 0x2060C0u) { return; }
    ctx->pc = 0x2060C0u;
label_2060c0:
    // 0x2060c0: 0x82441cc0
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7360)));
    // 0x2060c4: 0x28810002
    ctx->pc = 0x2060c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 2));
    // 0x2060c8: 0x1020004c
    ctx->pc = 0x2060C8u;
    {
        const bool branch_taken_0x2060c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2060CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2060c8) {
            ctx->pc = 0x2061FCu;
            goto label_2061fc;
        }
    }
    ctx->pc = 0x2060D0u;
    // 0x2060d0: 0x1483004a
    ctx->pc = 0x2060D0u;
    {
        const bool branch_taken_0x2060d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2060d0) {
            ctx->pc = 0x2061FCu;
            goto label_2061fc;
        }
    }
    ctx->pc = 0x2060D8u;
    // 0x2060d8: 0x8e431ccc
    ctx->pc = 0x2060d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7372)));
    // 0x2060dc: 0x30630002
    ctx->pc = 0x2060dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x2060e0: 0x14600046
    ctx->pc = 0x2060E0u;
    {
        const bool branch_taken_0x2060e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2060e0) {
            ctx->pc = 0x2061FCu;
            goto label_2061fc;
        }
    }
    ctx->pc = 0x2060E8u;
    // 0x2060e8: 0x4bede37d
    ctx->pc = 0x2060e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2060ec: 0x4bedeb7d
    ctx->pc = 0x2060ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2060f0: 0x4bedf37d
    ctx->pc = 0x2060f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2060f4: 0x4bedfb7d
    ctx->pc = 0x2060f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2060f8: 0x3c024000
    ctx->pc = 0x2060f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x2060fc: 0xc6410e8c
    ctx->pc = 0x2060fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206100: 0xc640115c
    ctx->pc = 0x206100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206104: 0x44821000
    ctx->pc = 0x206104u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x206108: 0x27b00054
    ctx->pc = 0x206108u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 84));
    // 0x20610c: 0x27b10058
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 88));
    // 0x206110: 0x46000800
    ctx->pc = 0x206110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x206114: 0x46020003
    ctx->pc = 0x206114u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x206118: 0xe7a00050
    ctx->pc = 0x206118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20611c: 0xc6410e90
    ctx->pc = 0x20611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206120: 0xc6401160
    ctx->pc = 0x206120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206124: 0x46000800
    ctx->pc = 0x206124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x206128: 0x46020003
    ctx->pc = 0x206128u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20612c: 0xe6000000
    ctx->pc = 0x20612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x206130: 0xc6410e94
    ctx->pc = 0x206130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206134: 0xc6401164
    ctx->pc = 0x206134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206138: 0x46000800
    ctx->pc = 0x206138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20613c: 0x46020003
    ctx->pc = 0x20613cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x206140: 0xe6200000
    ctx->pc = 0x206140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x206144: 0x8f848c48
    ctx->pc = 0x206144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x206148: 0x8c830004
    ctx->pc = 0x206148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20614c: 0x31040
    ctx->pc = 0x20614cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x206150: 0x431021
    ctx->pc = 0x206150u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206154: 0x21080
    ctx->pc = 0x206154u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x206158: 0x431021
    ctx->pc = 0x206158u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20615c: 0x21100
    ctx->pc = 0x20615cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x206160: 0x821021
    ctx->pc = 0x206160u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206164: 0xc06c038
    ctx->pc = 0x206164u;
    SET_GPR_U32(ctx, 31, 0x20616Cu);
    ctx->pc = 0x206168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20616Cu; }
        else if (ctx->pc != 0x20616Cu) { ctx->pc = 0x20616Cu; }
    }
    if (ctx->pc != 0x20616Cu) { return; }
    ctx->pc = 0x20616Cu;
    // 0x20616c: 0xc7a00050
    ctx->pc = 0x20616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206170: 0x27a40060
    ctx->pc = 0x206170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x206174: 0x27a50070
    ctx->pc = 0x206174u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x206178: 0xe7a00060
    ctx->pc = 0x206178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20617c: 0xc6000000
    ctx->pc = 0x20617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206180: 0xe7a00064
    ctx->pc = 0x206180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x206184: 0xc6200000
    ctx->pc = 0x206184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206188: 0xc06bf00
    ctx->pc = 0x206188u;
    SET_GPR_U32(ctx, 31, 0x206190u);
    ctx->pc = 0x20618Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206190u; }
        else if (ctx->pc != 0x206190u) { ctx->pc = 0x206190u; }
    }
    if (ctx->pc != 0x206190u) { return; }
    ctx->pc = 0x206190u;
    // 0x206190: 0xc7a10070
    ctx->pc = 0x206190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206194: 0xc7a00074
    ctx->pc = 0x206194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206198: 0xe7a10050
    ctx->pc = 0x206198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20619c: 0xe6000000
    ctx->pc = 0x20619cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2061a0: 0xc7a00078
    ctx->pc = 0x2061a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2061a4: 0xe6200000
    ctx->pc = 0x2061a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2061a8: 0x8f848c48
    ctx->pc = 0x2061a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2061ac: 0x8c830004
    ctx->pc = 0x2061acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2061b0: 0x31040
    ctx->pc = 0x2061b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2061b4: 0x431021
    ctx->pc = 0x2061b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2061b8: 0x21080
    ctx->pc = 0x2061b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2061bc: 0x431021
    ctx->pc = 0x2061bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2061c0: 0x21100
    ctx->pc = 0x2061c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2061c4: 0x821021
    ctx->pc = 0x2061c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2061c8: 0xc06c038
    ctx->pc = 0x2061C8u;
    SET_GPR_U32(ctx, 31, 0x2061D0u);
    ctx->pc = 0x2061CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061D0u; }
        else if (ctx->pc != 0x2061D0u) { ctx->pc = 0x2061D0u; }
    }
    if (ctx->pc != 0x2061D0u) { return; }
    ctx->pc = 0x2061D0u;
    // 0x2061d0: 0xc6400274
    ctx->pc = 0x2061d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2061d4: 0x3c024040
    ctx->pc = 0x2061d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x2061d8: 0x44820800
    ctx->pc = 0x2061d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2061dc: 0x72402e28
    ctx->pc = 0x2061dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2061e0: 0x27a40050
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2061e4: 0xc253430
    ctx->pc = 0x2061E4u;
    SET_GPR_U32(ctx, 31, 0x2061ECu);
    ctx->pc = 0x2061E8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x94D0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnEtc4ShadowPut__FP11tagNLpoint3fP9EnemyTask_0x94d0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061ECu; }
        else if (ctx->pc != 0x2061ECu) { ctx->pc = 0x2061ECu; }
    }
    if (ctx->pc != 0x2061ECu) { return; }
    ctx->pc = 0x2061ECu;
    // 0x2061ec: 0x4bff6b7e
    ctx->pc = 0x2061ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2061f0: 0x4bfe6b7e
    ctx->pc = 0x2061f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2061f4: 0x4bfd6b7e
    ctx->pc = 0x2061f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2061f8: 0x4bfc6b7e
    ctx->pc = 0x2061f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2061fc:
    // 0x2061fc: 0x7bbf0030
    ctx->pc = 0x2061fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206200: 0x7bb20020
    ctx->pc = 0x206200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206204: 0x7bb10010
    ctx->pc = 0x206204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206208: 0x7bb00000
    ctx->pc = 0x206208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20620c: 0x3e00008
    ctx->pc = 0x20620Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206210u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205FE4u: goto label_205fe4;
            case 0x206014u: goto label_206014;
            case 0x206020u: goto label_206020;
            case 0x206048u: goto label_206048;
            case 0x206054u: goto label_206054;
            case 0x206064u: goto label_206064;
            case 0x20606Cu: goto label_20606c;
            case 0x2060C0u: goto label_2060c0;
            case 0x2061FCu: goto label_2061fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206214u;
}
