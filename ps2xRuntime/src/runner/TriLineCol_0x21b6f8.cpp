#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TriLineCol
// Address: 0x21b6f8 - 0x21b9d8
void TriLineCol_0x21b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21b6f8u;

    // 0x21b6f8: 0x27bdff70
    ctx->pc = 0x21b6f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21b6fc: 0xffbf0070
    ctx->pc = 0x21b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21b700: 0xffb10060
    ctx->pc = 0x21b700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x21b704: 0xffb00050
    ctx->pc = 0x21b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x21b708: 0xe7b50088
    ctx->pc = 0x21b708u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21b70c: 0xe7b40080
    ctx->pc = 0x21b70cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21b710: 0x80802d
    ctx->pc = 0x21b710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b714: 0xa0882d
    ctx->pc = 0x21b714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b718: 0xc6000014
    ctx->pc = 0x21b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b71c: 0xe7a00000
    ctx->pc = 0x21b71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21b720: 0xc6000018
    ctx->pc = 0x21b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b724: 0xe7a00004
    ctx->pc = 0x21b724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21b728: 0xc600001c
    ctx->pc = 0x21b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b72c: 0xe7a00008
    ctx->pc = 0x21b72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21b730: 0xc6000008
    ctx->pc = 0x21b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b734: 0xe7a00010
    ctx->pc = 0x21b734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21b738: 0xc600000c
    ctx->pc = 0x21b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b73c: 0xe7a00014
    ctx->pc = 0x21b73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21b740: 0xc6000010
    ctx->pc = 0x21b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b744: 0xe7a00018
    ctx->pc = 0x21b744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21b748: 0x3c020032
    ctx->pc = 0x21b748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21b74c: 0x2442f9d0
    ctx->pc = 0x21b74cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965712));
    // 0x21b750: 0x27a40040
    ctx->pc = 0x21b750u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21b754: 0xd8440000
    ctx->pc = 0x21b754u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b758: 0xdba50000
    ctx->pc = 0x21b758u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b75c: 0x4be5212c
    ctx->pc = 0x21b75cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21b760: 0xf8840000
    ctx->pc = 0x21b760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21b764: 0x27a50020
    ctx->pc = 0x21b764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x21b768: 0x27a60010
    ctx->pc = 0x21b768u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b76c: 0xc086b4e
    ctx->pc = 0x21B76Cu;
    SET_GPR_U32(ctx, 31, 0x21B774u);
    ctx->pc = 0x21B770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21AD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BodyVectorNorm_0x21ad38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B774u; }
    }
    if (ctx->pc != 0x21B774u) { return; }
    ctx->pc = 0x21B774u;
    // 0x21b774: 0xc7a10024
    ctx->pc = 0x21b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b778: 0x44800000
    ctx->pc = 0x21b778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b77c: 0x46000834
    ctx->pc = 0x21b77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b780: 0x0
    ctx->pc = 0x21b780u;
    // NOP
    // 0x21b784: 0x4501008d
    ctx->pc = 0x21B784u;
    {
        const bool branch_taken_0x21b784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B788u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b784) {
            ctx->pc = 0x21B9BCu;
            goto label_21b9bc;
        }
    }
    ctx->pc = 0x21B78Cu;
    // 0x21b78c: 0x3c020032
    ctx->pc = 0x21b78cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21b790: 0x2442f9e0
    ctx->pc = 0x21b790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x21b794: 0x27a40040
    ctx->pc = 0x21b794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21b798: 0xd8440000
    ctx->pc = 0x21b798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b79c: 0xdba50000
    ctx->pc = 0x21b79cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b7a0: 0x4be5212c
    ctx->pc = 0x21b7a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21b7a4: 0xf8840000
    ctx->pc = 0x21b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21b7a8: 0x27a50030
    ctx->pc = 0x21b7a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21b7ac: 0x27a60010
    ctx->pc = 0x21b7acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b7b0: 0xc086b4e
    ctx->pc = 0x21B7B0u;
    SET_GPR_U32(ctx, 31, 0x21B7B8u);
    ctx->pc = 0x21B7B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21AD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BodyVectorNorm_0x21ad38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B7B8u; }
    }
    if (ctx->pc != 0x21B7B8u) { return; }
    ctx->pc = 0x21B7B8u;
    // 0x21b7b8: 0xc7a10024
    ctx->pc = 0x21b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b7bc: 0xc7a00034
    ctx->pc = 0x21b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b7c0: 0x46000834
    ctx->pc = 0x21b7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b7c4: 0x0
    ctx->pc = 0x21b7c4u;
    // NOP
    // 0x21b7c8: 0x4501007c
    ctx->pc = 0x21B7C8u;
    {
        const bool branch_taken_0x21b7c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B7CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b7c8) {
            ctx->pc = 0x21B9BCu;
            goto label_21b9bc;
        }
    }
    ctx->pc = 0x21B7D0u;
    // 0x21b7d0: 0xc7a00024
    ctx->pc = 0x21b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b7d4: 0x44800800
    ctx->pc = 0x21b7d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x21b7d8: 0x46000834
    ctx->pc = 0x21b7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b7dc: 0x0
    ctx->pc = 0x21b7dcu;
    // NOP
    // 0x21b7e0: 0x45000005
    ctx->pc = 0x21B7E0u;
    {
        const bool branch_taken_0x21b7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B7E4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b7e0) {
            ctx->pc = 0x21B7F8u;
            goto label_21b7f8;
        }
    }
    ctx->pc = 0x21B7E8u;
    // 0x21b7e8: 0x46000834
    ctx->pc = 0x21b7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b7ec: 0x0
    ctx->pc = 0x21b7ecu;
    // NOP
    // 0x21b7f0: 0x45010073
    ctx->pc = 0x21B7F0u;
    {
        const bool branch_taken_0x21b7f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B7F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x21b7f0) {
            ctx->pc = 0x21B9C0u;
            goto label_21b9c0;
        }
    }
    ctx->pc = 0x21B7F8u;
label_21b7f8:
    // 0x21b7f8: 0xc7a00024
    ctx->pc = 0x21b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b7fc: 0x44800800
    ctx->pc = 0x21b7fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x21b800: 0x46010034
    ctx->pc = 0x21b800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b804: 0x0
    ctx->pc = 0x21b804u;
    // NOP
    // 0x21b808: 0x45000005
    ctx->pc = 0x21B808u;
    {
        const bool branch_taken_0x21b808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B80Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b808) {
            ctx->pc = 0x21B820u;
            goto label_21b820;
        }
    }
    ctx->pc = 0x21B810u;
    // 0x21b810: 0x46010034
    ctx->pc = 0x21b810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b814: 0x0
    ctx->pc = 0x21b814u;
    // NOP
    // 0x21b818: 0x45010068
    ctx->pc = 0x21B818u;
    {
        const bool branch_taken_0x21b818 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B81Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b818) {
            ctx->pc = 0x21B9BCu;
            goto label_21b9bc;
        }
    }
    ctx->pc = 0x21B820u;
label_21b820:
    // 0x21b820: 0xc7a10030
    ctx->pc = 0x21b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b824: 0xc7a00020
    ctx->pc = 0x21b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b828: 0x46000d01
    ctx->pc = 0x21b828u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b82c: 0xc7a10038
    ctx->pc = 0x21b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b830: 0xc7a00028
    ctx->pc = 0x21b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b834: 0x46000d41
    ctx->pc = 0x21b834u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b838: 0x4600a306
    ctx->pc = 0x21b838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21b83c: 0xc0b5c34
    ctx->pc = 0x21B83Cu;
    SET_GPR_U32(ctx, 31, 0x21B844u);
    ctx->pc = 0x21B840u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B844u; }
    }
    if (ctx->pc != 0x21B844u) { return; }
    ctx->pc = 0x21B844u;
    // 0x21b844: 0x3c013c23
    ctx->pc = 0x21b844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x21b848: 0x3421d70a
    ctx->pc = 0x21b848u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x21b84c: 0x44810800
    ctx->pc = 0x21b84cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x21b850: 0x46000834
    ctx->pc = 0x21b850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b854: 0x0
    ctx->pc = 0x21b854u;
    // NOP
    // 0x21b858: 0x4500001a
    ctx->pc = 0x21B858u;
    {
        const bool branch_taken_0x21b858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B85Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x21b858) {
            ctx->pc = 0x21B8C4u;
            goto label_21b8c4;
        }
    }
    ctx->pc = 0x21B860u;
    // 0x21b860: 0x46001045
    ctx->pc = 0x21b860u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x21b864: 0xc7a00034
    ctx->pc = 0x21b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b868: 0x46000005
    ctx->pc = 0x21b868u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21b86c: 0x46000840
    ctx->pc = 0x21b86cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b870: 0x44800000
    ctx->pc = 0x21b870u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b874: 0x46000832
    ctx->pc = 0x21b874u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b878: 0x0
    ctx->pc = 0x21b878u;
    // NOP
    // 0x21b87c: 0x45000006
    ctx->pc = 0x21B87Cu;
    {
        const bool branch_taken_0x21b87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B880u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21b87c) {
            ctx->pc = 0x21B898u;
            goto label_21b898;
        }
    }
    ctx->pc = 0x21B884u;
    // 0x21b884: 0x46001345
    ctx->pc = 0x21b884u;
    ctx->f[13] = FPU_ABS_S(ctx->f[2]);
    // 0x21b888: 0x3c01447a
    ctx->pc = 0x21b888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x21b88c: 0x44810000
    ctx->pc = 0x21b88cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21b890: 0x10000005
    ctx->pc = 0x21B890u;
    {
        const bool branch_taken_0x21b890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B894u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x21b890) {
            ctx->pc = 0x21B8A8u;
            goto label_21b8a8;
        }
    }
    ctx->pc = 0x21B898u;
label_21b898:
    // 0x21b898: 0x46000345
    ctx->pc = 0x21b898u;
    ctx->f[13] = FPU_ABS_S(ctx->f[0]);
    // 0x21b89c: 0x0
    ctx->pc = 0x21b89cu;
    // NOP
    // 0x21b8a0: 0x0
    ctx->pc = 0x21b8a0u;
    // NOP
    // 0x21b8a4: 0x46016b43
    ctx->pc = 0x21b8a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
label_21b8a8:
    // 0x21b8a8: 0x460da042
    ctx->pc = 0x21b8a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x21b8ac: 0xc7a00020
    ctx->pc = 0x21b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b8b0: 0x46000b00
    ctx->pc = 0x21b8b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b8b4: 0x460da842
    ctx->pc = 0x21b8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[13]);
    // 0x21b8b8: 0xc7a00028
    ctx->pc = 0x21b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b8bc: 0x10000003
    ctx->pc = 0x21B8BCu;
    {
        const bool branch_taken_0x21b8bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B8C0u;
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x21b8bc) {
            ctx->pc = 0x21B8CCu;
            goto label_21b8cc;
        }
    }
    ctx->pc = 0x21B8C4u;
label_21b8c4:
    // 0x21b8c4: 0xc7ac0020
    ctx->pc = 0x21b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21b8c8: 0xc7ae0028
    ctx->pc = 0x21b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_21b8cc:
    // 0x21b8cc: 0x86020020
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21b8d0: 0x44821800
    ctx->pc = 0x21b8d0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x21b8d4: 0x468018e0
    ctx->pc = 0x21b8d4u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x21b8d8: 0x3c013c80
    ctx->pc = 0x21b8d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15488 << 16));
    // 0x21b8dc: 0x44810000
    ctx->pc = 0x21b8dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21b8e0: 0x460018c2
    ctx->pc = 0x21b8e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21b8e4: 0x86020022
    ctx->pc = 0x21b8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x21b8e8: 0x44821000
    ctx->pc = 0x21b8e8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x21b8ec: 0x468010a0
    ctx->pc = 0x21b8ecu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x21b8f0: 0x46001082
    ctx->pc = 0x21b8f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21b8f4: 0x86020024
    ctx->pc = 0x21b8f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x21b8f8: 0x44822800
    ctx->pc = 0x21b8f8u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 2);
    // 0x21b8fc: 0x46802960
    ctx->pc = 0x21b8fcu;
    ctx->f[5] = FPU_CVT_S_W(*(int32_t*)&ctx->f[5]);
    // 0x21b900: 0x46002942
    ctx->pc = 0x21b900u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x21b904: 0x86020026
    ctx->pc = 0x21b904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x21b908: 0x44822000
    ctx->pc = 0x21b908u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x21b90c: 0x46802120
    ctx->pc = 0x21b90cu;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x21b910: 0x46002102
    ctx->pc = 0x21b910u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x21b914: 0x460e1842
    ctx->pc = 0x21b914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x21b918: 0x460c1002
    ctx->pc = 0x21b918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x21b91c: 0x46000841
    ctx->pc = 0x21b91cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b920: 0x44800000
    ctx->pc = 0x21b920u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b924: 0x46010034
    ctx->pc = 0x21b924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b928: 0x0
    ctx->pc = 0x21b928u;
    // NOP
    // 0x21b92c: 0x45010023
    ctx->pc = 0x21B92Cu;
    {
        const bool branch_taken_0x21b92c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B930u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b92c) {
            ctx->pc = 0x21B9BCu;
            goto label_21b9bc;
        }
    }
    ctx->pc = 0x21B934u;
    // 0x21b934: 0x46032841
    ctx->pc = 0x21b934u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x21b938: 0x46022001
    ctx->pc = 0x21b938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x21b93c: 0x460360c1
    ctx->pc = 0x21b93cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x21b940: 0x46027081
    ctx->pc = 0x21b940u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x21b944: 0x46020842
    ctx->pc = 0x21b944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21b948: 0x46030002
    ctx->pc = 0x21b948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21b94c: 0x46000841
    ctx->pc = 0x21b94cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b950: 0x44800000
    ctx->pc = 0x21b950u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b954: 0x46010034
    ctx->pc = 0x21b954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b958: 0x0
    ctx->pc = 0x21b958u;
    // NOP
    // 0x21b95c: 0x45010018
    ctx->pc = 0x21B95Cu;
    {
        const bool branch_taken_0x21b95c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B960u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x21b95c) {
            ctx->pc = 0x21B9C0u;
            goto label_21b9c0;
        }
    }
    ctx->pc = 0x21B964u;
    // 0x21b964: 0x460560c1
    ctx->pc = 0x21b964u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x21b968: 0x46047081
    ctx->pc = 0x21b968u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
    // 0x21b96c: 0x46002847
    ctx->pc = 0x21b96cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x21b970: 0x46020842
    ctx->pc = 0x21b970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21b974: 0x46002007
    ctx->pc = 0x21b974u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x21b978: 0x46030002
    ctx->pc = 0x21b978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21b97c: 0x46000841
    ctx->pc = 0x21b97cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21b980: 0x44800000
    ctx->pc = 0x21b980u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21b984: 0x46010034
    ctx->pc = 0x21b984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b988: 0x4501000d
    ctx->pc = 0x21B988u;
    {
        const bool branch_taken_0x21b988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b988) {
            ctx->pc = 0x21B9C0u;
            goto label_21b9c0;
        }
    }
    ctx->pc = 0x21B990u;
    // 0x21b990: 0x12200009
    ctx->pc = 0x21B990u;
    {
        const bool branch_taken_0x21b990 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B994u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21b990) {
            ctx->pc = 0x21B9B8u;
            goto label_21b9b8;
        }
    }
    ctx->pc = 0x21B998u;
    // 0x21b998: 0x44806800
    ctx->pc = 0x21b998u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x21b99c: 0x27a50010
    ctx->pc = 0x21b99cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b9a0: 0xc086b18
    ctx->pc = 0x21B9A0u;
    SET_GPR_U32(ctx, 31, 0x21B9A8u);
    ctx->pc = 0x21B9A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x21AC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVectorNorm_0x21ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B9A8u; }
    }
    if (ctx->pc != 0x21B9A8u) { return; }
    ctx->pc = 0x21B9A8u;
    // 0x21b9a8: 0xda240000
    ctx->pc = 0x21b9a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b9ac: 0xdba50000
    ctx->pc = 0x21b9acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b9b0: 0x4be52128
    ctx->pc = 0x21b9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21b9b4: 0xfa240000
    ctx->pc = 0x21b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_21b9b8:
    // 0x21b9b8: 0x24020001
    ctx->pc = 0x21b9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21b9bc:
    // 0x21b9bc: 0xdfbf0070
    ctx->pc = 0x21b9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21b9c0:
    // 0x21b9c0: 0xdfb10060
    ctx->pc = 0x21b9c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b9c4: 0xdfb00050
    ctx->pc = 0x21b9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b9c8: 0xc7b50088
    ctx->pc = 0x21b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21b9cc: 0xc7b40080
    ctx->pc = 0x21b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21b9d0: 0x3e00008
    ctx->pc = 0x21B9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B9D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B7F8u: goto label_21b7f8;
            case 0x21B820u: goto label_21b820;
            case 0x21B898u: goto label_21b898;
            case 0x21B8A8u: goto label_21b8a8;
            case 0x21B8C4u: goto label_21b8c4;
            case 0x21B8CCu: goto label_21b8cc;
            case 0x21B9B8u: goto label_21b9b8;
            case 0x21B9BCu: goto label_21b9bc;
            case 0x21B9C0u: goto label_21b9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B9D8u;
}
