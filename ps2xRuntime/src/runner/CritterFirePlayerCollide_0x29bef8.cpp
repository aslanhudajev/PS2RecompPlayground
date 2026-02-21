#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterFirePlayerCollide
// Address: 0x29bef8 - 0x29c194
void CritterFirePlayerCollide_0x29bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29bef8u;

    // 0x29bef8: 0x27bdff10
    ctx->pc = 0x29bef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29befc: 0xffbf00c0
    ctx->pc = 0x29befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29bf00: 0xffb600b0
    ctx->pc = 0x29bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x29bf04: 0xffb500a0
    ctx->pc = 0x29bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x29bf08: 0xffb40090
    ctx->pc = 0x29bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x29bf0c: 0xffb30080
    ctx->pc = 0x29bf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x29bf10: 0xffb20070
    ctx->pc = 0x29bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x29bf14: 0xffb10060
    ctx->pc = 0x29bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x29bf18: 0xffb00050
    ctx->pc = 0x29bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x29bf1c: 0xe7b600e0
    ctx->pc = 0x29bf1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x29bf20: 0xe7b500d8
    ctx->pc = 0x29bf20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x29bf24: 0xe7b400d0
    ctx->pc = 0x29bf24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29bf28: 0x80902d
    ctx->pc = 0x29bf28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf2c: 0xa0982d
    ctx->pc = 0x29bf2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf30: 0xc674000c
    ctx->pc = 0x29bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29bf34: 0xc6750008
    ctx->pc = 0x29bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29bf38: 0xc6760010
    ctx->pc = 0x29bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29bf3c: 0xc6400400
    ctx->pc = 0x29bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf40: 0xe7a00020
    ctx->pc = 0x29bf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29bf44: 0xc6400404
    ctx->pc = 0x29bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf48: 0xe7a00024
    ctx->pc = 0x29bf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29bf4c: 0xc6400408
    ctx->pc = 0x29bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf50: 0xe7a00028
    ctx->pc = 0x29bf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29bf54: 0x27b00020
    ctx->pc = 0x29bf54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29bf58: 0xc0b58a4
    ctx->pc = 0x29BF58u;
    SET_GPR_U32(ctx, 31, 0x29BF60u);
    ctx->pc = 0x29BF5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BF60u; }
    }
    if (ctx->pc != 0x29BF60u) { return; }
    ctx->pc = 0x29BF60u;
    // 0x29bf60: 0x200202d
    ctx->pc = 0x29bf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf64: 0x200282d
    ctx->pc = 0x29bf64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf68: 0xc0b57e6
    ctx->pc = 0x29BF68u;
    SET_GPR_U32(ctx, 31, 0x29BF70u);
    ctx->pc = 0x29BF6Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BF70u; }
    }
    if (ctx->pc != 0x29BF70u) { return; }
    ctx->pc = 0x29BF70u;
    // 0x29bf70: 0x200202d
    ctx->pc = 0x29bf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf74: 0x200282d
    ctx->pc = 0x29bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf78: 0xc0b580a
    ctx->pc = 0x29BF78u;
    SET_GPR_U32(ctx, 31, 0x29BF80u);
    ctx->pc = 0x29BF7Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6028u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchVec3_0x2d6028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BF80u; }
    }
    if (ctx->pc != 0x29BF80u) { return; }
    ctx->pc = 0x29BF80u;
    // 0x29bf80: 0x26640020
    ctx->pc = 0x29bf80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 32));
    // 0x29bf84: 0x27a50030
    ctx->pc = 0x29bf84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x29bf88: 0xc0b585c
    ctx->pc = 0x29BF88u;
    SET_GPR_U32(ctx, 31, 0x29BF90u);
    ctx->pc = 0x29BF8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 992));
    ctx->pc = 0x2D6170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat3_0x2d6170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BF90u; }
    }
    if (ctx->pc != 0x29BF90u) { return; }
    ctx->pc = 0x29BF90u;
    // 0x29bf90: 0xc6410410
    ctx->pc = 0x29bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bf94: 0xc7a00030
    ctx->pc = 0x29bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf98: 0x46000840
    ctx->pc = 0x29bf98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29bf9c: 0xe7a10000
    ctx->pc = 0x29bf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29bfa0: 0xc6420414
    ctx->pc = 0x29bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bfa4: 0xc7a00034
    ctx->pc = 0x29bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfa8: 0x46001080
    ctx->pc = 0x29bfa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29bfac: 0xe7a20004
    ctx->pc = 0x29bfacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29bfb0: 0xc6430418
    ctx->pc = 0x29bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29bfb4: 0xc7a00038
    ctx->pc = 0x29bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfb8: 0x460018c0
    ctx->pc = 0x29bfb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29bfbc: 0xe7a30008
    ctx->pc = 0x29bfbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29bfc0: 0xc7a00020
    ctx->pc = 0x29bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfc4: 0x4600a002
    ctx->pc = 0x29bfc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29bfc8: 0x46010000
    ctx->pc = 0x29bfc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29bfcc: 0xe7a00010
    ctx->pc = 0x29bfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29bfd0: 0xc7a00024
    ctx->pc = 0x29bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfd4: 0x4600a002
    ctx->pc = 0x29bfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29bfd8: 0x46020000
    ctx->pc = 0x29bfd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29bfdc: 0xe7a00014
    ctx->pc = 0x29bfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29bfe0: 0xc7a00028
    ctx->pc = 0x29bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bfe4: 0x4600a002
    ctx->pc = 0x29bfe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x29bfe8: 0x46030000
    ctx->pc = 0x29bfe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29bfec: 0xe7a00018
    ctx->pc = 0x29bfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29bff0: 0xa02d
    ctx->pc = 0x29bff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bff4: 0x3c020032
    ctx->pc = 0x29bff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29bff8: 0x24561bc0
    ctx->pc = 0x29bff8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29bffc: 0x27b50020
    ctx->pc = 0x29bffcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c000: 0x24022b00
    ctx->pc = 0x29c000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29c004: 0x0
    ctx->pc = 0x29c004u;
    // NOP
label_29c008:
    // 0x29c008: 0x2821818
    ctx->pc = 0x29c008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29c00c: 0x768821
    ctx->pc = 0x29c00cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x29c010: 0x8e2300fc
    ctx->pc = 0x29c010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x29c014: 0x24020001
    ctx->pc = 0x29c014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c018: 0x5462004e
    ctx->pc = 0x29C018u;
    {
        const bool branch_taken_0x29c018 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x29c018) {
            ctx->pc = 0x29C01Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x29C154u;
            goto label_29c154;
        }
    }
    ctx->pc = 0x29C020u;
    // 0x29c020: 0x3c020031
    ctx->pc = 0x29c020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29c024: 0xc441ffa4
    ctx->pc = 0x29c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c028: 0xc62008c0
    ctx->pc = 0x29c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c02c: 0x46000834
    ctx->pc = 0x29c02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c030: 0x0
    ctx->pc = 0x29c030u;
    // NOP
    // 0x29c034: 0x45030047
    ctx->pc = 0x29C034u;
    {
        const bool branch_taken_0x29c034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c034) {
            ctx->pc = 0x29C038u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x29C154u;
            goto label_29c154;
        }
    }
    ctx->pc = 0x29C03Cu;
    // 0x29c03c: 0xc62c0070
    ctx->pc = 0x29c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29c040: 0xe7ac0040
    ctx->pc = 0x29c040u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29c044: 0xc6210074
    ctx->pc = 0x29c044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c048: 0xe7a10044
    ctx->pc = 0x29c048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29c04c: 0xc62d0078
    ctx->pc = 0x29c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29c050: 0xe7ad0048
    ctx->pc = 0x29c050u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29c054: 0xc7a00000
    ctx->pc = 0x29c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c058: 0x46006301
    ctx->pc = 0x29c058u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x29c05c: 0xe7ac0020
    ctx->pc = 0x29c05cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29c060: 0xc7a00004
    ctx->pc = 0x29c060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c064: 0x46000841
    ctx->pc = 0x29c064u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c068: 0xe7a10024
    ctx->pc = 0x29c068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29c06c: 0xc7a00008
    ctx->pc = 0x29c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c070: 0x46006b41
    ctx->pc = 0x29c070u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x29c074: 0xc0b5c34
    ctx->pc = 0x29C074u;
    SET_GPR_U32(ctx, 31, 0x29C07Cu);
    ctx->pc = 0x29C078u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C07Cu; }
    }
    if (ctx->pc != 0x29C07Cu) { return; }
    ctx->pc = 0x29C07Cu;
    // 0x29c07c: 0x46160034
    ctx->pc = 0x29c07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c080: 0x0
    ctx->pc = 0x29c080u;
    // NOP
    // 0x29c084: 0x45030033
    ctx->pc = 0x29C084u;
    {
        const bool branch_taken_0x29c084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c084) {
            ctx->pc = 0x29C088u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x29C154u;
            goto label_29c154;
        }
    }
    ctx->pc = 0x29C08Cu;
    // 0x29c08c: 0x4600a034
    ctx->pc = 0x29c08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c090: 0x0
    ctx->pc = 0x29c090u;
    // NOP
    // 0x29c094: 0x4503002f
    ctx->pc = 0x29C094u;
    {
        const bool branch_taken_0x29c094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c094) {
            ctx->pc = 0x29C098u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x29C154u;
            goto label_29c154;
        }
    }
    ctx->pc = 0x29C09Cu;
    // 0x29c09c: 0x27b00040
    ctx->pc = 0x29c09cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x29c0a0: 0xc62c0828
    ctx->pc = 0x29c0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29c0a4: 0xc62d082c
    ctx->pc = 0x29c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29c0a8: 0x200202d
    ctx->pc = 0x29c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0ac: 0x3a0282d
    ctx->pc = 0x29c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0b0: 0x27a60010
    ctx->pc = 0x29c0b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x29c0b4: 0x27a70030
    ctx->pc = 0x29c0b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x29c0b8: 0x460cab00
    ctx->pc = 0x29c0b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    // 0x29c0bc: 0x460dab40
    ctx->pc = 0x29c0bcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
    // 0x29c0c0: 0xc0a4202
    ctx->pc = 0x29C0C0u;
    SET_GPR_U32(ctx, 31, 0x29C0C8u);
    ctx->pc = 0x29C0C4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0C8u; }
    }
    if (ctx->pc != 0x29C0C8u) { return; }
    ctx->pc = 0x29C0C8u;
    // 0x29c0c8: 0x10400021
    ctx->pc = 0x29C0C8u;
    {
        const bool branch_taken_0x29c0c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C0CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c0c8) {
            ctx->pc = 0x29C150u;
            goto label_29c150;
        }
    }
    ctx->pc = 0x29C0D0u;
    // 0x29c0d0: 0x200282d
    ctx->pc = 0x29c0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0d4: 0x200302d
    ctx->pc = 0x29c0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0d8: 0x3c013f00
    ctx->pc = 0x29c0d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29c0dc: 0x44816000
    ctx->pc = 0x29c0dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29c0e0: 0xc095dcc
    ctx->pc = 0x29C0E0u;
    SET_GPR_U32(ctx, 31, 0x29C0E8u);
    ctx->pc = 0x29C0E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x257730u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemLineCollide_0x257730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0E8u; }
    }
    if (ctx->pc != 0x29C0E8u) { return; }
    ctx->pc = 0x29C0E8u;
    // 0x29c0e8: 0x443001a
    ctx->pc = 0x29C0E8u;
    {
        const bool branch_taken_0x29c0e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29c0e8) {
            ctx->pc = 0x29C0ECu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x29C154u;
            goto label_29c154;
        }
    }
    ctx->pc = 0x29C0F0u;
    // 0x29c0f0: 0xc7a00010
    ctx->pc = 0x29c0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c0f4: 0xc7a10000
    ctx->pc = 0x29c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c0f8: 0x46010001
    ctx->pc = 0x29c0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c0fc: 0xe7a00020
    ctx->pc = 0x29c0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29c100: 0xc7a00014
    ctx->pc = 0x29c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c104: 0xc7a10004
    ctx->pc = 0x29c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c108: 0x46010001
    ctx->pc = 0x29c108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c10c: 0xe7a00024
    ctx->pc = 0x29c10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29c110: 0xc7a00018
    ctx->pc = 0x29c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c114: 0xc7a10008
    ctx->pc = 0x29c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c118: 0x46010001
    ctx->pc = 0x29c118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c11c: 0xe7a00028
    ctx->pc = 0x29c11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29c120: 0xc0b58fc
    ctx->pc = 0x29C120u;
    SET_GPR_U32(ctx, 31, 0x29C128u);
    ctx->pc = 0x29C124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C128u; }
    }
    if (ctx->pc != 0x29C128u) { return; }
    ctx->pc = 0x29C128u;
    // 0x29c128: 0x220202d
    ctx->pc = 0x29c128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c12c: 0x240282d
    ctx->pc = 0x29c12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c130: 0x260302d
    ctx->pc = 0x29c130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c134: 0x382d
    ctx->pc = 0x29c134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c138: 0x2a0402d
    ctx->pc = 0x29c138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c13c: 0x3c013dcc
    ctx->pc = 0x29c13cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29c140: 0x3421cccd
    ctx->pc = 0x29c140u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29c144: 0x44816000
    ctx->pc = 0x29c144u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29c148: 0xc0a6e9c
    ctx->pc = 0x29C148u;
    SET_GPR_U32(ctx, 31, 0x29C150u);
    ctx->pc = 0x29C14Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29BA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamagePlayer_0x29ba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C150u; }
    }
    if (ctx->pc != 0x29C150u) { return; }
    ctx->pc = 0x29C150u;
label_29c150:
    // 0x29c150: 0x26940001
    ctx->pc = 0x29c150u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_29c154:
    // 0x29c154: 0x2a820004
    ctx->pc = 0x29c154u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x29c158: 0x5440ffab
    ctx->pc = 0x29C158u;
    {
        const bool branch_taken_0x29c158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29c158) {
            ctx->pc = 0x29C15Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
            ctx->pc = 0x29C008u;
            goto label_29c008;
        }
    }
    ctx->pc = 0x29C160u;
    // 0x29c160: 0xdfbf00c0
    ctx->pc = 0x29c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29c164: 0xdfb600b0
    ctx->pc = 0x29c164u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29c168: 0xdfb500a0
    ctx->pc = 0x29c168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29c16c: 0xdfb40090
    ctx->pc = 0x29c16cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29c170: 0xdfb30080
    ctx->pc = 0x29c170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29c174: 0xdfb20070
    ctx->pc = 0x29c174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29c178: 0xdfb10060
    ctx->pc = 0x29c178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c17c: 0xdfb00050
    ctx->pc = 0x29c17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c180: 0xc7b600e0
    ctx->pc = 0x29c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29c184: 0xc7b500d8
    ctx->pc = 0x29c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29c188: 0xc7b400d0
    ctx->pc = 0x29c188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c18c: 0x3e00008
    ctx->pc = 0x29C18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C008u: goto label_29c008;
            case 0x29C150u: goto label_29c150;
            case 0x29C154u: goto label_29c154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C194u;
}
