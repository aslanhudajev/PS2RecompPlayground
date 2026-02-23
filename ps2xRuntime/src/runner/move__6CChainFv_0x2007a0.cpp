#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: move__6CChainFv
// Address: 0x2007a0 - 0x200938
void move__6CChainFv_0x2007a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("move__6CChainFv");


    ctx->pc = 0x2007a0u;

    // 0x2007a0: 0x27bdffa0
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2007a4: 0x7fbf0050
    ctx->pc = 0x2007a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2007a8: 0x7fb30040
    ctx->pc = 0x2007a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2007ac: 0x7fb20030
    ctx->pc = 0x2007acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2007b0: 0x7fb10020
    ctx->pc = 0x2007b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2007b4: 0x7fb00010
    ctx->pc = 0x2007b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2007b8: 0xe7b60008
    ctx->pc = 0x2007b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2007bc: 0xe7b50004
    ctx->pc = 0x2007bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2007c0: 0x70809628
    ctx->pc = 0x2007c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2007c4: 0xe7b40000
    ctx->pc = 0x2007c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2007c8: 0x70008628
    ctx->pc = 0x2007c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2007cc: 0x1000004c
    ctx->pc = 0x2007CCu;
    {
        const bool branch_taken_0x2007cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2007D0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2007cc) {
            ctx->pc = 0x200900u;
            goto label_200900;
        }
    }
    ctx->pc = 0x2007D4u;
label_2007d4:
    // 0x2007d4: 0x8e330048
    ctx->pc = 0x2007d4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2007d8: 0xc6440000
    ctx->pc = 0x2007d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2007dc: 0xc6420004
    ctx->pc = 0x2007dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2007e0: 0xc6400008
    ctx->pc = 0x2007e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2007e4: 0xc6650000
    ctx->pc = 0x2007e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2007e8: 0xc6630004
    ctx->pc = 0x2007e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2007ec: 0xc6610008
    ctx->pc = 0x2007ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2007f0: 0x46042d01
    ctx->pc = 0x2007f0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2007f4: 0x46000d81
    ctx->pc = 0x2007f4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2007f8: 0x46021d41
    ctx->pc = 0x2007f8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2007fc: 0x4614a042
    ctx->pc = 0x2007fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x200800: 0x4615a802
    ctx->pc = 0x200800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x200804: 0x46000818
    ctx->pc = 0x200804u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200808: 0xc06c2a8
    ctx->pc = 0x200808u;
    SET_GPR_U32(ctx, 31, 0x200810u);
    ctx->pc = 0x20080Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200810u; }
        else if (ctx->pc != 0x200810u) { ctx->pc = 0x200810u; }
    }
    if (ctx->pc != 0x200810u) { return; }
    ctx->pc = 0x200810u;
    // 0x200810: 0x0
    ctx->pc = 0x200810u;
    // NOP
    // 0x200814: 0x0
    ctx->pc = 0x200814u;
    // NOP
    // 0x200818: 0x4600a503
    ctx->pc = 0x200818u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x20081c: 0x3c033fa6
    ctx->pc = 0x20081cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16294 << 16));
    // 0x200820: 0x34636666
    ctx->pc = 0x200820u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26214));
    // 0x200824: 0xc6220028
    ctx->pc = 0x200824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200828: 0x44830800
    ctx->pc = 0x200828u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20082c: 0x0
    ctx->pc = 0x20082cu;
    // NOP
    // 0x200830: 0x4600ad43
    ctx->pc = 0x200830u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x200834: 0x460208c2
    ctx->pc = 0x200834u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x200838: 0x4600b583
    ctx->pc = 0x200838u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
    // 0x20083c: 0x46030036
    ctx->pc = 0x20083cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200840: 0x0
    ctx->pc = 0x200840u;
    // NOP
    // 0x200844: 0x0
    ctx->pc = 0x200844u;
    // NOP
    // 0x200848: 0x45010011
    ctx->pc = 0x200848u;
    {
        const bool branch_taken_0x200848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200848) {
            ctx->pc = 0x200890u;
            goto label_200890;
        }
    }
    ctx->pc = 0x200850u;
    // 0x200850: 0xc6420000
    ctx->pc = 0x200850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200854: 0x4603a002
    ctx->pc = 0x200854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x200858: 0x46001080
    ctx->pc = 0x200858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x20085c: 0xe6620000
    ctx->pc = 0x20085cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x200860: 0xc6420004
    ctx->pc = 0x200860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200864: 0x4603a842
    ctx->pc = 0x200864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x200868: 0x46011040
    ctx->pc = 0x200868u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x20086c: 0xe6610004
    ctx->pc = 0x20086cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x200870: 0xc6410008
    ctx->pc = 0x200870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200874: 0x4603b002
    ctx->pc = 0x200874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x200878: 0x46000800
    ctx->pc = 0x200878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20087c: 0xe6600008
    ctx->pc = 0x20087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x200880: 0xae600018
    ctx->pc = 0x200880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x200884: 0xae60001c
    ctx->pc = 0x200884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x200888: 0x1000001b
    ctx->pc = 0x200888u;
    {
        const bool branch_taken_0x200888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20088Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        if (branch_taken_0x200888) {
            ctx->pc = 0x2008F8u;
            goto label_2008f8;
        }
    }
    ctx->pc = 0x200890u;
label_200890:
    // 0x200890: 0x46020081
    ctx->pc = 0x200890u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x200894: 0x3c034000
    ctx->pc = 0x200894u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x200898: 0x44830800
    ctx->pc = 0x200898u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20089c: 0xc6400000
    ctx->pc = 0x20089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008a0: 0x460110c3
    ctx->pc = 0x2008a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x2008a4: 0x4603a042
    ctx->pc = 0x2008a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2008a8: 0x46010000
    ctx->pc = 0x2008a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2008ac: 0xe6400000
    ctx->pc = 0x2008acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2008b0: 0x4603a882
    ctx->pc = 0x2008b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x2008b4: 0xc6400004
    ctx->pc = 0x2008b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008b8: 0x4603b0c2
    ctx->pc = 0x2008b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x2008bc: 0x46020000
    ctx->pc = 0x2008bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2008c0: 0xe6400004
    ctx->pc = 0x2008c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2008c4: 0xc6400008
    ctx->pc = 0x2008c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008c8: 0x46030000
    ctx->pc = 0x2008c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2008cc: 0xe6400008
    ctx->pc = 0x2008ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2008d0: 0xc6600000
    ctx->pc = 0x2008d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008d4: 0x46010001
    ctx->pc = 0x2008d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2008d8: 0xe6600000
    ctx->pc = 0x2008d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2008dc: 0xc6600004
    ctx->pc = 0x2008dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008e0: 0x46020001
    ctx->pc = 0x2008e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2008e4: 0xe6600004
    ctx->pc = 0x2008e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2008e8: 0xc6600008
    ctx->pc = 0x2008e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008ec: 0x46030001
    ctx->pc = 0x2008ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2008f0: 0xe6600008
    ctx->pc = 0x2008f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2008f4: 0x0
    ctx->pc = 0x2008f4u;
    // NOP
label_2008f8:
    // 0x2008f8: 0x26310004
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x2008fc: 0x26100001
    ctx->pc = 0x2008fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_200900:
    // 0x200900: 0x86430024
    ctx->pc = 0x200900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x200904: 0x203182a
    ctx->pc = 0x200904u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x200908: 0x1460ffb2
    ctx->pc = 0x200908u;
    {
        const bool branch_taken_0x200908 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x200908) {
            ctx->pc = 0x2007D4u;
            goto label_2007d4;
        }
    }
    ctx->pc = 0x200910u;
    // 0x200910: 0x7bbf0050
    ctx->pc = 0x200910u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200914: 0x7bb30040
    ctx->pc = 0x200914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200918: 0x7bb20030
    ctx->pc = 0x200918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20091c: 0x7bb10020
    ctx->pc = 0x20091cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200920: 0x7bb00010
    ctx->pc = 0x200920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200924: 0xc7b60008
    ctx->pc = 0x200924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x200928: 0xc7b50004
    ctx->pc = 0x200928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20092c: 0xc7b40000
    ctx->pc = 0x20092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200930: 0x3e00008
    ctx->pc = 0x200930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2007D4u: goto label_2007d4;
            case 0x200890u: goto label_200890;
            case 0x2008F8u: goto label_2008f8;
            case 0x200900u: goto label_200900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200938u;
}
