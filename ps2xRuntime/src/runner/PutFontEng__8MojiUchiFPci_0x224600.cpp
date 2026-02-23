#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutFontEng__8MojiUchiFPci
// Address: 0x224600 - 0x224918
void PutFontEng__8MojiUchiFPci_0x224600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutFontEng__8MojiUchiFPci");


    ctx->pc = 0x224600u;

    // 0x224600: 0x27bdfe70
    ctx->pc = 0x224600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x224604: 0x7fbf00a0
    ctx->pc = 0x224604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x224608: 0x7fbe0090
    ctx->pc = 0x224608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x22460c: 0x7fb70080
    ctx->pc = 0x22460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x224610: 0x7fb60070
    ctx->pc = 0x224610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x224614: 0x7fb50060
    ctx->pc = 0x224614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x224618: 0x7fb40050
    ctx->pc = 0x224618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22461c: 0x7fb30040
    ctx->pc = 0x22461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x224620: 0x7fb20030
    ctx->pc = 0x224620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x224624: 0x7fb10020
    ctx->pc = 0x224624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x224628: 0x7fb00010
    ctx->pc = 0x224628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22462c: 0xe7b40000
    ctx->pc = 0x22462cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224630: 0x70c0be28
    ctx->pc = 0x224630u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x224634: 0x7080a628
    ctx->pc = 0x224634u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x224638: 0x70a09e28
    ctx->pc = 0x224638u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22463c: 0x4480a000
    ctx->pc = 0x22463cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x224640: 0x27a600c0
    ctx->pc = 0x224640u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    // 0x224644: 0x70008628
    ctx->pc = 0x224644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224648: 0x7000b628
    ctx->pc = 0x224648u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22464c: 0xafa000b0
    ctx->pc = 0x22464cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x224650: 0x7000ae28
    ctx->pc = 0x224650u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224654: 0xc08905c
    ctx->pc = 0x224654u;
    SET_GPR_U32(ctx, 31, 0x22465Cu);
    ctx->pc = 0x224658u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x224170u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckWordReturn__8MojiUchiFPcPi_0x224170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22465Cu; }
        else if (ctx->pc != 0x22465Cu) { ctx->pc = 0x22465Cu; }
    }
    if (ctx->pc != 0x22465Cu) { return; }
    ctx->pc = 0x22465Cu;
    // 0x22465c: 0x1000008e
    ctx->pc = 0x22465Cu;
    {
        const bool branch_taken_0x22465c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224660u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 192));
        if (branch_taken_0x22465c) {
            ctx->pc = 0x224898u;
            goto label_224898;
        }
    }
    ctx->pc = 0x224664u;
label_224664:
    // 0x224664: 0xc08902c
    ctx->pc = 0x224664u;
    SET_GPR_U32(ctx, 31, 0x22466Cu);
    ctx->pc = 0x224668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2240B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCode2__8MojiUchiFPCc_0x2240b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22466Cu; }
        else if (ctx->pc != 0x22466Cu) { ctx->pc = 0x22466Cu; }
    }
    if (ctx->pc != 0x22466Cu) { return; }
    ctx->pc = 0x22466Cu;
    // 0x22466c: 0x70408e28
    ctx->pc = 0x22466cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x224670: 0x26220002
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 2));
    // 0x224674: 0x2c410002
    ctx->pc = 0x224674u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x224678: 0x54200086
    ctx->pc = 0x224678u;
    {
        const bool branch_taken_0x224678 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x224678) {
            ctx->pc = 0x22467Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
            ctx->pc = 0x224894u;
            goto label_224894;
        }
    }
    ctx->pc = 0x224680u;
    // 0x224680: 0x2402fffd
    ctx->pc = 0x224680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x224684: 0x12220082
    ctx->pc = 0x224684u;
    {
        const bool branch_taken_0x224684 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x224688u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x224684) {
            ctx->pc = 0x224890u;
            goto label_224890;
        }
    }
    ctx->pc = 0x22468Cu;
    // 0x22468c: 0x16220005
    ctx->pc = 0x22468Cu;
    {
        const bool branch_taken_0x22468c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x224690u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x22468c) {
            ctx->pc = 0x2246A4u;
            goto label_2246a4;
        }
    }
    ctx->pc = 0x224694u;
    // 0x224694: 0x24020001
    ctx->pc = 0x224694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224698: 0x1000007d
    ctx->pc = 0x224698u;
    {
        const bool branch_taken_0x224698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22469Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        if (branch_taken_0x224698) {
            ctx->pc = 0x224890u;
            goto label_224890;
        }
    }
    ctx->pc = 0x2246A0u;
    // 0x2246a0: 0x2402fffb
    ctx->pc = 0x2246a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_2246a4:
    // 0x2246a4: 0x16220004
    ctx->pc = 0x2246A4u;
    {
        const bool branch_taken_0x2246a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2246A8u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 24));
        if (branch_taken_0x2246a4) {
            ctx->pc = 0x2246B8u;
            goto label_2246b8;
        }
    }
    ctx->pc = 0x2246ACu;
    // 0x2246ac: 0x10000078
    ctx->pc = 0x2246ACu;
    {
        const bool branch_taken_0x2246ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2246B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        if (branch_taken_0x2246ac) {
            ctx->pc = 0x224890u;
            goto label_224890;
        }
    }
    ctx->pc = 0x2246B4u;
    // 0x2246b4: 0x1e1e3c
    ctx->pc = 0x2246b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 24));
label_2246b8:
    // 0x2246b8: 0x31e3f
    ctx->pc = 0x2246b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2246bc: 0x24020001
    ctx->pc = 0x2246bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2246c0: 0x14620006
    ctx->pc = 0x2246C0u;
    {
        const bool branch_taken_0x2246c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2246C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x2246c0) {
            ctx->pc = 0x2246DCu;
            goto label_2246dc;
        }
    }
    ctx->pc = 0x2246C8u;
    // 0x2246c8: 0xc7808e78
    ctx->pc = 0x2246c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246cc: 0x7000f628
    ctx->pc = 0x2246ccu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2246d0: 0x4600a500
    ctx->pc = 0x2246d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2246d4: 0x0
    ctx->pc = 0x2246d4u;
    // NOP
    // 0x2246d8: 0x24020026
    ctx->pc = 0x2246d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
label_2246dc:
    // 0x2246dc: 0x16220004
    ctx->pc = 0x2246DCu;
    {
        const bool branch_taken_0x2246dc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2246dc) {
            ctx->pc = 0x2246F0u;
            goto label_2246f0;
        }
    }
    ctx->pc = 0x2246E4u;
    // 0x2246e4: 0xc7808e78
    ctx->pc = 0x2246e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246e8: 0x241e0001
    ctx->pc = 0x2246e8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2246ec: 0x4600a500
    ctx->pc = 0x2246ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2246f0:
    // 0x2246f0: 0x4bede37d
    ctx->pc = 0x2246f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2246f4: 0x4bedeb7d
    ctx->pc = 0x2246f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2246f8: 0x4bedf37d
    ctx->pc = 0x2246f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2246fc: 0x4bedfb7d
    ctx->pc = 0x2246fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x224700: 0x24020002
    ctx->pc = 0x224700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x224704: 0x12e20004
    ctx->pc = 0x224704u;
    {
        const bool branch_taken_0x224704 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 2));
        if (branch_taken_0x224704) {
            ctx->pc = 0x224718u;
            goto label_224718;
        }
    }
    ctx->pc = 0x22470Cu;
    // 0x22470c: 0xc06c20d
    ctx->pc = 0x22470Cu;
    SET_GPR_U32(ctx, 31, 0x224714u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224714u; }
        else if (ctx->pc != 0x224714u) { ctx->pc = 0x224714u; }
    }
    if (ctx->pc != 0x224714u) { return; }
    ctx->pc = 0x224714u;
    // 0x224714: 0x0
    ctx->pc = 0x224714u;
    // NOP
label_224718:
    // 0x224718: 0xc68d0004
    ctx->pc = 0x224718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22471c: 0xc68e0008
    ctx->pc = 0x22471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x224720: 0xc06c202
    ctx->pc = 0x224720u;
    SET_GPR_U32(ctx, 31, 0x224728u);
    ctx->pc = 0x224724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224728u; }
        else if (ctx->pc != 0x224728u) { ctx->pc = 0x224728u; }
    }
    if (ctx->pc != 0x224728u) { return; }
    ctx->pc = 0x224728u;
    // 0x224728: 0x3c010050
    ctx->pc = 0x224728u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x22472c: 0x8024fec5
    ctx->pc = 0x22472cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224730: 0x8e821024
    ctx->pc = 0x224730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4132)));
    // 0x224734: 0x418c0
    ctx->pc = 0x224734u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x224738: 0x641821
    ctx->pc = 0x224738u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22473c: 0x31880
    ctx->pc = 0x22473cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224740: 0x431021
    ctx->pc = 0x224740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224744: 0xc44d001c
    ctx->pc = 0x224744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x224748: 0xc44e0020
    ctx->pc = 0x224748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22474c: 0xc06c1b3
    ctx->pc = 0x22474Cu;
    SET_GPR_U32(ctx, 31, 0x224754u);
    ctx->pc = 0x224750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224754u; }
        else if (ctx->pc != 0x224754u) { ctx->pc = 0x224754u; }
    }
    if (ctx->pc != 0x224754u) { return; }
    ctx->pc = 0x224754u;
    // 0x224754: 0x3c010050
    ctx->pc = 0x224754u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224758: 0x8024fec5
    ctx->pc = 0x224758u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x22475c: 0x8e821024
    ctx->pc = 0x22475cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4132)));
    // 0x224760: 0x418c0
    ctx->pc = 0x224760u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x224764: 0x641821
    ctx->pc = 0x224764u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224768: 0x31880
    ctx->pc = 0x224768u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22476c: 0x431021
    ctx->pc = 0x22476cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224770: 0xc06b218
    ctx->pc = 0x224770u;
    SET_GPR_U32(ctx, 31, 0x224778u);
    ctx->pc = 0x224774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224778u; }
        else if (ctx->pc != 0x224778u) { ctx->pc = 0x224778u; }
    }
    if (ctx->pc != 0x224778u) { return; }
    ctx->pc = 0x224778u;
    // 0x224778: 0x4bede37d
    ctx->pc = 0x224778u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x22477c: 0x4bedeb7d
    ctx->pc = 0x22477cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x224780: 0x4bedf37d
    ctx->pc = 0x224780u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x224784: 0x4bedfb7d
    ctx->pc = 0x224784u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x224788: 0x3c010050
    ctx->pc = 0x224788u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x22478c: 0x3c023f80
    ctx->pc = 0x22478cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x224790: 0x44900800
    ctx->pc = 0x224790u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 16);
    // 0x224794: 0x8024fec5
    ctx->pc = 0x224794u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x224798: 0x44822000
    ctx->pc = 0x224798u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x22479c: 0x44960000
    ctx->pc = 0x22479cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 22);
    // 0x2247a0: 0x8e831024
    ctx->pc = 0x2247a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4132)));
    // 0x2247a4: 0x468008e0
    ctx->pc = 0x2247a4u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2247a8: 0x410c0
    ctx->pc = 0x2247a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x2247ac: 0x441021
    ctx->pc = 0x2247acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2247b0: 0x21080
    ctx->pc = 0x2247b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2247b4: 0x621021
    ctx->pc = 0x2247b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2247b8: 0xc4420000
    ctx->pc = 0x2247b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2247bc: 0xc4410004
    ctx->pc = 0x2247bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2247c0: 0x46800020
    ctx->pc = 0x2247c0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2247c4: 0x46022080
    ctx->pc = 0x2247c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2247c8: 0x46021882
    ctx->pc = 0x2247c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2247cc: 0x46012040
    ctx->pc = 0x2247ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2247d0: 0x46010342
    ctx->pc = 0x2247d0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2247d4: 0x44807000
    ctx->pc = 0x2247d4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x2247d8: 0xc06c202
    ctx->pc = 0x2247D8u;
    SET_GPR_U32(ctx, 31, 0x2247E0u);
    ctx->pc = 0x2247DCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247E0u; }
        else if (ctx->pc != 0x2247E0u) { ctx->pc = 0x2247E0u; }
    }
    if (ctx->pc != 0x2247E0u) { return; }
    ctx->pc = 0x2247E0u;
    // 0x2247e0: 0xc06aafc
    ctx->pc = 0x2247E0u;
    SET_GPR_U32(ctx, 31, 0x2247E8u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247E8u; }
        else if (ctx->pc != 0x2247E8u) { ctx->pc = 0x2247E8u; }
    }
    if (ctx->pc != 0x2247E8u) { return; }
    ctx->pc = 0x2247E8u;
    // 0x2247e8: 0x8fa200b0
    ctx->pc = 0x2247e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2247ec: 0x10400007
    ctx->pc = 0x2247ECu;
    {
        const bool branch_taken_0x2247ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2247F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x2247ec) {
            ctx->pc = 0x22480Cu;
            goto label_22480c;
        }
    }
    ctx->pc = 0x2247F4u;
    // 0x2247f4: 0x44806800
    ctx->pc = 0x2247f4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x2247f8: 0x44826000
    ctx->pc = 0x2247f8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2247fc: 0xc06aa80
    ctx->pc = 0x2247FCu;
    SET_GPR_U32(ctx, 31, 0x224804u);
    ctx->pc = 0x224800u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224804u; }
        else if (ctx->pc != 0x224804u) { ctx->pc = 0x224804u; }
    }
    if (ctx->pc != 0x224804u) { return; }
    ctx->pc = 0x224804u;
    // 0x224804: 0x10000007
    ctx->pc = 0x224804u;
    {
        const bool branch_taken_0x224804 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224808u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x224804) {
            ctx->pc = 0x224824u;
            goto label_224824;
        }
    }
    ctx->pc = 0x22480Cu;
label_22480c:
    // 0x22480c: 0x44806000
    ctx->pc = 0x22480cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x224810: 0x0
    ctx->pc = 0x224810u;
    // NOP
    // 0x224814: 0x46006346
    ctx->pc = 0x224814u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x224818: 0xc06aa80
    ctx->pc = 0x224818u;
    SET_GPR_U32(ctx, 31, 0x224820u);
    ctx->pc = 0x22481Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224820u; }
        else if (ctx->pc != 0x224820u) { ctx->pc = 0x224820u; }
    }
    if (ctx->pc != 0x224820u) { return; }
    ctx->pc = 0x224820u;
    // 0x224820: 0x111080
    ctx->pc = 0x224820u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_224824:
    // 0x224824: 0x2821021
    ctx->pc = 0x224824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x224828: 0x8c440014
    ctx->pc = 0x224828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22482c: 0xc06a09c
    ctx->pc = 0x22482Cu;
    SET_GPR_U32(ctx, 31, 0x224834u);
    ctx->pc = 0x224830u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1A8270u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutCategory_0x1a8270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224834u; }
        else if (ctx->pc != 0x224834u) { ctx->pc = 0x224834u; }
    }
    if (ctx->pc != 0x224834u) { return; }
    ctx->pc = 0x224834u;
    // 0x224834: 0xc06ab18
    ctx->pc = 0x224834u;
    SET_GPR_U32(ctx, 31, 0x22483Cu);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22483Cu; }
        else if (ctx->pc != 0x22483Cu) { ctx->pc = 0x22483Cu; }
    }
    if (ctx->pc != 0x22483Cu) { return; }
    ctx->pc = 0x22483Cu;
    // 0x22483c: 0x4bff6b7e
    ctx->pc = 0x22483cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x224840: 0x4bfe6b7e
    ctx->pc = 0x224840u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x224844: 0x4bfd6b7e
    ctx->pc = 0x224844u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x224848: 0x4bfc6b7e
    ctx->pc = 0x224848u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22484c: 0x4bff6b7e
    ctx->pc = 0x22484cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x224850: 0x4bfe6b7e
    ctx->pc = 0x224850u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x224854: 0x4bfd6b7e
    ctx->pc = 0x224854u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x224858: 0x4bfc6b7e
    ctx->pc = 0x224858u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22485c: 0x8e420000
    ctx->pc = 0x22485cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x224860: 0x26100001
    ctx->pc = 0x224860u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x224864: 0x202102a
    ctx->pc = 0x224864u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x224868: 0x14400005
    ctx->pc = 0x224868u;
    {
        const bool branch_taken_0x224868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x224868) {
            ctx->pc = 0x224880u;
            goto label_224880;
        }
    }
    ctx->pc = 0x224870u;
    // 0x224870: 0x4480a000
    ctx->pc = 0x224870u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x224874: 0x70008628
    ctx->pc = 0x224874u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224878: 0x26d6ffff
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x22487c: 0x26520004
    ctx->pc = 0x22487cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_224880:
    // 0x224880: 0x16e00003
    ctx->pc = 0x224880u;
    {
        const bool branch_taken_0x224880 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x224880) {
            ctx->pc = 0x224890u;
            goto label_224890;
        }
    }
    ctx->pc = 0x224888u;
    // 0x224888: 0x26b50001
    ctx->pc = 0x224888u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x22488c: 0x0
    ctx->pc = 0x22488cu;
    // NOP
label_224890:
    // 0x224890: 0x26730002
    ctx->pc = 0x224890u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
label_224894:
    // 0x224894: 0x0
    ctx->pc = 0x224894u;
    // NOP
label_224898:
    // 0x224898: 0x82620000
    ctx->pc = 0x224898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22489c: 0x10400006
    ctx->pc = 0x22489Cu;
    {
        const bool branch_taken_0x22489c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22489c) {
            ctx->pc = 0x2248B8u;
            goto label_2248b8;
        }
    }
    ctx->pc = 0x2248A4u;
    // 0x2248a4: 0x8e82000c
    ctx->pc = 0x2248a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2248a8: 0x2a2102a
    ctx->pc = 0x2248a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x2248ac: 0x1440ff6d
    ctx->pc = 0x2248ACu;
    {
        const bool branch_taken_0x2248ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2248B0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2248ac) {
            ctx->pc = 0x224664u;
            goto label_224664;
        }
    }
    ctx->pc = 0x2248B4u;
    // 0x2248b4: 0x0
    ctx->pc = 0x2248b4u;
    // NOP
label_2248b8:
    // 0x2248b8: 0x3c020050
    ctx->pc = 0x2248b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2248bc: 0xc07ce18
    ctx->pc = 0x2248BCu;
    SET_GPR_U32(ctx, 31, 0x2248C4u);
    ctx->pc = 0x2248C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2248C4u; }
        else if (ctx->pc != 0x2248C4u) { ctx->pc = 0x2248C4u; }
    }
    if (ctx->pc != 0x2248C4u) { return; }
    ctx->pc = 0x2248C4u;
    // 0x2248c4: 0x28410005
    ctx->pc = 0x2248c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x2248c8: 0x10200006
    ctx->pc = 0x2248C8u;
    {
        const bool branch_taken_0x2248c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2248c8) {
            ctx->pc = 0x2248E4u;
            goto label_2248e4;
        }
    }
    ctx->pc = 0x2248D0u;
    // 0x2248d0: 0x8283101c
    ctx->pc = 0x2248d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4124)));
    // 0x2248d4: 0x14600003
    ctx->pc = 0x2248D4u;
    {
        const bool branch_taken_0x2248d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2248D8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2248d4) {
            ctx->pc = 0x2248E4u;
            goto label_2248e4;
        }
    }
    ctx->pc = 0x2248DCu;
    // 0x2248dc: 0xc089250
    ctx->pc = 0x2248DCu;
    SET_GPR_U32(ctx, 31, 0x2248E4u);
    ctx->pc = 0x224940u;
    {
        const uint32_t __entryPc = ctx->pc;
        MojiCount__8MojiUchiFv_0x224940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2248E4u; }
        else if (ctx->pc != 0x2248E4u) { ctx->pc = 0x2248E4u; }
    }
    if (ctx->pc != 0x2248E4u) { return; }
    ctx->pc = 0x2248E4u;
label_2248e4:
    // 0x2248e4: 0x7bbf00a0
    ctx->pc = 0x2248e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2248e8: 0x7bbe0090
    ctx->pc = 0x2248e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2248ec: 0x7bb70080
    ctx->pc = 0x2248ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2248f0: 0x7bb60070
    ctx->pc = 0x2248f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2248f4: 0x7bb50060
    ctx->pc = 0x2248f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2248f8: 0x7bb40050
    ctx->pc = 0x2248f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2248fc: 0x7bb30040
    ctx->pc = 0x2248fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x224900: 0x7bb20030
    ctx->pc = 0x224900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224904: 0x7bb10020
    ctx->pc = 0x224904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224908: 0x7bb00010
    ctx->pc = 0x224908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22490c: 0xc7b40000
    ctx->pc = 0x22490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224910: 0x3e00008
    ctx->pc = 0x224910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224664u: goto label_224664;
            case 0x2246A4u: goto label_2246a4;
            case 0x2246B8u: goto label_2246b8;
            case 0x2246DCu: goto label_2246dc;
            case 0x2246F0u: goto label_2246f0;
            case 0x224718u: goto label_224718;
            case 0x22480Cu: goto label_22480c;
            case 0x224824u: goto label_224824;
            case 0x224880u: goto label_224880;
            case 0x224890u: goto label_224890;
            case 0x224894u: goto label_224894;
            case 0x224898u: goto label_224898;
            case 0x2248B8u: goto label_2248b8;
            case 0x2248E4u: goto label_2248e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224918u;
}
