#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InterDivCamAng3D__FP11tagNLpoint3P11tagNLpoint3P11tagNLpoint3P11tagNLpoint3ii
// Address: 0x1cb610 - 0x1cb834
void InterDivCamAng3D__FP11tagNLpoint3P11tagNLpoint3P11tagNLpoint3P11tagNLpoint3ii_0x1cb610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InterDivCamAng3D__FP11tagNLpoint3P11tagNLpoint3P11tagNLpoint3P11tagNLpoint3ii");


    ctx->pc = 0x1cb610u;

    // 0x1cb610: 0x27bdff50
    ctx->pc = 0x1cb610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cb614: 0x7fbf0070
    ctx->pc = 0x1cb614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1cb618: 0x7fb60060
    ctx->pc = 0x1cb618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cb61c: 0x7fb50050
    ctx->pc = 0x1cb61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cb620: 0x7fb40040
    ctx->pc = 0x1cb620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cb624: 0x7fb30030
    ctx->pc = 0x1cb624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cb628: 0x7fb20020
    ctx->pc = 0x1cb628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb62c: 0x7fb10010
    ctx->pc = 0x1cb62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb630: 0x7fb00000
    ctx->pc = 0x1cb630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb634: 0xc4c50000
    ctx->pc = 0x1cb634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cb638: 0xc4840000
    ctx->pc = 0x1cb638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cb63c: 0xc4c30004
    ctx->pc = 0x1cb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb640: 0xc4820004
    ctx->pc = 0x1cb640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb644: 0xc4c10008
    ctx->pc = 0x1cb644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb648: 0xc4800008
    ctx->pc = 0x1cb648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb64c: 0x7080ae28
    ctx->pc = 0x1cb64cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cb650: 0x46042b01
    ctx->pc = 0x1cb650u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1cb654: 0x70a08628
    ctx->pc = 0x1cb654u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cb658: 0x70e0a628
    ctx->pc = 0x1cb658u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cb65c: 0x71009e28
    ctx->pc = 0x1cb65cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cb660: 0x46021b41
    ctx->pc = 0x1cb660u;
    ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1cb664: 0x71209628
    ctx->pc = 0x1cb664u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1cb668: 0x27a500ac
    ctx->pc = 0x1cb668u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 172));
    // 0x1cb66c: 0x27a400a8
    ctx->pc = 0x1cb66cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 168));
    // 0x1cb670: 0xc0723b0
    ctx->pc = 0x1CB670u;
    SET_GPR_U32(ctx, 31, 0x1CB678u);
    ctx->pc = 0x1CB674u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1C8EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYZ__FfffPiPi_0x1c8ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB678u; }
        else if (ctx->pc != 0x1CB678u) { ctx->pc = 0x1CB678u; }
    }
    if (ctx->pc != 0x1CB678u) { return; }
    ctx->pc = 0x1CB678u;
    // 0x1cb678: 0x4bede37d
    ctx->pc = 0x1cb678u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cb67c: 0x4bedeb7d
    ctx->pc = 0x1cb67cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cb680: 0x4bedf37d
    ctx->pc = 0x1cb680u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cb684: 0xc06c20d
    ctx->pc = 0x1CB684u;
    SET_GPR_U32(ctx, 31, 0x1CB68Cu);
    ctx->pc = 0x1CB688u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB68Cu; }
        else if (ctx->pc != 0x1CB68Cu) { ctx->pc = 0x1CB68Cu; }
    }
    if (ctx->pc != 0x1CB68Cu) { return; }
    ctx->pc = 0x1CB68Cu;
    // 0x1cb68c: 0x8fa200ac
    ctx->pc = 0x1cb68cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1cb690: 0xc06c157
    ctx->pc = 0x1CB690u;
    SET_GPR_U32(ctx, 31, 0x1CB698u);
    ctx->pc = 0x1CB694u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB698u; }
        else if (ctx->pc != 0x1CB698u) { ctx->pc = 0x1CB698u; }
    }
    if (ctx->pc != 0x1CB698u) { return; }
    ctx->pc = 0x1CB698u;
    // 0x1cb698: 0x8fa200a8
    ctx->pc = 0x1cb698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1cb69c: 0xc06c0fb
    ctx->pc = 0x1CB69Cu;
    SET_GPR_U32(ctx, 31, 0x1CB6A4u);
    ctx->pc = 0x1CB6A0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6A4u; }
        else if (ctx->pc != 0x1CB6A4u) { ctx->pc = 0x1CB6A4u; }
    }
    if (ctx->pc != 0x1CB6A4u) { return; }
    ctx->pc = 0x1CB6A4u;
    // 0x1cb6a4: 0xc6a20000
    ctx->pc = 0x1cb6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb6a8: 0xc6a10004
    ctx->pc = 0x1cb6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb6ac: 0xc6a00008
    ctx->pc = 0x1cb6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb6b0: 0x46001307
    ctx->pc = 0x1cb6b0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
    // 0x1cb6b4: 0x46000b47
    ctx->pc = 0x1cb6b4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[1]);
    // 0x1cb6b8: 0xc06c202
    ctx->pc = 0x1CB6B8u;
    SET_GPR_U32(ctx, 31, 0x1CB6C0u);
    ctx->pc = 0x1CB6BCu;
    ctx->f[14] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6C0u; }
        else if (ctx->pc != 0x1CB6C0u) { ctx->pc = 0x1CB6C0u; }
    }
    if (ctx->pc != 0x1CB6C0u) { return; }
    ctx->pc = 0x1CB6C0u;
    // 0x1cb6c0: 0x72002628
    ctx->pc = 0x1cb6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cb6c4: 0xc06bf00
    ctx->pc = 0x1CB6C4u;
    SET_GPR_U32(ctx, 31, 0x1CB6CCu);
    ctx->pc = 0x1CB6C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 152));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6CCu; }
        else if (ctx->pc != 0x1CB6CCu) { ctx->pc = 0x1CB6CCu; }
    }
    if (ctx->pc != 0x1CB6CCu) { return; }
    ctx->pc = 0x1CB6CCu;
    // 0x1cb6cc: 0x27b600a0
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1cb6d0: 0xc6c00000
    ctx->pc = 0x1cb6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb6d4: 0x44800800
    ctx->pc = 0x1cb6d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1cb6d8: 0x0
    ctx->pc = 0x1cb6d8u;
    // NOP
    // 0x1cb6dc: 0x46000832
    ctx->pc = 0x1cb6dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb6e0: 0x0
    ctx->pc = 0x1cb6e0u;
    // NOP
    // 0x1cb6e4: 0x4501000e
    ctx->pc = 0x1CB6E4u;
    {
        const bool branch_taken_0x1cb6e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb6e4) {
            ctx->pc = 0x1CB720u;
            goto label_1cb720;
        }
    }
    ctx->pc = 0x1CB6ECu;
    // 0x1cb6ec: 0xc7ad0098
    ctx->pc = 0x1cb6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb6f0: 0xc069e68
    ctx->pc = 0x1CB6F0u;
    SET_GPR_U32(ctx, 31, 0x1CB6F8u);
    ctx->pc = 0x1CB6F4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB6F8u; }
        else if (ctx->pc != 0x1CB6F8u) { ctx->pc = 0x1CB6F8u; }
    }
    if (ctx->pc != 0x1CB6F8u) { return; }
    ctx->pc = 0x1CB6F8u;
    // 0x1cb6f8: 0x2143c
    ctx->pc = 0x1cb6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1cb6fc: 0x2143f
    ctx->pc = 0x1cb6fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cb700: 0x2621818
    ctx->pc = 0x1cb700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1cb704: 0x2721021
    ctx->pc = 0x1cb704u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1cb708: 0x14400002
    ctx->pc = 0x1CB708u;
    {
        const bool branch_taken_0x1cb708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB70Cu;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1cb708) {
            ctx->pc = 0x1CB714u;
            goto label_1cb714;
        }
    }
    ctx->pc = 0x1CB710u;
    // 0x1cb710: 0x1cd
    ctx->pc = 0x1cb710u;
    runtime->handleBreak(rdram, ctx);
label_1cb714:
    // 0x1cb714: 0x8012
    ctx->pc = 0x1cb714u;
    SET_GPR_U32(ctx, 16, ctx->lo);
    // 0x1cb718: 0x1000000d
    ctx->pc = 0x1CB718u;
    {
        const bool branch_taken_0x1cb718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB71Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 156));
        if (branch_taken_0x1cb718) {
            ctx->pc = 0x1CB750u;
            goto label_1cb750;
        }
    }
    ctx->pc = 0x1CB720u;
label_1cb720:
    // 0x1cb720: 0xc7a00098
    ctx->pc = 0x1cb720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb724: 0x46010034
    ctx->pc = 0x1cb724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb728: 0x0
    ctx->pc = 0x1cb728u;
    // NOP
    // 0x1cb72c: 0x45000007
    ctx->pc = 0x1CB72Cu;
    {
        const bool branch_taken_0x1cb72c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB730u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cb72c) {
            ctx->pc = 0x1CB74Cu;
            goto label_1cb74c;
        }
    }
    ctx->pc = 0x1CB734u;
    // 0x1cb734: 0x131bc0
    ctx->pc = 0x1cb734u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 15));
    // 0x1cb738: 0x2721021
    ctx->pc = 0x1cb738u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1cb73c: 0x14400002
    ctx->pc = 0x1CB73Cu;
    {
        const bool branch_taken_0x1cb73c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB740u;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1cb73c) {
            ctx->pc = 0x1CB748u;
            goto label_1cb748;
        }
    }
    ctx->pc = 0x1CB744u;
    // 0x1cb744: 0x1cd
    ctx->pc = 0x1cb744u;
    runtime->handleBreak(rdram, ctx);
label_1cb748:
    // 0x1cb748: 0x8012
    ctx->pc = 0x1cb748u;
    SET_GPR_U32(ctx, 16, ctx->lo);
label_1cb74c:
    // 0x1cb74c: 0x27b1009c
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 156));
label_1cb750:
    // 0x1cb750: 0xc6200000
    ctx->pc = 0x1cb750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb754: 0x44800800
    ctx->pc = 0x1cb754u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1cb758: 0x0
    ctx->pc = 0x1cb758u;
    // NOP
    // 0x1cb75c: 0x46000832
    ctx->pc = 0x1cb75cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb760: 0x0
    ctx->pc = 0x1cb760u;
    // NOP
    // 0x1cb764: 0x45030011
    ctx->pc = 0x1CB764u;
    {
        const bool branch_taken_0x1cb764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb764) {
            ctx->pc = 0x1CB768u;
            SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1CB7ACu;
            goto label_1cb7ac;
        }
    }
    ctx->pc = 0x1CB76Cu;
    // 0x1cb76c: 0xc7a10098
    ctx->pc = 0x1cb76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb770: 0xc6c00000
    ctx->pc = 0x1cb770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb774: 0x4601081a
    ctx->pc = 0x1cb774u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1cb778: 0xc06c2a8
    ctx->pc = 0x1CB778u;
    SET_GPR_U32(ctx, 31, 0x1CB780u);
    ctx->pc = 0x1CB77Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB780u; }
        else if (ctx->pc != 0x1CB780u) { ctx->pc = 0x1CB780u; }
    }
    if (ctx->pc != 0x1CB780u) { return; }
    ctx->pc = 0x1CB780u;
    // 0x1cb780: 0xc62c0000
    ctx->pc = 0x1cb780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb784: 0xc069e68
    ctx->pc = 0x1CB784u;
    SET_GPR_U32(ctx, 31, 0x1CB78Cu);
    ctx->pc = 0x1CB788u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB78Cu; }
        else if (ctx->pc != 0x1CB78Cu) { ctx->pc = 0x1CB78Cu; }
    }
    if (ctx->pc != 0x1CB78Cu) { return; }
    ctx->pc = 0x1CB78Cu;
    // 0x1cb78c: 0x2143c
    ctx->pc = 0x1cb78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1cb790: 0x2143f
    ctx->pc = 0x1cb790u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cb794: 0x2621818
    ctx->pc = 0x1cb794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1cb798: 0x2721021
    ctx->pc = 0x1cb798u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1cb79c: 0x14400002
    ctx->pc = 0x1CB79Cu;
    {
        const bool branch_taken_0x1cb79c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB7A0u;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1cb79c) {
            ctx->pc = 0x1CB7A8u;
            goto label_1cb7a8;
        }
    }
    ctx->pc = 0x1CB7A4u;
    // 0x1cb7a4: 0x1cd
    ctx->pc = 0x1cb7a4u;
    runtime->handleBreak(rdram, ctx);
label_1cb7a8:
    // 0x1cb7a8: 0x8812
    ctx->pc = 0x1cb7a8u;
    SET_GPR_U32(ctx, 17, ctx->lo);
label_1cb7ac:
    // 0x1cb7ac: 0x3c0242c8
    ctx->pc = 0x1cb7acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1cb7b0: 0xafa20088
    ctx->pc = 0x1cb7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1cb7b4: 0xafa0008c
    ctx->pc = 0x1cb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x1cb7b8: 0xc06c20d
    ctx->pc = 0x1CB7B8u;
    SET_GPR_U32(ctx, 31, 0x1CB7C0u);
    ctx->pc = 0x1CB7BCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7C0u; }
        else if (ctx->pc != 0x1CB7C0u) { ctx->pc = 0x1CB7C0u; }
    }
    if (ctx->pc != 0x1CB7C0u) { return; }
    ctx->pc = 0x1CB7C0u;
    // 0x1cb7c0: 0xc6ad0004
    ctx->pc = 0x1cb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb7c4: 0xc6ae0008
    ctx->pc = 0x1cb7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cb7c8: 0xc06c202
    ctx->pc = 0x1CB7C8u;
    SET_GPR_U32(ctx, 31, 0x1CB7D0u);
    ctx->pc = 0x1CB7CCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7D0u; }
        else if (ctx->pc != 0x1CB7D0u) { ctx->pc = 0x1CB7D0u; }
    }
    if (ctx->pc != 0x1CB7D0u) { return; }
    ctx->pc = 0x1CB7D0u;
    // 0x1cb7d0: 0xc06c0fb
    ctx->pc = 0x1CB7D0u;
    SET_GPR_U32(ctx, 31, 0x1CB7D8u);
    ctx->pc = 0x1CB7D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7D8u; }
        else if (ctx->pc != 0x1CB7D8u) { ctx->pc = 0x1CB7D8u; }
    }
    if (ctx->pc != 0x1CB7D8u) { return; }
    ctx->pc = 0x1CB7D8u;
    // 0x1cb7d8: 0xc06c157
    ctx->pc = 0x1CB7D8u;
    SET_GPR_U32(ctx, 31, 0x1CB7E0u);
    ctx->pc = 0x1CB7DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 172)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7E0u; }
        else if (ctx->pc != 0x1CB7E0u) { ctx->pc = 0x1CB7E0u; }
    }
    if (ctx->pc != 0x1CB7E0u) { return; }
    ctx->pc = 0x1CB7E0u;
    // 0x1cb7e0: 0xc06c0fb
    ctx->pc = 0x1CB7E0u;
    SET_GPR_U32(ctx, 31, 0x1CB7E8u);
    ctx->pc = 0x1CB7E4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7E8u; }
        else if (ctx->pc != 0x1CB7E8u) { ctx->pc = 0x1CB7E8u; }
    }
    if (ctx->pc != 0x1CB7E8u) { return; }
    ctx->pc = 0x1CB7E8u;
    // 0x1cb7e8: 0xc06c157
    ctx->pc = 0x1CB7E8u;
    SET_GPR_U32(ctx, 31, 0x1CB7F0u);
    ctx->pc = 0x1CB7ECu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7F0u; }
        else if (ctx->pc != 0x1CB7F0u) { ctx->pc = 0x1CB7F0u; }
    }
    if (ctx->pc != 0x1CB7F0u) { return; }
    ctx->pc = 0x1CB7F0u;
    // 0x1cb7f0: 0x72802e28
    ctx->pc = 0x1cb7f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1cb7f4: 0xc06bf00
    ctx->pc = 0x1CB7F4u;
    SET_GPR_U32(ctx, 31, 0x1CB7FCu);
    ctx->pc = 0x1CB7F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 136));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB7FCu; }
        else if (ctx->pc != 0x1CB7FCu) { ctx->pc = 0x1CB7FCu; }
    }
    if (ctx->pc != 0x1CB7FCu) { return; }
    ctx->pc = 0x1CB7FCu;
    // 0x1cb7fc: 0x4bff6b7e
    ctx->pc = 0x1cb7fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cb800: 0x4bfe6b7e
    ctx->pc = 0x1cb800u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cb804: 0x4bfd6b7e
    ctx->pc = 0x1cb804u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cb808: 0x4bfc6b7e
    ctx->pc = 0x1cb808u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1cb80c: 0x7bbf0070
    ctx->pc = 0x1cb80cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cb810: 0x7bb60060
    ctx->pc = 0x1cb810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cb814: 0x7bb50050
    ctx->pc = 0x1cb814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cb818: 0x7bb40040
    ctx->pc = 0x1cb818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb81c: 0x7bb30030
    ctx->pc = 0x1cb81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb820: 0x7bb20020
    ctx->pc = 0x1cb820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb824: 0x7bb10010
    ctx->pc = 0x1cb824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb828: 0x7bb00000
    ctx->pc = 0x1cb828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb82c: 0x3e00008
    ctx->pc = 0x1CB82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB714u: goto label_1cb714;
            case 0x1CB720u: goto label_1cb720;
            case 0x1CB748u: goto label_1cb748;
            case 0x1CB74Cu: goto label_1cb74c;
            case 0x1CB750u: goto label_1cb750;
            case 0x1CB7A8u: goto label_1cb7a8;
            case 0x1CB7ACu: goto label_1cb7ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB834u;
}
