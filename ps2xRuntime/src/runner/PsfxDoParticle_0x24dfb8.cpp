#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PsfxDoParticle
// Address: 0x24dfb8 - 0x24e240
void PsfxDoParticle_0x24dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24dfb8u;

    // 0x24dfb8: 0x27bdffa0
    ctx->pc = 0x24dfb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24dfbc: 0xffbf0030
    ctx->pc = 0x24dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24dfc0: 0xffb20020
    ctx->pc = 0x24dfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24dfc4: 0xffb10010
    ctx->pc = 0x24dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24dfc8: 0xffb00000
    ctx->pc = 0x24dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24dfcc: 0xe7b70058
    ctx->pc = 0x24dfccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x24dfd0: 0xe7b60050
    ctx->pc = 0x24dfd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24dfd4: 0xe7b50048
    ctx->pc = 0x24dfd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24dfd8: 0xe7b40040
    ctx->pc = 0x24dfd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24dfdc: 0xa0882d
    ctx->pc = 0x24dfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfe0: 0x8e230000
    ctx->pc = 0x24dfe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24dfe4: 0x3c020f00
    ctx->pc = 0x24dfe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3840 << 16));
    // 0x24dfe8: 0x623824
    ctx->pc = 0x24dfe8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24dfec: 0x8e320008
    ctx->pc = 0x24dfecu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24dff0: 0x8e25000c
    ctx->pc = 0x24dff0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24dff4: 0xc6210044
    ctx->pc = 0x24dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dff8: 0x3c0141f0
    ctx->pc = 0x24dff8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x24dffc: 0x44810000
    ctx->pc = 0x24dffcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24e000: 0x46000d02
    ctx->pc = 0x24e000u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24e004: 0x86220032
    ctx->pc = 0x24e004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x24e008: 0x4482b000
    ctx->pc = 0x24e008u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 2);
    // 0x24e00c: 0x4680b5a0
    ctx->pc = 0x24e00cu;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x24e010: 0x3c013c23
    ctx->pc = 0x24e010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x24e014: 0x3421d70a
    ctx->pc = 0x24e014u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x24e018: 0x44810000
    ctx->pc = 0x24e018u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24e01c: 0x4600b582
    ctx->pc = 0x24e01cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x24e020: 0xc6370040
    ctx->pc = 0x24e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24e024: 0x3c020004
    ctx->pc = 0x24e024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x24e028: 0x621824
    ctx->pc = 0x24e028u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e02c: 0x10600009
    ctx->pc = 0x24E02Cu;
    {
        const bool branch_taken_0x24e02c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E030u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        if (branch_taken_0x24e02c) {
            ctx->pc = 0x24E054u;
            goto label_24e054;
        }
    }
    ctx->pc = 0x24E034u;
    // 0x24e034: 0x4c00007
    ctx->pc = 0x24E034u;
    {
        const bool branch_taken_0x24e034 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x24E038u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x24e034) {
            ctx->pc = 0x24E054u;
            goto label_24e054;
        }
    }
    ctx->pc = 0x24E03Cu;
    // 0x24e03c: 0x24630eb0
    ctx->pc = 0x24e03cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x24e040: 0x240200f0
    ctx->pc = 0x24e040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x24e044: 0xc21018
    ctx->pc = 0x24e044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24e048: 0x431021
    ctx->pc = 0x24e048u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e04c: 0x1000000d
    ctx->pc = 0x24E04Cu;
    {
        const bool branch_taken_0x24e04c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E050u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        if (branch_taken_0x24e04c) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E054u;
label_24e054:
    // 0x24e054: 0x8e220000
    ctx->pc = 0x24e054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24e058: 0x30422000
    ctx->pc = 0x24e058u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x24e05c: 0x10400006
    ctx->pc = 0x24E05Cu;
    {
        const bool branch_taken_0x24e05c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E060u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24e05c) {
            ctx->pc = 0x24E078u;
            goto label_24e078;
        }
    }
    ctx->pc = 0x24E064u;
    // 0x24e064: 0x8c421eb8
    ctx->pc = 0x24e064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7864)));
    // 0x24e068: 0x50400004
    ctx->pc = 0x24E068u;
    {
        const bool branch_taken_0x24e068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24e068) {
            ctx->pc = 0x24E06Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x24E07Cu;
            goto label_24e07c;
        }
    }
    ctx->pc = 0x24E070u;
    // 0x24e070: 0x10000004
    ctx->pc = 0x24E070u;
    {
        const bool branch_taken_0x24e070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E074u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 128)));
        if (branch_taken_0x24e070) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E078u;
label_24e078:
    // 0x24e078: 0x2402ffff
    ctx->pc = 0x24e078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_24e07c:
    // 0x24e07c: 0x50a20001
    ctx->pc = 0x24E07Cu;
    {
        const bool branch_taken_0x24e07c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x24e07c) {
            ctx->pc = 0x24E080u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 128)));
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E084u;
label_24e084:
    // 0x24e084: 0x3c020100
    ctx->pc = 0x24e084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x24e088: 0x10e20027
    ctx->pc = 0x24E088u;
    {
        const bool branch_taken_0x24e088 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x24E08Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
        if (branch_taken_0x24e088) {
            ctx->pc = 0x24E128u;
            goto label_24e128;
        }
    }
    ctx->pc = 0x24E090u;
    // 0x24e090: 0x14e20026
    ctx->pc = 0x24E090u;
    {
        const bool branch_taken_0x24e090 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x24E094u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x24e090) {
            ctx->pc = 0x24E12Cu;
            goto label_24e12c;
        }
    }
    ctx->pc = 0x24E098u;
    // 0x24e098: 0x24842550
    ctx->pc = 0x24e098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x24e09c: 0x302d
    ctx->pc = 0x24e09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0a0: 0xc0b27fe
    ctx->pc = 0x24E0A0u;
    SET_GPR_U32(ctx, 31, 0x24E0A8u);
    ctx->pc = 0x24E0A4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C9FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPsysDefault_0x2c9ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0A8u; }
    }
    if (ctx->pc != 0x24E0A8u) { return; }
    ctx->pc = 0x24E0A8u;
    // 0x24e0a8: 0x40802d
    ctx->pc = 0x24e0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0ac: 0x12000045
    ctx->pc = 0x24E0ACu;
    {
        const bool branch_taken_0x24e0ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E0B0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x24e0ac) {
            ctx->pc = 0x24E1C4u;
            goto label_24e1c4;
        }
    }
    ctx->pc = 0x24E0B4u;
    // 0x24e0b4: 0x3c013e4c
    ctx->pc = 0x24e0b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x24e0b8: 0x3421cccd
    ctx->pc = 0x24e0b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x24e0bc: 0x44816000
    ctx->pc = 0x24e0bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24e0c0: 0x44806800
    ctx->pc = 0x24e0c0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x24e0c4: 0xc0b25f6
    ctx->pc = 0x24E0C4u;
    SET_GPR_U32(ctx, 31, 0x24E0CCu);
    ctx->pc = 0x24E0C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C97D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTime_0x2c97d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0CCu; }
    }
    if (ctx->pc != 0x24E0CCu) { return; }
    ctx->pc = 0x24E0CCu;
    // 0x24e0cc: 0x3c013f80
    ctx->pc = 0x24e0ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x24e0d0: 0x44810000
    ctx->pc = 0x24e0d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24e0d4: 0x4600a832
    ctx->pc = 0x24e0d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e0d8: 0x0
    ctx->pc = 0x24e0d8u;
    // NOP
    // 0x24e0dc: 0x45010005
    ctx->pc = 0x24E0DCu;
    {
        const bool branch_taken_0x24e0dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E0E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e0dc) {
            ctx->pc = 0x24E0F4u;
            goto label_24e0f4;
        }
    }
    ctx->pc = 0x24E0E4u;
    // 0x24e0e4: 0x24050004
    ctx->pc = 0x24e0e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x24e0e8: 0xc0b26f4
    ctx->pc = 0x24E0E8u;
    SET_GPR_U32(ctx, 31, 0x24E0F0u);
    ctx->pc = 0x24E0ECu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2C9BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysScalePParm_0x2c9bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0F0u; }
    }
    if (ctx->pc != 0x24E0F0u) { return; }
    ctx->pc = 0x24E0F0u;
    // 0x24e0f0: 0x200202d
    ctx->pc = 0x24e0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e0f4:
    // 0x24e0f4: 0x4600a306
    ctx->pc = 0x24e0f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24e0f8: 0x4600a346
    ctx->pc = 0x24e0f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x24e0fc: 0x4600a386
    ctx->pc = 0x24e0fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x24e100: 0xc0b2646
    ctx->pc = 0x24E100u;
    SET_GPR_U32(ctx, 31, 0x24E108u);
    ctx->pc = 0x24E104u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C9918u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetERate4_0x2c9918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E108u; }
    }
    if (ctx->pc != 0x24E108u) { return; }
    ctx->pc = 0x24E108u;
    // 0x24e108: 0x200202d
    ctx->pc = 0x24e108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e10c: 0x3c013d0b
    ctx->pc = 0x24e10cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15627 << 16));
    // 0x24e110: 0x34214396
    ctx->pc = 0x24e110u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 17302));
    // 0x24e114: 0x44816800
    ctx->pc = 0x24e114u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x24e118: 0xc0b25a6
    ctx->pc = 0x24E118u;
    SET_GPR_U32(ctx, 31, 0x24E120u);
    ctx->pc = 0x24E11Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2C9698u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetETime_0x2c9698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E120u; }
    }
    if (ctx->pc != 0x24E120u) { return; }
    ctx->pc = 0x24E120u;
    // 0x24e120: 0x10000025
    ctx->pc = 0x24E120u;
    {
        const bool branch_taken_0x24e120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x24e120) {
            ctx->pc = 0x24E1B8u;
            goto label_24e1b8;
        }
    }
    ctx->pc = 0x24E128u;
label_24e128:
    // 0x24e128: 0x3c04003a
    ctx->pc = 0x24e128u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_24e12c:
    // 0x24e12c: 0x24842550
    ctx->pc = 0x24e12cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x24e130: 0x302d
    ctx->pc = 0x24e130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e134: 0xc0b27fe
    ctx->pc = 0x24E134u;
    SET_GPR_U32(ctx, 31, 0x24E13Cu);
    ctx->pc = 0x24E138u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C9FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPsysDefault_0x2c9ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E13Cu; }
    }
    if (ctx->pc != 0x24E13Cu) { return; }
    ctx->pc = 0x24E13Cu;
    // 0x24e13c: 0x40802d
    ctx->pc = 0x24e13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e140: 0x3c0143b4
    ctx->pc = 0x24e140u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17332 << 16));
    // 0x24e144: 0x44816000
    ctx->pc = 0x24e144u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24e148: 0xc0b269c
    ctx->pc = 0x24E148u;
    SET_GPR_U32(ctx, 31, 0x24E150u);
    ctx->pc = 0x24E14Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetEAngle_0x2c9a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E150u; }
    }
    if (ctx->pc != 0x24E150u) { return; }
    ctx->pc = 0x24E150u;
    // 0x24e150: 0x3c013f80
    ctx->pc = 0x24e150u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x24e154: 0x44810000
    ctx->pc = 0x24e154u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24e158: 0x4600a832
    ctx->pc = 0x24e158u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e15c: 0x0
    ctx->pc = 0x24e15cu;
    // NOP
    // 0x24e160: 0x45010005
    ctx->pc = 0x24E160u;
    {
        const bool branch_taken_0x24e160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E164u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e160) {
            ctx->pc = 0x24E178u;
            goto label_24e178;
        }
    }
    ctx->pc = 0x24E168u;
    // 0x24e168: 0x24050004
    ctx->pc = 0x24e168u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x24e16c: 0xc0b26f4
    ctx->pc = 0x24E16Cu;
    SET_GPR_U32(ctx, 31, 0x24E174u);
    ctx->pc = 0x24E170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2C9BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysScalePParm_0x2c9bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E174u; }
    }
    if (ctx->pc != 0x24E174u) { return; }
    ctx->pc = 0x24E174u;
    // 0x24e174: 0x200202d
    ctx->pc = 0x24e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e178:
    // 0x24e178: 0x4600a306
    ctx->pc = 0x24e178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24e17c: 0x4600a346
    ctx->pc = 0x24e17cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x24e180: 0x4600a386
    ctx->pc = 0x24e180u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x24e184: 0xc0b2646
    ctx->pc = 0x24E184u;
    SET_GPR_U32(ctx, 31, 0x24E18Cu);
    ctx->pc = 0x24E188u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C9918u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetERate4_0x2c9918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E18Cu; }
    }
    if (ctx->pc != 0x24E18Cu) { return; }
    ctx->pc = 0x24E18Cu;
    // 0x24e18c: 0x200202d
    ctx->pc = 0x24e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e190: 0x3c013d0b
    ctx->pc = 0x24e190u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15627 << 16));
    // 0x24e194: 0x34214396
    ctx->pc = 0x24e194u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 17302));
    // 0x24e198: 0x44816800
    ctx->pc = 0x24e198u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x24e19c: 0xc0b25a6
    ctx->pc = 0x24E19Cu;
    SET_GPR_U32(ctx, 31, 0x24E1A4u);
    ctx->pc = 0x24E1A0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2C9698u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetETime_0x2c9698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E1A4u; }
    }
    if (ctx->pc != 0x24E1A4u) { return; }
    ctx->pc = 0x24E1A4u;
    // 0x24e1a4: 0x200202d
    ctx->pc = 0x24e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e1a8: 0x3c013f00
    ctx->pc = 0x24e1a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24e1ac: 0x44816000
    ctx->pc = 0x24e1acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24e1b0: 0xc0b25f6
    ctx->pc = 0x24E1B0u;
    SET_GPR_U32(ctx, 31, 0x24E1B8u);
    ctx->pc = 0x24E1B4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C97D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTime_0x2c97d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E1B8u; }
    }
    if (ctx->pc != 0x24E1B8u) { return; }
    ctx->pc = 0x24E1B8u;
label_24e1b8:
    // 0x24e1b8: 0x5600000d
    ctx->pc = 0x24E1B8u;
    {
        const bool branch_taken_0x24e1b8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x24e1b8) {
            ctx->pc = 0x24E1BCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24E1F0u;
            goto label_24e1f0;
        }
    }
    ctx->pc = 0x24E1C0u;
    // 0x24e1c0: 0x3c04003b
    ctx->pc = 0x24e1c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_24e1c4:
    // 0x24e1c4: 0x24848408
    ctx->pc = 0x24e1c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935560));
    // 0x24e1c8: 0xdfbf0030
    ctx->pc = 0x24e1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e1cc: 0xdfb20020
    ctx->pc = 0x24e1ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e1d0: 0xdfb10010
    ctx->pc = 0x24e1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e1d4: 0xdfb00000
    ctx->pc = 0x24e1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e1d8: 0xc7b70058
    ctx->pc = 0x24e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24e1dc: 0xc7b60050
    ctx->pc = 0x24e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24e1e0: 0xc7b50048
    ctx->pc = 0x24e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24e1e4: 0xc7b40040
    ctx->pc = 0x24e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24e1e8: 0x80b492e
    ctx->pc = 0x24E1E8u;
    ctx->pc = 0x24E1ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x24E1F0u;
label_24e1f0:
    // 0x24e1f0: 0xe6000030
    ctx->pc = 0x24e1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x24e1f4: 0xc6200038
    ctx->pc = 0x24e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e1f8: 0xe6000034
    ctx->pc = 0x24e1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24e1fc: 0xc620003c
    ctx->pc = 0x24e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e200: 0xe6000038
    ctx->pc = 0x24e200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24e204: 0x200202d
    ctx->pc = 0x24e204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e208: 0xc0b2664
    ctx->pc = 0x24E208u;
    SET_GPR_U32(ctx, 31, 0x24E210u);
    ctx->pc = 0x24E20Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2C9990u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPSpeed_0x2c9990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E210u; }
    }
    if (ctx->pc != 0x24E210u) { return; }
    ctx->pc = 0x24E210u;
    // 0x24e210: 0x200202d
    ctx->pc = 0x24e210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e214: 0x240282d
    ctx->pc = 0x24e214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e218: 0xdfbf0030
    ctx->pc = 0x24e218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e21c: 0xdfb20020
    ctx->pc = 0x24e21cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e220: 0xdfb10010
    ctx->pc = 0x24e220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e224: 0xdfb00000
    ctx->pc = 0x24e224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e228: 0xc7b70058
    ctx->pc = 0x24e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24e22c: 0xc7b60050
    ctx->pc = 0x24e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24e230: 0xc7b50048
    ctx->pc = 0x24e230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24e234: 0xc7b40040
    ctx->pc = 0x24e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24e238: 0x80b2716
    ctx->pc = 0x24E238u;
    ctx->pc = 0x24E23Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2C9C58u;
    MBPsysSetPTex_0x2c9c58(rdram, ctx, runtime); return;
    ctx->pc = 0x24E240u;
}
