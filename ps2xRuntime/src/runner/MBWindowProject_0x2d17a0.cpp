#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowProject
// Address: 0x2d17a0 - 0x2d1940
void MBWindowProject_0x2d17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d17a0u;

    // 0x2d17a0: 0x27bdff90
    ctx->pc = 0x2d17a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d17a4: 0xffbf0060
    ctx->pc = 0x2d17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d17a8: 0xffb20050
    ctx->pc = 0x2d17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d17ac: 0xffb10040
    ctx->pc = 0x2d17acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d17b0: 0xffb00030
    ctx->pc = 0x2d17b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d17b4: 0xa0182d
    ctx->pc = 0x2d17b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17b8: 0xc0882d
    ctx->pc = 0x2d17b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17bc: 0xe0902d
    ctx->pc = 0x2d17bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17c0: 0x3c02003a
    ctx->pc = 0x2d17c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d17c4: 0x8c501bd0
    ctx->pc = 0x2d17c4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2d17c8: 0xc4800000
    ctx->pc = 0x2d17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d17cc: 0xc4610030
    ctx->pc = 0x2d17ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d17d0: 0x46010001
    ctx->pc = 0x2d17d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d17d4: 0xe7a00000
    ctx->pc = 0x2d17d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d17d8: 0xc4800004
    ctx->pc = 0x2d17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d17dc: 0xc4610034
    ctx->pc = 0x2d17dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d17e0: 0x46010001
    ctx->pc = 0x2d17e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d17e4: 0xe7a00004
    ctx->pc = 0x2d17e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d17e8: 0xc4800008
    ctx->pc = 0x2d17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d17ec: 0xc4610038
    ctx->pc = 0x2d17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d17f0: 0x46010001
    ctx->pc = 0x2d17f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d17f4: 0xe7a00008
    ctx->pc = 0x2d17f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d17f8: 0x3a0202d
    ctx->pc = 0x2d17f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17fc: 0x27a50020
    ctx->pc = 0x2d17fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1800: 0xc0b575e
    ctx->pc = 0x2D1800u;
    SET_GPR_U32(ctx, 31, 0x2D1808u);
    ctx->pc = 0x2D1804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        BodyVector_0x2d5d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1808u; }
    }
    if (ctx->pc != 0x2D1808u) { return; }
    ctx->pc = 0x2D1808u;
    // 0x2d1808: 0xc7a00028
    ctx->pc = 0x2d1808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d180c: 0x3c014040
    ctx->pc = 0x2d180cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2d1810: 0x44810800
    ctx->pc = 0x2d1810u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d1814: 0x46010034
    ctx->pc = 0x2d1814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1818: 0x0
    ctx->pc = 0x2d1818u;
    // NOP
    // 0x2d181c: 0x45030001
    ctx->pc = 0x2D181Cu;
    {
        const bool branch_taken_0x2d181c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d181c) {
            ctx->pc = 0x2D1820u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
            ctx->pc = 0x2D1824u;
            goto label_2d1824;
        }
    }
    ctx->pc = 0x2D1824u;
label_2d1824:
    // 0x2d1824: 0x3c013f80
    ctx->pc = 0x2d1824u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d1828: 0x44810000
    ctx->pc = 0x2d1828u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d182c: 0xc7a10028
    ctx->pc = 0x2d182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1830: 0x0
    ctx->pc = 0x2d1830u;
    // NOP
    // 0x2d1834: 0x0
    ctx->pc = 0x2d1834u;
    // NOP
    // 0x2d1838: 0x46010003
    ctx->pc = 0x2d1838u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2d183c: 0xc7a20020
    ctx->pc = 0x2d183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1840: 0x46020082
    ctx->pc = 0x2d1840u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d1844: 0xc6010000
    ctx->pc = 0x2d1844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1848: 0x46011082
    ctx->pc = 0x2d1848u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d184c: 0xc6010008
    ctx->pc = 0x2d184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1850: 0x46011080
    ctx->pc = 0x2d1850u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d1854: 0xe7a20010
    ctx->pc = 0x2d1854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d1858: 0xc7a10024
    ctx->pc = 0x2d1858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d185c: 0x46010002
    ctx->pc = 0x2d185cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d1860: 0xc6010004
    ctx->pc = 0x2d1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1864: 0x46010002
    ctx->pc = 0x2d1864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d1868: 0xc601000c
    ctx->pc = 0x2d1868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d186c: 0x46010000
    ctx->pc = 0x2d186cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d1870: 0xe7a00014
    ctx->pc = 0x2d1870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d1874: 0x3c01c6ff
    ctx->pc = 0x2d1874u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50943 << 16));
    // 0x2d1878: 0x3421fe00
    ctx->pc = 0x2d1878u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65024));
    // 0x2d187c: 0x44810000
    ctx->pc = 0x2d187cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d1880: 0x46001034
    ctx->pc = 0x2d1880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1884: 0x0
    ctx->pc = 0x2d1884u;
    // NOP
    // 0x2d1888: 0x4501000c
    ctx->pc = 0x2D1888u;
    {
        const bool branch_taken_0x2d1888 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D188Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934529));
        if (branch_taken_0x2d1888) {
            ctx->pc = 0x2D18BCu;
            goto label_2d18bc;
        }
    }
    ctx->pc = 0x2D1890u;
    // 0x2d1890: 0xc7a10010
    ctx->pc = 0x2d1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1894: 0x3c0146ff
    ctx->pc = 0x2d1894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18175 << 16));
    // 0x2d1898: 0x3421fe00
    ctx->pc = 0x2d1898u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65024));
    // 0x2d189c: 0x44810000
    ctx->pc = 0x2d189cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d18a0: 0x46010034
    ctx->pc = 0x2d18a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d18a4: 0x0
    ctx->pc = 0x2d18a4u;
    // NOP
    // 0x2d18a8: 0x45010004
    ctx->pc = 0x2D18A8u;
    {
        const bool branch_taken_0x2d18a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D18ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
        if (branch_taken_0x2d18a8) {
            ctx->pc = 0x2D18BCu;
            goto label_2d18bc;
        }
    }
    ctx->pc = 0x2D18B0u;
    // 0x2d18b0: 0xc7a00010
    ctx->pc = 0x2d18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d18b4: 0x46000064
    ctx->pc = 0x2d18b4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2d18b8: 0x44020800
    ctx->pc = 0x2d18b8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2d18bc:
    // 0x2d18bc: 0xa6420000
    ctx->pc = 0x2d18bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d18c0: 0xc7a10014
    ctx->pc = 0x2d18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d18c4: 0x3c01c6ff
    ctx->pc = 0x2d18c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50943 << 16));
    // 0x2d18c8: 0x3421fe00
    ctx->pc = 0x2d18c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65024));
    // 0x2d18cc: 0x44810000
    ctx->pc = 0x2d18ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d18d0: 0x46000834
    ctx->pc = 0x2d18d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d18d4: 0x0
    ctx->pc = 0x2d18d4u;
    // NOP
    // 0x2d18d8: 0x4501000b
    ctx->pc = 0x2D18D8u;
    {
        const bool branch_taken_0x2d18d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D18DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934529));
        if (branch_taken_0x2d18d8) {
            ctx->pc = 0x2D1908u;
            goto label_2d1908;
        }
    }
    ctx->pc = 0x2D18E0u;
    // 0x2d18e0: 0x3c0146ff
    ctx->pc = 0x2d18e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18175 << 16));
    // 0x2d18e4: 0x3421fe00
    ctx->pc = 0x2d18e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65024));
    // 0x2d18e8: 0x44810000
    ctx->pc = 0x2d18e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d18ec: 0x46010034
    ctx->pc = 0x2d18ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d18f0: 0x0
    ctx->pc = 0x2d18f0u;
    // NOP
    // 0x2d18f4: 0x45010004
    ctx->pc = 0x2D18F4u;
    {
        const bool branch_taken_0x2d18f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D18F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
        if (branch_taken_0x2d18f4) {
            ctx->pc = 0x2D1908u;
            goto label_2d1908;
        }
    }
    ctx->pc = 0x2D18FCu;
    // 0x2d18fc: 0xc7a00014
    ctx->pc = 0x2d18fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1900: 0x46000064
    ctx->pc = 0x2d1900u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2d1904: 0x44020800
    ctx->pc = 0x2d1904u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2d1908:
    // 0x2d1908: 0x12200007
    ctx->pc = 0x2D1908u;
    {
        const bool branch_taken_0x2d1908 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D190Cu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2d1908) {
            ctx->pc = 0x2D1928u;
            goto label_2d1928;
        }
    }
    ctx->pc = 0x2D1910u;
    // 0x2d1910: 0xc7a00020
    ctx->pc = 0x2d1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1914: 0xe6200000
    ctx->pc = 0x2d1914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d1918: 0xc7a00024
    ctx->pc = 0x2d1918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d191c: 0xe6200004
    ctx->pc = 0x2d191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d1920: 0xc7a00028
    ctx->pc = 0x2d1920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1924: 0xe6200008
    ctx->pc = 0x2d1924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d1928:
    // 0x2d1928: 0xdfbf0060
    ctx->pc = 0x2d1928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d192c: 0xdfb20050
    ctx->pc = 0x2d192cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1930: 0xdfb10040
    ctx->pc = 0x2d1930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1934: 0xdfb00030
    ctx->pc = 0x2d1934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1938: 0x3e00008
    ctx->pc = 0x2D1938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D193Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D1824u: goto label_2d1824;
            case 0x2D18BCu: goto label_2d18bc;
            case 0x2D1908u: goto label_2d1908;
            case 0x2D1928u: goto label_2d1928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D1940u;
}
