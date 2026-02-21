#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartBagFX
// Address: 0x27f148 - 0x27f368
void StartBagFX_0x27f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f148u;

    // 0x27f148: 0x27bdff40
    ctx->pc = 0x27f148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27f14c: 0xffbf0090
    ctx->pc = 0x27f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27f150: 0xffb50080
    ctx->pc = 0x27f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x27f154: 0xffb40070
    ctx->pc = 0x27f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x27f158: 0xffb30060
    ctx->pc = 0x27f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x27f15c: 0xffb20050
    ctx->pc = 0x27f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x27f160: 0xffb10040
    ctx->pc = 0x27f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x27f164: 0xffb00030
    ctx->pc = 0x27f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x27f168: 0xe7b700b8
    ctx->pc = 0x27f168u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27f16c: 0xe7b600b0
    ctx->pc = 0x27f16cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27f170: 0xe7b500a8
    ctx->pc = 0x27f170u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27f174: 0xe7b400a0
    ctx->pc = 0x27f174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27f178: 0x80802d
    ctx->pc = 0x27f178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f17c: 0x46006506
    ctx->pc = 0x27f17cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27f180: 0x3c0141f0
    ctx->pc = 0x27f180u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x27f184: 0x4481b000
    ctx->pc = 0x27f184u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x27f188: 0x44800000
    ctx->pc = 0x27f188u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27f18c: 0x4600a036
    ctx->pc = 0x27f18cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f190: 0x0
    ctx->pc = 0x27f190u;
    // NOP
    // 0x27f194: 0x45000003
    ctx->pc = 0x27F194u;
    {
        const bool branch_taken_0x27f194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F198u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27f194) {
            ctx->pc = 0x27F1A4u;
            goto label_27f1a4;
        }
    }
    ctx->pc = 0x27F19Cu;
    // 0x27f19c: 0x3c0141a0
    ctx->pc = 0x27f19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x27f1a0: 0x4481a000
    ctx->pc = 0x27f1a0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27f1a4:
    // 0x27f1a4: 0x3c02003a
    ctx->pc = 0x27f1a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x27f1a8: 0x244324e0
    ctx->pc = 0x27f1a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9440));
    // 0x27f1ac: 0xc44024e0
    ctx->pc = 0x27f1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f1b0: 0x4600a002
    ctx->pc = 0x27f1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27f1b4: 0xe7a00010
    ctx->pc = 0x27f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27f1b8: 0xc4600004
    ctx->pc = 0x27f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f1bc: 0x4600a002
    ctx->pc = 0x27f1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27f1c0: 0xe7a00014
    ctx->pc = 0x27f1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27f1c4: 0xc4600008
    ctx->pc = 0x27f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f1c8: 0x4600a002
    ctx->pc = 0x27f1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27f1cc: 0xe7a00018
    ctx->pc = 0x27f1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27f1d0: 0x882d
    ctx->pc = 0x27f1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1d4: 0x24142b00
    ctx->pc = 0x27f1d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27f1d8: 0x3c020032
    ctx->pc = 0x27f1d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27f1dc: 0x24531bc0
    ctx->pc = 0x27f1dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x27f1e0: 0x24120001
    ctx->pc = 0x27f1e0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f1e4: 0x3c013f34
    ctx->pc = 0x27f1e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x27f1e8: 0x3421fdf4
    ctx->pc = 0x27f1e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x27f1ec: 0x4481a800
    ctx->pc = 0x27f1ecu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x27f1f0: 0x3c013f00
    ctx->pc = 0x27f1f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27f1f4: 0x4481b800
    ctx->pc = 0x27f1f4u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x27f1f8: 0x2341018
    ctx->pc = 0x27f1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f1fc: 0x0
    ctx->pc = 0x27f1fcu;
    // NOP
label_27f200:
    // 0x27f200: 0x531821
    ctx->pc = 0x27f200u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x27f204: 0x8c6200fc
    ctx->pc = 0x27f204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x27f208: 0x5452001e
    ctx->pc = 0x27F208u;
    {
        const bool branch_taken_0x27f208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x27f208) {
            ctx->pc = 0x27F20Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x27F284u;
            goto label_27f284;
        }
    }
    ctx->pc = 0x27F210u;
    // 0x27f210: 0xc4600050
    ctx->pc = 0x27f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f214: 0xc6010000
    ctx->pc = 0x27f214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f218: 0x46010001
    ctx->pc = 0x27f218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27f21c: 0xe7a00000
    ctx->pc = 0x27f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f220: 0xc4600054
    ctx->pc = 0x27f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f224: 0xc6010004
    ctx->pc = 0x27f224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f228: 0x46010001
    ctx->pc = 0x27f228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27f22c: 0xe7a00004
    ctx->pc = 0x27f22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27f230: 0xc4600058
    ctx->pc = 0x27f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f234: 0xc6010008
    ctx->pc = 0x27f234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f238: 0x46010001
    ctx->pc = 0x27f238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27f23c: 0xe7a00008
    ctx->pc = 0x27f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27f240: 0xc0b58fc
    ctx->pc = 0x27F240u;
    SET_GPR_U32(ctx, 31, 0x27F248u);
    ctx->pc = 0x27F244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F248u; }
    }
    if (ctx->pc != 0x27F248u) { return; }
    ctx->pc = 0x27F248u;
    // 0x27f248: 0x46160034
    ctx->pc = 0x27f248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f24c: 0x0
    ctx->pc = 0x27f24cu;
    // NOP
    // 0x27f250: 0x4500000c
    ctx->pc = 0x27F250u;
    {
        const bool branch_taken_0x27f250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F254u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x27f250) {
            ctx->pc = 0x27F284u;
            goto label_27f284;
        }
    }
    ctx->pc = 0x27F258u;
    // 0x27f258: 0x46000586
    ctx->pc = 0x27f258u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27f25c: 0xe7b50004
    ctx->pc = 0x27f25cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27f260: 0x4617a042
    ctx->pc = 0x27f260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x27f264: 0xc7a00000
    ctx->pc = 0x27f264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f268: 0x46000802
    ctx->pc = 0x27f268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27f26c: 0xe7a00010
    ctx->pc = 0x27f26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27f270: 0x46150802
    ctx->pc = 0x27f270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x27f274: 0xe7a00014
    ctx->pc = 0x27f274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27f278: 0xc7a00008
    ctx->pc = 0x27f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f27c: 0x46000842
    ctx->pc = 0x27f27cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27f280: 0xe7a10018
    ctx->pc = 0x27f280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_27f284:
    // 0x27f284: 0x2a220004
    ctx->pc = 0x27f284u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x27f288: 0x1440ffdd
    ctx->pc = 0x27F288u;
    {
        const bool branch_taken_0x27f288 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27F28Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x27f288) {
            ctx->pc = 0x27F200u;
            goto label_27f200;
        }
    }
    ctx->pc = 0x27F290u;
    // 0x27f290: 0x3c013f86
    ctx->pc = 0x27f290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16262 << 16));
    // 0x27f294: 0x34210a92
    ctx->pc = 0x27f294u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x27f298: 0x44816000
    ctx->pc = 0x27f298u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27f29c: 0xc0b5c06
    ctx->pc = 0x27F29Cu;
    SET_GPR_U32(ctx, 31, 0x27F2A4u);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2A4u; }
    }
    if (ctx->pc != 0x27F2A4u) { return; }
    ctx->pc = 0x27F2A4u;
    // 0x27f2a4: 0x3c013e86
    ctx->pc = 0x27f2a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16006 << 16));
    // 0x27f2a8: 0x34210a92
    ctx->pc = 0x27f2a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x27f2ac: 0x44810800
    ctx->pc = 0x27f2acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27f2b0: 0x46010000
    ctx->pc = 0x27f2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27f2b4: 0xe7a00020
    ctx->pc = 0x27f2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27f2b8: 0xafa00024
    ctx->pc = 0x27f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x27f2bc: 0xafa00028
    ctx->pc = 0x27f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x27f2c0: 0x24040044
    ctx->pc = 0x27f2c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 68));
    // 0x27f2c4: 0x200282d
    ctx->pc = 0x27f2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2c8: 0x3c014040
    ctx->pc = 0x27f2c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x27f2cc: 0x44816000
    ctx->pc = 0x27f2ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27f2d0: 0x3c060020
    ctx->pc = 0x27f2d0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32 << 16));
    // 0x27f2d4: 0x34c60004
    ctx->pc = 0x27f2d4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 4));
    // 0x27f2d8: 0xc09f5fa
    ctx->pc = 0x27F2D8u;
    SET_GPR_U32(ctx, 31, 0x27F2E0u);
    ctx->pc = 0x27F2DCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2E0u; }
    }
    if (ctx->pc != 0x27F2E0u) { return; }
    ctx->pc = 0x27F2E0u;
    // 0x27f2e0: 0x40802d
    ctx->pc = 0x27f2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2e4: 0x200202d
    ctx->pc = 0x27f2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2e8: 0x24050045
    ctx->pc = 0x27f2e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 69));
    // 0x27f2ec: 0x302d
    ctx->pc = 0x27f2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2f0: 0xc09f768
    ctx->pc = 0x27F2F0u;
    SET_GPR_U32(ctx, 31, 0x27F2F8u);
    ctx->pc = 0x27F2F4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetHit_0x27dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2F8u; }
    }
    if (ctx->pc != 0x27F2F8u) { return; }
    ctx->pc = 0x27F2F8u;
    // 0x27f2f8: 0x200202d
    ctx->pc = 0x27f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2fc: 0x27a50010
    ctx->pc = 0x27f2fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f300: 0x3c014248
    ctx->pc = 0x27f300u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x27f304: 0x44816000
    ctx->pc = 0x27f304u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27f308: 0x3c013f80
    ctx->pc = 0x27f308u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27f30c: 0x44816800
    ctx->pc = 0x27f30cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27f310: 0xc09f794
    ctx->pc = 0x27F310u;
    SET_GPR_U32(ctx, 31, 0x27F318u);
    ctx->pc = 0x27F314u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F318u; }
    }
    if (ctx->pc != 0x27F318u) { return; }
    ctx->pc = 0x27F318u;
    // 0x27f318: 0x3c030034
    ctx->pc = 0x27f318u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27f31c: 0x24630eb0
    ctx->pc = 0x27f31cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27f320: 0x240200f0
    ctx->pc = 0x27f320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f324: 0x2021018
    ctx->pc = 0x27f324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f328: 0x431021
    ctx->pc = 0x27f328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f32c: 0xac5500ec
    ctx->pc = 0x27f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 21));
    // 0x27f330: 0x200102d
    ctx->pc = 0x27f330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f334: 0xdfbf0090
    ctx->pc = 0x27f334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f338: 0xdfb50080
    ctx->pc = 0x27f338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f33c: 0xdfb40070
    ctx->pc = 0x27f33cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f340: 0xdfb30060
    ctx->pc = 0x27f340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f344: 0xdfb20050
    ctx->pc = 0x27f344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f348: 0xdfb10040
    ctx->pc = 0x27f348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f34c: 0xdfb00030
    ctx->pc = 0x27f34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f350: 0xc7b700b8
    ctx->pc = 0x27f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27f354: 0xc7b600b0
    ctx->pc = 0x27f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27f358: 0xc7b500a8
    ctx->pc = 0x27f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f35c: 0xc7b400a0
    ctx->pc = 0x27f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f360: 0x3e00008
    ctx->pc = 0x27F360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F1A4u: goto label_27f1a4;
            case 0x27F200u: goto label_27f200;
            case 0x27F284u: goto label_27f284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F368u;
}
