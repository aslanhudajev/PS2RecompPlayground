#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterNodeEnemyCollide
// Address: 0x29ca38 - 0x29cc30
void CritterNodeEnemyCollide_0x29ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ca38u;

    // 0x29ca38: 0x27bdff60
    ctx->pc = 0x29ca38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29ca3c: 0xffbf0080
    ctx->pc = 0x29ca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29ca40: 0xffb30070
    ctx->pc = 0x29ca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x29ca44: 0xffb20060
    ctx->pc = 0x29ca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x29ca48: 0xffb10050
    ctx->pc = 0x29ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x29ca4c: 0xffb00040
    ctx->pc = 0x29ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29ca50: 0xe7b50098
    ctx->pc = 0x29ca50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29ca54: 0xe7b40090
    ctx->pc = 0x29ca54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29ca58: 0x80802d
    ctx->pc = 0x29ca58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca5c: 0x3c020034
    ctx->pc = 0x29ca5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29ca60: 0x8c42e7c8
    ctx->pc = 0x29ca60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29ca64: 0xc4a1002c
    ctx->pc = 0x29ca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ca68: 0xc44000bc
    ctx->pc = 0x29ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ca6c: 0x46000d42
    ctx->pc = 0x29ca6cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29ca70: 0xc4b4000c
    ctx->pc = 0x29ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ca74: 0x902d
    ctx->pc = 0x29ca74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca78: 0x24a40020
    ctx->pc = 0x29ca78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 32));
    // 0x29ca7c: 0x27a50020
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29ca80: 0xc0b585c
    ctx->pc = 0x29CA80u;
    SET_GPR_U32(ctx, 31, 0x29CA88u);
    ctx->pc = 0x29CA84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 992));
    ctx->pc = 0x2D6170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat3_0x2d6170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CA88u; }
    }
    if (ctx->pc != 0x29CA88u) { return; }
    ctx->pc = 0x29CA88u;
    // 0x29ca88: 0xc6000470
    ctx->pc = 0x29ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ca8c: 0xc7a30020
    ctx->pc = 0x29ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ca90: 0x46030000
    ctx->pc = 0x29ca90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29ca94: 0xe7a00010
    ctx->pc = 0x29ca94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29ca98: 0xc6000474
    ctx->pc = 0x29ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ca9c: 0xc7a20024
    ctx->pc = 0x29ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29caa0: 0x46020000
    ctx->pc = 0x29caa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29caa4: 0xe7a00014
    ctx->pc = 0x29caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29caa8: 0xc6000478
    ctx->pc = 0x29caa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29caac: 0xc7a10028
    ctx->pc = 0x29caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cab0: 0x46010000
    ctx->pc = 0x29cab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cab4: 0xe7a00018
    ctx->pc = 0x29cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29cab8: 0xc6000410
    ctx->pc = 0x29cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cabc: 0x46030000
    ctx->pc = 0x29cabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29cac0: 0xe7a00000
    ctx->pc = 0x29cac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29cac4: 0xc6000414
    ctx->pc = 0x29cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cac8: 0x46020000
    ctx->pc = 0x29cac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29cacc: 0xe7a00004
    ctx->pc = 0x29caccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29cad0: 0xc6000418
    ctx->pc = 0x29cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cad4: 0x46010000
    ctx->pc = 0x29cad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29cad8: 0xe7a00008
    ctx->pc = 0x29cad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29cadc: 0x3a0202d
    ctx->pc = 0x29cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cae0: 0xc0a00b0
    ctx->pc = 0x29CAE0u;
    SET_GPR_U32(ctx, 31, 0x29CAE8u);
    ctx->pc = 0x29CAE4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2802C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyGrid_0x2802c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAE8u; }
    }
    if (ctx->pc != 0x29CAE8u) { return; }
    ctx->pc = 0x29CAE8u;
    // 0x29cae8: 0x3c020033
    ctx->pc = 0x29cae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x29caec: 0x10000041
    ctx->pc = 0x29CAECu;
    {
        const bool branch_taken_0x29caec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CAF0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294959056));
        if (branch_taken_0x29caec) {
            ctx->pc = 0x29CBF4u;
            goto label_29cbf4;
        }
    }
    ctx->pc = 0x29CAF4u;
    // 0x29caf4: 0x0
    ctx->pc = 0x29caf4u;
    // NOP
label_29caf8:
    // 0x29caf8: 0x622018
    ctx->pc = 0x29caf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29cafc: 0x938021
    ctx->pc = 0x29cafcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x29cb00: 0x8e0300c8
    ctx->pc = 0x29cb00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x29cb04: 0x24020001
    ctx->pc = 0x29cb04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cb08: 0x10620008
    ctx->pc = 0x29CB08u;
    {
        const bool branch_taken_0x29cb08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29CB0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x29cb08) {
            ctx->pc = 0x29CB2Cu;
            goto label_29cb2c;
        }
    }
    ctx->pc = 0x29CB10u;
    // 0x29cb10: 0x10620006
    ctx->pc = 0x29CB10u;
    {
        const bool branch_taken_0x29cb10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29CB14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x29cb10) {
            ctx->pc = 0x29CB2Cu;
            goto label_29cb2c;
        }
    }
    ctx->pc = 0x29CB18u;
    // 0x29cb18: 0x14620036
    ctx->pc = 0x29CB18u;
    {
        const bool branch_taken_0x29cb18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x29CB1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x29cb18) {
            ctx->pc = 0x29CBF4u;
            goto label_29cbf4;
        }
    }
    ctx->pc = 0x29CB20u;
    // 0x29cb20: 0x8c4207f8
    ctx->pc = 0x29cb20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x29cb24: 0x10400033
    ctx->pc = 0x29CB24u;
    {
        const bool branch_taken_0x29cb24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29cb24) {
            ctx->pc = 0x29CBF4u;
            goto label_29cbf4;
        }
    }
    ctx->pc = 0x29CB2Cu;
label_29cb2c:
    // 0x29cb2c: 0x8e030000
    ctx->pc = 0x29cb2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29cb30: 0x2402001f
    ctx->pc = 0x29cb30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x29cb34: 0x1062002f
    ctx->pc = 0x29CB34u;
    {
        const bool branch_taken_0x29cb34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x29cb34) {
            ctx->pc = 0x29CBF4u;
            goto label_29cbf4;
        }
    }
    ctx->pc = 0x29CB3Cu;
    // 0x29cb3c: 0x44800000
    ctx->pc = 0x29cb3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29cb40: 0x46150034
    ctx->pc = 0x29cb40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cb44: 0x0
    ctx->pc = 0x29cb44u;
    // NOP
    // 0x29cb48: 0x45000006
    ctx->pc = 0x29CB48u;
    {
        const bool branch_taken_0x29cb48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CB4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29cb48) {
            ctx->pc = 0x29CB64u;
            goto label_29cb64;
        }
    }
    ctx->pc = 0x29CB50u;
    // 0x29cb50: 0xc441ffa4
    ctx->pc = 0x29cb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cb54: 0xc60002c8
    ctx->pc = 0x29cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cb58: 0x46000834
    ctx->pc = 0x29cb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cb5c: 0x45010025
    ctx->pc = 0x29CB5Cu;
    {
        const bool branch_taken_0x29cb5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cb5c) {
            ctx->pc = 0x29CBF4u;
            goto label_29cbf4;
        }
    }
    ctx->pc = 0x29CB64u;
label_29cb64:
    // 0x29cb64: 0x27b10020
    ctx->pc = 0x29cb64u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29cb68: 0xc60c024c
    ctx->pc = 0x29cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29cb6c: 0xc60d0250
    ctx->pc = 0x29cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29cb70: 0x26040060
    ctx->pc = 0x29cb70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
    // 0x29cb74: 0x3a0282d
    ctx->pc = 0x29cb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb78: 0x3a0302d
    ctx->pc = 0x29cb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb7c: 0x220382d
    ctx->pc = 0x29cb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb80: 0x460ca300
    ctx->pc = 0x29cb80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x29cb84: 0x460da340
    ctx->pc = 0x29cb84u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
    // 0x29cb88: 0xc0a4202
    ctx->pc = 0x29CB88u;
    SET_GPR_U32(ctx, 31, 0x29CB90u);
    ctx->pc = 0x29CB8Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB90u; }
    }
    if (ctx->pc != 0x29CB90u) { return; }
    ctx->pc = 0x29CB90u;
    // 0x29cb90: 0x10400018
    ctx->pc = 0x29CB90u;
    {
        const bool branch_taken_0x29cb90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CB94u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x29cb90) {
            ctx->pc = 0x29CBF4u;
            goto label_29cbf4;
        }
    }
    ctx->pc = 0x29CB98u;
    // 0x29cb98: 0xc7a00010
    ctx->pc = 0x29cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cb9c: 0x460018c1
    ctx->pc = 0x29cb9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29cba0: 0xc7a20004
    ctx->pc = 0x29cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29cba4: 0xc7a00014
    ctx->pc = 0x29cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cba8: 0x46001081
    ctx->pc = 0x29cba8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29cbac: 0xc7a10008
    ctx->pc = 0x29cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cbb0: 0xc7a00018
    ctx->pc = 0x29cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cbb4: 0x46000841
    ctx->pc = 0x29cbb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29cbb8: 0x460318c0
    ctx->pc = 0x29cbb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x29cbbc: 0xe7a30030
    ctx->pc = 0x29cbbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29cbc0: 0x46021080
    ctx->pc = 0x29cbc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x29cbc4: 0xe7a20034
    ctx->pc = 0x29cbc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29cbc8: 0x46010840
    ctx->pc = 0x29cbc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29cbcc: 0xe7a10038
    ctx->pc = 0x29cbccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29cbd0: 0x200202d
    ctx->pc = 0x29cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbd4: 0x4600ab06
    ctx->pc = 0x29cbd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29cbd8: 0x2405ffff
    ctx->pc = 0x29cbd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29cbdc: 0x302d
    ctx->pc = 0x29cbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbe0: 0x220382d
    ctx->pc = 0x29cbe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbe4: 0x27a80030
    ctx->pc = 0x29cbe4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 48));
    // 0x29cbe8: 0xc08e7bc
    ctx->pc = 0x29CBE8u;
    SET_GPR_U32(ctx, 31, 0x29CBF0u);
    ctx->pc = 0x29CBECu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBF0u; }
    }
    if (ctx->pc != 0x29CBF0u) { return; }
    ctx->pc = 0x29CBF0u;
    // 0x29cbf0: 0x26520001
    ctx->pc = 0x29cbf0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29cbf4:
    // 0x29cbf4: 0xc0a00ea
    ctx->pc = 0x29CBF4u;
    SET_GPR_U32(ctx, 31, 0x29CBFCu);
    ctx->pc = 0x2803A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridEnemy_0x2803a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBFCu; }
    }
    if (ctx->pc != 0x29CBFCu) { return; }
    ctx->pc = 0x29CBFCu;
    // 0x29cbfc: 0x40182d
    ctx->pc = 0x29cbfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc00: 0x461ffbd
    ctx->pc = 0x29CC00u;
    {
        const bool branch_taken_0x29cc00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29CC04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x29cc00) {
            ctx->pc = 0x29CAF8u;
            goto label_29caf8;
        }
    }
    ctx->pc = 0x29CC08u;
    // 0x29cc08: 0x240102d
    ctx->pc = 0x29cc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc0c: 0xdfbf0080
    ctx->pc = 0x29cc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29cc10: 0xdfb30070
    ctx->pc = 0x29cc10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29cc14: 0xdfb20060
    ctx->pc = 0x29cc14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29cc18: 0xdfb10050
    ctx->pc = 0x29cc18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cc1c: 0xdfb00040
    ctx->pc = 0x29cc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cc20: 0xc7b50098
    ctx->pc = 0x29cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29cc24: 0xc7b40090
    ctx->pc = 0x29cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29cc28: 0x3e00008
    ctx->pc = 0x29CC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29CAF8u: goto label_29caf8;
            case 0x29CB2Cu: goto label_29cb2c;
            case 0x29CB64u: goto label_29cb64;
            case 0x29CBF4u: goto label_29cbf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29CC30u;
}
