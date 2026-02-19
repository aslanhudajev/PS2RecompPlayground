#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcessEffects
// Address: 0x27b098 - 0x27d5fc
void ProcessEffects_0x27b098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27b098u;

    // 0x27b098: 0x27bdfe00
    ctx->pc = 0x27b098u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x27b09c: 0xffbf0190
    ctx->pc = 0x27b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x27b0a0: 0xffbe0180
    ctx->pc = 0x27b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x27b0a4: 0xffb70170
    ctx->pc = 0x27b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x27b0a8: 0xffb60160
    ctx->pc = 0x27b0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x27b0ac: 0xffb50150
    ctx->pc = 0x27b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x27b0b0: 0xffb40140
    ctx->pc = 0x27b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x27b0b4: 0xffb30130
    ctx->pc = 0x27b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x27b0b8: 0xffb20120
    ctx->pc = 0x27b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x27b0bc: 0xffb10110
    ctx->pc = 0x27b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x27b0c0: 0xffb00100
    ctx->pc = 0x27b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x27b0c4: 0xe7bf01f8
    ctx->pc = 0x27b0c4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x27b0c8: 0xe7be01f0
    ctx->pc = 0x27b0c8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x27b0cc: 0xe7bd01e8
    ctx->pc = 0x27b0ccu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x27b0d0: 0xe7bc01e0
    ctx->pc = 0x27b0d0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x27b0d4: 0xe7bb01d8
    ctx->pc = 0x27b0d4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x27b0d8: 0xe7ba01d0
    ctx->pc = 0x27b0d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x27b0dc: 0xe7b901c8
    ctx->pc = 0x27b0dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x27b0e0: 0xe7b801c0
    ctx->pc = 0x27b0e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x27b0e4: 0xe7b701b8
    ctx->pc = 0x27b0e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x27b0e8: 0xe7b601b0
    ctx->pc = 0x27b0e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x27b0ec: 0xe7b501a8
    ctx->pc = 0x27b0ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x27b0f0: 0xe7b401a0
    ctx->pc = 0x27b0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x27b0f4: 0x3c020031
    ctx->pc = 0x27b0f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27b0f8: 0x3c030031
    ctx->pc = 0x27b0f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x27b0fc: 0x8c42ff9c
    ctx->pc = 0x27b0fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x27b100: 0x8c630024
    ctx->pc = 0x27b100u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x27b104: 0x431025
    ctx->pc = 0x27b104u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b108: 0x14400925
    ctx->pc = 0x27B108u;
    {
        const bool branch_taken_0x27b108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27B10Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        if (branch_taken_0x27b108) {
            ctx->pc = 0x27D5A0u;
            goto label_27d5a0;
        }
    }
    ctx->pc = 0x27B110u;
    // 0x27b110: 0x3c020034
    ctx->pc = 0x27b110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27b114: 0x8c424ab0
    ctx->pc = 0x27b114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 19120)));
    // 0x27b118: 0x18400921
    ctx->pc = 0x27B118u;
    {
        const bool branch_taken_0x27b118 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27B11Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x27b118) {
            ctx->pc = 0x27D5A0u;
            goto label_27d5a0;
        }
    }
    ctx->pc = 0x27B120u;
    // 0x27b120: 0x4480e000
    ctx->pc = 0x27b120u;
    *(uint32_t*)&ctx->f[28] = GPR_U32(ctx, 0);
    // 0x27b124: 0x3c013f80
    ctx->pc = 0x27b124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27b128: 0x4481f800
    ctx->pc = 0x27b128u;
    *(uint32_t*)&ctx->f[31] = GPR_U32(ctx, 1);
    // 0x27b12c: 0x3c014000
    ctx->pc = 0x27b12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x27b130: 0x4481f000
    ctx->pc = 0x27b130u;
    *(uint32_t*)&ctx->f[30] = GPR_U32(ctx, 1);
    // 0x27b134: 0x240300f0
    ctx->pc = 0x27b134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
label_27b138:
    // 0x27b138: 0x8fa200e0
    ctx->pc = 0x27b138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27b13c: 0x431818
    ctx->pc = 0x27b13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27b140: 0x3c020034
    ctx->pc = 0x27b140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27b144: 0x24420eb0
    ctx->pc = 0x27b144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27b148: 0x629821
    ctx->pc = 0x27b148u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27b14c: 0xc6600068
    ctx->pc = 0x27b14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b150: 0x461c0036
    ctx->pc = 0x27b150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b154: 0x0
    ctx->pc = 0x27b154u;
    // NOP
    // 0x27b158: 0x45010909
    ctx->pc = 0x27B158u;
    {
        const bool branch_taken_0x27b158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B15Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x27b158) {
            ctx->pc = 0x27D580u;
            goto label_27d580;
        }
    }
    ctx->pc = 0x27B160u;
    // 0x27b160: 0x8e640014
    ctx->pc = 0x27b160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b164: 0x10800906
    ctx->pc = 0x27B164u;
    {
        const bool branch_taken_0x27b164 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B168u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27b164) {
            ctx->pc = 0x27D580u;
            goto label_27d580;
        }
    }
    ctx->pc = 0x27B16Cu;
    // 0x27b16c: 0xafa000e8
    ctx->pc = 0x27b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x27b170: 0xafa000ec
    ctx->pc = 0x27b170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x27b174: 0x3a0282d
    ctx->pc = 0x27b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b178: 0xc0b4302
    ctx->pc = 0x27B178u;
    SET_GPR_U32(ctx, 31, 0x27B180u);
    ctx->pc = 0x27B17Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B180u; }
    }
    if (ctx->pc != 0x27B180u) { return; }
    ctx->pc = 0x27B180u;
    // 0x27b180: 0xc7a00030
    ctx->pc = 0x27b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b184: 0xe7a00080
    ctx->pc = 0x27b184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27b188: 0xc7a00034
    ctx->pc = 0x27b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b18c: 0xe7a00084
    ctx->pc = 0x27b18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x27b190: 0xc7a00038
    ctx->pc = 0x27b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b194: 0xe7a00088
    ctx->pc = 0x27b194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27b198: 0x8e620064
    ctx->pc = 0x27b198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27b19c: 0x3c034000
    ctx->pc = 0x27b19cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x27b1a0: 0x431024
    ctx->pc = 0x27b1a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b1a4: 0x50400030
    ctx->pc = 0x27B1A4u;
    {
        const bool branch_taken_0x27b1a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b1a4) {
            ctx->pc = 0x27B1A8u;
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->pc = 0x27B268u;
            goto label_27b268;
        }
    }
    ctx->pc = 0x27B1ACu;
    // 0x27b1ac: 0x8e6400e4
    ctx->pc = 0x27b1acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x27b1b0: 0x1080002c
    ctx->pc = 0x27B1B0u;
    {
        const bool branch_taken_0x27b1b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B1B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x27b1b0) {
            ctx->pc = 0x27B264u;
            goto label_27b264;
        }
    }
    ctx->pc = 0x27B1B8u;
    // 0x27b1b8: 0xc0b4302
    ctx->pc = 0x27B1B8u;
    SET_GPR_U32(ctx, 31, 0x27B1C0u);
    ctx->pc = 0x27B1BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B1C0u; }
    }
    if (ctx->pc != 0x27B1C0u) { return; }
    ctx->pc = 0x27B1C0u;
    // 0x27b1c0: 0xc7a00070
    ctx->pc = 0x27b1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b1c4: 0xc7a10030
    ctx->pc = 0x27b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b1c8: 0x46010001
    ctx->pc = 0x27b1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b1cc: 0xe7a000a0
    ctx->pc = 0x27b1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27b1d0: 0xc7a00074
    ctx->pc = 0x27b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b1d4: 0xc7a10034
    ctx->pc = 0x27b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b1d8: 0x46010001
    ctx->pc = 0x27b1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b1dc: 0xe7a000a4
    ctx->pc = 0x27b1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27b1e0: 0xc7a00078
    ctx->pc = 0x27b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b1e4: 0xc7a10038
    ctx->pc = 0x27b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b1e8: 0x46010001
    ctx->pc = 0x27b1e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b1ec: 0xe7a000a8
    ctx->pc = 0x27b1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27b1f0: 0xc0b58a4
    ctx->pc = 0x27B1F0u;
    SET_GPR_U32(ctx, 31, 0x27B1F8u);
    ctx->pc = 0x27B1F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B1F8u; }
    }
    if (ctx->pc != 0x27B1F8u) { return; }
    ctx->pc = 0x27B1F8u;
    // 0x27b1f8: 0xc7a100a0
    ctx->pc = 0x27b1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b1fc: 0xc66000a0
    ctx->pc = 0x27b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b200: 0x46000842
    ctx->pc = 0x27b200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27b204: 0xe6610080
    ctx->pc = 0x27b204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
    // 0x27b208: 0xc7a200a4
    ctx->pc = 0x27b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b20c: 0x46001082
    ctx->pc = 0x27b20cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27b210: 0xe6620084
    ctx->pc = 0x27b210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x27b214: 0xc7a300a8
    ctx->pc = 0x27b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b218: 0x460018c2
    ctx->pc = 0x27b218u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x27b21c: 0xe6630088
    ctx->pc = 0x27b21cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x27b220: 0x3c030031
    ctx->pc = 0x27b220u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x27b224: 0xc464ffa8
    ctx->pc = 0x27b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27b228: 0x46040842
    ctx->pc = 0x27b228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27b22c: 0xc7a00080
    ctx->pc = 0x27b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b230: 0x46000840
    ctx->pc = 0x27b230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27b234: 0xe7a10090
    ctx->pc = 0x27b234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27b238: 0x46041082
    ctx->pc = 0x27b238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27b23c: 0xc7a00084
    ctx->pc = 0x27b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b240: 0x46001080
    ctx->pc = 0x27b240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27b244: 0xe7a20094
    ctx->pc = 0x27b244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27b248: 0x460418c2
    ctx->pc = 0x27b248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x27b24c: 0xc7a00088
    ctx->pc = 0x27b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b250: 0x460018c0
    ctx->pc = 0x27b250u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27b254: 0xe7a30098
    ctx->pc = 0x27b254u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27b258: 0x24040001
    ctx->pc = 0x27b258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b25c: 0x10000047
    ctx->pc = 0x27B25Cu;
    {
        const bool branch_taken_0x27b25c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B260u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        if (branch_taken_0x27b25c) {
            ctx->pc = 0x27B37Cu;
            goto label_27b37c;
        }
    }
    ctx->pc = 0x27B264u;
label_27b264:
    // 0x27b264: 0xde620060
    ctx->pc = 0x27b264u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
label_27b268:
    // 0x27b268: 0x3403c000
    ctx->pc = 0x27b268u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 49152));
    // 0x27b26c: 0x3183c
    ctx->pc = 0x27b26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x27b270: 0x431024
    ctx->pc = 0x27b270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b274: 0x1043003c
    ctx->pc = 0x27B274u;
    {
        const bool branch_taken_0x27b274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x27B278u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27b274) {
            ctx->pc = 0x27B368u;
            goto label_27b368;
        }
    }
    ctx->pc = 0x27B27Cu;
    // 0x27b27c: 0xc6600080
    ctx->pc = 0x27b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b280: 0x44800800
    ctx->pc = 0x27b280u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x27b284: 0x46010032
    ctx->pc = 0x27b284u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b288: 0x0
    ctx->pc = 0x27b288u;
    // NOP
    // 0x27b28c: 0x4502000c
    ctx->pc = 0x27B28Cu;
    {
        const bool branch_taken_0x27b28c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b28c) {
            ctx->pc = 0x27B290u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27B2C0u;
            goto label_27b2c0;
        }
    }
    ctx->pc = 0x27B294u;
    // 0x27b294: 0xc6600084
    ctx->pc = 0x27b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b298: 0x46010032
    ctx->pc = 0x27b298u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b29c: 0x0
    ctx->pc = 0x27b29cu;
    // NOP
    // 0x27b2a0: 0x45020007
    ctx->pc = 0x27B2A0u;
    {
        const bool branch_taken_0x27b2a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b2a0) {
            ctx->pc = 0x27B2A4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27B2C0u;
            goto label_27b2c0;
        }
    }
    ctx->pc = 0x27B2A8u;
    // 0x27b2a8: 0xc6600088
    ctx->pc = 0x27b2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b2ac: 0x46010032
    ctx->pc = 0x27b2acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b2b0: 0x0
    ctx->pc = 0x27b2b0u;
    // NOP
    // 0x27b2b4: 0x45010015
    ctx->pc = 0x27B2B4u;
    {
        const bool branch_taken_0x27b2b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B2B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27b2b4) {
            ctx->pc = 0x27B30Cu;
            goto label_27b30c;
        }
    }
    ctx->pc = 0x27B2BCu;
    // 0x27b2bc: 0xc6610080
    ctx->pc = 0x27b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b2c0:
    // 0x27b2c0: 0x3c050031
    ctx->pc = 0x27b2c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x27b2c4: 0xc4a2ffa8
    ctx->pc = 0x27b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b2c8: 0x46020842
    ctx->pc = 0x27b2c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27b2cc: 0xc7a00080
    ctx->pc = 0x27b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b2d0: 0x46000840
    ctx->pc = 0x27b2d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27b2d4: 0xe7a10090
    ctx->pc = 0x27b2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27b2d8: 0xc6600084
    ctx->pc = 0x27b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b2dc: 0x46020002
    ctx->pc = 0x27b2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27b2e0: 0xc7a10084
    ctx->pc = 0x27b2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b2e4: 0x46010000
    ctx->pc = 0x27b2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b2e8: 0xe7a00094
    ctx->pc = 0x27b2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27b2ec: 0xc6600088
    ctx->pc = 0x27b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b2f0: 0x46020002
    ctx->pc = 0x27b2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27b2f4: 0xc7a10088
    ctx->pc = 0x27b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b2f8: 0x46010000
    ctx->pc = 0x27b2f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b2fc: 0xe7a00098
    ctx->pc = 0x27b2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27b300: 0x24020001
    ctx->pc = 0x27b300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b304: 0x10000006
    ctx->pc = 0x27B304u;
    {
        const bool branch_taken_0x27b304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B308u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        if (branch_taken_0x27b304) {
            ctx->pc = 0x27B320u;
            goto label_27b320;
        }
    }
    ctx->pc = 0x27B30Cu;
label_27b30c:
    // 0x27b30c: 0xe7a00090
    ctx->pc = 0x27b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27b310: 0xc7a00084
    ctx->pc = 0x27b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b314: 0xe7a00094
    ctx->pc = 0x27b314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27b318: 0xc7a00088
    ctx->pc = 0x27b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b31c: 0xe7a00098
    ctx->pc = 0x27b31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_27b320:
    // 0x27b320: 0xc66100a4
    ctx->pc = 0x27b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b324: 0x3c030031
    ctx->pc = 0x27b324u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x27b328: 0xc462ffa8
    ctx->pc = 0x27b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b32c: 0x46020842
    ctx->pc = 0x27b32cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27b330: 0xc6600080
    ctx->pc = 0x27b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b334: 0x46010001
    ctx->pc = 0x27b334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b338: 0xe6600080
    ctx->pc = 0x27b338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
    // 0x27b33c: 0xc66100a0
    ctx->pc = 0x27b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b340: 0x46020842
    ctx->pc = 0x27b340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27b344: 0xc6600084
    ctx->pc = 0x27b344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b348: 0x46010001
    ctx->pc = 0x27b348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b34c: 0xe6600084
    ctx->pc = 0x27b34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x27b350: 0xc66100a8
    ctx->pc = 0x27b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b354: 0x46020842
    ctx->pc = 0x27b354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27b358: 0xc6600088
    ctx->pc = 0x27b358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b35c: 0x46010001
    ctx->pc = 0x27b35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b360: 0x10000006
    ctx->pc = 0x27B360u;
    {
        const bool branch_taken_0x27b360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B364u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
        if (branch_taken_0x27b360) {
            ctx->pc = 0x27B37Cu;
            goto label_27b37c;
        }
    }
    ctx->pc = 0x27B368u;
label_27b368:
    // 0x27b368: 0xe7a00090
    ctx->pc = 0x27b368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27b36c: 0xc7a00084
    ctx->pc = 0x27b36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b370: 0xe7a00094
    ctx->pc = 0x27b370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27b374: 0xc7a00088
    ctx->pc = 0x27b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b378: 0xe7a00098
    ctx->pc = 0x27b378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_27b37c:
    // 0x27b37c: 0x8fa400ec
    ctx->pc = 0x27b37cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x27b380: 0x1080000f
    ctx->pc = 0x27B380u;
    {
        const bool branch_taken_0x27b380 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B384u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27b380) {
            ctx->pc = 0x27B3C0u;
            goto label_27b3c0;
        }
    }
    ctx->pc = 0x27B388u;
    // 0x27b388: 0xc6620098
    ctx->pc = 0x27b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b38c: 0x46021080
    ctx->pc = 0x27b38cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x27b390: 0x46001080
    ctx->pc = 0x27b390u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27b394: 0x3c020034
    ctx->pc = 0x27b394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27b398: 0xc440e88c
    ctx->pc = 0x27b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b39c: 0x3c0141c8
    ctx->pc = 0x27b39cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16840 << 16));
    // 0x27b3a0: 0x44810800
    ctx->pc = 0x27b3a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27b3a4: 0x46010001
    ctx->pc = 0x27b3a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b3a8: 0x46001034
    ctx->pc = 0x27b3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b3ac: 0x0
    ctx->pc = 0x27b3acu;
    // NOP
    // 0x27b3b0: 0x45020004
    ctx->pc = 0x27B3B0u;
    {
        const bool branch_taken_0x27b3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b3b0) {
            ctx->pc = 0x27B3B4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B3C4u;
            goto label_27b3c4;
        }
    }
    ctx->pc = 0x27B3B8u;
    // 0x27b3b8: 0x10000856
    ctx->pc = 0x27B3B8u;
    {
        const bool branch_taken_0x27b3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B3BCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
        if (branch_taken_0x27b3b8) {
            ctx->pc = 0x27D514u;
            goto label_27d514;
        }
    }
    ctx->pc = 0x27B3C0u;
label_27b3c0:
    // 0x27b3c0: 0x8e620064
    ctx->pc = 0x27b3c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27b3c4:
    // 0x27b3c4: 0x3c030002
    ctx->pc = 0x27b3c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x27b3c8: 0x431024
    ctx->pc = 0x27b3c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b3cc: 0x10400008
    ctx->pc = 0x27B3CCu;
    {
        const bool branch_taken_0x27b3cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B3D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27b3cc) {
            ctx->pc = 0x27B3F0u;
            goto label_27b3f0;
        }
    }
    ctx->pc = 0x27B3D4u;
    // 0x27b3d4: 0x26650080
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 128));
    // 0x27b3d8: 0x3c060034
    ctx->pc = 0x27b3d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x27b3dc: 0xc0b5978
    ctx->pc = 0x27B3DCu;
    SET_GPR_U32(ctx, 31, 0x27B3E4u);
    ctx->pc = 0x27B3E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294962064));
    ctx->pc = 0x2D65E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDirMatrix_0x2d65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B3E4u; }
    }
    if (ctx->pc != 0x27B3E4u) { return; }
    ctx->pc = 0x27B3E4u;
    // 0x27b3e4: 0x24050001
    ctx->pc = 0x27b3e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b3e8: 0x10000026
    ctx->pc = 0x27B3E8u;
    {
        const bool branch_taken_0x27b3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B3ECu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
        if (branch_taken_0x27b3e8) {
            ctx->pc = 0x27B484u;
            goto label_27b484;
        }
    }
    ctx->pc = 0x27B3F0u;
label_27b3f0:
    // 0x27b3f0: 0xc660008c
    ctx->pc = 0x27b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b3f4: 0x461c0032
    ctx->pc = 0x27b3f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b3f8: 0x0
    ctx->pc = 0x27b3f8u;
    // NOP
    // 0x27b3fc: 0x4503000a
    ctx->pc = 0x27B3FCu;
    {
        const bool branch_taken_0x27b3fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b3fc) {
            ctx->pc = 0x27B400u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27B428u;
            goto label_27b428;
        }
    }
    ctx->pc = 0x27B404u;
    // 0x27b404: 0x46000007
    ctx->pc = 0x27b404u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27b408: 0x3c020031
    ctx->pc = 0x27b408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27b40c: 0xc44cffa8
    ctx->pc = 0x27b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27b410: 0x460c0302
    ctx->pc = 0x27b410u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x27b414: 0xc0b5660
    ctx->pc = 0x27B414u;
    SET_GPR_U32(ctx, 31, 0x27B41Cu);
    ctx->pc = 0x27B418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchMat3_0x2d5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B41Cu; }
    }
    if (ctx->pc != 0x27B41Cu) { return; }
    ctx->pc = 0x27B41Cu;
    // 0x27b41c: 0x24030001
    ctx->pc = 0x27b41cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b420: 0xafa300ec
    ctx->pc = 0x27b420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x27b424: 0xc6600090
    ctx->pc = 0x27b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b428:
    // 0x27b428: 0x461c0032
    ctx->pc = 0x27b428u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b42c: 0x0
    ctx->pc = 0x27b42cu;
    // NOP
    // 0x27b430: 0x45030009
    ctx->pc = 0x27B430u;
    {
        const bool branch_taken_0x27b430 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b430) {
            ctx->pc = 0x27B434u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27B458u;
            goto label_27b458;
        }
    }
    ctx->pc = 0x27B438u;
    // 0x27b438: 0x3c040031
    ctx->pc = 0x27b438u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x27b43c: 0xc48cffa8
    ctx->pc = 0x27b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27b440: 0x460c0302
    ctx->pc = 0x27b440u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x27b444: 0xc0b5632
    ctx->pc = 0x27B444u;
    SET_GPR_U32(ctx, 31, 0x27B44Cu);
    ctx->pc = 0x27B448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B44Cu; }
    }
    if (ctx->pc != 0x27B44Cu) { return; }
    ctx->pc = 0x27B44Cu;
    // 0x27b44c: 0x24050001
    ctx->pc = 0x27b44cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b450: 0xafa500ec
    ctx->pc = 0x27b450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x27b454: 0xc6600094
    ctx->pc = 0x27b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b458:
    // 0x27b458: 0x461c0032
    ctx->pc = 0x27b458u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b45c: 0x0
    ctx->pc = 0x27b45cu;
    // NOP
    // 0x27b460: 0x45030009
    ctx->pc = 0x27B460u;
    {
        const bool branch_taken_0x27b460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b460) {
            ctx->pc = 0x27B464u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27B488u;
            goto label_27b488;
        }
    }
    ctx->pc = 0x27B468u;
    // 0x27b468: 0x3c020031
    ctx->pc = 0x27b468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27b46c: 0xc44cffa8
    ctx->pc = 0x27b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27b470: 0x460c0302
    ctx->pc = 0x27b470u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x27b474: 0xc0b568c
    ctx->pc = 0x27B474u;
    SET_GPR_U32(ctx, 31, 0x27B47Cu);
    ctx->pc = 0x27B478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        RollMat3_0x2d5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B47Cu; }
    }
    if (ctx->pc != 0x27B47Cu) { return; }
    ctx->pc = 0x27B47Cu;
    // 0x27b47c: 0x24030001
    ctx->pc = 0x27b47cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b480: 0xafa300ec
    ctx->pc = 0x27b480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
label_27b484:
    // 0x27b484: 0xc6600068
    ctx->pc = 0x27b484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b488:
    // 0x27b488: 0x3c040031
    ctx->pc = 0x27b488u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x27b48c: 0xc481ffb4
    ctx->pc = 0x27b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b490: 0x8e630064
    ctx->pc = 0x27b490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27b494: 0x30620020
    ctx->pc = 0x27b494u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x27b498: 0x10400014
    ctx->pc = 0x27B498u;
    {
        const bool branch_taken_0x27b498 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B49Cu;
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x27b498) {
            ctx->pc = 0x27B4ECu;
            goto label_27b4ec;
        }
    }
    ctx->pc = 0x27B4A0u;
    // 0x27b4a0: 0x30620010
    ctx->pc = 0x27b4a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x27b4a4: 0x1040000a
    ctx->pc = 0x27B4A4u;
    {
        const bool branch_taken_0x27b4a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B4A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x27b4a4) {
            ctx->pc = 0x27B4D0u;
            goto label_27b4d0;
        }
    }
    ctx->pc = 0x27B4ACu;
    // 0x27b4ac: 0xafa500e4
    ctx->pc = 0x27b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
    // 0x27b4b0: 0x3c013f80
    ctx->pc = 0x27b4b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27b4b4: 0x44810000
    ctx->pc = 0x27b4b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b4b8: 0x46160034
    ctx->pc = 0x27b4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b4bc: 0x0
    ctx->pc = 0x27b4bcu;
    // NOP
    // 0x27b4c0: 0x45000016
    ctx->pc = 0x27B4C0u;
    {
        const bool branch_taken_0x27b4c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B4C4u;
        ctx->f[26] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x27b4c0) {
            ctx->pc = 0x27B51Cu;
            goto label_27b51c;
        }
    }
    ctx->pc = 0x27B4C8u;
    // 0x27b4c8: 0x10000014
    ctx->pc = 0x27B4C8u;
    {
        const bool branch_taken_0x27b4c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B4CCu;
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x27b4c8) {
            ctx->pc = 0x27B51Cu;
            goto label_27b51c;
        }
    }
    ctx->pc = 0x27B4D0u;
label_27b4d0:
    // 0x27b4d0: 0x24020001
    ctx->pc = 0x27b4d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b4d4: 0xafa200e4
    ctx->pc = 0x27b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x27b4d8: 0x3c013d88
    ctx->pc = 0x27b4d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15752 << 16));
    // 0x27b4dc: 0x342188b5
    ctx->pc = 0x27b4dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34997));
    // 0x27b4e0: 0x44810000
    ctx->pc = 0x27b4e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b4e4: 0x1000000d
    ctx->pc = 0x27B4E4u;
    {
        const bool branch_taken_0x27b4e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B4E8u;
        ctx->f[26] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x27b4e4) {
            ctx->pc = 0x27B51Cu;
            goto label_27b51c;
        }
    }
    ctx->pc = 0x27B4ECu;
label_27b4ec:
    // 0x27b4ec: 0xc6600078
    ctx->pc = 0x27b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b4f0: 0x44800800
    ctx->pc = 0x27b4f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x27b4f4: 0x46000834
    ctx->pc = 0x27b4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b4f8: 0x0
    ctx->pc = 0x27b4f8u;
    // NOP
    // 0x27b4fc: 0x45000004
    ctx->pc = 0x27B4FCu;
    {
        const bool branch_taken_0x27b4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B500u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x27b4fc) {
            ctx->pc = 0x27B510u;
            goto label_27b510;
        }
    }
    ctx->pc = 0x27B504u;
    // 0x27b504: 0xafa300e4
    ctx->pc = 0x27b504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x27b508: 0x10000004
    ctx->pc = 0x27B508u;
    {
        const bool branch_taken_0x27b508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B50Cu;
        ctx->f[26] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x27b508) {
            ctx->pc = 0x27B51Cu;
            goto label_27b51c;
        }
    }
    ctx->pc = 0x27B510u;
label_27b510:
    // 0x27b510: 0xafa000e4
    ctx->pc = 0x27b510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x27b514: 0x3c013e80
    ctx->pc = 0x27b514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x27b518: 0x4481d000
    ctx->pc = 0x27b518u;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 1);
label_27b51c:
    // 0x27b51c: 0x8e6300b4
    ctx->pc = 0x27b51cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27b520: 0x3c020010
    ctx->pc = 0x27b520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x27b524: 0x621824
    ctx->pc = 0x27b524u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27b528: 0xafa300f0
    ctx->pc = 0x27b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x27b52c: 0x866400be
    ctx->pc = 0x27b52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
    // 0x27b530: 0x1880001a
    ctx->pc = 0x27B530u;
    {
        const bool branch_taken_0x27b530 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27B534u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27b530) {
            ctx->pc = 0x27B59Cu;
            goto label_27b59c;
        }
    }
    ctx->pc = 0x27B538u;
    // 0x27b538: 0x24634ab8
    ctx->pc = 0x27b538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19128));
    // 0x27b53c: 0x2402000c
    ctx->pc = 0x27b53cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27b540: 0x821018
    ctx->pc = 0x27b540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27b544: 0x431021
    ctx->pc = 0x27b544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b548: 0x8c430000
    ctx->pc = 0x27b548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b54c: 0x10600014
    ctx->pc = 0x27B54Cu;
    {
        const bool branch_taken_0x27b54c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B550u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
        if (branch_taken_0x27b54c) {
            ctx->pc = 0x27B5A0u;
            goto label_27b5a0;
        }
    }
    ctx->pc = 0x27B554u;
    // 0x27b554: 0x30420020
    ctx->pc = 0x27b554u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x27b558: 0x54400011
    ctx->pc = 0x27B558u;
    {
        const bool branch_taken_0x27b558 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27b558) {
            ctx->pc = 0x27B55Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B5A0u;
            goto label_27b5a0;
        }
    }
    ctx->pc = 0x27B560u;
    // 0x27b560: 0x8fa400f0
    ctx->pc = 0x27b560u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b564: 0x5480000e
    ctx->pc = 0x27B564u;
    {
        const bool branch_taken_0x27b564 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x27b564) {
            ctx->pc = 0x27B568u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B5A0u;
            goto label_27b5a0;
        }
    }
    ctx->pc = 0x27B56Cu;
    // 0x27b56c: 0x8c620000
    ctx->pc = 0x27b56cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b570: 0x84420020
    ctx->pc = 0x27b570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27b574: 0x44820800
    ctx->pc = 0x27b574u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x27b578: 0x46800860
    ctx->pc = 0x27b578u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x27b57c: 0x4601e034
    ctx->pc = 0x27b57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b580: 0x0
    ctx->pc = 0x27b580u;
    // NOP
    // 0x27b584: 0x45020006
    ctx->pc = 0x27B584u;
    {
        const bool branch_taken_0x27b584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b584) {
            ctx->pc = 0x27B588u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B5A0u;
            goto label_27b5a0;
        }
    }
    ctx->pc = 0x27B58Cu;
    // 0x27b58c: 0x3c013d08
    ctx->pc = 0x27b58cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x27b590: 0x34218889
    ctx->pc = 0x27b590u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x27b594: 0x44810000
    ctx->pc = 0x27b594u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b598: 0x46000e82
    ctx->pc = 0x27b598u;
    ctx->f[26] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27b59c:
    // 0x27b59c: 0x8e620064
    ctx->pc = 0x27b59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27b5a0:
    // 0x27b5a0: 0x3c030080
    ctx->pc = 0x27b5a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x27b5a4: 0x431024
    ctx->pc = 0x27b5a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b5a8: 0x10400004
    ctx->pc = 0x27B5A8u;
    {
        const bool branch_taken_0x27b5a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B5ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x27b5a8) {
            ctx->pc = 0x27B5BCu;
            goto label_27b5bc;
        }
    }
    ctx->pc = 0x27B5B0u;
    // 0x27b5b0: 0x4480d800
    ctx->pc = 0x27b5b0u;
    *(uint32_t*)&ctx->f[27] = GPR_U32(ctx, 0);
    // 0x27b5b4: 0x1000001b
    ctx->pc = 0x27B5B4u;
    {
        const bool branch_taken_0x27b5b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B5B8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 228)));
        if (branch_taken_0x27b5b4) {
            ctx->pc = 0x27B624u;
            goto label_27b624;
        }
    }
    ctx->pc = 0x27B5BCu;
label_27b5bc:
    // 0x27b5bc: 0x8fa500f0
    ctx->pc = 0x27b5bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27b5c0: 0x50a00005
    ctx->pc = 0x27B5C0u;
    {
        const bool branch_taken_0x27b5c0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b5c0) {
            ctx->pc = 0x27B5C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B5D8u;
            goto label_27b5d8;
        }
    }
    ctx->pc = 0x27B5C8u;
    // 0x27b5c8: 0x3c014040
    ctx->pc = 0x27b5c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x27b5cc: 0x44810000
    ctx->pc = 0x27b5ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b5d0: 0x10000012
    ctx->pc = 0x27B5D0u;
    {
        const bool branch_taken_0x27b5d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B5D4u;
        ctx->f[27] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
        if (branch_taken_0x27b5d0) {
            ctx->pc = 0x27B61Cu;
            goto label_27b61c;
        }
    }
    ctx->pc = 0x27B5D8u;
label_27b5d8:
    // 0x27b5d8: 0x30420020
    ctx->pc = 0x27b5d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x27b5dc: 0x10400007
    ctx->pc = 0x27B5DCu;
    {
        const bool branch_taken_0x27b5dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b5dc) {
            ctx->pc = 0x27B5FCu;
            goto label_27b5fc;
        }
    }
    ctx->pc = 0x27B5E4u;
    // 0x27b5e4: 0x3c013f80
    ctx->pc = 0x27b5e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27b5e8: 0x44816000
    ctx->pc = 0x27b5e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27b5ec: 0x460cd034
    ctx->pc = 0x27b5ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b5f0: 0x0
    ctx->pc = 0x27b5f0u;
    // NOP
    // 0x27b5f4: 0x45010009
    ctx->pc = 0x27B5F4u;
    {
        const bool branch_taken_0x27b5f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B5F8u;
        ctx->f[27] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x27b5f4) {
            ctx->pc = 0x27B61Cu;
            goto label_27b61c;
        }
    }
    ctx->pc = 0x27B5FCu;
label_27b5fc:
    // 0x27b5fc: 0x3c013e4c
    ctx->pc = 0x27b5fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x27b600: 0x3421cccd
    ctx->pc = 0x27b600u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27b604: 0x44810000
    ctx->pc = 0x27b604u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b608: 0x4600d034
    ctx->pc = 0x27b608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b60c: 0x0
    ctx->pc = 0x27b60cu;
    // NOP
    // 0x27b610: 0x45000002
    ctx->pc = 0x27B610u;
    {
        const bool branch_taken_0x27b610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B614u;
        ctx->f[27] = FPU_MOV_S(ctx->f[26]);
        if (branch_taken_0x27b610) {
            ctx->pc = 0x27B61Cu;
            goto label_27b61c;
        }
    }
    ctx->pc = 0x27B618u;
    // 0x27b618: 0x460006c6
    ctx->pc = 0x27b618u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
label_27b61c:
    // 0x27b61c: 0x24020002
    ctx->pc = 0x27b61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b620: 0x8fa300e4
    ctx->pc = 0x27b620u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_27b624:
    // 0x27b624: 0x10620003
    ctx->pc = 0x27B624u;
    {
        const bool branch_taken_0x27b624 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27B628u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x27b624) {
            ctx->pc = 0x27B634u;
            goto label_27b634;
        }
    }
    ctx->pc = 0x27B62Cu;
    // 0x27b62c: 0x14620003
    ctx->pc = 0x27B62Cu;
    {
        const bool branch_taken_0x27b62c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27B630u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 228)));
        if (branch_taken_0x27b62c) {
            ctx->pc = 0x27B63Cu;
            goto label_27b63c;
        }
    }
    ctx->pc = 0x27B634u;
label_27b634:
    // 0x27b634: 0x10000046
    ctx->pc = 0x27B634u;
    {
        const bool branch_taken_0x27b634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B638u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        if (branch_taken_0x27b634) {
            ctx->pc = 0x27B750u;
            goto label_27b750;
        }
    }
    ctx->pc = 0x27B63Cu;
label_27b63c:
    // 0x27b63c: 0x50800044
    ctx->pc = 0x27B63Cu;
    {
        const bool branch_taken_0x27b63c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b63c) {
            ctx->pc = 0x27B640u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
            ctx->pc = 0x27B750u;
            goto label_27b750;
        }
    }
    ctx->pc = 0x27B644u;
    // 0x27b644: 0xc661007c
    ctx->pc = 0x27b644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b648: 0xc660006c
    ctx->pc = 0x27b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b64c: 0x460100c1
    ctx->pc = 0x27b64cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27b650: 0x46161834
    ctx->pc = 0x27b650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b654: 0x45000004
    ctx->pc = 0x27B654u;
    {
        const bool branch_taken_0x27b654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b654) {
            ctx->pc = 0x27B668u;
            goto label_27b668;
        }
    }
    ctx->pc = 0x27B65Cu;
    // 0x27b65c: 0x44801000
    ctx->pc = 0x27b65cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x27b660: 0x1000000c
    ctx->pc = 0x27B660u;
    {
        const bool branch_taken_0x27b660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b660) {
            ctx->pc = 0x27B694u;
            goto label_27b694;
        }
    }
    ctx->pc = 0x27B668u;
label_27b668:
    // 0x27b668: 0x3c013d08
    ctx->pc = 0x27b668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x27b66c: 0x34218889
    ctx->pc = 0x27b66cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x27b670: 0x44810000
    ctx->pc = 0x27b670u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b674: 0x46001836
    ctx->pc = 0x27b674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b678: 0x3c013f80
    ctx->pc = 0x27b678u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27b67c: 0x44811000
    ctx->pc = 0x27b67cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x27b680: 0x45010004
    ctx->pc = 0x27B680u;
    {
        const bool branch_taken_0x27b680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b680) {
            ctx->pc = 0x27B694u;
            goto label_27b694;
        }
    }
    ctx->pc = 0x27B688u;
    // 0x27b688: 0x0
    ctx->pc = 0x27b688u;
    // NOP
    // 0x27b68c: 0x0
    ctx->pc = 0x27b68cu;
    // NOP
    // 0x27b690: 0x4603b083
    ctx->pc = 0x27b690u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[2] = ctx->f[22] / ctx->f[3];
label_27b694:
    // 0x27b694: 0x3c013ea8
    ctx->pc = 0x27b694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16040 << 16));
    // 0x27b698: 0x3421f5c3
    ctx->pc = 0x27b698u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62915));
    // 0x27b69c: 0x44816000
    ctx->pc = 0x27b69cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27b6a0: 0x46026034
    ctx->pc = 0x27b6a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b6a4: 0x4500000a
    ctx->pc = 0x27B6A4u;
    {
        const bool branch_taken_0x27b6a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b6a4) {
            ctx->pc = 0x27B6D0u;
            goto label_27b6d0;
        }
    }
    ctx->pc = 0x27B6ACu;
    // 0x27b6ac: 0x4602f801
    ctx->pc = 0x27b6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], ctx->f[2]);
    // 0x27b6b0: 0x460c0000
    ctx->pc = 0x27b6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x27b6b4: 0xc66100b8
    ctx->pc = 0x27b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b6b8: 0x46010602
    ctx->pc = 0x27b6b8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27b6bc: 0x460c1741
    ctx->pc = 0x27b6bcu;
    ctx->f[29] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x27b6c0: 0x3c013fc0
    ctx->pc = 0x27b6c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x27b6c4: 0x44810000
    ctx->pc = 0x27b6c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b6c8: 0x10000003
    ctx->pc = 0x27B6C8u;
    {
        const bool branch_taken_0x27b6c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B6CCu;
        ctx->f[29] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
        if (branch_taken_0x27b6c8) {
            ctx->pc = 0x27B6D8u;
            goto label_27b6d8;
        }
    }
    ctx->pc = 0x27B6D0u;
label_27b6d0:
    // 0x27b6d0: 0x4480c000
    ctx->pc = 0x27b6d0u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
    // 0x27b6d4: 0x4600c746
    ctx->pc = 0x27b6d4u;
    ctx->f[29] = FPU_MOV_S(ctx->f[24]);
label_27b6d8:
    // 0x27b6d8: 0x3c013d08
    ctx->pc = 0x27b6d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x27b6dc: 0x34218889
    ctx->pc = 0x27b6dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x27b6e0: 0x44810000
    ctx->pc = 0x27b6e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b6e4: 0x46001836
    ctx->pc = 0x27b6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b6e8: 0x45000005
    ctx->pc = 0x27B6E8u;
    {
        const bool branch_taken_0x27b6e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b6e8) {
            ctx->pc = 0x27B700u;
            goto label_27b700;
        }
    }
    ctx->pc = 0x27B6F0u;
    // 0x27b6f0: 0x3c013f80
    ctx->pc = 0x27b6f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27b6f4: 0x44811000
    ctx->pc = 0x27b6f4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x27b6f8: 0x10000019
    ctx->pc = 0x27B6F8u;
    {
        const bool branch_taken_0x27b6f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B6FCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27b6f8) {
            ctx->pc = 0x27B760u;
            goto label_27b760;
        }
    }
    ctx->pc = 0x27B700u;
label_27b700:
    // 0x27b700: 0x4603b034
    ctx->pc = 0x27b700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b704: 0x4500000f
    ctx->pc = 0x27B704u;
    {
        const bool branch_taken_0x27b704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b704) {
            ctx->pc = 0x27B744u;
            goto label_27b744;
        }
    }
    ctx->pc = 0x27B70Cu;
    // 0x27b70c: 0x0
    ctx->pc = 0x27b70cu;
    // NOP
    // 0x27b710: 0x0
    ctx->pc = 0x27b710u;
    // NOP
    // 0x27b714: 0x4603b003
    ctx->pc = 0x27b714u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[3];
    // 0x27b718: 0x4600f881
    ctx->pc = 0x27b718u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
    // 0x27b71c: 0x3c013f00
    ctx->pc = 0x27b71cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27b720: 0x44810000
    ctx->pc = 0x27b720u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b724: 0x46001034
    ctx->pc = 0x27b724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b728: 0x0
    ctx->pc = 0x27b728u;
    // NOP
    // 0x27b72c: 0x45020003
    ctx->pc = 0x27B72Cu;
    {
        const bool branch_taken_0x27b72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b72c) {
            ctx->pc = 0x27B730u;
            ctx->f[0] = FPU_SUB_S(ctx->f[31], ctx->f[2]);
            ctx->pc = 0x27B73Cu;
            goto label_27b73c;
        }
    }
    ctx->pc = 0x27B734u;
    // 0x27b734: 0x10000009
    ctx->pc = 0x27B734u;
    {
        const bool branch_taken_0x27b734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B738u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        if (branch_taken_0x27b734) {
            ctx->pc = 0x27B75Cu;
            goto label_27b75c;
        }
    }
    ctx->pc = 0x27B73Cu;
label_27b73c:
    // 0x27b73c: 0x10000007
    ctx->pc = 0x27B73Cu;
    {
        const bool branch_taken_0x27b73c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B740u;
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        if (branch_taken_0x27b73c) {
            ctx->pc = 0x27B75Cu;
            goto label_27b75c;
        }
    }
    ctx->pc = 0x27B744u;
label_27b744:
    // 0x27b744: 0x44801000
    ctx->pc = 0x27b744u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x27b748: 0x10000005
    ctx->pc = 0x27B748u;
    {
        const bool branch_taken_0x27b748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B74Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27b748) {
            ctx->pc = 0x27B760u;
            goto label_27b760;
        }
    }
    ctx->pc = 0x27B750u;
label_27b750:
    // 0x27b750: 0x3c013f80
    ctx->pc = 0x27b750u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27b754: 0x4481e800
    ctx->pc = 0x27b754u;
    *(uint32_t*)&ctx->f[29] = GPR_U32(ctx, 1);
    // 0x27b758: 0x4600e886
    ctx->pc = 0x27b758u;
    ctx->f[2] = FPU_MOV_S(ctx->f[29]);
label_27b75c:
    // 0x27b75c: 0xc66000ac
    ctx->pc = 0x27b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b760:
    // 0x27b760: 0xc6630010
    ctx->pc = 0x27b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b764: 0x4603e034
    ctx->pc = 0x27b764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b768: 0x0
    ctx->pc = 0x27b768u;
    // NOP
    // 0x27b76c: 0x45000011
    ctx->pc = 0x27B76Cu;
    {
        const bool branch_taken_0x27b76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B770u;
        ctx->f[23] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
        if (branch_taken_0x27b76c) {
            ctx->pc = 0x27B7B4u;
            goto label_27b7b4;
        }
    }
    ctx->pc = 0x27B774u;
    // 0x27b774: 0xc7a00090
    ctx->pc = 0x27b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b778: 0xe7a000c0
    ctx->pc = 0x27b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27b77c: 0xc7a10094
    ctx->pc = 0x27b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b780: 0xc7a00098
    ctx->pc = 0x27b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b784: 0xe7a000c8
    ctx->pc = 0x27b784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x27b788: 0x461f0840
    ctx->pc = 0x27b788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[31]);
    // 0x27b78c: 0xe7a100c4
    ctx->pc = 0x27b78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x27b790: 0x3c020034
    ctx->pc = 0x27b790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27b794: 0xc44c0e7c
    ctx->pc = 0x27b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27b798: 0x460c1b02
    ctx->pc = 0x27b798u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x27b79c: 0x3c020034
    ctx->pc = 0x27b79cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27b7a0: 0x27a400c0
    ctx->pc = 0x27b7a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27b7a4: 0x260282d
    ctx->pc = 0x27b7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7a8: 0x46026302
    ctx->pc = 0x27b7a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x27b7ac: 0xc0abb54
    ctx->pc = 0x27B7ACu;
    SET_GPR_U32(ctx, 31, 0x27B7B4u);
    ctx->pc = 0x27B7B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2AED50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightNew_0x2aed50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7B4u; }
    }
    if (ctx->pc != 0x27B7B4u) { return; }
    ctx->pc = 0x27B7B4u;
label_27b7b4:
    // 0x27b7b4: 0x8e6200e0
    ctx->pc = 0x27b7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x27b7b8: 0x10400003
    ctx->pc = 0x27B7B8u;
    {
        const bool branch_taken_0x27b7b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B7BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x27b7b8) {
            ctx->pc = 0x27B7C8u;
            goto label_27b7c8;
        }
    }
    ctx->pc = 0x27B7C0u;
    // 0x27b7c0: 0xc09fe6c
    ctx->pc = 0x27B7C0u;
    SET_GPR_U32(ctx, 31, 0x27B7C8u);
    ctx->pc = 0x27B7C4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x27F9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxUpdate_0x27f9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7C8u; }
    }
    if (ctx->pc != 0x27B7C8u) { return; }
    ctx->pc = 0x27B7C8u;
label_27b7c8:
    // 0x27b7c8: 0xc66000c8
    ctx->pc = 0x27b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b7cc: 0x4600e034
    ctx->pc = 0x27b7ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b7d0: 0x0
    ctx->pc = 0x27b7d0u;
    // NOP
    // 0x27b7d4: 0x45020015
    ctx->pc = 0x27B7D4u;
    {
        const bool branch_taken_0x27b7d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b7d4) {
            ctx->pc = 0x27B7D8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B82Cu;
            goto label_27b82c;
        }
    }
    ctx->pc = 0x27B7DCu;
    // 0x27b7dc: 0x866200be
    ctx->pc = 0x27b7dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
    // 0x27b7e0: 0x5c400012
    ctx->pc = 0x27B7E0u;
    {
        const bool branch_taken_0x27b7e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x27b7e0) {
            ctx->pc = 0x27B7E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B82Cu;
            goto label_27b82c;
        }
    }
    ctx->pc = 0x27B7E8u;
    // 0x27b7e8: 0x4600b034
    ctx->pc = 0x27b7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b7ec: 0x0
    ctx->pc = 0x27b7ecu;
    // NOP
    // 0x27b7f0: 0x4502000e
    ctx->pc = 0x27B7F0u;
    {
        const bool branch_taken_0x27b7f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b7f0) {
            ctx->pc = 0x27B7F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B82Cu;
            goto label_27b82c;
        }
    }
    ctx->pc = 0x27B7F8u;
    // 0x27b7f8: 0x0
    ctx->pc = 0x27b7f8u;
    // NOP
    // 0x27b7fc: 0x0
    ctx->pc = 0x27b7fcu;
    // NOP
    // 0x27b800: 0x4600b003
    ctx->pc = 0x27b800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x27b804: 0x4600f881
    ctx->pc = 0x27b804u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
    // 0x27b808: 0x3c01437f
    ctx->pc = 0x27b808u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x27b80c: 0x44810000
    ctx->pc = 0x27b80cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b810: 0x46001002
    ctx->pc = 0x27b810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27b814: 0x8e640014
    ctx->pc = 0x27b814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b818: 0x46000064
    ctx->pc = 0x27b818u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x27b81c: 0x44050800
    ctx->pc = 0x27b81cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x27b820: 0xc0b40c0
    ctx->pc = 0x27B820u;
    SET_GPR_U32(ctx, 31, 0x27B828u);
    ctx->pc = 0x27B824u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B828u; }
    }
    if (ctx->pc != 0x27B828u) { return; }
    ctx->pc = 0x27B828u;
    // 0x27b828: 0x8e620064
    ctx->pc = 0x27b828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27b82c:
    // 0x27b82c: 0x3c030841
    ctx->pc = 0x27b82cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2113 << 16));
    // 0x27b830: 0x431024
    ctx->pc = 0x27b830u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b834: 0x10400004
    ctx->pc = 0x27B834u;
    {
        const bool branch_taken_0x27b834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B838u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x27b834) {
            ctx->pc = 0x27B848u;
            goto label_27b848;
        }
    }
    ctx->pc = 0x27B83Cu;
    // 0x27b83c: 0x8e640014
    ctx->pc = 0x27b83cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b840: 0xc0b41e4
    ctx->pc = 0x27B840u;
    SET_GPR_U32(ctx, 31, 0x27B848u);
    ctx->pc = 0x27B844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B848u; }
    }
    if (ctx->pc != 0x27B848u) { return; }
    ctx->pc = 0x27B848u;
label_27b848:
    // 0x27b848: 0x8e620064
    ctx->pc = 0x27b848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27b84c: 0x3c030800
    ctx->pc = 0x27b84cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x27b850: 0x431024
    ctx->pc = 0x27b850u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b854: 0x50400013
    ctx->pc = 0x27B854u;
    {
        const bool branch_taken_0x27b854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b854) {
            ctx->pc = 0x27B858u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B8A4u;
            goto label_27b8a4;
        }
    }
    ctx->pc = 0x27B85Cu;
    // 0x27b85c: 0xc661006c
    ctx->pc = 0x27b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b860: 0x46160d01
    ctx->pc = 0x27b860u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x27b864: 0x0
    ctx->pc = 0x27b864u;
    // NOP
    // 0x27b868: 0x0
    ctx->pc = 0x27b868u;
    // NOP
    // 0x27b86c: 0x4601f803
    ctx->pc = 0x27b86cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[31] * 0.0f); } else ctx->f[0] = ctx->f[31] / ctx->f[1];
    // 0x27b870: 0x4600a034
    ctx->pc = 0x27b870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b874: 0x0
    ctx->pc = 0x27b874u;
    // NOP
    // 0x27b878: 0x45020028
    ctx->pc = 0x27B878u;
    {
        const bool branch_taken_0x27b878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b878) {
            ctx->pc = 0x27B87Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B91Cu;
            goto label_27b91c;
        }
    }
    ctx->pc = 0x27B880u;
    // 0x27b880: 0x3c013f7d
    ctx->pc = 0x27b880u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16253 << 16));
    // 0x27b884: 0x342170a4
    ctx->pc = 0x27b884u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 28836));
    // 0x27b888: 0x44810000
    ctx->pc = 0x27b888u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b88c: 0x4600a502
    ctx->pc = 0x27b88cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27b890: 0x3c013c23
    ctx->pc = 0x27b890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27b894: 0x3421d70a
    ctx->pc = 0x27b894u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27b898: 0x44810000
    ctx->pc = 0x27b898u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b89c: 0x10000013
    ctx->pc = 0x27B89Cu;
    {
        const bool branch_taken_0x27b89c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B8A0u;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        if (branch_taken_0x27b89c) {
            ctx->pc = 0x27B8ECu;
            goto label_27b8ec;
        }
    }
    ctx->pc = 0x27B8A4u;
label_27b8a4:
    // 0x27b8a4: 0x3c030001
    ctx->pc = 0x27b8a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x27b8a8: 0x431024
    ctx->pc = 0x27b8a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b8ac: 0x5040001b
    ctx->pc = 0x27B8ACu;
    {
        const bool branch_taken_0x27b8ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b8ac) {
            ctx->pc = 0x27B8B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B91Cu;
            goto label_27b91c;
        }
    }
    ctx->pc = 0x27B8B4u;
    // 0x27b8b4: 0xc660006c
    ctx->pc = 0x27b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b8b8: 0x46160501
    ctx->pc = 0x27b8b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x27b8bc: 0x3c013dcc
    ctx->pc = 0x27b8bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x27b8c0: 0x3421cccd
    ctx->pc = 0x27b8c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27b8c4: 0x44810000
    ctx->pc = 0x27b8c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b8c8: 0x4600a034
    ctx->pc = 0x27b8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b8cc: 0x0
    ctx->pc = 0x27b8ccu;
    // NOP
    // 0x27b8d0: 0x45020012
    ctx->pc = 0x27B8D0u;
    {
        const bool branch_taken_0x27b8d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b8d0) {
            ctx->pc = 0x27B8D4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27B91Cu;
            goto label_27b91c;
        }
    }
    ctx->pc = 0x27B8D8u;
    // 0x27b8d8: 0x3c0140a0
    ctx->pc = 0x27b8d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x27b8dc: 0x44810000
    ctx->pc = 0x27b8dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b8e0: 0x4600a502
    ctx->pc = 0x27b8e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27b8e4: 0x3c013f00
    ctx->pc = 0x27b8e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27b8e8: 0x44810000
    ctx->pc = 0x27b8e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_27b8ec:
    // 0x27b8ec: 0x4600a500
    ctx->pc = 0x27b8ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x27b8f0: 0x8e640014
    ctx->pc = 0x27b8f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b8f4: 0x24050008
    ctx->pc = 0x27b8f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x27b8f8: 0xc0b41b8
    ctx->pc = 0x27B8F8u;
    SET_GPR_U32(ctx, 31, 0x27B900u);
    ctx->pc = 0x27B8FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B900u; }
    }
    if (ctx->pc != 0x27B900u) { return; }
    ctx->pc = 0x27B900u;
    // 0x27b900: 0x8e620014
    ctx->pc = 0x27b900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b904: 0xe4540040
    ctx->pc = 0x27b904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27b908: 0x8e620014
    ctx->pc = 0x27b908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b90c: 0xe4540044
    ctx->pc = 0x27b90cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x27b910: 0x8e620014
    ctx->pc = 0x27b910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b914: 0xe4540048
    ctx->pc = 0x27b914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x27b918: 0x8e620064
    ctx->pc = 0x27b918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27b91c:
    // 0x27b91c: 0x3c030040
    ctx->pc = 0x27b91cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x27b920: 0x431024
    ctx->pc = 0x27b920u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b924: 0x5040001c
    ctx->pc = 0x27B924u;
    {
        const bool branch_taken_0x27b924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27b924) {
            ctx->pc = 0x27B928u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 212)));
            ctx->pc = 0x27B998u;
            goto label_27b998;
        }
    }
    ctx->pc = 0x27B92Cu;
    // 0x27b92c: 0x866200be
    ctx->pc = 0x27b92cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
    // 0x27b930: 0x54400019
    ctx->pc = 0x27B930u;
    {
        const bool branch_taken_0x27b930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27b930) {
            ctx->pc = 0x27B934u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 212)));
            ctx->pc = 0x27B998u;
            goto label_27b998;
        }
    }
    ctx->pc = 0x27B938u;
    // 0x27b938: 0x3c013e4c
    ctx->pc = 0x27b938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x27b93c: 0x3421cccd
    ctx->pc = 0x27b93cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27b940: 0x44810000
    ctx->pc = 0x27b940u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b944: 0x4600b034
    ctx->pc = 0x27b944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b948: 0x0
    ctx->pc = 0x27b948u;
    // NOP
    // 0x27b94c: 0x45000011
    ctx->pc = 0x27B94Cu;
    {
        const bool branch_taken_0x27b94c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B950u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x27b94c) {
            ctx->pc = 0x27B994u;
            goto label_27b994;
        }
    }
    ctx->pc = 0x27B954u;
    // 0x27b954: 0x3c0140a0
    ctx->pc = 0x27b954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x27b958: 0x4481a000
    ctx->pc = 0x27b958u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x27b95c: 0x4614b502
    ctx->pc = 0x27b95cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x27b960: 0x3c013a83
    ctx->pc = 0x27b960u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x27b964: 0x3421126f
    ctx->pc = 0x27b964u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x27b968: 0x44810000
    ctx->pc = 0x27b968u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27b96c: 0x4600a500
    ctx->pc = 0x27b96cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x27b970: 0x8e640014
    ctx->pc = 0x27b970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b974: 0xc0b41b8
    ctx->pc = 0x27B974u;
    SET_GPR_U32(ctx, 31, 0x27B97Cu);
    ctx->pc = 0x27B978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B97Cu; }
    }
    if (ctx->pc != 0x27B97Cu) { return; }
    ctx->pc = 0x27B97Cu;
    // 0x27b97c: 0x8e620014
    ctx->pc = 0x27b97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b980: 0xe4540040
    ctx->pc = 0x27b980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27b984: 0x8e620014
    ctx->pc = 0x27b984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b988: 0xe4540044
    ctx->pc = 0x27b988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x27b98c: 0x8e620014
    ctx->pc = 0x27b98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27b990: 0xe4540048
    ctx->pc = 0x27b990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_27b994:
    // 0x27b994: 0x8e6200d4
    ctx->pc = 0x27b994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_27b998:
    // 0x27b998: 0x10400003
    ctx->pc = 0x27B998u;
    {
        const bool branch_taken_0x27b998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B99Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27b998) {
            ctx->pc = 0x27B9A8u;
            goto label_27b9a8;
        }
    }
    ctx->pc = 0x27B9A0u;
    // 0x27b9a0: 0xc09eb26
    ctx->pc = 0x27B9A0u;
    SET_GPR_U32(ctx, 31, 0x27B9A8u);
    ctx->pc = 0x27B9A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x27AC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateFXStreak_0x27ac98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9A8u; }
    }
    if (ctx->pc != 0x27B9A8u) { return; }
    ctx->pc = 0x27B9A8u;
label_27b9a8:
    // 0x27b9a8: 0xc7a00020
    ctx->pc = 0x27b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b9ac: 0xe7a000b0
    ctx->pc = 0x27b9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27b9b0: 0xc7a00024
    ctx->pc = 0x27b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b9b4: 0xe7a000b4
    ctx->pc = 0x27b9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x27b9b8: 0xc7a00028
    ctx->pc = 0x27b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b9bc: 0xe7a000b8
    ctx->pc = 0x27b9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27b9c0: 0xc0b58fc
    ctx->pc = 0x27B9C0u;
    SET_GPR_U32(ctx, 31, 0x27B9C8u);
    ctx->pc = 0x27B9C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9C8u; }
    }
    if (ctx->pc != 0x27B9C8u) { return; }
    ctx->pc = 0x27B9C8u;
    // 0x27b9c8: 0x867700bc
    ctx->pc = 0x27b9c8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x27b9cc: 0x2ee20005
    ctx->pc = 0x27b9ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 23), 5));
    // 0x27b9d0: 0x14400004
    ctx->pc = 0x27B9D0u;
    {
        const bool branch_taken_0x27b9d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27B9D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x27b9d0) {
            ctx->pc = 0x27B9E4u;
            goto label_27b9e4;
        }
    }
    ctx->pc = 0x27B9D8u;
    // 0x27b9d8: 0xb82d
    ctx->pc = 0x27b9d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9dc: 0x10000006
    ctx->pc = 0x27B9DCu;
    {
        const bool branch_taken_0x27b9dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B9E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        if (branch_taken_0x27b9dc) {
            ctx->pc = 0x27B9F8u;
            goto label_27b9f8;
        }
    }
    ctx->pc = 0x27B9E4u;
label_27b9e4:
    // 0x27b9e4: 0x2e31818
    ctx->pc = 0x27b9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27b9e8: 0x3c020032
    ctx->pc = 0x27b9e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27b9ec: 0x2442f0c0
    ctx->pc = 0x27b9ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x27b9f0: 0x621821
    ctx->pc = 0x27b9f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27b9f4: 0xafa300f4
    ctx->pc = 0x27b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
label_27b9f8:
    // 0x27b9f8: 0x866200c4
    ctx->pc = 0x27b9f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27b9fc: 0xafa200f8
    ctx->pc = 0x27b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x27ba00: 0x40034800
    ctx->pc = 0x27ba00u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x27ba04: 0x3c02003a
    ctx->pc = 0x27ba04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x27ba08: 0x8c4221d0
    ctx->pc = 0x27ba08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x27ba0c: 0xac430448
    ctx->pc = 0x27ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1096), GPR_U32(ctx, 3));
    // 0x27ba10: 0x8e630064
    ctx->pc = 0x27ba10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27ba14: 0x30620001
    ctx->pc = 0x27ba14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x27ba18: 0x10400169
    ctx->pc = 0x27BA18u;
    {
        const bool branch_taken_0x27ba18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BA1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 228)));
        if (branch_taken_0x27ba18) {
            ctx->pc = 0x27BFC0u;
            goto label_27bfc0;
        }
    }
    ctx->pc = 0x27BA20u;
    // 0x27ba20: 0x5080009d
    ctx->pc = 0x27BA20u;
    {
        const bool branch_taken_0x27ba20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27ba20) {
            ctx->pc = 0x27BA24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27BC98u;
            goto label_27bc98;
        }
    }
    ctx->pc = 0x27BA28u;
    // 0x27ba28: 0x4618e034
    ctx->pc = 0x27ba28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ba2c: 0x0
    ctx->pc = 0x27ba2cu;
    // NOP
    // 0x27ba30: 0x45000163
    ctx->pc = 0x27BA30u;
    {
        const bool branch_taken_0x27ba30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BA34u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
        if (branch_taken_0x27ba30) {
            ctx->pc = 0x27BFC0u;
            goto label_27bfc0;
        }
    }
    ctx->pc = 0x27BA38u;
    // 0x27ba38: 0x14400161
    ctx->pc = 0x27BA38u;
    {
        const bool branch_taken_0x27ba38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27ba38) {
            ctx->pc = 0x27BFC0u;
            goto label_27bfc0;
        }
    }
    ctx->pc = 0x27BA40u;
    // 0x27ba40: 0x3c0140a0
    ctx->pc = 0x27ba40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x27ba44: 0x44810000
    ctx->pc = 0x27ba44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ba48: 0x4600b834
    ctx->pc = 0x27ba48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ba4c: 0x0
    ctx->pc = 0x27ba4cu;
    // NOP
    // 0x27ba50: 0x45000005
    ctx->pc = 0x27BA50u;
    {
        const bool branch_taken_0x27ba50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BA54u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 180)));
        if (branch_taken_0x27ba50) {
            ctx->pc = 0x27BA68u;
            goto label_27ba68;
        }
    }
    ctx->pc = 0x27BA58u;
    // 0x27ba58: 0x2402fe8f
    ctx->pc = 0x27ba58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966927));
    // 0x27ba5c: 0x282a024
    ctx->pc = 0x27ba5cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x27ba60: 0x3c020100
    ctx->pc = 0x27ba60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x27ba64: 0x282a025
    ctx->pc = 0x27ba64u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_27ba68:
    // 0x27ba68: 0x902d
    ctx->pc = 0x27ba68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba6c: 0x3c020032
    ctx->pc = 0x27ba6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27ba70: 0x245e1bc0
    ctx->pc = 0x27ba70u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x27ba74: 0x3c150031
    ctx->pc = 0x27ba74u;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
    // 0x27ba78: 0x3c013e80
    ctx->pc = 0x27ba78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x27ba7c: 0x4481c800
    ctx->pc = 0x27ba7cu;
    *(uint32_t*)&ctx->f[25] = GPR_U32(ctx, 1);
    // 0x27ba80: 0x24022b00
    ctx->pc = 0x27ba80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27ba84: 0x0
    ctx->pc = 0x27ba84u;
    // NOP
label_27ba88:
    // 0x27ba88: 0x2421818
    ctx->pc = 0x27ba88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ba8c: 0x7e8021
    ctx->pc = 0x27ba8cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x27ba90: 0x8e0200fc
    ctx->pc = 0x27ba90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x27ba94: 0x24040001
    ctx->pc = 0x27ba94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ba98: 0x5444007a
    ctx->pc = 0x27BA98u;
    {
        const bool branch_taken_0x27ba98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x27ba98) {
            ctx->pc = 0x27BA9Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x27BC84u;
            goto label_27bc84;
        }
    }
    ctx->pc = 0x27BAA0u;
    // 0x27baa0: 0xc6a1ffa4
    ctx->pc = 0x27baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27baa4: 0xc60008c0
    ctx->pc = 0x27baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27baa8: 0x46000834
    ctx->pc = 0x27baa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27baac: 0x0
    ctx->pc = 0x27baacu;
    // NOP
    // 0x27bab0: 0x45030074
    ctx->pc = 0x27BAB0u;
    {
        const bool branch_taken_0x27bab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bab0) {
            ctx->pc = 0x27BAB4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x27BC84u;
            goto label_27bc84;
        }
    }
    ctx->pc = 0x27BAB8u;
    // 0x27bab8: 0x866200bc
    ctx->pc = 0x27bab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x27babc: 0x2442ffff
    ctx->pc = 0x27babcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27bac0: 0x8e030000
    ctx->pc = 0x27bac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bac4: 0x1062006e
    ctx->pc = 0x27BAC4u;
    {
        const bool branch_taken_0x27bac4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27BAC8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 112));
        if (branch_taken_0x27bac4) {
            ctx->pc = 0x27BC80u;
            goto label_27bc80;
        }
    }
    ctx->pc = 0x27BACCu;
    // 0x27bacc: 0xc6000070
    ctx->pc = 0x27baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bad0: 0xc7a10090
    ctx->pc = 0x27bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bad4: 0x46010001
    ctx->pc = 0x27bad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27bad8: 0xe7a000a0
    ctx->pc = 0x27bad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27badc: 0xc6220004
    ctx->pc = 0x27badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27bae0: 0xc7a00094
    ctx->pc = 0x27bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bae4: 0x46001081
    ctx->pc = 0x27bae4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27bae8: 0xe7a200a4
    ctx->pc = 0x27bae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27baec: 0xc6200008
    ctx->pc = 0x27baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27baf0: 0xc7a10098
    ctx->pc = 0x27baf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27baf4: 0x46010001
    ctx->pc = 0x27baf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27baf8: 0xe7a000a8
    ctx->pc = 0x27baf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27bafc: 0x46001085
    ctx->pc = 0x27bafcu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x27bb00: 0xc600082c
    ctx->pc = 0x27bb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb04: 0x4600c000
    ctx->pc = 0x27bb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x27bb08: 0x46020034
    ctx->pc = 0x27bb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb0c: 0x0
    ctx->pc = 0x27bb0cu;
    // NOP
    // 0x27bb10: 0x4503005c
    ctx->pc = 0x27BB10u;
    {
        const bool branch_taken_0x27bb10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bb10) {
            ctx->pc = 0x27BB14u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x27BC84u;
            goto label_27bc84;
        }
    }
    ctx->pc = 0x27BB18u;
    // 0x27bb18: 0xc0b58fc
    ctx->pc = 0x27BB18u;
    SET_GPR_U32(ctx, 31, 0x27BB20u);
    ctx->pc = 0x27BB1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB20u; }
    }
    if (ctx->pc != 0x27BB20u) { return; }
    ctx->pc = 0x27BB20u;
    // 0x27bb20: 0x46000546
    ctx->pc = 0x27bb20u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27bb24: 0xc6000828
    ctx->pc = 0x27bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb28: 0x4600c500
    ctx->pc = 0x27bb28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x27bb2c: 0x4615a034
    ctx->pc = 0x27bb2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb30: 0x0
    ctx->pc = 0x27bb30u;
    // NOP
    // 0x27bb34: 0x45030053
    ctx->pc = 0x27BB34u;
    {
        const bool branch_taken_0x27bb34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bb34) {
            ctx->pc = 0x27BB38u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x27BC84u;
            goto label_27bc84;
        }
    }
    ctx->pc = 0x27BB3Cu;
    // 0x27bb3c: 0x3c014120
    ctx->pc = 0x27bb3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x27bb40: 0x44810000
    ctx->pc = 0x27bb40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27bb44: 0x46150034
    ctx->pc = 0x27bb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb48: 0x0
    ctx->pc = 0x27bb48u;
    // NOP
    // 0x27bb4c: 0x4500000a
    ctx->pc = 0x27BB4Cu;
    {
        const bool branch_taken_0x27bb4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BB50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x27bb4c) {
            ctx->pc = 0x27BB78u;
            goto label_27bb78;
        }
    }
    ctx->pc = 0x27BB54u;
    // 0x27bb54: 0x220282d
    ctx->pc = 0x27bb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb58: 0x220302d
    ctx->pc = 0x27bb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb5c: 0x3c013dcc
    ctx->pc = 0x27bb5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x27bb60: 0x3421cccd
    ctx->pc = 0x27bb60u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27bb64: 0x44816000
    ctx->pc = 0x27bb64u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27bb68: 0xc095dcc
    ctx->pc = 0x27BB68u;
    SET_GPR_U32(ctx, 31, 0x27BB70u);
    ctx->pc = 0x27BB6Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x257730u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemLineCollide_0x257730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB70u; }
    }
    if (ctx->pc != 0x27BB70u) { return; }
    ctx->pc = 0x27BB70u;
    // 0x27bb70: 0x4430044
    ctx->pc = 0x27BB70u;
    {
        const bool branch_taken_0x27bb70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27bb70) {
            ctx->pc = 0x27BB74u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x27BC84u;
            goto label_27bc84;
        }
    }
    ctx->pc = 0x27BB78u;
label_27bb78:
    // 0x27bb78: 0x3c01bf80
    ctx->pc = 0x27bb78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27bb7c: 0x44810000
    ctx->pc = 0x27bb7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27bb80: 0xc663009c
    ctx->pc = 0x27bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27bb84: 0x46030034
    ctx->pc = 0x27bb84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bb88: 0x0
    ctx->pc = 0x27bb88u;
    // NOP
    // 0x27bb8c: 0x45000017
    ctx->pc = 0x27BB8Cu;
    {
        const bool branch_taken_0x27bb8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BB90u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x27bb8c) {
            ctx->pc = 0x27BBECu;
            goto label_27bbec;
        }
    }
    ctx->pc = 0x27BB94u;
    // 0x27bb94: 0xc7a000b0
    ctx->pc = 0x27bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bb98: 0x46001082
    ctx->pc = 0x27bb98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27bb9c: 0xc7a000a8
    ctx->pc = 0x27bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bba0: 0xc7a100b8
    ctx->pc = 0x27bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bba4: 0x46010002
    ctx->pc = 0x27bba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27bba8: 0x46001080
    ctx->pc = 0x27bba8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27bbac: 0x3c013e99
    ctx->pc = 0x27bbacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x27bbb0: 0x3421999a
    ctx->pc = 0x27bbb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x27bbb4: 0x44810000
    ctx->pc = 0x27bbb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27bbb8: 0x4600a002
    ctx->pc = 0x27bbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27bbbc: 0x4600a834
    ctx->pc = 0x27bbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bbc0: 0x0
    ctx->pc = 0x27bbc0u;
    // NOP
    // 0x27bbc4: 0x45000005
    ctx->pc = 0x27BBC4u;
    {
        const bool branch_taken_0x27bbc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BBC8u;
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        if (branch_taken_0x27bbc4) {
            ctx->pc = 0x27BBDCu;
            goto label_27bbdc;
        }
    }
    ctx->pc = 0x27BBCCu;
    // 0x27bbcc: 0x3c013f59
    ctx->pc = 0x27bbccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16217 << 16));
    // 0x27bbd0: 0x3421999a
    ctx->pc = 0x27bbd0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x27bbd4: 0x44810000
    ctx->pc = 0x27bbd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27bbd8: 0x46000842
    ctx->pc = 0x27bbd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27bbdc:
    // 0x27bbdc: 0x46011034
    ctx->pc = 0x27bbdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bbe0: 0x0
    ctx->pc = 0x27bbe0u;
    // NOP
    // 0x27bbe4: 0x45030027
    ctx->pc = 0x27BBE4u;
    {
        const bool branch_taken_0x27bbe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bbe4) {
            ctx->pc = 0x27BBE8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x27BC84u;
            goto label_27bc84;
        }
    }
    ctx->pc = 0x27BBECu;
label_27bbec:
    // 0x27bbec: 0xc7a000a0
    ctx->pc = 0x27bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bbf0: 0x46190002
    ctx->pc = 0x27bbf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x27bbf4: 0xe7a000a0
    ctx->pc = 0x27bbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27bbf8: 0xafa000a4
    ctx->pc = 0x27bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x27bbfc: 0xc7a000a8
    ctx->pc = 0x27bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc00: 0x46190002
    ctx->pc = 0x27bc00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x27bc04: 0xe7a000a8
    ctx->pc = 0x27bc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27bc08: 0x8e040000
    ctx->pc = 0x27bc08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bc0c: 0x4600bb06
    ctx->pc = 0x27bc0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27bc10: 0x24050001
    ctx->pc = 0x27bc10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bc14: 0x280302d
    ctx->pc = 0x27bc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc18: 0xc08c73c
    ctx->pc = 0x27BC18u;
    SET_GPR_U32(ctx, 31, 0x27BC20u);
    ctx->pc = 0x27BC1Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC20u; }
    }
    if (ctx->pc != 0x27BC20u) { return; }
    ctx->pc = 0x27BC20u;
    // 0x27bc20: 0x866200bc
    ctx->pc = 0x27bc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x27bc24: 0x28421000
    ctx->pc = 0x27bc24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4096));
    // 0x27bc28: 0x14400005
    ctx->pc = 0x27BC28u;
    {
        const bool branch_taken_0x27bc28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27BC2Cu;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 188)));
        if (branch_taken_0x27bc28) {
            ctx->pc = 0x27BC40u;
            goto label_27bc40;
        }
    }
    ctx->pc = 0x27BC30u;
    // 0x27bc30: 0x8e040000
    ctx->pc = 0x27bc30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bc34: 0x30a50fff
    ctx->pc = 0x27bc34u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
    // 0x27bc38: 0xc0a6e78
    ctx->pc = 0x27BC38u;
    SET_GPR_U32(ctx, 31, 0x27BC40u);
    ctx->pc = 0x27BC3Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x29B9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamagedPlayer_0x29b9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC40u; }
    }
    if (ctx->pc != 0x27BC40u) { return; }
    ctx->pc = 0x27BC40u;
label_27bc40:
    // 0x27bc40: 0x8e6200b4
    ctx->pc = 0x27bc40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27bc44: 0x30420800
    ctx->pc = 0x27bc44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x27bc48: 0x10400006
    ctx->pc = 0x27BC48u;
    {
        const bool branch_taken_0x27bc48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27bc48) {
            ctx->pc = 0x27BC64u;
            goto label_27bc64;
        }
    }
    ctx->pc = 0x27BC50u;
    // 0x27bc50: 0xc6a0ffa4
    ctx->pc = 0x27bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc54: 0x3c013f00
    ctx->pc = 0x27bc54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27bc58: 0x44810800
    ctx->pc = 0x27bc58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27bc5c: 0x10000007
    ctx->pc = 0x27BC5Cu;
    {
        const bool branch_taken_0x27bc5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BC60u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x27bc5c) {
            ctx->pc = 0x27BC7Cu;
            goto label_27bc7c;
        }
    }
    ctx->pc = 0x27BC64u;
label_27bc64:
    // 0x27bc64: 0x4617f034
    ctx->pc = 0x27bc64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bc68: 0x0
    ctx->pc = 0x27bc68u;
    // NOP
    // 0x27bc6c: 0x45020005
    ctx->pc = 0x27BC6Cu;
    {
        const bool branch_taken_0x27bc6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bc6c) {
            ctx->pc = 0x27BC70u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x27BC84u;
            goto label_27bc84;
        }
    }
    ctx->pc = 0x27BC74u;
    // 0x27bc74: 0xc6a0ffa4
    ctx->pc = 0x27bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bc78: 0x4600d000
    ctx->pc = 0x27bc78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_27bc7c:
    // 0x27bc7c: 0xe60008c0
    ctx->pc = 0x27bc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2240), bits); }
label_27bc80:
    // 0x27bc80: 0x26520001
    ctx->pc = 0x27bc80u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_27bc84:
    // 0x27bc84: 0x2a420004
    ctx->pc = 0x27bc84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x27bc88: 0x1440ff7f
    ctx->pc = 0x27BC88u;
    {
        const bool branch_taken_0x27bc88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27BC8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x27bc88) {
            ctx->pc = 0x27BA88u;
            goto label_27ba88;
        }
    }
    ctx->pc = 0x27BC90u;
    // 0x27bc90: 0x100000cb
    ctx->pc = 0x27BC90u;
    {
        const bool branch_taken_0x27bc90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27bc90) {
            ctx->pc = 0x27BFC0u;
            goto label_27bfc0;
        }
    }
    ctx->pc = 0x27BC98u;
label_27bc98:
    // 0x27bc98: 0x30420200
    ctx->pc = 0x27bc98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x27bc9c: 0x10400004
    ctx->pc = 0x27BC9Cu;
    {
        const bool branch_taken_0x27bc9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BCA0u;
        ctx->f[20] = FPU_MOV_S(ctx->f[24]);
        if (branch_taken_0x27bc9c) {
            ctx->pc = 0x27BCB0u;
            goto label_27bcb0;
        }
    }
    ctx->pc = 0x27BCA4u;
    // 0x27bca4: 0x3c013c23
    ctx->pc = 0x27bca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27bca8: 0x3421d70a
    ctx->pc = 0x27bca8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27bcac: 0x4481a000
    ctx->pc = 0x27bcacu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27bcb0:
    // 0x27bcb0: 0x27b100c0
    ctx->pc = 0x27bcb0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27bcb4: 0x27a40080
    ctx->pc = 0x27bcb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x27bcb8: 0x27a50090
    ctx->pc = 0x27bcb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x27bcbc: 0x220302d
    ctx->pc = 0x27bcbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bcc0: 0xc0a4278
    ctx->pc = 0x27BCC0u;
    SET_GPR_U32(ctx, 31, 0x27BCC8u);
    ctx->pc = 0x27BCC4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2909E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MissileCollidePlayer_0x2909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BCC8u; }
    }
    if (ctx->pc != 0x27BCC8u) { return; }
    ctx->pc = 0x27BCC8u;
    // 0x27bcc8: 0x40802d
    ctx->pc = 0x27bcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bccc: 0x120000bb
    ctx->pc = 0x27BCCCu;
    {
        const bool branch_taken_0x27bccc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BCD0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x27bccc) {
            ctx->pc = 0x27BFBCu;
            goto label_27bfbc;
        }
    }
    ctx->pc = 0x27BCD4u;
    // 0x27bcd4: 0x866200bc
    ctx->pc = 0x27bcd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x27bcd8: 0x2442ffff
    ctx->pc = 0x27bcd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27bcdc: 0x8e030000
    ctx->pc = 0x27bcdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bce0: 0x106200aa
    ctx->pc = 0x27BCE0u;
    {
        const bool branch_taken_0x27bce0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x27bce0) {
            ctx->pc = 0x27BF8Cu;
            goto label_27bf8c;
        }
    }
    ctx->pc = 0x27BCE8u;
    // 0x27bce8: 0x8e620064
    ctx->pc = 0x27bce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27bcec: 0x30420200
    ctx->pc = 0x27bcecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x27bcf0: 0x544000a1
    ctx->pc = 0x27BCF0u;
    {
        const bool branch_taken_0x27bcf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27bcf0) {
            ctx->pc = 0x27BCF4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27BF78u;
            goto label_27bf78;
        }
    }
    ctx->pc = 0x27BCF8u;
    // 0x27bcf8: 0x8e020134
    ctx->pc = 0x27bcf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x27bcfc: 0x3c030102
    ctx->pc = 0x27bcfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)258 << 16));
    // 0x27bd00: 0x431024
    ctx->pc = 0x27bd00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bd04: 0x1040003f
    ctx->pc = 0x27BD04u;
    {
        const bool branch_taken_0x27bd04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BD08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27bd04) {
            ctx->pc = 0x27BE04u;
            goto label_27be04;
        }
    }
    ctx->pc = 0x27BD0Cu;
    // 0x27bd0c: 0xc097bd6
    ctx->pc = 0x27BD0Cu;
    SET_GPR_U32(ctx, 31, 0x27BD14u);
    ctx->pc = 0x27BD10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25EF58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWeaponReflect_0x25ef58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD14u; }
    }
    if (ctx->pc != 0x27BD14u) { return; }
    ctx->pc = 0x27BD14u;
    // 0x27bd14: 0x8e630064
    ctx->pc = 0x27bd14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27bd18: 0x34630008
    ctx->pc = 0x27bd18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
    // 0x27bd1c: 0x2402f3ff
    ctx->pc = 0x27bd1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x27bd20: 0x621824
    ctx->pc = 0x27bd20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bd24: 0xae630064
    ctx->pc = 0x27bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x27bd28: 0xc6610080
    ctx->pc = 0x27bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27bd2c: 0x46000847
    ctx->pc = 0x27bd2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x27bd30: 0xe6610080
    ctx->pc = 0x27bd30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
    // 0x27bd34: 0xc6620084
    ctx->pc = 0x27bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27bd38: 0x46001087
    ctx->pc = 0x27bd38u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x27bd3c: 0xe6620084
    ctx->pc = 0x27bd3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x27bd40: 0xc6630088
    ctx->pc = 0x27bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27bd44: 0x460018c7
    ctx->pc = 0x27bd44u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x27bd48: 0xe6630088
    ctx->pc = 0x27bd48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x27bd4c: 0x3c050031
    ctx->pc = 0x27bd4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x27bd50: 0xc4a4ffa8
    ctx->pc = 0x27bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27bd54: 0x46040842
    ctx->pc = 0x27bd54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27bd58: 0xc7a00090
    ctx->pc = 0x27bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bd5c: 0x46000840
    ctx->pc = 0x27bd5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27bd60: 0xe7a10090
    ctx->pc = 0x27bd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27bd64: 0x46041082
    ctx->pc = 0x27bd64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27bd68: 0xc7a00094
    ctx->pc = 0x27bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bd6c: 0x46001080
    ctx->pc = 0x27bd6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27bd70: 0xe7a20094
    ctx->pc = 0x27bd70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27bd74: 0x460418c2
    ctx->pc = 0x27bd74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x27bd78: 0xc7a00098
    ctx->pc = 0x27bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bd7c: 0x460018c0
    ctx->pc = 0x27bd7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27bd80: 0xe7a30098
    ctx->pc = 0x27bd80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27bd84: 0x24020001
    ctx->pc = 0x27bd84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bd88: 0xafa200ec
    ctx->pc = 0x27bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x27bd8c: 0x3c020002
    ctx->pc = 0x27bd8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x27bd90: 0x621824
    ctx->pc = 0x27bd90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bd94: 0x10600005
    ctx->pc = 0x27BD94u;
    {
        const bool branch_taken_0x27bd94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BD98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27bd94) {
            ctx->pc = 0x27BDACu;
            goto label_27bdac;
        }
    }
    ctx->pc = 0x27BD9Cu;
    // 0x27bd9c: 0x26650080
    ctx->pc = 0x27bd9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 128));
    // 0x27bda0: 0x3c060034
    ctx->pc = 0x27bda0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x27bda4: 0xc0b5978
    ctx->pc = 0x27BDA4u;
    SET_GPR_U32(ctx, 31, 0x27BDACu);
    ctx->pc = 0x27BDA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294962064));
    ctx->pc = 0x2D65E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDirMatrix_0x2d65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BDACu; }
    }
    if (ctx->pc != 0x27BDACu) { return; }
    ctx->pc = 0x27BDACu;
label_27bdac:
    // 0x27bdac: 0x3c030031
    ctx->pc = 0x27bdacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x27bdb0: 0xc460ffb4
    ctx->pc = 0x27bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bdb4: 0x3c014120
    ctx->pc = 0x27bdb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x27bdb8: 0x44810800
    ctx->pc = 0x27bdb8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27bdbc: 0x46010040
    ctx->pc = 0x27bdbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27bdc0: 0xc6600068
    ctx->pc = 0x27bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bdc4: 0x46000834
    ctx->pc = 0x27bdc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bdc8: 0x0
    ctx->pc = 0x27bdc8u;
    // NOP
    // 0x27bdcc: 0x45020003
    ctx->pc = 0x27BDCCu;
    {
        const bool branch_taken_0x27bdcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bdcc) {
            ctx->pc = 0x27BDD0u;
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[31]);
            ctx->pc = 0x27BDDCu;
            goto label_27bddc;
        }
    }
    ctx->pc = 0x27BDD4u;
    // 0x27bdd4: 0x10000002
    ctx->pc = 0x27BDD4u;
    {
        const bool branch_taken_0x27bdd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BDD8u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
        if (branch_taken_0x27bdd4) {
            ctx->pc = 0x27BDE0u;
            goto label_27bde0;
        }
    }
    ctx->pc = 0x27BDDCu;
label_27bddc:
    // 0x27bddc: 0xe6600068
    ctx->pc = 0x27bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
label_27bde0:
    // 0x27bde0: 0xc66000ac
    ctx->pc = 0x27bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bde4: 0x3c014170
    ctx->pc = 0x27bde4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x27bde8: 0x44810800
    ctx->pc = 0x27bde8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27bdec: 0x46000834
    ctx->pc = 0x27bdecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bdf0: 0x0
    ctx->pc = 0x27bdf0u;
    // NOP
    // 0x27bdf4: 0x45030070
    ctx->pc = 0x27BDF4u;
    {
        const bool branch_taken_0x27bdf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bdf4) {
            ctx->pc = 0x27BDF8u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
            ctx->pc = 0x27BFB8u;
            goto label_27bfb8;
        }
    }
    ctx->pc = 0x27BDFCu;
    // 0x27bdfc: 0x1000006f
    ctx->pc = 0x27BDFCu;
    {
        const bool branch_taken_0x27bdfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BE00u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x27bdfc) {
            ctx->pc = 0x27BFBCu;
            goto label_27bfbc;
        }
    }
    ctx->pc = 0x27BE04u;
label_27be04:
    // 0x27be04: 0xc6600080
    ctx->pc = 0x27be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27be08: 0xe7a000a0
    ctx->pc = 0x27be08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27be0c: 0xc6600084
    ctx->pc = 0x27be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27be10: 0xe7a000a4
    ctx->pc = 0x27be10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27be14: 0xc6600088
    ctx->pc = 0x27be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27be18: 0xe7a000a8
    ctx->pc = 0x27be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27be1c: 0x27b100a0
    ctx->pc = 0x27be1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 160));
    // 0x27be20: 0xc0b58a4
    ctx->pc = 0x27BE20u;
    SET_GPR_U32(ctx, 31, 0x27BE28u);
    ctx->pc = 0x27BE24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE28u; }
    }
    if (ctx->pc != 0x27BE28u) { return; }
    ctx->pc = 0x27BE28u;
    // 0x27be28: 0x3c020031
    ctx->pc = 0x27be28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27be2c: 0xc441ffa4
    ctx->pc = 0x27be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27be30: 0xc60008c0
    ctx->pc = 0x27be30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27be34: 0x46010036
    ctx->pc = 0x27be34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27be38: 0x0
    ctx->pc = 0x27be38u;
    // NOP
    // 0x27be3c: 0x45020022
    ctx->pc = 0x27BE3Cu;
    {
        const bool branch_taken_0x27be3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27be3c) {
            ctx->pc = 0x27BE40u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x27BEC8u;
            goto label_27bec8;
        }
    }
    ctx->pc = 0x27BE44u;
    // 0x27be44: 0x8e620064
    ctx->pc = 0x27be44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27be48: 0x30422000
    ctx->pc = 0x27be48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x27be4c: 0x10400007
    ctx->pc = 0x27BE4Cu;
    {
        const bool branch_taken_0x27be4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BE50u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27be4c) {
            ctx->pc = 0x27BE6Cu;
            goto label_27be6c;
        }
    }
    ctx->pc = 0x27BE54u;
    // 0x27be54: 0x8e6600b4
    ctx->pc = 0x27be54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27be58: 0x8e040000
    ctx->pc = 0x27be58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27be5c: 0x44806000
    ctx->pc = 0x27be5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27be60: 0x282d
    ctx->pc = 0x27be60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be64: 0x10000006
    ctx->pc = 0x27BE64u;
    {
        const bool branch_taken_0x27be64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BE68u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 128));
        if (branch_taken_0x27be64) {
            ctx->pc = 0x27BE80u;
            goto label_27be80;
        }
    }
    ctx->pc = 0x27BE6Cu;
label_27be6c:
    // 0x27be6c: 0x8e040000
    ctx->pc = 0x27be6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27be70: 0x4600bb06
    ctx->pc = 0x27be70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27be74: 0x24050001
    ctx->pc = 0x27be74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27be78: 0x8e6600b4
    ctx->pc = 0x27be78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27be7c: 0x27a700a0
    ctx->pc = 0x27be7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 160));
label_27be80:
    // 0x27be80: 0xc08c73c
    ctx->pc = 0x27BE80u;
    SET_GPR_U32(ctx, 31, 0x27BE88u);
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE88u; }
    }
    if (ctx->pc != 0x27BE88u) { return; }
    ctx->pc = 0x27BE88u;
    // 0x27be88: 0x40882d
    ctx->pc = 0x27be88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be8c: 0x866200bc
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x27be90: 0x28421000
    ctx->pc = 0x27be90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4096));
    // 0x27be94: 0x14400005
    ctx->pc = 0x27BE94u;
    {
        const bool branch_taken_0x27be94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27BE98u;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 188)));
        if (branch_taken_0x27be94) {
            ctx->pc = 0x27BEACu;
            goto label_27beac;
        }
    }
    ctx->pc = 0x27BE9Cu;
    // 0x27be9c: 0x8e040000
    ctx->pc = 0x27be9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bea0: 0x30a50fff
    ctx->pc = 0x27bea0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
    // 0x27bea4: 0xc0a6e78
    ctx->pc = 0x27BEA4u;
    SET_GPR_U32(ctx, 31, 0x27BEACu);
    ctx->pc = 0x27BEA8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x29B9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamagedPlayer_0x29b9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BEACu; }
    }
    if (ctx->pc != 0x27BEACu) { return; }
    ctx->pc = 0x27BEACu;
label_27beac:
    // 0x27beac: 0x4617f034
    ctx->pc = 0x27beacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27beb0: 0x0
    ctx->pc = 0x27beb0u;
    // NOP
    // 0x27beb4: 0x45000004
    ctx->pc = 0x27BEB4u;
    {
        const bool branch_taken_0x27beb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BEB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27beb4) {
            ctx->pc = 0x27BEC8u;
            goto label_27bec8;
        }
    }
    ctx->pc = 0x27BEBCu;
    // 0x27bebc: 0xc440ffa4
    ctx->pc = 0x27bebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bec0: 0x4600d000
    ctx->pc = 0x27bec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x27bec4: 0xe60008c0
    ctx->pc = 0x27bec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2240), bits); }
label_27bec8:
    // 0x27bec8: 0x8fa400f0
    ctx->pc = 0x27bec8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27becc: 0x1080001e
    ctx->pc = 0x27BECCu;
    {
        const bool branch_taken_0x27becc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BED0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        if (branch_taken_0x27becc) {
            ctx->pc = 0x27BF48u;
            goto label_27bf48;
        }
    }
    ctx->pc = 0x27BED4u;
    // 0x27bed4: 0x8e6200b4
    ctx->pc = 0x27bed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27bed8: 0x431024
    ctx->pc = 0x27bed8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bedc: 0x10400023
    ctx->pc = 0x27BEDCu;
    {
        const bool branch_taken_0x27bedc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BEE0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x27bedc) {
            ctx->pc = 0x27BF6Cu;
            goto label_27bf6c;
        }
    }
    ctx->pc = 0x27BEE4u;
    // 0x27bee4: 0x866400be
    ctx->pc = 0x27bee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
    // 0x27bee8: 0x4800021
    ctx->pc = 0x27BEE8u;
    {
        const bool branch_taken_0x27bee8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27BEECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x27bee8) {
            ctx->pc = 0x27BF70u;
            goto label_27bf70;
        }
    }
    ctx->pc = 0x27BEF0u;
    // 0x27bef0: 0x4617f034
    ctx->pc = 0x27bef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bef4: 0x0
    ctx->pc = 0x27bef4u;
    // NOP
    // 0x27bef8: 0x4500001d
    ctx->pc = 0x27BEF8u;
    {
        const bool branch_taken_0x27bef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BEFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 96));
        if (branch_taken_0x27bef8) {
            ctx->pc = 0x27BF70u;
            goto label_27bf70;
        }
    }
    ctx->pc = 0x27BF00u;
    // 0x27bf00: 0x44806000
    ctx->pc = 0x27bf00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27bf04: 0x302d
    ctx->pc = 0x27bf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf08: 0xc09f5fa
    ctx->pc = 0x27BF08u;
    SET_GPR_U32(ctx, 31, 0x27BF10u);
    ctx->pc = 0x27BF0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF10u; }
    }
    if (ctx->pc != 0x27BF10u) { return; }
    ctx->pc = 0x27BF10u;
    // 0x27bf10: 0x40202d
    ctx->pc = 0x27bf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf14: 0x8e620064
    ctx->pc = 0x27bf14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27bf18: 0x3c030030
    ctx->pc = 0x27bf18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x27bf1c: 0x431024
    ctx->pc = 0x27bf1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bf20: 0x50400004
    ctx->pc = 0x27BF20u;
    {
        const bool branch_taken_0x27bf20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27bf20) {
            ctx->pc = 0x27BF24u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
            ctx->pc = 0x27BF34u;
            goto label_27bf34;
        }
    }
    ctx->pc = 0x27BF28u;
    // 0x27bf28: 0xc09eaa0
    ctx->pc = 0x27BF28u;
    SET_GPR_U32(ctx, 31, 0x27BF30u);
    ctx->pc = 0x27BF2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27AA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceEffectOnFloor_0x27aa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF30u; }
    }
    if (ctx->pc != 0x27BF30u) { return; }
    ctx->pc = 0x27BF30u;
    // 0x27bf30: 0x8e6200b4
    ctx->pc = 0x27bf30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_27bf34:
    // 0x27bf34: 0x3c03ffef
    ctx->pc = 0x27bf34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65519 << 16));
    // 0x27bf38: 0x3463ffff
    ctx->pc = 0x27bf38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x27bf3c: 0x431024
    ctx->pc = 0x27bf3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bf40: 0x10000009
    ctx->pc = 0x27BF40u;
    {
        const bool branch_taken_0x27bf40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BF44u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
        if (branch_taken_0x27bf40) {
            ctx->pc = 0x27BF68u;
            goto label_27bf68;
        }
    }
    ctx->pc = 0x27BF48u;
label_27bf48:
    // 0x27bf48: 0xc7a000c0
    ctx->pc = 0x27bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf4c: 0xe7a00090
    ctx->pc = 0x27bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27bf50: 0xc7a000c4
    ctx->pc = 0x27bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf54: 0xe7a00094
    ctx->pc = 0x27bf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27bf58: 0xc7a000c8
    ctx->pc = 0x27bf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf5c: 0xe7a00098
    ctx->pc = 0x27bf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27bf60: 0x24050001
    ctx->pc = 0x27bf60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bf64: 0xafa500ec
    ctx->pc = 0x27bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
label_27bf68:
    // 0x27bf68: 0x24160002
    ctx->pc = 0x27bf68u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
label_27bf6c:
    // 0x27bf6c: 0x24020003
    ctx->pc = 0x27bf6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_27bf70:
    // 0x27bf70: 0x10000011
    ctx->pc = 0x27BF70u;
    {
        const bool branch_taken_0x27bf70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BF74u;
        if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 2));
        if (branch_taken_0x27bf70) {
            ctx->pc = 0x27BFB8u;
            goto label_27bfb8;
        }
    }
    ctx->pc = 0x27BF78u;
label_27bf78:
    // 0x27bf78: 0x3c013dcc
    ctx->pc = 0x27bf78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x27bf7c: 0x3421cccd
    ctx->pc = 0x27bf7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27bf80: 0x44810800
    ctx->pc = 0x27bf80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27bf84: 0x10000008
    ctx->pc = 0x27BF84u;
    {
        const bool branch_taken_0x27bf84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BF88u;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        if (branch_taken_0x27bf84) {
            ctx->pc = 0x27BFA8u;
            goto label_27bfa8;
        }
    }
    ctx->pc = 0x27BF8Cu;
label_27bf8c:
    // 0x27bf8c: 0x1200000b
    ctx->pc = 0x27BF8Cu;
    {
        const bool branch_taken_0x27bf8c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x27BF90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x27bf8c) {
            ctx->pc = 0x27BFBCu;
            goto label_27bfbc;
        }
    }
    ctx->pc = 0x27BF94u;
    // 0x27bf94: 0xc660006c
    ctx->pc = 0x27bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf98: 0x46160001
    ctx->pc = 0x27bf98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x27bf9c: 0x3c013e4c
    ctx->pc = 0x27bf9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x27bfa0: 0x3421cccd
    ctx->pc = 0x27bfa0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27bfa4: 0x44810800
    ctx->pc = 0x27bfa4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_27bfa8:
    // 0x27bfa8: 0x46000834
    ctx->pc = 0x27bfa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27bfac: 0x0
    ctx->pc = 0x27bfacu;
    // NOP
    // 0x27bfb0: 0x45030001
    ctx->pc = 0x27BFB0u;
    {
        const bool branch_taken_0x27bfb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bfb0) {
            ctx->pc = 0x27BFB4u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x27BFB8u;
            goto label_27bfb8;
        }
    }
    ctx->pc = 0x27BFB8u;
label_27bfb8:
    // 0x27bfb8: 0x8fa200f0
    ctx->pc = 0x27bfb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_27bfbc:
    // 0x27bfbc: 0x2b00b
    ctx->pc = 0x27bfbcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 0));
label_27bfc0:
    // 0x27bfc0: 0x40034800
    ctx->pc = 0x27bfc0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x27bfc4: 0x3c02003a
    ctx->pc = 0x27bfc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x27bfc8: 0x8c4421d0
    ctx->pc = 0x27bfc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x27bfcc: 0x8c820448
    ctx->pc = 0x27bfccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1096)));
    // 0x27bfd0: 0x621823
    ctx->pc = 0x27bfd0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bfd4: 0x8c820440
    ctx->pc = 0x27bfd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1088)));
    // 0x27bfd8: 0x621821
    ctx->pc = 0x27bfd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27bfdc: 0xac830440
    ctx->pc = 0x27bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1088), GPR_U32(ctx, 3));
    // 0x27bfe0: 0x8c820444
    ctx->pc = 0x27bfe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1092)));
    // 0x27bfe4: 0x24420001
    ctx->pc = 0x27bfe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27bfe8: 0xac820444
    ctx->pc = 0x27bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1092), GPR_U32(ctx, 2));
    // 0x27bfec: 0x40024800
    ctx->pc = 0x27bfecu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x27bff0: 0x16c001e4
    ctx->pc = 0x27BFF0u;
    {
        const bool branch_taken_0x27bff0 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x27BFF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 2));
        if (branch_taken_0x27bff0) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27BFF8u;
    // 0x27bff8: 0x8e630064
    ctx->pc = 0x27bff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27bffc: 0x30620008
    ctx->pc = 0x27bffcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
    // 0x27c000: 0x104000f7
    ctx->pc = 0x27C000u;
    {
        const bool branch_taken_0x27c000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 228)));
        if (branch_taken_0x27c000) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C008u;
    // 0x27c008: 0x5080008e
    ctx->pc = 0x27C008u;
    {
        const bool branch_taken_0x27c008 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27c008) {
            ctx->pc = 0x27C00Cu;
            SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 103)));
            ctx->pc = 0x27C244u;
            goto label_27c244;
        }
    }
    ctx->pc = 0x27C010u;
    // 0x27c010: 0x4618e034
    ctx->pc = 0x27c010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c014: 0x0
    ctx->pc = 0x27c014u;
    // NOP
    // 0x27c018: 0x450000f1
    ctx->pc = 0x27C018u;
    {
        const bool branch_taken_0x27c018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C01Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1024));
        if (branch_taken_0x27c018) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C020u;
    // 0x27c020: 0x144000ef
    ctx->pc = 0x27C020u;
    {
        const bool branch_taken_0x27c020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C024u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x27c020) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C028u;
    // 0x27c028: 0xc0a00b0
    ctx->pc = 0x27C028u;
    SET_GPR_U32(ctx, 31, 0x27C030u);
    ctx->pc = 0x27C02Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x2802C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyGrid_0x2802c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C030u; }
    }
    if (ctx->pc != 0x27C030u) { return; }
    ctx->pc = 0x27C030u;
    // 0x27c030: 0x241e0006
    ctx->pc = 0x27c030u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 6));
    // 0x27c034: 0x3c150031
    ctx->pc = 0x27c034u;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
    // 0x27c038: 0x1000007b
    ctx->pc = 0x27C038u;
    {
        const bool branch_taken_0x27c038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C03Cu;
        SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x27c038) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C040u;
label_27c040:
    // 0x27c040: 0x3c030033
    ctx->pc = 0x27c040u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x27c044: 0x2463dfd0
    ctx->pc = 0x27c044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x27c048: 0x600013
    ctx->pc = 0x27c048u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x27c04c: 0x72428000
    ctx->pc = 0x27c04cu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27c050: 0x8e0200c8
    ctx->pc = 0x27c050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x27c054: 0x24040001
    ctx->pc = 0x27c054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c058: 0x10440003
    ctx->pc = 0x27C058u;
    {
        const bool branch_taken_0x27c058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x27c058) {
            ctx->pc = 0x27C068u;
            goto label_27c068;
        }
    }
    ctx->pc = 0x27C060u;
    // 0x27c060: 0x145e0071
    ctx->pc = 0x27C060u;
    {
        const bool branch_taken_0x27c060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 30));
        if (branch_taken_0x27c060) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C068u;
label_27c068:
    // 0x27c068: 0x145e0005
    ctx->pc = 0x27C068u;
    {
        const bool branch_taken_0x27c068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 30));
        ctx->pc = 0x27C06Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
        if (branch_taken_0x27c068) {
            ctx->pc = 0x27C080u;
            goto label_27c080;
        }
    }
    ctx->pc = 0x27C070u;
    // 0x27c070: 0x30420100
    ctx->pc = 0x27c070u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x27c074: 0x1440006c
    ctx->pc = 0x27C074u;
    {
        const bool branch_taken_0x27c074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27c074) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C07Cu;
    // 0x27c07c: 0x8e620064
    ctx->pc = 0x27c07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27c080:
    // 0x27c080: 0x3c030100
    ctx->pc = 0x27c080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x27c084: 0x431024
    ctx->pc = 0x27c084u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c088: 0x54400008
    ctx->pc = 0x27C088u;
    {
        const bool branch_taken_0x27c088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27c088) {
            ctx->pc = 0x27C08Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27C0ACu;
            goto label_27c0ac;
        }
    }
    ctx->pc = 0x27C090u;
    // 0x27c090: 0x2141021
    ctx->pc = 0x27c090u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x27c094: 0xc6a1ffa4
    ctx->pc = 0x27c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c098: 0xc44002c8
    ctx->pc = 0x27c098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c09c: 0x46000834
    ctx->pc = 0x27c09cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c0a0: 0x45010061
    ctx->pc = 0x27C0A0u;
    {
        const bool branch_taken_0x27c0a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c0a0) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C0A8u;
    // 0x27c0a8: 0xc6000060
    ctx->pc = 0x27c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c0ac:
    // 0x27c0ac: 0xc7a10090
    ctx->pc = 0x27c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c0b0: 0x46010001
    ctx->pc = 0x27c0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c0b4: 0xe7a000a0
    ctx->pc = 0x27c0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27c0b8: 0xc6000064
    ctx->pc = 0x27c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c0bc: 0xc7a10094
    ctx->pc = 0x27c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c0c0: 0x46010001
    ctx->pc = 0x27c0c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c0c4: 0xe7a000a4
    ctx->pc = 0x27c0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27c0c8: 0xc6000068
    ctx->pc = 0x27c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c0cc: 0xc7a10098
    ctx->pc = 0x27c0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c0d0: 0x46010001
    ctx->pc = 0x27c0d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c0d4: 0xe7a000a8
    ctx->pc = 0x27c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27c0d8: 0xc0b58fc
    ctx->pc = 0x27C0D8u;
    SET_GPR_U32(ctx, 31, 0x27C0E0u);
    ctx->pc = 0x27C0DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0E0u; }
    }
    if (ctx->pc != 0x27C0E0u) { return; }
    ctx->pc = 0x27C0E0u;
    // 0x27c0e0: 0x46000546
    ctx->pc = 0x27c0e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27c0e4: 0xc600024c
    ctx->pc = 0x27c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c0e8: 0x4600c500
    ctx->pc = 0x27c0e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x27c0ec: 0x4615a034
    ctx->pc = 0x27c0ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c0f0: 0x4501004d
    ctx->pc = 0x27C0F0u;
    {
        const bool branch_taken_0x27c0f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c0f0) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C0F8u;
    // 0x27c0f8: 0x3c01bf80
    ctx->pc = 0x27c0f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27c0fc: 0x44810000
    ctx->pc = 0x27c0fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c100: 0xc663009c
    ctx->pc = 0x27c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27c104: 0x46030034
    ctx->pc = 0x27c104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c108: 0x0
    ctx->pc = 0x27c108u;
    // NOP
    // 0x27c10c: 0x45000016
    ctx->pc = 0x27C10Cu;
    {
        const bool branch_taken_0x27c10c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C110u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x27c10c) {
            ctx->pc = 0x27C168u;
            goto label_27c168;
        }
    }
    ctx->pc = 0x27C114u;
    // 0x27c114: 0xc7a000b0
    ctx->pc = 0x27c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c118: 0x46001082
    ctx->pc = 0x27c118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27c11c: 0xc7a000a8
    ctx->pc = 0x27c11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c120: 0xc7a100b8
    ctx->pc = 0x27c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c124: 0x46010002
    ctx->pc = 0x27c124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27c128: 0x46001080
    ctx->pc = 0x27c128u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27c12c: 0x3c013e4c
    ctx->pc = 0x27c12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x27c130: 0x3421cccd
    ctx->pc = 0x27c130u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27c134: 0x44810000
    ctx->pc = 0x27c134u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c138: 0x4600a002
    ctx->pc = 0x27c138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27c13c: 0x4600a834
    ctx->pc = 0x27c13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c140: 0x0
    ctx->pc = 0x27c140u;
    // NOP
    // 0x27c144: 0x45000005
    ctx->pc = 0x27C144u;
    {
        const bool branch_taken_0x27c144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C148u;
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        if (branch_taken_0x27c144) {
            ctx->pc = 0x27C15Cu;
            goto label_27c15c;
        }
    }
    ctx->pc = 0x27C14Cu;
    // 0x27c14c: 0x3c013f59
    ctx->pc = 0x27c14cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16217 << 16));
    // 0x27c150: 0x3421999a
    ctx->pc = 0x27c150u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x27c154: 0x44810000
    ctx->pc = 0x27c154u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c158: 0x46000842
    ctx->pc = 0x27c158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27c15c:
    // 0x27c15c: 0x46011034
    ctx->pc = 0x27c15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c160: 0x45010031
    ctx->pc = 0x27C160u;
    {
        const bool branch_taken_0x27c160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c160) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C168u;
label_27c168:
    // 0x27c168: 0x966200c4
    ctx->pc = 0x27c168u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27c16c: 0x24420001
    ctx->pc = 0x27c16cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c170: 0xa66200c4
    ctx->pc = 0x27c170u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c174: 0xc6000214
    ctx->pc = 0x27c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c178: 0x461c0036
    ctx->pc = 0x27c178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c17c: 0x0
    ctx->pc = 0x27c17cu;
    // NOP
    // 0x27c180: 0x45000002
    ctx->pc = 0x27C180u;
    {
        const bool branch_taken_0x27c180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C184u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x27c180) {
            ctx->pc = 0x27C18Cu;
            goto label_27c18c;
        }
    }
    ctx->pc = 0x27C188u;
    // 0x27c188: 0x902d
    ctx->pc = 0x27c188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c18c:
    // 0x27c18c: 0x200202d
    ctx->pc = 0x27c18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c190: 0x4600bb06
    ctx->pc = 0x27c190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27c194: 0x26e5ffff
    ctx->pc = 0x27c194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x27c198: 0x8e6600b4
    ctx->pc = 0x27c198u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27c19c: 0x382d
    ctx->pc = 0x27c19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c1a0: 0x27a800a0
    ctx->pc = 0x27c1a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 160));
    // 0x27c1a4: 0xc08e7bc
    ctx->pc = 0x27C1A4u;
    SET_GPR_U32(ctx, 31, 0x27C1ACu);
    ctx->pc = 0x27C1A8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C1ACu; }
    }
    if (ctx->pc != 0x27C1ACu) { return; }
    ctx->pc = 0x27C1ACu;
    // 0x27c1ac: 0x40882d
    ctx->pc = 0x27c1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c1b0: 0x620001d
    ctx->pc = 0x27C1B0u;
    {
        const bool branch_taken_0x27c1b0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x27c1b0) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C1B8u;
    // 0x27c1b8: 0x4617f034
    ctx->pc = 0x27c1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c1bc: 0x0
    ctx->pc = 0x27c1bcu;
    // NOP
    // 0x27c1c0: 0x45000009
    ctx->pc = 0x27C1C0u;
    {
        const bool branch_taken_0x27c1c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C1C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
        if (branch_taken_0x27c1c0) {
            ctx->pc = 0x27C1E8u;
            goto label_27c1e8;
        }
    }
    ctx->pc = 0x27C1C8u;
    // 0x27c1c8: 0x8e620064
    ctx->pc = 0x27c1c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c1cc: 0x431024
    ctx->pc = 0x27c1ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c1d0: 0x14400006
    ctx->pc = 0x27C1D0u;
    {
        const bool branch_taken_0x27c1d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C1D4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x27c1d0) {
            ctx->pc = 0x27C1ECu;
            goto label_27c1ec;
        }
    }
    ctx->pc = 0x27C1D8u;
    // 0x27c1d8: 0x2141021
    ctx->pc = 0x27c1d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x27c1dc: 0xc6a0ffa4
    ctx->pc = 0x27c1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c1e0: 0x4600d800
    ctx->pc = 0x27c1e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
    // 0x27c1e4: 0xe44002c8
    ctx->pc = 0x27c1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 712), bits); }
label_27c1e8:
    // 0x27c1e8: 0x8fa500e0
    ctx->pc = 0x27c1e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27c1ec:
    // 0x27c1ec: 0x1ae00007
    ctx->pc = 0x27C1ECu;
    {
        const bool branch_taken_0x27c1ec = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x27C1F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 5));
        if (branch_taken_0x27c1ec) {
            ctx->pc = 0x27C20Cu;
            goto label_27c20c;
        }
    }
    ctx->pc = 0x27C1F4u;
    // 0x27c1f4: 0x8fa400f4
    ctx->pc = 0x27c1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x27c1f8: 0x200282d
    ctx->pc = 0x27c1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c1fc: 0x240302d
    ctx->pc = 0x27c1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c200: 0x220382d
    ctx->pc = 0x27c200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c204: 0xc0a4424
    ctx->pc = 0x27C204u;
    SET_GPR_U32(ctx, 31, 0x27C20Cu);
    ctx->pc = 0x27C208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291090u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDamagedEnemy_0x291090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C20Cu; }
    }
    if (ctx->pc != 0x27C20Cu) { return; }
    ctx->pc = 0x27C20Cu;
label_27c20c:
    // 0x27c20c: 0x866400be
    ctx->pc = 0x27c20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
    // 0x27c210: 0x4800005
    ctx->pc = 0x27C210u;
    {
        const bool branch_taken_0x27c210 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27C214u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x27c210) {
            ctx->pc = 0x27C228u;
            goto label_27c228;
        }
    }
    ctx->pc = 0x27C218u;
    // 0x27c218: 0x44806000
    ctx->pc = 0x27c218u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27c21c: 0x302d
    ctx->pc = 0x27c21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c220: 0xc09f5fa
    ctx->pc = 0x27C220u;
    SET_GPR_U32(ctx, 31, 0x27C228u);
    ctx->pc = 0x27C224u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C228u; }
    }
    if (ctx->pc != 0x27C228u) { return; }
    ctx->pc = 0x27C228u;
label_27c228:
    // 0x27c228: 0xc0a00ea
    ctx->pc = 0x27C228u;
    SET_GPR_U32(ctx, 31, 0x27C230u);
    ctx->pc = 0x2803A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridEnemy_0x2803a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C230u; }
    }
    if (ctx->pc != 0x27C230u) { return; }
    ctx->pc = 0x27C230u;
    // 0x27c230: 0x40902d
    ctx->pc = 0x27c230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c234: 0x641ff82
    ctx->pc = 0x27C234u;
    {
        const bool branch_taken_0x27c234 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x27C238u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x27c234) {
            ctx->pc = 0x27C040u;
            goto label_27c040;
        }
    }
    ctx->pc = 0x27C23Cu;
    // 0x27c23c: 0x10000068
    ctx->pc = 0x27C23Cu;
    {
        const bool branch_taken_0x27c23c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27c23c) {
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C244u;
label_27c244:
    // 0x27c244: 0x3ab50001
    ctx->pc = 0x27c244u;
    SET_GPR_U32(ctx, 21, XOR32(GPR_U32(ctx, 21), 1));
    // 0x27c248: 0x32b50001
    ctx->pc = 0x27c248u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 21), 1));
    // 0x27c24c: 0x482d
    ctx->pc = 0x27c24cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c250: 0x4480a000
    ctx->pc = 0x27c250u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x27c254: 0x17f080
    ctx->pc = 0x27c254u;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 23), 2));
label_27c258:
    // 0x27c258: 0x27a40080
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x27c25c: 0x27a50090
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x27c260: 0x27a600c0
    ctx->pc = 0x27c260u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27c264: 0x4600c306
    ctx->pc = 0x27c264u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x27c268: 0x2e0382d
    ctx->pc = 0x27c268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c26c: 0xc0a42b0
    ctx->pc = 0x27C26Cu;
    SET_GPR_U32(ctx, 31, 0x27C274u);
    ctx->pc = 0x27C270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MissileCollideEnemy_0x290ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C274u; }
    }
    if (ctx->pc != 0x27C274u) { return; }
    ctx->pc = 0x27C274u;
    // 0x27c274: 0x40a02d
    ctx->pc = 0x27c274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c278: 0x6800057
    ctx->pc = 0x27C278u;
    {
        const bool branch_taken_0x27c278 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x27C27Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x27c278) {
            ctx->pc = 0x27C3D8u;
            goto label_27c3d8;
        }
    }
    ctx->pc = 0x27C280u;
    // 0x27c280: 0x3c030033
    ctx->pc = 0x27c280u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x27c284: 0x2463dfd0
    ctx->pc = 0x27c284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x27c288: 0x600013
    ctx->pc = 0x27c288u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x27c28c: 0x72828000
    ctx->pc = 0x27c28cu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27c290: 0x8e620064
    ctx->pc = 0x27c290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c294: 0x30420400
    ctx->pc = 0x27c294u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x27c298: 0x54400044
    ctx->pc = 0x27C298u;
    {
        const bool branch_taken_0x27c298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27c298) {
            ctx->pc = 0x27C29Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27C3ACu;
            goto label_27c3ac;
        }
    }
    ctx->pc = 0x27C2A0u;
    // 0x27c2a0: 0xc6600080
    ctx->pc = 0x27c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c2a4: 0xe7a000a0
    ctx->pc = 0x27c2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27c2a8: 0xc6600084
    ctx->pc = 0x27c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c2ac: 0xe7a000a4
    ctx->pc = 0x27c2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27c2b0: 0xc6600088
    ctx->pc = 0x27c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c2b4: 0xe7a000a8
    ctx->pc = 0x27c2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27c2b8: 0x966200c4
    ctx->pc = 0x27c2b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27c2bc: 0x24420001
    ctx->pc = 0x27c2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c2c0: 0xa66200c4
    ctx->pc = 0x27c2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c2c4: 0xc0b58a4
    ctx->pc = 0x27C2C4u;
    SET_GPR_U32(ctx, 31, 0x27C2CCu);
    ctx->pc = 0x27C2C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C2CCu; }
    }
    if (ctx->pc != 0x27C2CCu) { return; }
    ctx->pc = 0x27C2CCu;
    // 0x27c2cc: 0xc6000214
    ctx->pc = 0x27c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c2d0: 0x46140036
    ctx->pc = 0x27c2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c2d4: 0x0
    ctx->pc = 0x27c2d4u;
    // NOP
    // 0x27c2d8: 0x45000002
    ctx->pc = 0x27C2D8u;
    {
        const bool branch_taken_0x27c2d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C2DCu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x27c2d8) {
            ctx->pc = 0x27C2E4u;
            goto label_27c2e4;
        }
    }
    ctx->pc = 0x27C2E0u;
    // 0x27c2e0: 0x902d
    ctx->pc = 0x27c2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c2e4:
    // 0x27c2e4: 0x200202d
    ctx->pc = 0x27c2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c2e8: 0x4600bb06
    ctx->pc = 0x27c2e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27c2ec: 0x26e5ffff
    ctx->pc = 0x27c2ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x27c2f0: 0x8e6600b4
    ctx->pc = 0x27c2f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27c2f4: 0x27a700c0
    ctx->pc = 0x27c2f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27c2f8: 0x27a800a0
    ctx->pc = 0x27c2f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 160));
    // 0x27c2fc: 0xc08e7bc
    ctx->pc = 0x27C2FCu;
    SET_GPR_U32(ctx, 31, 0x27C304u);
    ctx->pc = 0x27C300u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C304u; }
    }
    if (ctx->pc != 0x27C304u) { return; }
    ctx->pc = 0x27C304u;
    // 0x27c304: 0x40882d
    ctx->pc = 0x27c304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c308: 0x622001c
    ctx->pc = 0x27C308u;
    {
        const bool branch_taken_0x27c308 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x27c308) {
            ctx->pc = 0x27C30Cu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x27C37Cu;
            goto label_27c37c;
        }
    }
    ctx->pc = 0x27C310u;
    // 0x27c310: 0x4617f034
    ctx->pc = 0x27c310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c314: 0x0
    ctx->pc = 0x27c314u;
    // NOP
    // 0x27c318: 0x4500000e
    ctx->pc = 0x27C318u;
    {
        const bool branch_taken_0x27c318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C31Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
        if (branch_taken_0x27c318) {
            ctx->pc = 0x27C354u;
            goto label_27c354;
        }
    }
    ctx->pc = 0x27C320u;
    // 0x27c320: 0x8e620064
    ctx->pc = 0x27c320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c324: 0x431024
    ctx->pc = 0x27c324u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c328: 0x1440000a
    ctx->pc = 0x27C328u;
    {
        const bool branch_taken_0x27c328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C32Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        if (branch_taken_0x27c328) {
            ctx->pc = 0x27C354u;
            goto label_27c354;
        }
    }
    ctx->pc = 0x27C330u;
    // 0x27c330: 0x3c020031
    ctx->pc = 0x27c330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27c334: 0xc440ffa4
    ctx->pc = 0x27c334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c338: 0x4600d800
    ctx->pc = 0x27c338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
    // 0x27c33c: 0xe46002c8
    ctx->pc = 0x27c33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 712), bits); }
    // 0x27c340: 0x8e620064
    ctx->pc = 0x27c340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c344: 0x3c03feff
    ctx->pc = 0x27c344u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65279 << 16));
    // 0x27c348: 0x3463ffff
    ctx->pc = 0x27c348u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x27c34c: 0x431024
    ctx->pc = 0x27c34cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c350: 0xae620064
    ctx->pc = 0x27c350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_27c354:
    // 0x27c354: 0x1ae00006
    ctx->pc = 0x27C354u;
    {
        const bool branch_taken_0x27c354 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x27C358u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 244)));
        if (branch_taken_0x27c354) {
            ctx->pc = 0x27C370u;
            goto label_27c370;
        }
    }
    ctx->pc = 0x27C35Cu;
    // 0x27c35c: 0x200282d
    ctx->pc = 0x27c35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c360: 0x240302d
    ctx->pc = 0x27c360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c364: 0x220382d
    ctx->pc = 0x27c364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c368: 0xc0a4424
    ctx->pc = 0x27C368u;
    SET_GPR_U32(ctx, 31, 0x27C370u);
    ctx->pc = 0x27C36Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291090u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDamagedEnemy_0x291090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C370u; }
    }
    if (ctx->pc != 0x27C370u) { return; }
    ctx->pc = 0x27C370u;
label_27c370:
    // 0x27c370: 0x24160002
    ctx->pc = 0x27c370u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c374: 0x24020003
    ctx->pc = 0x27c374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c378: 0x51b00b
    ctx->pc = 0x27c378u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 2));
label_27c37c:
    // 0x27c37c: 0x8fa400f0
    ctx->pc = 0x27c37cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27c380: 0x1480ffb5
    ctx->pc = 0x27C380u;
    {
        const bool branch_taken_0x27c380 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C384u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x27c380) {
            ctx->pc = 0x27C258u;
            goto label_27c258;
        }
    }
    ctx->pc = 0x27C388u;
    // 0x27c388: 0xc7a000c0
    ctx->pc = 0x27c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c38c: 0xe7a00090
    ctx->pc = 0x27c38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27c390: 0xc7a000c4
    ctx->pc = 0x27c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c394: 0xe7a00094
    ctx->pc = 0x27c394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27c398: 0xc7a000c8
    ctx->pc = 0x27c398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c39c: 0xe7a00098
    ctx->pc = 0x27c39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27c3a0: 0x24050001
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c3a4: 0x10000009
    ctx->pc = 0x27C3A4u;
    {
        const bool branch_taken_0x27c3a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C3A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
        if (branch_taken_0x27c3a4) {
            ctx->pc = 0x27C3CCu;
            goto label_27c3cc;
        }
    }
    ctx->pc = 0x27C3ACu;
label_27c3ac:
    // 0x27c3ac: 0x46160001
    ctx->pc = 0x27c3acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x27c3b0: 0x3c013d88
    ctx->pc = 0x27c3b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15752 << 16));
    // 0x27c3b4: 0x34219a02
    ctx->pc = 0x27c3b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39426));
    // 0x27c3b8: 0x44810800
    ctx->pc = 0x27c3b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27c3bc: 0x46000834
    ctx->pc = 0x27c3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c3c0: 0x0
    ctx->pc = 0x27c3c0u;
    // NOP
    // 0x27c3c4: 0x45030001
    ctx->pc = 0x27C3C4u;
    {
        const bool branch_taken_0x27c3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c3c4) {
            ctx->pc = 0x27C3C8u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x27C3CCu;
            goto label_27c3cc;
        }
    }
    ctx->pc = 0x27C3CCu;
label_27c3cc:
    // 0x27c3cc: 0x8fa200f0
    ctx->pc = 0x27c3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27c3d0: 0x1440ffa1
    ctx->pc = 0x27C3D0u;
    {
        const bool branch_taken_0x27c3d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C3D4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x27c3d0) {
            ctx->pc = 0x27C258u;
            goto label_27c258;
        }
    }
    ctx->pc = 0x27C3D8u;
label_27c3d8:
    // 0x27c3d8: 0x8fa300f0
    ctx->pc = 0x27c3d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27c3dc: 0x3b00b
    ctx->pc = 0x27c3dcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 0));
label_27c3e0:
    // 0x27c3e0: 0x16c000e8
    ctx->pc = 0x27C3E0u;
    {
        const bool branch_taken_0x27c3e0 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x27c3e0) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C3E8u;
    // 0x27c3e8: 0x8e630064
    ctx->pc = 0x27c3e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c3ec: 0x30620008
    ctx->pc = 0x27c3ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
    // 0x27c3f0: 0x104000e4
    ctx->pc = 0x27C3F0u;
    {
        const bool branch_taken_0x27c3f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C3F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x27c3f0) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C3F8u;
    // 0x27c3f8: 0x8c42d4c0
    ctx->pc = 0x27c3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x27c3fc: 0x104000e1
    ctx->pc = 0x27C3FCu;
    {
        const bool branch_taken_0x27c3fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C400u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 228)));
        if (branch_taken_0x27c3fc) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C404u;
    // 0x27c404: 0x10800039
    ctx->pc = 0x27C404u;
    {
        const bool branch_taken_0x27c404 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C408u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x27c404) {
            ctx->pc = 0x27C4ECu;
            goto label_27c4ec;
        }
    }
    ctx->pc = 0x27C40Cu;
    // 0x27c40c: 0x4618e034
    ctx->pc = 0x27c40cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c410: 0x0
    ctx->pc = 0x27c410u;
    // NOP
    // 0x27c414: 0x450000db
    ctx->pc = 0x27C414u;
    {
        const bool branch_taken_0x27c414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C418u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1024));
        if (branch_taken_0x27c414) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C41Cu;
    // 0x27c41c: 0x144000d9
    ctx->pc = 0x27C41Cu;
    {
        const bool branch_taken_0x27c41c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C420u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x27c41c) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C424u;
    // 0x27c424: 0x4600c306
    ctx->pc = 0x27c424u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x27c428: 0xc0a684c
    ctx->pc = 0x27C428u;
    SET_GPR_U32(ctx, 31, 0x27C430u);
    ctx->pc = 0x27C42Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A130u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideStart_0x29a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C430u; }
    }
    if (ctx->pc != 0x27C430u) { return; }
    ctx->pc = 0x27C430u;
    // 0x27c430: 0x10000021
    ctx->pc = 0x27C430u;
    {
        const bool branch_taken_0x27c430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C434u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x27c430) {
            ctx->pc = 0x27C4B8u;
            goto label_27c4b8;
        }
    }
    ctx->pc = 0x27C438u;
label_27c438:
    // 0x27c438: 0x866500ea
    ctx->pc = 0x27c438u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x27c43c: 0xc0a67da
    ctx->pc = 0x27C43Cu;
    SET_GPR_U32(ctx, 31, 0x27C444u);
    ctx->pc = 0x27C440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->pc = 0x299F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterSetFxHitTime_0x299f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C444u; }
    }
    if (ctx->pc != 0x27C444u) { return; }
    ctx->pc = 0x27C444u;
    // 0x27c444: 0x8e420004
    ctx->pc = 0x27c444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27c448: 0x8c420120
    ctx->pc = 0x27c448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x27c44c: 0x84420020
    ctx->pc = 0x27c44cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27c450: 0x54500006
    ctx->pc = 0x27C450u;
    {
        const bool branch_taken_0x27c450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x27c450) {
            ctx->pc = 0x27C454u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
            ctx->pc = 0x27C46Cu;
            goto label_27c46c;
        }
    }
    ctx->pc = 0x27C458u;
    // 0x27c458: 0x8e620064
    ctx->pc = 0x27c458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c45c: 0x30420800
    ctx->pc = 0x27c45cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x27c460: 0x14400016
    ctx->pc = 0x27C460u;
    {
        const bool branch_taken_0x27c460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C464u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x27c460) {
            ctx->pc = 0x27C4BCu;
            goto label_27c4bc;
        }
    }
    ctx->pc = 0x27C468u;
    // 0x27c468: 0x966200c4
    ctx->pc = 0x27c468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
label_27c46c:
    // 0x27c46c: 0x24420001
    ctx->pc = 0x27c46cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c470: 0xa66200c4
    ctx->pc = 0x27c470u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c474: 0x240202d
    ctx->pc = 0x27c474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c478: 0x4600bb06
    ctx->pc = 0x27c478u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27c47c: 0x26e5ffff
    ctx->pc = 0x27c47cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x27c480: 0x8e6600b4
    ctx->pc = 0x27c480u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27c484: 0x382d
    ctx->pc = 0x27c484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c488: 0x27a800a0
    ctx->pc = 0x27c488u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 160));
    // 0x27c48c: 0xc0a6498
    ctx->pc = 0x27C48Cu;
    SET_GPR_U32(ctx, 31, 0x27C494u);
    ctx->pc = 0x27C490u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x299260u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamage_0x299260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C494u; }
    }
    if (ctx->pc != 0x27C494u) { return; }
    ctx->pc = 0x27C494u;
    // 0x27c494: 0x4400009
    ctx->pc = 0x27C494u;
    {
        const bool branch_taken_0x27c494 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27C498u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x27c494) {
            ctx->pc = 0x27C4BCu;
            goto label_27c4bc;
        }
    }
    ctx->pc = 0x27C49Cu;
    // 0x27c49c: 0x866400be
    ctx->pc = 0x27c49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
    // 0x27c4a0: 0x4800005
    ctx->pc = 0x27C4A0u;
    {
        const bool branch_taken_0x27c4a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27C4A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 80));
        if (branch_taken_0x27c4a0) {
            ctx->pc = 0x27C4B8u;
            goto label_27c4b8;
        }
    }
    ctx->pc = 0x27C4A8u;
    // 0x27c4a8: 0x44806000
    ctx->pc = 0x27c4a8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27c4ac: 0x302d
    ctx->pc = 0x27c4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4b0: 0xc09f5fa
    ctx->pc = 0x27C4B0u;
    SET_GPR_U32(ctx, 31, 0x27C4B8u);
    ctx->pc = 0x27C4B4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4B8u; }
    }
    if (ctx->pc != 0x27C4B8u) { return; }
    ctx->pc = 0x27C4B8u;
label_27c4b8:
    // 0x27c4b8: 0x27a40090
    ctx->pc = 0x27c4b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
label_27c4bc:
    // 0x27c4bc: 0x4600c306
    ctx->pc = 0x27c4bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x27c4c0: 0x27a500b0
    ctx->pc = 0x27c4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x27c4c4: 0xc66d009c
    ctx->pc = 0x27c4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27c4c8: 0x27a600a0
    ctx->pc = 0x27c4c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 160));
    // 0x27c4cc: 0x866700ea
    ctx->pc = 0x27c4ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x27c4d0: 0xc0a68f0
    ctx->pc = 0x27C4D0u;
    SET_GPR_U32(ctx, 31, 0x27C4D8u);
    ctx->pc = 0x27C4D4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
    ctx->pc = 0x29A3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterExpCollide_0x29a3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4D8u; }
    }
    if (ctx->pc != 0x27C4D8u) { return; }
    ctx->pc = 0x27C4D8u;
    // 0x27c4d8: 0x40902d
    ctx->pc = 0x27c4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4dc: 0x1640ffd6
    ctx->pc = 0x27C4DCu;
    {
        const bool branch_taken_0x27c4dc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C4E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27c4dc) {
            ctx->pc = 0x27C438u;
            goto label_27c438;
        }
    }
    ctx->pc = 0x27C4E4u;
    // 0x27c4e4: 0x100000a7
    ctx->pc = 0x27C4E4u;
    {
        const bool branch_taken_0x27c4e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27c4e4) {
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C4ECu;
label_27c4ec:
    // 0x27c4ec: 0x200202d
    ctx->pc = 0x27c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4f0: 0x4600c306
    ctx->pc = 0x27c4f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x27c4f4: 0xc0a684c
    ctx->pc = 0x27C4F4u;
    SET_GPR_U32(ctx, 31, 0x27C4FCu);
    ctx->pc = 0x27C4F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A130u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideStart_0x29a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C4FCu; }
    }
    if (ctx->pc != 0x27C4FCu) { return; }
    ctx->pc = 0x27C4FCu;
    // 0x27c4fc: 0x27a40080
    ctx->pc = 0x27c4fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x27c500: 0x200282d
    ctx->pc = 0x27c500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c504: 0x27a600c0
    ctx->pc = 0x27c504u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27c508: 0x4600c306
    ctx->pc = 0x27c508u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x27c50c: 0x866700ea
    ctx->pc = 0x27c50cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x27c510: 0x4600db46
    ctx->pc = 0x27c510u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x27c514: 0xc0a6a5c
    ctx->pc = 0x27C514u;
    SET_GPR_U32(ctx, 31, 0x27C51Cu);
    ctx->pc = 0x27C518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A970u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLineCollide_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C51Cu; }
    }
    if (ctx->pc != 0x27C51Cu) { return; }
    ctx->pc = 0x27C51Cu;
    // 0x27c51c: 0x40902d
    ctx->pc = 0x27c51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c520: 0x12400096
    ctx->pc = 0x27C520u;
    {
        const bool branch_taken_0x27c520 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C524u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27c520) {
            ctx->pc = 0x27C77Cu;
            goto label_27c77c;
        }
    }
    ctx->pc = 0x27C528u;
    // 0x27c528: 0x866500ea
    ctx->pc = 0x27c528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x27c52c: 0xc0a67da
    ctx->pc = 0x27C52Cu;
    SET_GPR_U32(ctx, 31, 0x27C534u);
    ctx->pc = 0x27C530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    ctx->pc = 0x299F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterSetFxHitTime_0x299f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C534u; }
    }
    if (ctx->pc != 0x27C534u) { return; }
    ctx->pc = 0x27C534u;
    // 0x27c534: 0x8e420004
    ctx->pc = 0x27c534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27c538: 0x8c420120
    ctx->pc = 0x27c538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x27c53c: 0x84440020
    ctx->pc = 0x27c53cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27c540: 0x38820004
    ctx->pc = 0x27c540u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x27c544: 0x8fa300f0
    ctx->pc = 0x27c544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27c548: 0x2180a
    ctx->pc = 0x27c548u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x27c54c: 0xafa300f0
    ctx->pc = 0x27c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x27c550: 0x8e630064
    ctx->pc = 0x27c550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c554: 0x30620400
    ctx->pc = 0x27c554u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1024));
    // 0x27c558: 0x1440007f
    ctx->pc = 0x27C558u;
    {
        const bool branch_taken_0x27c558 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C55Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x27c558) {
            ctx->pc = 0x27C758u;
            goto label_27c758;
        }
    }
    ctx->pc = 0x27C560u;
    // 0x27c560: 0x54850005
    ctx->pc = 0x27C560u;
    {
        const bool branch_taken_0x27c560 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        if (branch_taken_0x27c560) {
            ctx->pc = 0x27C564u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27C578u;
            goto label_27c578;
        }
    }
    ctx->pc = 0x27C568u;
    // 0x27c568: 0x30620800
    ctx->pc = 0x27c568u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
    // 0x27c56c: 0x5440007b
    ctx->pc = 0x27C56Cu;
    {
        const bool branch_taken_0x27c56c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27c56c) {
            ctx->pc = 0x27C570u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27C75Cu;
            goto label_27c75c;
        }
    }
    ctx->pc = 0x27C574u;
    // 0x27c574: 0xc6600080
    ctx->pc = 0x27c574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c578:
    // 0x27c578: 0xe7a000a0
    ctx->pc = 0x27c578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27c57c: 0xc6600084
    ctx->pc = 0x27c57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c580: 0xe7a000a4
    ctx->pc = 0x27c580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27c584: 0xc6600088
    ctx->pc = 0x27c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c588: 0xe7a000a8
    ctx->pc = 0x27c588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27c58c: 0x966200c4
    ctx->pc = 0x27c58cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27c590: 0x24420001
    ctx->pc = 0x27c590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c594: 0xa66200c4
    ctx->pc = 0x27c594u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c598: 0x27b000a0
    ctx->pc = 0x27c598u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 160));
    // 0x27c59c: 0xc0b58a4
    ctx->pc = 0x27C59Cu;
    SET_GPR_U32(ctx, 31, 0x27C5A4u);
    ctx->pc = 0x27C5A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C5A4u; }
    }
    if (ctx->pc != 0x27C5A4u) { return; }
    ctx->pc = 0x27C5A4u;
    // 0x27c5a4: 0x240202d
    ctx->pc = 0x27c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5a8: 0x4600bb06
    ctx->pc = 0x27c5a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27c5ac: 0x26e5ffff
    ctx->pc = 0x27c5acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x27c5b0: 0x8e6600b4
    ctx->pc = 0x27c5b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27c5b4: 0x27a700c0
    ctx->pc = 0x27c5b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27c5b8: 0x200402d
    ctx->pc = 0x27c5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5bc: 0xc0a6498
    ctx->pc = 0x27C5BCu;
    SET_GPR_U32(ctx, 31, 0x27C5C4u);
    ctx->pc = 0x27C5C0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x299260u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamage_0x299260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C5C4u; }
    }
    if (ctx->pc != 0x27C5C4u) { return; }
    ctx->pc = 0x27C5C4u;
    // 0x27c5c4: 0x40882d
    ctx->pc = 0x27c5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5c8: 0x6200003
    ctx->pc = 0x27C5C8u;
    {
        const bool branch_taken_0x27c5c8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x27C5CCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x27c5c8) {
            ctx->pc = 0x27C5D8u;
            goto label_27c5d8;
        }
    }
    ctx->pc = 0x27C5D0u;
    // 0x27c5d0: 0x24020003
    ctx->pc = 0x27c5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c5d4: 0x51b00b
    ctx->pc = 0x27c5d4u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 2));
label_27c5d8:
    // 0x27c5d8: 0x8fa400f0
    ctx->pc = 0x27c5d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27c5dc: 0x14800009
    ctx->pc = 0x27C5DCu;
    {
        const bool branch_taken_0x27c5dc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C5E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27c5dc) {
            ctx->pc = 0x27C604u;
            goto label_27c604;
        }
    }
    ctx->pc = 0x27C5E4u;
    // 0x27c5e4: 0xc7a000c0
    ctx->pc = 0x27c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c5e8: 0xe7a00090
    ctx->pc = 0x27c5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27c5ec: 0xc7a000c4
    ctx->pc = 0x27c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c5f0: 0xe7a00094
    ctx->pc = 0x27c5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27c5f4: 0xc7a000c8
    ctx->pc = 0x27c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c5f8: 0xe7a00098
    ctx->pc = 0x27c5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27c5fc: 0x24050001
    ctx->pc = 0x27c5fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c600: 0xafa500ec
    ctx->pc = 0x27c600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
label_27c604:
    // 0x27c604: 0x8c42e880
    ctx->pc = 0x27c604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x27c608: 0x2442fffe
    ctx->pc = 0x27c608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x27c60c: 0x2c420002
    ctx->pc = 0x27c60cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x27c610: 0x10400044
    ctx->pc = 0x27C610u;
    {
        const bool branch_taken_0x27c610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C614u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x27c610) {
            ctx->pc = 0x27C724u;
            goto label_27c724;
        }
    }
    ctx->pc = 0x27C618u;
    // 0x27c618: 0x8c43d934
    ctx->pc = 0x27c618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x27c61c: 0x24020024
    ctx->pc = 0x27c61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x27c620: 0x10620018
    ctx->pc = 0x27C620u;
    {
        const bool branch_taken_0x27c620 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27C624u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 37));
        if (branch_taken_0x27c620) {
            ctx->pc = 0x27C684u;
            goto label_27c684;
        }
    }
    ctx->pc = 0x27C628u;
    // 0x27c628: 0x10400005
    ctx->pc = 0x27C628u;
    {
        const bool branch_taken_0x27c628 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C62Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x27c628) {
            ctx->pc = 0x27C640u;
            goto label_27c640;
        }
    }
    ctx->pc = 0x27C630u;
    // 0x27c630: 0x10620008
    ctx->pc = 0x27C630u;
    {
        const bool branch_taken_0x27c630 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27C634u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x27c630) {
            ctx->pc = 0x27C654u;
            goto label_27c654;
        }
    }
    ctx->pc = 0x27C638u;
    // 0x27c638: 0x10000034
    ctx->pc = 0x27C638u;
    {
        const bool branch_taken_0x27c638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27c638) {
            ctx->pc = 0x27C70Cu;
            goto label_27c70c;
        }
    }
    ctx->pc = 0x27C640u;
label_27c640:
    // 0x27c640: 0x24020026
    ctx->pc = 0x27c640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
    // 0x27c644: 0x10620028
    ctx->pc = 0x27C644u;
    {
        const bool branch_taken_0x27c644 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27C648u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x27c644) {
            ctx->pc = 0x27C6E8u;
            goto label_27c6e8;
        }
    }
    ctx->pc = 0x27C64Cu;
    // 0x27c64c: 0x1000002f
    ctx->pc = 0x27C64Cu;
    {
        const bool branch_taken_0x27c64c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C650u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x27c64c) {
            ctx->pc = 0x27C70Cu;
            goto label_27c70c;
        }
    }
    ctx->pc = 0x27C654u;
label_27c654:
    // 0x27c654: 0x3c020034
    ctx->pc = 0x27c654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27c658: 0x3c04003b
    ctx->pc = 0x27c658u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27c65c: 0x2484bed8
    ctx->pc = 0x27c65cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950616));
    // 0x27c660: 0x282d
    ctx->pc = 0x27c660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c664: 0x8c46cdb4
    ctx->pc = 0x27c664u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
    // 0x27c668: 0xc0382d
    ctx->pc = 0x27c668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c66c: 0xc0b1b56
    ctx->pc = 0x27C66Cu;
    SET_GPR_U32(ctx, 31, 0x27C674u);
    ctx->pc = 0x27C670u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C674u; }
    }
    if (ctx->pc != 0x27C674u) { return; }
    ctx->pc = 0x27C674u;
    // 0x27c674: 0xae420b48
    ctx->pc = 0x27c674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2888), GPR_U32(ctx, 2));
    // 0x27c678: 0x240204b0
    ctx->pc = 0x27c678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1200));
    // 0x27c67c: 0x10000016
    ctx->pc = 0x27C67Cu;
    {
        const bool branch_taken_0x27c67c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C680u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 2892), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x27c67c) {
            ctx->pc = 0x27C6D8u;
            goto label_27c6d8;
        }
    }
    ctx->pc = 0x27C684u;
label_27c684:
    // 0x27c684: 0x24020708
    ctx->pc = 0x27c684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1800));
    // 0x27c688: 0xa6420b4e
    ctx->pc = 0x27c688u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2894), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c68c: 0xafa000d0
    ctx->pc = 0x27c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x27c690: 0x3c0140c0
    ctx->pc = 0x27c690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x27c694: 0x44810000
    ctx->pc = 0x27c694u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c698: 0xe7a000d4
    ctx->pc = 0x27c698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x27c69c: 0xafa000d8
    ctx->pc = 0x27c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x27c6a0: 0x2404005a
    ctx->pc = 0x27c6a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 90));
    // 0x27c6a4: 0x27a500d0
    ctx->pc = 0x27c6a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
    // 0x27c6a8: 0x3c0141e0
    ctx->pc = 0x27c6a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16864 << 16));
    // 0x27c6ac: 0x44816000
    ctx->pc = 0x27c6acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27c6b0: 0x302d
    ctx->pc = 0x27c6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6b4: 0x3c070040
    ctx->pc = 0x27c6b4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)64 << 16));
    // 0x27c6b8: 0xc09f5fa
    ctx->pc = 0x27C6B8u;
    SET_GPR_U32(ctx, 31, 0x27C6C0u);
    ctx->pc = 0x27C6BCu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C6C0u; }
    }
    if (ctx->pc != 0x27C6C0u) { return; }
    ctx->pc = 0x27C6C0u;
    // 0x27c6c0: 0x40802d
    ctx->pc = 0x27c6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6c4: 0x200202d
    ctx->pc = 0x27c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6c8: 0xc09f732
    ctx->pc = 0x27C6C8u;
    SET_GPR_U32(ctx, 31, 0x27C6D0u);
    ctx->pc = 0x27C6CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C6D0u; }
    }
    if (ctx->pc != 0x27C6D0u) { return; }
    ctx->pc = 0x27C6D0u;
    // 0x27c6d0: 0x3c020034
    ctx->pc = 0x27c6d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27c6d4: 0xac50e8a4
    ctx->pc = 0x27c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961316), GPR_U32(ctx, 16));
label_27c6d8:
    // 0x27c6d8: 0x3c030034
    ctx->pc = 0x27c6d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27c6dc: 0x24020004
    ctx->pc = 0x27c6dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x27c6e0: 0x10000009
    ctx->pc = 0x27C6E0u;
    {
        const bool branch_taken_0x27c6e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C6E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961280), GPR_U32(ctx, 2));
        if (branch_taken_0x27c6e0) {
            ctx->pc = 0x27C708u;
            goto label_27c708;
        }
    }
    ctx->pc = 0x27C6E8u;
label_27c6e8:
    // 0x27c6e8: 0xc0b1a8e
    ctx->pc = 0x27C6E8u;
    SET_GPR_U32(ctx, 31, 0x27C6F0u);
    ctx->pc = 0x27C6ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950632));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C6F0u; }
    }
    if (ctx->pc != 0x27C6F0u) { return; }
    ctx->pc = 0x27C6F0u;
    // 0x27c6f0: 0x8e4300d8
    ctx->pc = 0x27c6f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x27c6f4: 0x8c640078
    ctx->pc = 0x27c6f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x27c6f8: 0xc0b220e
    ctx->pc = 0x27C6F8u;
    SET_GPR_U32(ctx, 31, 0x27C700u);
    ctx->pc = 0x27C6FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C700u; }
    }
    if (ctx->pc != 0x27C700u) { return; }
    ctx->pc = 0x27C700u;
    // 0x27c700: 0x24024650
    ctx->pc = 0x27c700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18000));
    // 0x27c704: 0xa6420b4e
    ctx->pc = 0x27c704u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2894), (uint16_t)GPR_U32(ctx, 2));
label_27c708:
    // 0x27c708: 0x24040003
    ctx->pc = 0x27c708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_27c70c:
    // 0x27c70c: 0xc098382
    ctx->pc = 0x27C70Cu;
    SET_GPR_U32(ctx, 31, 0x27C714u);
    ctx->pc = 0x27C710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x260E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLegendItem_0x260e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C714u; }
    }
    if (ctx->pc != 0x27C714u) { return; }
    ctx->pc = 0x27C714u;
    // 0x27c714: 0x24030002
    ctx->pc = 0x27c714u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c718: 0x24040001
    ctx->pc = 0x27c718u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c71c: 0x96102a
    ctx->pc = 0x27c71cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 22)));
    // 0x27c720: 0x62b00a
    ctx->pc = 0x27c720u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 3));
label_27c724:
    // 0x27c724: 0x3c040034
    ctx->pc = 0x27c724u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x27c728: 0x8c83e880
    ctx->pc = 0x27c728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
    // 0x27c72c: 0x24020005
    ctx->pc = 0x27c72cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c730: 0x14620013
    ctx->pc = 0x27C730u;
    {
        const bool branch_taken_0x27c730 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27C734u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x27c730) {
            ctx->pc = 0x27C780u;
            goto label_27c780;
        }
    }
    ctx->pc = 0x27C738u;
    // 0x27c738: 0x3c020036
    ctx->pc = 0x27c738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x27c73c: 0x8c43d934
    ctx->pc = 0x27c73cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x27c740: 0x24020023
    ctx->pc = 0x27c740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x27c744: 0x5462000f
    ctx->pc = 0x27C744u;
    {
        const bool branch_taken_0x27c744 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x27c744) {
            ctx->pc = 0x27C748u;
            if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 0));
            ctx->pc = 0x27C784u;
            goto label_27c784;
        }
    }
    ctx->pc = 0x27C74Cu;
    // 0x27c74c: 0x24020006
    ctx->pc = 0x27c74cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x27c750: 0x1000000a
    ctx->pc = 0x27C750u;
    {
        const bool branch_taken_0x27c750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C754u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961280), GPR_U32(ctx, 2));
        if (branch_taken_0x27c750) {
            ctx->pc = 0x27C77Cu;
            goto label_27c77c;
        }
    }
    ctx->pc = 0x27C758u;
label_27c758:
    // 0x27c758: 0xc660006c
    ctx->pc = 0x27c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c75c:
    // 0x27c75c: 0x46160001
    ctx->pc = 0x27c75cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x27c760: 0x3c013d88
    ctx->pc = 0x27c760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15752 << 16));
    // 0x27c764: 0x34219a02
    ctx->pc = 0x27c764u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39426));
    // 0x27c768: 0x44810800
    ctx->pc = 0x27c768u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27c76c: 0x46000834
    ctx->pc = 0x27c76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c770: 0x0
    ctx->pc = 0x27c770u;
    // NOP
    // 0x27c774: 0x45030001
    ctx->pc = 0x27C774u;
    {
        const bool branch_taken_0x27c774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c774) {
            ctx->pc = 0x27C778u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x27C77Cu;
            goto label_27c77c;
        }
    }
    ctx->pc = 0x27C77Cu;
label_27c77c:
    // 0x27c77c: 0x8fa500f0
    ctx->pc = 0x27c77cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_27c780:
    // 0x27c780: 0x5b00b
    ctx->pc = 0x27c780u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 0));
label_27c784:
    // 0x27c784: 0x40034800
    ctx->pc = 0x27c784u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x27c788: 0x3c02003a
    ctx->pc = 0x27c788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x27c78c: 0x8c4421d0
    ctx->pc = 0x27c78cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x27c790: 0x8c820458
    ctx->pc = 0x27c790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1112)));
    // 0x27c794: 0x621823
    ctx->pc = 0x27c794u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c798: 0x8c820450
    ctx->pc = 0x27c798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1104)));
    // 0x27c79c: 0x621821
    ctx->pc = 0x27c79cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c7a0: 0xac830450
    ctx->pc = 0x27c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1104), GPR_U32(ctx, 3));
    // 0x27c7a4: 0x8c820454
    ctx->pc = 0x27c7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1108)));
    // 0x27c7a8: 0x24420001
    ctx->pc = 0x27c7a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c7ac: 0xac820454
    ctx->pc = 0x27c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1108), GPR_U32(ctx, 2));
    // 0x27c7b0: 0x40024800
    ctx->pc = 0x27c7b0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x27c7b4: 0x16c0011a
    ctx->pc = 0x27C7B4u;
    {
        const bool branch_taken_0x27c7b4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C7B8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1128), GPR_U32(ctx, 2));
        if (branch_taken_0x27c7b4) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27C7BCu;
    // 0x27c7bc: 0x8e620064
    ctx->pc = 0x27c7bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c7c0: 0x30420002
    ctx->pc = 0x27c7c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x27c7c4: 0x10400116
    ctx->pc = 0x27C7C4u;
    {
        const bool branch_taken_0x27c7c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C7C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 228)));
        if (branch_taken_0x27c7c4) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27C7CCu;
    // 0x27c7cc: 0x504000b2
    ctx->pc = 0x27C7CCu;
    {
        const bool branch_taken_0x27c7cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27c7cc) {
            ctx->pc = 0x27C7D0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
            ctx->pc = 0x27CA98u;
            goto label_27ca98;
        }
    }
    ctx->pc = 0x27C7D4u;
    // 0x27c7d4: 0x8e6200b4
    ctx->pc = 0x27c7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27c7d8: 0x30420400
    ctx->pc = 0x27c7d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x27c7dc: 0x10400009
    ctx->pc = 0x27C7DCu;
    {
        const bool branch_taken_0x27c7dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C7E0u;
        ctx->f[22] = FPU_MOV_S(ctx->f[24]);
        if (branch_taken_0x27c7dc) {
            ctx->pc = 0x27C804u;
            goto label_27c804;
        }
    }
    ctx->pc = 0x27C7E4u;
    // 0x27c7e4: 0x3c013fc0
    ctx->pc = 0x27c7e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x27c7e8: 0x44810000
    ctx->pc = 0x27c7e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c7ec: 0x4600c581
    ctx->pc = 0x27c7ecu;
    ctx->f[22] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x27c7f0: 0x44800000
    ctx->pc = 0x27c7f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27c7f4: 0x4600b034
    ctx->pc = 0x27c7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c7f8: 0x0
    ctx->pc = 0x27c7f8u;
    // NOP
    // 0x27c7fc: 0x45030001
    ctx->pc = 0x27C7FCu;
    {
        const bool branch_taken_0x27c7fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c7fc) {
            ctx->pc = 0x27C800u;
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x27C804u;
            goto label_27c804;
        }
    }
    ctx->pc = 0x27C804u;
label_27c804:
    // 0x27c804: 0x4616e034
    ctx->pc = 0x27c804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c808: 0x0
    ctx->pc = 0x27c808u;
    // NOP
    // 0x27c80c: 0x45000104
    ctx->pc = 0x27C80Cu;
    {
        const bool branch_taken_0x27c80c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C810u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
        if (branch_taken_0x27c80c) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27C814u;
    // 0x27c814: 0xc0a0120
    ctx->pc = 0x27C814u;
    SET_GPR_U32(ctx, 31, 0x27C81Cu);
    ctx->pc = 0x27C818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C81Cu; }
    }
    if (ctx->pc != 0x27C81Cu) { return; }
    ctx->pc = 0x27C81Cu;
    // 0x27c81c: 0x4480c800
    ctx->pc = 0x27c81cu;
    *(uint32_t*)&ctx->f[25] = GPR_U32(ctx, 0);
    // 0x27c820: 0x3c1e0080
    ctx->pc = 0x27c820u;
    SET_GPR_U32(ctx, 30, ((uint32_t)128 << 16));
    // 0x27c824: 0x24022b00
    ctx->pc = 0x27c824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27c828: 0x2e2a018
    ctx->pc = 0x27c828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27c82c: 0x3c020032
    ctx->pc = 0x27c82cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27c830: 0x10000092
    ctx->pc = 0x27C830u;
    {
        const bool branch_taken_0x27c830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C834u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294963392));
        if (branch_taken_0x27c830) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27C838u;
label_27c838:
    // 0x27c838: 0x2421018
    ctx->pc = 0x27c838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27c83c: 0x3c040034
    ctx->pc = 0x27c83cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x27c840: 0x8c83cd94
    ctx->pc = 0x27c840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294954388)));
    // 0x27c844: 0x438021
    ctx->pc = 0x27c844u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c848: 0x8e020000
    ctx->pc = 0x27c848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27c84c: 0x8c430000
    ctx->pc = 0x27c84cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c850: 0x24020002
    ctx->pc = 0x27c850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c854: 0x1462000d
    ctx->pc = 0x27C854u;
    {
        const bool branch_taken_0x27c854 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27C858u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27c854) {
            ctx->pc = 0x27C88Cu;
            goto label_27c88c;
        }
    }
    ctx->pc = 0x27C85Cu;
    // 0x27c85c: 0x860400f0
    ctx->pc = 0x27c85cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27c860: 0x480000a
    ctx->pc = 0x27C860u;
    {
        const bool branch_taken_0x27c860 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27C864u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x27c860) {
            ctx->pc = 0x27C88Cu;
            goto label_27c88c;
        }
    }
    ctx->pc = 0x27C868u;
    // 0x27c868: 0x3c050032
    ctx->pc = 0x27c868u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x27c86c: 0x24a5f9f8
    ctx->pc = 0x27c86cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965752));
    // 0x27c870: 0x8ca30068
    ctx->pc = 0x27c870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x27c874: 0x821018
    ctx->pc = 0x27c874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27c878: 0x431021
    ctx->pc = 0x27c878u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c87c: 0x8c420000
    ctx->pc = 0x27c87cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c880: 0x38420004
    ctx->pc = 0x27c880u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
    // 0x27c884: 0x24050001
    ctx->pc = 0x27c884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c888: 0x2280b
    ctx->pc = 0x27c888u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
label_27c88c:
    // 0x27c88c: 0x14a0000b
    ctx->pc = 0x27C88Cu;
    {
        const bool branch_taken_0x27c88c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C890u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27c88c) {
            ctx->pc = 0x27C8BCu;
            goto label_27c8bc;
        }
    }
    ctx->pc = 0x27C894u;
    // 0x27c894: 0x200202d
    ctx->pc = 0x27c894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c898: 0x8e650064
    ctx->pc = 0x27c898u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27c89c: 0xc09ebd4
    ctx->pc = 0x27C89Cu;
    SET_GPR_U32(ctx, 31, 0x27C8A4u);
    ctx->pc = 0x27C8A0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    ctx->pc = 0x27AF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSkipItem_0x27af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8A4u; }
    }
    if (ctx->pc != 0x27C8A4u) { return; }
    ctx->pc = 0x27C8A4u;
    // 0x27c8a4: 0x40882d
    ctx->pc = 0x27c8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8a8: 0x24020001
    ctx->pc = 0x27c8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c8ac: 0x12220073
    ctx->pc = 0x27C8ACu;
    {
        const bool branch_taken_0x27c8ac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x27c8ac) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27C8B4u;
    // 0x27c8b4: 0x10000002
    ctx->pc = 0x27C8B4u;
    {
        const bool branch_taken_0x27c8b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27C8B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
        if (branch_taken_0x27c8b4) {
            ctx->pc = 0x27C8C0u;
            goto label_27c8c0;
        }
    }
    ctx->pc = 0x27C8BCu;
label_27c8bc:
    // 0x27c8bc: 0x8e620064
    ctx->pc = 0x27c8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27c8c0:
    // 0x27c8c0: 0x3c030100
    ctx->pc = 0x27c8c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x27c8c4: 0x431024
    ctx->pc = 0x27c8c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c8c8: 0x54400008
    ctx->pc = 0x27C8C8u;
    {
        const bool branch_taken_0x27c8c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27c8c8) {
            ctx->pc = 0x27C8CCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27C8ECu;
            goto label_27c8ec;
        }
    }
    ctx->pc = 0x27C8D0u;
    // 0x27c8d0: 0x3c030031
    ctx->pc = 0x27c8d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x27c8d4: 0xc461ffa4
    ctx->pc = 0x27c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c8d8: 0xc60000ec
    ctx->pc = 0x27c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c8dc: 0x46000834
    ctx->pc = 0x27c8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c8e0: 0x45010066
    ctx->pc = 0x27C8E0u;
    {
        const bool branch_taken_0x27c8e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c8e0) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27C8E8u;
    // 0x27c8e8: 0xc6000060
    ctx->pc = 0x27c8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c8ec:
    // 0x27c8ec: 0xc7a10090
    ctx->pc = 0x27c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c8f0: 0x46010001
    ctx->pc = 0x27c8f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c8f4: 0xe7a000a0
    ctx->pc = 0x27c8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27c8f8: 0xc6000064
    ctx->pc = 0x27c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c8fc: 0xc7a10094
    ctx->pc = 0x27c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c900: 0x46010001
    ctx->pc = 0x27c900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c904: 0xe7a000a4
    ctx->pc = 0x27c904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27c908: 0xc6000068
    ctx->pc = 0x27c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c90c: 0xc7a10098
    ctx->pc = 0x27c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c910: 0x46010001
    ctx->pc = 0x27c910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c914: 0xe7a000a8
    ctx->pc = 0x27c914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27c918: 0xc0b58fc
    ctx->pc = 0x27C918u;
    SET_GPR_U32(ctx, 31, 0x27C920u);
    ctx->pc = 0x27C91Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C920u; }
    }
    if (ctx->pc != 0x27C920u) { return; }
    ctx->pc = 0x27C920u;
    // 0x27c920: 0x46000546
    ctx->pc = 0x27c920u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27c924: 0x8e020000
    ctx->pc = 0x27c924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27c928: 0xc440000c
    ctx->pc = 0x27c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c92c: 0x4600b500
    ctx->pc = 0x27c92cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x27c930: 0x4615a034
    ctx->pc = 0x27c930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c934: 0x45010051
    ctx->pc = 0x27C934u;
    {
        const bool branch_taken_0x27c934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c934) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27C93Cu;
    // 0x27c93c: 0x3c01bf80
    ctx->pc = 0x27c93cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27c940: 0x44810000
    ctx->pc = 0x27c940u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c944: 0xc663009c
    ctx->pc = 0x27c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27c948: 0x46030034
    ctx->pc = 0x27c948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c94c: 0x0
    ctx->pc = 0x27c94cu;
    // NOP
    // 0x27c950: 0x45000016
    ctx->pc = 0x27C950u;
    {
        const bool branch_taken_0x27c950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C954u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x27c950) {
            ctx->pc = 0x27C9ACu;
            goto label_27c9ac;
        }
    }
    ctx->pc = 0x27C958u;
    // 0x27c958: 0xc7a000b0
    ctx->pc = 0x27c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c95c: 0x46001082
    ctx->pc = 0x27c95cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27c960: 0xc7a000a8
    ctx->pc = 0x27c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c964: 0xc7a100b8
    ctx->pc = 0x27c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c968: 0x46010002
    ctx->pc = 0x27c968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27c96c: 0x46001080
    ctx->pc = 0x27c96cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27c970: 0x3c013e4c
    ctx->pc = 0x27c970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x27c974: 0x3421cccd
    ctx->pc = 0x27c974u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27c978: 0x44810000
    ctx->pc = 0x27c978u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c97c: 0x4600a002
    ctx->pc = 0x27c97cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27c980: 0x4600a834
    ctx->pc = 0x27c980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c984: 0x0
    ctx->pc = 0x27c984u;
    // NOP
    // 0x27c988: 0x45000005
    ctx->pc = 0x27C988u;
    {
        const bool branch_taken_0x27c988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C98Cu;
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        if (branch_taken_0x27c988) {
            ctx->pc = 0x27C9A0u;
            goto label_27c9a0;
        }
    }
    ctx->pc = 0x27C990u;
    // 0x27c990: 0x3c013f59
    ctx->pc = 0x27c990u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16217 << 16));
    // 0x27c994: 0x3421999a
    ctx->pc = 0x27c994u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x27c998: 0x44810000
    ctx->pc = 0x27c998u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27c99c: 0x46000842
    ctx->pc = 0x27c99cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27c9a0:
    // 0x27c9a0: 0x46011034
    ctx->pc = 0x27c9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c9a4: 0x45010035
    ctx->pc = 0x27C9A4u;
    {
        const bool branch_taken_0x27c9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c9a4) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27C9ACu;
label_27c9ac:
    // 0x27c9ac: 0x200202d
    ctx->pc = 0x27c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9b0: 0x27a50080
    ctx->pc = 0x27c9b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    // 0x27c9b4: 0x27a60090
    ctx->pc = 0x27c9b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 144));
    // 0x27c9b8: 0x27a700c0
    ctx->pc = 0x27c9b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27c9bc: 0x4600b306
    ctx->pc = 0x27c9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x27c9c0: 0xc095e6c
    ctx->pc = 0x27C9C0u;
    SET_GPR_U32(ctx, 31, 0x27C9C8u);
    ctx->pc = 0x27C9C4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9C8u; }
    }
    if (ctx->pc != 0x27C9C8u) { return; }
    ctx->pc = 0x27C9C8u;
    // 0x27c9c8: 0x4600c836
    ctx->pc = 0x27c9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c9cc: 0x4500002b
    ctx->pc = 0x27C9CCu;
    {
        const bool branch_taken_0x27c9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c9cc) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27C9D4u;
    // 0x27c9d4: 0x8e6200b4
    ctx->pc = 0x27c9d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27c9d8: 0x5e1024
    ctx->pc = 0x27c9d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x27c9dc: 0x10400006
    ctx->pc = 0x27C9DCu;
    {
        const bool branch_taken_0x27c9dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27c9dc) {
            ctx->pc = 0x27C9F8u;
            goto label_27c9f8;
        }
    }
    ctx->pc = 0x27C9E4u;
    // 0x27c9e4: 0x1ae00004
    ctx->pc = 0x27C9E4u;
    {
        const bool branch_taken_0x27c9e4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x27C9E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27c9e4) {
            ctx->pc = 0x27C9F8u;
            goto label_27c9f8;
        }
    }
    ctx->pc = 0x27C9ECu;
    // 0x27c9ec: 0x2952821
    ctx->pc = 0x27c9ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x27c9f0: 0xc096c0e
    ctx->pc = 0x27C9F0u;
    SET_GPR_U32(ctx, 31, 0x27C9F8u);
    ctx->pc = 0x27C9F4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    ctx->pc = 0x25B038u;
    {
        const uint32_t __entryPc = ctx->pc;
        HealItem_0x25b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9F8u; }
    }
    if (ctx->pc != 0x27C9F8u) { return; }
    ctx->pc = 0x27C9F8u;
label_27c9f8:
    // 0x27c9f8: 0x16200020
    ctx->pc = 0x27C9F8u;
    {
        const bool branch_taken_0x27c9f8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x27C9FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27c9f8) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27CA00u;
    // 0x27ca00: 0x966200c4
    ctx->pc = 0x27ca00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27ca04: 0x24420001
    ctx->pc = 0x27ca04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ca08: 0xa66200c4
    ctx->pc = 0x27ca08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x27ca0c: 0x4600bb06
    ctx->pc = 0x27ca0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27ca10: 0x8e6500b4
    ctx->pc = 0x27ca10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27ca14: 0xc096992
    ctx->pc = 0x27CA14u;
    SET_GPR_U32(ctx, 31, 0x27CA1Cu);
    ctx->pc = 0x27CA18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->pc = 0x25A648u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageItem_0x25a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA1Cu; }
    }
    if (ctx->pc != 0x27CA1Cu) { return; }
    ctx->pc = 0x27CA1Cu;
    // 0x27ca1c: 0x46000506
    ctx->pc = 0x27ca1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27ca20: 0x4619a032
    ctx->pc = 0x27ca20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ca24: 0x0
    ctx->pc = 0x27ca24u;
    // NOP
    // 0x27ca28: 0x45010002
    ctx->pc = 0x27CA28u;
    {
        const bool branch_taken_0x27ca28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CA2Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27ca28) {
            ctx->pc = 0x27CA34u;
            goto label_27ca34;
        }
    }
    ctx->pc = 0x27CA30u;
    // 0x27ca30: 0x882d
    ctx->pc = 0x27ca30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ca34:
    // 0x27ca34: 0x4614c836
    ctx->pc = 0x27ca34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ca38: 0x45000006
    ctx->pc = 0x27CA38u;
    {
        const bool branch_taken_0x27ca38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ca38) {
            ctx->pc = 0x27CA54u;
            goto label_27ca54;
        }
    }
    ctx->pc = 0x27CA40u;
    // 0x27ca40: 0x1ae00004
    ctx->pc = 0x27CA40u;
    {
        const bool branch_taken_0x27ca40 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x27CA44u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        if (branch_taken_0x27ca40) {
            ctx->pc = 0x27CA54u;
            goto label_27ca54;
        }
    }
    ctx->pc = 0x27CA48u;
    // 0x27ca48: 0x200282d
    ctx->pc = 0x27ca48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca4c: 0xc0a43c8
    ctx->pc = 0x27CA4Cu;
    SET_GPR_U32(ctx, 31, 0x27CA54u);
    ctx->pc = 0x27CA50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDamagedItem_0x290f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA54u; }
    }
    if (ctx->pc != 0x27CA54u) { return; }
    ctx->pc = 0x27CA54u;
label_27ca54:
    // 0x27ca54: 0x4617f034
    ctx->pc = 0x27ca54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ca58: 0x45000008
    ctx->pc = 0x27CA58u;
    {
        const bool branch_taken_0x27ca58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ca58) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27CA60u;
    // 0x27ca60: 0x8e620064
    ctx->pc = 0x27ca60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27ca64: 0x5e1024
    ctx->pc = 0x27ca64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x27ca68: 0x14400004
    ctx->pc = 0x27CA68u;
    {
        const bool branch_taken_0x27ca68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27CA6Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x27ca68) {
            ctx->pc = 0x27CA7Cu;
            goto label_27ca7c;
        }
    }
    ctx->pc = 0x27CA70u;
    // 0x27ca70: 0xc480ffa4
    ctx->pc = 0x27ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ca74: 0x4600d000
    ctx->pc = 0x27ca74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x27ca78: 0xe60000ec
    ctx->pc = 0x27ca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_27ca7c:
    // 0x27ca7c: 0xc0a015a
    ctx->pc = 0x27CA7Cu;
    SET_GPR_U32(ctx, 31, 0x27CA84u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA84u; }
    }
    if (ctx->pc != 0x27CA84u) { return; }
    ctx->pc = 0x27CA84u;
    // 0x27ca84: 0x40902d
    ctx->pc = 0x27ca84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca88: 0x641ff6b
    ctx->pc = 0x27CA88u;
    {
        const bool branch_taken_0x27ca88 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x27CA8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x27ca88) {
            ctx->pc = 0x27C838u;
            goto label_27c838;
        }
    }
    ctx->pc = 0x27CA90u;
    // 0x27ca90: 0x10000063
    ctx->pc = 0x27CA90u;
    {
        const bool branch_taken_0x27ca90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27ca90) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27CA98u;
label_27ca98:
    // 0x27ca98: 0x27a50090
    ctx->pc = 0x27ca98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x27ca9c: 0x27a600c0
    ctx->pc = 0x27ca9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27caa0: 0x4600c306
    ctx->pc = 0x27caa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x27caa4: 0x24070001
    ctx->pc = 0x27caa4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27caa8: 0xc0961ce
    ctx->pc = 0x27CAA8u;
    SET_GPR_U32(ctx, 31, 0x27CAB0u);
    ctx->pc = 0x27CAACu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->pc = 0x258738u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeaponItemCollide_0x258738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CAB0u; }
    }
    if (ctx->pc != 0x27CAB0u) { return; }
    ctx->pc = 0x27CAB0u;
    // 0x27cab0: 0x40802d
    ctx->pc = 0x27cab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cab4: 0x1200005a
    ctx->pc = 0x27CAB4u;
    {
        const bool branch_taken_0x27cab4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CAB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27cab4) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27CABCu;
    // 0x27cabc: 0x8e650064
    ctx->pc = 0x27cabcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27cac0: 0xc09ebd4
    ctx->pc = 0x27CAC0u;
    SET_GPR_U32(ctx, 31, 0x27CAC8u);
    ctx->pc = 0x27CAC4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    ctx->pc = 0x27AF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSkipItem_0x27af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CAC8u; }
    }
    if (ctx->pc != 0x27CAC8u) { return; }
    ctx->pc = 0x27CAC8u;
    // 0x27cac8: 0x8e6300b4
    ctx->pc = 0x27cac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27cacc: 0x30630800
    ctx->pc = 0x27caccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2048));
    // 0x27cad0: 0x24050001
    ctx->pc = 0x27cad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cad4: 0xa3100b
    ctx->pc = 0x27cad4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x27cad8: 0x5440003f
    ctx->pc = 0x27CAD8u;
    {
        const bool branch_taken_0x27cad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27cad8) {
            ctx->pc = 0x27CADCu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x27CBD8u;
            goto label_27cbd8;
        }
    }
    ctx->pc = 0x27CAE0u;
    // 0x27cae0: 0x8fa200f0
    ctx->pc = 0x27cae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27cae4: 0x5440000a
    ctx->pc = 0x27CAE4u;
    {
        const bool branch_taken_0x27cae4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27cae4) {
            ctx->pc = 0x27CAE8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
            ctx->pc = 0x27CB10u;
            goto label_27cb10;
        }
    }
    ctx->pc = 0x27CAECu;
    // 0x27caec: 0xc7a000c0
    ctx->pc = 0x27caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27caf0: 0xe7a00090
    ctx->pc = 0x27caf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27caf4: 0xc7a000c4
    ctx->pc = 0x27caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27caf8: 0xe7a00094
    ctx->pc = 0x27caf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27cafc: 0xc7a000c8
    ctx->pc = 0x27cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cb00: 0xe7a00098
    ctx->pc = 0x27cb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27cb04: 0x24030001
    ctx->pc = 0x27cb04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cb08: 0xafa300ec
    ctx->pc = 0x27cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x27cb0c: 0x966200c4
    ctx->pc = 0x27cb0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
label_27cb10:
    // 0x27cb10: 0x24420001
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cb14: 0xa66200c4
    ctx->pc = 0x27cb14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x27cb18: 0x200202d
    ctx->pc = 0x27cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb1c: 0x4600bb06
    ctx->pc = 0x27cb1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27cb20: 0x8e6500b4
    ctx->pc = 0x27cb20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27cb24: 0xc096992
    ctx->pc = 0x27CB24u;
    SET_GPR_U32(ctx, 31, 0x27CB2Cu);
    ctx->pc = 0x27CB28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->pc = 0x25A648u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageItem_0x25a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB2Cu; }
    }
    if (ctx->pc != 0x27CB2Cu) { return; }
    ctx->pc = 0x27CB2Cu;
    // 0x27cb2c: 0x46000506
    ctx->pc = 0x27cb2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27cb30: 0x461ca032
    ctx->pc = 0x27cb30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cb34: 0x0
    ctx->pc = 0x27cb34u;
    // NOP
    // 0x27cb38: 0x45010002
    ctx->pc = 0x27CB38u;
    {
        const bool branch_taken_0x27cb38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CB3Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27cb38) {
            ctx->pc = 0x27CB44u;
            goto label_27cb44;
        }
    }
    ctx->pc = 0x27CB40u;
    // 0x27cb40: 0x882d
    ctx->pc = 0x27cb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cb44:
    // 0x27cb44: 0x4614e036
    ctx->pc = 0x27cb44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[28], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cb48: 0x4500000a
    ctx->pc = 0x27CB48u;
    {
        const bool branch_taken_0x27cb48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cb48) {
            ctx->pc = 0x27CB74u;
            goto label_27cb74;
        }
    }
    ctx->pc = 0x27CB50u;
    // 0x27cb50: 0x1ae00008
    ctx->pc = 0x27CB50u;
    {
        const bool branch_taken_0x27cb50 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x27CB54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x27cb50) {
            ctx->pc = 0x27CB74u;
            goto label_27cb74;
        }
    }
    ctx->pc = 0x27CB58u;
    // 0x27cb58: 0x2e21018
    ctx->pc = 0x27cb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27cb5c: 0x3c040032
    ctx->pc = 0x27cb5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x27cb60: 0x2484f0c0
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963392));
    // 0x27cb64: 0x442021
    ctx->pc = 0x27cb64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27cb68: 0x200282d
    ctx->pc = 0x27cb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb6c: 0xc0a43c8
    ctx->pc = 0x27CB6Cu;
    SET_GPR_U32(ctx, 31, 0x27CB74u);
    ctx->pc = 0x27CB70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDamagedItem_0x290f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB74u; }
    }
    if (ctx->pc != 0x27CB74u) { return; }
    ctx->pc = 0x27CB74u;
label_27cb74:
    // 0x27cb74: 0x4617f034
    ctx->pc = 0x27cb74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cb78: 0x0
    ctx->pc = 0x27cb78u;
    // NOP
    // 0x27cb7c: 0x45000008
    ctx->pc = 0x27CB7Cu;
    {
        const bool branch_taken_0x27cb7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CB80u;
        SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
        if (branch_taken_0x27cb7c) {
            ctx->pc = 0x27CBA0u;
            goto label_27cba0;
        }
    }
    ctx->pc = 0x27CB84u;
    // 0x27cb84: 0x8e620064
    ctx->pc = 0x27cb84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27cb88: 0x431024
    ctx->pc = 0x27cb88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27cb8c: 0x14400004
    ctx->pc = 0x27CB8Cu;
    {
        const bool branch_taken_0x27cb8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27CB90u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27cb8c) {
            ctx->pc = 0x27CBA0u;
            goto label_27cba0;
        }
    }
    ctx->pc = 0x27CB94u;
    // 0x27cb94: 0xc440ffa4
    ctx->pc = 0x27cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cb98: 0x4600d000
    ctx->pc = 0x27cb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x27cb9c: 0xe60000ec
    ctx->pc = 0x27cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_27cba0:
    // 0x27cba0: 0x3c01bf80
    ctx->pc = 0x27cba0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27cba4: 0x44810000
    ctx->pc = 0x27cba4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27cba8: 0x4600a034
    ctx->pc = 0x27cba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cbac: 0x45000003
    ctx->pc = 0x27CBACu;
    {
        const bool branch_taken_0x27cbac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cbac) {
            ctx->pc = 0x27CBBCu;
            goto label_27cbbc;
        }
    }
    ctx->pc = 0x27CBB4u;
    // 0x27cbb4: 0x10000008
    ctx->pc = 0x27CBB4u;
    {
        const bool branch_taken_0x27cbb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CBB8u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27cbb4) {
            ctx->pc = 0x27CBD8u;
            goto label_27cbd8;
        }
    }
    ctx->pc = 0x27CBBCu;
label_27cbbc:
    // 0x27cbbc: 0x461ca034
    ctx->pc = 0x27cbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cbc0: 0x0
    ctx->pc = 0x27cbc0u;
    // NOP
    // 0x27cbc4: 0x45010004
    ctx->pc = 0x27CBC4u;
    {
        const bool branch_taken_0x27cbc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CBC8u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27cbc4) {
            ctx->pc = 0x27CBD8u;
            goto label_27cbd8;
        }
    }
    ctx->pc = 0x27CBCCu;
    // 0x27cbcc: 0x24160002
    ctx->pc = 0x27cbccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27cbd0: 0x24020003
    ctx->pc = 0x27cbd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x27cbd4: 0x51b00b
    ctx->pc = 0x27cbd4u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 2));
label_27cbd8:
    // 0x27cbd8: 0x8fa400f0
    ctx->pc = 0x27cbd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27cbdc: 0x10800010
    ctx->pc = 0x27CBDCu;
    {
        const bool branch_taken_0x27cbdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27cbdc) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27CBE4u;
    // 0x27cbe4: 0x8e020000
    ctx->pc = 0x27cbe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27cbe8: 0x8c430000
    ctx->pc = 0x27cbe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27cbec: 0x2402000a
    ctx->pc = 0x27cbecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x27cbf0: 0x5462000b
    ctx->pc = 0x27CBF0u;
    {
        const bool branch_taken_0x27cbf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x27cbf0) {
            ctx->pc = 0x27CBF4u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27CBF8u;
    // 0x27cbf8: 0x860300f0
    ctx->pc = 0x27cbf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27cbfc: 0x24020029
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
    // 0x27cc00: 0x54620007
    ctx->pc = 0x27CC00u;
    {
        const bool branch_taken_0x27cc00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x27cc00) {
            ctx->pc = 0x27CC04u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27CC08u;
    // 0x27cc08: 0x860200e4
    ctx->pc = 0x27cc08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x27cc0c: 0x18400003
    ctx->pc = 0x27CC0Cu;
    {
        const bool branch_taken_0x27cc0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27CC10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27cc0c) {
            ctx->pc = 0x27CC1Cu;
            goto label_27cc1c;
        }
    }
    ctx->pc = 0x27CC14u;
    // 0x27cc14: 0x10000002
    ctx->pc = 0x27CC14u;
    {
        const bool branch_taken_0x27cc14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CC18u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 190), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x27cc14) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27CC1Cu;
label_27cc1c:
    // 0x27cc1c: 0xb02d
    ctx->pc = 0x27cc1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cc20:
    // 0x27cc20: 0x40034800
    ctx->pc = 0x27cc20u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x27cc24: 0x3c02003a
    ctx->pc = 0x27cc24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x27cc28: 0x8c4421d0
    ctx->pc = 0x27cc28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x27cc2c: 0x8c820468
    ctx->pc = 0x27cc2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1128)));
    // 0x27cc30: 0x621823
    ctx->pc = 0x27cc30u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27cc34: 0x8c820460
    ctx->pc = 0x27cc34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x27cc38: 0x621821
    ctx->pc = 0x27cc38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27cc3c: 0xac830460
    ctx->pc = 0x27cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1120), GPR_U32(ctx, 3));
    // 0x27cc40: 0x8c820464
    ctx->pc = 0x27cc40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1124)));
    // 0x27cc44: 0x24420001
    ctx->pc = 0x27cc44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cc48: 0xac820464
    ctx->pc = 0x27cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1124), GPR_U32(ctx, 2));
    // 0x27cc4c: 0x40024800
    ctx->pc = 0x27cc4cu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x27cc50: 0x16c00081
    ctx->pc = 0x27CC50u;
    {
        const bool branch_taken_0x27cc50 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x27CC54u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1144), GPR_U32(ctx, 2));
        if (branch_taken_0x27cc50) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CC58u;
    // 0x27cc58: 0x8e620064
    ctx->pc = 0x27cc58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27cc5c: 0x30420004
    ctx->pc = 0x27cc5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x27cc60: 0x1040005d
    ctx->pc = 0x27CC60u;
    {
        const bool branch_taken_0x27cc60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CC64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
        if (branch_taken_0x27cc60) {
            ctx->pc = 0x27CDD8u;
            goto label_27cdd8;
        }
    }
    ctx->pc = 0x27CC68u;
    // 0x27cc68: 0x3c013f00
    ctx->pc = 0x27cc68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27cc6c: 0x44816000
    ctx->pc = 0x27cc6cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27cc70: 0x27a50090
    ctx->pc = 0x27cc70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x27cc74: 0x27a600c0
    ctx->pc = 0x27cc74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    // 0x27cc78: 0xc087caa
    ctx->pc = 0x27CC78u;
    SET_GPR_U32(ctx, 31, 0x27CC80u);
    ctx->pc = 0x27CC7Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[12]);
    ctx->pc = 0x21F2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeaponWallCollide_0x21f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC80u; }
    }
    if (ctx->pc != 0x27CC80u) { return; }
    ctx->pc = 0x27CC80u;
    // 0x27cc80: 0x40802d
    ctx->pc = 0x27cc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc84: 0x12000054
    ctx->pc = 0x27CC84u;
    {
        const bool branch_taken_0x27cc84 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x27cc84) {
            ctx->pc = 0x27CDD8u;
            goto label_27cdd8;
        }
    }
    ctx->pc = 0x27CC8Cu;
    // 0x27cc8c: 0xc086fa0
    ctx->pc = 0x27CC8Cu;
    SET_GPR_U32(ctx, 31, 0x27CC94u);
    ctx->pc = 0x27CC90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjGetAllFlags_0x21be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC94u; }
    }
    if (ctx->pc != 0x27CC94u) { return; }
    ctx->pc = 0x27CC94u;
    // 0x27cc94: 0x40182d
    ctx->pc = 0x27cc94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cc98: 0x3c020032
    ctx->pc = 0x27cc98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27cc9c: 0x8c42fce4
    ctx->pc = 0x27cc9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966500)));
    // 0x27cca0: 0x24050001
    ctx->pc = 0x27cca0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cca4: 0x8fa400e8
    ctx->pc = 0x27cca4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x27cca8: 0x82280a
    ctx->pc = 0x27cca8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
    // 0x27ccac: 0xafa500e8
    ctx->pc = 0x27ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x27ccb0: 0xc7a000c0
    ctx->pc = 0x27ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ccb4: 0xe7a00090
    ctx->pc = 0x27ccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27ccb8: 0xc7a100c4
    ctx->pc = 0x27ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ccbc: 0xe7a10094
    ctx->pc = 0x27ccbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27ccc0: 0xc7a000c8
    ctx->pc = 0x27ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ccc4: 0xe7a00098
    ctx->pc = 0x27ccc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27ccc8: 0x24050001
    ctx->pc = 0x27ccc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cccc: 0xafa500ec
    ctx->pc = 0x27ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x27ccd0: 0x8e020010
    ctx->pc = 0x27ccd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27ccd4: 0x30420004
    ctx->pc = 0x27ccd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x27ccd8: 0x10400003
    ctx->pc = 0x27CCD8u;
    {
        const bool branch_taken_0x27ccd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CCDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        if (branch_taken_0x27ccd8) {
            ctx->pc = 0x27CCE8u;
            goto label_27cce8;
        }
    }
    ctx->pc = 0x27CCE0u;
    // 0x27cce0: 0x461e0800
    ctx->pc = 0x27cce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[30]);
    // 0x27cce4: 0xe7a00094
    ctx->pc = 0x27cce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_27cce8:
    // 0x27cce8: 0x621824
    ctx->pc = 0x27cce8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ccec: 0x3c020004
    ctx->pc = 0x27ccecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x27ccf0: 0x10620003
    ctx->pc = 0x27CCF0u;
    {
        const bool branch_taken_0x27ccf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27CCF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
        if (branch_taken_0x27ccf0) {
            ctx->pc = 0x27CD00u;
            goto label_27cd00;
        }
    }
    ctx->pc = 0x27CCF8u;
    // 0x27ccf8: 0x54620005
    ctx->pc = 0x27CCF8u;
    {
        const bool branch_taken_0x27ccf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x27ccf8) {
            ctx->pc = 0x27CCFCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
            ctx->pc = 0x27CD10u;
            goto label_27cd10;
        }
    }
    ctx->pc = 0x27CD00u;
label_27cd00:
    // 0x27cd00: 0x200202d
    ctx->pc = 0x27cd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd04: 0xc0991b8
    ctx->pc = 0x27CD04u;
    SET_GPR_U32(ctx, 31, 0x27CD0Cu);
    ctx->pc = 0x27CD08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x2646E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjectExplode_0x2646e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD0Cu; }
    }
    if (ctx->pc != 0x27CD0Cu) { return; }
    ctx->pc = 0x27CD0Cu;
    // 0x27cd0c: 0x8e6200b4
    ctx->pc = 0x27cd0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_27cd10:
    // 0x27cd10: 0x3c030020
    ctx->pc = 0x27cd10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
    // 0x27cd14: 0x431024
    ctx->pc = 0x27cd14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27cd18: 0x5040002f
    ctx->pc = 0x27CD18u;
    {
        const bool branch_taken_0x27cd18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27cd18) {
            ctx->pc = 0x27CD1Cu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x27CDD8u;
            goto label_27cdd8;
        }
    }
    ctx->pc = 0x27CD20u;
    // 0x27cd20: 0x8e6200d0
    ctx->pc = 0x27cd20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x27cd24: 0x10400006
    ctx->pc = 0x27CD24u;
    {
        const bool branch_taken_0x27cd24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CD28u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 128));
        if (branch_taken_0x27cd24) {
            ctx->pc = 0x27CD40u;
            goto label_27cd40;
        }
    }
    ctx->pc = 0x27CD2Cu;
    // 0x27cd2c: 0x1ae00004
    ctx->pc = 0x27CD2Cu;
    {
        const bool branch_taken_0x27cd2c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x27CD30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27cd2c) {
            ctx->pc = 0x27CD40u;
            goto label_27cd40;
        }
    }
    ctx->pc = 0x27CD34u;
    // 0x27cd34: 0xc097bd6
    ctx->pc = 0x27CD34u;
    SET_GPR_U32(ctx, 31, 0x27CD3Cu);
    ctx->pc = 0x27CD38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x25EF58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWeaponReflect_0x25ef58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD3Cu; }
    }
    if (ctx->pc != 0x27CD3Cu) { return; }
    ctx->pc = 0x27CD3Cu;
    // 0x27cd3c: 0x26660080
    ctx->pc = 0x27cd3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 128));
label_27cd40:
    // 0x27cd40: 0xc0202d
    ctx->pc = 0x27cd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd44: 0x3c050032
    ctx->pc = 0x27cd44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x27cd48: 0xc0b594a
    ctx->pc = 0x27CD48u;
    SET_GPR_U32(ctx, 31, 0x27CD50u);
    ctx->pc = 0x27CD4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966288));
    ctx->pc = 0x2D6528u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReflectVector_0x2d6528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD50u; }
    }
    if (ctx->pc != 0x27CD50u) { return; }
    ctx->pc = 0x27CD50u;
    // 0x27cd50: 0xc6610084
    ctx->pc = 0x27cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cd54: 0x4601e034
    ctx->pc = 0x27cd54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cd58: 0x0
    ctx->pc = 0x27cd58u;
    // NOP
    // 0x27cd5c: 0x45020007
    ctx->pc = 0x27CD5Cu;
    {
        const bool branch_taken_0x27cd5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cd5c) {
            ctx->pc = 0x27CD60u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27CD7Cu;
            goto label_27cd7c;
        }
    }
    ctx->pc = 0x27CD64u;
    // 0x27cd64: 0x3c013ecc
    ctx->pc = 0x27cd64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16076 << 16));
    // 0x27cd68: 0x3421cccd
    ctx->pc = 0x27cd68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27cd6c: 0x44810000
    ctx->pc = 0x27cd6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27cd70: 0x46000802
    ctx->pc = 0x27cd70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27cd74: 0xe6600084
    ctx->pc = 0x27cd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x27cd78: 0x8e620064
    ctx->pc = 0x27cd78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27cd7c:
    // 0x27cd7c: 0x3c030002
    ctx->pc = 0x27cd7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x27cd80: 0x431024
    ctx->pc = 0x27cd80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27cd84: 0x10400007
    ctx->pc = 0x27CD84u;
    {
        const bool branch_taken_0x27cd84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CD88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27cd84) {
            ctx->pc = 0x27CDA4u;
            goto label_27cda4;
        }
    }
    ctx->pc = 0x27CD8Cu;
    // 0x27cd8c: 0x26650080
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 128));
    // 0x27cd90: 0x3c060034
    ctx->pc = 0x27cd90u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x27cd94: 0xc0b5978
    ctx->pc = 0x27CD94u;
    SET_GPR_U32(ctx, 31, 0x27CD9Cu);
    ctx->pc = 0x27CD98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294962064));
    ctx->pc = 0x2D65E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDirMatrix_0x2d65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD9Cu; }
    }
    if (ctx->pc != 0x27CD9Cu) { return; }
    ctx->pc = 0x27CD9Cu;
    // 0x27cd9c: 0x24020001
    ctx->pc = 0x27cd9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cda0: 0xafa200ec
    ctx->pc = 0x27cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_27cda4:
    // 0x27cda4: 0x3c030031
    ctx->pc = 0x27cda4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x27cda8: 0xc460ffb4
    ctx->pc = 0x27cda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cdac: 0x3c014120
    ctx->pc = 0x27cdacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x27cdb0: 0x44810800
    ctx->pc = 0x27cdb0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27cdb4: 0x46010040
    ctx->pc = 0x27cdb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27cdb8: 0xc6600068
    ctx->pc = 0x27cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cdbc: 0x46000834
    ctx->pc = 0x27cdbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cdc0: 0x0
    ctx->pc = 0x27cdc0u;
    // NOP
    // 0x27cdc4: 0x45020003
    ctx->pc = 0x27CDC4u;
    {
        const bool branch_taken_0x27cdc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cdc4) {
            ctx->pc = 0x27CDC8u;
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[31]);
            ctx->pc = 0x27CDD4u;
            goto label_27cdd4;
        }
    }
    ctx->pc = 0x27CDCCu;
    // 0x27cdcc: 0x10000002
    ctx->pc = 0x27CDCCu;
    {
        const bool branch_taken_0x27cdcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CDD0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
        if (branch_taken_0x27cdcc) {
            ctx->pc = 0x27CDD8u;
            goto label_27cdd8;
        }
    }
    ctx->pc = 0x27CDD4u;
label_27cdd4:
    // 0x27cdd4: 0xe6600068
    ctx->pc = 0x27cdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
label_27cdd8:
    // 0x27cdd8: 0x16c0001f
    ctx->pc = 0x27CDD8u;
    {
        const bool branch_taken_0x27cdd8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x27cdd8) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CDE0u;
    // 0x27cde0: 0x8e620064
    ctx->pc = 0x27cde0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27cde4: 0x30420040
    ctx->pc = 0x27cde4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x27cde8: 0x1040001b
    ctx->pc = 0x27CDE8u;
    {
        const bool branch_taken_0x27cde8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27cde8) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CDF0u;
    // 0x27cdf0: 0xc6600084
    ctx->pc = 0x27cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cdf4: 0x3c013dcc
    ctx->pc = 0x27cdf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x27cdf8: 0x3421cccd
    ctx->pc = 0x27cdf8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27cdfc: 0x4481a000
    ctx->pc = 0x27cdfcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x27ce00: 0x46140034
    ctx->pc = 0x27ce00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce04: 0x0
    ctx->pc = 0x27ce04u;
    // NOP
    // 0x27ce08: 0x45000013
    ctx->pc = 0x27CE08u;
    {
        const bool branch_taken_0x27ce08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27ce08) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CE10u;
    // 0x27ce10: 0x27a40090
    ctx->pc = 0x27ce10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x27ce14: 0xc44ce88c
    ctx->pc = 0x27ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ce18: 0x4600c346
    ctx->pc = 0x27ce18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27ce1c: 0xc087b5c
    ctx->pc = 0x27CE1Cu;
    SET_GPR_U32(ctx, 31, 0x27CE24u);
    ctx->pc = 0x27CE20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE24u; }
    }
    if (ctx->pc != 0x27CE24u) { return; }
    ctx->pc = 0x27CE24u;
    // 0x27ce24: 0x46140040
    ctx->pc = 0x27ce24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x27ce28: 0xc7a00094
    ctx->pc = 0x27ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ce2c: 0x46010001
    ctx->pc = 0x27ce2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27ce30: 0x46140034
    ctx->pc = 0x27ce30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce34: 0x0
    ctx->pc = 0x27ce34u;
    // NOP
    // 0x27ce38: 0x45000007
    ctx->pc = 0x27CE38u;
    {
        const bool branch_taken_0x27ce38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27ce38) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CE40u;
    // 0x27ce40: 0xae600080
    ctx->pc = 0x27ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x27ce44: 0xae600084
    ctx->pc = 0x27ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x27ce48: 0xae600088
    ctx->pc = 0x27ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x27ce4c: 0xe7a10094
    ctx->pc = 0x27ce4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27ce50: 0xafa400ec
    ctx->pc = 0x27ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x27ce54: 0xae6000a0
    ctx->pc = 0x27ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_27ce58:
    // 0x27ce58: 0x40034800
    ctx->pc = 0x27ce58u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x27ce5c: 0x3c02003a
    ctx->pc = 0x27ce5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x27ce60: 0x8c4421d0
    ctx->pc = 0x27ce60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x27ce64: 0x8c820478
    ctx->pc = 0x27ce64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1144)));
    // 0x27ce68: 0x621823
    ctx->pc = 0x27ce68u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ce6c: 0x8c820470
    ctx->pc = 0x27ce6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1136)));
    // 0x27ce70: 0x621821
    ctx->pc = 0x27ce70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ce74: 0xac830470
    ctx->pc = 0x27ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1136), GPR_U32(ctx, 3));
    // 0x27ce78: 0x8c820474
    ctx->pc = 0x27ce78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x27ce7c: 0x24420001
    ctx->pc = 0x27ce7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ce80: 0xac820474
    ctx->pc = 0x27ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 2));
    // 0x27ce84: 0xc66000b8
    ctx->pc = 0x27ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ce88: 0x4480a000
    ctx->pc = 0x27ce88u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x27ce8c: 0x4600a034
    ctx->pc = 0x27ce8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce90: 0x0
    ctx->pc = 0x27ce90u;
    // NOP
    // 0x27ce94: 0x45000045
    ctx->pc = 0x27CE94u;
    {
        const bool branch_taken_0x27ce94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x27ce94) {
            ctx->pc = 0x27CFACu;
            goto label_27cfac;
        }
    }
    ctx->pc = 0x27CE9Cu;
    // 0x27ce9c: 0x8e630064
    ctx->pc = 0x27ce9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27cea0: 0x30624020
    ctx->pc = 0x27cea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16416));
    // 0x27cea4: 0x14400041
    ctx->pc = 0x27CEA4u;
    {
        const bool branch_taken_0x27cea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27CEA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x27cea4) {
            ctx->pc = 0x27CFACu;
            goto label_27cfac;
        }
    }
    ctx->pc = 0x27CEACu;
    // 0x27ceac: 0xc6600068
    ctx->pc = 0x27ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ceb0: 0x3c013d88
    ctx->pc = 0x27ceb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15752 << 16));
    // 0x27ceb4: 0x34219a02
    ctx->pc = 0x27ceb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39426));
    // 0x27ceb8: 0x44810800
    ctx->pc = 0x27ceb8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27cebc: 0x46010001
    ctx->pc = 0x27cebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27cec0: 0x3c050031
    ctx->pc = 0x27cec0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x27cec4: 0xc4a1ffb4
    ctx->pc = 0x27cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cec8: 0x46010036
    ctx->pc = 0x27cec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cecc: 0x0
    ctx->pc = 0x27ceccu;
    // NOP
    // 0x27ced0: 0x45000035
    ctx->pc = 0x27CED0u;
    {
        const bool branch_taken_0x27ced0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x27ced0) {
            ctx->pc = 0x27CFA8u;
            goto label_27cfa8;
        }
    }
    ctx->pc = 0x27CED8u;
    // 0x27ced8: 0x621024
    ctx->pc = 0x27ced8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27cedc: 0x10400032
    ctx->pc = 0x27CEDCu;
    {
        const bool branch_taken_0x27cedc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CEE0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27cedc) {
            ctx->pc = 0x27CFA8u;
            goto label_27cfa8;
        }
    }
    ctx->pc = 0x27CEE4u;
    // 0x27cee4: 0xc0b5c24
    ctx->pc = 0x27CEE4u;
    SET_GPR_U32(ctx, 31, 0x27CEECu);
    ctx->pc = 0x27CEE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEECu; }
    }
    if (ctx->pc != 0x27CEECu) { return; }
    ctx->pc = 0x27CEECu;
    // 0x27ceec: 0x40902d
    ctx->pc = 0x27ceecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cef0: 0xc0b5c24
    ctx->pc = 0x27CEF0u;
    SET_GPR_U32(ctx, 31, 0x27CEF8u);
    ctx->pc = 0x27CEF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEF8u; }
    }
    if (ctx->pc != 0x27CEF8u) { return; }
    ctx->pc = 0x27CEF8u;
    // 0x27cef8: 0x40882d
    ctx->pc = 0x27cef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cefc: 0x966400c4
    ctx->pc = 0x27cefcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27cf00: 0x42400
    ctx->pc = 0x27cf00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x27cf04: 0xc0b5c24
    ctx->pc = 0x27CF04u;
    SET_GPR_U32(ctx, 31, 0x27CF0Cu);
    ctx->pc = 0x27CF08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF0Cu; }
    }
    if (ctx->pc != 0x27CF0Cu) { return; }
    ctx->pc = 0x27CF0Cu;
    // 0x27cf0c: 0x966300c4
    ctx->pc = 0x27cf0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27cf10: 0x31c00
    ctx->pc = 0x27cf10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x27cf14: 0x38403
    ctx->pc = 0x27cf14u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
    // 0x27cf18: 0x31c83
    ctx->pc = 0x27cf18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 18));
    // 0x27cf1c: 0x2038023
    ctx->pc = 0x27cf1cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x27cf20: 0x3c013f00
    ctx->pc = 0x27cf20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27cf24: 0x44816000
    ctx->pc = 0x27cf24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27cf28: 0xc0b5c06
    ctx->pc = 0x27CF28u;
    SET_GPR_U32(ctx, 31, 0x27CF30u);
    ctx->pc = 0x27CF2Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF30u; }
    }
    if (ctx->pc != 0x27CF30u) { return; }
    ctx->pc = 0x27CF30u;
    // 0x27cf30: 0x3c020034
    ctx->pc = 0x27cf30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27cf34: 0x8c44569c
    ctx->pc = 0x27cf34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 22172)));
    // 0x27cf38: 0x3a0282d
    ctx->pc = 0x27cf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf3c: 0xc0b3ec0
    ctx->pc = 0x27CF3Cu;
    SET_GPR_U32(ctx, 31, 0x27CF44u);
    ctx->pc = 0x27CF40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF44u; }
    }
    if (ctx->pc != 0x27CF44u) { return; }
    ctx->pc = 0x27CF44u;
    // 0x27cf44: 0x3c030034
    ctx->pc = 0x27cf44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27cf48: 0x24630050
    ctx->pc = 0x27cf48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 80));
    // 0x27cf4c: 0x129080
    ctx->pc = 0x27cf4cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 2));
    // 0x27cf50: 0x2439021
    ctx->pc = 0x27cf50u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27cf54: 0x118880
    ctx->pc = 0x27cf54u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 2));
    // 0x27cf58: 0x2238821
    ctx->pc = 0x27cf58u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x27cf5c: 0x202d
    ctx->pc = 0x27cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf60: 0x40282d
    ctx->pc = 0x27cf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf64: 0xc66c00b8
    ctx->pc = 0x27cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27cf68: 0x4600a346
    ctx->pc = 0x27cf68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27cf6c: 0x200302d
    ctx->pc = 0x27cf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf70: 0x8e470000
    ctx->pc = 0x27cf70u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27cf74: 0x3c09ff00
    ctx->pc = 0x27cf74u;
    SET_GPR_U32(ctx, 9, ((uint32_t)65280 << 16));
    // 0x27cf78: 0x3c013c23
    ctx->pc = 0x27cf78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27cf7c: 0x3421d70a
    ctx->pc = 0x27cf7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27cf80: 0x44817000
    ctx->pc = 0x27cf80u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x27cf84: 0x3c013e4c
    ctx->pc = 0x27cf84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x27cf88: 0x3421cccd
    ctx->pc = 0x27cf88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27cf8c: 0x44817800
    ctx->pc = 0x27cf8cu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x27cf90: 0x3c013dcc
    ctx->pc = 0x27cf90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x27cf94: 0x3421cccd
    ctx->pc = 0x27cf94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27cf98: 0x44818000
    ctx->pc = 0x27cf98u;
    *(uint32_t*)&ctx->f[16] = GPR_U32(ctx, 1);
    // 0x27cf9c: 0xc0b2a10
    ctx->pc = 0x27CF9Cu;
    SET_GPR_U32(ctx, 31, 0x27CFA4u);
    ctx->pc = 0x27CFA0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2CA840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysFirework_0x2ca840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CFA4u; }
    }
    if (ctx->pc != 0x27CFA4u) { return; }
    ctx->pc = 0x27CFA4u;
    // 0x27cfa4: 0x2416fffe
    ctx->pc = 0x27cfa4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967294));
label_27cfa8:
    // 0x27cfa8: 0x8fa200f0
    ctx->pc = 0x27cfa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_27cfac:
    // 0x27cfac: 0x10400015
    ctx->pc = 0x27CFACu;
    {
        const bool branch_taken_0x27cfac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CFB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
        if (branch_taken_0x27cfac) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CFB4u;
    // 0x27cfb4: 0x8e6300b4
    ctx->pc = 0x27cfb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27cfb8: 0x621024
    ctx->pc = 0x27cfb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27cfbc: 0x10400011
    ctx->pc = 0x27CFBCu;
    {
        const bool branch_taken_0x27cfbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CFC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 248)));
        if (branch_taken_0x27cfbc) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CFC4u;
    // 0x27cfc4: 0x866200c4
    ctx->pc = 0x27cfc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x27cfc8: 0x82102a
    ctx->pc = 0x27cfc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x27cfcc: 0x1040000e
    ctx->pc = 0x27CFCCu;
    {
        const bool branch_taken_0x27cfcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27CFD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27cfcc) {
            ctx->pc = 0x27D008u;
            goto label_27d008;
        }
    }
    ctx->pc = 0x27CFD4u;
    // 0x27cfd4: 0xc66100ac
    ctx->pc = 0x27cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cfd8: 0x3c013f00
    ctx->pc = 0x27cfd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27cfdc: 0x44810000
    ctx->pc = 0x27cfdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27cfe0: 0x46000842
    ctx->pc = 0x27cfe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27cfe4: 0x461f0834
    ctx->pc = 0x27cfe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[31])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cfe8: 0x0
    ctx->pc = 0x27cfe8u;
    // NOP
    // 0x27cfec: 0x45000006
    ctx->pc = 0x27CFECu;
    {
        const bool branch_taken_0x27cfec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CFF0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
        if (branch_taken_0x27cfec) {
            ctx->pc = 0x27D008u;
            goto label_27d008;
        }
    }
    ctx->pc = 0x27CFF4u;
    // 0x27cff4: 0x3c02ffef
    ctx->pc = 0x27cff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65519 << 16));
    // 0x27cff8: 0x3442ffff
    ctx->pc = 0x27cff8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x27cffc: 0x621024
    ctx->pc = 0x27cffcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d000: 0xae6200b4
    ctx->pc = 0x27d000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
label_27d004:
    // 0x27d004: 0x2402ffff
    ctx->pc = 0x27d004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27d008:
    // 0x27d008: 0x56c2000a
    ctx->pc = 0x27D008u;
    {
        const bool branch_taken_0x27d008 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        if (branch_taken_0x27d008) {
            ctx->pc = 0x27D00Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27D034u;
            goto label_27d034;
        }
    }
    ctx->pc = 0x27D010u;
    // 0x27d010: 0x866200be
    ctx->pc = 0x27d010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
    // 0x27d014: 0x58400007
    ctx->pc = 0x27D014u;
    {
        const bool branch_taken_0x27d014 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27d014) {
            ctx->pc = 0x27D018u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27D034u;
            goto label_27d034;
        }
    }
    ctx->pc = 0x27D01Cu;
    // 0x27d01c: 0xc66000b8
    ctx->pc = 0x27d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d020: 0x4600e034
    ctx->pc = 0x27d020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d024: 0x0
    ctx->pc = 0x27d024u;
    // NOP
    // 0x27d028: 0x45030001
    ctx->pc = 0x27D028u;
    {
        const bool branch_taken_0x27d028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d028) {
            ctx->pc = 0x27D02Cu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x27D030u;
            goto label_27d030;
        }
    }
    ctx->pc = 0x27D030u;
label_27d030:
    // 0x27d030: 0xc6610070
    ctx->pc = 0x27d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d034:
    // 0x27d034: 0x4601e034
    ctx->pc = 0x27d034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d038: 0x0
    ctx->pc = 0x27d038u;
    // NOP
    // 0x27d03c: 0x45000006
    ctx->pc = 0x27D03Cu;
    {
        const bool branch_taken_0x27d03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D040u;
        SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
        if (branch_taken_0x27d03c) {
            ctx->pc = 0x27D058u;
            goto label_27d058;
        }
    }
    ctx->pc = 0x27D044u;
    // 0x27d044: 0xc4a0ffb4
    ctx->pc = 0x27d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d048: 0x46010034
    ctx->pc = 0x27d048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d04c: 0x0
    ctx->pc = 0x27d04cu;
    // NOP
    // 0x27d050: 0x45030001
    ctx->pc = 0x27D050u;
    {
        const bool branch_taken_0x27d050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d050) {
            ctx->pc = 0x27D054u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x27D058u;
            goto label_27d058;
        }
    }
    ctx->pc = 0x27D058u;
label_27d058:
    // 0x27d058: 0x6c000c2
    ctx->pc = 0x27D058u;
    {
        const bool branch_taken_0x27d058 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x27D05Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27d058) {
            ctx->pc = 0x27D364u;
            goto label_27d364;
        }
    }
    ctx->pc = 0x27D060u;
    // 0x27d060: 0x12c000c3
    ctx->pc = 0x27D060u;
    {
        const bool branch_taken_0x27d060 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D064u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 232)));
        if (branch_taken_0x27d060) {
            ctx->pc = 0x27D370u;
            goto label_27d370;
        }
    }
    ctx->pc = 0x27D068u;
    // 0x27d068: 0x10600005
    ctx->pc = 0x27D068u;
    {
        const bool branch_taken_0x27d068 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D06Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27d068) {
            ctx->pc = 0x27D080u;
            goto label_27d080;
        }
    }
    ctx->pc = 0x27D070u;
    // 0x27d070: 0xc09814e
    ctx->pc = 0x27D070u;
    SET_GPR_U32(ctx, 31, 0x27D078u);
    ctx->pc = 0x27D074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x260538u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSplash_0x260538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D078u; }
    }
    if (ctx->pc != 0x27D078u) { return; }
    ctx->pc = 0x27D078u;
    // 0x27d078: 0x1000000f
    ctx->pc = 0x27D078u;
    {
        const bool branch_taken_0x27d078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D07Cu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
        if (branch_taken_0x27d078) {
            ctx->pc = 0x27D0B8u;
            goto label_27d0b8;
        }
    }
    ctx->pc = 0x27D080u;
label_27d080:
    // 0x27d080: 0x56c40008
    ctx->pc = 0x27D080u;
    {
        const bool branch_taken_0x27d080 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 4));
        if (branch_taken_0x27d080) {
            ctx->pc = 0x27D084u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 204)));
            ctx->pc = 0x27D0A4u;
            goto label_27d0a4;
        }
    }
    ctx->pc = 0x27D088u;
    // 0x27d088: 0x8e6400d0
    ctx->pc = 0x27d088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x27d08c: 0x5080000a
    ctx->pc = 0x27D08Cu;
    {
        const bool branch_taken_0x27d08c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27d08c) {
            ctx->pc = 0x27D090u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
            ctx->pc = 0x27D0B8u;
            goto label_27d0b8;
        }
    }
    ctx->pc = 0x27D094u;
    // 0x27d094: 0xc097f3c
    ctx->pc = 0x27D094u;
    SET_GPR_U32(ctx, 31, 0x27D09Cu);
    ctx->pc = 0x27D098u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x25FCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEffect_0x25fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D09Cu; }
    }
    if (ctx->pc != 0x27D09Cu) { return; }
    ctx->pc = 0x27D09Cu;
    // 0x27d09c: 0x10000006
    ctx->pc = 0x27D09Cu;
    {
        const bool branch_taken_0x27d09c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D0A0u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
        if (branch_taken_0x27d09c) {
            ctx->pc = 0x27D0B8u;
            goto label_27d0b8;
        }
    }
    ctx->pc = 0x27D0A4u;
label_27d0a4:
    // 0x27d0a4: 0x50800004
    ctx->pc = 0x27D0A4u;
    {
        const bool branch_taken_0x27d0a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27d0a4) {
            ctx->pc = 0x27D0A8u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
            ctx->pc = 0x27D0B8u;
            goto label_27d0b8;
        }
    }
    ctx->pc = 0x27D0ACu;
    // 0x27d0ac: 0xc097f3c
    ctx->pc = 0x27D0ACu;
    SET_GPR_U32(ctx, 31, 0x27D0B4u);
    ctx->pc = 0x27D0B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x25FCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEffect_0x25fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0B4u; }
    }
    if (ctx->pc != 0x27D0B4u) { return; }
    ctx->pc = 0x27D0B4u;
    // 0x27d0b4: 0x866500be
    ctx->pc = 0x27d0b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 190)));
label_27d0b8:
    // 0x27d0b8: 0x1ca00010
    ctx->pc = 0x27D0B8u;
    {
        const bool branch_taken_0x27d0b8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x27D0BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x27d0b8) {
            ctx->pc = 0x27D0FCu;
            goto label_27d0fc;
        }
    }
    ctx->pc = 0x27D0C0u;
    // 0x27d0c0: 0x24020001
    ctx->pc = 0x27d0c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d0c4: 0x16c2000d
    ctx->pc = 0x27D0C4u;
    {
        const bool branch_taken_0x27d0c4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x27D0C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x27d0c4) {
            ctx->pc = 0x27D0FCu;
            goto label_27d0fc;
        }
    }
    ctx->pc = 0x27D0CCu;
    // 0x27d0cc: 0x3c030034
    ctx->pc = 0x27d0ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27d0d0: 0x24630d68
    ctx->pc = 0x27d0d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3432));
    // 0x27d0d4: 0x8e6200b4
    ctx->pc = 0x27d0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27d0d8: 0x3042000f
    ctx->pc = 0x27d0d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x27d0dc: 0x21080
    ctx->pc = 0x27d0dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x27d0e0: 0x431021
    ctx->pc = 0x27d0e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d0e4: 0x8c450000
    ctx->pc = 0x27d0e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d0e8: 0x8e620064
    ctx->pc = 0x27d0e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d0ec: 0x2403fff0
    ctx->pc = 0x27d0ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x27d0f0: 0x431024
    ctx->pc = 0x27d0f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d0f4: 0xae620064
    ctx->pc = 0x27d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x27d0f8: 0x24a2ffff
    ctx->pc = 0x27d0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
label_27d0fc:
    // 0x27d0fc: 0x2c4200d9
    ctx->pc = 0x27d0fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 217));
    // 0x27d100: 0x10400098
    ctx->pc = 0x27D100u;
    {
        const bool branch_taken_0x27d100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D104u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x27d100) {
            ctx->pc = 0x27D364u;
            goto label_27d364;
        }
    }
    ctx->pc = 0x27D108u;
    // 0x27d108: 0xc66000b8
    ctx->pc = 0x27d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d10c: 0x4600e034
    ctx->pc = 0x27d10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d110: 0x0
    ctx->pc = 0x27d110u;
    // NOP
    // 0x27d114: 0x45000002
    ctx->pc = 0x27D114u;
    {
        const bool branch_taken_0x27d114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D118u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27d114) {
            ctx->pc = 0x27D120u;
            goto label_27d120;
        }
    }
    ctx->pc = 0x27D11Cu;
    // 0x27d11c: 0x24060880
    ctx->pc = 0x27d11cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2176));
label_27d120:
    // 0x27d120: 0xc09ea50
    ctx->pc = 0x27D120u;
    SET_GPR_U32(ctx, 31, 0x27D128u);
    ctx->pc = 0x27D124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->pc = 0x27A940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeEffect_0x27a940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D128u; }
    }
    if (ctx->pc != 0x27D128u) { return; }
    ctx->pc = 0x27D128u;
    // 0x27d128: 0xc09e934
    ctx->pc = 0x27D128u;
    SET_GPR_U32(ctx, 31, 0x27D130u);
    ctx->pc = 0x27D12Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->pc = 0x27A4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ZeroEffect_0x27a4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D130u; }
    }
    if (ctx->pc != 0x27D130u) { return; }
    ctx->pc = 0x27D130u;
    // 0x27d130: 0x8e640014
    ctx->pc = 0x27d130u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27d134: 0x3a0282d
    ctx->pc = 0x27d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d138: 0xc0b4302
    ctx->pc = 0x27D138u;
    SET_GPR_U32(ctx, 31, 0x27D140u);
    ctx->pc = 0x27D13Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D140u; }
    }
    if (ctx->pc != 0x27D140u) { return; }
    ctx->pc = 0x27D140u;
    // 0x27d140: 0xc66000b0
    ctx->pc = 0x27d140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d144: 0x461f0032
    ctx->pc = 0x27d144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[31])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d148: 0x0
    ctx->pc = 0x27d148u;
    // NOP
    // 0x27d14c: 0x4503000f
    ctx->pc = 0x27D14Cu;
    {
        const bool branch_taken_0x27d14c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d14c) {
            ctx->pc = 0x27D150u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
            ctx->pc = 0x27D18Cu;
            goto label_27d18c;
        }
    }
    ctx->pc = 0x27D154u;
    // 0x27d154: 0x8e640014
    ctx->pc = 0x27d154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27d158: 0x24050008
    ctx->pc = 0x27d158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x27d15c: 0xc0b41b8
    ctx->pc = 0x27D15Cu;
    SET_GPR_U32(ctx, 31, 0x27D164u);
    ctx->pc = 0x27D160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D164u; }
    }
    if (ctx->pc != 0x27D164u) { return; }
    ctx->pc = 0x27D164u;
    // 0x27d164: 0x8e620014
    ctx->pc = 0x27d164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27d168: 0xc66000b0
    ctx->pc = 0x27d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d16c: 0xe4400040
    ctx->pc = 0x27d16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27d170: 0x8e620014
    ctx->pc = 0x27d170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27d174: 0xc66000b0
    ctx->pc = 0x27d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d178: 0xe4400044
    ctx->pc = 0x27d178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x27d17c: 0x8e620014
    ctx->pc = 0x27d17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27d180: 0xc66000b0
    ctx->pc = 0x27d180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d184: 0xe4400048
    ctx->pc = 0x27d184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x27d188: 0x8e6200b4
    ctx->pc = 0x27d188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_27d18c:
    // 0x27d18c: 0x3c030400
    ctx->pc = 0x27d18cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x27d190: 0x431024
    ctx->pc = 0x27d190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d194: 0x10400008
    ctx->pc = 0x27D194u;
    {
        const bool branch_taken_0x27d194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D198u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27d194) {
            ctx->pc = 0x27D1B8u;
            goto label_27d1b8;
        }
    }
    ctx->pc = 0x27D19Cu;
    // 0x27d19c: 0x461c0032
    ctx->pc = 0x27d19cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d1a0: 0x45000005
    ctx->pc = 0x27D1A0u;
    {
        const bool branch_taken_0x27d1a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d1a0) {
            ctx->pc = 0x27D1B8u;
            goto label_27d1b8;
        }
    }
    ctx->pc = 0x27D1A8u;
    // 0x27d1a8: 0x3c0141a0
    ctx->pc = 0x27d1a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x27d1ac: 0x44810000
    ctx->pc = 0x27d1acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27d1b0: 0xe6600078
    ctx->pc = 0x27d1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
    // 0x27d1b4: 0xc6600078
    ctx->pc = 0x27d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d1b8:
    // 0x27d1b8: 0x4600e034
    ctx->pc = 0x27d1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d1bc: 0x0
    ctx->pc = 0x27d1bcu;
    // NOP
    // 0x27d1c0: 0x4500000f
    ctx->pc = 0x27D1C0u;
    {
        const bool branch_taken_0x27d1c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D1C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x27d1c0) {
            ctx->pc = 0x27D200u;
            goto label_27d200;
        }
    }
    ctx->pc = 0x27D1C8u;
    // 0x27d1c8: 0xc461ffb4
    ctx->pc = 0x27d1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d1cc: 0x46000800
    ctx->pc = 0x27d1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d1d0: 0xe6600068
    ctx->pc = 0x27d1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x27d1d4: 0x46010001
    ctx->pc = 0x27d1d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d1d8: 0xe660006c
    ctx->pc = 0x27d1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
    // 0x27d1dc: 0xa6600050
    ctx->pc = 0x27d1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d1e0: 0x8e630064
    ctx->pc = 0x27d1e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d1e4: 0x3c02fe7d
    ctx->pc = 0x27d1e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65149 << 16));
    // 0x27d1e8: 0x3442fbf9
    ctx->pc = 0x27d1e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64505));
    // 0x27d1ec: 0x621824
    ctx->pc = 0x27d1ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d1f0: 0x3c020010
    ctx->pc = 0x27d1f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x27d1f4: 0x621825
    ctx->pc = 0x27d1f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d1f8: 0x10000037
    ctx->pc = 0x27D1F8u;
    {
        const bool branch_taken_0x27d1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D1FCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
        if (branch_taken_0x27d1f8) {
            ctx->pc = 0x27D2D8u;
            goto label_27d2d8;
        }
    }
    ctx->pc = 0x27D200u;
label_27d200:
    // 0x27d200: 0x8e63001c
    ctx->pc = 0x27d200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x27d204: 0x84620020
    ctx->pc = 0x27d204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x27d208: 0x44820000
    ctx->pc = 0x27d208u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x27d20c: 0x46800020
    ctx->pc = 0x27d20cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x27d210: 0x84620022
    ctx->pc = 0x27d210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x27d214: 0x44820800
    ctx->pc = 0x27d214u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x27d218: 0x46800860
    ctx->pc = 0x27d218u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x27d21c: 0x46010002
    ctx->pc = 0x27d21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27d220: 0x3c013a91
    ctx->pc = 0x27d220u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14993 << 16));
    // 0x27d224: 0x3421a2aa
    ctx->pc = 0x27d224u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 41642));
    // 0x27d228: 0x44810800
    ctx->pc = 0x27d228u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27d22c: 0x46010002
    ctx->pc = 0x27d22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27d230: 0x3c040031
    ctx->pc = 0x27d230u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x27d234: 0xc481ffb4
    ctx->pc = 0x27d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d238: 0x46010000
    ctx->pc = 0x27d238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d23c: 0xe6600068
    ctx->pc = 0x27d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x27d240: 0x46010001
    ctx->pc = 0x27d240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d244: 0xe660006c
    ctx->pc = 0x27d244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
    // 0x27d248: 0xa6600050
    ctx->pc = 0x27d248u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d24c: 0xc66000b8
    ctx->pc = 0x27d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d250: 0x4600e034
    ctx->pc = 0x27d250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d254: 0x0
    ctx->pc = 0x27d254u;
    // NOP
    // 0x27d258: 0x4502001c
    ctx->pc = 0x27D258u;
    {
        const bool branch_taken_0x27d258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d258) {
            ctx->pc = 0x27D25Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27D2CCu;
            goto label_27d2cc;
        }
    }
    ctx->pc = 0x27D260u;
    // 0x27d260: 0x8e630064
    ctx->pc = 0x27d260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d264: 0x3c02f67c
    ctx->pc = 0x27d264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)63100 << 16));
    // 0x27d268: 0x3442fbfb
    ctx->pc = 0x27d268u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64507));
    // 0x27d26c: 0x621824
    ctx->pc = 0x27d26cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d270: 0xae630064
    ctx->pc = 0x27d270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x27d274: 0x8e6200b4
    ctx->pc = 0x27d274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x27d278: 0x30420200
    ctx->pc = 0x27d278u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x27d27c: 0x54400005
    ctx->pc = 0x27D27Cu;
    {
        const bool branch_taken_0x27d27c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27d27c) {
            ctx->pc = 0x27D280u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27D294u;
            goto label_27d294;
        }
    }
    ctx->pc = 0x27D284u;
    // 0x27d284: 0x2402fffd
    ctx->pc = 0x27d284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x27d288: 0x621024
    ctx->pc = 0x27d288u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d28c: 0xae620064
    ctx->pc = 0x27d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x27d290: 0x8e630064
    ctx->pc = 0x27d290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27d294:
    // 0x27d294: 0x34620028
    ctx->pc = 0x27d294u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 40));
    // 0x27d298: 0x12e00003
    ctx->pc = 0x27D298u;
    {
        const bool branch_taken_0x27d298 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D29Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x27d298) {
            ctx->pc = 0x27D2A8u;
            goto label_27d2a8;
        }
    }
    ctx->pc = 0x27D2A0u;
    // 0x27d2a0: 0x34620029
    ctx->pc = 0x27d2a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 41));
    // 0x27d2a4: 0xae620064
    ctx->pc = 0x27d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_27d2a8:
    // 0x27d2a8: 0x8e6400e0
    ctx->pc = 0x27d2a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x27d2ac: 0x5080000b
    ctx->pc = 0x27D2ACu;
    {
        const bool branch_taken_0x27d2ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27d2ac) {
            ctx->pc = 0x27D2B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->pc = 0x27D2DCu;
            goto label_27d2dc;
        }
    }
    ctx->pc = 0x27D2B4u;
    // 0x27d2b4: 0xc0b3f1a
    ctx->pc = 0x27D2B4u;
    SET_GPR_U32(ctx, 31, 0x27D2BCu);
    ctx->pc = 0x27D2B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2BCu; }
    }
    if (ctx->pc != 0x27D2BCu) { return; }
    ctx->pc = 0x27D2BCu;
    // 0x27d2bc: 0xc09fde0
    ctx->pc = 0x27D2BCu;
    SET_GPR_U32(ctx, 31, 0x27D2C4u);
    ctx->pc = 0x27D2C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->pc = 0x27F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxAdd_0x27f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2C4u; }
    }
    if (ctx->pc != 0x27D2C4u) { return; }
    ctx->pc = 0x27D2C4u;
    // 0x27d2c4: 0x10000005
    ctx->pc = 0x27D2C4u;
    {
        const bool branch_taken_0x27d2c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D2C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
        if (branch_taken_0x27d2c4) {
            ctx->pc = 0x27D2DCu;
            goto label_27d2dc;
        }
    }
    ctx->pc = 0x27D2CCu;
label_27d2cc:
    // 0x27d2cc: 0x2403fff0
    ctx->pc = 0x27d2ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x27d2d0: 0x431024
    ctx->pc = 0x27d2d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d2d4: 0xae620064
    ctx->pc = 0x27d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_27d2d8:
    // 0x27d2d8: 0x8e620064
    ctx->pc = 0x27d2d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_27d2dc:
    // 0x27d2dc: 0x3c030030
    ctx->pc = 0x27d2dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x27d2e0: 0x431024
    ctx->pc = 0x27d2e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d2e4: 0x10400011
    ctx->pc = 0x27D2E4u;
    {
        const bool branch_taken_0x27d2e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D2E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27d2e4) {
            ctx->pc = 0x27D32Cu;
            goto label_27d32c;
        }
    }
    ctx->pc = 0x27D2ECu;
    // 0x27d2ec: 0xe7a00030
    ctx->pc = 0x27d2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27d2f0: 0xc7a00094
    ctx->pc = 0x27d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2f4: 0xe7a00034
    ctx->pc = 0x27d2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27d2f8: 0xc7a00098
    ctx->pc = 0x27d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d2fc: 0xe7a00038
    ctx->pc = 0x27d2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27d300: 0x8fa400e0
    ctx->pc = 0x27d300u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27d304: 0xc09eaa0
    ctx->pc = 0x27D304u;
    SET_GPR_U32(ctx, 31, 0x27D30Cu);
    ctx->pc = 0x27D308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27AA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceEffectOnFloor_0x27aa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D30Cu; }
    }
    if (ctx->pc != 0x27D30Cu) { return; }
    ctx->pc = 0x27D30Cu;
    // 0x27d30c: 0x24050001
    ctx->pc = 0x27d30cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d310: 0xafa500ec
    ctx->pc = 0x27d310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x27d314: 0xc7a00030
    ctx->pc = 0x27d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d318: 0xe7a00090
    ctx->pc = 0x27d318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27d31c: 0xc7a00034
    ctx->pc = 0x27d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d320: 0xe7a00094
    ctx->pc = 0x27d320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x27d324: 0xc7a00038
    ctx->pc = 0x27d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d328: 0xe7a00098
    ctx->pc = 0x27d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_27d32c:
    // 0x27d32c: 0x8e620064
    ctx->pc = 0x27d32cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d330: 0x3c030400
    ctx->pc = 0x27d330u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x27d334: 0x431024
    ctx->pc = 0x27d334u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d338: 0x1040000e
    ctx->pc = 0x27D338u;
    {
        const bool branch_taken_0x27d338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D33Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
        if (branch_taken_0x27d338) {
            ctx->pc = 0x27D374u;
            goto label_27d374;
        }
    }
    ctx->pc = 0x27D340u;
    // 0x27d340: 0xc0a7750
    ctx->pc = 0x27D340u;
    SET_GPR_U32(ctx, 31, 0x27D348u);
    ctx->pc = 0x27D344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29DD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossGenerateEnemy_0x29dd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D348u; }
    }
    if (ctx->pc != 0x27D348u) { return; }
    ctx->pc = 0x27D348u;
    // 0x27d348: 0x8e620064
    ctx->pc = 0x27d348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d34c: 0x3c03fbff
    ctx->pc = 0x27d34cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64511 << 16));
    // 0x27d350: 0x3463ffff
    ctx->pc = 0x27d350u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x27d354: 0x431024
    ctx->pc = 0x27d354u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d358: 0x34420400
    ctx->pc = 0x27d358u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
    // 0x27d35c: 0x10000004
    ctx->pc = 0x27D35Cu;
    {
        const bool branch_taken_0x27d35c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D360u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x27d35c) {
            ctx->pc = 0x27D370u;
            goto label_27d370;
        }
    }
    ctx->pc = 0x27D364u;
label_27d364:
    // 0x27d364: 0xc440ffb4
    ctx->pc = 0x27d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d368: 0xe6600068
    ctx->pc = 0x27d368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x27d36c: 0xa6600050
    ctx->pc = 0x27d36cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
label_27d370:
    // 0x27d370: 0x3c100031
    ctx->pc = 0x27d370u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
label_27d374:
    // 0x27d374: 0xc6600068
    ctx->pc = 0x27d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d378: 0x3c013d08
    ctx->pc = 0x27d378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x27d37c: 0x34217a8d
    ctx->pc = 0x27d37cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 31373));
    // 0x27d380: 0x44810800
    ctx->pc = 0x27d380u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27d384: 0x46010001
    ctx->pc = 0x27d384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d388: 0xc601ffb4
    ctx->pc = 0x27d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d38c: 0x46010036
    ctx->pc = 0x27d38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d390: 0x0
    ctx->pc = 0x27d390u;
    // NOP
    // 0x27d394: 0x45000064
    ctx->pc = 0x27D394u;
    {
        const bool branch_taken_0x27d394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D398u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        if (branch_taken_0x27d394) {
            ctx->pc = 0x27D528u;
            goto label_27d528;
        }
    }
    ctx->pc = 0x27D39Cu;
    // 0x27d39c: 0x8e630064
    ctx->pc = 0x27d39cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d3a0: 0x621024
    ctx->pc = 0x27d3a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d3a4: 0x54400061
    ctx->pc = 0x27D3A4u;
    {
        const bool branch_taken_0x27d3a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27d3a4) {
            ctx->pc = 0x27D3A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->pc = 0x27D52Cu;
            goto label_27d52c;
        }
    }
    ctx->pc = 0x27D3ACu;
    // 0x27d3ac: 0x30624000
    ctx->pc = 0x27d3acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
    // 0x27d3b0: 0x10400030
    ctx->pc = 0x27D3B0u;
    {
        const bool branch_taken_0x27d3b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D3B4u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 192)));
        if (branch_taken_0x27d3b0) {
            ctx->pc = 0x27D474u;
            goto label_27d474;
        }
    }
    ctx->pc = 0x27D3B8u;
    // 0x27d3b8: 0x24a2ffff
    ctx->pc = 0x27d3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27d3bc: 0x2c4200d9
    ctx->pc = 0x27d3bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 217));
    // 0x27d3c0: 0x1040002c
    ctx->pc = 0x27D3C0u;
    {
        const bool branch_taken_0x27d3c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D3C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x27d3c0) {
            ctx->pc = 0x27D474u;
            goto label_27d474;
        }
    }
    ctx->pc = 0x27D3C8u;
    // 0x27d3c8: 0xc09ea50
    ctx->pc = 0x27D3C8u;
    SET_GPR_U32(ctx, 31, 0x27D3D0u);
    ctx->pc = 0x27D3CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27A940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeEffect_0x27a940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D3D0u; }
    }
    if (ctx->pc != 0x27D3D0u) { return; }
    ctx->pc = 0x27D3D0u;
    // 0x27d3d0: 0xc6610074
    ctx->pc = 0x27d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d3d4: 0x4601e034
    ctx->pc = 0x27d3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d3d8: 0x0
    ctx->pc = 0x27d3d8u;
    // NOP
    // 0x27d3dc: 0x4501000f
    ctx->pc = 0x27D3DCu;
    {
        const bool branch_taken_0x27d3dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D3E0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27d3dc) {
            ctx->pc = 0x27D41Cu;
            goto label_27d41c;
        }
    }
    ctx->pc = 0x27D3E4u;
    // 0x27d3e4: 0x8e63001c
    ctx->pc = 0x27d3e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x27d3e8: 0x84620020
    ctx->pc = 0x27d3e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x27d3ec: 0x44820000
    ctx->pc = 0x27d3ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x27d3f0: 0x46800020
    ctx->pc = 0x27d3f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x27d3f4: 0x84620022
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x27d3f8: 0x44820800
    ctx->pc = 0x27d3f8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x27d3fc: 0x46800860
    ctx->pc = 0x27d3fcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x27d400: 0x46010002
    ctx->pc = 0x27d400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27d404: 0x3c013a91
    ctx->pc = 0x27d404u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14993 << 16));
    // 0x27d408: 0x3421a2aa
    ctx->pc = 0x27d408u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 41642));
    // 0x27d40c: 0x44810800
    ctx->pc = 0x27d40cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27d410: 0x46010002
    ctx->pc = 0x27d410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27d414: 0x3c030031
    ctx->pc = 0x27d414u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x27d418: 0xc461ffb4
    ctx->pc = 0x27d418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d41c:
    // 0x27d41c: 0x46010000
    ctx->pc = 0x27d41cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d420: 0xe6600068
    ctx->pc = 0x27d420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x27d424: 0xc6600068
    ctx->pc = 0x27d424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d428: 0x3c040031
    ctx->pc = 0x27d428u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x27d42c: 0xc481ffb4
    ctx->pc = 0x27d42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d430: 0x46010001
    ctx->pc = 0x27d430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d434: 0xe660006c
    ctx->pc = 0x27d434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
    // 0x27d438: 0x866200c2
    ctx->pc = 0x27d438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x27d43c: 0x18400005
    ctx->pc = 0x27D43Cu;
    {
        const bool branch_taken_0x27d43c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27D440u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
        if (branch_taken_0x27d43c) {
            ctx->pc = 0x27D454u;
            goto label_27d454;
        }
    }
    ctx->pc = 0x27D444u;
    // 0x27d444: 0xa66300c0
    ctx->pc = 0x27d444u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d448: 0xa66000c2
    ctx->pc = 0x27d448u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d44c: 0x10000006
    ctx->pc = 0x27D44Cu;
    {
        const bool branch_taken_0x27d44c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D450u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
        if (branch_taken_0x27d44c) {
            ctx->pc = 0x27D468u;
            goto label_27d468;
        }
    }
    ctx->pc = 0x27D454u;
label_27d454:
    // 0x27d454: 0x8e620064
    ctx->pc = 0x27d454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d458: 0x2403bfff
    ctx->pc = 0x27d458u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x27d45c: 0x431024
    ctx->pc = 0x27d45cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d460: 0xae620064
    ctx->pc = 0x27d460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x27d464: 0xae6000b8
    ctx->pc = 0x27d464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 0));
label_27d468:
    // 0x27d468: 0x24050001
    ctx->pc = 0x27d468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d46c: 0x1000002e
    ctx->pc = 0x27D46Cu;
    {
        const bool branch_taken_0x27d46c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D470u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x27d46c) {
            ctx->pc = 0x27D528u;
            goto label_27d528;
        }
    }
    ctx->pc = 0x27D474u;
label_27d474:
    // 0x27d474: 0x8e620064
    ctx->pc = 0x27d474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d478: 0x3c030200
    ctx->pc = 0x27d478u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x27d47c: 0x431024
    ctx->pc = 0x27d47cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d480: 0x10400006
    ctx->pc = 0x27D480u;
    {
        const bool branch_taken_0x27d480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D484u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x27d480) {
            ctx->pc = 0x27D49Cu;
            goto label_27d49c;
        }
    }
    ctx->pc = 0x27D488u;
    // 0x27d488: 0x282d
    ctx->pc = 0x27d488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d48c: 0x3c06003b
    ctx->pc = 0x27d48cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x27d490: 0x24c6bef8
    ctx->pc = 0x27d490u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950648));
    // 0x27d494: 0xc094e54
    ctx->pc = 0x27D494u;
    SET_GPR_U32(ctx, 31, 0x27D49Cu);
    ctx->pc = 0x27D498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253950u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItem_0x253950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D49Cu; }
    }
    if (ctx->pc != 0x27D49Cu) { return; }
    ctx->pc = 0x27D49Cu;
label_27d49c:
    // 0x27d49c: 0x8e620064
    ctx->pc = 0x27d49cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x27d4a0: 0x3c030400
    ctx->pc = 0x27d4a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x27d4a4: 0x431024
    ctx->pc = 0x27d4a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d4a8: 0x50400004
    ctx->pc = 0x27D4A8u;
    {
        const bool branch_taken_0x27d4a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27d4a8) {
            ctx->pc = 0x27D4ACu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 236)));
            ctx->pc = 0x27D4BCu;
            goto label_27d4bc;
        }
    }
    ctx->pc = 0x27D4B0u;
    // 0x27d4b0: 0xc0a7750
    ctx->pc = 0x27D4B0u;
    SET_GPR_U32(ctx, 31, 0x27D4B8u);
    ctx->pc = 0x27D4B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29DD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossGenerateEnemy_0x29dd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4B8u; }
    }
    if (ctx->pc != 0x27D4B8u) { return; }
    ctx->pc = 0x27D4B8u;
    // 0x27d4b8: 0x8e6400ec
    ctx->pc = 0x27d4b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_27d4bc:
    // 0x27d4bc: 0x10800015
    ctx->pc = 0x27D4BCu;
    {
        const bool branch_taken_0x27d4bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D4C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27d4bc) {
            ctx->pc = 0x27D514u;
            goto label_27d514;
        }
    }
    ctx->pc = 0x27D4C4u;
    // 0x27d4c4: 0xa20000e1
    ctx->pc = 0x27d4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 0));
    // 0x27d4c8: 0x8e040070
    ctx->pc = 0x27d4c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x27d4cc: 0x24050002
    ctx->pc = 0x27d4ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d4d0: 0xc0b41e4
    ctx->pc = 0x27D4D0u;
    SET_GPR_U32(ctx, 31, 0x27D4D8u);
    ctx->pc = 0x27D4D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D4D8u; }
    }
    if (ctx->pc != 0x27D4D8u) { return; }
    ctx->pc = 0x27D4D8u;
    // 0x27d4d8: 0x8e020000
    ctx->pc = 0x27d4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d4dc: 0x8c420000
    ctx->pc = 0x27d4dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d4e0: 0x24030001
    ctx->pc = 0x27d4e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d4e4: 0x14430004
    ctx->pc = 0x27D4E4u;
    {
        const bool branch_taken_0x27d4e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x27D4E8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27d4e4) {
            ctx->pc = 0x27D4F8u;
            goto label_27d4f8;
        }
    }
    ctx->pc = 0x27D4ECu;
    // 0x27d4ec: 0x2402000a
    ctx->pc = 0x27d4ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x27d4f0: 0xa6020100
    ctx->pc = 0x27d4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x27d4f4: 0xc7a00030
    ctx->pc = 0x27d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d4f8:
    // 0x27d4f8: 0xe6000040
    ctx->pc = 0x27d4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x27d4fc: 0xc7a00034
    ctx->pc = 0x27d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d500: 0xe6000044
    ctx->pc = 0x27d500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x27d504: 0xc7a00038
    ctx->pc = 0x27d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d508: 0xe6000048
    ctx->pc = 0x27d508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x27d50c: 0xc094c28
    ctx->pc = 0x27D50Cu;
    SET_GPR_U32(ctx, 31, 0x27D514u);
    ctx->pc = 0x27D510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2530A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceItem_0x2530a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D514u; }
    }
    if (ctx->pc != 0x27D514u) { return; }
    ctx->pc = 0x27D514u;
label_27d514:
    // 0x27d514: 0x8fa400e0
    ctx->pc = 0x27d514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27d518: 0xc09e964
    ctx->pc = 0x27D518u;
    SET_GPR_U32(ctx, 31, 0x27D520u);
    ctx->pc = 0x27D51Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D520u; }
    }
    if (ctx->pc != 0x27D520u) { return; }
    ctx->pc = 0x27D520u;
    // 0x27d520: 0x10000017
    ctx->pc = 0x27D520u;
    {
        const bool branch_taken_0x27d520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D524u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x27d520) {
            ctx->pc = 0x27D580u;
            goto label_27d580;
        }
    }
    ctx->pc = 0x27D528u;
label_27d528:
    // 0x27d528: 0x8e620018
    ctx->pc = 0x27d528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_27d52c:
    // 0x27d52c: 0x10400004
    ctx->pc = 0x27D52Cu;
    {
        const bool branch_taken_0x27d52c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D530u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 24));
        if (branch_taken_0x27d52c) {
            ctx->pc = 0x27D540u;
            goto label_27d540;
        }
    }
    ctx->pc = 0x27D534u;
    // 0x27d534: 0x282d
    ctx->pc = 0x27d534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d538: 0xc084a96
    ctx->pc = 0x27D538u;
    SET_GPR_U32(ctx, 31, 0x27D540u);
    ctx->pc = 0x27D53Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D540u; }
    }
    if (ctx->pc != 0x27D540u) { return; }
    ctx->pc = 0x27D540u;
label_27d540:
    // 0x27d540: 0x8fa400ec
    ctx->pc = 0x27d540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x27d544: 0x1080000d
    ctx->pc = 0x27D544u;
    {
        const bool branch_taken_0x27d544 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D548u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27d544) {
            ctx->pc = 0x27D57Cu;
            goto label_27d57c;
        }
    }
    ctx->pc = 0x27D54Cu;
    // 0x27d54c: 0xe7a00030
    ctx->pc = 0x27d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27d550: 0xc7a00094
    ctx->pc = 0x27d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d554: 0xe7a00034
    ctx->pc = 0x27d554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27d558: 0xc7a00098
    ctx->pc = 0x27d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d55c: 0xe7a00038
    ctx->pc = 0x27d55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27d560: 0x3a0202d
    ctx->pc = 0x27d560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d564: 0xc0b5494
    ctx->pc = 0x27D564u;
    SET_GPR_U32(ctx, 31, 0x27D56Cu);
    ctx->pc = 0x27D568u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D56Cu; }
    }
    if (ctx->pc != 0x27D56Cu) { return; }
    ctx->pc = 0x27D56Cu;
    // 0x27d56c: 0x8e620014
    ctx->pc = 0x27d56cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x27d570: 0x40202d
    ctx->pc = 0x27d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d574: 0xc0b42dc
    ctx->pc = 0x27D574u;
    SET_GPR_U32(ctx, 31, 0x27D57Cu);
    ctx->pc = 0x27D578u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->pc = 0x2D0B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UnparentMatrix_0x2d0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D57Cu; }
    }
    if (ctx->pc != 0x27D57Cu) { return; }
    ctx->pc = 0x27D57Cu;
label_27d57c:
    // 0x27d57c: 0x8fa500e0
    ctx->pc = 0x27d57cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27d580:
    // 0x27d580: 0x24a50001
    ctx->pc = 0x27d580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x27d584: 0xafa500e0
    ctx->pc = 0x27d584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x27d588: 0x3c020034
    ctx->pc = 0x27d588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27d58c: 0x8c424ab0
    ctx->pc = 0x27d58cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 19120)));
    // 0x27d590: 0xa2102a
    ctx->pc = 0x27d590u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x27d594: 0x1440f6e8
    ctx->pc = 0x27D594u;
    {
        const bool branch_taken_0x27d594 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27D598u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27d594) {
            ctx->pc = 0x27B138u;
            goto label_27b138;
        }
    }
    ctx->pc = 0x27D59Cu;
    // 0x27d59c: 0xdfbf0190
    ctx->pc = 0x27d59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_27d5a0:
    // 0x27d5a0: 0xdfbe0180
    ctx->pc = 0x27d5a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x27d5a4: 0xdfb70170
    ctx->pc = 0x27d5a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x27d5a8: 0xdfb60160
    ctx->pc = 0x27d5a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27d5ac: 0xdfb50150
    ctx->pc = 0x27d5acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27d5b0: 0xdfb40140
    ctx->pc = 0x27d5b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27d5b4: 0xdfb30130
    ctx->pc = 0x27d5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27d5b8: 0xdfb20120
    ctx->pc = 0x27d5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27d5bc: 0xdfb10110
    ctx->pc = 0x27d5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27d5c0: 0xdfb00100
    ctx->pc = 0x27d5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27d5c4: 0xc7bf01f8
    ctx->pc = 0x27d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x27d5c8: 0xc7be01f0
    ctx->pc = 0x27d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x27d5cc: 0xc7bd01e8
    ctx->pc = 0x27d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x27d5d0: 0xc7bc01e0
    ctx->pc = 0x27d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27d5d4: 0xc7bb01d8
    ctx->pc = 0x27d5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27d5d8: 0xc7ba01d0
    ctx->pc = 0x27d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27d5dc: 0xc7b901c8
    ctx->pc = 0x27d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27d5e0: 0xc7b801c0
    ctx->pc = 0x27d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27d5e4: 0xc7b701b8
    ctx->pc = 0x27d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27d5e8: 0xc7b601b0
    ctx->pc = 0x27d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27d5ec: 0xc7b501a8
    ctx->pc = 0x27d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d5f0: 0xc7b401a0
    ctx->pc = 0x27d5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d5f4: 0x3e00008
    ctx->pc = 0x27D5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D5F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B138u: goto label_27b138;
            case 0x27B264u: goto label_27b264;
            case 0x27B268u: goto label_27b268;
            case 0x27B2C0u: goto label_27b2c0;
            case 0x27B30Cu: goto label_27b30c;
            case 0x27B320u: goto label_27b320;
            case 0x27B368u: goto label_27b368;
            case 0x27B37Cu: goto label_27b37c;
            case 0x27B3C0u: goto label_27b3c0;
            case 0x27B3C4u: goto label_27b3c4;
            case 0x27B3F0u: goto label_27b3f0;
            case 0x27B428u: goto label_27b428;
            case 0x27B458u: goto label_27b458;
            case 0x27B484u: goto label_27b484;
            case 0x27B488u: goto label_27b488;
            case 0x27B4D0u: goto label_27b4d0;
            case 0x27B4ECu: goto label_27b4ec;
            case 0x27B510u: goto label_27b510;
            case 0x27B51Cu: goto label_27b51c;
            case 0x27B59Cu: goto label_27b59c;
            case 0x27B5A0u: goto label_27b5a0;
            case 0x27B5BCu: goto label_27b5bc;
            case 0x27B5D8u: goto label_27b5d8;
            case 0x27B5FCu: goto label_27b5fc;
            case 0x27B61Cu: goto label_27b61c;
            case 0x27B624u: goto label_27b624;
            case 0x27B634u: goto label_27b634;
            case 0x27B63Cu: goto label_27b63c;
            case 0x27B668u: goto label_27b668;
            case 0x27B694u: goto label_27b694;
            case 0x27B6D0u: goto label_27b6d0;
            case 0x27B6D8u: goto label_27b6d8;
            case 0x27B700u: goto label_27b700;
            case 0x27B73Cu: goto label_27b73c;
            case 0x27B744u: goto label_27b744;
            case 0x27B750u: goto label_27b750;
            case 0x27B75Cu: goto label_27b75c;
            case 0x27B760u: goto label_27b760;
            case 0x27B7B4u: goto label_27b7b4;
            case 0x27B7C8u: goto label_27b7c8;
            case 0x27B82Cu: goto label_27b82c;
            case 0x27B848u: goto label_27b848;
            case 0x27B8A4u: goto label_27b8a4;
            case 0x27B8ECu: goto label_27b8ec;
            case 0x27B91Cu: goto label_27b91c;
            case 0x27B994u: goto label_27b994;
            case 0x27B998u: goto label_27b998;
            case 0x27B9A8u: goto label_27b9a8;
            case 0x27B9E4u: goto label_27b9e4;
            case 0x27B9F8u: goto label_27b9f8;
            case 0x27BA68u: goto label_27ba68;
            case 0x27BA88u: goto label_27ba88;
            case 0x27BB78u: goto label_27bb78;
            case 0x27BBDCu: goto label_27bbdc;
            case 0x27BBECu: goto label_27bbec;
            case 0x27BC40u: goto label_27bc40;
            case 0x27BC64u: goto label_27bc64;
            case 0x27BC7Cu: goto label_27bc7c;
            case 0x27BC80u: goto label_27bc80;
            case 0x27BC84u: goto label_27bc84;
            case 0x27BC98u: goto label_27bc98;
            case 0x27BCB0u: goto label_27bcb0;
            case 0x27BDACu: goto label_27bdac;
            case 0x27BDDCu: goto label_27bddc;
            case 0x27BDE0u: goto label_27bde0;
            case 0x27BE04u: goto label_27be04;
            case 0x27BE6Cu: goto label_27be6c;
            case 0x27BE80u: goto label_27be80;
            case 0x27BEACu: goto label_27beac;
            case 0x27BEC8u: goto label_27bec8;
            case 0x27BF34u: goto label_27bf34;
            case 0x27BF48u: goto label_27bf48;
            case 0x27BF68u: goto label_27bf68;
            case 0x27BF6Cu: goto label_27bf6c;
            case 0x27BF70u: goto label_27bf70;
            case 0x27BF78u: goto label_27bf78;
            case 0x27BF8Cu: goto label_27bf8c;
            case 0x27BFA8u: goto label_27bfa8;
            case 0x27BFB8u: goto label_27bfb8;
            case 0x27BFBCu: goto label_27bfbc;
            case 0x27BFC0u: goto label_27bfc0;
            case 0x27C040u: goto label_27c040;
            case 0x27C068u: goto label_27c068;
            case 0x27C080u: goto label_27c080;
            case 0x27C0ACu: goto label_27c0ac;
            case 0x27C15Cu: goto label_27c15c;
            case 0x27C168u: goto label_27c168;
            case 0x27C18Cu: goto label_27c18c;
            case 0x27C1E8u: goto label_27c1e8;
            case 0x27C1ECu: goto label_27c1ec;
            case 0x27C20Cu: goto label_27c20c;
            case 0x27C228u: goto label_27c228;
            case 0x27C244u: goto label_27c244;
            case 0x27C258u: goto label_27c258;
            case 0x27C2E4u: goto label_27c2e4;
            case 0x27C354u: goto label_27c354;
            case 0x27C370u: goto label_27c370;
            case 0x27C37Cu: goto label_27c37c;
            case 0x27C3ACu: goto label_27c3ac;
            case 0x27C3CCu: goto label_27c3cc;
            case 0x27C3D8u: goto label_27c3d8;
            case 0x27C3E0u: goto label_27c3e0;
            case 0x27C438u: goto label_27c438;
            case 0x27C46Cu: goto label_27c46c;
            case 0x27C4B8u: goto label_27c4b8;
            case 0x27C4BCu: goto label_27c4bc;
            case 0x27C4ECu: goto label_27c4ec;
            case 0x27C578u: goto label_27c578;
            case 0x27C5D8u: goto label_27c5d8;
            case 0x27C604u: goto label_27c604;
            case 0x27C640u: goto label_27c640;
            case 0x27C654u: goto label_27c654;
            case 0x27C684u: goto label_27c684;
            case 0x27C6D8u: goto label_27c6d8;
            case 0x27C6E8u: goto label_27c6e8;
            case 0x27C708u: goto label_27c708;
            case 0x27C70Cu: goto label_27c70c;
            case 0x27C724u: goto label_27c724;
            case 0x27C758u: goto label_27c758;
            case 0x27C75Cu: goto label_27c75c;
            case 0x27C77Cu: goto label_27c77c;
            case 0x27C780u: goto label_27c780;
            case 0x27C784u: goto label_27c784;
            case 0x27C804u: goto label_27c804;
            case 0x27C838u: goto label_27c838;
            case 0x27C88Cu: goto label_27c88c;
            case 0x27C8BCu: goto label_27c8bc;
            case 0x27C8C0u: goto label_27c8c0;
            case 0x27C8ECu: goto label_27c8ec;
            case 0x27C9A0u: goto label_27c9a0;
            case 0x27C9ACu: goto label_27c9ac;
            case 0x27C9F8u: goto label_27c9f8;
            case 0x27CA34u: goto label_27ca34;
            case 0x27CA54u: goto label_27ca54;
            case 0x27CA7Cu: goto label_27ca7c;
            case 0x27CA98u: goto label_27ca98;
            case 0x27CB10u: goto label_27cb10;
            case 0x27CB44u: goto label_27cb44;
            case 0x27CB74u: goto label_27cb74;
            case 0x27CBA0u: goto label_27cba0;
            case 0x27CBBCu: goto label_27cbbc;
            case 0x27CBD8u: goto label_27cbd8;
            case 0x27CC1Cu: goto label_27cc1c;
            case 0x27CC20u: goto label_27cc20;
            case 0x27CCE8u: goto label_27cce8;
            case 0x27CD00u: goto label_27cd00;
            case 0x27CD10u: goto label_27cd10;
            case 0x27CD40u: goto label_27cd40;
            case 0x27CD7Cu: goto label_27cd7c;
            case 0x27CDA4u: goto label_27cda4;
            case 0x27CDD4u: goto label_27cdd4;
            case 0x27CDD8u: goto label_27cdd8;
            case 0x27CE58u: goto label_27ce58;
            case 0x27CFA8u: goto label_27cfa8;
            case 0x27CFACu: goto label_27cfac;
            case 0x27D004u: goto label_27d004;
            case 0x27D008u: goto label_27d008;
            case 0x27D030u: goto label_27d030;
            case 0x27D034u: goto label_27d034;
            case 0x27D058u: goto label_27d058;
            case 0x27D080u: goto label_27d080;
            case 0x27D0A4u: goto label_27d0a4;
            case 0x27D0B8u: goto label_27d0b8;
            case 0x27D0FCu: goto label_27d0fc;
            case 0x27D120u: goto label_27d120;
            case 0x27D18Cu: goto label_27d18c;
            case 0x27D1B8u: goto label_27d1b8;
            case 0x27D200u: goto label_27d200;
            case 0x27D294u: goto label_27d294;
            case 0x27D2A8u: goto label_27d2a8;
            case 0x27D2CCu: goto label_27d2cc;
            case 0x27D2D8u: goto label_27d2d8;
            case 0x27D2DCu: goto label_27d2dc;
            case 0x27D32Cu: goto label_27d32c;
            case 0x27D364u: goto label_27d364;
            case 0x27D370u: goto label_27d370;
            case 0x27D374u: goto label_27d374;
            case 0x27D41Cu: goto label_27d41c;
            case 0x27D454u: goto label_27d454;
            case 0x27D468u: goto label_27d468;
            case 0x27D474u: goto label_27d474;
            case 0x27D49Cu: goto label_27d49c;
            case 0x27D4BCu: goto label_27d4bc;
            case 0x27D4F8u: goto label_27d4f8;
            case 0x27D514u: goto label_27d514;
            case 0x27D528u: goto label_27d528;
            case 0x27D52Cu: goto label_27d52c;
            case 0x27D540u: goto label_27d540;
            case 0x27D57Cu: goto label_27d57c;
            case 0x27D580u: goto label_27d580;
            case 0x27D5A0u: goto label_27d5a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D5FCu;
}
