#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCollideWorld
// Address: 0x29cd90 - 0x29d278
void CritterCollideWorld_0x29cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29cd90u;

    // 0x29cd90: 0x27bdfed0
    ctx->pc = 0x29cd90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x29cd94: 0xffbf00f0
    ctx->pc = 0x29cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x29cd98: 0xffb600e0
    ctx->pc = 0x29cd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x29cd9c: 0xffb500d0
    ctx->pc = 0x29cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x29cda0: 0xffb400c0
    ctx->pc = 0x29cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x29cda4: 0xffb300b0
    ctx->pc = 0x29cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x29cda8: 0xffb200a0
    ctx->pc = 0x29cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x29cdac: 0xffb10090
    ctx->pc = 0x29cdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x29cdb0: 0xffb00080
    ctx->pc = 0x29cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x29cdb4: 0xe7b90128
    ctx->pc = 0x29cdb4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x29cdb8: 0xe7b80120
    ctx->pc = 0x29cdb8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x29cdbc: 0xe7b70118
    ctx->pc = 0x29cdbcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x29cdc0: 0xe7b60110
    ctx->pc = 0x29cdc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x29cdc4: 0xe7b50108
    ctx->pc = 0x29cdc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x29cdc8: 0xe7b40100
    ctx->pc = 0x29cdc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29cdcc: 0x80882d
    ctx->pc = 0x29cdccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cdd0: 0xa0802d
    ctx->pc = 0x29cdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cdd4: 0x8e230004
    ctx->pc = 0x29cdd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29cdd8: 0xc474007c
    ctx->pc = 0x29cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29cddc: 0xc4770078
    ctx->pc = 0x29cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29cde0: 0x26350060
    ctx->pc = 0x29cde0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 96));
    // 0x29cde4: 0xb02d
    ctx->pc = 0x29cde4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cde8: 0x982d
    ctx->pc = 0x29cde8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cdec: 0xa02d
    ctx->pc = 0x29cdecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cdf0: 0x3c020031
    ctx->pc = 0x29cdf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29cdf4: 0xc441ffa8
    ctx->pc = 0x29cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cdf8: 0x3c01c180
    ctx->pc = 0x29cdf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49536 << 16));
    // 0x29cdfc: 0x44810000
    ctx->pc = 0x29cdfcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29ce00: 0x8c62005c
    ctx->pc = 0x29ce00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x29ce04: 0x30420100
    ctx->pc = 0x29ce04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x29ce08: 0x10400033
    ctx->pc = 0x29CE08u;
    {
        const bool branch_taken_0x29ce08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CE0Cu;
        ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x29ce08) {
            ctx->pc = 0x29CED8u;
            goto label_29ced8;
        }
    }
    ctx->pc = 0x29CE10u;
    // 0x29ce10: 0x84620118
    ctx->pc = 0x29ce10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x29ce14: 0x282102a
    ctx->pc = 0x29ce14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x29ce18: 0x10400042
    ctx->pc = 0x29CE18u;
    {
        const bool branch_taken_0x29ce18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CE1Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29ce18) {
            ctx->pc = 0x29CF24u;
            goto label_29cf24;
        }
    }
    ctx->pc = 0x29CE20u;
    // 0x29ce20: 0x24140060
    ctx->pc = 0x29ce20u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 96));
    // 0x29ce24: 0x2541018
    ctx->pc = 0x29ce24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29ce28:
    // 0x29ce28: 0x24420540
    ctx->pc = 0x29ce28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x29ce2c: 0x2221821
    ctx->pc = 0x29ce2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29ce30: 0x8c620004
    ctx->pc = 0x29ce30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29ce34: 0x50400021
    ctx->pc = 0x29CE34u;
    {
        const bool branch_taken_0x29ce34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29ce34) {
            ctx->pc = 0x29CE38u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29CEBCu;
            goto label_29cebc;
        }
    }
    ctx->pc = 0x29CE3Cu;
    // 0x29ce3c: 0xc461005c
    ctx->pc = 0x29ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ce40: 0xc4600058
    ctx->pc = 0x29ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ce44: 0x46010036
    ctx->pc = 0x29ce44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ce48: 0x0
    ctx->pc = 0x29ce48u;
    // NOP
    // 0x29ce4c: 0x4503001b
    ctx->pc = 0x29CE4Cu;
    {
        const bool branch_taken_0x29ce4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ce4c) {
            ctx->pc = 0x29CE50u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29CEBCu;
            goto label_29cebc;
        }
    }
    ctx->pc = 0x29CE54u;
    // 0x29ce54: 0x8c670000
    ctx->pc = 0x29ce54u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ce58: 0x94e20010
    ctx->pc = 0x29ce58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x29ce5c: 0x30420008
    ctx->pc = 0x29ce5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x29ce60: 0x10400015
    ctx->pc = 0x29CE60u;
    {
        const bool branch_taken_0x29ce60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CE64u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29ce60) {
            ctx->pc = 0x29CEB8u;
            goto label_29ceb8;
        }
    }
    ctx->pc = 0x29CE68u;
    // 0x29ce68: 0x24760040
    ctx->pc = 0x29ce68u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 3), 64));
    // 0x29ce6c: 0xc4600040
    ctx->pc = 0x29ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ce70: 0xc6010000
    ctx->pc = 0x29ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ce74: 0x46010000
    ctx->pc = 0x29ce74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ce78: 0xe7a00000
    ctx->pc = 0x29ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ce7c: 0xc6c00004
    ctx->pc = 0x29ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ce80: 0xc6010004
    ctx->pc = 0x29ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ce84: 0x46010000
    ctx->pc = 0x29ce84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ce88: 0xe7a00004
    ctx->pc = 0x29ce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29ce8c: 0xc6c00008
    ctx->pc = 0x29ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ce90: 0xc6010008
    ctx->pc = 0x29ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ce94: 0x46010000
    ctx->pc = 0x29ce94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ce98: 0xe7a00008
    ctx->pc = 0x29ce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29ce9c: 0x2c0202d
    ctx->pc = 0x29ce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cea0: 0x27a60070
    ctx->pc = 0x29cea0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    // 0x29cea4: 0xc087bde
    ctx->pc = 0x29CEA4u;
    SET_GPR_U32(ctx, 31, 0x29CEACu);
    ctx->pc = 0x29CEA8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21EF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyWallCollide_0x21ef78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CEACu; }
    }
    if (ctx->pc != 0x29CEACu) { return; }
    ctx->pc = 0x29CEACu;
    // 0x29ceac: 0x40982d
    ctx->pc = 0x29ceacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ceb0: 0x1660001e
    ctx->pc = 0x29CEB0u;
    {
        const bool branch_taken_0x29ceb0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x29CEB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29ceb0) {
            ctx->pc = 0x29CF2Cu;
            goto label_29cf2c;
        }
    }
    ctx->pc = 0x29CEB8u;
label_29ceb8:
    // 0x29ceb8: 0x26520001
    ctx->pc = 0x29ceb8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29cebc:
    // 0x29cebc: 0x8e220004
    ctx->pc = 0x29cebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29cec0: 0x84420118
    ctx->pc = 0x29cec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29cec4: 0x242102a
    ctx->pc = 0x29cec4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x29cec8: 0x1440ffd7
    ctx->pc = 0x29CEC8u;
    {
        const bool branch_taken_0x29cec8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29CECCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29cec8) {
            ctx->pc = 0x29CE28u;
            goto label_29ce28;
        }
    }
    ctx->pc = 0x29CED0u;
    // 0x29ced0: 0x10000014
    ctx->pc = 0x29CED0u;
    {
        const bool branch_taken_0x29ced0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29ced0) {
            ctx->pc = 0x29CF24u;
            goto label_29cf24;
        }
    }
    ctx->pc = 0x29CED8u;
label_29ced8:
    // 0x29ced8: 0x2a0b02d
    ctx->pc = 0x29ced8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cedc: 0xc6a00000
    ctx->pc = 0x29cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cee0: 0xc6010000
    ctx->pc = 0x29cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cee4: 0x46010000
    ctx->pc = 0x29cee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cee8: 0xe7a00000
    ctx->pc = 0x29cee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ceec: 0xc6a00004
    ctx->pc = 0x29ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cef0: 0xc6010004
    ctx->pc = 0x29cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cef4: 0x46010000
    ctx->pc = 0x29cef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cef8: 0xe7a00004
    ctx->pc = 0x29cef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29cefc: 0xc6a00008
    ctx->pc = 0x29cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cf00: 0xc6010008
    ctx->pc = 0x29cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cf04: 0x46010000
    ctx->pc = 0x29cf04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cf08: 0xe7a00008
    ctx->pc = 0x29cf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29cf0c: 0x2a0202d
    ctx->pc = 0x29cf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf10: 0x3a0282d
    ctx->pc = 0x29cf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf14: 0x27a60070
    ctx->pc = 0x29cf14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    // 0x29cf18: 0xc087bde
    ctx->pc = 0x29CF18u;
    SET_GPR_U32(ctx, 31, 0x29CF20u);
    ctx->pc = 0x29CF1Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21EF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyWallCollide_0x21ef78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF20u; }
    }
    if (ctx->pc != 0x29CF20u) { return; }
    ctx->pc = 0x29CF20u;
    // 0x29cf20: 0x40982d
    ctx->pc = 0x29cf20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cf24:
    // 0x29cf24: 0x12600017
    ctx->pc = 0x29CF24u;
    {
        const bool branch_taken_0x29cf24 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CF28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29cf24) {
            ctx->pc = 0x29CF84u;
            goto label_29cf84;
        }
    }
    ctx->pc = 0x29CF2Cu;
label_29cf2c:
    // 0x29cf2c: 0x260282d
    ctx->pc = 0x29cf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf30: 0x2a0302d
    ctx->pc = 0x29cf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf34: 0xc0a730c
    ctx->pc = 0x29CF34u;
    SET_GPR_U32(ctx, 31, 0x29CF3Cu);
    ctx->pc = 0x29CF38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x29CC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterWorldDamage_0x29cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF3Cu; }
    }
    if (ctx->pc != 0x29CF3Cu) { return; }
    ctx->pc = 0x29CF3Cu;
    // 0x29cf3c: 0x8e620010
    ctx->pc = 0x29cf3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x29cf40: 0x30420038
    ctx->pc = 0x29cf40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 56));
    // 0x29cf44: 0x14400010
    ctx->pc = 0x29CF44u;
    {
        const bool branch_taken_0x29cf44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29CF48u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29cf44) {
            ctx->pc = 0x29CF88u;
            goto label_29cf88;
        }
    }
    ctx->pc = 0x29CF4Cu;
    // 0x29cf4c: 0x2c0202d
    ctx->pc = 0x29cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf50: 0x200282d
    ctx->pc = 0x29cf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf54: 0x27a60070
    ctx->pc = 0x29cf54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    // 0x29cf58: 0x3c070032
    ctx->pc = 0x29cf58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x29cf5c: 0x24e7fc10
    ctx->pc = 0x29cf5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966288));
    // 0x29cf60: 0xc087c18
    ctx->pc = 0x29CF60u;
    SET_GPR_U32(ctx, 31, 0x29CF68u);
    ctx->pc = 0x29CF64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21F060u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlideAlongWall_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF68u; }
    }
    if (ctx->pc != 0x29CF68u) { return; }
    ctx->pc = 0x29CF68u;
    // 0x29cf68: 0x4410007
    ctx->pc = 0x29CF68u;
    {
        const bool branch_taken_0x29cf68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29CF6Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29cf68) {
            ctx->pc = 0x29CF88u;
            goto label_29cf88;
        }
    }
    ctx->pc = 0x29CF70u;
    // 0x29cf70: 0x44800000
    ctx->pc = 0x29cf70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29cf74: 0xe6000008
    ctx->pc = 0x29cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x29cf78: 0xe6000000
    ctx->pc = 0x29cf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x29cf7c: 0x10000002
    ctx->pc = 0x29CF7Cu;
    {
        const bool branch_taken_0x29cf7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CF80u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x29cf7c) {
            ctx->pc = 0x29CF88u;
            goto label_29cf88;
        }
    }
    ctx->pc = 0x29CF84u;
label_29cf84:
    // 0x29cf84: 0x982d
    ctx->pc = 0x29cf84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cf88:
    // 0x29cf88: 0xc6000000
    ctx->pc = 0x29cf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cf8c: 0xe7a00010
    ctx->pc = 0x29cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29cf90: 0xc6000004
    ctx->pc = 0x29cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cf94: 0xe7a00014
    ctx->pc = 0x29cf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29cf98: 0xc6000008
    ctx->pc = 0x29cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cf9c: 0xe7a00018
    ctx->pc = 0x29cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29cfa0: 0xc0b58a4
    ctx->pc = 0x29CFA0u;
    SET_GPR_U32(ctx, 31, 0x29CFA8u);
    ctx->pc = 0x29CFA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CFA8u; }
    }
    if (ctx->pc != 0x29CFA8u) { return; }
    ctx->pc = 0x29CFA8u;
    // 0x29cfa8: 0x46000546
    ctx->pc = 0x29cfa8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29cfac: 0x4615a080
    ctx->pc = 0x29cfacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x29cfb0: 0xc7a00010
    ctx->pc = 0x29cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cfb4: 0x46001002
    ctx->pc = 0x29cfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29cfb8: 0xc6a10000
    ctx->pc = 0x29cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cfbc: 0x46010000
    ctx->pc = 0x29cfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cfc0: 0xe7a00000
    ctx->pc = 0x29cfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29cfc4: 0xc7a00014
    ctx->pc = 0x29cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cfc8: 0x46001002
    ctx->pc = 0x29cfc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29cfcc: 0xc6a10004
    ctx->pc = 0x29cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cfd0: 0x46010000
    ctx->pc = 0x29cfd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cfd4: 0xe7a00004
    ctx->pc = 0x29cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29cfd8: 0xc7a00018
    ctx->pc = 0x29cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cfdc: 0x46001002
    ctx->pc = 0x29cfdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29cfe0: 0xc6a10008
    ctx->pc = 0x29cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cfe4: 0x46010000
    ctx->pc = 0x29cfe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cfe8: 0xe7a00008
    ctx->pc = 0x29cfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29cfec: 0x46021600
    ctx->pc = 0x29cfecu;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x29cff0: 0x4600b807
    ctx->pc = 0x29cff0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x29cff4: 0x3c014040
    ctx->pc = 0x29cff4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x29cff8: 0x44817000
    ctx->pc = 0x29cff8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x29cffc: 0x3a0202d
    ctx->pc = 0x29cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d000: 0x27a50020
    ctx->pc = 0x29d000u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d004: 0x3c013f80
    ctx->pc = 0x29d004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29d008: 0x44816000
    ctx->pc = 0x29d008u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29d00c: 0x4600bb46
    ctx->pc = 0x29d00cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29d010: 0x460e0381
    ctx->pc = 0x29d010u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x29d014: 0x302d
    ctx->pc = 0x29d014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d018: 0xc087b24
    ctx->pc = 0x29D018u;
    SET_GPR_U32(ctx, 31, 0x29D020u);
    ctx->pc = 0x29D01Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D020u; }
    }
    if (ctx->pc != 0x29D020u) { return; }
    ctx->pc = 0x29D020u;
    // 0x29d020: 0x40a02d
    ctx->pc = 0x29d020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d024: 0x12800057
    ctx->pc = 0x29D024u;
    {
        const bool branch_taken_0x29d024 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D028u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29d024) {
            ctx->pc = 0x29D184u;
            goto label_29d184;
        }
    }
    ctx->pc = 0x29D02Cu;
    // 0x29d02c: 0x220202d
    ctx->pc = 0x29d02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d030: 0x280282d
    ctx->pc = 0x29d030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d034: 0x2a0302d
    ctx->pc = 0x29d034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d038: 0xc0a730c
    ctx->pc = 0x29D038u;
    SET_GPR_U32(ctx, 31, 0x29D040u);
    ctx->pc = 0x29D03Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x29CC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterWorldDamage_0x29cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D040u; }
    }
    if (ctx->pc != 0x29D040u) { return; }
    ctx->pc = 0x29D040u;
    // 0x29d040: 0x8e220004
    ctx->pc = 0x29d040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d044: 0xc6210044
    ctx->pc = 0x29d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d048: 0xc44000b0
    ctx->pc = 0x29d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d04c: 0x46000d81
    ctx->pc = 0x29d04cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29d050: 0xc7b40054
    ctx->pc = 0x29d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d054: 0x4616a041
    ctx->pc = 0x29d054u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x29d058: 0x44800000
    ctx->pc = 0x29d058u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29d05c: 0x46000834
    ctx->pc = 0x29d05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d060: 0x0
    ctx->pc = 0x29d060u;
    // NOP
    // 0x29d064: 0x45030001
    ctx->pc = 0x29D064u;
    {
        const bool branch_taken_0x29d064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d064) {
            ctx->pc = 0x29D068u;
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->pc = 0x29D06Cu;
            goto label_29d06c;
        }
    }
    ctx->pc = 0x29D06Cu;
label_29d06c:
    // 0x29d06c: 0x4601c034
    ctx->pc = 0x29d06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d070: 0x0
    ctx->pc = 0x29d070u;
    // NOP
    // 0x29d074: 0x45030028
    ctx->pc = 0x29D074u;
    {
        const bool branch_taken_0x29d074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d074) {
            ctx->pc = 0x29D078u;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x29D118u;
            goto label_29d118;
        }
    }
    ctx->pc = 0x29D07Cu;
    // 0x29d07c: 0x44800000
    ctx->pc = 0x29d07cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29d080: 0x46150034
    ctx->pc = 0x29d080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d084: 0x45000024
    ctx->pc = 0x29D084u;
    {
        const bool branch_taken_0x29d084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d084) {
            ctx->pc = 0x29D118u;
            goto label_29d118;
        }
    }
    ctx->pc = 0x29D08Cu;
    // 0x29d08c: 0x3c013dcc
    ctx->pc = 0x29d08cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29d090: 0x3421cccd
    ctx->pc = 0x29d090u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29d094: 0x44810000
    ctx->pc = 0x29d094u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29d098: 0x4600a802
    ctx->pc = 0x29d098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29d09c: 0x46010034
    ctx->pc = 0x29d09cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d0a0: 0x0
    ctx->pc = 0x29d0a0u;
    // NOP
    // 0x29d0a4: 0x4500001c
    ctx->pc = 0x29D0A4u;
    {
        const bool branch_taken_0x29d0a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D0A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29d0a4) {
            ctx->pc = 0x29D118u;
            goto label_29d118;
        }
    }
    ctx->pc = 0x29D0ACu;
    // 0x29d0ac: 0xc6a00000
    ctx->pc = 0x29d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d0b0: 0xc6010000
    ctx->pc = 0x29d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d0b4: 0x46010000
    ctx->pc = 0x29d0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d0b8: 0xe7a00000
    ctx->pc = 0x29d0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d0bc: 0xc6a00004
    ctx->pc = 0x29d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d0c0: 0xc6010004
    ctx->pc = 0x29d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d0c4: 0x46010000
    ctx->pc = 0x29d0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d0c8: 0xe7a00004
    ctx->pc = 0x29d0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d0cc: 0xc6a00008
    ctx->pc = 0x29d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d0d0: 0xc6010008
    ctx->pc = 0x29d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d0d4: 0x46010000
    ctx->pc = 0x29d0d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d0d8: 0xe7a00008
    ctx->pc = 0x29d0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29d0dc: 0x4600b807
    ctx->pc = 0x29d0dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x29d0e0: 0x3c014040
    ctx->pc = 0x29d0e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x29d0e4: 0x44817000
    ctx->pc = 0x29d0e4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x29d0e8: 0x27a50020
    ctx->pc = 0x29d0e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d0ec: 0x3c013f80
    ctx->pc = 0x29d0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29d0f0: 0x44816000
    ctx->pc = 0x29d0f0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29d0f4: 0x4600bb46
    ctx->pc = 0x29d0f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29d0f8: 0x460e0381
    ctx->pc = 0x29d0f8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x29d0fc: 0x302d
    ctx->pc = 0x29d0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d100: 0xc087b24
    ctx->pc = 0x29D100u;
    SET_GPR_U32(ctx, 31, 0x29D108u);
    ctx->pc = 0x29D104u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D108u; }
    }
    if (ctx->pc != 0x29D108u) { return; }
    ctx->pc = 0x29D108u;
    // 0x29d108: 0x40a02d
    ctx->pc = 0x29d108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d10c: 0x56800002
    ctx->pc = 0x29D10Cu;
    {
        const bool branch_taken_0x29d10c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x29d10c) {
            ctx->pc = 0x29D110u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x29D118u;
            goto label_29d118;
        }
    }
    ctx->pc = 0x29D114u;
    // 0x29d114: 0x902d
    ctx->pc = 0x29d114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d118:
    // 0x29d118: 0x56400012
    ctx->pc = 0x29D118u;
    {
        const bool branch_taken_0x29d118 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x29d118) {
            ctx->pc = 0x29D11Cu;
            ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->pc = 0x29D164u;
            goto label_29d164;
        }
    }
    ctx->pc = 0x29D120u;
    // 0x29d120: 0x4600b807
    ctx->pc = 0x29d120u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x29d124: 0x3c014040
    ctx->pc = 0x29d124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x29d128: 0x44817000
    ctx->pc = 0x29d128u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x29d12c: 0x2a0202d
    ctx->pc = 0x29d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d130: 0x27a50020
    ctx->pc = 0x29d130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d134: 0x3c013f80
    ctx->pc = 0x29d134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29d138: 0x44816000
    ctx->pc = 0x29d138u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29d13c: 0x4600bb46
    ctx->pc = 0x29d13cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29d140: 0x460e0381
    ctx->pc = 0x29d140u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x29d144: 0x302d
    ctx->pc = 0x29d144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d148: 0xc087b24
    ctx->pc = 0x29D148u;
    SET_GPR_U32(ctx, 31, 0x29D150u);
    ctx->pc = 0x29D14Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D150u; }
    }
    if (ctx->pc != 0x29D150u) { return; }
    ctx->pc = 0x29D150u;
    // 0x29d150: 0x40a02d
    ctx->pc = 0x29d150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d154: 0x12800002
    ctx->pc = 0x29D154u;
    {
        const bool branch_taken_0x29d154 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D158u;
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x29d154) {
            ctx->pc = 0x29D160u;
            goto label_29d160;
        }
    }
    ctx->pc = 0x29D15Cu;
    // 0x29d15c: 0xc7b40054
    ctx->pc = 0x29d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29d160:
    // 0x29d160: 0x4616a041
    ctx->pc = 0x29d160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_29d164:
    // 0x29d164: 0x46190834
    ctx->pc = 0x29d164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d168: 0x0
    ctx->pc = 0x29d168u;
    // NOP
    // 0x29d16c: 0x45030001
    ctx->pc = 0x29D16Cu;
    {
        const bool branch_taken_0x29d16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d16c) {
            ctx->pc = 0x29D170u;
            ctx->f[1] = FPU_MOV_S(ctx->f[25]);
            ctx->pc = 0x29D174u;
            goto label_29d174;
        }
    }
    ctx->pc = 0x29D174u;
label_29d174:
    // 0x29d174: 0xc6000004
    ctx->pc = 0x29d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d178: 0x46000800
    ctx->pc = 0x29d178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29d17c: 0x10000002
    ctx->pc = 0x29D17Cu;
    {
        const bool branch_taken_0x29d17c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D180u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        if (branch_taken_0x29d17c) {
            ctx->pc = 0x29D188u;
            goto label_29d188;
        }
    }
    ctx->pc = 0x29D184u;
label_29d184:
    // 0x29d184: 0x902d
    ctx->pc = 0x29d184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d188:
    // 0x29d188: 0x16400005
    ctx->pc = 0x29D188u;
    {
        const bool branch_taken_0x29d188 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x29d188) {
            ctx->pc = 0x29D1A0u;
            goto label_29d1a0;
        }
    }
    ctx->pc = 0x29D190u;
    // 0x29d190: 0x44800000
    ctx->pc = 0x29d190u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29d194: 0xe6000008
    ctx->pc = 0x29d194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x29d198: 0xe6000000
    ctx->pc = 0x29d198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x29d19c: 0x36730010
    ctx->pc = 0x29d19cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 16));
label_29d1a0:
    // 0x29d1a0: 0x12800024
    ctx->pc = 0x29D1A0u;
    {
        const bool branch_taken_0x29d1a0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D1A4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 19));
        if (branch_taken_0x29d1a0) {
            ctx->pc = 0x29D234u;
            goto label_29d234;
        }
    }
    ctx->pc = 0x29D1A8u;
    // 0x29d1a8: 0x8e850028
    ctx->pc = 0x29d1a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x29d1ac: 0x10a00009
    ctx->pc = 0x29D1ACu;
    {
        const bool branch_taken_0x29d1ac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D1B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x29d1ac) {
            ctx->pc = 0x29D1D4u;
            goto label_29d1d4;
        }
    }
    ctx->pc = 0x29D1B4u;
    // 0x29d1b4: 0x8e820010
    ctx->pc = 0x29d1b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x29d1b8: 0x30421000
    ctx->pc = 0x29d1b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x29d1bc: 0x10400005
    ctx->pc = 0x29D1BCu;
    {
        const bool branch_taken_0x29d1bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D1C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x29d1bc) {
            ctx->pc = 0x29D1D4u;
            goto label_29d1d4;
        }
    }
    ctx->pc = 0x29D1C4u;
    // 0x29d1c4: 0xc0b3f94
    ctx->pc = 0x29D1C4u;
    SET_GPR_U32(ctx, 31, 0x29D1CCu);
    ctx->pc = 0x29D1C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D1CCu; }
    }
    if (ctx->pc != 0x29D1CCu) { return; }
    ctx->pc = 0x29D1CCu;
    // 0x29d1cc: 0x10000005
    ctx->pc = 0x29D1CCu;
    {
        const bool branch_taken_0x29d1cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D1D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
        if (branch_taken_0x29d1cc) {
            ctx->pc = 0x29D1E4u;
            goto label_29d1e4;
        }
    }
    ctx->pc = 0x29D1D4u;
label_29d1d4:
    // 0x29d1d4: 0x8e240070
    ctx->pc = 0x29d1d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x29d1d8: 0xc0b3f94
    ctx->pc = 0x29D1D8u;
    SET_GPR_U32(ctx, 31, 0x29D1E0u);
    ctx->pc = 0x29D1DCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 17980)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D1E0u; }
    }
    if (ctx->pc != 0x29D1E0u) { return; }
    ctx->pc = 0x29D1E0u;
    // 0x29d1e0: 0x8e2500d0
    ctx->pc = 0x29d1e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_29d1e4:
    // 0x29d1e4: 0x10a00014
    ctx->pc = 0x29D1E4u;
    {
        const bool branch_taken_0x29d1e4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D1E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29d1e4) {
            ctx->pc = 0x29D238u;
            goto label_29d238;
        }
    }
    ctx->pc = 0x29D1ECu;
    // 0x29d1ec: 0xc0b549e
    ctx->pc = 0x29D1ECu;
    SET_GPR_U32(ctx, 31, 0x29D1F4u);
    ctx->pc = 0x29D1F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D1F4u; }
    }
    if (ctx->pc != 0x29D1F4u) { return; }
    ctx->pc = 0x29D1F4u;
    // 0x29d1f4: 0x8e2200d0
    ctx->pc = 0x29d1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x29d1f8: 0xc6200040
    ctx->pc = 0x29d1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d1fc: 0xe4400030
    ctx->pc = 0x29d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x29d200: 0x8e2200d0
    ctx->pc = 0x29d200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x29d204: 0xc6200044
    ctx->pc = 0x29d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d208: 0xe4400034
    ctx->pc = 0x29d208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x29d20c: 0x8e2200d0
    ctx->pc = 0x29d20cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x29d210: 0xc6200048
    ctx->pc = 0x29d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d214: 0xe4400038
    ctx->pc = 0x29d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x29d218: 0x8e2200d0
    ctx->pc = 0x29d218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x29d21c: 0xc7a00054
    ctx->pc = 0x29d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d220: 0x3c013dcc
    ctx->pc = 0x29d220u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29d224: 0x3421cccd
    ctx->pc = 0x29d224u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29d228: 0x44810800
    ctx->pc = 0x29d228u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29d22c: 0x46010000
    ctx->pc = 0x29d22cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d230: 0xe4400034
    ctx->pc = 0x29d230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_29d234:
    // 0x29d234: 0x260102d
    ctx->pc = 0x29d234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29d238:
    // 0x29d238: 0xdfbf00f0
    ctx->pc = 0x29d238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29d23c: 0xdfb600e0
    ctx->pc = 0x29d23cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29d240: 0xdfb500d0
    ctx->pc = 0x29d240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29d244: 0xdfb400c0
    ctx->pc = 0x29d244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29d248: 0xdfb300b0
    ctx->pc = 0x29d248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29d24c: 0xdfb200a0
    ctx->pc = 0x29d24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29d250: 0xdfb10090
    ctx->pc = 0x29d250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29d254: 0xdfb00080
    ctx->pc = 0x29d254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29d258: 0xc7b90128
    ctx->pc = 0x29d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29d25c: 0xc7b80120
    ctx->pc = 0x29d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29d260: 0xc7b70118
    ctx->pc = 0x29d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29d264: 0xc7b60110
    ctx->pc = 0x29d264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29d268: 0xc7b50108
    ctx->pc = 0x29d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29d26c: 0xc7b40100
    ctx->pc = 0x29d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d270: 0x3e00008
    ctx->pc = 0x29D270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29CE28u: goto label_29ce28;
            case 0x29CEB8u: goto label_29ceb8;
            case 0x29CEBCu: goto label_29cebc;
            case 0x29CED8u: goto label_29ced8;
            case 0x29CF24u: goto label_29cf24;
            case 0x29CF2Cu: goto label_29cf2c;
            case 0x29CF84u: goto label_29cf84;
            case 0x29CF88u: goto label_29cf88;
            case 0x29D06Cu: goto label_29d06c;
            case 0x29D118u: goto label_29d118;
            case 0x29D160u: goto label_29d160;
            case 0x29D164u: goto label_29d164;
            case 0x29D174u: goto label_29d174;
            case 0x29D184u: goto label_29d184;
            case 0x29D188u: goto label_29d188;
            case 0x29D1A0u: goto label_29d1a0;
            case 0x29D1D4u: goto label_29d1d4;
            case 0x29D1E4u: goto label_29d1e4;
            case 0x29D234u: goto label_29d234;
            case 0x29D238u: goto label_29d238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29D278u;
}
