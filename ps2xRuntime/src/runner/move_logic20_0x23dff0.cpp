#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic20
// Address: 0x23dff0 - 0x23e450
void move_logic20_0x23dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23dff0u;

    // 0x23dff0: 0x27bdff90
    ctx->pc = 0x23dff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23dff4: 0xffbf0050
    ctx->pc = 0x23dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23dff8: 0xffb30040
    ctx->pc = 0x23dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23dffc: 0xffb20030
    ctx->pc = 0x23dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23e000: 0xffb10020
    ctx->pc = 0x23e000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23e004: 0xffb00010
    ctx->pc = 0x23e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23e008: 0xe7b50068
    ctx->pc = 0x23e008u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23e00c: 0xe7b40060
    ctx->pc = 0x23e00cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23e010: 0x80902d
    ctx->pc = 0x23e010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e014: 0x240303b0
    ctx->pc = 0x23e014u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23e018: 0x2431818
    ctx->pc = 0x23e018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23e01c: 0x3c020033
    ctx->pc = 0x23e01cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23e020: 0x2442dfd0
    ctx->pc = 0x23e020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23e024: 0x628021
    ctx->pc = 0x23e024u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e028: 0x3c03003c
    ctx->pc = 0x23e028u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x23e02c: 0x24631bb8
    ctx->pc = 0x23e02cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x23e030: 0x8e020000
    ctx->pc = 0x23e030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23e034: 0x21080
    ctx->pc = 0x23e034u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23e038: 0x431021
    ctx->pc = 0x23e038u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e03c: 0xc4550000
    ctx->pc = 0x23e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23e040: 0x860202f2
    ctx->pc = 0x23e040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x23e044: 0x10400004
    ctx->pc = 0x23E044u;
    {
        const bool branch_taken_0x23e044 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E048u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23e044) {
            ctx->pc = 0x23E058u;
            goto label_23e058;
        }
    }
    ctx->pc = 0x23E04Cu;
    // 0x23e04c: 0x86020288
    ctx->pc = 0x23e04cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23e050: 0x4410008
    ctx->pc = 0x23E050u;
    {
        const bool branch_taken_0x23e050 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23e050) {
            ctx->pc = 0x23E074u;
            goto label_23e074;
        }
    }
    ctx->pc = 0x23E058u;
label_23e058:
    // 0x23e058: 0x32420001
    ctx->pc = 0x23e058u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
    // 0x23e05c: 0x24420005
    ctx->pc = 0x23e05cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x23e060: 0xa6020324
    ctx->pc = 0x23e060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e064: 0xc09095a
    ctx->pc = 0x23E064u;
    SET_GPR_U32(ctx, 31, 0x23E06Cu);
    ctx->pc = 0x23E068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E06Cu; }
    }
    if (ctx->pc != 0x23E06Cu) { return; }
    ctx->pc = 0x23E06Cu;
    // 0x23e06c: 0x100000f0
    ctx->pc = 0x23E06Cu;
    {
        const bool branch_taken_0x23e06c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E070u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x23e06c) {
            ctx->pc = 0x23E430u;
            goto label_23e430;
        }
    }
    ctx->pc = 0x23E074u;
label_23e074:
    // 0x23e074: 0x40034800
    ctx->pc = 0x23e074u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23e078: 0x3c02003a
    ctx->pc = 0x23e078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23e07c: 0x8c4221d0
    ctx->pc = 0x23e07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23e080: 0xac4302a8
    ctx->pc = 0x23e080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 3));
    // 0x23e084: 0x86030324
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23e088: 0x86020328
    ctx->pc = 0x23e088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23e08c: 0x10620004
    ctx->pc = 0x23E08Cu;
    {
        const bool branch_taken_0x23e08c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E090u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23e08c) {
            ctx->pc = 0x23E0A0u;
            goto label_23e0a0;
        }
    }
    ctx->pc = 0x23E094u;
    // 0x23e094: 0xc08e210
    ctx->pc = 0x23E094u;
    SET_GPR_U32(ctx, 31, 0x23E09Cu);
    ctx->pc = 0x23E098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E09Cu; }
    }
    if (ctx->pc != 0x23E09Cu) { return; }
    ctx->pc = 0x23E09Cu;
    // 0x23e09c: 0x200202d
    ctx->pc = 0x23e09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e0a0:
    // 0x23e0a0: 0xc08f0f0
    ctx->pc = 0x23E0A0u;
    SET_GPR_U32(ctx, 31, 0x23E0A8u);
    ctx->pc = 0x23E0A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0A8u; }
    }
    if (ctx->pc != 0x23E0A8u) { return; }
    ctx->pc = 0x23E0A8u;
    // 0x23e0a8: 0x3c02003c
    ctx->pc = 0x23e0a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23e0ac: 0xe4401c6c
    ctx->pc = 0x23e0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
    // 0x23e0b0: 0x8e03036c
    ctx->pc = 0x23e0b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23e0b4: 0x18600005
    ctx->pc = 0x23E0B4u;
    {
        const bool branch_taken_0x23e0b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23E0B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23e0b4) {
            ctx->pc = 0x23E0CCu;
            goto label_23e0cc;
        }
    }
    ctx->pc = 0x23E0BCu;
    // 0x23e0bc: 0x8c42ffbc
    ctx->pc = 0x23e0bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23e0c0: 0x621023
    ctx->pc = 0x23e0c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e0c4: 0x1c4000a4
    ctx->pc = 0x23E0C4u;
    {
        const bool branch_taken_0x23e0c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23E0C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x23e0c4) {
            ctx->pc = 0x23E358u;
            goto label_23e358;
        }
    }
    ctx->pc = 0x23E0CCu;
label_23e0cc:
    // 0x23e0cc: 0x8e020298
    ctx->pc = 0x23e0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x23e0d0: 0x441002d
    ctx->pc = 0x23E0D0u;
    {
        const bool branch_taken_0x23e0d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23E0D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x23e0d0) {
            ctx->pc = 0x23E188u;
            goto label_23e188;
        }
    }
    ctx->pc = 0x23E0D8u;
    // 0x23e0d8: 0x86030212
    ctx->pc = 0x23e0d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x23e0dc: 0x24020001
    ctx->pc = 0x23e0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e0e0: 0x54620012
    ctx->pc = 0x23E0E0u;
    {
        const bool branch_taken_0x23e0e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23e0e0) {
            ctx->pc = 0x23E0E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x23E12Cu;
            goto label_23e12c;
        }
    }
    ctx->pc = 0x23E0E8u;
    // 0x23e0e8: 0x3c02003c
    ctx->pc = 0x23e0e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23e0ec: 0xc4411c6c
    ctx->pc = 0x23e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e0f0: 0x3c014049
    ctx->pc = 0x23e0f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23e0f4: 0x34210fdb
    ctx->pc = 0x23e0f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e0f8: 0x44810000
    ctx->pc = 0x23e0f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e0fc: 0x46000d00
    ctx->pc = 0x23e0fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e100: 0x8e020368
    ctx->pc = 0x23e100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x23e104: 0x14400005
    ctx->pc = 0x23E104u;
    {
        const bool branch_taken_0x23e104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23E108u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x23e104) {
            ctx->pc = 0x23E11Cu;
            goto label_23e11c;
        }
    }
    ctx->pc = 0x23E10Cu;
    // 0x23e10c: 0xc08efec
    ctx->pc = 0x23E10Cu;
    SET_GPR_U32(ctx, 31, 0x23E114u);
    ctx->pc = 0x23E110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_dir_0x23bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E114u; }
    }
    if (ctx->pc != 0x23E114u) { return; }
    ctx->pc = 0x23E114u;
    // 0x23e114: 0xae020368
    ctx->pc = 0x23e114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x23e118: 0x8e020368
    ctx->pc = 0x23e118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_23e11c:
    // 0x23e11c: 0x1c40000d
    ctx->pc = 0x23E11Cu;
    {
        const bool branch_taken_0x23e11c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23E120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23e11c) {
            ctx->pc = 0x23E154u;
            goto label_23e154;
        }
    }
    ctx->pc = 0x23E124u;
    // 0x23e124: 0x10000013
    ctx->pc = 0x23E124u;
    {
        const bool branch_taken_0x23e124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958880));
        if (branch_taken_0x23e124) {
            ctx->pc = 0x23E174u;
            goto label_23e174;
        }
    }
    ctx->pc = 0x23E12Cu;
label_23e12c:
    // 0x23e12c: 0x54400005
    ctx->pc = 0x23E12Cu;
    {
        const bool branch_taken_0x23e12c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23e12c) {
            ctx->pc = 0x23E130u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x23E144u;
            goto label_23e144;
        }
    }
    ctx->pc = 0x23E134u;
    // 0x23e134: 0x8e02029c
    ctx->pc = 0x23e134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x23e138: 0x4400013
    ctx->pc = 0x23E138u;
    {
        const bool branch_taken_0x23e138 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23E13Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x23e138) {
            ctx->pc = 0x23E188u;
            goto label_23e188;
        }
    }
    ctx->pc = 0x23E140u;
    // 0x23e140: 0xc6140260
    ctx->pc = 0x23e140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23e144:
    // 0x23e144: 0x8e020368
    ctx->pc = 0x23e144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x23e148: 0x18400008
    ctx->pc = 0x23E148u;
    {
        const bool branch_taken_0x23e148 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E14Cu;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x23e148) {
            ctx->pc = 0x23E16Cu;
            goto label_23e16c;
        }
    }
    ctx->pc = 0x23E150u;
    // 0x23e150: 0x3c020033
    ctx->pc = 0x23e150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23e154:
    // 0x23e154: 0x2442df20
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x23e158: 0x111880
    ctx->pc = 0x23e158u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x23e15c: 0x621821
    ctx->pc = 0x23e15cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e160: 0xc4600000
    ctx->pc = 0x23e160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e164: 0x1000000d
    ctx->pc = 0x23E164u;
    {
        const bool branch_taken_0x23e164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E168u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23e164) {
            ctx->pc = 0x23E19Cu;
            goto label_23e19c;
        }
    }
    ctx->pc = 0x23E16Cu;
label_23e16c:
    // 0x23e16c: 0x3c020033
    ctx->pc = 0x23e16cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23e170: 0x2442df20
    ctx->pc = 0x23e170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958880));
label_23e174:
    // 0x23e174: 0x111880
    ctx->pc = 0x23e174u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x23e178: 0x621821
    ctx->pc = 0x23e178u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e17c: 0xc4600000
    ctx->pc = 0x23e17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e180: 0x10000006
    ctx->pc = 0x23E180u;
    {
        const bool branch_taken_0x23e180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E184u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23e180) {
            ctx->pc = 0x23E19Cu;
            goto label_23e19c;
        }
    }
    ctx->pc = 0x23E188u;
label_23e188:
    // 0x23e188: 0xc4411c6c
    ctx->pc = 0x23e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e18c: 0x3c014049
    ctx->pc = 0x23e18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23e190: 0x34210fdb
    ctx->pc = 0x23e190u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e194: 0x44810000
    ctx->pc = 0x23e194u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e198: 0x46000d00
    ctx->pc = 0x23e198u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23e19c:
    // 0x23e19c: 0x3c014049
    ctx->pc = 0x23e19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23e1a0: 0x34210fdb
    ctx->pc = 0x23e1a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e1a4: 0x44810000
    ctx->pc = 0x23e1a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e1a8: 0x46140034
    ctx->pc = 0x23e1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e1ac: 0x45000006
    ctx->pc = 0x23E1ACu;
    {
        const bool branch_taken_0x23e1ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e1ac) {
            ctx->pc = 0x23E1C8u;
            goto label_23e1c8;
        }
    }
    ctx->pc = 0x23E1B4u;
    // 0x23e1b4: 0x3c0140c9
    ctx->pc = 0x23e1b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e1b8: 0x34210fdb
    ctx->pc = 0x23e1b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e1bc: 0x44810000
    ctx->pc = 0x23e1bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e1c0: 0x1000000c
    ctx->pc = 0x23E1C0u;
    {
        const bool branch_taken_0x23e1c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E1C4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23e1c0) {
            ctx->pc = 0x23E1F4u;
            goto label_23e1f4;
        }
    }
    ctx->pc = 0x23E1C8u;
label_23e1c8:
    // 0x23e1c8: 0x3c01c049
    ctx->pc = 0x23e1c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23e1cc: 0x34210fdb
    ctx->pc = 0x23e1ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e1d0: 0x44810000
    ctx->pc = 0x23e1d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e1d4: 0x4600a036
    ctx->pc = 0x23e1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e1d8: 0x0
    ctx->pc = 0x23e1d8u;
    // NOP
    // 0x23e1dc: 0x45020005
    ctx->pc = 0x23E1DCu;
    {
        const bool branch_taken_0x23e1dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e1dc) {
            ctx->pc = 0x23E1E0u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x23E1F4u;
            goto label_23e1f4;
        }
    }
    ctx->pc = 0x23E1E4u;
    // 0x23e1e4: 0x3c0140c9
    ctx->pc = 0x23e1e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e1e8: 0x34210fdb
    ctx->pc = 0x23e1e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e1ec: 0x44810000
    ctx->pc = 0x23e1ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e1f0: 0x4600a000
    ctx->pc = 0x23e1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_23e1f4:
    // 0x23e1f4: 0x46000506
    ctx->pc = 0x23e1f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x23e1f8: 0xc6000040
    ctx->pc = 0x23e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e1fc: 0xe7a00000
    ctx->pc = 0x23e1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23e200: 0xc6020044
    ctx->pc = 0x23e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e204: 0xc6000048
    ctx->pc = 0x23e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e208: 0xe7a00008
    ctx->pc = 0x23e208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23e20c: 0xc600024c
    ctx->pc = 0x23e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e210: 0x3c013dcc
    ctx->pc = 0x23e210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x23e214: 0x3421cccd
    ctx->pc = 0x23e214u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23e218: 0x44810800
    ctx->pc = 0x23e218u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23e21c: 0x46010000
    ctx->pc = 0x23e21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e220: 0x46020000
    ctx->pc = 0x23e220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23e224: 0xe7a00004
    ctx->pc = 0x23e224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23e228: 0xc0b9e4a
    ctx->pc = 0x23E228u;
    SET_GPR_U32(ctx, 31, 0x23E230u);
    ctx->pc = 0x23E22Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E230u; }
    }
    if (ctx->pc != 0x23E230u) { return; }
    ctx->pc = 0x23E230u;
    // 0x23e230: 0x46150002
    ctx->pc = 0x23e230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x23e234: 0xc7a10000
    ctx->pc = 0x23e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e238: 0x46010000
    ctx->pc = 0x23e238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e23c: 0xe7a00000
    ctx->pc = 0x23e23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23e240: 0xc0b9dce
    ctx->pc = 0x23E240u;
    SET_GPR_U32(ctx, 31, 0x23E248u);
    ctx->pc = 0x23E244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E248u; }
    }
    if (ctx->pc != 0x23E248u) { return; }
    ctx->pc = 0x23E248u;
    // 0x23e248: 0x46150002
    ctx->pc = 0x23e248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x23e24c: 0xc7a10008
    ctx->pc = 0x23e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e250: 0x46010000
    ctx->pc = 0x23e250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e254: 0xe7a00008
    ctx->pc = 0x23e254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23e258: 0xc6000260
    ctx->pc = 0x23e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e25c: 0xc6010264
    ctx->pc = 0x23e25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e260: 0x46010001
    ctx->pc = 0x23e260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23e264: 0x46000005
    ctx->pc = 0x23e264u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23e268: 0x3c013d0e
    ctx->pc = 0x23e268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x23e26c: 0x3421fa36
    ctx->pc = 0x23e26cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x23e270: 0x44811000
    ctx->pc = 0x23e270u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x23e274: 0x46001034
    ctx->pc = 0x23e274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e278: 0x0
    ctx->pc = 0x23e278u;
    // NOP
    // 0x23e27c: 0x45000008
    ctx->pc = 0x23E27Cu;
    {
        const bool branch_taken_0x23e27c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E280u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23e27c) {
            ctx->pc = 0x23E2A0u;
            goto label_23e2a0;
        }
    }
    ctx->pc = 0x23E284u;
    // 0x23e284: 0x4601a001
    ctx->pc = 0x23e284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x23e288: 0x46000005
    ctx->pc = 0x23e288u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23e28c: 0x46020036
    ctx->pc = 0x23e28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e290: 0x0
    ctx->pc = 0x23e290u;
    // NOP
    // 0x23e294: 0x45030007
    ctx->pc = 0x23E294u;
    {
        const bool branch_taken_0x23e294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e294) {
            ctx->pc = 0x23E298u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x23E2B4u;
            goto label_23e2b4;
        }
    }
    ctx->pc = 0x23E29Cu;
    // 0x23e29c: 0x3a0202d
    ctx->pc = 0x23e29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23e2a0:
    // 0x23e2a0: 0xc08f296
    ctx->pc = 0x23E2A0u;
    SET_GPR_U32(ctx, 31, 0x23E2A8u);
    ctx->pc = 0x23E2A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2A8u; }
    }
    if (ctx->pc != 0x23E2A8u) { return; }
    ctx->pc = 0x23E2A8u;
    // 0x23e2a8: 0x54400005
    ctx->pc = 0x23E2A8u;
    {
        const bool branch_taken_0x23e2a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23e2a8) {
            ctx->pc = 0x23E2ACu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23E2C0u;
            goto label_23e2c0;
        }
    }
    ctx->pc = 0x23E2B0u;
    // 0x23e2b0: 0x24130001
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_23e2b4:
    // 0x23e2b4: 0x9602037a
    ctx->pc = 0x23e2b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x23e2b8: 0x24420001
    ctx->pc = 0x23e2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e2bc: 0xa602037a
    ctx->pc = 0x23e2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 2));
label_23e2c0:
    // 0x23e2c0: 0x8602037a
    ctx->pc = 0x23e2c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x23e2c4: 0x2842000b
    ctx->pc = 0x23e2c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x23e2c8: 0x1440001d
    ctx->pc = 0x23E2C8u;
    {
        const bool branch_taken_0x23e2c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23E2CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x23e2c8) {
            ctx->pc = 0x23E340u;
            goto label_23e340;
        }
    }
    ctx->pc = 0x23E2D0u;
    // 0x23e2d0: 0xc4411c6c
    ctx->pc = 0x23e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e2d4: 0x3c014049
    ctx->pc = 0x23e2d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23e2d8: 0x34210fdb
    ctx->pc = 0x23e2d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e2dc: 0x44810000
    ctx->pc = 0x23e2dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e2e0: 0x46000d00
    ctx->pc = 0x23e2e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e2e4: 0x46140034
    ctx->pc = 0x23e2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e2e8: 0x45000007
    ctx->pc = 0x23E2E8u;
    {
        const bool branch_taken_0x23e2e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e2e8) {
            ctx->pc = 0x23E308u;
            goto label_23e308;
        }
    }
    ctx->pc = 0x23E2F0u;
    // 0x23e2f0: 0x3c0140c9
    ctx->pc = 0x23e2f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e2f4: 0x34210fdb
    ctx->pc = 0x23e2f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e2f8: 0x44810000
    ctx->pc = 0x23e2f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e2fc: 0x4600a001
    ctx->pc = 0x23e2fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x23e300: 0x1000000d
    ctx->pc = 0x23E300u;
    {
        const bool branch_taken_0x23e300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E304u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x23e300) {
            ctx->pc = 0x23E338u;
            goto label_23e338;
        }
    }
    ctx->pc = 0x23E308u;
label_23e308:
    // 0x23e308: 0x3c01c049
    ctx->pc = 0x23e308u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23e30c: 0x34210fdb
    ctx->pc = 0x23e30cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e310: 0x44810000
    ctx->pc = 0x23e310u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e314: 0x4600a036
    ctx->pc = 0x23e314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e318: 0x0
    ctx->pc = 0x23e318u;
    // NOP
    // 0x23e31c: 0x45020006
    ctx->pc = 0x23E31Cu;
    {
        const bool branch_taken_0x23e31c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e31c) {
            ctx->pc = 0x23E320u;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
            ctx->pc = 0x23E338u;
            goto label_23e338;
        }
    }
    ctx->pc = 0x23E324u;
    // 0x23e324: 0x3c0140c9
    ctx->pc = 0x23e324u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e328: 0x34210fdb
    ctx->pc = 0x23e328u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e32c: 0x44810000
    ctx->pc = 0x23e32cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e330: 0x4600a000
    ctx->pc = 0x23e330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23e334: 0xe6000260
    ctx->pc = 0x23e334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_23e338:
    // 0x23e338: 0xc6000260
    ctx->pc = 0x23e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e33c: 0x46000506
    ctx->pc = 0x23e33cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_23e340:
    // 0x23e340: 0x16600007
    ctx->pc = 0x23E340u;
    {
        const bool branch_taken_0x23e340 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x23E344u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23e340) {
            ctx->pc = 0x23E360u;
            goto label_23e360;
        }
    }
    ctx->pc = 0x23E348u;
    // 0x23e348: 0xc6000260
    ctx->pc = 0x23e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e34c: 0xe6000264
    ctx->pc = 0x23e34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x23e350: 0x10000003
    ctx->pc = 0x23E350u;
    {
        const bool branch_taken_0x23e350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E354u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x23e350) {
            ctx->pc = 0x23E360u;
            goto label_23e360;
        }
    }
    ctx->pc = 0x23E358u;
label_23e358:
    // 0x23e358: 0xc6140260
    ctx->pc = 0x23e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e35c: 0x200202d
    ctx->pc = 0x23e35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e360:
    // 0x23e360: 0x3c014000
    ctx->pc = 0x23e360u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23e364: 0x44816000
    ctx->pc = 0x23e364u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23e368: 0xc08f14c
    ctx->pc = 0x23E368u;
    SET_GPR_U32(ctx, 31, 0x23E370u);
    ctx->pc = 0x23E36Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E370u; }
    }
    if (ctx->pc != 0x23E370u) { return; }
    ctx->pc = 0x23E370u;
    // 0x23e370: 0x1260001d
    ctx->pc = 0x23E370u;
    {
        const bool branch_taken_0x23e370 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E374u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x23e370) {
            ctx->pc = 0x23E3E8u;
            goto label_23e3e8;
        }
    }
    ctx->pc = 0x23E378u;
    // 0x23e378: 0xc4411c6c
    ctx->pc = 0x23e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e37c: 0x3c014049
    ctx->pc = 0x23e37cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23e380: 0x34210fdb
    ctx->pc = 0x23e380u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e384: 0x44810000
    ctx->pc = 0x23e384u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e388: 0x46000840
    ctx->pc = 0x23e388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e38c: 0x46010034
    ctx->pc = 0x23e38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e390: 0x0
    ctx->pc = 0x23e390u;
    // NOP
    // 0x23e394: 0x45020006
    ctx->pc = 0x23E394u;
    {
        const bool branch_taken_0x23e394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e394) {
            ctx->pc = 0x23E398u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23E3B0u;
            goto label_23e3b0;
        }
    }
    ctx->pc = 0x23E39Cu;
    // 0x23e39c: 0x3c0140c9
    ctx->pc = 0x23e39cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e3a0: 0x34210fdb
    ctx->pc = 0x23e3a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e3a4: 0x44810000
    ctx->pc = 0x23e3a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e3a8: 0x1000000c
    ctx->pc = 0x23E3A8u;
    {
        const bool branch_taken_0x23e3a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E3ACu;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23e3a8) {
            ctx->pc = 0x23E3DCu;
            goto label_23e3dc;
        }
    }
    ctx->pc = 0x23E3B0u;
label_23e3b0:
    // 0x23e3b0: 0x46000840
    ctx->pc = 0x23e3b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e3b4: 0x3c01c049
    ctx->pc = 0x23e3b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23e3b8: 0x34210fdb
    ctx->pc = 0x23e3b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e3bc: 0x44810000
    ctx->pc = 0x23e3bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e3c0: 0x46000836
    ctx->pc = 0x23e3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e3c4: 0x45000005
    ctx->pc = 0x23E3C4u;
    {
        const bool branch_taken_0x23e3c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e3c4) {
            ctx->pc = 0x23E3DCu;
            goto label_23e3dc;
        }
    }
    ctx->pc = 0x23E3CCu;
    // 0x23e3cc: 0x3c0140c9
    ctx->pc = 0x23e3ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23e3d0: 0x34210fdb
    ctx->pc = 0x23e3d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23e3d4: 0x44810000
    ctx->pc = 0x23e3d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23e3d8: 0x46000840
    ctx->pc = 0x23e3d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23e3dc:
    // 0x23e3dc: 0x4601a032
    ctx->pc = 0x23e3dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e3e0: 0x45000005
    ctx->pc = 0x23E3E0u;
    {
        const bool branch_taken_0x23e3e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e3e0) {
            ctx->pc = 0x23E3F8u;
            goto label_23e3f8;
        }
    }
    ctx->pc = 0x23E3E8u;
label_23e3e8:
    // 0x23e3e8: 0x200202d
    ctx->pc = 0x23e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e3ec: 0xc08f196
    ctx->pc = 0x23E3ECu;
    SET_GPR_U32(ctx, 31, 0x23E3F4u);
    ctx->pc = 0x23E3F0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C658u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_ang_0x23c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E3F4u; }
    }
    if (ctx->pc != 0x23E3F4u) { return; }
    ctx->pc = 0x23E3F4u;
    // 0x23e3f4: 0xe6000258
    ctx->pc = 0x23e3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_23e3f8:
    // 0x23e3f8: 0xc090e82
    ctx->pc = 0x23E3F8u;
    SET_GPR_U32(ctx, 31, 0x23E400u);
    ctx->pc = 0x23E3FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E400u; }
    }
    if (ctx->pc != 0x23E400u) { return; }
    ctx->pc = 0x23E400u;
    // 0x23e400: 0x40034800
    ctx->pc = 0x23e400u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23e404: 0x3c02003a
    ctx->pc = 0x23e404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23e408: 0x8c4421d0
    ctx->pc = 0x23e408u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23e40c: 0x8c8202a8
    ctx->pc = 0x23e40cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x23e410: 0x621823
    ctx->pc = 0x23e410u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e414: 0x8c8202a0
    ctx->pc = 0x23e414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 672)));
    // 0x23e418: 0x621821
    ctx->pc = 0x23e418u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e41c: 0xac8302a0
    ctx->pc = 0x23e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 672), GPR_U32(ctx, 3));
    // 0x23e420: 0x8c8202a4
    ctx->pc = 0x23e420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 676)));
    // 0x23e424: 0x24420001
    ctx->pc = 0x23e424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e428: 0xac8202a4
    ctx->pc = 0x23e428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 676), GPR_U32(ctx, 2));
    // 0x23e42c: 0xdfbf0050
    ctx->pc = 0x23e42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23e430:
    // 0x23e430: 0xdfb30040
    ctx->pc = 0x23e430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e434: 0xdfb20030
    ctx->pc = 0x23e434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e438: 0xdfb10020
    ctx->pc = 0x23e438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e43c: 0xdfb00010
    ctx->pc = 0x23e43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e440: 0xc7b50068
    ctx->pc = 0x23e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23e444: 0xc7b40060
    ctx->pc = 0x23e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e448: 0x3e00008
    ctx->pc = 0x23E448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E44Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23E058u: goto label_23e058;
            case 0x23E074u: goto label_23e074;
            case 0x23E0A0u: goto label_23e0a0;
            case 0x23E0CCu: goto label_23e0cc;
            case 0x23E11Cu: goto label_23e11c;
            case 0x23E12Cu: goto label_23e12c;
            case 0x23E144u: goto label_23e144;
            case 0x23E154u: goto label_23e154;
            case 0x23E16Cu: goto label_23e16c;
            case 0x23E174u: goto label_23e174;
            case 0x23E188u: goto label_23e188;
            case 0x23E19Cu: goto label_23e19c;
            case 0x23E1C8u: goto label_23e1c8;
            case 0x23E1F4u: goto label_23e1f4;
            case 0x23E2A0u: goto label_23e2a0;
            case 0x23E2B4u: goto label_23e2b4;
            case 0x23E2C0u: goto label_23e2c0;
            case 0x23E308u: goto label_23e308;
            case 0x23E338u: goto label_23e338;
            case 0x23E340u: goto label_23e340;
            case 0x23E358u: goto label_23e358;
            case 0x23E360u: goto label_23e360;
            case 0x23E3B0u: goto label_23e3b0;
            case 0x23E3DCu: goto label_23e3dc;
            case 0x23E3E8u: goto label_23e3e8;
            case 0x23E3F8u: goto label_23e3f8;
            case 0x23E430u: goto label_23e430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23E450u;
}
