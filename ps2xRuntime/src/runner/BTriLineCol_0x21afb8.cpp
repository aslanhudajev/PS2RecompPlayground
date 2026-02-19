#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BTriLineCol
// Address: 0x21afb8 - 0x21b6f8
void BTriLineCol_0x21afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21afb8u;

    // 0x21afb8: 0x27bdfea0
    ctx->pc = 0x21afb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x21afbc: 0xffbf0120
    ctx->pc = 0x21afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x21afc0: 0xffb60110
    ctx->pc = 0x21afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x21afc4: 0xffb50100
    ctx->pc = 0x21afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x21afc8: 0xffb400f0
    ctx->pc = 0x21afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x21afcc: 0xffb300e0
    ctx->pc = 0x21afccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x21afd0: 0xffb200d0
    ctx->pc = 0x21afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x21afd4: 0xffb100c0
    ctx->pc = 0x21afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x21afd8: 0xffb000b0
    ctx->pc = 0x21afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x21afdc: 0xe7b90158
    ctx->pc = 0x21afdcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x21afe0: 0xe7b80150
    ctx->pc = 0x21afe0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x21afe4: 0xe7b70148
    ctx->pc = 0x21afe4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x21afe8: 0xe7b60140
    ctx->pc = 0x21afe8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x21afec: 0xe7b50138
    ctx->pc = 0x21afecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x21aff0: 0xe7b40130
    ctx->pc = 0x21aff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x21aff4: 0x80a82d
    ctx->pc = 0x21aff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aff8: 0xa0b02d
    ctx->pc = 0x21aff8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21affc: 0x46006506
    ctx->pc = 0x21affcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21b000: 0x4480b000
    ctx->pc = 0x21b000u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x21b004: 0x4600b606
    ctx->pc = 0x21b004u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
    // 0x21b008: 0x4600b5c6
    ctx->pc = 0x21b008u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x21b00c: 0xc6a00014
    ctx->pc = 0x21b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b010: 0xe7a00000
    ctx->pc = 0x21b010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21b014: 0xc6a00018
    ctx->pc = 0x21b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b018: 0xe7a00004
    ctx->pc = 0x21b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21b01c: 0xc6a0001c
    ctx->pc = 0x21b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b020: 0xe7a00008
    ctx->pc = 0x21b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21b024: 0xc6a00008
    ctx->pc = 0x21b024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b028: 0xe7a00010
    ctx->pc = 0x21b028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21b02c: 0xc6a0000c
    ctx->pc = 0x21b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b030: 0xe7a00014
    ctx->pc = 0x21b030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21b034: 0xc6a00010
    ctx->pc = 0x21b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b038: 0xe7a00018
    ctx->pc = 0x21b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21b03c: 0x3c020032
    ctx->pc = 0x21b03cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21b040: 0x2442f9d0
    ctx->pc = 0x21b040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965712));
    // 0x21b044: 0x27a40040
    ctx->pc = 0x21b044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21b048: 0xd8440000
    ctx->pc = 0x21b048u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b04c: 0xdba50000
    ctx->pc = 0x21b04cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b050: 0x4be5212c
    ctx->pc = 0x21b050u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21b054: 0xf8840000
    ctx->pc = 0x21b054u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21b058: 0x27a50020
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x21b05c: 0x27a60010
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b060: 0xc086b4e
    ctx->pc = 0x21B060u;
    SET_GPR_U32(ctx, 31, 0x21B068u);
    ctx->pc = 0x21B064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21AD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BodyVectorNorm_0x21ad38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B068u; }
    }
    if (ctx->pc != 0x21B068u) { return; }
    ctx->pc = 0x21B068u;
    // 0x21b068: 0xc7a00024
    ctx->pc = 0x21b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b06c: 0x46170034
    ctx->pc = 0x21b06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b070: 0x0
    ctx->pc = 0x21b070u;
    // NOP
    // 0x21b074: 0x4501017f
    ctx->pc = 0x21B074u;
    {
        const bool branch_taken_0x21b074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B078u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21b074) {
            ctx->pc = 0x21B674u;
            goto label_21b674;
        }
    }
    ctx->pc = 0x21B07Cu;
    // 0x21b07c: 0x2442f9e0
    ctx->pc = 0x21b07cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x21b080: 0x27a40040
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21b084: 0xd8440000
    ctx->pc = 0x21b084u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b088: 0xdba50000
    ctx->pc = 0x21b088u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b08c: 0x4be5212c
    ctx->pc = 0x21b08cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21b090: 0xf8840000
    ctx->pc = 0x21b090u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21b094: 0x27a50030
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b098: 0x27a60010
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b09c: 0xc086b4e
    ctx->pc = 0x21B09Cu;
    SET_GPR_U32(ctx, 31, 0x21B0A4u);
    ctx->pc = 0x21B0A0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21AD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BodyVectorNorm_0x21ad38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0A4u; }
    }
    if (ctx->pc != 0x21B0A4u) { return; }
    ctx->pc = 0x21B0A4u;
    // 0x21b0a4: 0xc7a10024
    ctx->pc = 0x21b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b0a8: 0xc7a00034
    ctx->pc = 0x21b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b0ac: 0x46000834
    ctx->pc = 0x21b0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b0b0: 0x0
    ctx->pc = 0x21b0b0u;
    // NOP
    // 0x21b0b4: 0x4501016f
    ctx->pc = 0x21B0B4u;
    {
        const bool branch_taken_0x21b0b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B0B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b0b4) {
            ctx->pc = 0x21B674u;
            goto label_21b674;
        }
    }
    ctx->pc = 0x21B0BCu;
    // 0x21b0bc: 0x44800800
    ctx->pc = 0x21b0bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x21b0c0: 0x46000834
    ctx->pc = 0x21b0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b0c4: 0x0
    ctx->pc = 0x21b0c4u;
    // NOP
    // 0x21b0c8: 0x45000007
    ctx->pc = 0x21B0C8u;
    {
        const bool branch_taken_0x21b0c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B0CCu;
        ctx->f[25] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        if (branch_taken_0x21b0c8) {
            ctx->pc = 0x21B0E8u;
            goto label_21b0e8;
        }
    }
    ctx->pc = 0x21B0D0u;
    // 0x21b0d0: 0xc7a00034
    ctx->pc = 0x21b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b0d4: 0x46000834
    ctx->pc = 0x21b0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b0d8: 0x0
    ctx->pc = 0x21b0d8u;
    // NOP
    // 0x21b0dc: 0x4501000a
    ctx->pc = 0x21B0DCu;
    {
        const bool branch_taken_0x21b0dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B0E0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b0dc) {
            ctx->pc = 0x21B108u;
            goto label_21b108;
        }
    }
    ctx->pc = 0x21B0E4u;
    // 0x21b0e4: 0x44800800
    ctx->pc = 0x21b0e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_21b0e8:
    // 0x21b0e8: 0x46010034
    ctx->pc = 0x21b0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b0ec: 0x0
    ctx->pc = 0x21b0ecu;
    // NOP
    // 0x21b0f0: 0x45000018
    ctx->pc = 0x21B0F0u;
    {
        const bool branch_taken_0x21b0f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B0F4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b0f0) {
            ctx->pc = 0x21B154u;
            goto label_21b154;
        }
    }
    ctx->pc = 0x21B0F8u;
    // 0x21b0f8: 0x46010034
    ctx->pc = 0x21b0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b0fc: 0x0
    ctx->pc = 0x21b0fcu;
    // NOP
    // 0x21b100: 0x45000014
    ctx->pc = 0x21B100u;
    {
        const bool branch_taken_0x21b100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B104u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b100) {
            ctx->pc = 0x21B154u;
            goto label_21b154;
        }
    }
    ctx->pc = 0x21B108u;
label_21b108:
    // 0x21b108: 0x4600a034
    ctx->pc = 0x21b108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b10c: 0x0
    ctx->pc = 0x21b10cu;
    // NOP
    // 0x21b110: 0x45000004
    ctx->pc = 0x21B110u;
    {
        const bool branch_taken_0x21b110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B114u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b110) {
            ctx->pc = 0x21B124u;
            goto label_21b124;
        }
    }
    ctx->pc = 0x21B118u;
    // 0x21b118: 0x4600a034
    ctx->pc = 0x21b118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b11c: 0x45010155
    ctx->pc = 0x21B11Cu;
    {
        const bool branch_taken_0x21b11c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b11c) {
            ctx->pc = 0x21B674u;
            goto label_21b674;
        }
    }
    ctx->pc = 0x21B124u;
label_21b124:
    // 0x21b124: 0x4600a307
    ctx->pc = 0x21b124u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x21b128: 0xc7a00024
    ctx->pc = 0x21b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b12c: 0x460c0034
    ctx->pc = 0x21b12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b130: 0x0
    ctx->pc = 0x21b130u;
    // NOP
    // 0x21b134: 0x45000021
    ctx->pc = 0x21B134u;
    {
        const bool branch_taken_0x21b134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B138u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b134) {
            ctx->pc = 0x21B1BCu;
            goto label_21b1bc;
        }
    }
    ctx->pc = 0x21B13Cu;
    // 0x21b13c: 0x460c0034
    ctx->pc = 0x21b13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b140: 0x0
    ctx->pc = 0x21b140u;
    // NOP
    // 0x21b144: 0x4501014b
    ctx->pc = 0x21B144u;
    {
        const bool branch_taken_0x21b144 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B148u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b144) {
            ctx->pc = 0x21B674u;
            goto label_21b674;
        }
    }
    ctx->pc = 0x21B14Cu;
    // 0x21b14c: 0x1000002b
    ctx->pc = 0x21B14Cu;
    {
        const bool branch_taken_0x21b14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B150u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 96));
        if (branch_taken_0x21b14c) {
            ctx->pc = 0x21B1FCu;
            goto label_21b1fc;
        }
    }
    ctx->pc = 0x21B154u;
label_21b154:
    // 0x21b154: 0x24100001
    ctx->pc = 0x21b154u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b158: 0xc7a10030
    ctx->pc = 0x21b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b15c: 0xc7a00020
    ctx->pc = 0x21b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b160: 0x46000d01
    ctx->pc = 0x21b160u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b164: 0xc7a10038
    ctx->pc = 0x21b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b168: 0xc7a00028
    ctx->pc = 0x21b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b16c: 0x46000d41
    ctx->pc = 0x21b16cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b170: 0x4600a306
    ctx->pc = 0x21b170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21b174: 0xc0b5c34
    ctx->pc = 0x21B174u;
    SET_GPR_U32(ctx, 31, 0x21B17Cu);
    ctx->pc = 0x21B178u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B17Cu; }
    }
    if (ctx->pc != 0x21B17Cu) { return; }
    ctx->pc = 0x21B17Cu;
    // 0x21b17c: 0x3c013a83
    ctx->pc = 0x21b17cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x21b180: 0x3421126f
    ctx->pc = 0x21b180u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x21b184: 0x44810800
    ctx->pc = 0x21b184u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x21b188: 0x46000834
    ctx->pc = 0x21b188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b18c: 0x0
    ctx->pc = 0x21b18cu;
    // NOP
    // 0x21b190: 0x45000017
    ctx->pc = 0x21B190u;
    {
        const bool branch_taken_0x21b190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B194u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b190) {
            ctx->pc = 0x21B1F0u;
            goto label_21b1f0;
        }
    }
    ctx->pc = 0x21B198u;
    // 0x21b198: 0x46000045
    ctx->pc = 0x21b198u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x21b19c: 0xc7a00034
    ctx->pc = 0x21b19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b1a0: 0x46000005
    ctx->pc = 0x21b1a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21b1a4: 0x46000840
    ctx->pc = 0x21b1a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b1a8: 0x44800000
    ctx->pc = 0x21b1a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b1ac: 0x46000832
    ctx->pc = 0x21b1acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b1b0: 0x0
    ctx->pc = 0x21b1b0u;
    // NOP
    // 0x21b1b4: 0x45000003
    ctx->pc = 0x21B1B4u;
    {
        const bool branch_taken_0x21b1b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B1B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b1b4) {
            ctx->pc = 0x21B1C4u;
            goto label_21b1c4;
        }
    }
    ctx->pc = 0x21B1BCu;
label_21b1bc:
    // 0x21b1bc: 0x1000000e
    ctx->pc = 0x21B1BCu;
    {
        const bool branch_taken_0x21b1bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B1C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b1bc) {
            ctx->pc = 0x21B1F8u;
            goto label_21b1f8;
        }
    }
    ctx->pc = 0x21B1C4u;
label_21b1c4:
    // 0x21b1c4: 0x46000005
    ctx->pc = 0x21b1c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21b1c8: 0x0
    ctx->pc = 0x21b1c8u;
    // NOP
    // 0x21b1cc: 0x0
    ctx->pc = 0x21b1ccu;
    // NOP
    // 0x21b1d0: 0x46010003
    ctx->pc = 0x21b1d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x21b1d4: 0x4600a082
    ctx->pc = 0x21b1d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21b1d8: 0xc7a10020
    ctx->pc = 0x21b1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b1dc: 0x46011600
    ctx->pc = 0x21b1dcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21b1e0: 0x4600a802
    ctx->pc = 0x21b1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x21b1e4: 0xc7a10028
    ctx->pc = 0x21b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b1e8: 0x10000003
    ctx->pc = 0x21B1E8u;
    {
        const bool branch_taken_0x21b1e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B1ECu;
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x21b1e8) {
            ctx->pc = 0x21B1F8u;
            goto label_21b1f8;
        }
    }
    ctx->pc = 0x21B1F0u;
label_21b1f0:
    // 0x21b1f0: 0xc7b80020
    ctx->pc = 0x21b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x21b1f4: 0xc7b60028
    ctx->pc = 0x21b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_21b1f8:
    // 0x21b1f8: 0x27a70060
    ctx->pc = 0x21b1f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 96));
label_21b1fc:
    // 0x21b1fc: 0xd8e40000
    ctx->pc = 0x21b1fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b200: 0x4be4212c
    ctx->pc = 0x21b200u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21b204: 0xf8e40000
    ctx->pc = 0x21b204u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21b208: 0x86a20020
    ctx->pc = 0x21b208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x21b20c: 0x44820000
    ctx->pc = 0x21b20cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21b210: 0x46800020
    ctx->pc = 0x21b210u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b214: 0x3c013c80
    ctx->pc = 0x21b214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15488 << 16));
    // 0x21b218: 0x44810800
    ctx->pc = 0x21b218u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x21b21c: 0x460100c2
    ctx->pc = 0x21b21cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21b220: 0xe7a30070
    ctx->pc = 0x21b220u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x21b224: 0x86a20022
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x21b228: 0x44820000
    ctx->pc = 0x21b228u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21b22c: 0x46800020
    ctx->pc = 0x21b22cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b230: 0x46010082
    ctx->pc = 0x21b230u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21b234: 0xe7a20078
    ctx->pc = 0x21b234u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x21b238: 0x86a20024
    ctx->pc = 0x21b238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x21b23c: 0x44820000
    ctx->pc = 0x21b23cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21b240: 0x46800020
    ctx->pc = 0x21b240u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b244: 0x46010002
    ctx->pc = 0x21b244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21b248: 0xe7a00080
    ctx->pc = 0x21b248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21b24c: 0x86a20026
    ctx->pc = 0x21b24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 38)));
    // 0x21b250: 0x44820000
    ctx->pc = 0x21b250u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21b254: 0x46800020
    ctx->pc = 0x21b254u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21b258: 0x46010002
    ctx->pc = 0x21b258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21b25c: 0x12000059
    ctx->pc = 0x21B25Cu;
    {
        const bool branch_taken_0x21b25c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B260u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        if (branch_taken_0x21b25c) {
            ctx->pc = 0x21B3C4u;
            goto label_21b3c4;
        }
    }
    ctx->pc = 0x21B264u;
    // 0x21b264: 0x4603b0c2
    ctx->pc = 0x21b264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x21b268: 0x4602c002
    ctx->pc = 0x21b268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x21b26c: 0x460018c1
    ctx->pc = 0x21b26cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21b270: 0x44800000
    ctx->pc = 0x21b270u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b274: 0x46030034
    ctx->pc = 0x21b274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b278: 0x0
    ctx->pc = 0x21b278u;
    // NOP
    // 0x21b27c: 0x45000009
    ctx->pc = 0x21B27Cu;
    {
        const bool branch_taken_0x21b27c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B280u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21b27c) {
            ctx->pc = 0x21B2A4u;
            goto label_21b2a4;
        }
    }
    ctx->pc = 0x21B284u;
    // 0x21b284: 0x27a40020
    ctx->pc = 0x21b284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x21b288: 0x27a50030
    ctx->pc = 0x21b288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b28c: 0x27a60050
    ctx->pc = 0x21b28cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21b290: 0x27a80070
    ctx->pc = 0x21b290u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21b294: 0xc086aaa
    ctx->pc = 0x21B294u;
    SET_GPR_U32(ctx, 31, 0x21B29Cu);
    ctx->pc = 0x21B298u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21AAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineLineDist3D2D_0x21aaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B29Cu; }
    }
    if (ctx->pc != 0x21B29Cu) { return; }
    ctx->pc = 0x21B29Cu;
    // 0x21b29c: 0x460005c6
    ctx->pc = 0x21b29cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x21b2a0: 0x802d
    ctx->pc = 0x21b2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b2a4:
    // 0x21b2a4: 0xc7a00080
    ctx->pc = 0x21b2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b2a8: 0xc7a20070
    ctx->pc = 0x21b2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21b2ac: 0x46020181
    ctx->pc = 0x21b2acu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21b2b0: 0xc7a00088
    ctx->pc = 0x21b2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b2b4: 0xc7a10078
    ctx->pc = 0x21b2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b2b8: 0x46010141
    ctx->pc = 0x21b2b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21b2bc: 0x4602c101
    ctx->pc = 0x21b2bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x21b2c0: 0x4601b081
    ctx->pc = 0x21b2c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x21b2c4: 0x460230c2
    ctx->pc = 0x21b2c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x21b2c8: 0x46042802
    ctx->pc = 0x21b2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x21b2cc: 0x460018c1
    ctx->pc = 0x21b2ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21b2d0: 0x44800000
    ctx->pc = 0x21b2d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b2d4: 0x46030034
    ctx->pc = 0x21b2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b2d8: 0x0
    ctx->pc = 0x21b2d8u;
    // NOP
    // 0x21b2dc: 0x45000013
    ctx->pc = 0x21B2DCu;
    {
        const bool branch_taken_0x21b2dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B2E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x21b2dc) {
            ctx->pc = 0x21B32Cu;
            goto label_21b32c;
        }
    }
    ctx->pc = 0x21B2E4u;
    // 0x21b2e4: 0x27a50030
    ctx->pc = 0x21b2e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b2e8: 0x27a60090
    ctx->pc = 0x21b2e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21b2ec: 0x27a70070
    ctx->pc = 0x21b2ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21b2f0: 0x27a80080
    ctx->pc = 0x21b2f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b2f4: 0xc086aaa
    ctx->pc = 0x21B2F4u;
    SET_GPR_U32(ctx, 31, 0x21B2FCu);
    ctx->pc = 0x21B2F8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21AAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineLineDist3D2D_0x21aaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2FCu; }
    }
    if (ctx->pc != 0x21B2FCu) { return; }
    ctx->pc = 0x21B2FCu;
    // 0x21b2fc: 0x56000006
    ctx->pc = 0x21B2FCu;
    {
        const bool branch_taken_0x21b2fc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x21b2fc) {
            ctx->pc = 0x21B300u;
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x21B318u;
            goto label_21b318;
        }
    }
    ctx->pc = 0x21B304u;
    // 0x21b304: 0x46170034
    ctx->pc = 0x21b304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b308: 0x0
    ctx->pc = 0x21b308u;
    // NOP
    // 0x21b30c: 0x45000007
    ctx->pc = 0x21B30Cu;
    {
        const bool branch_taken_0x21b30c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B310u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b30c) {
            ctx->pc = 0x21B32Cu;
            goto label_21b32c;
        }
    }
    ctx->pc = 0x21B314u;
    // 0x21b314: 0x460005c6
    ctx->pc = 0x21b314u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_21b318:
    // 0x21b318: 0x27a40090
    ctx->pc = 0x21b318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21b31c: 0x27a30050
    ctx->pc = 0x21b31cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21b320: 0x78820000
    ctx->pc = 0x21b320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b324: 0x7c620000
    ctx->pc = 0x21b324u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21b328: 0x802d
    ctx->pc = 0x21b328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b32c:
    // 0x21b32c: 0xc7a00080
    ctx->pc = 0x21b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b330: 0x4600c101
    ctx->pc = 0x21b330u;
    ctx->f[4] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x21b334: 0xc7a10088
    ctx->pc = 0x21b334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b338: 0x4601b081
    ctx->pc = 0x21b338u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x21b33c: 0x460000c7
    ctx->pc = 0x21b33cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x21b340: 0x460218c2
    ctx->pc = 0x21b340u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x21b344: 0x46000847
    ctx->pc = 0x21b344u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21b348: 0x46040842
    ctx->pc = 0x21b348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x21b34c: 0x460118c1
    ctx->pc = 0x21b34cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x21b350: 0x44800000
    ctx->pc = 0x21b350u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b354: 0x46030034
    ctx->pc = 0x21b354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b358: 0x0
    ctx->pc = 0x21b358u;
    // NOP
    // 0x21b35c: 0x45000013
    ctx->pc = 0x21B35Cu;
    {
        const bool branch_taken_0x21b35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B360u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x21b35c) {
            ctx->pc = 0x21B3ACu;
            goto label_21b3ac;
        }
    }
    ctx->pc = 0x21B364u;
    // 0x21b364: 0x27a50030
    ctx->pc = 0x21b364u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b368: 0x27a60090
    ctx->pc = 0x21b368u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21b36c: 0x27a70060
    ctx->pc = 0x21b36cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21b370: 0x27a80080
    ctx->pc = 0x21b370u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b374: 0xc086aaa
    ctx->pc = 0x21B374u;
    SET_GPR_U32(ctx, 31, 0x21B37Cu);
    ctx->pc = 0x21B378u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21AAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineLineDist3D2D_0x21aaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B37Cu; }
    }
    if (ctx->pc != 0x21B37Cu) { return; }
    ctx->pc = 0x21B37Cu;
    // 0x21b37c: 0x56000006
    ctx->pc = 0x21B37Cu;
    {
        const bool branch_taken_0x21b37c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x21b37c) {
            ctx->pc = 0x21B380u;
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x21B398u;
            goto label_21b398;
        }
    }
    ctx->pc = 0x21B384u;
    // 0x21b384: 0x46170034
    ctx->pc = 0x21b384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b388: 0x0
    ctx->pc = 0x21b388u;
    // NOP
    // 0x21b38c: 0x45000007
    ctx->pc = 0x21B38Cu;
    {
        const bool branch_taken_0x21b38c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B390u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b38c) {
            ctx->pc = 0x21B3ACu;
            goto label_21b3ac;
        }
    }
    ctx->pc = 0x21B394u;
    // 0x21b394: 0x460005c6
    ctx->pc = 0x21b394u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_21b398:
    // 0x21b398: 0x27a40090
    ctx->pc = 0x21b398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21b39c: 0x27a30050
    ctx->pc = 0x21b39cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21b3a0: 0x78820000
    ctx->pc = 0x21b3a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b3a4: 0x7c620000
    ctx->pc = 0x21b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21b3a8: 0x802d
    ctx->pc = 0x21b3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b3ac:
    // 0x21b3ac: 0x120000ae
    ctx->pc = 0x21B3ACu;
    {
        const bool branch_taken_0x21b3ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x21b3ac) {
            ctx->pc = 0x21B668u;
            goto label_21b668;
        }
    }
    ctx->pc = 0x21B3B4u;
    // 0x21b3b4: 0xe7b80050
    ctx->pc = 0x21b3b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21b3b8: 0xafa00054
    ctx->pc = 0x21b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x21b3bc: 0x100000b1
    ctx->pc = 0x21B3BCu;
    {
        const bool branch_taken_0x21b3bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B3C0u;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        if (branch_taken_0x21b3bc) {
            ctx->pc = 0x21B684u;
            goto label_21b684;
        }
    }
    ctx->pc = 0x21B3C4u;
label_21b3c4:
    // 0x21b3c4: 0x24040001
    ctx->pc = 0x21b3c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b3c8: 0xc7a10024
    ctx->pc = 0x21b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b3cc: 0x46000845
    ctx->pc = 0x21b3ccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x21b3d0: 0xc7a00034
    ctx->pc = 0x21b3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b3d4: 0x46000005
    ctx->pc = 0x21b3d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21b3d8: 0x46000834
    ctx->pc = 0x21b3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b3dc: 0x0
    ctx->pc = 0x21b3dcu;
    // NOP
    // 0x21b3e0: 0x45000003
    ctx->pc = 0x21B3E0u;
    {
        const bool branch_taken_0x21b3e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B3E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21b3e0) {
            ctx->pc = 0x21B3F0u;
            goto label_21b3f0;
        }
    }
    ctx->pc = 0x21B3E8u;
    // 0x21b3e8: 0x10000008
    ctx->pc = 0x21B3E8u;
    {
        const bool branch_taken_0x21b3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B3ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21b3e8) {
            ctx->pc = 0x21B40Cu;
            goto label_21b40c;
        }
    }
    ctx->pc = 0x21B3F0u;
label_21b3f0:
    // 0x21b3f0: 0xc7a10024
    ctx->pc = 0x21b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b3f4: 0xc7a00034
    ctx->pc = 0x21b3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b3f8: 0x46000832
    ctx->pc = 0x21b3f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b3fc: 0x0
    ctx->pc = 0x21b3fcu;
    // NOP
    // 0x21b400: 0x45000002
    ctx->pc = 0x21B400u;
    {
        const bool branch_taken_0x21b400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B404u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x21b400) {
            ctx->pc = 0x21B40Cu;
            goto label_21b40c;
        }
    }
    ctx->pc = 0x21B408u;
    // 0x21b408: 0x24030003
    ctx->pc = 0x21b408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_21b40c:
    // 0x21b40c: 0xc7a70020
    ctx->pc = 0x21b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21b410: 0xc7a80028
    ctx->pc = 0x21b410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x21b414: 0xc7a90030
    ctx->pc = 0x21b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x21b418: 0xc7a00070
    ctx->pc = 0x21b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b41c: 0x46004002
    ctx->pc = 0x21b41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x21b420: 0xc7a10078
    ctx->pc = 0x21b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b424: 0x46013842
    ctx->pc = 0x21b424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x21b428: 0x460100c1
    ctx->pc = 0x21b428u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21b42c: 0x44800000
    ctx->pc = 0x21b42cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b430: 0x46030034
    ctx->pc = 0x21b430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b434: 0x0
    ctx->pc = 0x21b434u;
    // NOP
    // 0x21b438: 0x45000005
    ctx->pc = 0x21B438u;
    {
        const bool branch_taken_0x21b438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B43Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        if (branch_taken_0x21b438) {
            ctx->pc = 0x21B450u;
            goto label_21b450;
        }
    }
    ctx->pc = 0x21B440u;
    // 0x21b440: 0x30620002
    ctx->pc = 0x21b440u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x21b444: 0x1040004c
    ctx->pc = 0x21B444u;
    {
        const bool branch_taken_0x21b444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B448u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b444) {
            ctx->pc = 0x21B578u;
            goto label_21b578;
        }
    }
    ctx->pc = 0x21B44Cu;
    // 0x21b44c: 0x0
    ctx->pc = 0x21b44cu;
    // NOP
label_21b450:
    // 0x21b450: 0xc7a00070
    ctx->pc = 0x21b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b454: 0x46005002
    ctx->pc = 0x21b454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x21b458: 0xc7a10078
    ctx->pc = 0x21b458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b45c: 0x46014842
    ctx->pc = 0x21b45cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x21b460: 0x460100c1
    ctx->pc = 0x21b460u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21b464: 0x44800000
    ctx->pc = 0x21b464u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b468: 0x46030034
    ctx->pc = 0x21b468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b46c: 0x0
    ctx->pc = 0x21b46cu;
    // NOP
    // 0x21b470: 0x45000003
    ctx->pc = 0x21B470u;
    {
        const bool branch_taken_0x21b470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B474u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x21b470) {
            ctx->pc = 0x21B480u;
            goto label_21b480;
        }
    }
    ctx->pc = 0x21B478u;
    // 0x21b478: 0x1040003f
    ctx->pc = 0x21B478u;
    {
        const bool branch_taken_0x21b478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B47Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b478) {
            ctx->pc = 0x21B578u;
            goto label_21b578;
        }
    }
    ctx->pc = 0x21B480u;
label_21b480:
    // 0x21b480: 0xc7a00080
    ctx->pc = 0x21b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b484: 0xc7a20070
    ctx->pc = 0x21b484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21b488: 0x46020181
    ctx->pc = 0x21b488u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21b48c: 0xc7a00088
    ctx->pc = 0x21b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b490: 0xc7a10078
    ctx->pc = 0x21b490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b494: 0x46010141
    ctx->pc = 0x21b494u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21b498: 0x46023901
    ctx->pc = 0x21b498u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x21b49c: 0x46014081
    ctx->pc = 0x21b49cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x21b4a0: 0x46023042
    ctx->pc = 0x21b4a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x21b4a4: 0x46042802
    ctx->pc = 0x21b4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x21b4a8: 0x460008c1
    ctx->pc = 0x21b4a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b4ac: 0x44800000
    ctx->pc = 0x21b4acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b4b0: 0x46030034
    ctx->pc = 0x21b4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b4b4: 0x0
    ctx->pc = 0x21b4b4u;
    // NOP
    // 0x21b4b8: 0x45000003
    ctx->pc = 0x21B4B8u;
    {
        const bool branch_taken_0x21b4b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B4BCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x21b4b8) {
            ctx->pc = 0x21B4C8u;
            goto label_21b4c8;
        }
    }
    ctx->pc = 0x21B4C0u;
    // 0x21b4c0: 0x1040002d
    ctx->pc = 0x21B4C0u;
    {
        const bool branch_taken_0x21b4c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B4C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b4c0) {
            ctx->pc = 0x21B578u;
            goto label_21b578;
        }
    }
    ctx->pc = 0x21B4C8u;
label_21b4c8:
    // 0x21b4c8: 0xc7a00070
    ctx->pc = 0x21b4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b4cc: 0x46004901
    ctx->pc = 0x21b4ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x21b4d0: 0xc7a00078
    ctx->pc = 0x21b4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b4d4: 0x46005081
    ctx->pc = 0x21b4d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x21b4d8: 0x46023042
    ctx->pc = 0x21b4d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x21b4dc: 0x46042802
    ctx->pc = 0x21b4dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x21b4e0: 0x460008c1
    ctx->pc = 0x21b4e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b4e4: 0x44800000
    ctx->pc = 0x21b4e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b4e8: 0x46030034
    ctx->pc = 0x21b4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b4ec: 0x0
    ctx->pc = 0x21b4ecu;
    // NOP
    // 0x21b4f0: 0x45000003
    ctx->pc = 0x21B4F0u;
    {
        const bool branch_taken_0x21b4f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B4F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x21b4f0) {
            ctx->pc = 0x21B500u;
            goto label_21b500;
        }
    }
    ctx->pc = 0x21B4F8u;
    // 0x21b4f8: 0x1040001f
    ctx->pc = 0x21B4F8u;
    {
        const bool branch_taken_0x21b4f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B4FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b4f8) {
            ctx->pc = 0x21B578u;
            goto label_21b578;
        }
    }
    ctx->pc = 0x21B500u;
label_21b500:
    // 0x21b500: 0xc7a10080
    ctx->pc = 0x21b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b504: 0x46013901
    ctx->pc = 0x21b504u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x21b508: 0xc7a00088
    ctx->pc = 0x21b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b50c: 0x46004081
    ctx->pc = 0x21b50cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x21b510: 0x46000847
    ctx->pc = 0x21b510u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21b514: 0x46020842
    ctx->pc = 0x21b514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21b518: 0x46000007
    ctx->pc = 0x21b518u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21b51c: 0x46040002
    ctx->pc = 0x21b51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21b520: 0x460008c1
    ctx->pc = 0x21b520u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b524: 0x44800000
    ctx->pc = 0x21b524u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b528: 0x46030034
    ctx->pc = 0x21b528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b52c: 0x0
    ctx->pc = 0x21b52cu;
    // NOP
    // 0x21b530: 0x45000003
    ctx->pc = 0x21B530u;
    {
        const bool branch_taken_0x21b530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B534u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x21b530) {
            ctx->pc = 0x21B540u;
            goto label_21b540;
        }
    }
    ctx->pc = 0x21B538u;
    // 0x21b538: 0x1040000f
    ctx->pc = 0x21B538u;
    {
        const bool branch_taken_0x21b538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B53Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b538) {
            ctx->pc = 0x21B578u;
            goto label_21b578;
        }
    }
    ctx->pc = 0x21B540u;
label_21b540:
    // 0x21b540: 0xc7a10080
    ctx->pc = 0x21b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b544: 0x46014901
    ctx->pc = 0x21b544u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x21b548: 0xc7a00088
    ctx->pc = 0x21b548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b54c: 0x46005081
    ctx->pc = 0x21b54cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x21b550: 0x46000847
    ctx->pc = 0x21b550u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21b554: 0x46020842
    ctx->pc = 0x21b554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21b558: 0x46000007
    ctx->pc = 0x21b558u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21b55c: 0x46040002
    ctx->pc = 0x21b55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21b560: 0x460008c1
    ctx->pc = 0x21b560u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b564: 0x44800000
    ctx->pc = 0x21b564u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b568: 0x46030034
    ctx->pc = 0x21b568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b56c: 0x0
    ctx->pc = 0x21b56cu;
    // NOP
    // 0x21b570: 0x45030001
    ctx->pc = 0x21B570u;
    {
        const bool branch_taken_0x21b570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b570) {
            ctx->pc = 0x21B574u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x21B578u;
            goto label_21b578;
        }
    }
    ctx->pc = 0x21B578u;
label_21b578:
    // 0x21b578: 0x10800008
    ctx->pc = 0x21B578u;
    {
        const bool branch_taken_0x21b578 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B57Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x21b578) {
            ctx->pc = 0x21B59Cu;
            goto label_21b59c;
        }
    }
    ctx->pc = 0x21B580u;
    // 0x21b580: 0x10400006
    ctx->pc = 0x21B580u;
    {
        const bool branch_taken_0x21b580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B584u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x21b580) {
            ctx->pc = 0x21B59Cu;
            goto label_21b59c;
        }
    }
    ctx->pc = 0x21B588u;
    // 0x21b588: 0x27a30050
    ctx->pc = 0x21b588u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21b58c: 0x78820000
    ctx->pc = 0x21b58cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b590: 0x7c620000
    ctx->pc = 0x21b590u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21b594: 0x1000003b
    ctx->pc = 0x21B594u;
    {
        const bool branch_taken_0x21b594 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B598u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x21b594) {
            ctx->pc = 0x21B684u;
            goto label_21b684;
        }
    }
    ctx->pc = 0x21B59Cu;
label_21b59c:
    // 0x21b59c: 0x10a00008
    ctx->pc = 0x21B59Cu;
    {
        const bool branch_taken_0x21b59c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B5A0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x21b59c) {
            ctx->pc = 0x21B5C0u;
            goto label_21b5c0;
        }
    }
    ctx->pc = 0x21B5A4u;
    // 0x21b5a4: 0x10400006
    ctx->pc = 0x21B5A4u;
    {
        const bool branch_taken_0x21b5a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B5A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x21b5a4) {
            ctx->pc = 0x21B5C0u;
            goto label_21b5c0;
        }
    }
    ctx->pc = 0x21B5ACu;
    // 0x21b5ac: 0x27a30050
    ctx->pc = 0x21b5acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21b5b0: 0x78820000
    ctx->pc = 0x21b5b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b5b4: 0x7c620000
    ctx->pc = 0x21b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21b5b8: 0x10000032
    ctx->pc = 0x21B5B8u;
    {
        const bool branch_taken_0x21b5b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B5BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x21b5b8) {
            ctx->pc = 0x21B684u;
            goto label_21b684;
        }
    }
    ctx->pc = 0x21B5C0u;
label_21b5c0:
    // 0x21b5c0: 0x27b00020
    ctx->pc = 0x21b5c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x21b5c4: 0x27b10030
    ctx->pc = 0x21b5c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b5c8: 0x27b40050
    ctx->pc = 0x21b5c8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21b5cc: 0x27b20070
    ctx->pc = 0x21b5ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21b5d0: 0x200202d
    ctx->pc = 0x21b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5d4: 0x220282d
    ctx->pc = 0x21b5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5d8: 0x280302d
    ctx->pc = 0x21b5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5dc: 0x27a70060
    ctx->pc = 0x21b5dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21b5e0: 0x240402d
    ctx->pc = 0x21b5e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5e4: 0xc086aaa
    ctx->pc = 0x21B5E4u;
    SET_GPR_U32(ctx, 31, 0x21B5ECu);
    ctx->pc = 0x21B5E8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21AAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineLineDist3D2D_0x21aaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5ECu; }
    }
    if (ctx->pc != 0x21B5ECu) { return; }
    ctx->pc = 0x21B5ECu;
    // 0x21b5ec: 0x460005c6
    ctx->pc = 0x21b5ecu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x21b5f0: 0x27b300a0
    ctx->pc = 0x21b5f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 160));
    // 0x21b5f4: 0x200202d
    ctx->pc = 0x21b5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5f8: 0x220282d
    ctx->pc = 0x21b5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5fc: 0x260302d
    ctx->pc = 0x21b5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b600: 0x240382d
    ctx->pc = 0x21b600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b604: 0x27a80080
    ctx->pc = 0x21b604u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b608: 0xc086aaa
    ctx->pc = 0x21B608u;
    SET_GPR_U32(ctx, 31, 0x21B610u);
    ctx->pc = 0x21B60Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21AAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineLineDist3D2D_0x21aaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B610u; }
    }
    if (ctx->pc != 0x21B610u) { return; }
    ctx->pc = 0x21B610u;
    // 0x21b610: 0x46170034
    ctx->pc = 0x21b610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b614: 0x0
    ctx->pc = 0x21b614u;
    // NOP
    // 0x21b618: 0x45000005
    ctx->pc = 0x21B618u;
    {
        const bool branch_taken_0x21b618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B61Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 160));
        if (branch_taken_0x21b618) {
            ctx->pc = 0x21B630u;
            goto label_21b630;
        }
    }
    ctx->pc = 0x21B620u;
    // 0x21b620: 0x460005c6
    ctx->pc = 0x21b620u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x21b624: 0x7a620000
    ctx->pc = 0x21b624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21b628: 0x7e820000
    ctx->pc = 0x21b628u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x21b62c: 0x27b000a0
    ctx->pc = 0x21b62cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 160));
label_21b630:
    // 0x21b630: 0x27a40020
    ctx->pc = 0x21b630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x21b634: 0x27a50030
    ctx->pc = 0x21b634u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b638: 0x200302d
    ctx->pc = 0x21b638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b63c: 0x27a70060
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21b640: 0x27a80080
    ctx->pc = 0x21b640u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 128));
    // 0x21b644: 0xc086aaa
    ctx->pc = 0x21B644u;
    SET_GPR_U32(ctx, 31, 0x21B64Cu);
    ctx->pc = 0x21B648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21AAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineLineDist3D2D_0x21aaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B64Cu; }
    }
    if (ctx->pc != 0x21B64Cu) { return; }
    ctx->pc = 0x21B64Cu;
    // 0x21b64c: 0x46170034
    ctx->pc = 0x21b64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b650: 0x0
    ctx->pc = 0x21b650u;
    // NOP
    // 0x21b654: 0x45000004
    ctx->pc = 0x21B654u;
    {
        const bool branch_taken_0x21b654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B658u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x21b654) {
            ctx->pc = 0x21B668u;
            goto label_21b668;
        }
    }
    ctx->pc = 0x21B65Cu;
    // 0x21b65c: 0x460005c6
    ctx->pc = 0x21b65cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x21b660: 0x7a020000
    ctx->pc = 0x21b660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b664: 0x7c620000
    ctx->pc = 0x21b664u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_21b668:
    // 0x21b668: 0x4617c834
    ctx->pc = 0x21b668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b66c: 0x45000005
    ctx->pc = 0x21B66Cu;
    {
        const bool branch_taken_0x21b66c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b66c) {
            ctx->pc = 0x21B684u;
            goto label_21b684;
        }
    }
    ctx->pc = 0x21B674u;
label_21b674:
    // 0x21b674: 0x3c01bf80
    ctx->pc = 0x21b674u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x21b678: 0x44810000
    ctx->pc = 0x21b678u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21b67c: 0x1000000f
    ctx->pc = 0x21B67Cu;
    {
        const bool branch_taken_0x21b67c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B680u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        if (branch_taken_0x21b67c) {
            ctx->pc = 0x21B6BCu;
            goto label_21b6bc;
        }
    }
    ctx->pc = 0x21B684u;
label_21b684:
    // 0x21b684: 0x12c0000b
    ctx->pc = 0x21B684u;
    {
        const bool branch_taken_0x21b684 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B688u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x21b684) {
            ctx->pc = 0x21B6B4u;
            goto label_21b6b4;
        }
    }
    ctx->pc = 0x21B68Cu;
    // 0x21b68c: 0xc7ad0054
    ctx->pc = 0x21b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21b690: 0xc7ae0058
    ctx->pc = 0x21b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21b694: 0x2c0202d
    ctx->pc = 0x21b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b698: 0x27a50010
    ctx->pc = 0x21b698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b69c: 0xc086b18
    ctx->pc = 0x21B69Cu;
    SET_GPR_U32(ctx, 31, 0x21B6A4u);
    ctx->pc = 0x21B6A0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x21AC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVectorNorm_0x21ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B6A4u; }
    }
    if (ctx->pc != 0x21B6A4u) { return; }
    ctx->pc = 0x21B6A4u;
    // 0x21b6a4: 0xdac40000
    ctx->pc = 0x21b6a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21b6a8: 0xdba50000
    ctx->pc = 0x21b6a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b6ac: 0x4be52128
    ctx->pc = 0x21b6acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21b6b0: 0xfac40000
    ctx->pc = 0x21b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_21b6b4:
    // 0x21b6b4: 0x4600b806
    ctx->pc = 0x21b6b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x21b6b8: 0xdfbf0120
    ctx->pc = 0x21b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_21b6bc:
    // 0x21b6bc: 0xdfb60110
    ctx->pc = 0x21b6bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21b6c0: 0xdfb50100
    ctx->pc = 0x21b6c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21b6c4: 0xdfb400f0
    ctx->pc = 0x21b6c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21b6c8: 0xdfb300e0
    ctx->pc = 0x21b6c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21b6cc: 0xdfb200d0
    ctx->pc = 0x21b6ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21b6d0: 0xdfb100c0
    ctx->pc = 0x21b6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21b6d4: 0xdfb000b0
    ctx->pc = 0x21b6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21b6d8: 0xc7b90158
    ctx->pc = 0x21b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x21b6dc: 0xc7b80150
    ctx->pc = 0x21b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x21b6e0: 0xc7b70148
    ctx->pc = 0x21b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21b6e4: 0xc7b60140
    ctx->pc = 0x21b6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21b6e8: 0xc7b50138
    ctx->pc = 0x21b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21b6ec: 0xc7b40130
    ctx->pc = 0x21b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21b6f0: 0x3e00008
    ctx->pc = 0x21B6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B6F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B0E8u: goto label_21b0e8;
            case 0x21B108u: goto label_21b108;
            case 0x21B124u: goto label_21b124;
            case 0x21B154u: goto label_21b154;
            case 0x21B1BCu: goto label_21b1bc;
            case 0x21B1C4u: goto label_21b1c4;
            case 0x21B1F0u: goto label_21b1f0;
            case 0x21B1F8u: goto label_21b1f8;
            case 0x21B1FCu: goto label_21b1fc;
            case 0x21B2A4u: goto label_21b2a4;
            case 0x21B318u: goto label_21b318;
            case 0x21B32Cu: goto label_21b32c;
            case 0x21B398u: goto label_21b398;
            case 0x21B3ACu: goto label_21b3ac;
            case 0x21B3C4u: goto label_21b3c4;
            case 0x21B3F0u: goto label_21b3f0;
            case 0x21B40Cu: goto label_21b40c;
            case 0x21B450u: goto label_21b450;
            case 0x21B480u: goto label_21b480;
            case 0x21B4C8u: goto label_21b4c8;
            case 0x21B500u: goto label_21b500;
            case 0x21B540u: goto label_21b540;
            case 0x21B578u: goto label_21b578;
            case 0x21B59Cu: goto label_21b59c;
            case 0x21B5C0u: goto label_21b5c0;
            case 0x21B630u: goto label_21b630;
            case 0x21B668u: goto label_21b668;
            case 0x21B674u: goto label_21b674;
            case 0x21B684u: goto label_21b684;
            case 0x21B6B4u: goto label_21b6b4;
            case 0x21B6BCu: goto label_21b6bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B6F8u;
}
