#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic29
// Address: 0x23cfb8 - 0x23d388
void move_logic29_0x23cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23cfb8u;

    // 0x23cfb8: 0x27bdffb0
    ctx->pc = 0x23cfb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23cfbc: 0xffbf0030
    ctx->pc = 0x23cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23cfc0: 0xffb20020
    ctx->pc = 0x23cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23cfc4: 0xffb10010
    ctx->pc = 0x23cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23cfc8: 0xffb00000
    ctx->pc = 0x23cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cfcc: 0xe7b40040
    ctx->pc = 0x23cfccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23cfd0: 0x80882d
    ctx->pc = 0x23cfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfd4: 0x240303b0
    ctx->pc = 0x23cfd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23cfd8: 0x2231818
    ctx->pc = 0x23cfd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23cfdc: 0x3c020033
    ctx->pc = 0x23cfdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23cfe0: 0x2442dfd0
    ctx->pc = 0x23cfe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23cfe4: 0x628021
    ctx->pc = 0x23cfe4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cfe8: 0x4480a000
    ctx->pc = 0x23cfe8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x23cfec: 0x8e02036c
    ctx->pc = 0x23cfecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23cff0: 0xc08ed18
    ctx->pc = 0x23CFF0u;
    SET_GPR_U32(ctx, 31, 0x23CFF8u);
    ctx->pc = 0x23CFF4u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFF8u; }
    }
    if (ctx->pc != 0x23CFF8u) { return; }
    ctx->pc = 0x23CFF8u;
    // 0x23cff8: 0x5040000b
    ctx->pc = 0x23CFF8u;
    {
        const bool branch_taken_0x23cff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23cff8) {
            ctx->pc = 0x23CFFCu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23D000u;
    // 0x23d000: 0x24020018
    ctx->pc = 0x23d000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x23d004: 0xa6020324
    ctx->pc = 0x23d004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d008: 0x220202d
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d00c: 0xdfbf0030
    ctx->pc = 0x23d00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d010: 0xdfb20020
    ctx->pc = 0x23d010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d014: 0xdfb10010
    ctx->pc = 0x23d014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d018: 0xdfb00000
    ctx->pc = 0x23d018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d01c: 0xc7b40040
    ctx->pc = 0x23d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d020: 0x809095a
    ctx->pc = 0x23D020u;
    ctx->pc = 0x23D024u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23D028u;
label_23d028:
    // 0x23d028: 0x4400011
    ctx->pc = 0x23D028u;
    {
        const bool branch_taken_0x23d028 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23d028) {
            ctx->pc = 0x23D070u;
            goto label_23d070;
        }
    }
    ctx->pc = 0x23D030u;
    // 0x23d030: 0xc6010290
    ctx->pc = 0x23d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d034: 0x3c0140c0
    ctx->pc = 0x23d034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x23d038: 0x44810000
    ctx->pc = 0x23d038u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d03c: 0x46000836
    ctx->pc = 0x23d03cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d040: 0x0
    ctx->pc = 0x23d040u;
    // NOP
    // 0x23d044: 0x4500000a
    ctx->pc = 0x23D044u;
    {
        const bool branch_taken_0x23d044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D048u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23d044) {
            ctx->pc = 0x23D070u;
            goto label_23d070;
        }
    }
    ctx->pc = 0x23D04Cu;
    // 0x23d04c: 0xa6020324
    ctx->pc = 0x23d04cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d050: 0x220202d
    ctx->pc = 0x23d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d054: 0xdfbf0030
    ctx->pc = 0x23d054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d058: 0xdfb20020
    ctx->pc = 0x23d058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d05c: 0xdfb10010
    ctx->pc = 0x23d05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d060: 0xdfb00000
    ctx->pc = 0x23d060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d064: 0xc7b40040
    ctx->pc = 0x23d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d068: 0x809095a
    ctx->pc = 0x23D068u;
    ctx->pc = 0x23D06Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23D070u;
label_23d070:
    // 0x23d070: 0x40034800
    ctx->pc = 0x23d070u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d074: 0x3c02003a
    ctx->pc = 0x23d074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d078: 0x8c4221d0
    ctx->pc = 0x23d078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d07c: 0xac430338
    ctx->pc = 0x23d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 3));
    // 0x23d080: 0x86030324
    ctx->pc = 0x23d080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23d084: 0x86020328
    ctx->pc = 0x23d084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23d088: 0x10620004
    ctx->pc = 0x23D088u;
    {
        const bool branch_taken_0x23d088 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23D08Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23d088) {
            ctx->pc = 0x23D09Cu;
            goto label_23d09c;
        }
    }
    ctx->pc = 0x23D090u;
    // 0x23d090: 0xc08e210
    ctx->pc = 0x23D090u;
    SET_GPR_U32(ctx, 31, 0x23D098u);
    ctx->pc = 0x23D094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D098u; }
    }
    if (ctx->pc != 0x23D098u) { return; }
    ctx->pc = 0x23D098u;
    // 0x23d098: 0x200202d
    ctx->pc = 0x23d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d09c:
    // 0x23d09c: 0xc08f0f0
    ctx->pc = 0x23D09Cu;
    SET_GPR_U32(ctx, 31, 0x23D0A4u);
    ctx->pc = 0x23D0A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D0A4u; }
    }
    if (ctx->pc != 0x23D0A4u) { return; }
    ctx->pc = 0x23D0A4u;
    // 0x23d0a4: 0xe6000260
    ctx->pc = 0x23d0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23d0a8: 0x86020288
    ctx->pc = 0x23d0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23d0ac: 0x4400094
    ctx->pc = 0x23D0ACu;
    {
        const bool branch_taken_0x23d0ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23D0B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23d0ac) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D0B4u;
    // 0x23d0b4: 0x431818
    ctx->pc = 0x23d0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d0b8: 0x3c020032
    ctx->pc = 0x23d0b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23d0bc: 0x24421bc0
    ctx->pc = 0x23d0bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23d0c0: 0x621821
    ctx->pc = 0x23d0c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d0c4: 0xc6010044
    ctx->pc = 0x23d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d0c8: 0xc4600054
    ctx->pc = 0x23d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d0cc: 0x860202f0
    ctx->pc = 0x23d0ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23d0d0: 0x1040008b
    ctx->pc = 0x23D0D0u;
    {
        const bool branch_taken_0x23d0d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D0D4u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23d0d0) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D0D8u;
    // 0x23d0d8: 0x3c01c120
    ctx->pc = 0x23d0d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x23d0dc: 0x44810000
    ctx->pc = 0x23d0dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d0e0: 0x46010036
    ctx->pc = 0x23d0e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d0e4: 0x45000086
    ctx->pc = 0x23D0E4u;
    {
        const bool branch_taken_0x23d0e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d0e4) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D0ECu;
    // 0x23d0ec: 0x3c014120
    ctx->pc = 0x23d0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23d0f0: 0x44810000
    ctx->pc = 0x23d0f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d0f4: 0x46000836
    ctx->pc = 0x23d0f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d0f8: 0x45000081
    ctx->pc = 0x23D0F8u;
    {
        const bool branch_taken_0x23d0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d0f8) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D100u;
    // 0x23d100: 0x8e020330
    ctx->pc = 0x23d100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23d104: 0x54400012
    ctx->pc = 0x23D104u;
    {
        const bool branch_taken_0x23d104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d104) {
            ctx->pc = 0x23D108u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 816)));
            ctx->pc = 0x23D150u;
            goto label_23d150;
        }
    }
    ctx->pc = 0x23D10Cu;
    // 0x23d10c: 0xc6010290
    ctx->pc = 0x23d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d110: 0x3c014100
    ctx->pc = 0x23d110u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x23d114: 0x44810000
    ctx->pc = 0x23d114u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d118: 0x46000836
    ctx->pc = 0x23d118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d11c: 0x0
    ctx->pc = 0x23d11cu;
    // NOP
    // 0x23d120: 0x45000003
    ctx->pc = 0x23D120u;
    {
        const bool branch_taken_0x23d120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D124u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23d120) {
            ctx->pc = 0x23D130u;
            goto label_23d130;
        }
    }
    ctx->pc = 0x23D128u;
    // 0x23d128: 0xae020330
    ctx->pc = 0x23d128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x23d12c: 0xc6010290
    ctx->pc = 0x23d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d130:
    // 0x23d130: 0x3c014190
    ctx->pc = 0x23d130u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16784 << 16));
    // 0x23d134: 0x44810000
    ctx->pc = 0x23d134u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d138: 0x46010034
    ctx->pc = 0x23d138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d13c: 0x0
    ctx->pc = 0x23d13cu;
    // NOP
    // 0x23d140: 0x45000024
    ctx->pc = 0x23D140u;
    {
        const bool branch_taken_0x23d140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23d140) {
            ctx->pc = 0x23D1D4u;
            goto label_23d1d4;
        }
    }
    ctx->pc = 0x23D148u;
    // 0x23d148: 0x10000022
    ctx->pc = 0x23D148u;
    {
        const bool branch_taken_0x23d148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D14Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        if (branch_taken_0x23d148) {
            ctx->pc = 0x23D1D4u;
            goto label_23d1d4;
        }
    }
    ctx->pc = 0x23D150u;
label_23d150:
    // 0x23d150: 0x24020001
    ctx->pc = 0x23d150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d154: 0x14620006
    ctx->pc = 0x23D154u;
    {
        const bool branch_taken_0x23d154 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23D158u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x23d154) {
            ctx->pc = 0x23D170u;
            goto label_23d170;
        }
    }
    ctx->pc = 0x23D15Cu;
    // 0x23d15c: 0x3c014120
    ctx->pc = 0x23d15cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23d160: 0x44810000
    ctx->pc = 0x23d160u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d164: 0x46010034
    ctx->pc = 0x23d164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d168: 0x10000005
    ctx->pc = 0x23D168u;
    {
        const bool branch_taken_0x23d168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d168) {
            ctx->pc = 0x23D180u;
            goto label_23d180;
        }
    }
    ctx->pc = 0x23D170u;
label_23d170:
    // 0x23d170: 0x3c014180
    ctx->pc = 0x23d170u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x23d174: 0x44810000
    ctx->pc = 0x23d174u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d178: 0x46000836
    ctx->pc = 0x23d178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d17c: 0x0
    ctx->pc = 0x23d17cu;
    // NOP
label_23d180:
    // 0x23d180: 0x45030001
    ctx->pc = 0x23D180u;
    {
        const bool branch_taken_0x23d180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d180) {
            ctx->pc = 0x23D184u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
            ctx->pc = 0x23D188u;
            goto label_23d188;
        }
    }
    ctx->pc = 0x23D188u;
label_23d188:
    // 0x23d188: 0x8e020330
    ctx->pc = 0x23d188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23d18c: 0x50400012
    ctx->pc = 0x23D18Cu;
    {
        const bool branch_taken_0x23d18c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d18c) {
            ctx->pc = 0x23D190u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23D1D8u;
            goto label_23d1d8;
        }
    }
    ctx->pc = 0x23D194u;
    // 0x23d194: 0x8e02036c
    ctx->pc = 0x23d194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23d198: 0x5840000f
    ctx->pc = 0x23D198u;
    {
        const bool branch_taken_0x23d198 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d198) {
            ctx->pc = 0x23D19Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23D1D8u;
            goto label_23d1d8;
        }
    }
    ctx->pc = 0x23D1A0u;
    // 0x23d1a0: 0x8e040338
    ctx->pc = 0x23d1a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23d1a4: 0x28820008
    ctx->pc = 0x23d1a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x23d1a8: 0x10400009
    ctx->pc = 0x23D1A8u;
    {
        const bool branch_taken_0x23d1a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D1ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23d1a8) {
            ctx->pc = 0x23D1D0u;
            goto label_23d1d0;
        }
    }
    ctx->pc = 0x23D1B0u;
    // 0x23d1b0: 0x2442de30
    ctx->pc = 0x23d1b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x23d1b4: 0x41880
    ctx->pc = 0x23d1b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d1b8: 0x621821
    ctx->pc = 0x23d1b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d1bc: 0xc4740000
    ctx->pc = 0x23d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d1c0: 0x24820001
    ctx->pc = 0x23d1c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x23d1c4: 0xae020338
    ctx->pc = 0x23d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23d1c8: 0x10000002
    ctx->pc = 0x23D1C8u;
    {
        const bool branch_taken_0x23d1c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D1CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
        if (branch_taken_0x23d1c8) {
            ctx->pc = 0x23D1D4u;
            goto label_23d1d4;
        }
    }
    ctx->pc = 0x23D1D0u;
label_23d1d0:
    // 0x23d1d0: 0xae000330
    ctx->pc = 0x23d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
label_23d1d4:
    // 0x23d1d4: 0x8e030334
    ctx->pc = 0x23d1d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23d1d8:
    // 0x23d1d8: 0x18600005
    ctx->pc = 0x23D1D8u;
    {
        const bool branch_taken_0x23d1d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23D1DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23d1d8) {
            ctx->pc = 0x23D1F0u;
            goto label_23d1f0;
        }
    }
    ctx->pc = 0x23D1E0u;
    // 0x23d1e0: 0x8c42ffbc
    ctx->pc = 0x23d1e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23d1e4: 0x621023
    ctx->pc = 0x23d1e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d1e8: 0x10000045
    ctx->pc = 0x23D1E8u;
    {
        const bool branch_taken_0x23d1e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D1ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        if (branch_taken_0x23d1e8) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D1F0u;
label_23d1f0:
    // 0x23d1f0: 0x8e020330
    ctx->pc = 0x23d1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23d1f4: 0x10400004
    ctx->pc = 0x23D1F4u;
    {
        const bool branch_taken_0x23d1f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D1F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23d1f4) {
            ctx->pc = 0x23D208u;
            goto label_23d208;
        }
    }
    ctx->pc = 0x23D1FCu;
    // 0x23d1fc: 0x86030212
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x23d200: 0x54620017
    ctx->pc = 0x23D200u;
    {
        const bool branch_taken_0x23d200 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23d200) {
            ctx->pc = 0x23D204u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 816)));
            ctx->pc = 0x23D260u;
            goto label_23d260;
        }
    }
    ctx->pc = 0x23D208u;
label_23d208:
    // 0x23d208: 0x8602021a
    ctx->pc = 0x23d208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 538)));
    // 0x23d20c: 0x28420003
    ctx->pc = 0x23d20cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x23d210: 0x54400006
    ctx->pc = 0x23D210u;
    {
        const bool branch_taken_0x23d210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d210) {
            ctx->pc = 0x23D214u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 828)));
            ctx->pc = 0x23D22Cu;
            goto label_23d22c;
        }
    }
    ctx->pc = 0x23D218u;
    // 0x23d218: 0x200202d
    ctx->pc = 0x23d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d21c: 0xc09de18
    ctx->pc = 0x23D21Cu;
    SET_GPR_U32(ctx, 31, 0x23D224u);
    ctx->pc = 0x23D220u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D224u; }
    }
    if (ctx->pc != 0x23D224u) { return; }
    ctx->pc = 0x23D224u;
    // 0x23d224: 0x10000036
    ctx->pc = 0x23D224u;
    {
        const bool branch_taken_0x23d224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d224) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D22Cu;
label_23d22c:
    // 0x23d22c: 0x24420001
    ctx->pc = 0x23d22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d230: 0xae02033c
    ctx->pc = 0x23d230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
    // 0x23d234: 0x30420001
    ctx->pc = 0x23d234u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x23d238: 0x10400005
    ctx->pc = 0x23D238u;
    {
        const bool branch_taken_0x23d238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D23Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23d238) {
            ctx->pc = 0x23D250u;
            goto label_23d250;
        }
    }
    ctx->pc = 0x23D240u;
    // 0x23d240: 0xc09de18
    ctx->pc = 0x23D240u;
    SET_GPR_U32(ctx, 31, 0x23D248u);
    ctx->pc = 0x23D244u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D248u; }
    }
    if (ctx->pc != 0x23D248u) { return; }
    ctx->pc = 0x23D248u;
    // 0x23d248: 0x1000002d
    ctx->pc = 0x23D248u;
    {
        const bool branch_taken_0x23d248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d248) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D250u;
label_23d250:
    // 0x23d250: 0xc09de18
    ctx->pc = 0x23D250u;
    SET_GPR_U32(ctx, 31, 0x23D258u);
    ctx->pc = 0x23D254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D258u; }
    }
    if (ctx->pc != 0x23D258u) { return; }
    ctx->pc = 0x23D258u;
    // 0x23d258: 0x10000029
    ctx->pc = 0x23D258u;
    {
        const bool branch_taken_0x23d258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d258) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D260u;
label_23d260:
    // 0x23d260: 0x54620008
    ctx->pc = 0x23D260u;
    {
        const bool branch_taken_0x23d260 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23d260) {
            ctx->pc = 0x23D264u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23D284u;
            goto label_23d284;
        }
    }
    ctx->pc = 0x23D268u;
    // 0x23d268: 0xc6010260
    ctx->pc = 0x23d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d26c: 0x3c014049
    ctx->pc = 0x23d26cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23d270: 0x34210fdb
    ctx->pc = 0x23d270u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d274: 0x44810000
    ctx->pc = 0x23d274u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d278: 0x46000b40
    ctx->pc = 0x23d278u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d27c: 0x10000005
    ctx->pc = 0x23D27Cu;
    {
        const bool branch_taken_0x23d27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D280u;
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        if (branch_taken_0x23d27c) {
            ctx->pc = 0x23D294u;
            goto label_23d294;
        }
    }
    ctx->pc = 0x23D284u;
label_23d284:
    // 0x23d284: 0x4600a340
    ctx->pc = 0x23d284u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23d288: 0x3c014049
    ctx->pc = 0x23d288u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23d28c: 0x34210fdb
    ctx->pc = 0x23d28cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d290: 0x44810000
    ctx->pc = 0x23d290u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23d294:
    // 0x23d294: 0x460d0034
    ctx->pc = 0x23d294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d298: 0x45000006
    ctx->pc = 0x23D298u;
    {
        const bool branch_taken_0x23d298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d298) {
            ctx->pc = 0x23D2B4u;
            goto label_23d2b4;
        }
    }
    ctx->pc = 0x23D2A0u;
    // 0x23d2a0: 0x3c0140c9
    ctx->pc = 0x23d2a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23d2a4: 0x34210fdb
    ctx->pc = 0x23d2a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d2a8: 0x44810000
    ctx->pc = 0x23d2a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d2ac: 0x1000000b
    ctx->pc = 0x23D2ACu;
    {
        const bool branch_taken_0x23d2ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D2B0u;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x23d2ac) {
            ctx->pc = 0x23D2DCu;
            goto label_23d2dc;
        }
    }
    ctx->pc = 0x23D2B4u;
label_23d2b4:
    // 0x23d2b4: 0x3c01c049
    ctx->pc = 0x23d2b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23d2b8: 0x34210fdb
    ctx->pc = 0x23d2b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d2bc: 0x44810000
    ctx->pc = 0x23d2bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d2c0: 0x46006836
    ctx->pc = 0x23d2c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d2c4: 0x45000005
    ctx->pc = 0x23D2C4u;
    {
        const bool branch_taken_0x23d2c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d2c4) {
            ctx->pc = 0x23D2DCu;
            goto label_23d2dc;
        }
    }
    ctx->pc = 0x23D2CCu;
    // 0x23d2cc: 0x3c0140c9
    ctx->pc = 0x23d2ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23d2d0: 0x34210fdb
    ctx->pc = 0x23d2d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d2d4: 0x44810000
    ctx->pc = 0x23d2d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d2d8: 0x46006b40
    ctx->pc = 0x23d2d8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_23d2dc:
    // 0x23d2dc: 0x3c013f4c
    ctx->pc = 0x23d2dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x23d2e0: 0x3421cccd
    ctx->pc = 0x23d2e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23d2e4: 0x44816000
    ctx->pc = 0x23d2e4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23d2e8: 0xc08f14c
    ctx->pc = 0x23D2E8u;
    SET_GPR_U32(ctx, 31, 0x23D2F0u);
    ctx->pc = 0x23D2ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2F0u; }
    }
    if (ctx->pc != 0x23D2F0u) { return; }
    ctx->pc = 0x23D2F0u;
    // 0x23d2f0: 0x200202d
    ctx->pc = 0x23d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2f4: 0xc09de18
    ctx->pc = 0x23D2F4u;
    SET_GPR_U32(ctx, 31, 0x23D2FCu);
    ctx->pc = 0x23D2F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2FCu; }
    }
    if (ctx->pc != 0x23D2FCu) { return; }
    ctx->pc = 0x23D2FCu;
    // 0x23d2fc: 0xae00036c
    ctx->pc = 0x23d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_23d300:
    // 0x23d300: 0xc08f20c
    ctx->pc = 0x23D300u;
    SET_GPR_U32(ctx, 31, 0x23D308u);
    ctx->pc = 0x23D304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D308u; }
    }
    if (ctx->pc != 0x23D308u) { return; }
    ctx->pc = 0x23D308u;
    // 0x23d308: 0xe6000258
    ctx->pc = 0x23d308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23d30c: 0xc090e82
    ctx->pc = 0x23D30Cu;
    SET_GPR_U32(ctx, 31, 0x23D314u);
    ctx->pc = 0x23D310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D314u; }
    }
    if (ctx->pc != 0x23D314u) { return; }
    ctx->pc = 0x23D314u;
    // 0x23d314: 0x86020294
    ctx->pc = 0x23d314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x23d318: 0x54400001
    ctx->pc = 0x23D318u;
    {
        const bool branch_taken_0x23d318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d318) {
            ctx->pc = 0x23D31Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23D320u;
            goto label_23d320;
        }
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0x16400007
    ctx->pc = 0x23D320u;
    {
        const bool branch_taken_0x23d320 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d320) {
            ctx->pc = 0x23D340u;
            goto label_23d340;
        }
    }
    ctx->pc = 0x23D328u;
    // 0x23d328: 0x8e02036c
    ctx->pc = 0x23d328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23d32c: 0x18400004
    ctx->pc = 0x23D32Cu;
    {
        const bool branch_taken_0x23d32c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d32c) {
            ctx->pc = 0x23D340u;
            goto label_23d340;
        }
    }
    ctx->pc = 0x23D334u;
    // 0x23d334: 0xc6000260
    ctx->pc = 0x23d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d338: 0xe6000268
    ctx->pc = 0x23d338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x23d33c: 0xae000338
    ctx->pc = 0x23d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_23d340:
    // 0x23d340: 0x40034800
    ctx->pc = 0x23d340u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d344: 0x3c02003a
    ctx->pc = 0x23d344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d348: 0x8c4421d0
    ctx->pc = 0x23d348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d34c: 0x8c820338
    ctx->pc = 0x23d34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 824)));
    // 0x23d350: 0x621823
    ctx->pc = 0x23d350u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d354: 0x8c820330
    ctx->pc = 0x23d354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x23d358: 0x621821
    ctx->pc = 0x23d358u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d35c: 0xac830330
    ctx->pc = 0x23d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 816), GPR_U32(ctx, 3));
    // 0x23d360: 0x8c820334
    ctx->pc = 0x23d360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x23d364: 0x24420001
    ctx->pc = 0x23d364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d368: 0xac820334
    ctx->pc = 0x23d368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 820), GPR_U32(ctx, 2));
    // 0x23d36c: 0xdfbf0030
    ctx->pc = 0x23d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d370: 0xdfb20020
    ctx->pc = 0x23d370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d374: 0xdfb10010
    ctx->pc = 0x23d374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d378: 0xdfb00000
    ctx->pc = 0x23d378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d37c: 0xc7b40040
    ctx->pc = 0x23d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d380: 0x3e00008
    ctx->pc = 0x23D380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D384u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D028u: goto label_23d028;
            case 0x23D070u: goto label_23d070;
            case 0x23D09Cu: goto label_23d09c;
            case 0x23D130u: goto label_23d130;
            case 0x23D150u: goto label_23d150;
            case 0x23D170u: goto label_23d170;
            case 0x23D180u: goto label_23d180;
            case 0x23D188u: goto label_23d188;
            case 0x23D1D0u: goto label_23d1d0;
            case 0x23D1D4u: goto label_23d1d4;
            case 0x23D1D8u: goto label_23d1d8;
            case 0x23D1F0u: goto label_23d1f0;
            case 0x23D208u: goto label_23d208;
            case 0x23D22Cu: goto label_23d22c;
            case 0x23D250u: goto label_23d250;
            case 0x23D260u: goto label_23d260;
            case 0x23D284u: goto label_23d284;
            case 0x23D294u: goto label_23d294;
            case 0x23D2B4u: goto label_23d2b4;
            case 0x23D2DCu: goto label_23d2dc;
            case 0x23D300u: goto label_23d300;
            case 0x23D320u: goto label_23d320;
            case 0x23D340u: goto label_23d340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D388u;
}
