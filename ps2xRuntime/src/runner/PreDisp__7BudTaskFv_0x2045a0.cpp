#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PreDisp__7BudTaskFv
// Address: 0x2045a0 - 0x204988
void PreDisp__7BudTaskFv_0x2045a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PreDisp__7BudTaskFv");


    ctx->pc = 0x2045a0u;

    // 0x2045a0: 0x27bdff70
    ctx->pc = 0x2045a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2045a4: 0x7fbf0020
    ctx->pc = 0x2045a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2045a8: 0x7fb00010
    ctx->pc = 0x2045a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2045ac: 0xe7b40000
    ctx->pc = 0x2045acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2045b0: 0x70808628
    ctx->pc = 0x2045b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2045b4: 0x8c84000c
    ctx->pc = 0x2045b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2045b8: 0x3c030400
    ctx->pc = 0x2045b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x2045bc: 0x831824
    ctx->pc = 0x2045bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2045c0: 0x1060006f
    ctx->pc = 0x2045C0u;
    {
        const bool branch_taken_0x2045c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2045c0) {
            ctx->pc = 0x204780u;
            goto label_204780;
        }
    }
    ctx->pc = 0x2045C8u;
    // 0x2045c8: 0x4bede37d
    ctx->pc = 0x2045c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2045cc: 0x4bedeb7d
    ctx->pc = 0x2045ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2045d0: 0x4bedf37d
    ctx->pc = 0x2045d0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2045d4: 0x4bedfb7d
    ctx->pc = 0x2045d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2045d8: 0x8e050150
    ctx->pc = 0x2045d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2045dc: 0x10a00002
    ctx->pc = 0x2045DCu;
    {
        const bool branch_taken_0x2045dc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2045dc) {
            ctx->pc = 0x2045E8u;
            goto label_2045e8;
        }
    }
    ctx->pc = 0x2045E4u;
    // 0x2045e4: 0x24a50030
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_2045e8:
    // 0x2045e8: 0x8e03014c
    ctx->pc = 0x2045e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x2045ec: 0x3c020051
    ctx->pc = 0x2045ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2045f0: 0x24442250
    ctx->pc = 0x2045f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    // 0x2045f4: 0x8c660000
    ctx->pc = 0x2045f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2045f8: 0xc07fbd8
    ctx->pc = 0x2045F8u;
    SET_GPR_U32(ctx, 31, 0x204600u);
    ctx->pc = 0x2045FCu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FEF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadPutMat__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DBi_0x1fef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204600u; }
        else if (ctx->pc != 0x204600u) { ctx->pc = 0x204600u; }
    }
    if (ctx->pc != 0x204600u) { return; }
    ctx->pc = 0x204600u;
    // 0x204600: 0x8f848c48
    ctx->pc = 0x204600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x204604: 0x8c830004
    ctx->pc = 0x204604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204608: 0x31040
    ctx->pc = 0x204608u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20460c: 0x431021
    ctx->pc = 0x20460cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204610: 0x21080
    ctx->pc = 0x204610u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x204614: 0x431021
    ctx->pc = 0x204614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204618: 0x21100
    ctx->pc = 0x204618u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20461c: 0x821021
    ctx->pc = 0x20461cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204620: 0xc06c06f
    ctx->pc = 0x204620u;
    SET_GPR_U32(ctx, 31, 0x204628u);
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204628u; }
        else if (ctx->pc != 0x204628u) { ctx->pc = 0x204628u; }
    }
    if (ctx->pc != 0x204628u) { return; }
    ctx->pc = 0x204628u;
    // 0x204628: 0xc06bfd2
    ctx->pc = 0x204628u;
    SET_GPR_U32(ctx, 31, 0x204630u);
    ctx->pc = 0x20462Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 44));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204630u; }
        else if (ctx->pc != 0x204630u) { ctx->pc = 0x204630u; }
    }
    if (ctx->pc != 0x204630u) { return; }
    ctx->pc = 0x204630u;
    // 0x204630: 0x26040050
    ctx->pc = 0x204630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    // 0x204634: 0x26050054
    ctx->pc = 0x204634u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 84));
    // 0x204638: 0xc0724f8
    ctx->pc = 0x204638u;
    SET_GPR_U32(ctx, 31, 0x204640u);
    ctx->pc = 0x20463Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 88));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204640u; }
        else if (ctx->pc != 0x204640u) { ctx->pc = 0x204640u; }
    }
    if (ctx->pc != 0x204640u) { return; }
    ctx->pc = 0x204640u;
    // 0x204640: 0x8f848c48
    ctx->pc = 0x204640u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x204644: 0x8c830004
    ctx->pc = 0x204644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204648: 0x31040
    ctx->pc = 0x204648u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20464c: 0x431021
    ctx->pc = 0x20464cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204650: 0x21080
    ctx->pc = 0x204650u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x204654: 0x431021
    ctx->pc = 0x204654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204658: 0x21100
    ctx->pc = 0x204658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20465c: 0x821021
    ctx->pc = 0x20465cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204660: 0xc06c038
    ctx->pc = 0x204660u;
    SET_GPR_U32(ctx, 31, 0x204668u);
    ctx->pc = 0x204664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204668u; }
        else if (ctx->pc != 0x204668u) { ctx->pc = 0x204668u; }
    }
    if (ctx->pc != 0x204668u) { return; }
    ctx->pc = 0x204668u;
    // 0x204668: 0xc06c04e
    ctx->pc = 0x204668u;
    SET_GPR_U32(ctx, 31, 0x204670u);
    ctx->pc = 0x20466Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204670u; }
        else if (ctx->pc != 0x204670u) { ctx->pc = 0x204670u; }
    }
    if (ctx->pc != 0x204670u) { return; }
    ctx->pc = 0x204670u;
    // 0x204670: 0x8e02014c
    ctx->pc = 0x204670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x204674: 0xc44d001c
    ctx->pc = 0x204674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204678: 0xc44e0020
    ctx->pc = 0x204678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20467c: 0xc06c202
    ctx->pc = 0x20467Cu;
    SET_GPR_U32(ctx, 31, 0x204684u);
    ctx->pc = 0x204680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204684u; }
        else if (ctx->pc != 0x204684u) { ctx->pc = 0x204684u; }
    }
    if (ctx->pc != 0x204684u) { return; }
    ctx->pc = 0x204684u;
    // 0x204684: 0xc06bfd2
    ctx->pc = 0x204684u;
    SET_GPR_U32(ctx, 31, 0x20468Cu);
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20468Cu; }
        else if (ctx->pc != 0x20468Cu) { ctx->pc = 0x20468Cu; }
    }
    if (ctx->pc != 0x20468Cu) { return; }
    ctx->pc = 0x20468Cu;
    // 0x20468c: 0x8f868c48
    ctx->pc = 0x20468cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x204690: 0x3c023f80
    ctx->pc = 0x204690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x204694: 0x44826000
    ctx->pc = 0x204694u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x204698: 0x24040011
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
    // 0x20469c: 0x27a50030
    ctx->pc = 0x20469cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2046a0: 0x8cc30004
    ctx->pc = 0x2046a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2046a4: 0x31040
    ctx->pc = 0x2046a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2046a8: 0x431021
    ctx->pc = 0x2046a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2046ac: 0x21080
    ctx->pc = 0x2046acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2046b0: 0x431021
    ctx->pc = 0x2046b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2046b4: 0x21100
    ctx->pc = 0x2046b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2046b8: 0xc21821
    ctx->pc = 0x2046b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2046bc: 0x8c62009c
    ctx->pc = 0x2046bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x2046c0: 0xafa2003c
    ctx->pc = 0x2046c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2046c4: 0x8c6200a0
    ctx->pc = 0x2046c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2046c8: 0xafa20040
    ctx->pc = 0x2046c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2046cc: 0x8c6200a4
    ctx->pc = 0x2046ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2046d0: 0xc0785e0
    ctx->pc = 0x2046D0u;
    SET_GPR_U32(ctx, 31, 0x2046D8u);
    ctx->pc = 0x2046D4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046D8u; }
        else if (ctx->pc != 0x2046D8u) { ctx->pc = 0x2046D8u; }
    }
    if (ctx->pc != 0x2046D8u) { return; }
    ctx->pc = 0x2046D8u;
    // 0x2046d8: 0xc06c20d
    ctx->pc = 0x2046D8u;
    SET_GPR_U32(ctx, 31, 0x2046E0u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046E0u; }
        else if (ctx->pc != 0x2046E0u) { ctx->pc = 0x2046E0u; }
    }
    if (ctx->pc != 0x2046E0u) { return; }
    ctx->pc = 0x2046E0u;
    // 0x2046e0: 0x8f848c48
    ctx->pc = 0x2046e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2046e4: 0x8c830004
    ctx->pc = 0x2046e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2046e8: 0x31040
    ctx->pc = 0x2046e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2046ec: 0x431021
    ctx->pc = 0x2046ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2046f0: 0x21080
    ctx->pc = 0x2046f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2046f4: 0x431021
    ctx->pc = 0x2046f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2046f8: 0x21100
    ctx->pc = 0x2046f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2046fc: 0x441021
    ctx->pc = 0x2046fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204700: 0xc06c0fb
    ctx->pc = 0x204700u;
    SET_GPR_U32(ctx, 31, 0x204708u);
    ctx->pc = 0x204704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204708u; }
        else if (ctx->pc != 0x204708u) { ctx->pc = 0x204708u; }
    }
    if (ctx->pc != 0x204708u) { return; }
    ctx->pc = 0x204708u;
    // 0x204708: 0x3c023e4c
    ctx->pc = 0x204708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15948 << 16));
    // 0x20470c: 0x3442cccd
    ctx->pc = 0x20470cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x204710: 0xafa20050
    ctx->pc = 0x204710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x204714: 0x3c02be4c
    ctx->pc = 0x204714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48716 << 16));
    // 0x204718: 0xafa00054
    ctx->pc = 0x204718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x20471c: 0x3442cccd
    ctx->pc = 0x20471cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x204720: 0xafa20058
    ctx->pc = 0x204720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x204724: 0x27a40050
    ctx->pc = 0x204724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x204728: 0xc06bf00
    ctx->pc = 0x204728u;
    SET_GPR_U32(ctx, 31, 0x204730u);
    ctx->pc = 0x20472Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204730u; }
        else if (ctx->pc != 0x204730u) { ctx->pc = 0x204730u; }
    }
    if (ctx->pc != 0x204730u) { return; }
    ctx->pc = 0x204730u;
    // 0x204730: 0xc7a00060
    ctx->pc = 0x204730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204734: 0x3c02bd20
    ctx->pc = 0x204734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48416 << 16));
    // 0x204738: 0x3443902e
    ctx->pc = 0x204738u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 36910));
    // 0x20473c: 0x3c023f80
    ctx->pc = 0x20473cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x204740: 0xe6000038
    ctx->pc = 0x204740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x204744: 0xc7a00064
    ctx->pc = 0x204744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204748: 0xe600003c
    ctx->pc = 0x204748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x20474c: 0xc7a00068
    ctx->pc = 0x20474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204750: 0xe6000040
    ctx->pc = 0x204750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x204754: 0xae030048
    ctx->pc = 0x204754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x204758: 0xae020044
    ctx->pc = 0x204758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x20475c: 0xae00004c
    ctx->pc = 0x20475cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x204760: 0x4bff6b7e
    ctx->pc = 0x204760u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x204764: 0x4bfe6b7e
    ctx->pc = 0x204764u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x204768: 0x4bfd6b7e
    ctx->pc = 0x204768u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20476c: 0x4bfc6b7e
    ctx->pc = 0x20476cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x204770: 0xc068fe0
    ctx->pc = 0x204770u;
    SET_GPR_U32(ctx, 31, 0x204778u);
    ctx->pc = 0x204774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 320)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204778u; }
        else if (ctx->pc != 0x204778u) { ctx->pc = 0x204778u; }
    }
    if (ctx->pc != 0x204778u) { return; }
    ctx->pc = 0x204778u;
    // 0x204778: 0x1000007f
    ctx->pc = 0x204778u;
    {
        const bool branch_taken_0x204778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20477Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x204778) {
            ctx->pc = 0x204978u;
            goto label_204978;
        }
    }
    ctx->pc = 0x204780u;
label_204780:
    // 0x204780: 0x8e050150
    ctx->pc = 0x204780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x204784: 0x24030012
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x204788: 0x8ca41d74
    ctx->pc = 0x204788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 7540)));
    // 0x20478c: 0x30840012
    ctx->pc = 0x20478cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 18));
    // 0x204790: 0x14830078
    ctx->pc = 0x204790u;
    {
        const bool branch_taken_0x204790 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x204790) {
            ctx->pc = 0x204974u;
            goto label_204974;
        }
    }
    ctx->pc = 0x204798u;
    // 0x204798: 0x8ca31db0
    ctx->pc = 0x204798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 7600)));
    // 0x20479c: 0x24020002
    ctx->pc = 0x20479cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2047a0: 0x1062000b
    ctx->pc = 0x2047A0u;
    {
        const bool branch_taken_0x2047a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2047A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16268 << 16));
        if (branch_taken_0x2047a0) {
            ctx->pc = 0x2047D0u;
            goto label_2047d0;
        }
    }
    ctx->pc = 0x2047A8u;
    // 0x2047a8: 0x24020001
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2047ac: 0x10620005
    ctx->pc = 0x2047ACu;
    {
        const bool branch_taken_0x2047ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2047B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x2047ac) {
            ctx->pc = 0x2047C4u;
            goto label_2047c4;
        }
    }
    ctx->pc = 0x2047B4u;
    // 0x2047b4: 0x10600003
    ctx->pc = 0x2047B4u;
    {
        const bool branch_taken_0x2047b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2047b4) {
            ctx->pc = 0x2047C4u;
            goto label_2047c4;
        }
    }
    ctx->pc = 0x2047BCu;
    // 0x2047bc: 0x10000007
    ctx->pc = 0x2047BCu;
    {
        const bool branch_taken_0x2047bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2047C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 320)));
        if (branch_taken_0x2047bc) {
            ctx->pc = 0x2047DCu;
            goto label_2047dc;
        }
    }
    ctx->pc = 0x2047C4u;
label_2047c4:
    // 0x2047c4: 0x4482a000
    ctx->pc = 0x2047c4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x2047c8: 0x10000003
    ctx->pc = 0x2047C8u;
    {
        const bool branch_taken_0x2047c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2047c8) {
            ctx->pc = 0x2047D8u;
            goto label_2047d8;
        }
    }
    ctx->pc = 0x2047D0u;
label_2047d0:
    // 0x2047d0: 0x3442cccd
    ctx->pc = 0x2047d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x2047d4: 0x4482a000
    ctx->pc = 0x2047d4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
label_2047d8:
    // 0x2047d8: 0x8e040140
    ctx->pc = 0x2047d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_2047dc:
    // 0x2047dc: 0xc068f10
    ctx->pc = 0x2047DCu;
    SET_GPR_U32(ctx, 31, 0x2047E4u);
    ctx->pc = 0x2047E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x1A3C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc2__11SystemTask2Fi_0x1a3c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047E4u; }
        else if (ctx->pc != 0x2047E4u) { ctx->pc = 0x2047E4u; }
    }
    if (ctx->pc != 0x2047E4u) { return; }
    ctx->pc = 0x2047E4u;
    // 0x2047e4: 0xae020148
    ctx->pc = 0x2047e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x2047e8: 0x4bede37d
    ctx->pc = 0x2047e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2047ec: 0x4bedeb7d
    ctx->pc = 0x2047ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2047f0: 0x4bedf37d
    ctx->pc = 0x2047f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2047f4: 0x4bedfb7d
    ctx->pc = 0x2047f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2047f8: 0x8f848c48
    ctx->pc = 0x2047f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2047fc: 0x8c830004
    ctx->pc = 0x2047fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204800: 0x31040
    ctx->pc = 0x204800u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x204804: 0x431021
    ctx->pc = 0x204804u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204808: 0x21080
    ctx->pc = 0x204808u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20480c: 0x431021
    ctx->pc = 0x20480cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204810: 0x21100
    ctx->pc = 0x204810u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x204814: 0x821021
    ctx->pc = 0x204814u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x204818: 0xc06c038
    ctx->pc = 0x204818u;
    SET_GPR_U32(ctx, 31, 0x204820u);
    ctx->pc = 0x20481Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204820u; }
        else if (ctx->pc != 0x204820u) { ctx->pc = 0x204820u; }
    }
    if (ctx->pc != 0x204820u) { return; }
    ctx->pc = 0x204820u;
    // 0x204820: 0xc06c04e
    ctx->pc = 0x204820u;
    SET_GPR_U32(ctx, 31, 0x204828u);
    ctx->pc = 0x204824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204828u; }
        else if (ctx->pc != 0x204828u) { ctx->pc = 0x204828u; }
    }
    if (ctx->pc != 0x204828u) { return; }
    ctx->pc = 0x204828u;
    // 0x204828: 0x8e02014c
    ctx->pc = 0x204828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x20482c: 0xc44d001c
    ctx->pc = 0x20482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x204830: 0xc44e0020
    ctx->pc = 0x204830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x204834: 0xc06c202
    ctx->pc = 0x204834u;
    SET_GPR_U32(ctx, 31, 0x20483Cu);
    ctx->pc = 0x204838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20483Cu; }
        else if (ctx->pc != 0x20483Cu) { ctx->pc = 0x20483Cu; }
    }
    if (ctx->pc != 0x20483Cu) { return; }
    ctx->pc = 0x20483Cu;
    // 0x20483c: 0xc06bfd2
    ctx->pc = 0x20483Cu;
    SET_GPR_U32(ctx, 31, 0x204844u);
    ctx->pc = 0x204840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->pc = 0x1AFF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFF48_0x1aff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204844u; }
        else if (ctx->pc != 0x204844u) { ctx->pc = 0x204844u; }
    }
    if (ctx->pc != 0x204844u) { return; }
    ctx->pc = 0x204844u;
    // 0x204844: 0xc06c20d
    ctx->pc = 0x204844u;
    SET_GPR_U32(ctx, 31, 0x20484Cu);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20484Cu; }
        else if (ctx->pc != 0x20484Cu) { ctx->pc = 0x20484Cu; }
    }
    if (ctx->pc != 0x20484Cu) { return; }
    ctx->pc = 0x20484Cu;
    // 0x20484c: 0x8e020150
    ctx->pc = 0x20484cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x204850: 0xc06c157
    ctx->pc = 0x204850u;
    SET_GPR_U32(ctx, 31, 0x204858u);
    ctx->pc = 0x204854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 172)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204858u; }
        else if (ctx->pc != 0x204858u) { ctx->pc = 0x204858u; }
    }
    if (ctx->pc != 0x204858u) { return; }
    ctx->pc = 0x204858u;
    // 0x204858: 0x8e020150
    ctx->pc = 0x204858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x20485c: 0xc06c0fb
    ctx->pc = 0x20485Cu;
    SET_GPR_U32(ctx, 31, 0x204864u);
    ctx->pc = 0x204860u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 168)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204864u; }
        else if (ctx->pc != 0x204864u) { ctx->pc = 0x204864u; }
    }
    if (ctx->pc != 0x204864u) { return; }
    ctx->pc = 0x204864u;
    // 0x204864: 0x8e020150
    ctx->pc = 0x204864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x204868: 0xc06c09f
    ctx->pc = 0x204868u;
    SET_GPR_U32(ctx, 31, 0x204870u);
    ctx->pc = 0x20486Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 164)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204870u; }
        else if (ctx->pc != 0x204870u) { ctx->pc = 0x204870u; }
    }
    if (ctx->pc != 0x204870u) { return; }
    ctx->pc = 0x204870u;
    // 0x204870: 0x8e020150
    ctx->pc = 0x204870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x204874: 0xc06c157
    ctx->pc = 0x204874u;
    SET_GPR_U32(ctx, 31, 0x20487Cu);
    ctx->pc = 0x204878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 412)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20487Cu; }
        else if (ctx->pc != 0x20487Cu) { ctx->pc = 0x20487Cu; }
    }
    if (ctx->pc != 0x20487Cu) { return; }
    ctx->pc = 0x20487Cu;
    // 0x20487c: 0x8e020150
    ctx->pc = 0x20487cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x204880: 0xc06c0fb
    ctx->pc = 0x204880u;
    SET_GPR_U32(ctx, 31, 0x204888u);
    ctx->pc = 0x204884u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 408)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204888u; }
        else if (ctx->pc != 0x204888u) { ctx->pc = 0x204888u; }
    }
    if (ctx->pc != 0x204888u) { return; }
    ctx->pc = 0x204888u;
    // 0x204888: 0x8e020150
    ctx->pc = 0x204888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x20488c: 0xc06c09f
    ctx->pc = 0x20488Cu;
    SET_GPR_U32(ctx, 31, 0x204894u);
    ctx->pc = 0x204890u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 404)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204894u; }
        else if (ctx->pc != 0x204894u) { ctx->pc = 0x204894u; }
    }
    if (ctx->pc != 0x204894u) { return; }
    ctx->pc = 0x204894u;
    // 0x204894: 0xafa00070
    ctx->pc = 0x204894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x204898: 0xafa00074
    ctx->pc = 0x204898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x20489c: 0x3c023f80
    ctx->pc = 0x20489cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2048a0: 0xafa20078
    ctx->pc = 0x2048a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2048a4: 0x27a40070
    ctx->pc = 0x2048a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x2048a8: 0xc06bf00
    ctx->pc = 0x2048A8u;
    SET_GPR_U32(ctx, 31, 0x2048B0u);
    ctx->pc = 0x2048ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2048B0u; }
        else if (ctx->pc != 0x2048B0u) { ctx->pc = 0x2048B0u; }
    }
    if (ctx->pc != 0x2048B0u) { return; }
    ctx->pc = 0x2048B0u;
    // 0x2048b0: 0xc7ad0088
    ctx->pc = 0x2048b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2048b4: 0xc069e68
    ctx->pc = 0x2048B4u;
    SET_GPR_U32(ctx, 31, 0x2048BCu);
    ctx->pc = 0x2048B8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2048BCu; }
        else if (ctx->pc != 0x2048BCu) { ctx->pc = 0x2048BCu; }
    }
    if (ctx->pc != 0x2048BCu) { return; }
    ctx->pc = 0x2048BCu;
    // 0x2048bc: 0x8e040150
    ctx->pc = 0x2048bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2048c0: 0x22c3c
    ctx->pc = 0x2048c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2048c4: 0x8e030148
    ctx->pc = 0x2048c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2048c8: 0x52c3f
    ctx->pc = 0x2048c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2048cc: 0x24020003
    ctx->pc = 0x2048ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2048d0: 0x8c840030
    ctx->pc = 0x2048d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2048d4: 0x8c840028
    ctx->pc = 0x2048d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2048d8: 0x852021
    ctx->pc = 0x2048d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2048dc: 0xac640010
    ctx->pc = 0x2048dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x2048e0: 0x8e030148
    ctx->pc = 0x2048e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2048e4: 0xac600014
    ctx->pc = 0x2048e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2048e8: 0x8e030148
    ctx->pc = 0x2048e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2048ec: 0xac60000c
    ctx->pc = 0x2048ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2048f0: 0x8e030150
    ctx->pc = 0x2048f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2048f4: 0x80631e02
    ctx->pc = 0x2048f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7682)));
    // 0x2048f8: 0x1062000f
    ctx->pc = 0x2048F8u;
    {
        const bool branch_taken_0x2048f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2048FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2048f8) {
            ctx->pc = 0x204938u;
            goto label_204938;
        }
    }
    ctx->pc = 0x204900u;
    // 0x204900: 0x1062000d
    ctx->pc = 0x204900u;
    {
        const bool branch_taken_0x204900 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x204904u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x204900) {
            ctx->pc = 0x204938u;
            goto label_204938;
        }
    }
    ctx->pc = 0x204908u;
    // 0x204908: 0x10620005
    ctx->pc = 0x204908u;
    {
        const bool branch_taken_0x204908 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x204908) {
            ctx->pc = 0x204920u;
            goto label_204920;
        }
    }
    ctx->pc = 0x204910u;
    // 0x204910: 0x10600003
    ctx->pc = 0x204910u;
    {
        const bool branch_taken_0x204910 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x204910) {
            ctx->pc = 0x204920u;
            goto label_204920;
        }
    }
    ctx->pc = 0x204918u;
    // 0x204918: 0x1000000c
    ctx->pc = 0x204918u;
    {
        const bool branch_taken_0x204918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20491Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x204918) {
            ctx->pc = 0x20494Cu;
            goto label_20494c;
        }
    }
    ctx->pc = 0x204920u;
label_204920:
    // 0x204920: 0x8e050148
    ctx->pc = 0x204920u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x204924: 0x4600a306
    ctx->pc = 0x204924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x204928: 0xc078598
    ctx->pc = 0x204928u;
    SET_GPR_U32(ctx, 31, 0x204930u);
    ctx->pc = 0x20492Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1E1660u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__FiP4ANPOf_0x1e1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204930u; }
        else if (ctx->pc != 0x204930u) { ctx->pc = 0x204930u; }
    }
    if (ctx->pc != 0x204930u) { return; }
    ctx->pc = 0x204930u;
    // 0x204930: 0x10000005
    ctx->pc = 0x204930u;
    {
        const bool branch_taken_0x204930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x204930) {
            ctx->pc = 0x204948u;
            goto label_204948;
        }
    }
    ctx->pc = 0x204938u;
label_204938:
    // 0x204938: 0x8e050148
    ctx->pc = 0x204938u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x20493c: 0x4600a306
    ctx->pc = 0x20493cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x204940: 0xc078598
    ctx->pc = 0x204940u;
    SET_GPR_U32(ctx, 31, 0x204948u);
    ctx->pc = 0x204944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x1E1660u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__FiP4ANPOf_0x1e1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204948u; }
        else if (ctx->pc != 0x204948u) { ctx->pc = 0x204948u; }
    }
    if (ctx->pc != 0x204948u) { return; }
    ctx->pc = 0x204948u;
label_204948:
    // 0x204948: 0x4bff6b7e
    ctx->pc = 0x204948u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_20494c:
    // 0x20494c: 0x4bfe6b7e
    ctx->pc = 0x20494cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x204950: 0x4bfd6b7e
    ctx->pc = 0x204950u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x204954: 0x4bfc6b7e
    ctx->pc = 0x204954u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x204958: 0x3c020027
    ctx->pc = 0x204958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20495c: 0x24422d80
    ctx->pc = 0x20495cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11648));
    // 0x204960: 0x8c450008
    ctx->pc = 0x204960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x204964: 0x8e040140
    ctx->pc = 0x204964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x204968: 0xc068fd8
    ctx->pc = 0x204968u;
    SET_GPR_U32(ctx, 31, 0x204970u);
    ctx->pc = 0x20496Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204970u; }
        else if (ctx->pc != 0x204970u) { ctx->pc = 0x204970u; }
    }
    if (ctx->pc != 0x204970u) { return; }
    ctx->pc = 0x204970u;
    // 0x204970: 0xae000044
    ctx->pc = 0x204970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_204974:
    // 0x204974: 0x7bbf0020
    ctx->pc = 0x204974u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204978:
    // 0x204978: 0x7bb00010
    ctx->pc = 0x204978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20497c: 0xc7b40000
    ctx->pc = 0x20497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204980: 0x3e00008
    ctx->pc = 0x204980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204984u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2045E8u: goto label_2045e8;
            case 0x204780u: goto label_204780;
            case 0x2047C4u: goto label_2047c4;
            case 0x2047D0u: goto label_2047d0;
            case 0x2047D8u: goto label_2047d8;
            case 0x2047DCu: goto label_2047dc;
            case 0x204920u: goto label_204920;
            case 0x204938u: goto label_204938;
            case 0x204948u: goto label_204948;
            case 0x20494Cu: goto label_20494c;
            case 0x204974u: goto label_204974;
            case 0x204978u: goto label_204978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204988u;
}
