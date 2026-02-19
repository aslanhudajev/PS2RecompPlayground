#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterNodePlayerCollide
// Address: 0x29bc48 - 0x29bef8
void CritterNodePlayerCollide_0x29bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29bc48u;

    // 0x29bc48: 0x27bdff10
    ctx->pc = 0x29bc48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29bc4c: 0xffbf00c0
    ctx->pc = 0x29bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29bc50: 0xffb500b0
    ctx->pc = 0x29bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x29bc54: 0xffb400a0
    ctx->pc = 0x29bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x29bc58: 0xffb30090
    ctx->pc = 0x29bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x29bc5c: 0xffb20080
    ctx->pc = 0x29bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29bc60: 0xffb10070
    ctx->pc = 0x29bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x29bc64: 0xffb00060
    ctx->pc = 0x29bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x29bc68: 0xe7b700e8
    ctx->pc = 0x29bc68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x29bc6c: 0xe7b600e0
    ctx->pc = 0x29bc6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x29bc70: 0xe7b500d8
    ctx->pc = 0x29bc70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x29bc74: 0xe7b400d0
    ctx->pc = 0x29bc74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29bc78: 0x80882d
    ctx->pc = 0x29bc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc7c: 0x10c00007
    ctx->pc = 0x29BC7Cu;
    {
        const bool branch_taken_0x29bc7c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x29BC80u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29bc7c) {
            ctx->pc = 0x29BC9Cu;
            goto label_29bc9c;
        }
    }
    ctx->pc = 0x29BC84u;
    // 0x29bc84: 0x3c020034
    ctx->pc = 0x29bc84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29bc88: 0x8c42e7c8
    ctx->pc = 0x29bc88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29bc8c: 0xc661002c
    ctx->pc = 0x29bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bc90: 0xc44000bc
    ctx->pc = 0x29bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bc94: 0x10000002
    ctx->pc = 0x29BC94u;
    {
        const bool branch_taken_0x29bc94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29BC98u;
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x29bc94) {
            ctx->pc = 0x29BCA0u;
            goto label_29bca0;
        }
    }
    ctx->pc = 0x29BC9Cu;
label_29bc9c:
    // 0x29bc9c: 0x4480a000
    ctx->pc = 0x29bc9cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_29bca0:
    // 0x29bca0: 0xc675000c
    ctx->pc = 0x29bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29bca4: 0x3c0162d8
    ctx->pc = 0x29bca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25304 << 16));
    // 0x29bca8: 0x3421d727
    ctx->pc = 0x29bca8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x29bcac: 0x4481b800
    ctx->pc = 0x29bcacu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x29bcb0: 0x2414ffff
    ctx->pc = 0x29bcb0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29bcb4: 0x26640020
    ctx->pc = 0x29bcb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 32));
    // 0x29bcb8: 0x27a50020
    ctx->pc = 0x29bcb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29bcbc: 0xc0b585c
    ctx->pc = 0x29BCBCu;
    SET_GPR_U32(ctx, 31, 0x29BCC4u);
    ctx->pc = 0x29BCC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 992));
    ctx->pc = 0x2D6170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat3_0x2d6170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BCC4u; }
    }
    if (ctx->pc != 0x29BCC4u) { return; }
    ctx->pc = 0x29BCC4u;
    // 0x29bcc4: 0xc6200470
    ctx->pc = 0x29bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bcc8: 0xc7a30020
    ctx->pc = 0x29bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29bccc: 0x46030000
    ctx->pc = 0x29bcccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29bcd0: 0xe7a00010
    ctx->pc = 0x29bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29bcd4: 0xc6200474
    ctx->pc = 0x29bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bcd8: 0xc7a20024
    ctx->pc = 0x29bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29bcdc: 0x46020000
    ctx->pc = 0x29bcdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29bce0: 0xe7a00014
    ctx->pc = 0x29bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29bce4: 0xc6200478
    ctx->pc = 0x29bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bce8: 0xc7a10028
    ctx->pc = 0x29bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bcec: 0x46010000
    ctx->pc = 0x29bcecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29bcf0: 0xe7a00018
    ctx->pc = 0x29bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29bcf4: 0xc6200410
    ctx->pc = 0x29bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bcf8: 0x46030000
    ctx->pc = 0x29bcf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29bcfc: 0xe7a00000
    ctx->pc = 0x29bcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29bd00: 0xc6200414
    ctx->pc = 0x29bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd04: 0x46020000
    ctx->pc = 0x29bd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29bd08: 0xe7a00004
    ctx->pc = 0x29bd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29bd0c: 0xc6200418
    ctx->pc = 0x29bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd10: 0x46010000
    ctx->pc = 0x29bd10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29bd14: 0xe7a00008
    ctx->pc = 0x29bd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29bd18: 0x902d
    ctx->pc = 0x29bd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd1c: 0x3c020032
    ctx->pc = 0x29bd1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29bd20: 0x24551bc0
    ctx->pc = 0x29bd20u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29bd24: 0x4480b000
    ctx->pc = 0x29bd24u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x29bd28: 0x24022b00
    ctx->pc = 0x29bd28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29bd2c: 0x0
    ctx->pc = 0x29bd2cu;
    // NOP
label_29bd30:
    // 0x29bd30: 0x2421818
    ctx->pc = 0x29bd30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29bd34: 0x758021
    ctx->pc = 0x29bd34u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x29bd38: 0x8e0300fc
    ctx->pc = 0x29bd38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x29bd3c: 0x24020001
    ctx->pc = 0x29bd3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bd40: 0x5462005c
    ctx->pc = 0x29BD40u;
    {
        const bool branch_taken_0x29bd40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x29bd40) {
            ctx->pc = 0x29BD44u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29BEB4u;
            goto label_29beb4;
        }
    }
    ctx->pc = 0x29BD48u;
    // 0x29bd48: 0xc08c728
    ctx->pc = 0x29BD48u;
    SET_GPR_U32(ctx, 31, 0x29BD50u);
    ctx->pc = 0x29BD4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_can_be_damaged_0x231ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD50u; }
    }
    if (ctx->pc != 0x29BD50u) { return; }
    ctx->pc = 0x29BD50u;
    // 0x29bd50: 0x50400058
    ctx->pc = 0x29BD50u;
    {
        const bool branch_taken_0x29bd50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29bd50) {
            ctx->pc = 0x29BD54u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29BEB4u;
            goto label_29beb4;
        }
    }
    ctx->pc = 0x29BD58u;
    // 0x29bd58: 0x4614b034
    ctx->pc = 0x29bd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bd5c: 0x0
    ctx->pc = 0x29bd5cu;
    // NOP
    // 0x29bd60: 0x45000007
    ctx->pc = 0x29BD60u;
    {
        const bool branch_taken_0x29bd60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BD64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29bd60) {
            ctx->pc = 0x29BD80u;
            goto label_29bd80;
        }
    }
    ctx->pc = 0x29BD68u;
    // 0x29bd68: 0xc441ffa4
    ctx->pc = 0x29bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bd6c: 0xc60008c0
    ctx->pc = 0x29bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd70: 0x46000834
    ctx->pc = 0x29bd70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bd74: 0x0
    ctx->pc = 0x29bd74u;
    // NOP
    // 0x29bd78: 0x4503004e
    ctx->pc = 0x29BD78u;
    {
        const bool branch_taken_0x29bd78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bd78) {
            ctx->pc = 0x29BD7Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29BEB4u;
            goto label_29beb4;
        }
    }
    ctx->pc = 0x29BD80u;
label_29bd80:
    // 0x29bd80: 0xc6000070
    ctx->pc = 0x29bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd84: 0xe7a00050
    ctx->pc = 0x29bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29bd88: 0xc6000074
    ctx->pc = 0x29bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd8c: 0xe7a00054
    ctx->pc = 0x29bd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29bd90: 0xc6000078
    ctx->pc = 0x29bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd94: 0xe7a00058
    ctx->pc = 0x29bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29bd98: 0xc60c0828
    ctx->pc = 0x29bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29bd9c: 0xc60d082c
    ctx->pc = 0x29bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29bda0: 0x27a40050
    ctx->pc = 0x29bda0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x29bda4: 0x3a0282d
    ctx->pc = 0x29bda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bda8: 0x3a0302d
    ctx->pc = 0x29bda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdac: 0x27a70020
    ctx->pc = 0x29bdacu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29bdb0: 0x460cab00
    ctx->pc = 0x29bdb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    // 0x29bdb4: 0x460dab40
    ctx->pc = 0x29bdb4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
    // 0x29bdb8: 0xc0a4202
    ctx->pc = 0x29BDB8u;
    SET_GPR_U32(ctx, 31, 0x29BDC0u);
    ctx->pc = 0x29BDBCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDC0u; }
    }
    if (ctx->pc != 0x29BDC0u) { return; }
    ctx->pc = 0x29BDC0u;
    // 0x29bdc0: 0x1040003b
    ctx->pc = 0x29BDC0u;
    {
        const bool branch_taken_0x29bdc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29BDC4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29bdc0) {
            ctx->pc = 0x29BEB0u;
            goto label_29beb0;
        }
    }
    ctx->pc = 0x29BDC8u;
    // 0x29bdc8: 0xc7a10010
    ctx->pc = 0x29bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bdcc: 0x46010001
    ctx->pc = 0x29bdccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bdd0: 0xe7a00030
    ctx->pc = 0x29bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29bdd4: 0xc7a00004
    ctx->pc = 0x29bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bdd8: 0xc7a10014
    ctx->pc = 0x29bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bddc: 0x46010001
    ctx->pc = 0x29bddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bde0: 0xe7a00034
    ctx->pc = 0x29bde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29bde4: 0xc7a00008
    ctx->pc = 0x29bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bde8: 0xc7a10018
    ctx->pc = 0x29bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bdec: 0x46010001
    ctx->pc = 0x29bdecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bdf0: 0xe7a00038
    ctx->pc = 0x29bdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29bdf4: 0xc7a00050
    ctx->pc = 0x29bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bdf8: 0xc6210060
    ctx->pc = 0x29bdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bdfc: 0x46010001
    ctx->pc = 0x29bdfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29be00: 0xe7a00040
    ctx->pc = 0x29be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29be04: 0xc7a00058
    ctx->pc = 0x29be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be08: 0xc6210068
    ctx->pc = 0x29be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29be0c: 0x46010001
    ctx->pc = 0x29be0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29be10: 0xe7a00048
    ctx->pc = 0x29be10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29be14: 0x3c013f80
    ctx->pc = 0x29be14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29be18: 0x44810000
    ctx->pc = 0x29be18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29be1c: 0xe7a00044
    ctx->pc = 0x29be1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29be20: 0xc0b58a4
    ctx->pc = 0x29BE20u;
    SET_GPR_U32(ctx, 31, 0x29BE28u);
    ctx->pc = 0x29BE24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE28u; }
    }
    if (ctx->pc != 0x29BE28u) { return; }
    ctx->pc = 0x29BE28u;
    // 0x29be28: 0xc0b58a4
    ctx->pc = 0x29BE28u;
    SET_GPR_U32(ctx, 31, 0x29BE30u);
    ctx->pc = 0x29BE2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE30u; }
    }
    if (ctx->pc != 0x29BE30u) { return; }
    ctx->pc = 0x29BE30u;
    // 0x29be30: 0x46170034
    ctx->pc = 0x29be30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29be34: 0x45000003
    ctx->pc = 0x29BE34u;
    {
        const bool branch_taken_0x29be34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29be34) {
            ctx->pc = 0x29BE44u;
            goto label_29be44;
        }
    }
    ctx->pc = 0x29BE3Cu;
    // 0x29be3c: 0x240a02d
    ctx->pc = 0x29be3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be40: 0x460005c6
    ctx->pc = 0x29be40u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_29be44:
    // 0x29be44: 0x4614b034
    ctx->pc = 0x29be44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29be48: 0x0
    ctx->pc = 0x29be48u;
    // NOP
    // 0x29be4c: 0x45000018
    ctx->pc = 0x29BE4Cu;
    {
        const bool branch_taken_0x29be4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BE50u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x29be4c) {
            ctx->pc = 0x29BEB0u;
            goto label_29beb0;
        }
    }
    ctx->pc = 0x29BE54u;
    // 0x29be54: 0xc7a00040
    ctx->pc = 0x29be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be58: 0x460018c0
    ctx->pc = 0x29be58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29be5c: 0xc7a20034
    ctx->pc = 0x29be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29be60: 0xc7a00044
    ctx->pc = 0x29be60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be64: 0x46001080
    ctx->pc = 0x29be64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29be68: 0xc7a10038
    ctx->pc = 0x29be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29be6c: 0xc7a00048
    ctx->pc = 0x29be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29be70: 0x46000840
    ctx->pc = 0x29be70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29be74: 0x460318c0
    ctx->pc = 0x29be74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x29be78: 0xe7a30020
    ctx->pc = 0x29be78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29be7c: 0x46021080
    ctx->pc = 0x29be7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x29be80: 0xe7a20024
    ctx->pc = 0x29be80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29be84: 0x46010840
    ctx->pc = 0x29be84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29be88: 0xe7a10028
    ctx->pc = 0x29be88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29be8c: 0x200202d
    ctx->pc = 0x29be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be90: 0x220282d
    ctx->pc = 0x29be90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be94: 0x260302d
    ctx->pc = 0x29be94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be98: 0x382d
    ctx->pc = 0x29be98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be9c: 0x27a80020
    ctx->pc = 0x29be9cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29bea0: 0x3c014000
    ctx->pc = 0x29bea0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x29bea4: 0x44816000
    ctx->pc = 0x29bea4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29bea8: 0xc0a6e9c
    ctx->pc = 0x29BEA8u;
    SET_GPR_U32(ctx, 31, 0x29BEB0u);
    ctx->pc = 0x29BEACu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29BA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamagePlayer_0x29ba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BEB0u; }
    }
    if (ctx->pc != 0x29BEB0u) { return; }
    ctx->pc = 0x29BEB0u;
label_29beb0:
    // 0x29beb0: 0x26520001
    ctx->pc = 0x29beb0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29beb4:
    // 0x29beb4: 0x2a420004
    ctx->pc = 0x29beb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x29beb8: 0x1440ff9d
    ctx->pc = 0x29BEB8u;
    {
        const bool branch_taken_0x29beb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29BEBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x29beb8) {
            ctx->pc = 0x29BD30u;
            goto label_29bd30;
        }
    }
    ctx->pc = 0x29BEC0u;
    // 0x29bec0: 0x280102d
    ctx->pc = 0x29bec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bec4: 0xdfbf00c0
    ctx->pc = 0x29bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29bec8: 0xdfb500b0
    ctx->pc = 0x29bec8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29becc: 0xdfb400a0
    ctx->pc = 0x29beccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29bed0: 0xdfb30090
    ctx->pc = 0x29bed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29bed4: 0xdfb20080
    ctx->pc = 0x29bed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29bed8: 0xdfb10070
    ctx->pc = 0x29bed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29bedc: 0xdfb00060
    ctx->pc = 0x29bedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29bee0: 0xc7b700e8
    ctx->pc = 0x29bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29bee4: 0xc7b600e0
    ctx->pc = 0x29bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29bee8: 0xc7b500d8
    ctx->pc = 0x29bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29beec: 0xc7b400d0
    ctx->pc = 0x29beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29bef0: 0x3e00008
    ctx->pc = 0x29BEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BEF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29BC9Cu: goto label_29bc9c;
            case 0x29BCA0u: goto label_29bca0;
            case 0x29BD30u: goto label_29bd30;
            case 0x29BD80u: goto label_29bd80;
            case 0x29BE44u: goto label_29be44;
            case 0x29BEB0u: goto label_29beb0;
            case 0x29BEB4u: goto label_29beb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29BEF8u;
}
