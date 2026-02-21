#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxNodeUpdate
// Address: 0x27fa30 - 0x27fbcc
void DmgFxNodeUpdate_0x27fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fa30u;

    // 0x27fa30: 0x27bdffc0
    ctx->pc = 0x27fa30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27fa34: 0xffbf0020
    ctx->pc = 0x27fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27fa38: 0xffb00010
    ctx->pc = 0x27fa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27fa3c: 0xe7b50038
    ctx->pc = 0x27fa3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27fa40: 0xe7b40030
    ctx->pc = 0x27fa40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27fa44: 0x80802d
    ctx->pc = 0x27fa44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa48: 0x46007546
    ctx->pc = 0x27fa48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x27fa4c: 0x12000059
    ctx->pc = 0x27FA4Cu;
    {
        const bool branch_taken_0x27fa4c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FA50u;
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x27fa4c) {
            ctx->pc = 0x27FBB4u;
            goto label_27fbb4;
        }
    }
    ctx->pc = 0x27FA54u;
    // 0x27fa54: 0x3c013c23
    ctx->pc = 0x27fa54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27fa58: 0x3421d70a
    ctx->pc = 0x27fa58u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27fa5c: 0x44810000
    ctx->pc = 0x27fa5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27fa60: 0x46006302
    ctx->pc = 0x27fa60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27fa64: 0x46006b42
    ctx->pc = 0x27fa64u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x27fa68: 0xe60c0040
    ctx->pc = 0x27fa68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x27fa6c: 0xe60c0044
    ctx->pc = 0x27fa6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x27fa70: 0x10a0004c
    ctx->pc = 0x27FA70u;
    {
        const bool branch_taken_0x27fa70 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FA74u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        if (branch_taken_0x27fa70) {
            ctx->pc = 0x27FBA4u;
            goto label_27fba4;
        }
    }
    ctx->pc = 0x27FA78u;
    // 0x27fa78: 0x3c04003a
    ctx->pc = 0x27fa78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x27fa7c: 0x24842550
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x27fa80: 0xc0b549e
    ctx->pc = 0x27FA80u;
    SET_GPR_U32(ctx, 31, 0x27FA88u);
    ctx->pc = 0x27FA84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA88u; }
    }
    if (ctx->pc != 0x27FA88u) { return; }
    ctx->pc = 0x27FA88u;
    // 0x27fa88: 0x4600a306
    ctx->pc = 0x27fa88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27fa8c: 0xc0b55ae
    ctx->pc = 0x27FA8Cu;
    SET_GPR_U32(ctx, 31, 0x27FA94u);
    ctx->pc = 0x27FA90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D56B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WYawMat3_0x2d56b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA94u; }
    }
    if (ctx->pc != 0x27FA94u) { return; }
    ctx->pc = 0x27FA94u;
    // 0x27fa94: 0x4600ab06
    ctx->pc = 0x27fa94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27fa98: 0xc0b55da
    ctx->pc = 0x27FA98u;
    SET_GPR_U32(ctx, 31, 0x27FAA0u);
    ctx->pc = 0x27FA9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5768u;
    {
        const uint32_t __entryPc = ctx->pc;
        WPitchMat3_0x2d5768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAA0u; }
    }
    if (ctx->pc != 0x27FAA0u) { return; }
    ctx->pc = 0x27FAA0u;
    // 0x27faa0: 0x3c013f80
    ctx->pc = 0x27faa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27faa4: 0x44810000
    ctx->pc = 0x27faa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27faa8: 0xe7a00000
    ctx->pc = 0x27faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27faac: 0xe7a00004
    ctx->pc = 0x27faacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27fab0: 0xe7a00008
    ctx->pc = 0x27fab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27fab4: 0x8e030074
    ctx->pc = 0x27fab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x27fab8: 0x10600015
    ctx->pc = 0x27FAB8u;
    {
        const bool branch_taken_0x27fab8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FABCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x27fab8) {
            ctx->pc = 0x27FB10u;
            goto label_27fb10;
        }
    }
    ctx->pc = 0x27FAC0u;
    // 0x27fac0: 0x8c620060
    ctx->pc = 0x27fac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x27fac4: 0x0
    ctx->pc = 0x27fac4u;
    // NOP
label_27fac8:
    // 0x27fac8: 0x30420008
    ctx->pc = 0x27fac8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x27facc: 0x1040000c
    ctx->pc = 0x27FACCu;
    {
        const bool branch_taken_0x27facc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FAD0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x27facc) {
            ctx->pc = 0x27FB00u;
            goto label_27fb00;
        }
    }
    ctx->pc = 0x27FAD4u;
    // 0x27fad4: 0xc4610040
    ctx->pc = 0x27fad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fad8: 0x46010002
    ctx->pc = 0x27fad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27fadc: 0xe7a00000
    ctx->pc = 0x27fadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27fae0: 0xc7a00004
    ctx->pc = 0x27fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fae4: 0xc4610044
    ctx->pc = 0x27fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fae8: 0x46010002
    ctx->pc = 0x27fae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27faec: 0xe7a00004
    ctx->pc = 0x27faecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27faf0: 0xc7a00008
    ctx->pc = 0x27faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27faf4: 0xc4610048
    ctx->pc = 0x27faf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27faf8: 0x46010002
    ctx->pc = 0x27faf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27fafc: 0xe7a00008
    ctx->pc = 0x27fafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27fb00:
    // 0x27fb00: 0x8c630074
    ctx->pc = 0x27fb00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x27fb04: 0x5460fff0
    ctx->pc = 0x27FB04u;
    {
        const bool branch_taken_0x27fb04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x27fb04) {
            ctx->pc = 0x27FB08u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
            ctx->pc = 0x27FAC8u;
            goto label_27fac8;
        }
    }
    ctx->pc = 0x27FB0Cu;
    // 0x27fb0c: 0xc7a10000
    ctx->pc = 0x27fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27fb10:
    // 0x27fb10: 0x44800000
    ctx->pc = 0x27fb10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27fb14: 0x46000832
    ctx->pc = 0x27fb14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb18: 0x0
    ctx->pc = 0x27fb18u;
    // NOP
    // 0x27fb1c: 0x45030008
    ctx->pc = 0x27FB1Cu;
    {
        const bool branch_taken_0x27fb1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fb1c) {
            ctx->pc = 0x27FB20u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27FB40u;
            goto label_27fb40;
        }
    }
    ctx->pc = 0x27FB24u;
    // 0x27fb24: 0xc6000040
    ctx->pc = 0x27fb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb28: 0x0
    ctx->pc = 0x27fb28u;
    // NOP
    // 0x27fb2c: 0x0
    ctx->pc = 0x27fb2cu;
    // NOP
    // 0x27fb30: 0x46010003
    ctx->pc = 0x27fb30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27fb34: 0xe6000040
    ctx->pc = 0x27fb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x27fb38: 0xc7a10004
    ctx->pc = 0x27fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fb3c: 0x44800000
    ctx->pc = 0x27fb3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_27fb40:
    // 0x27fb40: 0x46000832
    ctx->pc = 0x27fb40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb44: 0x0
    ctx->pc = 0x27fb44u;
    // NOP
    // 0x27fb48: 0x45030007
    ctx->pc = 0x27FB48u;
    {
        const bool branch_taken_0x27fb48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fb48) {
            ctx->pc = 0x27FB4Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27FB68u;
            goto label_27fb68;
        }
    }
    ctx->pc = 0x27FB50u;
    // 0x27fb50: 0xc6000044
    ctx->pc = 0x27fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb54: 0x0
    ctx->pc = 0x27fb54u;
    // NOP
    // 0x27fb58: 0x0
    ctx->pc = 0x27fb58u;
    // NOP
    // 0x27fb5c: 0x46010003
    ctx->pc = 0x27fb5cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27fb60: 0xe6000044
    ctx->pc = 0x27fb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x27fb64: 0xc7a10008
    ctx->pc = 0x27fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27fb68:
    // 0x27fb68: 0x44800000
    ctx->pc = 0x27fb68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27fb6c: 0x46000832
    ctx->pc = 0x27fb6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb70: 0x0
    ctx->pc = 0x27fb70u;
    // NOP
    // 0x27fb74: 0x45010006
    ctx->pc = 0x27FB74u;
    {
        const bool branch_taken_0x27fb74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FB78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27fb74) {
            ctx->pc = 0x27FB90u;
            goto label_27fb90;
        }
    }
    ctx->pc = 0x27FB7Cu;
    // 0x27fb7c: 0xc6000048
    ctx->pc = 0x27fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb80: 0x0
    ctx->pc = 0x27fb80u;
    // NOP
    // 0x27fb84: 0x0
    ctx->pc = 0x27fb84u;
    // NOP
    // 0x27fb88: 0x46010003
    ctx->pc = 0x27fb88u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27fb8c: 0xe6000048
    ctx->pc = 0x27fb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_27fb90:
    // 0x27fb90: 0x24050001
    ctx->pc = 0x27fb90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fb94: 0xc0b41e4
    ctx->pc = 0x27FB94u;
    SET_GPR_U32(ctx, 31, 0x27FB9Cu);
    ctx->pc = 0x27FB98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB9Cu; }
    }
    if (ctx->pc != 0x27FB9Cu) { return; }
    ctx->pc = 0x27FB9Cu;
    // 0x27fb9c: 0x10000006
    ctx->pc = 0x27FB9Cu;
    {
        const bool branch_taken_0x27fb9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FBA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x27fb9c) {
            ctx->pc = 0x27FBB8u;
            goto label_27fbb8;
        }
    }
    ctx->pc = 0x27FBA4u;
label_27fba4:
    // 0x27fba4: 0x200202d
    ctx->pc = 0x27fba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fba8: 0x24050001
    ctx->pc = 0x27fba8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fbac: 0xc0b41b8
    ctx->pc = 0x27FBACu;
    SET_GPR_U32(ctx, 31, 0x27FBB4u);
    ctx->pc = 0x27FBB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBB4u; }
    }
    if (ctx->pc != 0x27FBB4u) { return; }
    ctx->pc = 0x27FBB4u;
label_27fbb4:
    // 0x27fbb4: 0xdfbf0020
    ctx->pc = 0x27fbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27fbb8:
    // 0x27fbb8: 0xdfb00010
    ctx->pc = 0x27fbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fbbc: 0xc7b50038
    ctx->pc = 0x27fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27fbc0: 0xc7b40030
    ctx->pc = 0x27fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27fbc4: 0x3e00008
    ctx->pc = 0x27FBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FBC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FAC8u: goto label_27fac8;
            case 0x27FB00u: goto label_27fb00;
            case 0x27FB10u: goto label_27fb10;
            case 0x27FB40u: goto label_27fb40;
            case 0x27FB68u: goto label_27fb68;
            case 0x27FB90u: goto label_27fb90;
            case 0x27FBA4u: goto label_27fba4;
            case 0x27FBB4u: goto label_27fbb4;
            case 0x27FBB8u: goto label_27fbb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27FBCCu;
}
