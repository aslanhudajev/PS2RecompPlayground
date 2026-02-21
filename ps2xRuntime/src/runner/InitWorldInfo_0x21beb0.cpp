#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitWorldInfo
// Address: 0x21beb0 - 0x21c2a8
void InitWorldInfo_0x21beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21beb0u;

    // 0x21beb0: 0x27bdff50
    ctx->pc = 0x21beb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21beb4: 0xffbf00a0
    ctx->pc = 0x21beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x21beb8: 0xffbe0090
    ctx->pc = 0x21beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x21bebc: 0xffb70080
    ctx->pc = 0x21bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x21bec0: 0xffb60070
    ctx->pc = 0x21bec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x21bec4: 0xffb50060
    ctx->pc = 0x21bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x21bec8: 0xffb40050
    ctx->pc = 0x21bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x21becc: 0xffb30040
    ctx->pc = 0x21beccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x21bed0: 0xffb20030
    ctx->pc = 0x21bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21bed4: 0xffb10020
    ctx->pc = 0x21bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x21bed8: 0xffb00010
    ctx->pc = 0x21bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21bedc: 0x80882d
    ctx->pc = 0x21bedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bee0: 0xa0902d
    ctx->pc = 0x21bee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bee4: 0x3c02003a
    ctx->pc = 0x21bee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21bee8: 0x8c42230c
    ctx->pc = 0x21bee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x21beec: 0xafa20000
    ctx->pc = 0x21beecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21bef0: 0x240a02d
    ctx->pc = 0x21bef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bef4: 0x8e420004
    ctx->pc = 0x21bef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21bef8: 0x2421021
    ctx->pc = 0x21bef8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21befc: 0xae220004
    ctx->pc = 0x21befcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x21bf00: 0x8e42000c
    ctx->pc = 0x21bf00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21bf04: 0x2421021
    ctx->pc = 0x21bf04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bf08: 0xae220008
    ctx->pc = 0x21bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x21bf0c: 0x8e420020
    ctx->pc = 0x21bf0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x21bf10: 0x2421021
    ctx->pc = 0x21bf10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bf14: 0xae22000c
    ctx->pc = 0x21bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x21bf18: 0x8e420014
    ctx->pc = 0x21bf18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x21bf1c: 0x2421021
    ctx->pc = 0x21bf1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bf20: 0xae220010
    ctx->pc = 0x21bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x21bf24: 0x8e42001c
    ctx->pc = 0x21bf24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x21bf28: 0x2421021
    ctx->pc = 0x21bf28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bf2c: 0xae220014
    ctx->pc = 0x21bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x21bf30: 0x8e42004c
    ctx->pc = 0x21bf30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x21bf34: 0x2421021
    ctx->pc = 0x21bf34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bf38: 0xae220068
    ctx->pc = 0x21bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x21bf3c: 0x8e420054
    ctx->pc = 0x21bf3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x21bf40: 0x2421021
    ctx->pc = 0x21bf40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bf44: 0xae22006c
    ctx->pc = 0x21bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x21bf48: 0x8e42005c
    ctx->pc = 0x21bf48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x21bf4c: 0x2421021
    ctx->pc = 0x21bf4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bf50: 0xae220070
    ctx->pc = 0x21bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x21bf54: 0x8e420000
    ctx->pc = 0x21bf54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21bf58: 0xae220060
    ctx->pc = 0x21bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x21bf5c: 0x8e420008
    ctx->pc = 0x21bf5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21bf60: 0xae220064
    ctx->pc = 0x21bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x21bf64: 0x8e420048
    ctx->pc = 0x21bf64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x21bf68: 0xae220074
    ctx->pc = 0x21bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x21bf6c: 0x8e420050
    ctx->pc = 0x21bf6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x21bf70: 0xae220078
    ctx->pc = 0x21bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x21bf74: 0x8e420058
    ctx->pc = 0x21bf74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x21bf78: 0xae22007c
    ctx->pc = 0x21bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x21bf7c: 0xc6430024
    ctx->pc = 0x21bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21bf80: 0xe6230018
    ctx->pc = 0x21bf80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x21bf84: 0xc6440028
    ctx->pc = 0x21bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21bf88: 0xe624001c
    ctx->pc = 0x21bf88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x21bf8c: 0xc645002c
    ctx->pc = 0x21bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21bf90: 0xe6250020
    ctx->pc = 0x21bf90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x21bf94: 0xc6400030
    ctx->pc = 0x21bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bf98: 0xe6200024
    ctx->pc = 0x21bf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x21bf9c: 0xc6410034
    ctx->pc = 0x21bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21bfa0: 0xe6210028
    ctx->pc = 0x21bfa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x21bfa4: 0xc6420038
    ctx->pc = 0x21bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21bfa8: 0xe622002c
    ctx->pc = 0x21bfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x21bfac: 0x46030001
    ctx->pc = 0x21bfacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x21bfb0: 0xe6200030
    ctx->pc = 0x21bfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x21bfb4: 0x46040841
    ctx->pc = 0x21bfb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x21bfb8: 0xe6210034
    ctx->pc = 0x21bfb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x21bfbc: 0x46051081
    ctx->pc = 0x21bfbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x21bfc0: 0xe6220038
    ctx->pc = 0x21bfc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x21bfc4: 0x982d
    ctx->pc = 0x21bfc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfc8: 0x2627003c
    ctx->pc = 0x21bfc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 60));
    // 0x21bfcc: 0x26260018
    ctx->pc = 0x21bfccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 24));
    // 0x21bfd0: 0x26250030
    ctx->pc = 0x21bfd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    // 0x21bfd4: 0x3c013f00
    ctx->pc = 0x21bfd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x21bfd8: 0x44811000
    ctx->pc = 0x21bfd8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x21bfdc: 0x0
    ctx->pc = 0x21bfdcu;
    // NOP
label_21bfe0:
    // 0x21bfe0: 0x131080
    ctx->pc = 0x21bfe0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x21bfe4: 0xe22021
    ctx->pc = 0x21bfe4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21bfe8: 0xc21821
    ctx->pc = 0x21bfe8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21bfec: 0xa21021
    ctx->pc = 0x21bfecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21bff0: 0xc4400000
    ctx->pc = 0x21bff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bff4: 0x46020002
    ctx->pc = 0x21bff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21bff8: 0xc4610000
    ctx->pc = 0x21bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21bffc: 0x46010000
    ctx->pc = 0x21bffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c000: 0x26730001
    ctx->pc = 0x21c000u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x21c004: 0x2a620003
    ctx->pc = 0x21c004u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 3));
    // 0x21c008: 0x1440fff5
    ctx->pc = 0x21C008u;
    {
        const bool branch_taken_0x21c008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21C00Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x21c008) {
            ctx->pc = 0x21BFE0u;
            goto label_21bfe0;
        }
    }
    ctx->pc = 0x21C010u;
    // 0x21c010: 0xc640003c
    ctx->pc = 0x21c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c014: 0xe6200048
    ctx->pc = 0x21c014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x21c018: 0xc641003c
    ctx->pc = 0x21c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c01c: 0x44800000
    ctx->pc = 0x21c01cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21c020: 0x46000832
    ctx->pc = 0x21c020u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c024: 0x0
    ctx->pc = 0x21c024u;
    // NOP
    // 0x21c028: 0x45030007
    ctx->pc = 0x21C028u;
    {
        const bool branch_taken_0x21c028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c028) {
            ctx->pc = 0x21C02Cu;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
            ctx->pc = 0x21C048u;
            goto label_21c048;
        }
    }
    ctx->pc = 0x21C030u;
    // 0x21c030: 0x3c013f80
    ctx->pc = 0x21c030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21c034: 0x44810000
    ctx->pc = 0x21c034u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21c038: 0x0
    ctx->pc = 0x21c038u;
    // NOP
    // 0x21c03c: 0x0
    ctx->pc = 0x21c03cu;
    // NOP
    // 0x21c040: 0x46010003
    ctx->pc = 0x21c040u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x21c044: 0xe620004c
    ctx->pc = 0x21c044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_21c048:
    // 0x21c048: 0x8e420040
    ctx->pc = 0x21c048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x21c04c: 0xae220050
    ctx->pc = 0x21c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x21c050: 0x8e420044
    ctx->pc = 0x21c050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x21c054: 0xae220054
    ctx->pc = 0x21c054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x21c058: 0x24020001
    ctx->pc = 0x21c058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c05c: 0xc087d48
    ctx->pc = 0x21C05Cu;
    SET_GPR_U32(ctx, 31, 0x21C064u);
    ctx->pc = 0x21C060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    ctx->pc = 0x21F520u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitDynobjGrid_0x21f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C064u; }
    }
    if (ctx->pc != 0x21C064u) { return; }
    ctx->pc = 0x21C064u;
    // 0x21c064: 0xc0b4f52
    ctx->pc = 0x21C064u;
    SET_GPR_U32(ctx, 31, 0x21C06Cu);
    ctx->pc = 0x21C068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C06Cu; }
    }
    if (ctx->pc != 0x21C06Cu) { return; }
    ctx->pc = 0x21C06Cu;
    // 0x21c06c: 0xae22005c
    ctx->pc = 0x21c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x21c070: 0x8e420008
    ctx->pc = 0x21c070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21c074: 0x1840000a
    ctx->pc = 0x21C074u;
    {
        const bool branch_taken_0x21c074 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21C078u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c074) {
            ctx->pc = 0x21C0A0u;
            goto label_21c0a0;
        }
    }
    ctx->pc = 0x21C07Cu;
    // 0x21c07c: 0x0
    ctx->pc = 0x21c07cu;
    // NOP
label_21c080:
    // 0x21c080: 0x8e22005c
    ctx->pc = 0x21c080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x21c084: 0x531021
    ctx->pc = 0x21c084u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21c088: 0xa0400000
    ctx->pc = 0x21c088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21c08c: 0x26730001
    ctx->pc = 0x21c08cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x21c090: 0x8e420008
    ctx->pc = 0x21c090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21c094: 0x262102a
    ctx->pc = 0x21c094u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x21c098: 0x1440fff9
    ctx->pc = 0x21C098u;
    {
        const bool branch_taken_0x21c098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c098) {
            ctx->pc = 0x21C080u;
            goto label_21c080;
        }
    }
    ctx->pc = 0x21C0A0u;
label_21c0a0:
    // 0x21c0a0: 0x8e420060
    ctx->pc = 0x21c0a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x21c0a4: 0x3c04f00b
    ctx->pc = 0x21c0a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61451 << 16));
    // 0x21c0a8: 0x3484ab00
    ctx->pc = 0x21c0a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 43776));
    // 0x21c0ac: 0x441824
    ctx->pc = 0x21c0acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c0b0: 0x304200ff
    ctx->pc = 0x21c0b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x21c0b4: 0x641826
    ctx->pc = 0x21c0b4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c0b8: 0xa82d
    ctx->pc = 0x21c0b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0bc: 0x43a80a
    ctx->pc = 0x21c0bcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 2));
    // 0x21c0c0: 0x5aa00053
    ctx->pc = 0x21C0C0u;
    {
        const bool branch_taken_0x21c0c0 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x21c0c0) {
            ctx->pc = 0x21C0C4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
            ctx->pc = 0x21C210u;
            goto label_21c210;
        }
    }
    ctx->pc = 0x21C0C8u;
    // 0x21c0c8: 0x8e430064
    ctx->pc = 0x21c0c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x21c0cc: 0x1060004f
    ctx->pc = 0x21C0CCu;
    {
        const bool branch_taken_0x21c0cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C0D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21c0cc) {
            ctx->pc = 0x21C20Cu;
            goto label_21c20c;
        }
    }
    ctx->pc = 0x21C0D4u;
    // 0x21c0d4: 0x8c42f9f8
    ctx->pc = 0x21c0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965752)));
    // 0x21c0d8: 0x54400006
    ctx->pc = 0x21C0D8u;
    {
        const bool branch_taken_0x21c0d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c0d8) {
            ctx->pc = 0x21C0DCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 108)));
            ctx->pc = 0x21C0F4u;
            goto label_21c0f4;
        }
    }
    ctx->pc = 0x21C0E0u;
    // 0x21c0e0: 0x2832021
    ctx->pc = 0x21c0e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x21c0e4: 0xc0841cc
    ctx->pc = 0x21C0E4u;
    SET_GPR_U32(ctx, 31, 0x21C0ECu);
    ctx->pc = 0x21C0E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAnimHeader_0x210730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C0ECu; }
    }
    if (ctx->pc != 0x21C0ECu) { return; }
    ctx->pc = 0x21C0ECu;
    // 0x21c0ec: 0xae220094
    ctx->pc = 0x21c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x21c0f0: 0x8e42006c
    ctx->pc = 0x21c0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_21c0f4:
    // 0x21c0f4: 0x2821021
    ctx->pc = 0x21c0f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21c0f8: 0xae22008c
    ctx->pc = 0x21c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x21c0fc: 0x8e420068
    ctx->pc = 0x21c0fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x21c100: 0xae220090
    ctx->pc = 0x21c100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x21c104: 0x8e420068
    ctx->pc = 0x21c104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x21c108: 0x240400a0
    ctx->pc = 0x21c108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 160));
    // 0x21c10c: 0xc0b4f52
    ctx->pc = 0x21C10Cu;
    SET_GPR_U32(ctx, 31, 0x21C114u);
    ctx->pc = 0x21C110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C114u; }
    }
    if (ctx->pc != 0x21C114u) { return; }
    ctx->pc = 0x21C114u;
    // 0x21c114: 0xae220098
    ctx->pc = 0x21c114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x21c118: 0x8e220090
    ctx->pc = 0x21c118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x21c11c: 0x1840003f
    ctx->pc = 0x21C11Cu;
    {
        const bool branch_taken_0x21c11c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21C120u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c11c) {
            ctx->pc = 0x21C21Cu;
            goto label_21c21c;
        }
    }
    ctx->pc = 0x21C124u;
    // 0x21c124: 0x241e00a0
    ctx->pc = 0x21c124u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 160));
    // 0x21c128: 0x24170101
    ctx->pc = 0x21c128u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 257));
    // 0x21c12c: 0x3c020032
    ctx->pc = 0x21c12cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c130: 0x2456f9f8
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21c134: 0x8e22008c
    ctx->pc = 0x21c134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_21c138:
    // 0x21c138: 0x132900
    ctx->pc = 0x21c138u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 4));
    // 0x21c13c: 0xa21821
    ctx->pc = 0x21c13cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21c140: 0x8c64000c
    ctx->pc = 0x21c140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21c144: 0x58800023
    ctx->pc = 0x21C144u;
    {
        const bool branch_taken_0x21c144 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x21c144) {
            ctx->pc = 0x21C148u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 140)));
            ctx->pc = 0x21C1D4u;
            goto label_21c1d4;
        }
    }
    ctx->pc = 0x21C14Cu;
    // 0x21c14c: 0x94620004
    ctx->pc = 0x21c14cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21c150: 0x30428000
    ctx->pc = 0x21c150u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x21c154: 0x54400009
    ctx->pc = 0x21C154u;
    {
        const bool branch_taken_0x21c154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c154) {
            ctx->pc = 0x21C158u;
            { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x21C17Cu;
            goto label_21c17c;
        }
    }
    ctx->pc = 0x21C15Cu;
    // 0x21c15c: 0x2841021
    ctx->pc = 0x21c15cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x21c160: 0xac62000c
    ctx->pc = 0x21c160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x21c164: 0x8e23008c
    ctx->pc = 0x21c164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x21c168: 0xa31821
    ctx->pc = 0x21c168u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21c16c: 0x94620004
    ctx->pc = 0x21c16cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21c170: 0x34428000
    ctx->pc = 0x21c170u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x21c174: 0xa4620004
    ctx->pc = 0x21c174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x21c178: 0x27e1818
    ctx->pc = 0x21c178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_21c17c:
    // 0x21c17c: 0x8e240098
    ctx->pc = 0x21c17cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x21c180: 0x8e22008c
    ctx->pc = 0x21c180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x21c184: 0x138100
    ctx->pc = 0x21c184u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 4));
    // 0x21c188: 0x2021021
    ctx->pc = 0x21c188u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21c18c: 0x642021
    ctx->pc = 0x21c18cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c190: 0xc083e9e
    ctx->pc = 0x21C190u;
    SET_GPR_U32(ctx, 31, 0x21C198u);
    ctx->pc = 0x21C194u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x20FA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAnimData_0x20fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C198u; }
    }
    if (ctx->pc != 0x21C198u) { return; }
    ctx->pc = 0x21C198u;
    // 0x21c198: 0x8e22008c
    ctx->pc = 0x21c198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x21c19c: 0x2021021
    ctx->pc = 0x21c19cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21c1a0: 0xa4570006
    ctx->pc = 0x21c1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 23));
    // 0x21c1a4: 0x8e22008c
    ctx->pc = 0x21c1a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x21c1a8: 0x2028021
    ctx->pc = 0x21c1a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21c1ac: 0x86040000
    ctx->pc = 0x21c1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c1b0: 0x8e230004
    ctx->pc = 0x21c1b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21c1b4: 0x2402003c
    ctx->pc = 0x21c1b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21c1b8: 0x822018
    ctx->pc = 0x21c1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21c1bc: 0x832021
    ctx->pc = 0x21c1bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21c1c0: 0x8c820010
    ctx->pc = 0x21c1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21c1c4: 0x3c030200
    ctx->pc = 0x21c1c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x21c1c8: 0x431025
    ctx->pc = 0x21c1c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c1cc: 0x10000008
    ctx->pc = 0x21C1CCu;
    {
        const bool branch_taken_0x21c1cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C1D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x21c1cc) {
            ctx->pc = 0x21C1F0u;
            goto label_21c1f0;
        }
    }
    ctx->pc = 0x21C1D4u;
label_21c1d4:
    // 0x21c1d4: 0x131900
    ctx->pc = 0x21c1d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 4));
    // 0x21c1d8: 0x621821
    ctx->pc = 0x21c1d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c1dc: 0xac60000c
    ctx->pc = 0x21c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x21c1e0: 0x3c04003a
    ctx->pc = 0x21c1e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21c1e4: 0x248463f8
    ctx->pc = 0x21c1e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25592));
    // 0x21c1e8: 0xc0b492e
    ctx->pc = 0x21C1E8u;
    SET_GPR_U32(ctx, 31, 0x21C1F0u);
    ctx->pc = 0x21C1ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1F0u; }
    }
    if (ctx->pc != 0x21C1F0u) { return; }
    ctx->pc = 0x21C1F0u;
label_21c1f0:
    // 0x21c1f0: 0x26730001
    ctx->pc = 0x21c1f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x21c1f4: 0x8e220090
    ctx->pc = 0x21c1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x21c1f8: 0x262102a
    ctx->pc = 0x21c1f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x21c1fc: 0x5440ffce
    ctx->pc = 0x21C1FCu;
    {
        const bool branch_taken_0x21c1fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c1fc) {
            ctx->pc = 0x21C200u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
            ctx->pc = 0x21C138u;
            goto label_21c138;
        }
    }
    ctx->pc = 0x21C204u;
    // 0x21c204: 0x10000006
    ctx->pc = 0x21C204u;
    {
        const bool branch_taken_0x21c204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C208u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 2));
        if (branch_taken_0x21c204) {
            ctx->pc = 0x21C220u;
            goto label_21c220;
        }
    }
    ctx->pc = 0x21C20Cu;
label_21c20c:
    // 0x21c20c: 0xae200094
    ctx->pc = 0x21c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_21c210:
    // 0x21c210: 0xae20008c
    ctx->pc = 0x21c210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x21c214: 0xae200090
    ctx->pc = 0x21c214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x21c218: 0xae200098
    ctx->pc = 0x21c218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_21c21c:
    // 0x21c21c: 0x2aa20002
    ctx->pc = 0x21c21cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 2));
label_21c220:
    // 0x21c220: 0x54400009
    ctx->pc = 0x21C220u;
    {
        const bool branch_taken_0x21c220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c220) {
            ctx->pc = 0x21C224u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
            ctx->pc = 0x21C248u;
            goto label_21c248;
        }
    }
    ctx->pc = 0x21C228u;
    // 0x21c228: 0x8e420074
    ctx->pc = 0x21c228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x21c22c: 0x18400005
    ctx->pc = 0x21C22Cu;
    {
        const bool branch_taken_0x21c22c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21C230u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        if (branch_taken_0x21c22c) {
            ctx->pc = 0x21C244u;
            goto label_21c244;
        }
    }
    ctx->pc = 0x21C234u;
    // 0x21c234: 0xae22009c
    ctx->pc = 0x21c234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x21c238: 0x8e420070
    ctx->pc = 0x21c238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x21c23c: 0x10000003
    ctx->pc = 0x21C23Cu;
    {
        const bool branch_taken_0x21c23c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C240u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        if (branch_taken_0x21c23c) {
            ctx->pc = 0x21C24Cu;
            goto label_21c24c;
        }
    }
    ctx->pc = 0x21C244u;
label_21c244:
    // 0x21c244: 0xae20009c
    ctx->pc = 0x21c244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_21c248:
    // 0x21c248: 0xae2000a0
    ctx->pc = 0x21c248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_21c24c:
    // 0x21c24c: 0x24020001
    ctx->pc = 0x21c24cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c250: 0xae220000
    ctx->pc = 0x21c250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x21c254: 0x3c02003a
    ctx->pc = 0x21c254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21c258: 0x8c45230c
    ctx->pc = 0x21c258u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x21c25c: 0x8fa20000
    ctx->pc = 0x21c25cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c260: 0xa22823
    ctx->pc = 0x21c260u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21c264: 0x3c04003a
    ctx->pc = 0x21c264u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21c268: 0x24846418
    ctx->pc = 0x21c268u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25624));
    // 0x21c26c: 0xc0b4a34
    ctx->pc = 0x21C26Cu;
    SET_GPR_U32(ctx, 31, 0x21C274u);
    ctx->pc = 0x21C270u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 10));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C274u; }
    }
    if (ctx->pc != 0x21C274u) { return; }
    ctx->pc = 0x21C274u;
    // 0x21c274: 0x8e220004
    ctx->pc = 0x21c274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21c278: 0xdfbf00a0
    ctx->pc = 0x21c278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21c27c: 0xdfbe0090
    ctx->pc = 0x21c27cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21c280: 0xdfb70080
    ctx->pc = 0x21c280u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21c284: 0xdfb60070
    ctx->pc = 0x21c284u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c288: 0xdfb50060
    ctx->pc = 0x21c288u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c28c: 0xdfb40050
    ctx->pc = 0x21c28cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c290: 0xdfb30040
    ctx->pc = 0x21c290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c294: 0xdfb20030
    ctx->pc = 0x21c294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c298: 0xdfb10020
    ctx->pc = 0x21c298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c29c: 0xdfb00010
    ctx->pc = 0x21c29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c2a0: 0x3e00008
    ctx->pc = 0x21C2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C2A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BFE0u: goto label_21bfe0;
            case 0x21C048u: goto label_21c048;
            case 0x21C080u: goto label_21c080;
            case 0x21C0A0u: goto label_21c0a0;
            case 0x21C0F4u: goto label_21c0f4;
            case 0x21C138u: goto label_21c138;
            case 0x21C17Cu: goto label_21c17c;
            case 0x21C1D4u: goto label_21c1d4;
            case 0x21C1F0u: goto label_21c1f0;
            case 0x21C20Cu: goto label_21c20c;
            case 0x21C210u: goto label_21c210;
            case 0x21C21Cu: goto label_21c21c;
            case 0x21C220u: goto label_21c220;
            case 0x21C244u: goto label_21c244;
            case 0x21C248u: goto label_21c248;
            case 0x21C24Cu: goto label_21c24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C2A8u;
}
