#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerNewFloor
// Address: 0x245a00 - 0x245bb8
void PlayerNewFloor_0x245a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x245a00u;

    // 0x245a00: 0x27bdff90
    ctx->pc = 0x245a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x245a04: 0xffbf0050
    ctx->pc = 0x245a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x245a08: 0xffb30040
    ctx->pc = 0x245a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x245a0c: 0xffb20030
    ctx->pc = 0x245a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x245a10: 0xffb10020
    ctx->pc = 0x245a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x245a14: 0xffb00010
    ctx->pc = 0x245a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x245a18: 0xe7b40060
    ctx->pc = 0x245a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x245a1c: 0x80902d
    ctx->pc = 0x245a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a20: 0xa0882d
    ctx->pc = 0x245a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a24: 0x8e23089c
    ctx->pc = 0x245a24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2204)));
    // 0x245a28: 0x10600010
    ctx->pc = 0x245A28u;
    {
        const bool branch_taken_0x245a28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x245A2Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x245a28) {
            ctx->pc = 0x245A6Cu;
            goto label_245a6c;
        }
    }
    ctx->pc = 0x245A30u;
    // 0x245a30: 0x8c640010
    ctx->pc = 0x245a30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x245a34: 0x3c020c00
    ctx->pc = 0x245a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3072 << 16));
    // 0x245a38: 0x821024
    ctx->pc = 0x245a38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x245a3c: 0x1040000b
    ctx->pc = 0x245A3Cu;
    {
        const bool branch_taken_0x245a3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x245A40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x245a3c) {
            ctx->pc = 0x245A6Cu;
            goto label_245a6c;
        }
    }
    ctx->pc = 0x245A44u;
    // 0x245a44: 0x821024
    ctx->pc = 0x245a44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x245a48: 0x50400009
    ctx->pc = 0x245A48u;
    {
        const bool branch_taken_0x245a48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x245a48) {
            ctx->pc = 0x245A4Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x245A70u;
            goto label_245a70;
        }
    }
    ctx->pc = 0x245A50u;
    // 0x245a50: 0x8e420044
    ctx->pc = 0x245a50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x245a54: 0x10620005
    ctx->pc = 0x245A54u;
    {
        const bool branch_taken_0x245a54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x245A58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x245a54) {
            ctx->pc = 0x245A6Cu;
            goto label_245a6c;
        }
    }
    ctx->pc = 0x245A5Cu;
    // 0x245a5c: 0xae000000
    ctx->pc = 0x245a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x245a60: 0xae000004
    ctx->pc = 0x245a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x245a64: 0x1000004c
    ctx->pc = 0x245A64u;
    {
        const bool branch_taken_0x245a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245A68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x245a64) {
            ctx->pc = 0x245B98u;
            goto label_245b98;
        }
    }
    ctx->pc = 0x245A6Cu;
label_245a6c:
    // 0x245a6c: 0x240202d
    ctx->pc = 0x245a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245a70:
    // 0x245a70: 0xc0b549e
    ctx->pc = 0x245A70u;
    SET_GPR_U32(ctx, 31, 0x245A78u);
    ctx->pc = 0x245A74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A78u; }
    }
    if (ctx->pc != 0x245A78u) { return; }
    ctx->pc = 0x245A78u;
    // 0x245a78: 0x220202d
    ctx->pc = 0x245a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a7c: 0x8e450044
    ctx->pc = 0x245a7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x245a80: 0xc091646
    ctx->pc = 0x245A80u;
    SET_GPR_U32(ctx, 31, 0x245A88u);
    ctx->pc = 0x245A84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x245918u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCheckMovingFloor_0x245918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A88u; }
    }
    if (ctx->pc != 0x245A88u) { return; }
    ctx->pc = 0x245A88u;
    // 0x245a88: 0x40982d
    ctx->pc = 0x245a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a8c: 0x8e420044
    ctx->pc = 0x245a8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x245a90: 0x50400026
    ctx->pc = 0x245A90u;
    {
        const bool branch_taken_0x245a90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x245a90) {
            ctx->pc = 0x245A94u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->pc = 0x245B2Cu;
            goto label_245b2c;
        }
    }
    ctx->pc = 0x245A98u;
    // 0x245a98: 0x8c420010
    ctx->pc = 0x245a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x245a9c: 0x30420008
    ctx->pc = 0x245a9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x245aa0: 0x50400022
    ctx->pc = 0x245AA0u;
    {
        const bool branch_taken_0x245aa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x245aa0) {
            ctx->pc = 0x245AA4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->pc = 0x245B2Cu;
            goto label_245b2c;
        }
    }
    ctx->pc = 0x245AA8u;
    // 0x245aa8: 0xc60c0000
    ctx->pc = 0x245aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245aac: 0xc0b5c34
    ctx->pc = 0x245AACu;
    SET_GPR_U32(ctx, 31, 0x245AB4u);
    ctx->pc = 0x245AB0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245AB4u; }
    }
    if (ctx->pc != 0x245AB4u) { return; }
    ctx->pc = 0x245AB4u;
    // 0x245ab4: 0x46000506
    ctx->pc = 0x245ab4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x245ab8: 0x4600a306
    ctx->pc = 0x245ab8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x245abc: 0xc0b5c34
    ctx->pc = 0x245ABCu;
    SET_GPR_U32(ctx, 31, 0x245AC4u);
    ctx->pc = 0x245AC0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245AC4u; }
    }
    if (ctx->pc != 0x245AC4u) { return; }
    ctx->pc = 0x245AC4u;
    // 0x245ac4: 0x3c013c23
    ctx->pc = 0x245ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x245ac8: 0x3421d70a
    ctx->pc = 0x245ac8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x245acc: 0x44810800
    ctx->pc = 0x245accu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x245ad0: 0x46140834
    ctx->pc = 0x245ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245ad4: 0x0
    ctx->pc = 0x245ad4u;
    // NOP
    // 0x245ad8: 0x45000029
    ctx->pc = 0x245AD8u;
    {
        const bool branch_taken_0x245ad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245ADCu;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x245ad8) {
            ctx->pc = 0x245B80u;
            goto label_245b80;
        }
    }
    ctx->pc = 0x245AE0u;
    // 0x245ae0: 0x460c0834
    ctx->pc = 0x245ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245ae4: 0x0
    ctx->pc = 0x245ae4u;
    // NOP
    // 0x245ae8: 0x45020026
    ctx->pc = 0x245AE8u;
    {
        const bool branch_taken_0x245ae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245ae8) {
            ctx->pc = 0x245AECu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->pc = 0x245B84u;
            goto label_245b84;
        }
    }
    ctx->pc = 0x245AF0u;
    // 0x245af0: 0x8e220898
    ctx->pc = 0x245af0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x245af4: 0x30420008
    ctx->pc = 0x245af4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x245af8: 0x10400007
    ctx->pc = 0x245AF8u;
    {
        const bool branch_taken_0x245af8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x245AFCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x245af8) {
            ctx->pc = 0x245B18u;
            goto label_245b18;
        }
    }
    ctx->pc = 0x245B00u;
    // 0x245b00: 0x46000005
    ctx->pc = 0x245b00u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x245b04: 0x46000834
    ctx->pc = 0x245b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245b08: 0x0
    ctx->pc = 0x245b08u;
    // NOP
    // 0x245b0c: 0x4502001d
    ctx->pc = 0x245B0Cu;
    {
        const bool branch_taken_0x245b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245b0c) {
            ctx->pc = 0x245B10u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->pc = 0x245B84u;
            goto label_245b84;
        }
    }
    ctx->pc = 0x245B14u;
    // 0x245b14: 0xc6000004
    ctx->pc = 0x245b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245b18:
    // 0x245b18: 0x0
    ctx->pc = 0x245b18u;
    // NOP
    // 0x245b1c: 0x0
    ctx->pc = 0x245b1cu;
    // NOP
    // 0x245b20: 0x460c0003
    ctx->pc = 0x245b20u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x245b24: 0x10000016
    ctx->pc = 0x245B24u;
    {
        const bool branch_taken_0x245b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245B28u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2196), bits); }
        if (branch_taken_0x245b24) {
            ctx->pc = 0x245B80u;
            goto label_245b80;
        }
    }
    ctx->pc = 0x245B2Cu;
label_245b2c:
    // 0x245b2c: 0xc6230048
    ctx->pc = 0x245b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x245b30: 0x46032902
    ctx->pc = 0x245b30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x245b34: 0xc6460018
    ctx->pc = 0x245b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x245b38: 0xc6200044
    ctx->pc = 0x245b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245b3c: 0x46003042
    ctx->pc = 0x245b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x245b40: 0x46012101
    ctx->pc = 0x245b40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x245b44: 0xe7a40000
    ctx->pc = 0x245b44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x245b48: 0xc6270040
    ctx->pc = 0x245b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x245b4c: 0x46073042
    ctx->pc = 0x245b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x245b50: 0xc6420010
    ctx->pc = 0x245b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x245b54: 0x460310c2
    ctx->pc = 0x245b54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x245b58: 0x46030841
    ctx->pc = 0x245b58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x245b5c: 0xe7a10004
    ctx->pc = 0x245b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x245b60: 0x46001002
    ctx->pc = 0x245b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x245b64: 0x46072942
    ctx->pc = 0x245b64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x245b68: 0x46050001
    ctx->pc = 0x245b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x245b6c: 0xe7a00008
    ctx->pc = 0x245b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x245b70: 0x46020002
    ctx->pc = 0x245b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x245b74: 0x46062102
    ctx->pc = 0x245b74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x245b78: 0x46040001
    ctx->pc = 0x245b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x245b7c: 0xe6200894
    ctx->pc = 0x245b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2196), bits); }
label_245b80:
    // 0x245b80: 0x8e440044
    ctx->pc = 0x245b80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_245b84:
    // 0x245b84: 0x50800002
    ctx->pc = 0x245B84u;
    {
        const bool branch_taken_0x245b84 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x245b84) {
            ctx->pc = 0x245B88u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x245B90u;
            goto label_245b90;
        }
    }
    ctx->pc = 0x245B8Cu;
    // 0x245b8c: 0x8c840010
    ctx->pc = 0x245b8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_245b90:
    // 0x245b90: 0xae240898
    ctx->pc = 0x245b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2200), GPR_U32(ctx, 4));
    // 0x245b94: 0x260102d
    ctx->pc = 0x245b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245b98:
    // 0x245b98: 0xdfbf0050
    ctx->pc = 0x245b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245b9c: 0xdfb30040
    ctx->pc = 0x245b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245ba0: 0xdfb20030
    ctx->pc = 0x245ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245ba4: 0xdfb10020
    ctx->pc = 0x245ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245ba8: 0xdfb00010
    ctx->pc = 0x245ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245bac: 0xc7b40060
    ctx->pc = 0x245bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x245bb0: 0x3e00008
    ctx->pc = 0x245BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245BB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245A6Cu: goto label_245a6c;
            case 0x245A70u: goto label_245a70;
            case 0x245B18u: goto label_245b18;
            case 0x245B2Cu: goto label_245b2c;
            case 0x245B80u: goto label_245b80;
            case 0x245B84u: goto label_245b84;
            case 0x245B90u: goto label_245b90;
            case 0x245B98u: goto label_245b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245BB8u;
}
