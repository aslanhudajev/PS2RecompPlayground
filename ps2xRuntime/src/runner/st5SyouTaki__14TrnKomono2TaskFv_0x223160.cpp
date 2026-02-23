#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st5SyouTaki__14TrnKomono2TaskFv
// Address: 0x223160 - 0x2233c4
void st5SyouTaki__14TrnKomono2TaskFv_0x223160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st5SyouTaki__14TrnKomono2TaskFv");


    ctx->pc = 0x223160u;

    // 0x223160: 0x27bdffa0
    ctx->pc = 0x223160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x223164: 0x7fbf0050
    ctx->pc = 0x223164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x223168: 0x7fb40040
    ctx->pc = 0x223168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22316c: 0x7fb30030
    ctx->pc = 0x22316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x223170: 0x7fb20020
    ctx->pc = 0x223170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x223174: 0x7fb10010
    ctx->pc = 0x223174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223178: 0x7fb00000
    ctx->pc = 0x223178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22317c: 0x8f828cec
    ctx->pc = 0x22317cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x223180: 0x14400004
    ctx->pc = 0x223180u;
    {
        const bool branch_taken_0x223180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223184u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x223180) {
            ctx->pc = 0x223194u;
            goto label_223194;
        }
    }
    ctx->pc = 0x223188u;
    // 0x223188: 0x8f828ce8
    ctx->pc = 0x223188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x22318c: 0x10400003
    ctx->pc = 0x22318Cu;
    {
        const bool branch_taken_0x22318c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22318c) {
            ctx->pc = 0x22319Cu;
            goto label_22319c;
        }
    }
    ctx->pc = 0x223194u;
label_223194:
    // 0x223194: 0xc06898c
    ctx->pc = 0x223194u;
    SET_GPR_U32(ctx, 31, 0x22319Cu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22319Cu; }
        else if (ctx->pc != 0x22319Cu) { ctx->pc = 0x22319Cu; }
    }
    if (ctx->pc != 0x22319Cu) { return; }
    ctx->pc = 0x22319Cu;
label_22319c:
    // 0x22319c: 0x3c020050
    ctx->pc = 0x22319cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2231a0: 0xc07ce18
    ctx->pc = 0x2231A0u;
    SET_GPR_U32(ctx, 31, 0x2231A8u);
    ctx->pc = 0x2231A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231A8u; }
        else if (ctx->pc != 0x2231A8u) { ctx->pc = 0x2231A8u; }
    }
    if (ctx->pc != 0x2231A8u) { return; }
    ctx->pc = 0x2231A8u;
    // 0x2231a8: 0x1c400009
    ctx->pc = 0x2231A8u;
    {
        const bool branch_taken_0x2231a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2231ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)15523 << 16));
        if (branch_taken_0x2231a8) {
            ctx->pc = 0x2231D0u;
            goto label_2231d0;
        }
    }
    ctx->pc = 0x2231B0u;
    // 0x2231b0: 0x3442d70a
    ctx->pc = 0x2231b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x2231b4: 0x44826800
    ctx->pc = 0x2231b4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2231b8: 0x44806000
    ctx->pc = 0x2231b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2231bc: 0x3c020048
    ctx->pc = 0x2231bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)72 << 16));
    // 0x2231c0: 0xc24af3c
    ctx->pc = 0x2231C0u;
    SET_GPR_U32(ctx, 31, 0x2231C8u);
    ctx->pc = 0x2231C4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 250));
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231C8u; }
        else if (ctx->pc != 0x2231C8u) { ctx->pc = 0x2231C8u; }
    }
    if (ctx->pc != 0x2231C8u) { return; }
    ctx->pc = 0x2231C8u;
    // 0x2231c8: 0xc0552d8
    ctx->pc = 0x2231C8u;
    SET_GPR_U32(ctx, 31, 0x2231D0u);
    ctx->pc = 0x2231CCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231D0u; }
        else if (ctx->pc != 0x2231D0u) { ctx->pc = 0x2231D0u; }
    }
    if (ctx->pc != 0x2231D0u) { return; }
    ctx->pc = 0x2231D0u;
label_2231d0:
    // 0x2231d0: 0x8e82005c
    ctx->pc = 0x2231d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x2231d4: 0x14400005
    ctx->pc = 0x2231D4u;
    {
        const bool branch_taken_0x2231d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2231D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x2231d4) {
            ctx->pc = 0x2231ECu;
            goto label_2231ec;
        }
    }
    ctx->pc = 0x2231DCu;
    // 0x2231dc: 0x3c02002c
    ctx->pc = 0x2231dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x2231e0: 0x24501e50
    ctx->pc = 0x2231e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7760));
    // 0x2231e4: 0x10000003
    ctx->pc = 0x2231E4u;
    {
        const bool branch_taken_0x2231e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2231E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2231e4) {
            ctx->pc = 0x2231F4u;
            goto label_2231f4;
        }
    }
    ctx->pc = 0x2231ECu;
label_2231ec:
    // 0x2231ec: 0x24501de0
    ctx->pc = 0x2231ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7648));
    // 0x2231f0: 0x24110003
    ctx->pc = 0x2231f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
label_2231f4:
    // 0x2231f4: 0x11082a
    ctx->pc = 0x2231f4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x2231f8: 0x1020001d
    ctx->pc = 0x2231F8u;
    {
        const bool branch_taken_0x2231f8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2231FCu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2231f8) {
            ctx->pc = 0x223270u;
            goto label_223270;
        }
    }
    ctx->pc = 0x223200u;
label_223200:
    // 0x223200: 0x4bede37d
    ctx->pc = 0x223200u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x223204: 0x4bedeb7d
    ctx->pc = 0x223204u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x223208: 0x4bedf37d
    ctx->pc = 0x223208u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x22320c: 0x4bedfb7d
    ctx->pc = 0x22320cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x223210: 0xc60d0004
    ctx->pc = 0x223210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x223214: 0xc60e0008
    ctx->pc = 0x223214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x223218: 0xc06c202
    ctx->pc = 0x223218u;
    SET_GPR_U32(ctx, 31, 0x223220u);
    ctx->pc = 0x22321Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223220u; }
        else if (ctx->pc != 0x223220u) { ctx->pc = 0x223220u; }
    }
    if (ctx->pc != 0x223220u) { return; }
    ctx->pc = 0x223220u;
    // 0x223220: 0xc06c0fb
    ctx->pc = 0x223220u;
    SET_GPR_U32(ctx, 31, 0x223228u);
    ctx->pc = 0x223224u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223228u; }
        else if (ctx->pc != 0x223228u) { ctx->pc = 0x223228u; }
    }
    if (ctx->pc != 0x223228u) { return; }
    ctx->pc = 0x223228u;
    // 0x223228: 0xc60e0020
    ctx->pc = 0x223228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22322c: 0x3c023f80
    ctx->pc = 0x22322cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x223230: 0x44826800
    ctx->pc = 0x223230u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x223234: 0xc06c1b3
    ctx->pc = 0x223234u;
    SET_GPR_U32(ctx, 31, 0x22323Cu);
    ctx->pc = 0x223238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22323Cu; }
        else if (ctx->pc != 0x22323Cu) { ctx->pc = 0x22323Cu; }
    }
    if (ctx->pc != 0x22323Cu) { return; }
    ctx->pc = 0x22323Cu;
    // 0x22323c: 0xc06b218
    ctx->pc = 0x22323Cu;
    SET_GPR_U32(ctx, 31, 0x223244u);
    ctx->pc = 0x223240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223244u; }
        else if (ctx->pc != 0x223244u) { ctx->pc = 0x223244u; }
    }
    if (ctx->pc != 0x223244u) { return; }
    ctx->pc = 0x223244u;
    // 0x223244: 0x3c020048
    ctx->pc = 0x223244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)72 << 16));
    // 0x223248: 0xc0853ac
    ctx->pc = 0x223248u;
    SET_GPR_U32(ctx, 31, 0x223250u);
    ctx->pc = 0x22324Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 250));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223250u; }
        else if (ctx->pc != 0x223250u) { ctx->pc = 0x223250u; }
    }
    if (ctx->pc != 0x223250u) { return; }
    ctx->pc = 0x223250u;
    // 0x223250: 0x4bff6b7e
    ctx->pc = 0x223250u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x223254: 0x4bfe6b7e
    ctx->pc = 0x223254u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x223258: 0x4bfd6b7e
    ctx->pc = 0x223258u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22325c: 0x4bfc6b7e
    ctx->pc = 0x22325cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x223260: 0x26520001
    ctx->pc = 0x223260u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x223264: 0x251102a
    ctx->pc = 0x223264u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x223268: 0x1440ffe5
    ctx->pc = 0x223268u;
    {
        const bool branch_taken_0x223268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22326Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 36));
        if (branch_taken_0x223268) {
            ctx->pc = 0x223200u;
            goto label_223200;
        }
    }
    ctx->pc = 0x223270u;
label_223270:
    // 0x223270: 0x8e82005c
    ctx->pc = 0x223270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x223274: 0x14400032
    ctx->pc = 0x223274u;
    {
        const bool branch_taken_0x223274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x223274) {
            ctx->pc = 0x223340u;
            goto label_223340;
        }
    }
    ctx->pc = 0x22327Cu;
    // 0x22327c: 0x3c02002c
    ctx->pc = 0x22327cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x223280: 0x70009e28
    ctx->pc = 0x223280u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223284: 0x1000002c
    ctx->pc = 0x223284u;
    {
        const bool branch_taken_0x223284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223288u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 8272));
        if (branch_taken_0x223284) {
            ctx->pc = 0x223338u;
            goto label_223338;
        }
    }
    ctx->pc = 0x22328Cu;
label_22328c:
    // 0x22328c: 0x4bede37d
    ctx->pc = 0x22328cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x223290: 0x4bedeb7d
    ctx->pc = 0x223290u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x223294: 0x4bedf37d
    ctx->pc = 0x223294u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x223298: 0x4bedfb7d
    ctx->pc = 0x223298u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x22329c: 0xc64d0004
    ctx->pc = 0x22329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2232a0: 0xc64e0008
    ctx->pc = 0x2232a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2232a4: 0xc06c202
    ctx->pc = 0x2232A4u;
    SET_GPR_U32(ctx, 31, 0x2232ACu);
    ctx->pc = 0x2232A8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232ACu; }
        else if (ctx->pc != 0x2232ACu) { ctx->pc = 0x2232ACu; }
    }
    if (ctx->pc != 0x2232ACu) { return; }
    ctx->pc = 0x2232ACu;
    // 0x2232ac: 0xc06c0fb
    ctx->pc = 0x2232ACu;
    SET_GPR_U32(ctx, 31, 0x2232B4u);
    ctx->pc = 0x2232B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B4u; }
        else if (ctx->pc != 0x2232B4u) { ctx->pc = 0x2232B4u; }
    }
    if (ctx->pc != 0x2232B4u) { return; }
    ctx->pc = 0x2232B4u;
    // 0x2232b4: 0x70008628
    ctx->pc = 0x2232b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2232b8: 0x10000015
    ctx->pc = 0x2232B8u;
    {
        const bool branch_taken_0x2232b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2232BCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2232b8) {
            ctx->pc = 0x223310u;
            goto label_223310;
        }
    }
    ctx->pc = 0x2232C0u;
label_2232c0:
    // 0x2232c0: 0x4bede37d
    ctx->pc = 0x2232c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2232c4: 0x4bedeb7d
    ctx->pc = 0x2232c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2232c8: 0x4bedf37d
    ctx->pc = 0x2232c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2232cc: 0x4bedfb7d
    ctx->pc = 0x2232ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2232d0: 0xc64d001c
    ctx->pc = 0x2232d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2232d4: 0xc64e0020
    ctx->pc = 0x2232d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2232d8: 0xc06c1b3
    ctx->pc = 0x2232D8u;
    SET_GPR_U32(ctx, 31, 0x2232E0u);
    ctx->pc = 0x2232DCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232E0u; }
        else if (ctx->pc != 0x2232E0u) { ctx->pc = 0x2232E0u; }
    }
    if (ctx->pc != 0x2232E0u) { return; }
    ctx->pc = 0x2232E0u;
    // 0x2232e0: 0xc06b218
    ctx->pc = 0x2232E0u;
    SET_GPR_U32(ctx, 31, 0x2232E8u);
    ctx->pc = 0x2232E4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232E8u; }
        else if (ctx->pc != 0x2232E8u) { ctx->pc = 0x2232E8u; }
    }
    if (ctx->pc != 0x2232E8u) { return; }
    ctx->pc = 0x2232E8u;
    // 0x2232e8: 0x8e8200c4
    ctx->pc = 0x2232e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x2232ec: 0xc68c004c
    ctx->pc = 0x2232ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2232f0: 0xc07a42c
    ctx->pc = 0x2232F0u;
    SET_GPR_U32(ctx, 31, 0x2232F8u);
    ctx->pc = 0x2232F4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232F8u; }
        else if (ctx->pc != 0x2232F8u) { ctx->pc = 0x2232F8u; }
    }
    if (ctx->pc != 0x2232F8u) { return; }
    ctx->pc = 0x2232F8u;
    // 0x2232f8: 0x4bff6b7e
    ctx->pc = 0x2232f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2232fc: 0x4bfe6b7e
    ctx->pc = 0x2232fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x223300: 0x4bfd6b7e
    ctx->pc = 0x223300u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x223304: 0x4bfc6b7e
    ctx->pc = 0x223304u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x223308: 0x263100f0
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x22330c: 0x26100001
    ctx->pc = 0x22330cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_223310:
    // 0x223310: 0x8e8200cc
    ctx->pc = 0x223310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x223314: 0x202102a
    ctx->pc = 0x223314u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x223318: 0x1440ffe9
    ctx->pc = 0x223318u;
    {
        const bool branch_taken_0x223318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x223318) {
            ctx->pc = 0x2232C0u;
            goto label_2232c0;
        }
    }
    ctx->pc = 0x223320u;
    // 0x223320: 0x4bff6b7e
    ctx->pc = 0x223320u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x223324: 0x4bfe6b7e
    ctx->pc = 0x223324u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x223328: 0x4bfd6b7e
    ctx->pc = 0x223328u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22332c: 0x4bfc6b7e
    ctx->pc = 0x22332cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x223330: 0x26730001
    ctx->pc = 0x223330u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x223334: 0x26520024
    ctx->pc = 0x223334u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 36));
label_223338:
    // 0x223338: 0x1260ffd4
    ctx->pc = 0x223338u;
    {
        const bool branch_taken_0x223338 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x223338) {
            ctx->pc = 0x22328Cu;
            goto label_22328c;
        }
    }
    ctx->pc = 0x223340u;
label_223340:
    // 0x223340: 0x3c020050
    ctx->pc = 0x223340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x223344: 0xc07ce18
    ctx->pc = 0x223344u;
    SET_GPR_U32(ctx, 31, 0x22334Cu);
    ctx->pc = 0x223348u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22334Cu; }
        else if (ctx->pc != 0x22334Cu) { ctx->pc = 0x22334Cu; }
    }
    if (ctx->pc != 0x22334Cu) { return; }
    ctx->pc = 0x22334Cu;
    // 0x22334c: 0x1c400010
    ctx->pc = 0x22334Cu;
    {
        const bool branch_taken_0x22334c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x22334c) {
            ctx->pc = 0x223390u;
            goto label_223390;
        }
    }
    ctx->pc = 0x223354u;
    // 0x223354: 0xc681004c
    ctx->pc = 0x223354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223358: 0x3c023f99
    ctx->pc = 0x223358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
    // 0x22335c: 0x3442999a
    ctx->pc = 0x22335cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x223360: 0x44820000
    ctx->pc = 0x223360u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x223364: 0x0
    ctx->pc = 0x223364u;
    // NOP
    // 0x223368: 0x46000840
    ctx->pc = 0x223368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22336c: 0xe681004c
    ctx->pc = 0x22336cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x223370: 0xc680002c
    ctx->pc = 0x223370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223374: 0x46800020
    ctx->pc = 0x223374u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x223378: 0x46000836
    ctx->pc = 0x223378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22337c: 0x0
    ctx->pc = 0x22337cu;
    // NOP
    // 0x223380: 0x45010003
    ctx->pc = 0x223380u;
    {
        const bool branch_taken_0x223380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223380) {
            ctx->pc = 0x223390u;
            goto label_223390;
        }
    }
    ctx->pc = 0x223388u;
    // 0x223388: 0x46000801
    ctx->pc = 0x223388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22338c: 0xe680004c
    ctx->pc = 0x22338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
label_223390:
    // 0x223390: 0xc6800064
    ctx->pc = 0x223390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223394: 0x8e850060
    ctx->pc = 0x223394u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x223398: 0x72802628
    ctx->pc = 0x223398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x22339c: 0xc08822c
    ctx->pc = 0x22339Cu;
    SET_GPR_U32(ctx, 31, 0x2233A4u);
    ctx->pc = 0x2233A0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x2208B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCloseCamPath__14TrnKomono2TaskFif_0x2208b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233A4u; }
        else if (ctx->pc != 0x2233A4u) { ctx->pc = 0x2233A4u; }
    }
    if (ctx->pc != 0x2233A4u) { return; }
    ctx->pc = 0x2233A4u;
    // 0x2233a4: 0x7bbf0050
    ctx->pc = 0x2233a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2233a8: 0x7bb40040
    ctx->pc = 0x2233a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2233ac: 0x7bb30030
    ctx->pc = 0x2233acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2233b0: 0x7bb20020
    ctx->pc = 0x2233b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2233b4: 0x7bb10010
    ctx->pc = 0x2233b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2233b8: 0x7bb00000
    ctx->pc = 0x2233b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2233bc: 0x3e00008
    ctx->pc = 0x2233BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2233C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223194u: goto label_223194;
            case 0x22319Cu: goto label_22319c;
            case 0x2231D0u: goto label_2231d0;
            case 0x2231ECu: goto label_2231ec;
            case 0x2231F4u: goto label_2231f4;
            case 0x223200u: goto label_223200;
            case 0x223270u: goto label_223270;
            case 0x22328Cu: goto label_22328c;
            case 0x2232C0u: goto label_2232c0;
            case 0x223310u: goto label_223310;
            case 0x223338u: goto label_223338;
            case 0x223340u: goto label_223340;
            case 0x223390u: goto label_223390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2233C4u;
}
