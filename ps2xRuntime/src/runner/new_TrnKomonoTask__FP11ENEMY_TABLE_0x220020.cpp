#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_TrnKomonoTask__FP11ENEMY_TABLE
// Address: 0x220020 - 0x220710
void new_TrnKomonoTask__FP11ENEMY_TABLE_0x220020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_TrnKomonoTask__FP11ENEMY_TABLE");


    ctx->pc = 0x220020u;

    // 0x220020: 0x27bdfb70
    ctx->pc = 0x220020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x220024: 0x7fbf0070
    ctx->pc = 0x220024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x220028: 0x7fb60060
    ctx->pc = 0x220028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22002c: 0x7fb50050
    ctx->pc = 0x22002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x220030: 0x7fb40040
    ctx->pc = 0x220030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x220034: 0x7fb30030
    ctx->pc = 0x220034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x220038: 0x7fb20020
    ctx->pc = 0x220038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22003c: 0x7fb10010
    ctx->pc = 0x22003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220040: 0x7fb00000
    ctx->pc = 0x220040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x220044: 0x90850000
    ctx->pc = 0x220044u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x220048: 0x27b60082
    ctx->pc = 0x220048u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 130));
    // 0x22004c: 0x27b50084
    ctx->pc = 0x22004cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 132));
    // 0x220050: 0x27b00086
    ctx->pc = 0x220050u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 134));
    // 0x220054: 0x24030017
    ctx->pc = 0x220054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
    // 0x220058: 0xa3a50080
    ctx->pc = 0x220058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
    // 0x22005c: 0x80850001
    ctx->pc = 0x22005cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x220060: 0xa3a50081
    ctx->pc = 0x220060u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 5));
    // 0x220064: 0x94850002
    ctx->pc = 0x220064u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x220068: 0xa6c50000
    ctx->pc = 0x220068u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x22006c: 0x94850004
    ctx->pc = 0x22006cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x220070: 0xa6a50000
    ctx->pc = 0x220070u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x220074: 0x94850006
    ctx->pc = 0x220074u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x220078: 0xa6050000
    ctx->pc = 0x220078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x22007c: 0x94840014
    ctx->pc = 0x22007cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x220080: 0x108300a2
    ctx->pc = 0x220080u;
    {
        const bool branch_taken_0x220080 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x220084u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x220080) {
            ctx->pc = 0x22030Cu;
            goto label_22030c;
        }
    }
    ctx->pc = 0x220088u;
    // 0x220088: 0x24030018
    ctx->pc = 0x220088u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22008c: 0x10830003
    ctx->pc = 0x22008Cu;
    {
        const bool branch_taken_0x22008c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x220090u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 424));
        if (branch_taken_0x22008c) {
            ctx->pc = 0x22009Cu;
            goto label_22009c;
        }
    }
    ctx->pc = 0x220094u;
    // 0x220094: 0x10000195
    ctx->pc = 0x220094u;
    {
        const bool branch_taken_0x220094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220098u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x220094) {
            ctx->pc = 0x2206ECu;
            goto label_2206ec;
        }
    }
    ctx->pc = 0x22009Cu;
label_22009c:
    // 0x22009c: 0xafa30094
    ctx->pc = 0x22009cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x2200a0: 0x3c03002c
    ctx->pc = 0x2200a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x2200a4: 0xafa00098
    ctx->pc = 0x2200a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x2200a8: 0x70008e28
    ctx->pc = 0x2200a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2200ac: 0x10000092
    ctx->pc = 0x2200ACu;
    {
        const bool branch_taken_0x2200ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2200B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 5232));
        if (branch_taken_0x2200ac) {
            ctx->pc = 0x2202F8u;
            goto label_2202f8;
        }
    }
    ctx->pc = 0x2200B4u;
label_2200b4:
    // 0x2200b4: 0xc6400004
    ctx->pc = 0x2200b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2200b8: 0x3c03003e
    ctx->pc = 0x2200b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x2200bc: 0xe7a00088
    ctx->pc = 0x2200bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2200c0: 0xc6400008
    ctx->pc = 0x2200c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2200c4: 0xe7a0008c
    ctx->pc = 0x2200c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2200c8: 0xc640000c
    ctx->pc = 0x2200c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2200cc: 0xe7a00090
    ctx->pc = 0x2200ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2200d0: 0x86420010
    ctx->pc = 0x2200d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2200d4: 0xa6c20000
    ctx->pc = 0x2200d4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2200d8: 0x86420014
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2200dc: 0xa6a20000
    ctx->pc = 0x2200dcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2200e0: 0x86420018
    ctx->pc = 0x2200e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2200e4: 0xa6020000
    ctx->pc = 0x2200e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2200e8: 0x8e440000
    ctx->pc = 0x2200e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2200ec: 0x1083000a
    ctx->pc = 0x2200ECu;
    {
        const bool branch_taken_0x2200ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2200ec) {
            ctx->pc = 0x220118u;
            goto label_220118;
        }
    }
    ctx->pc = 0x2200F4u;
    // 0x2200f4: 0x346201cf
    ctx->pc = 0x2200f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 463));
    // 0x2200f8: 0x10820007
    ctx->pc = 0x2200F8u;
    {
        const bool branch_taken_0x2200f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2200f8) {
            ctx->pc = 0x220118u;
            goto label_220118;
        }
    }
    ctx->pc = 0x220100u;
    // 0x220100: 0x34620001
    ctx->pc = 0x220100u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
    // 0x220104: 0x10820004
    ctx->pc = 0x220104u;
    {
        const bool branch_taken_0x220104 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x220104) {
            ctx->pc = 0x220118u;
            goto label_220118;
        }
    }
    ctx->pc = 0x22010Cu;
    // 0x22010c: 0x3462015b
    ctx->pc = 0x22010cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 347));
    // 0x220110: 0x1482003c
    ctx->pc = 0x220110u;
    {
        const bool branch_taken_0x220110 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x220110) {
            ctx->pc = 0x220204u;
            goto label_220204;
        }
    }
    ctx->pc = 0x220118u;
label_220118:
    // 0x220118: 0x3c010050
    ctx->pc = 0x220118u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x22011c: 0x8423e504
    ctx->pc = 0x22011cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x220120: 0x2402000a
    ctx->pc = 0x220120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x220124: 0x14620020
    ctx->pc = 0x220124u;
    {
        const bool branch_taken_0x220124 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x220124) {
            ctx->pc = 0x2201A8u;
            goto label_2201a8;
        }
    }
    ctx->pc = 0x22012Cu;
    // 0x22012c: 0x8f838bcc
    ctx->pc = 0x22012cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x220130: 0x24020002
    ctx->pc = 0x220130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x220134: 0x1462001c
    ctx->pc = 0x220134u;
    {
        const bool branch_taken_0x220134 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x220134) {
            ctx->pc = 0x2201A8u;
            goto label_2201a8;
        }
    }
    ctx->pc = 0x22013Cu;
    // 0x22013c: 0x8f948ccc
    ctx->pc = 0x22013cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x220140: 0x12800003
    ctx->pc = 0x220140u;
    {
        const bool branch_taken_0x220140 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x220140) {
            ctx->pc = 0x220150u;
            goto label_220150;
        }
    }
    ctx->pc = 0x220148u;
    // 0x220148: 0x8e940000
    ctx->pc = 0x220148u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22014c: 0x0
    ctx->pc = 0x22014cu;
    // NOP
label_220150:
    // 0x220150: 0xc06903c
    ctx->pc = 0x220150u;
    SET_GPR_U32(ctx, 31, 0x220158u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220158u; }
        else if (ctx->pc != 0x220158u) { ctx->pc = 0x220158u; }
    }
    if (ctx->pc != 0x220158u) { return; }
    ctx->pc = 0x220158u;
    // 0x220158: 0xc06903c
    ctx->pc = 0x220158u;
    SET_GPR_U32(ctx, 31, 0x220160u);
    ctx->pc = 0x22015Cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220160u; }
        else if (ctx->pc != 0x220160u) { ctx->pc = 0x220160u; }
    }
    if (ctx->pc != 0x220160u) { return; }
    ctx->pc = 0x220160u;
    // 0x220160: 0x8c420010
    ctx->pc = 0x220160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220164: 0x8e660010
    ctx->pc = 0x220164u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x220168: 0x72804628
    ctx->pc = 0x220168u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x22016c: 0x240414c0
    ctx->pc = 0x22016cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5312));
    // 0x220170: 0x8c470014
    ctx->pc = 0x220170u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x220174: 0xc069040
    ctx->pc = 0x220174u;
    SET_GPR_U32(ctx, 31, 0x22017Cu);
    ctx->pc = 0x220178u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22017Cu; }
        else if (ctx->pc != 0x22017Cu) { ctx->pc = 0x22017Cu; }
    }
    if (ctx->pc != 0x22017Cu) { return; }
    ctx->pc = 0x22017Cu;
    // 0x22017c: 0x70402628
    ctx->pc = 0x22017cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220180: 0x5080005c
    ctx->pc = 0x220180u;
    {
        const bool branch_taken_0x220180 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x220180) {
            ctx->pc = 0x220184u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 40));
            ctx->pc = 0x2202F4u;
            goto label_2202f4;
        }
    }
    ctx->pc = 0x220188u;
    // 0x220188: 0x8e470000
    ctx->pc = 0x220188u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22018c: 0x24050001
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x220190: 0x27a60080
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x220194: 0x70a04628
    ctx->pc = 0x220194u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x220198: 0xc08749c
    ctx->pc = 0x220198u;
    SET_GPR_U32(ctx, 31, 0x2201A0u);
    ctx->pc = 0x22019Cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21D270u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18KomonoTrnRigidTaskFP11ENEMY_TABLEiii_0x21d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201A0u; }
        else if (ctx->pc != 0x2201A0u) { ctx->pc = 0x2201A0u; }
    }
    if (ctx->pc != 0x2201A0u) { return; }
    ctx->pc = 0x2201A0u;
    // 0x2201a0: 0x10000053
    ctx->pc = 0x2201A0u;
    {
        const bool branch_taken_0x2201a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2201a0) {
            ctx->pc = 0x2202F0u;
            goto label_2202f0;
        }
    }
    ctx->pc = 0x2201A8u;
label_2201a8:
    // 0x2201a8: 0xc06903c
    ctx->pc = 0x2201A8u;
    SET_GPR_U32(ctx, 31, 0x2201B0u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201B0u; }
        else if (ctx->pc != 0x2201B0u) { ctx->pc = 0x2201B0u; }
    }
    if (ctx->pc != 0x2201B0u) { return; }
    ctx->pc = 0x2201B0u;
    // 0x2201b0: 0xc06903c
    ctx->pc = 0x2201B0u;
    SET_GPR_U32(ctx, 31, 0x2201B8u);
    ctx->pc = 0x2201B4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201B8u; }
        else if (ctx->pc != 0x2201B8u) { ctx->pc = 0x2201B8u; }
    }
    if (ctx->pc != 0x2201B8u) { return; }
    ctx->pc = 0x2201B8u;
    // 0x2201b8: 0xc06903c
    ctx->pc = 0x2201B8u;
    SET_GPR_U32(ctx, 31, 0x2201C0u);
    ctx->pc = 0x2201BCu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201C0u; }
        else if (ctx->pc != 0x2201C0u) { ctx->pc = 0x2201C0u; }
    }
    if (ctx->pc != 0x2201C0u) { return; }
    ctx->pc = 0x2201C0u;
    // 0x2201c0: 0x8e860010
    ctx->pc = 0x2201c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2201c4: 0x8e670014
    ctx->pc = 0x2201c4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2201c8: 0x240414c0
    ctx->pc = 0x2201c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5312));
    // 0x2201cc: 0x70002e28
    ctx->pc = 0x2201ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2201d0: 0xc069040
    ctx->pc = 0x2201D0u;
    SET_GPR_U32(ctx, 31, 0x2201D8u);
    ctx->pc = 0x2201D4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201D8u; }
        else if (ctx->pc != 0x2201D8u) { ctx->pc = 0x2201D8u; }
    }
    if (ctx->pc != 0x2201D8u) { return; }
    ctx->pc = 0x2201D8u;
    // 0x2201d8: 0x70402628
    ctx->pc = 0x2201d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2201dc: 0x10800044
    ctx->pc = 0x2201DCu;
    {
        const bool branch_taken_0x2201dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2201dc) {
            ctx->pc = 0x2202F0u;
            goto label_2202f0;
        }
    }
    ctx->pc = 0x2201E4u;
    // 0x2201e4: 0x8e470000
    ctx->pc = 0x2201e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2201e8: 0x24050001
    ctx->pc = 0x2201e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2201ec: 0x27a60080
    ctx->pc = 0x2201ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2201f0: 0x70a04628
    ctx->pc = 0x2201f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2201f4: 0xc08749c
    ctx->pc = 0x2201F4u;
    SET_GPR_U32(ctx, 31, 0x2201FCu);
    ctx->pc = 0x2201F8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21D270u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18KomonoTrnRigidTaskFP11ENEMY_TABLEiii_0x21d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201FCu; }
        else if (ctx->pc != 0x2201FCu) { ctx->pc = 0x2201FCu; }
    }
    if (ctx->pc != 0x2201FCu) { return; }
    ctx->pc = 0x2201FCu;
    // 0x2201fc: 0x1000003c
    ctx->pc = 0x2201FCu;
    {
        const bool branch_taken_0x2201fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2201fc) {
            ctx->pc = 0x2202F0u;
            goto label_2202f0;
        }
    }
    ctx->pc = 0x220204u;
label_220204:
    // 0x220204: 0x3c010050
    ctx->pc = 0x220204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x220208: 0x8423e504
    ctx->pc = 0x220208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x22020c: 0x2402000a
    ctx->pc = 0x22020cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x220210: 0x14620021
    ctx->pc = 0x220210u;
    {
        const bool branch_taken_0x220210 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x220210) {
            ctx->pc = 0x220298u;
            goto label_220298;
        }
    }
    ctx->pc = 0x220218u;
    // 0x220218: 0x8f838bcc
    ctx->pc = 0x220218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x22021c: 0x24020002
    ctx->pc = 0x22021cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x220220: 0x1462001d
    ctx->pc = 0x220220u;
    {
        const bool branch_taken_0x220220 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x220220) {
            ctx->pc = 0x220298u;
            goto label_220298;
        }
    }
    ctx->pc = 0x220228u;
    // 0x220228: 0x8f948ccc
    ctx->pc = 0x220228u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x22022c: 0x12800004
    ctx->pc = 0x22022Cu;
    {
        const bool branch_taken_0x22022c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x22022c) {
            ctx->pc = 0x220240u;
            goto label_220240;
        }
    }
    ctx->pc = 0x220234u;
    // 0x220234: 0x8e940000
    ctx->pc = 0x220234u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x220238: 0x0
    ctx->pc = 0x220238u;
    // NOP
    // 0x22023c: 0x0
    ctx->pc = 0x22023cu;
    // NOP
label_220240:
    // 0x220240: 0xc06903c
    ctx->pc = 0x220240u;
    SET_GPR_U32(ctx, 31, 0x220248u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220248u; }
        else if (ctx->pc != 0x220248u) { ctx->pc = 0x220248u; }
    }
    if (ctx->pc != 0x220248u) { return; }
    ctx->pc = 0x220248u;
    // 0x220248: 0xc06903c
    ctx->pc = 0x220248u;
    SET_GPR_U32(ctx, 31, 0x220250u);
    ctx->pc = 0x22024Cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220250u; }
        else if (ctx->pc != 0x220250u) { ctx->pc = 0x220250u; }
    }
    if (ctx->pc != 0x220250u) { return; }
    ctx->pc = 0x220250u;
    // 0x220250: 0x8c420010
    ctx->pc = 0x220250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220254: 0x8e660010
    ctx->pc = 0x220254u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x220258: 0x72804628
    ctx->pc = 0x220258u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x22025c: 0x240401d0
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x220260: 0x8c470014
    ctx->pc = 0x220260u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x220264: 0xc069040
    ctx->pc = 0x220264u;
    SET_GPR_U32(ctx, 31, 0x22026Cu);
    ctx->pc = 0x220268u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22026Cu; }
        else if (ctx->pc != 0x22026Cu) { ctx->pc = 0x22026Cu; }
    }
    if (ctx->pc != 0x22026Cu) { return; }
    ctx->pc = 0x22026Cu;
    // 0x22026c: 0x70402628
    ctx->pc = 0x22026cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220270: 0x1080001f
    ctx->pc = 0x220270u;
    {
        const bool branch_taken_0x220270 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x220270) {
            ctx->pc = 0x2202F0u;
            goto label_2202f0;
        }
    }
    ctx->pc = 0x220278u;
    // 0x220278: 0x8e470000
    ctx->pc = 0x220278u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22027c: 0x24050001
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x220280: 0x27a60080
    ctx->pc = 0x220280u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x220284: 0x70a04628
    ctx->pc = 0x220284u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x220288: 0xc087d9c
    ctx->pc = 0x220288u;
    SET_GPR_U32(ctx, 31, 0x220290u);
    ctx->pc = 0x22028Cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220290u; }
        else if (ctx->pc != 0x220290u) { ctx->pc = 0x220290u; }
    }
    if (ctx->pc != 0x220290u) { return; }
    ctx->pc = 0x220290u;
    // 0x220290: 0x10000017
    ctx->pc = 0x220290u;
    {
        const bool branch_taken_0x220290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x220290) {
            ctx->pc = 0x2202F0u;
            goto label_2202f0;
        }
    }
    ctx->pc = 0x220298u;
label_220298:
    // 0x220298: 0xc06903c
    ctx->pc = 0x220298u;
    SET_GPR_U32(ctx, 31, 0x2202A0u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202A0u; }
        else if (ctx->pc != 0x2202A0u) { ctx->pc = 0x2202A0u; }
    }
    if (ctx->pc != 0x2202A0u) { return; }
    ctx->pc = 0x2202A0u;
    // 0x2202a0: 0xc06903c
    ctx->pc = 0x2202A0u;
    SET_GPR_U32(ctx, 31, 0x2202A8u);
    ctx->pc = 0x2202A4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202A8u; }
        else if (ctx->pc != 0x2202A8u) { ctx->pc = 0x2202A8u; }
    }
    if (ctx->pc != 0x2202A8u) { return; }
    ctx->pc = 0x2202A8u;
    // 0x2202a8: 0xc06903c
    ctx->pc = 0x2202A8u;
    SET_GPR_U32(ctx, 31, 0x2202B0u);
    ctx->pc = 0x2202ACu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202B0u; }
        else if (ctx->pc != 0x2202B0u) { ctx->pc = 0x2202B0u; }
    }
    if (ctx->pc != 0x2202B0u) { return; }
    ctx->pc = 0x2202B0u;
    // 0x2202b0: 0x8e860010
    ctx->pc = 0x2202b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2202b4: 0x8e670014
    ctx->pc = 0x2202b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2202b8: 0x240401d0
    ctx->pc = 0x2202b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x2202bc: 0x70002e28
    ctx->pc = 0x2202bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2202c0: 0xc069040
    ctx->pc = 0x2202C0u;
    SET_GPR_U32(ctx, 31, 0x2202C8u);
    ctx->pc = 0x2202C4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202C8u; }
        else if (ctx->pc != 0x2202C8u) { ctx->pc = 0x2202C8u; }
    }
    if (ctx->pc != 0x2202C8u) { return; }
    ctx->pc = 0x2202C8u;
    // 0x2202c8: 0x70402628
    ctx->pc = 0x2202c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2202cc: 0x10800008
    ctx->pc = 0x2202CCu;
    {
        const bool branch_taken_0x2202cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2202cc) {
            ctx->pc = 0x2202F0u;
            goto label_2202f0;
        }
    }
    ctx->pc = 0x2202D4u;
    // 0x2202d4: 0x8e470000
    ctx->pc = 0x2202d4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2202d8: 0x24050001
    ctx->pc = 0x2202d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2202dc: 0x27a60080
    ctx->pc = 0x2202dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2202e0: 0x70a04628
    ctx->pc = 0x2202e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2202e4: 0xc087d9c
    ctx->pc = 0x2202E4u;
    SET_GPR_U32(ctx, 31, 0x2202ECu);
    ctx->pc = 0x2202E8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202ECu; }
        else if (ctx->pc != 0x2202ECu) { ctx->pc = 0x2202ECu; }
    }
    if (ctx->pc != 0x2202ECu) { return; }
    ctx->pc = 0x2202ECu;
    // 0x2202ec: 0x0
    ctx->pc = 0x2202ecu;
    // NOP
label_2202f0:
    // 0x2202f0: 0x26520028
    ctx->pc = 0x2202f0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 40));
label_2202f4:
    // 0x2202f4: 0x26310001
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2202f8:
    // 0x2202f8: 0x2e230012
    ctx->pc = 0x2202f8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 18));
    // 0x2202fc: 0x1460ff6d
    ctx->pc = 0x2202FCu;
    {
        const bool branch_taken_0x2202fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2202fc) {
            ctx->pc = 0x2200B4u;
            goto label_2200b4;
        }
    }
    ctx->pc = 0x220304u;
    // 0x220304: 0x100000f8
    ctx->pc = 0x220304u;
    {
        const bool branch_taken_0x220304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x220304) {
            ctx->pc = 0x2206E8u;
            goto label_2206e8;
        }
    }
    ctx->pc = 0x22030Cu;
label_22030c:
    // 0x22030c: 0x8024fdf5
    ctx->pc = 0x22030cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966773)));
    // 0x220310: 0x24030001
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x220314: 0x14830051
    ctx->pc = 0x220314u;
    {
        const bool branch_taken_0x220314 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x220318u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937792), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x220314) {
            ctx->pc = 0x22045Cu;
            goto label_22045c;
        }
    }
    ctx->pc = 0x22031Cu;
    // 0x22031c: 0x3c03002c
    ctx->pc = 0x22031cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x220320: 0x70008e28
    ctx->pc = 0x220320u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220324: 0x10000048
    ctx->pc = 0x220324u;
    {
        const bool branch_taken_0x220324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220328u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4592));
        if (branch_taken_0x220324) {
            ctx->pc = 0x220448u;
            goto label_220448;
        }
    }
    ctx->pc = 0x22032Cu;
label_22032c:
    // 0x22032c: 0xc6400000
    ctx->pc = 0x22032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220330: 0x240301a8
    ctx->pc = 0x220330u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 424));
    // 0x220334: 0x3c010050
    ctx->pc = 0x220334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x220338: 0x2402000a
    ctx->pc = 0x220338u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x22033c: 0xe7a00088
    ctx->pc = 0x22033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x220340: 0xc6400004
    ctx->pc = 0x220340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220344: 0xe7a0008c
    ctx->pc = 0x220344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x220348: 0xc6400008
    ctx->pc = 0x220348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22034c: 0xe7a00090
    ctx->pc = 0x22034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x220350: 0xa6c00000
    ctx->pc = 0x220350u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x220354: 0xa6a00000
    ctx->pc = 0x220354u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x220358: 0xa6000000
    ctx->pc = 0x220358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22035c: 0xafa30094
    ctx->pc = 0x22035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x220360: 0x8423e504
    ctx->pc = 0x220360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x220364: 0x14620021
    ctx->pc = 0x220364u;
    {
        const bool branch_taken_0x220364 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x220368u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        if (branch_taken_0x220364) {
            ctx->pc = 0x2203ECu;
            goto label_2203ec;
        }
    }
    ctx->pc = 0x22036Cu;
    // 0x22036c: 0x8f838bcc
    ctx->pc = 0x22036cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x220370: 0x24020002
    ctx->pc = 0x220370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x220374: 0x1462001d
    ctx->pc = 0x220374u;
    {
        const bool branch_taken_0x220374 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x220374) {
            ctx->pc = 0x2203ECu;
            goto label_2203ec;
        }
    }
    ctx->pc = 0x22037Cu;
    // 0x22037c: 0x8f948ccc
    ctx->pc = 0x22037cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x220380: 0x12800003
    ctx->pc = 0x220380u;
    {
        const bool branch_taken_0x220380 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x220380) {
            ctx->pc = 0x220390u;
            goto label_220390;
        }
    }
    ctx->pc = 0x220388u;
    // 0x220388: 0x8e940000
    ctx->pc = 0x220388u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22038c: 0x0
    ctx->pc = 0x22038cu;
    // NOP
label_220390:
    // 0x220390: 0xc06903c
    ctx->pc = 0x220390u;
    SET_GPR_U32(ctx, 31, 0x220398u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220398u; }
        else if (ctx->pc != 0x220398u) { ctx->pc = 0x220398u; }
    }
    if (ctx->pc != 0x220398u) { return; }
    ctx->pc = 0x220398u;
    // 0x220398: 0xc06903c
    ctx->pc = 0x220398u;
    SET_GPR_U32(ctx, 31, 0x2203A0u);
    ctx->pc = 0x22039Cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203A0u; }
        else if (ctx->pc != 0x2203A0u) { ctx->pc = 0x2203A0u; }
    }
    if (ctx->pc != 0x2203A0u) { return; }
    ctx->pc = 0x2203A0u;
    // 0x2203a0: 0x8c420010
    ctx->pc = 0x2203a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2203a4: 0x8e660010
    ctx->pc = 0x2203a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2203a8: 0x72804628
    ctx->pc = 0x2203a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2203ac: 0x240401d0
    ctx->pc = 0x2203acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x2203b0: 0x8c470014
    ctx->pc = 0x2203b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2203b4: 0xc069040
    ctx->pc = 0x2203B4u;
    SET_GPR_U32(ctx, 31, 0x2203BCu);
    ctx->pc = 0x2203B8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203BCu; }
        else if (ctx->pc != 0x2203BCu) { ctx->pc = 0x2203BCu; }
    }
    if (ctx->pc != 0x2203BCu) { return; }
    ctx->pc = 0x2203BCu;
    // 0x2203bc: 0x70402628
    ctx->pc = 0x2203bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2203c0: 0x50800020
    ctx->pc = 0x2203C0u;
    {
        const bool branch_taken_0x2203c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2203c0) {
            ctx->pc = 0x2203C4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
            ctx->pc = 0x220444u;
            goto label_220444;
        }
    }
    ctx->pc = 0x2203C8u;
    // 0x2203c8: 0x24050001
    ctx->pc = 0x2203c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2203cc: 0x3c02003c
    ctx->pc = 0x2203ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2203d0: 0x27a60080
    ctx->pc = 0x2203d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2203d4: 0x3447006f
    ctx->pc = 0x2203d4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 111));
    // 0x2203d8: 0x70a04628
    ctx->pc = 0x2203d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2203dc: 0xc087d9c
    ctx->pc = 0x2203DCu;
    SET_GPR_U32(ctx, 31, 0x2203E4u);
    ctx->pc = 0x2203E0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203E4u; }
        else if (ctx->pc != 0x2203E4u) { ctx->pc = 0x2203E4u; }
    }
    if (ctx->pc != 0x2203E4u) { return; }
    ctx->pc = 0x2203E4u;
    // 0x2203e4: 0x10000016
    ctx->pc = 0x2203E4u;
    {
        const bool branch_taken_0x2203e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2203e4) {
            ctx->pc = 0x220440u;
            goto label_220440;
        }
    }
    ctx->pc = 0x2203ECu;
label_2203ec:
    // 0x2203ec: 0xc06903c
    ctx->pc = 0x2203ECu;
    SET_GPR_U32(ctx, 31, 0x2203F4u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203F4u; }
        else if (ctx->pc != 0x2203F4u) { ctx->pc = 0x2203F4u; }
    }
    if (ctx->pc != 0x2203F4u) { return; }
    ctx->pc = 0x2203F4u;
    // 0x2203f4: 0xc06903c
    ctx->pc = 0x2203F4u;
    SET_GPR_U32(ctx, 31, 0x2203FCu);
    ctx->pc = 0x2203F8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203FCu; }
        else if (ctx->pc != 0x2203FCu) { ctx->pc = 0x2203FCu; }
    }
    if (ctx->pc != 0x2203FCu) { return; }
    ctx->pc = 0x2203FCu;
    // 0x2203fc: 0xc06903c
    ctx->pc = 0x2203FCu;
    SET_GPR_U32(ctx, 31, 0x220404u);
    ctx->pc = 0x220400u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220404u; }
        else if (ctx->pc != 0x220404u) { ctx->pc = 0x220404u; }
    }
    if (ctx->pc != 0x220404u) { return; }
    ctx->pc = 0x220404u;
    // 0x220404: 0x8e860010
    ctx->pc = 0x220404u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x220408: 0x8e670014
    ctx->pc = 0x220408u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x22040c: 0x240401d0
    ctx->pc = 0x22040cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x220410: 0x70002e28
    ctx->pc = 0x220410u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220414: 0xc069040
    ctx->pc = 0x220414u;
    SET_GPR_U32(ctx, 31, 0x22041Cu);
    ctx->pc = 0x220418u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22041Cu; }
        else if (ctx->pc != 0x22041Cu) { ctx->pc = 0x22041Cu; }
    }
    if (ctx->pc != 0x22041Cu) { return; }
    ctx->pc = 0x22041Cu;
    // 0x22041c: 0x70402628
    ctx->pc = 0x22041cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220420: 0x10800007
    ctx->pc = 0x220420u;
    {
        const bool branch_taken_0x220420 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x220424u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x220420) {
            ctx->pc = 0x220440u;
            goto label_220440;
        }
    }
    ctx->pc = 0x220428u;
    // 0x220428: 0x3c02003c
    ctx->pc = 0x220428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22042c: 0x27a60080
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x220430: 0x3447006f
    ctx->pc = 0x220430u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 111));
    // 0x220434: 0x70a04628
    ctx->pc = 0x220434u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x220438: 0xc087d9c
    ctx->pc = 0x220438u;
    SET_GPR_U32(ctx, 31, 0x220440u);
    ctx->pc = 0x22043Cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220440u; }
        else if (ctx->pc != 0x220440u) { ctx->pc = 0x220440u; }
    }
    if (ctx->pc != 0x220440u) { return; }
    ctx->pc = 0x220440u;
label_220440:
    // 0x220440: 0x2652000c
    ctx->pc = 0x220440u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
label_220444:
    // 0x220444: 0x26310001
    ctx->pc = 0x220444u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_220448:
    // 0x220448: 0x2e230019
    ctx->pc = 0x220448u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 25));
    // 0x22044c: 0x1460ffb7
    ctx->pc = 0x22044Cu;
    {
        const bool branch_taken_0x22044c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x22044c) {
            ctx->pc = 0x22032Cu;
            goto label_22032c;
        }
    }
    ctx->pc = 0x220454u;
    // 0x220454: 0x100000a4
    ctx->pc = 0x220454u;
    {
        const bool branch_taken_0x220454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x220454) {
            ctx->pc = 0x2206E8u;
            goto label_2206e8;
        }
    }
    ctx->pc = 0x22045Cu;
label_22045c:
    // 0x22045c: 0x24030002
    ctx->pc = 0x22045cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x220460: 0x14830052
    ctx->pc = 0x220460u;
    {
        const bool branch_taken_0x220460 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x220464u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x220460) {
            ctx->pc = 0x2205ACu;
            goto label_2205ac;
        }
    }
    ctx->pc = 0x220468u;
    // 0x220468: 0x3c03002c
    ctx->pc = 0x220468u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x22046c: 0x70008e28
    ctx->pc = 0x22046cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220470: 0x10000049
    ctx->pc = 0x220470u;
    {
        const bool branch_taken_0x220470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220474u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4896));
        if (branch_taken_0x220470) {
            ctx->pc = 0x220598u;
            goto label_220598;
        }
    }
    ctx->pc = 0x220478u;
label_220478:
    // 0x220478: 0xc6400000
    ctx->pc = 0x220478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22047c: 0x240301a8
    ctx->pc = 0x22047cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 424));
    // 0x220480: 0x3c010050
    ctx->pc = 0x220480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x220484: 0x2402000a
    ctx->pc = 0x220484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x220488: 0xe7a00088
    ctx->pc = 0x220488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22048c: 0xc6400004
    ctx->pc = 0x22048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220490: 0xe7a0008c
    ctx->pc = 0x220490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x220494: 0xc6400008
    ctx->pc = 0x220494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220498: 0xe7a00090
    ctx->pc = 0x220498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x22049c: 0xa6c00000
    ctx->pc = 0x22049cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2204a0: 0xa6a00000
    ctx->pc = 0x2204a0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2204a4: 0xa6000000
    ctx->pc = 0x2204a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2204a8: 0xafa30094
    ctx->pc = 0x2204a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x2204ac: 0x8423e504
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x2204b0: 0x14620022
    ctx->pc = 0x2204B0u;
    {
        const bool branch_taken_0x2204b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2204B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        if (branch_taken_0x2204b0) {
            ctx->pc = 0x22053Cu;
            goto label_22053c;
        }
    }
    ctx->pc = 0x2204B8u;
    // 0x2204b8: 0x8f838bcc
    ctx->pc = 0x2204b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x2204bc: 0x24020002
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2204c0: 0x1462001e
    ctx->pc = 0x2204C0u;
    {
        const bool branch_taken_0x2204c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2204c0) {
            ctx->pc = 0x22053Cu;
            goto label_22053c;
        }
    }
    ctx->pc = 0x2204C8u;
    // 0x2204c8: 0x8f948ccc
    ctx->pc = 0x2204c8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x2204cc: 0x12800004
    ctx->pc = 0x2204CCu;
    {
        const bool branch_taken_0x2204cc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2204cc) {
            ctx->pc = 0x2204E0u;
            goto label_2204e0;
        }
    }
    ctx->pc = 0x2204D4u;
    // 0x2204d4: 0x8e940000
    ctx->pc = 0x2204d4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2204d8: 0x0
    ctx->pc = 0x2204d8u;
    // NOP
    // 0x2204dc: 0x0
    ctx->pc = 0x2204dcu;
    // NOP
label_2204e0:
    // 0x2204e0: 0xc06903c
    ctx->pc = 0x2204E0u;
    SET_GPR_U32(ctx, 31, 0x2204E8u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2204E8u; }
        else if (ctx->pc != 0x2204E8u) { ctx->pc = 0x2204E8u; }
    }
    if (ctx->pc != 0x2204E8u) { return; }
    ctx->pc = 0x2204E8u;
    // 0x2204e8: 0xc06903c
    ctx->pc = 0x2204E8u;
    SET_GPR_U32(ctx, 31, 0x2204F0u);
    ctx->pc = 0x2204ECu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2204F0u; }
        else if (ctx->pc != 0x2204F0u) { ctx->pc = 0x2204F0u; }
    }
    if (ctx->pc != 0x2204F0u) { return; }
    ctx->pc = 0x2204F0u;
    // 0x2204f0: 0x8c420010
    ctx->pc = 0x2204f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2204f4: 0x8e660010
    ctx->pc = 0x2204f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2204f8: 0x72804628
    ctx->pc = 0x2204f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2204fc: 0x240401d0
    ctx->pc = 0x2204fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x220500: 0x8c470014
    ctx->pc = 0x220500u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x220504: 0xc069040
    ctx->pc = 0x220504u;
    SET_GPR_U32(ctx, 31, 0x22050Cu);
    ctx->pc = 0x220508u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22050Cu; }
        else if (ctx->pc != 0x22050Cu) { ctx->pc = 0x22050Cu; }
    }
    if (ctx->pc != 0x22050Cu) { return; }
    ctx->pc = 0x22050Cu;
    // 0x22050c: 0x70402628
    ctx->pc = 0x22050cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220510: 0x50800020
    ctx->pc = 0x220510u;
    {
        const bool branch_taken_0x220510 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x220510) {
            ctx->pc = 0x220514u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
            ctx->pc = 0x220594u;
            goto label_220594;
        }
    }
    ctx->pc = 0x220518u;
    // 0x220518: 0x24050001
    ctx->pc = 0x220518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22051c: 0x3c02003c
    ctx->pc = 0x22051cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x220520: 0x27a60080
    ctx->pc = 0x220520u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x220524: 0x3447006f
    ctx->pc = 0x220524u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 111));
    // 0x220528: 0x70a04628
    ctx->pc = 0x220528u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22052c: 0xc087d9c
    ctx->pc = 0x22052Cu;
    SET_GPR_U32(ctx, 31, 0x220534u);
    ctx->pc = 0x220530u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220534u; }
        else if (ctx->pc != 0x220534u) { ctx->pc = 0x220534u; }
    }
    if (ctx->pc != 0x220534u) { return; }
    ctx->pc = 0x220534u;
    // 0x220534: 0x10000016
    ctx->pc = 0x220534u;
    {
        const bool branch_taken_0x220534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x220534) {
            ctx->pc = 0x220590u;
            goto label_220590;
        }
    }
    ctx->pc = 0x22053Cu;
label_22053c:
    // 0x22053c: 0xc06903c
    ctx->pc = 0x22053Cu;
    SET_GPR_U32(ctx, 31, 0x220544u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220544u; }
        else if (ctx->pc != 0x220544u) { ctx->pc = 0x220544u; }
    }
    if (ctx->pc != 0x220544u) { return; }
    ctx->pc = 0x220544u;
    // 0x220544: 0xc06903c
    ctx->pc = 0x220544u;
    SET_GPR_U32(ctx, 31, 0x22054Cu);
    ctx->pc = 0x220548u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22054Cu; }
        else if (ctx->pc != 0x22054Cu) { ctx->pc = 0x22054Cu; }
    }
    if (ctx->pc != 0x22054Cu) { return; }
    ctx->pc = 0x22054Cu;
    // 0x22054c: 0xc06903c
    ctx->pc = 0x22054Cu;
    SET_GPR_U32(ctx, 31, 0x220554u);
    ctx->pc = 0x220550u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220554u; }
        else if (ctx->pc != 0x220554u) { ctx->pc = 0x220554u; }
    }
    if (ctx->pc != 0x220554u) { return; }
    ctx->pc = 0x220554u;
    // 0x220554: 0x8e860010
    ctx->pc = 0x220554u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x220558: 0x8e670014
    ctx->pc = 0x220558u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x22055c: 0x240401d0
    ctx->pc = 0x22055cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x220560: 0x70002e28
    ctx->pc = 0x220560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220564: 0xc069040
    ctx->pc = 0x220564u;
    SET_GPR_U32(ctx, 31, 0x22056Cu);
    ctx->pc = 0x220568u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22056Cu; }
        else if (ctx->pc != 0x22056Cu) { ctx->pc = 0x22056Cu; }
    }
    if (ctx->pc != 0x22056Cu) { return; }
    ctx->pc = 0x22056Cu;
    // 0x22056c: 0x70402628
    ctx->pc = 0x22056cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220570: 0x10800007
    ctx->pc = 0x220570u;
    {
        const bool branch_taken_0x220570 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x220574u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x220570) {
            ctx->pc = 0x220590u;
            goto label_220590;
        }
    }
    ctx->pc = 0x220578u;
    // 0x220578: 0x3c02003c
    ctx->pc = 0x220578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22057c: 0x27a60080
    ctx->pc = 0x22057cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x220580: 0x3447006f
    ctx->pc = 0x220580u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 111));
    // 0x220584: 0x70a04628
    ctx->pc = 0x220584u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x220588: 0xc087d9c
    ctx->pc = 0x220588u;
    SET_GPR_U32(ctx, 31, 0x220590u);
    ctx->pc = 0x22058Cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220590u; }
        else if (ctx->pc != 0x220590u) { ctx->pc = 0x220590u; }
    }
    if (ctx->pc != 0x220590u) { return; }
    ctx->pc = 0x220590u;
label_220590:
    // 0x220590: 0x2652000c
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
label_220594:
    // 0x220594: 0x26310001
    ctx->pc = 0x220594u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_220598:
    // 0x220598: 0x2e23001c
    ctx->pc = 0x220598u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 28));
    // 0x22059c: 0x1460ffb6
    ctx->pc = 0x22059Cu;
    {
        const bool branch_taken_0x22059c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x22059c) {
            ctx->pc = 0x220478u;
            goto label_220478;
        }
    }
    ctx->pc = 0x2205A4u;
    // 0x2205a4: 0x10000050
    ctx->pc = 0x2205A4u;
    {
        const bool branch_taken_0x2205a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2205a4) {
            ctx->pc = 0x2206E8u;
            goto label_2206e8;
        }
    }
    ctx->pc = 0x2205ACu;
label_2205ac:
    // 0x2205ac: 0x70008e28
    ctx->pc = 0x2205acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2205b0: 0x10000049
    ctx->pc = 0x2205B0u;
    {
        const bool branch_taken_0x2205b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2205B4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4320));
        if (branch_taken_0x2205b0) {
            ctx->pc = 0x2206D8u;
            goto label_2206d8;
        }
    }
    ctx->pc = 0x2205B8u;
label_2205b8:
    // 0x2205b8: 0xc6400000
    ctx->pc = 0x2205b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2205bc: 0x240301a8
    ctx->pc = 0x2205bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 424));
    // 0x2205c0: 0x3c010050
    ctx->pc = 0x2205c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2205c4: 0x2402000a
    ctx->pc = 0x2205c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2205c8: 0xe7a00088
    ctx->pc = 0x2205c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2205cc: 0xc6400004
    ctx->pc = 0x2205ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2205d0: 0xe7a0008c
    ctx->pc = 0x2205d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2205d4: 0xc6400008
    ctx->pc = 0x2205d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2205d8: 0xe7a00090
    ctx->pc = 0x2205d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2205dc: 0xa6c00000
    ctx->pc = 0x2205dcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2205e0: 0xa6a00000
    ctx->pc = 0x2205e0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2205e4: 0xa6000000
    ctx->pc = 0x2205e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2205e8: 0xafa30094
    ctx->pc = 0x2205e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x2205ec: 0x8423e504
    ctx->pc = 0x2205ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x2205f0: 0x14620022
    ctx->pc = 0x2205F0u;
    {
        const bool branch_taken_0x2205f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2205F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        if (branch_taken_0x2205f0) {
            ctx->pc = 0x22067Cu;
            goto label_22067c;
        }
    }
    ctx->pc = 0x2205F8u;
    // 0x2205f8: 0x8f838bcc
    ctx->pc = 0x2205f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x2205fc: 0x24020002
    ctx->pc = 0x2205fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x220600: 0x1462001e
    ctx->pc = 0x220600u;
    {
        const bool branch_taken_0x220600 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x220600) {
            ctx->pc = 0x22067Cu;
            goto label_22067c;
        }
    }
    ctx->pc = 0x220608u;
    // 0x220608: 0x8f948ccc
    ctx->pc = 0x220608u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x22060c: 0x12800004
    ctx->pc = 0x22060Cu;
    {
        const bool branch_taken_0x22060c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x22060c) {
            ctx->pc = 0x220620u;
            goto label_220620;
        }
    }
    ctx->pc = 0x220614u;
    // 0x220614: 0x8e940000
    ctx->pc = 0x220614u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x220618: 0x0
    ctx->pc = 0x220618u;
    // NOP
    // 0x22061c: 0x0
    ctx->pc = 0x22061cu;
    // NOP
label_220620:
    // 0x220620: 0xc06903c
    ctx->pc = 0x220620u;
    SET_GPR_U32(ctx, 31, 0x220628u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220628u; }
        else if (ctx->pc != 0x220628u) { ctx->pc = 0x220628u; }
    }
    if (ctx->pc != 0x220628u) { return; }
    ctx->pc = 0x220628u;
    // 0x220628: 0xc06903c
    ctx->pc = 0x220628u;
    SET_GPR_U32(ctx, 31, 0x220630u);
    ctx->pc = 0x22062Cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220630u; }
        else if (ctx->pc != 0x220630u) { ctx->pc = 0x220630u; }
    }
    if (ctx->pc != 0x220630u) { return; }
    ctx->pc = 0x220630u;
    // 0x220630: 0x8c420010
    ctx->pc = 0x220630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220634: 0x8e660010
    ctx->pc = 0x220634u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x220638: 0x72804628
    ctx->pc = 0x220638u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x22063c: 0x240401d0
    ctx->pc = 0x22063cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x220640: 0x8c470014
    ctx->pc = 0x220640u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x220644: 0xc069040
    ctx->pc = 0x220644u;
    SET_GPR_U32(ctx, 31, 0x22064Cu);
    ctx->pc = 0x220648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22064Cu; }
        else if (ctx->pc != 0x22064Cu) { ctx->pc = 0x22064Cu; }
    }
    if (ctx->pc != 0x22064Cu) { return; }
    ctx->pc = 0x22064Cu;
    // 0x22064c: 0x70402628
    ctx->pc = 0x22064cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220650: 0x50800020
    ctx->pc = 0x220650u;
    {
        const bool branch_taken_0x220650 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x220650) {
            ctx->pc = 0x220654u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
            ctx->pc = 0x2206D4u;
            goto label_2206d4;
        }
    }
    ctx->pc = 0x220658u;
    // 0x220658: 0x24050001
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22065c: 0x3c02003c
    ctx->pc = 0x22065cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x220660: 0x27a60080
    ctx->pc = 0x220660u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x220664: 0x3447006f
    ctx->pc = 0x220664u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 111));
    // 0x220668: 0x70a04628
    ctx->pc = 0x220668u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22066c: 0xc087d9c
    ctx->pc = 0x22066Cu;
    SET_GPR_U32(ctx, 31, 0x220674u);
    ctx->pc = 0x220670u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220674u; }
        else if (ctx->pc != 0x220674u) { ctx->pc = 0x220674u; }
    }
    if (ctx->pc != 0x220674u) { return; }
    ctx->pc = 0x220674u;
    // 0x220674: 0x10000016
    ctx->pc = 0x220674u;
    {
        const bool branch_taken_0x220674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x220674) {
            ctx->pc = 0x2206D0u;
            goto label_2206d0;
        }
    }
    ctx->pc = 0x22067Cu;
label_22067c:
    // 0x22067c: 0xc06903c
    ctx->pc = 0x22067Cu;
    SET_GPR_U32(ctx, 31, 0x220684u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220684u; }
        else if (ctx->pc != 0x220684u) { ctx->pc = 0x220684u; }
    }
    if (ctx->pc != 0x220684u) { return; }
    ctx->pc = 0x220684u;
    // 0x220684: 0xc06903c
    ctx->pc = 0x220684u;
    SET_GPR_U32(ctx, 31, 0x22068Cu);
    ctx->pc = 0x220688u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22068Cu; }
        else if (ctx->pc != 0x22068Cu) { ctx->pc = 0x22068Cu; }
    }
    if (ctx->pc != 0x22068Cu) { return; }
    ctx->pc = 0x22068Cu;
    // 0x22068c: 0xc06903c
    ctx->pc = 0x22068Cu;
    SET_GPR_U32(ctx, 31, 0x220694u);
    ctx->pc = 0x220690u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220694u; }
        else if (ctx->pc != 0x220694u) { ctx->pc = 0x220694u; }
    }
    if (ctx->pc != 0x220694u) { return; }
    ctx->pc = 0x220694u;
    // 0x220694: 0x8e860010
    ctx->pc = 0x220694u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x220698: 0x8e670014
    ctx->pc = 0x220698u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x22069c: 0x240401d0
    ctx->pc = 0x22069cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 464));
    // 0x2206a0: 0x70002e28
    ctx->pc = 0x2206a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2206a4: 0xc069040
    ctx->pc = 0x2206A4u;
    SET_GPR_U32(ctx, 31, 0x2206ACu);
    ctx->pc = 0x2206A8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206ACu; }
        else if (ctx->pc != 0x2206ACu) { ctx->pc = 0x2206ACu; }
    }
    if (ctx->pc != 0x2206ACu) { return; }
    ctx->pc = 0x2206ACu;
    // 0x2206ac: 0x70402628
    ctx->pc = 0x2206acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2206b0: 0x10800007
    ctx->pc = 0x2206B0u;
    {
        const bool branch_taken_0x2206b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2206B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2206b0) {
            ctx->pc = 0x2206D0u;
            goto label_2206d0;
        }
    }
    ctx->pc = 0x2206B8u;
    // 0x2206b8: 0x3c02003c
    ctx->pc = 0x2206b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2206bc: 0x27a60080
    ctx->pc = 0x2206bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2206c0: 0x3447006f
    ctx->pc = 0x2206c0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 111));
    // 0x2206c4: 0x70a04628
    ctx->pc = 0x2206c4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2206c8: 0xc087d9c
    ctx->pc = 0x2206C8u;
    SET_GPR_U32(ctx, 31, 0x2206D0u);
    ctx->pc = 0x2206CCu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21F670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13TrnKomonoTaskFP11ENEMY_TABLEiii_0x21f670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206D0u; }
        else if (ctx->pc != 0x2206D0u) { ctx->pc = 0x2206D0u; }
    }
    if (ctx->pc != 0x2206D0u) { return; }
    ctx->pc = 0x2206D0u;
label_2206d0:
    // 0x2206d0: 0x2652000c
    ctx->pc = 0x2206d0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
label_2206d4:
    // 0x2206d4: 0x26310001
    ctx->pc = 0x2206d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2206d8:
    // 0x2206d8: 0x2e230016
    ctx->pc = 0x2206d8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), 22));
    // 0x2206dc: 0x1460ffb6
    ctx->pc = 0x2206DCu;
    {
        const bool branch_taken_0x2206dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2206dc) {
            ctx->pc = 0x2205B8u;
            goto label_2205b8;
        }
    }
    ctx->pc = 0x2206E4u;
    // 0x2206e4: 0x0
    ctx->pc = 0x2206e4u;
    // NOP
label_2206e8:
    // 0x2206e8: 0x7bbf0070
    ctx->pc = 0x2206e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2206ec:
    // 0x2206ec: 0x7bb60060
    ctx->pc = 0x2206ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2206f0: 0x7bb50050
    ctx->pc = 0x2206f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2206f4: 0x7bb40040
    ctx->pc = 0x2206f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2206f8: 0x7bb30030
    ctx->pc = 0x2206f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2206fc: 0x7bb20020
    ctx->pc = 0x2206fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220700: 0x7bb10010
    ctx->pc = 0x220700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220704: 0x7bb00000
    ctx->pc = 0x220704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220708: 0x3e00008
    ctx->pc = 0x220708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22070Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1168));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22009Cu: goto label_22009c;
            case 0x2200B4u: goto label_2200b4;
            case 0x220118u: goto label_220118;
            case 0x220150u: goto label_220150;
            case 0x2201A8u: goto label_2201a8;
            case 0x220204u: goto label_220204;
            case 0x220240u: goto label_220240;
            case 0x220298u: goto label_220298;
            case 0x2202F0u: goto label_2202f0;
            case 0x2202F4u: goto label_2202f4;
            case 0x2202F8u: goto label_2202f8;
            case 0x22030Cu: goto label_22030c;
            case 0x22032Cu: goto label_22032c;
            case 0x220390u: goto label_220390;
            case 0x2203ECu: goto label_2203ec;
            case 0x220440u: goto label_220440;
            case 0x220444u: goto label_220444;
            case 0x220448u: goto label_220448;
            case 0x22045Cu: goto label_22045c;
            case 0x220478u: goto label_220478;
            case 0x2204E0u: goto label_2204e0;
            case 0x22053Cu: goto label_22053c;
            case 0x220590u: goto label_220590;
            case 0x220594u: goto label_220594;
            case 0x220598u: goto label_220598;
            case 0x2205ACu: goto label_2205ac;
            case 0x2205B8u: goto label_2205b8;
            case 0x220620u: goto label_220620;
            case 0x22067Cu: goto label_22067c;
            case 0x2206D0u: goto label_2206d0;
            case 0x2206D4u: goto label_2206d4;
            case 0x2206D8u: goto label_2206d8;
            case 0x2206E8u: goto label_2206e8;
            case 0x2206ECu: goto label_2206ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220710u;
}
