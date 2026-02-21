#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setupNewPMode
// Address: 0x2cbcc8 - 0x2cc7b8
void setupNewPMode_0x2cbcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cbcc8u;

label_2cbcc8:
    // 0x2cbcc8: 0x27bdff00
    ctx->pc = 0x2cbcc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_2cbccc:
    // 0x2cbccc: 0xffbf00a0
    ctx->pc = 0x2cbcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2cbcd0:
    // 0x2cbcd0: 0xffbe0090
    ctx->pc = 0x2cbcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2cbcd4:
    // 0x2cbcd4: 0xffb70080
    ctx->pc = 0x2cbcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2cbcd8:
    // 0x2cbcd8: 0xffb60070
    ctx->pc = 0x2cbcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2cbcdc:
    // 0x2cbcdc: 0xffb50060
    ctx->pc = 0x2cbcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2cbce0:
    // 0x2cbce0: 0xffb40050
    ctx->pc = 0x2cbce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2cbce4:
    // 0x2cbce4: 0xffb30040
    ctx->pc = 0x2cbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2cbce8:
    // 0x2cbce8: 0xffb20030
    ctx->pc = 0x2cbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2cbcec:
    // 0x2cbcec: 0xffb10020
    ctx->pc = 0x2cbcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2cbcf0:
    // 0x2cbcf0: 0xffb00010
    ctx->pc = 0x2cbcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2cbcf4:
    // 0x2cbcf4: 0xe7bd00f8
    ctx->pc = 0x2cbcf4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2cbcf8:
    // 0x2cbcf8: 0xe7bc00f0
    ctx->pc = 0x2cbcf8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2cbcfc:
    // 0x2cbcfc: 0xe7bb00e8
    ctx->pc = 0x2cbcfcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2cbd00:
    // 0x2cbd00: 0xe7ba00e0
    ctx->pc = 0x2cbd00u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2cbd04:
    // 0x2cbd04: 0xe7b900d8
    ctx->pc = 0x2cbd04u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2cbd08:
    // 0x2cbd08: 0xe7b800d0
    ctx->pc = 0x2cbd08u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2cbd0c:
    // 0x2cbd0c: 0xe7b700c8
    ctx->pc = 0x2cbd0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2cbd10:
    // 0x2cbd10: 0xe7b600c0
    ctx->pc = 0x2cbd10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2cbd14:
    // 0x2cbd14: 0xe7b500b8
    ctx->pc = 0x2cbd14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2cbd18:
    // 0x2cbd18: 0xe7b400b0
    ctx->pc = 0x2cbd18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2cbd1c:
    // 0x2cbd1c: 0x80902d
    ctx->pc = 0x2cbd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd20:
    // 0x2cbd20: 0x44807800
    ctx->pc = 0x2cbd20u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 0);
label_2cbd24:
    // 0x2cbd24: 0x46007f46
    ctx->pc = 0x2cbd24u;
    ctx->f[29] = FPU_MOV_S(ctx->f[15]);
label_2cbd28:
    // 0x2cbd28: 0x9642002c
    ctx->pc = 0x2cbd28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2cbd2c:
    // 0x2cbd2c: 0x30420001
    ctx->pc = 0x2cbd2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2cbd30:
    // 0x2cbd30: 0x14400004
label_2cbd34:
    if (ctx->pc == 0x2CBD34u) {
        ctx->pc = 0x2CBD34u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x2CBD38u;
        goto label_2cbd38;
    }
    ctx->pc = 0x2CBD30u;
    {
        const bool branch_taken_0x2cbd30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CBD34u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
        if (branch_taken_0x2cbd30) {
            ctx->pc = 0x2CBD44u;
            goto label_2cbd44;
        }
    }
    ctx->pc = 0x2CBD38u;
label_2cbd38:
    // 0x2cbd38: 0x9642002e
    ctx->pc = 0x2cbd38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
label_2cbd3c:
    // 0x2cbd3c: 0x5040000c
label_2cbd40:
    if (ctx->pc == 0x2CBD40u) {
        ctx->pc = 0x2CBD40u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 58)));
        ctx->pc = 0x2CBD44u;
        goto label_2cbd44;
    }
    ctx->pc = 0x2CBD3Cu;
    {
        const bool branch_taken_0x2cbd3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cbd3c) {
            ctx->pc = 0x2CBD40u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 58)));
            ctx->pc = 0x2CBD70u;
            goto label_2cbd70;
        }
    }
    ctx->pc = 0x2CBD44u;
label_2cbd44:
    // 0x2cbd44: 0x9642002e
    ctx->pc = 0x2cbd44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
label_2cbd48:
    // 0x2cbd48: 0x144000e5
label_2cbd4c:
    if (ctx->pc == 0x2CBD4Cu) {
        ctx->pc = 0x2CBD4Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD50u;
        goto label_2cbd50;
    }
    ctx->pc = 0x2CBD48u;
    {
        const bool branch_taken_0x2cbd48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CBD4Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd48) {
            ctx->pc = 0x2CC0E0u;
            goto label_2cc0e0;
        }
    }
    ctx->pc = 0x2CBD50u;
label_2cbd50:
    // 0x2cbd50: 0xc64000d0
    ctx->pc = 0x2cbd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cbd54:
    // 0x2cbd54: 0x3c0141f0
    ctx->pc = 0x2cbd54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
label_2cbd58:
    // 0x2cbd58: 0x44810800
    ctx->pc = 0x2cbd58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2cbd5c:
    // 0x2cbd5c: 0x46010002
    ctx->pc = 0x2cbd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cbd60:
    // 0x2cbd60: 0x46000064
    ctx->pc = 0x2cbd60u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2cbd64:
    // 0x2cbd64: 0x44060800
    ctx->pc = 0x2cbd64u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
label_2cbd68:
    // 0x2cbd68: 0x100000de
label_2cbd6c:
    if (ctx->pc == 0x2CBD6Cu) {
        ctx->pc = 0x2CBD6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CBD70u;
        goto label_2cbd70;
    }
    ctx->pc = 0x2CBD68u;
    {
        const bool branch_taken_0x2cbd68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBD6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cbd68) {
            ctx->pc = 0x2CC0E4u;
            goto label_2cc0e4;
        }
    }
    ctx->pc = 0x2CBD70u;
label_2cbd70:
    // 0x2cbd70: 0x4482a000
    ctx->pc = 0x2cbd70u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
label_2cbd74:
    // 0x2cbd74: 0x4680a520
    ctx->pc = 0x2cbd74u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_2cbd78:
    // 0x2cbd78: 0x9642003c
    ctx->pc = 0x2cbd78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_2cbd7c:
    // 0x2cbd7c: 0x4482c000
    ctx->pc = 0x2cbd7cu;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 2);
label_2cbd80:
    // 0x2cbd80: 0x4680c620
    ctx->pc = 0x2cbd80u;
    ctx->f[24] = FPU_CVT_S_W(*(int32_t*)&ctx->f[24]);
label_2cbd84:
    // 0x2cbd84: 0x92420060
    ctx->pc = 0x2cbd84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_2cbd88:
    // 0x2cbd88: 0x44820800
    ctx->pc = 0x2cbd88u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2cbd8c:
    // 0x2cbd8c: 0x46800860
    ctx->pc = 0x2cbd8cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2cbd90:
    // 0x2cbd90: 0x92420061
    ctx->pc = 0x2cbd90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 97)));
label_2cbd94:
    // 0x2cbd94: 0x44820000
    ctx->pc = 0x2cbd94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2cbd98:
    // 0x2cbd98: 0x46800020
    ctx->pc = 0x2cbd98u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2cbd9c:
    // 0x2cbd9c: 0x46000840
    ctx->pc = 0x2cbd9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cbda0:
    // 0x2cbda0: 0x4618a3c0
    ctx->pc = 0x2cbda0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
label_2cbda4:
    // 0x2cbda4: 0xc65a00d0
    ctx->pc = 0x2cbda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2cbda8:
    // 0x2cbda8: 0xc65c00d8
    ctx->pc = 0x2cbda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2cbdac:
    // 0x2cbdac: 0xc65900d4
    ctx->pc = 0x2cbdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2cbdb0:
    // 0x2cbdb0: 0x460f0834
    ctx->pc = 0x2cbdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbdb4:
    // 0x2cbdb4: 0x0
    ctx->pc = 0x2cbdb4u;
    // NOP
label_2cbdb8:
    // 0x2cbdb8: 0x450000ac
label_2cbdbc:
    if (ctx->pc == 0x2CBDBCu) {
        ctx->pc = 0x2CBDBCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
        ctx->pc = 0x2CBDC0u;
        goto label_2cbdc0;
    }
    ctx->pc = 0x2CBDB8u;
    {
        const bool branch_taken_0x2cbdb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBDBCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
        if (branch_taken_0x2cbdb8) {
            ctx->pc = 0x2CC06Cu;
            goto label_2cc06c;
        }
    }
    ctx->pc = 0x2CBDC0u;
label_2cbdc0:
    // 0x2cbdc0: 0x44800000
    ctx->pc = 0x2cbdc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2cbdc4:
    // 0x2cbdc4: 0x4600c836
    ctx->pc = 0x2cbdc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbdc8:
    // 0x2cbdc8: 0x0
    ctx->pc = 0x2cbdc8u;
    // NOP
label_2cbdcc:
    // 0x2cbdcc: 0x4500001e
label_2cbdd0:
    if (ctx->pc == 0x2CBDD0u) {
        ctx->pc = 0x2CBDD0u;
        ctx->f[29] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2CBDD4u;
        goto label_2cbdd4;
    }
    ctx->pc = 0x2CBDCCu;
    {
        const bool branch_taken_0x2cbdcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBDD0u;
        ctx->f[29] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x2cbdcc) {
            ctx->pc = 0x2CBE48u;
            goto label_2cbe48;
        }
    }
    ctx->pc = 0x2CBDD4u;
label_2cbdd4:
    // 0x2cbdd4: 0x4600d834
    ctx->pc = 0x2cbdd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbdd8:
    // 0x2cbdd8: 0x4500001a
label_2cbddc:
    if (ctx->pc == 0x2CBDDCu) {
        ctx->pc = 0x2CBDE0u;
        goto label_2cbde0;
    }
    ctx->pc = 0x2CBDD8u;
    {
        const bool branch_taken_0x2cbdd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbdd8) {
            ctx->pc = 0x2CBE44u;
            goto label_2cbe44;
        }
    }
    ctx->pc = 0x2CBDE0u;
label_2cbde0:
    // 0x2cbde0: 0x461da034
    ctx->pc = 0x2cbde0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbde4:
    // 0x2cbde4: 0x0
    ctx->pc = 0x2cbde4u;
    // NOP
label_2cbde8:
    // 0x2cbde8: 0x45000011
label_2cbdec:
    if (ctx->pc == 0x2CBDECu) {
        ctx->pc = 0x2CBDECu;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x2CBDF0u;
        goto label_2cbdf0;
    }
    ctx->pc = 0x2CBDE8u;
    {
        const bool branch_taken_0x2cbde8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBDECu;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        if (branch_taken_0x2cbde8) {
            ctx->pc = 0x2CBE30u;
            goto label_2cbe30;
        }
    }
    ctx->pc = 0x2CBDF0u;
label_2cbdf0:
    // 0x2cbdf0: 0x4614edc1
    ctx->pc = 0x2cbdf0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[29], ctx->f[20]);
label_2cbdf4:
    // 0x2cbdf4: 0x4600cb46
    ctx->pc = 0x2cbdf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cbdf8:
    // 0x2cbdf8: 0x4600a386
    ctx->pc = 0x2cbdf8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cbdfc:
    // 0x2cbdfc: 0x4600a3c6
    ctx->pc = 0x2cbdfcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_2cbe00:
    // 0x2cbe00: 0xc0b2f1a
label_2cbe04:
    if (ctx->pc == 0x2CBE04u) {
        ctx->pc = 0x2CBE04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CBE08u;
        goto label_2cbe08;
    }
    ctx->pc = 0x2CBE00u;
    SET_GPR_U32(ctx, 31, 0x2CBE08u);
    ctx->pc = 0x2CBE04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE08u; }
    }
    if (ctx->pc != 0x2CBE08u) { return; }
    ctx->pc = 0x2CBE08u;
label_2cbe08:
    // 0x2cbe08: 0x46000586
    ctx->pc = 0x2cbe08u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cbe0c:
    // 0x2cbe0c: 0x4600e306
    ctx->pc = 0x2cbe0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cbe10:
    // 0x2cbe10: 0x4600db46
    ctx->pc = 0x2cbe10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cbe14:
    // 0x2cbe14: 0x4600c386
    ctx->pc = 0x2cbe14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cbe18:
    // 0x2cbe18: 0x4600bbc6
    ctx->pc = 0x2cbe18u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_2cbe1c:
    // 0x2cbe1c: 0xc0b2f1a
label_2cbe20:
    if (ctx->pc == 0x2CBE20u) {
        ctx->pc = 0x2CBE20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE24u;
        goto label_2cbe24;
    }
    ctx->pc = 0x2CBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBE24u);
    ctx->pc = 0x2CBE20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE24u; }
    }
    if (ctx->pc != 0x2CBE24u) { return; }
    ctx->pc = 0x2CBE24u;
label_2cbe24:
    // 0x2cbe24: 0x4614b3c2
    ctx->pc = 0x2cbe24u;
    ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_2cbe28:
    // 0x2cbe28: 0x100000a0
label_2cbe2c:
    if (ctx->pc == 0x2CBE2Cu) {
        ctx->pc = 0x2CBE2Cu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->pc = 0x2CBE30u;
        goto label_2cbe30;
    }
    ctx->pc = 0x2CBE28u;
    {
        const bool branch_taken_0x2cbe28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBE2Cu;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        if (branch_taken_0x2cbe28) {
            ctx->pc = 0x2CC0ACu;
            goto label_2cc0ac;
        }
    }
    ctx->pc = 0x2CBE30u;
label_2cbe30:
    // 0x2cbe30: 0x4600cb46
    ctx->pc = 0x2cbe30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cbe34:
    // 0x2cbe34: 0x4600a386
    ctx->pc = 0x2cbe34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cbe38:
    // 0x2cbe38: 0x4600ebc6
    ctx->pc = 0x2cbe38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[29]);
label_2cbe3c:
    // 0x2cbe3c: 0x10000087
label_2cbe40:
    if (ctx->pc == 0x2CBE40u) {
        ctx->pc = 0x2CBE40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE44u;
        goto label_2cbe44;
    }
    ctx->pc = 0x2CBE3Cu;
    {
        const bool branch_taken_0x2cbe3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBE40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cbe3c) {
            ctx->pc = 0x2CC05Cu;
            goto label_2cc05c;
        }
    }
    ctx->pc = 0x2CBE44u;
label_2cbe44:
    // 0x2cbe44: 0x4600c836
    ctx->pc = 0x2cbe44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbe48:
    // 0x2cbe48: 0x45000046
label_2cbe4c:
    if (ctx->pc == 0x2CBE4Cu) {
        ctx->pc = 0x2CBE50u;
        goto label_2cbe50;
    }
    ctx->pc = 0x2CBE48u;
    {
        const bool branch_taken_0x2cbe48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbe48) {
            ctx->pc = 0x2CBF64u;
            goto label_2cbf64;
        }
    }
    ctx->pc = 0x2CBE50u;
label_2cbe50:
    // 0x2cbe50: 0x461da034
    ctx->pc = 0x2cbe50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbe54:
    // 0x2cbe54: 0x0
    ctx->pc = 0x2cbe54u;
    // NOP
label_2cbe58:
    // 0x2cbe58: 0x45000016
label_2cbe5c:
    if (ctx->pc == 0x2CBE5Cu) {
        ctx->pc = 0x2CBE5Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x2CBE60u;
        goto label_2cbe60;
    }
    ctx->pc = 0x2CBE58u;
    {
        const bool branch_taken_0x2cbe58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBE5Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        if (branch_taken_0x2cbe58) {
            ctx->pc = 0x2CBEB4u;
            goto label_2cbeb4;
        }
    }
    ctx->pc = 0x2CBE60u;
label_2cbe60:
    // 0x2cbe60: 0x4614edc1
    ctx->pc = 0x2cbe60u;
    ctx->f[23] = FPU_SUB_S(ctx->f[29], ctx->f[20]);
label_2cbe64:
    // 0x2cbe64: 0x4600cb46
    ctx->pc = 0x2cbe64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cbe68:
    // 0x2cbe68: 0x4600a386
    ctx->pc = 0x2cbe68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cbe6c:
    // 0x2cbe6c: 0x4600a3c6
    ctx->pc = 0x2cbe6cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_2cbe70:
    // 0x2cbe70: 0xc0b2f1a
label_2cbe74:
    if (ctx->pc == 0x2CBE74u) {
        ctx->pc = 0x2CBE74u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CBE78u;
        goto label_2cbe78;
    }
    ctx->pc = 0x2CBE70u;
    SET_GPR_U32(ctx, 31, 0x2CBE78u);
    ctx->pc = 0x2CBE74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE78u; }
    }
    if (ctx->pc != 0x2CBE78u) { return; }
    ctx->pc = 0x2CBE78u;
label_2cbe78:
    // 0x2cbe78: 0x46000586
    ctx->pc = 0x2cbe78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cbe7c:
    // 0x2cbe7c: 0x4600e306
    ctx->pc = 0x2cbe7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cbe80:
    // 0x2cbe80: 0x4600db46
    ctx->pc = 0x2cbe80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cbe84:
    // 0x2cbe84: 0x4600c386
    ctx->pc = 0x2cbe84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cbe88:
    // 0x2cbe88: 0x4600bbc6
    ctx->pc = 0x2cbe88u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_2cbe8c:
    // 0x2cbe8c: 0xc0b2f1a
label_2cbe90:
    if (ctx->pc == 0x2CBE90u) {
        ctx->pc = 0x2CBE90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE94u;
        goto label_2cbe94;
    }
    ctx->pc = 0x2CBE8Cu;
    SET_GPR_U32(ctx, 31, 0x2CBE94u);
    ctx->pc = 0x2CBE90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBE94u; }
    }
    if (ctx->pc != 0x2CBE94u) { return; }
    ctx->pc = 0x2CBE94u;
label_2cbe94:
    // 0x2cbe94: 0x4614b3c2
    ctx->pc = 0x2cbe94u;
    ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_2cbe98:
    // 0x2cbe98: 0x46170002
    ctx->pc = 0x2cbe98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_2cbe9c:
    // 0x2cbe9c: 0x46007bc0
    ctx->pc = 0x2cbe9cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_2cbea0:
    // 0x2cbea0: 0x0
    ctx->pc = 0x2cbea0u;
    // NOP
label_2cbea4:
    // 0x2cbea4: 0x0
    ctx->pc = 0x2cbea4u;
    // NOP
label_2cbea8:
    // 0x2cbea8: 0x461d7dc3
    ctx->pc = 0x2cbea8u;
    if (ctx->f[29] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[23] = ctx->f[15] / ctx->f[29];
label_2cbeac:
    // 0x2cbeac: 0x10000007
label_2cbeb0:
    if (ctx->pc == 0x2CBEB0u) {
        ctx->pc = 0x2CBEB4u;
        goto label_2cbeb4;
    }
    ctx->pc = 0x2CBEACu;
    {
        const bool branch_taken_0x2cbeac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cbeac) {
            ctx->pc = 0x2CBECCu;
            goto label_2cbecc;
        }
    }
    ctx->pc = 0x2CBEB4u;
label_2cbeb4:
    // 0x2cbeb4: 0x4600cb46
    ctx->pc = 0x2cbeb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cbeb8:
    // 0x2cbeb8: 0x4600a386
    ctx->pc = 0x2cbeb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cbebc:
    // 0x2cbebc: 0x4600ebc6
    ctx->pc = 0x2cbebcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[29]);
label_2cbec0:
    // 0x2cbec0: 0xc0b2f1a
label_2cbec4:
    if (ctx->pc == 0x2CBEC4u) {
        ctx->pc = 0x2CBEC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEC8u;
        goto label_2cbec8;
    }
    ctx->pc = 0x2CBEC0u;
    SET_GPR_U32(ctx, 31, 0x2CBEC8u);
    ctx->pc = 0x2CBEC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBEC8u; }
    }
    if (ctx->pc != 0x2CBEC8u) { return; }
    ctx->pc = 0x2CBEC8u;
label_2cbec8:
    // 0x2cbec8: 0x460005c6
    ctx->pc = 0x2cbec8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2cbecc:
    // 0x2cbecc: 0x461dc034
    ctx->pc = 0x2cbeccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbed0:
    // 0x2cbed0: 0x0
    ctx->pc = 0x2cbed0u;
    // NOP
label_2cbed4:
    // 0x2cbed4: 0x45000016
label_2cbed8:
    if (ctx->pc == 0x2CBED8u) {
        ctx->pc = 0x2CBED8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x2CBEDCu;
        goto label_2cbedc;
    }
    ctx->pc = 0x2CBED4u;
    {
        const bool branch_taken_0x2cbed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBED8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        if (branch_taken_0x2cbed4) {
            ctx->pc = 0x2CBF30u;
            goto label_2cbf30;
        }
    }
    ctx->pc = 0x2CBEDCu;
label_2cbedc:
    // 0x2cbedc: 0x4618ed41
    ctx->pc = 0x2cbedcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[29], ctx->f[24]);
label_2cbee0:
    // 0x2cbee0: 0x4600cb46
    ctx->pc = 0x2cbee0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cbee4:
    // 0x2cbee4: 0x4600a386
    ctx->pc = 0x2cbee4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cbee8:
    // 0x2cbee8: 0x4600abc6
    ctx->pc = 0x2cbee8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_2cbeec:
    // 0x2cbeec: 0xc0b2f1a
label_2cbef0:
    if (ctx->pc == 0x2CBEF0u) {
        ctx->pc = 0x2CBEF0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CBEF4u;
        goto label_2cbef4;
    }
    ctx->pc = 0x2CBEECu;
    SET_GPR_U32(ctx, 31, 0x2CBEF4u);
    ctx->pc = 0x2CBEF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBEF4u; }
    }
    if (ctx->pc != 0x2CBEF4u) { return; }
    ctx->pc = 0x2CBEF4u;
label_2cbef4:
    // 0x2cbef4: 0x46000586
    ctx->pc = 0x2cbef4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cbef8:
    // 0x2cbef8: 0x4600e306
    ctx->pc = 0x2cbef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cbefc:
    // 0x2cbefc: 0x4600db46
    ctx->pc = 0x2cbefcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cbf00:
    // 0x2cbf00: 0x4600c386
    ctx->pc = 0x2cbf00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cbf04:
    // 0x2cbf04: 0x4600c3c6
    ctx->pc = 0x2cbf04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2cbf08:
    // 0x2cbf08: 0xc0b2f1a
label_2cbf0c:
    if (ctx->pc == 0x2CBF0Cu) {
        ctx->pc = 0x2CBF0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CBF10u;
        goto label_2cbf10;
    }
    ctx->pc = 0x2CBF08u;
    SET_GPR_U32(ctx, 31, 0x2CBF10u);
    ctx->pc = 0x2CBF0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF10u; }
    }
    if (ctx->pc != 0x2CBF10u) { return; }
    ctx->pc = 0x2CBF10u;
label_2cbf10:
    // 0x2cbf10: 0x4615b3c2
    ctx->pc = 0x2cbf10u;
    ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
label_2cbf14:
    // 0x2cbf14: 0x46180002
    ctx->pc = 0x2cbf14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_2cbf18:
    // 0x2cbf18: 0x46007bc0
    ctx->pc = 0x2cbf18u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_2cbf1c:
    // 0x2cbf1c: 0x0
    ctx->pc = 0x2cbf1cu;
    // NOP
label_2cbf20:
    // 0x2cbf20: 0x0
    ctx->pc = 0x2cbf20u;
    // NOP
label_2cbf24:
    // 0x2cbf24: 0x461d7bc3
    ctx->pc = 0x2cbf24u;
    if (ctx->f[29] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[29];
label_2cbf28:
    // 0x2cbf28: 0x10000008
label_2cbf2c:
    if (ctx->pc == 0x2CBF2Cu) {
        ctx->pc = 0x2CBF30u;
        goto label_2cbf30;
    }
    ctx->pc = 0x2CBF28u;
    {
        const bool branch_taken_0x2cbf28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cbf28) {
            ctx->pc = 0x2CBF4Cu;
            goto label_2cbf4c;
        }
    }
    ctx->pc = 0x2CBF30u;
label_2cbf30:
    // 0x2cbf30: 0x4600e306
    ctx->pc = 0x2cbf30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cbf34:
    // 0x2cbf34: 0x4600db46
    ctx->pc = 0x2cbf34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cbf38:
    // 0x2cbf38: 0x4600c386
    ctx->pc = 0x2cbf38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cbf3c:
    // 0x2cbf3c: 0x4600ebc6
    ctx->pc = 0x2cbf3cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[29]);
label_2cbf40:
    // 0x2cbf40: 0xc0b2f1a
label_2cbf44:
    if (ctx->pc == 0x2CBF44u) {
        ctx->pc = 0x2CBF44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CBF48u;
        goto label_2cbf48;
    }
    ctx->pc = 0x2CBF40u;
    SET_GPR_U32(ctx, 31, 0x2CBF48u);
    ctx->pc = 0x2CBF44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF48u; }
    }
    if (ctx->pc != 0x2CBF48u) { return; }
    ctx->pc = 0x2CBF48u;
label_2cbf48:
    // 0x2cbf48: 0x460003c6
    ctx->pc = 0x2cbf48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
label_2cbf4c:
    // 0x2cbf4c: 0x46177834
    ctx->pc = 0x2cbf4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbf50:
    // 0x2cbf50: 0x0
    ctx->pc = 0x2cbf50u;
    // NOP
label_2cbf54:
    // 0x2cbf54: 0x45030059
label_2cbf58:
    if (ctx->pc == 0x2CBF58u) {
        ctx->pc = 0x2CBF58u;
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x2CBF5Cu;
        goto label_2cbf5c;
    }
    ctx->pc = 0x2CBF54u;
    {
        const bool branch_taken_0x2cbf54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbf54) {
            ctx->pc = 0x2CBF58u;
            ctx->f[15] = FPU_MOV_S(ctx->f[23]);
            ctx->pc = 0x2CC0BCu;
            goto label_2cc0bc;
        }
    }
    ctx->pc = 0x2CBF5Cu;
label_2cbf5c:
    // 0x2cbf5c: 0x10000058
label_2cbf60:
    if (ctx->pc == 0x2CBF60u) {
        ctx->pc = 0x2CBF60u;
        ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[29]);
        ctx->pc = 0x2CBF64u;
        goto label_2cbf64;
    }
    ctx->pc = 0x2CBF5Cu;
    {
        const bool branch_taken_0x2cbf5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBF60u;
        ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[29]);
        if (branch_taken_0x2cbf5c) {
            ctx->pc = 0x2CC0C0u;
            goto label_2cc0c0;
        }
    }
    ctx->pc = 0x2CBF64u;
label_2cbf64:
    // 0x2cbf64: 0x44800000
    ctx->pc = 0x2cbf64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2cbf68:
    // 0x2cbf68: 0x4600d834
    ctx->pc = 0x2cbf68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[27], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbf6c:
    // 0x2cbf6c: 0x45000023
label_2cbf70:
    if (ctx->pc == 0x2CBF70u) {
        ctx->pc = 0x2CBF74u;
        goto label_2cbf74;
    }
    ctx->pc = 0x2CBF6Cu;
    {
        const bool branch_taken_0x2cbf6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cbf6c) {
            ctx->pc = 0x2CBFFCu;
            goto label_2cbffc;
        }
    }
    ctx->pc = 0x2CBF74u;
label_2cbf74:
    // 0x2cbf74: 0x0
    ctx->pc = 0x2cbf74u;
    // NOP
label_2cbf78:
    // 0x2cbf78: 0x0
    ctx->pc = 0x2cbf78u;
    // NOP
label_2cbf7c:
    // 0x2cbf7c: 0x461cd803
    ctx->pc = 0x2cbf7cu;
    if (ctx->f[28] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[27] * 0.0f); } else ctx->f[0] = ctx->f[27] / ctx->f[28];
label_2cbf80:
    // 0x2cbf80: 0x46000007
    ctx->pc = 0x2cbf80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cbf84:
    // 0x2cbf84: 0x4600ed42
    ctx->pc = 0x2cbf84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
label_2cbf88:
    // 0x2cbf88: 0x4615a034
    ctx->pc = 0x2cbf88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbf8c:
    // 0x2cbf8c: 0x0
    ctx->pc = 0x2cbf8cu;
    // NOP
label_2cbf90:
    // 0x2cbf90: 0x45000004
label_2cbf94:
    if (ctx->pc == 0x2CBF94u) {
        ctx->pc = 0x2CBF94u;
        ctx->f[23] = FPU_SUB_S(ctx->f[29], ctx->f[21]);
        ctx->pc = 0x2CBF98u;
        goto label_2cbf98;
    }
    ctx->pc = 0x2CBF90u;
    {
        const bool branch_taken_0x2cbf90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBF94u;
        ctx->f[23] = FPU_SUB_S(ctx->f[29], ctx->f[21]);
        if (branch_taken_0x2cbf90) {
            ctx->pc = 0x2CBFA4u;
            goto label_2cbfa4;
        }
    }
    ctx->pc = 0x2CBF98u;
label_2cbf98:
    // 0x2cbf98: 0x4600a546
    ctx->pc = 0x2cbf98u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2cbf9c:
    // 0x2cbf9c: 0x10000007
label_2cbfa0:
    if (ctx->pc == 0x2CBFA0u) {
        ctx->pc = 0x2CBFA0u;
        ctx->f[23] = FPU_SUB_S(ctx->f[29], ctx->f[20]);
        ctx->pc = 0x2CBFA4u;
        goto label_2cbfa4;
    }
    ctx->pc = 0x2CBF9Cu;
    {
        const bool branch_taken_0x2cbf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBFA0u;
        ctx->f[23] = FPU_SUB_S(ctx->f[29], ctx->f[20]);
        if (branch_taken_0x2cbf9c) {
            ctx->pc = 0x2CBFBCu;
            goto label_2cbfbc;
        }
    }
    ctx->pc = 0x2CBFA4u;
label_2cbfa4:
    // 0x2cbfa4: 0x4617c034
    ctx->pc = 0x2cbfa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbfa8:
    // 0x2cbfa8: 0x0
    ctx->pc = 0x2cbfa8u;
    // NOP
label_2cbfac:
    // 0x2cbfac: 0x45000004
label_2cbfb0:
    if (ctx->pc == 0x2CBFB0u) {
        ctx->pc = 0x2CBFB0u;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x2CBFB4u;
        goto label_2cbfb4;
    }
    ctx->pc = 0x2CBFACu;
    {
        const bool branch_taken_0x2cbfac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBFB0u;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        if (branch_taken_0x2cbfac) {
            ctx->pc = 0x2CBFC0u;
            goto label_2cbfc0;
        }
    }
    ctx->pc = 0x2CBFB4u;
label_2cbfb4:
    // 0x2cbfb4: 0x4600c5c6
    ctx->pc = 0x2cbfb4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[24]);
label_2cbfb8:
    // 0x2cbfb8: 0x4618ed41
    ctx->pc = 0x2cbfb8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[29], ctx->f[24]);
label_2cbfbc:
    // 0x2cbfbc: 0x4600d306
    ctx->pc = 0x2cbfbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_2cbfc0:
    // 0x2cbfc0: 0x4600cb46
    ctx->pc = 0x2cbfc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cbfc4:
    // 0x2cbfc4: 0x4600a386
    ctx->pc = 0x2cbfc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cbfc8:
    // 0x2cbfc8: 0x4600abc6
    ctx->pc = 0x2cbfc8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_2cbfcc:
    // 0x2cbfcc: 0xc0b2f1a
label_2cbfd0:
    if (ctx->pc == 0x2CBFD0u) {
        ctx->pc = 0x2CBFD0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CBFD4u;
        goto label_2cbfd4;
    }
    ctx->pc = 0x2CBFCCu;
    SET_GPR_U32(ctx, 31, 0x2CBFD4u);
    ctx->pc = 0x2CBFD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFD4u; }
    }
    if (ctx->pc != 0x2CBFD4u) { return; }
    ctx->pc = 0x2CBFD4u;
label_2cbfd4:
    // 0x2cbfd4: 0x46000586
    ctx->pc = 0x2cbfd4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cbfd8:
    // 0x2cbfd8: 0x4600e306
    ctx->pc = 0x2cbfd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cbfdc:
    // 0x2cbfdc: 0x4600db46
    ctx->pc = 0x2cbfdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cbfe0:
    // 0x2cbfe0: 0x4600c386
    ctx->pc = 0x2cbfe0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cbfe4:
    // 0x2cbfe4: 0x4600bbc6
    ctx->pc = 0x2cbfe4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_2cbfe8:
    // 0x2cbfe8: 0xc0b2f1a
label_2cbfec:
    if (ctx->pc == 0x2CBFECu) {
        ctx->pc = 0x2CBFECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFF0u;
        goto label_2cbff0;
    }
    ctx->pc = 0x2CBFE8u;
    SET_GPR_U32(ctx, 31, 0x2CBFF0u);
    ctx->pc = 0x2CBFECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFF0u; }
    }
    if (ctx->pc != 0x2CBFF0u) { return; }
    ctx->pc = 0x2CBFF0u;
label_2cbff0:
    // 0x2cbff0: 0x4615b3c2
    ctx->pc = 0x2cbff0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
label_2cbff4:
    // 0x2cbff4: 0x1000002d
label_2cbff8:
    if (ctx->pc == 0x2CBFF8u) {
        ctx->pc = 0x2CBFF8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->pc = 0x2CBFFCu;
        goto label_2cbffc;
    }
    ctx->pc = 0x2CBFF4u;
    {
        const bool branch_taken_0x2cbff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBFF8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        if (branch_taken_0x2cbff4) {
            ctx->pc = 0x2CC0ACu;
            goto label_2cc0ac;
        }
    }
    ctx->pc = 0x2CBFFCu;
label_2cbffc:
    // 0x2cbffc: 0x461dc034
    ctx->pc = 0x2cbffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc000:
    // 0x2cc000: 0x0
    ctx->pc = 0x2cc000u;
    // NOP
label_2cc004:
    // 0x2cc004: 0x45000010
label_2cc008:
    if (ctx->pc == 0x2CC008u) {
        ctx->pc = 0x2CC008u;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x2CC00Cu;
        goto label_2cc00c;
    }
    ctx->pc = 0x2CC004u;
    {
        const bool branch_taken_0x2cc004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC008u;
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        if (branch_taken_0x2cc004) {
            ctx->pc = 0x2CC048u;
            goto label_2cc048;
        }
    }
    ctx->pc = 0x2CC00Cu;
label_2cc00c:
    // 0x2cc00c: 0x4618ed41
    ctx->pc = 0x2cc00cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[29], ctx->f[24]);
label_2cc010:
    // 0x2cc010: 0x4600cb46
    ctx->pc = 0x2cc010u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cc014:
    // 0x2cc014: 0x4600a386
    ctx->pc = 0x2cc014u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cc018:
    // 0x2cc018: 0x4600abc6
    ctx->pc = 0x2cc018u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_2cc01c:
    // 0x2cc01c: 0xc0b2f1a
label_2cc020:
    if (ctx->pc == 0x2CC020u) {
        ctx->pc = 0x2CC020u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC024u;
        goto label_2cc024;
    }
    ctx->pc = 0x2CC01Cu;
    SET_GPR_U32(ctx, 31, 0x2CC024u);
    ctx->pc = 0x2CC020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC024u; }
    }
    if (ctx->pc != 0x2CC024u) { return; }
    ctx->pc = 0x2CC024u;
label_2cc024:
    // 0x2cc024: 0x46000586
    ctx->pc = 0x2cc024u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cc028:
    // 0x2cc028: 0x4600e306
    ctx->pc = 0x2cc028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cc02c:
    // 0x2cc02c: 0x4600db46
    ctx->pc = 0x2cc02cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cc030:
    // 0x2cc030: 0x4600c386
    ctx->pc = 0x2cc030u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cc034:
    // 0x2cc034: 0x4600c3c6
    ctx->pc = 0x2cc034u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2cc038:
    // 0x2cc038: 0xc0b2f1a
label_2cc03c:
    if (ctx->pc == 0x2CC03Cu) {
        ctx->pc = 0x2CC03Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CC040u;
        goto label_2cc040;
    }
    ctx->pc = 0x2CC038u;
    SET_GPR_U32(ctx, 31, 0x2CC040u);
    ctx->pc = 0x2CC03Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC040u; }
    }
    if (ctx->pc != 0x2CC040u) { return; }
    ctx->pc = 0x2CC040u;
label_2cc040:
    // 0x2cc040: 0x10000019
label_2cc044:
    if (ctx->pc == 0x2CC044u) {
        ctx->pc = 0x2CC044u;
        ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
        ctx->pc = 0x2CC048u;
        goto label_2cc048;
    }
    ctx->pc = 0x2CC040u;
    {
        const bool branch_taken_0x2cc040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC044u;
        ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
        if (branch_taken_0x2cc040) {
            ctx->pc = 0x2CC0A8u;
            goto label_2cc0a8;
        }
    }
    ctx->pc = 0x2CC048u;
label_2cc048:
    // 0x2cc048: 0x4600e306
    ctx->pc = 0x2cc048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cc04c:
    // 0x2cc04c: 0x4600db46
    ctx->pc = 0x2cc04cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cc050:
    // 0x2cc050: 0x4600c386
    ctx->pc = 0x2cc050u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cc054:
    // 0x2cc054: 0x4600ebc6
    ctx->pc = 0x2cc054u;
    ctx->f[15] = FPU_MOV_S(ctx->f[29]);
label_2cc058:
    // 0x2cc058: 0x24040001
    ctx->pc = 0x2cc058u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2cc05c:
    // 0x2cc05c: 0xc0b2f1a
label_2cc060:
    if (ctx->pc == 0x2CC060u) {
        ctx->pc = 0x2CC064u;
        goto label_2cc064;
    }
    ctx->pc = 0x2CC05Cu;
    SET_GPR_U32(ctx, 31, 0x2CC064u);
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC064u; }
    }
    if (ctx->pc != 0x2CC064u) { return; }
    ctx->pc = 0x2CC064u;
label_2cc064:
    // 0x2cc064: 0x10000015
label_2cc068:
    if (ctx->pc == 0x2CC068u) {
        ctx->pc = 0x2CC068u;
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2CC06Cu;
        goto label_2cc06c;
    }
    ctx->pc = 0x2CC064u;
    {
        const bool branch_taken_0x2cc064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC068u;
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2cc064) {
            ctx->pc = 0x2CC0BCu;
            goto label_2cc0bc;
        }
    }
    ctx->pc = 0x2CC06Cu;
label_2cc06c:
    // 0x2cc06c: 0x46007f46
    ctx->pc = 0x2cc06cu;
    ctx->f[29] = FPU_MOV_S(ctx->f[15]);
label_2cc070:
    // 0x2cc070: 0x4600d306
    ctx->pc = 0x2cc070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_2cc074:
    // 0x2cc074: 0x4600cb46
    ctx->pc = 0x2cc074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_2cc078:
    // 0x2cc078: 0x4600a386
    ctx->pc = 0x2cc078u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2cc07c:
    // 0x2cc07c: 0x4600a3c6
    ctx->pc = 0x2cc07cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_2cc080:
    // 0x2cc080: 0xc0b2f1a
label_2cc084:
    if (ctx->pc == 0x2CC084u) {
        ctx->pc = 0x2CC084u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CC088u;
        goto label_2cc088;
    }
    ctx->pc = 0x2CC080u;
    SET_GPR_U32(ctx, 31, 0x2CC088u);
    ctx->pc = 0x2CC084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC088u; }
    }
    if (ctx->pc != 0x2CC088u) { return; }
    ctx->pc = 0x2CC088u;
label_2cc088:
    // 0x2cc088: 0x46000586
    ctx->pc = 0x2cc088u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cc08c:
    // 0x2cc08c: 0x4600e306
    ctx->pc = 0x2cc08cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_2cc090:
    // 0x2cc090: 0x4600db46
    ctx->pc = 0x2cc090u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_2cc094:
    // 0x2cc094: 0x4600c386
    ctx->pc = 0x2cc094u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_2cc098:
    // 0x2cc098: 0x4600c3c6
    ctx->pc = 0x2cc098u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2cc09c:
    // 0x2cc09c: 0xc0b2f1a
label_2cc0a0:
    if (ctx->pc == 0x2CC0A0u) {
        ctx->pc = 0x2CC0A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CC0A4u;
        goto label_2cc0a4;
    }
    ctx->pc = 0x2CC09Cu;
    SET_GPR_U32(ctx, 31, 0x2CC0A4u);
    ctx->pc = 0x2CC0A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CBC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLineAvg_0x2cbc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC0A4u; }
    }
    if (ctx->pc != 0x2CC0A4u) { return; }
    ctx->pc = 0x2CC0A4u;
label_2cc0a4:
    // 0x2cc0a4: 0x4614b3c2
    ctx->pc = 0x2cc0a4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_2cc0a8:
    // 0x2cc0a8: 0x46180002
    ctx->pc = 0x2cc0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_2cc0ac:
    // 0x2cc0ac: 0x46007bc0
    ctx->pc = 0x2cc0acu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_2cc0b0:
    // 0x2cc0b0: 0x0
    ctx->pc = 0x2cc0b0u;
    // NOP
label_2cc0b4:
    // 0x2cc0b4: 0x0
    ctx->pc = 0x2cc0b4u;
    // NOP
label_2cc0b8:
    // 0x2cc0b8: 0x461d7bc3
    ctx->pc = 0x2cc0b8u;
    if (ctx->f[29] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[29];
label_2cc0bc:
    // 0x2cc0bc: 0x461d7802
    ctx->pc = 0x2cc0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[29]);
label_2cc0c0:
    // 0x2cc0c0: 0x46000064
    ctx->pc = 0x2cc0c0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2cc0c4:
    // 0x2cc0c4: 0x44060800
    ctx->pc = 0x2cc0c4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
label_2cc0c8:
    // 0x2cc0c8: 0x9643002e
    ctx->pc = 0x2cc0c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
label_2cc0cc:
    // 0x2cc0cc: 0x2402012c
    ctx->pc = 0x2cc0ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
label_2cc0d0:
    // 0x2cc0d0: 0x40282d
    ctx->pc = 0x2cc0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc0d4:
    // 0x2cc0d4: 0x63280b
    ctx->pc = 0x2cc0d4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2cc0d8:
    // 0x2cc0d8: 0xc5102a
    ctx->pc = 0x2cc0d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
label_2cc0dc:
    // 0x2cc0dc: 0xa2300a
    ctx->pc = 0x2cc0dcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
label_2cc0e0:
    // 0x2cc0e0: 0x24020001
    ctx->pc = 0x2cc0e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2cc0e4:
    // 0x2cc0e4: 0x6182a
    ctx->pc = 0x2cc0e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 6)));
label_2cc0e8:
    // 0x2cc0e8: 0x43300a
    ctx->pc = 0x2cc0e8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
label_2cc0ec:
    // 0x2cc0ec: 0x1039c3
    ctx->pc = 0x2cc0ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 7));
label_2cc0f0:
    // 0x2cc0f0: 0xc6410040
    ctx->pc = 0x2cc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc0f4:
    // 0x2cc0f4: 0x44800000
    ctx->pc = 0x2cc0f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2cc0f8:
    // 0x2cc0f8: 0x46000832
    ctx->pc = 0x2cc0f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc0fc:
    // 0x2cc0fc: 0x0
    ctx->pc = 0x2cc0fcu;
    // NOP
label_2cc100:
    // 0x2cc100: 0x45010008
label_2cc104:
    if (ctx->pc == 0x2CC104u) {
        ctx->pc = 0x2CC104u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x2CC108u;
        goto label_2cc108;
    }
    ctx->pc = 0x2CC100u;
    {
        const bool branch_taken_0x2cc100 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC104u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x2cc100) {
            ctx->pc = 0x2CC124u;
            goto label_2cc124;
        }
    }
    ctx->pc = 0x2CC108u;
label_2cc108:
    // 0x2cc108: 0x3c01bf80
    ctx->pc = 0x2cc108u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_2cc10c:
    // 0x2cc10c: 0x44810000
    ctx->pc = 0x2cc10cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2cc110:
    // 0x2cc110: 0x46000832
    ctx->pc = 0x2cc110u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc114:
    // 0x2cc114: 0x0
    ctx->pc = 0x2cc114u;
    // NOP
label_2cc118:
    // 0x2cc118: 0x45020002
label_2cc11c:
    if (ctx->pc == 0x2CC11Cu) {
        ctx->pc = 0x2CC11Cu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x2CC120u;
        goto label_2cc120;
    }
    ctx->pc = 0x2CC118u;
    {
        const bool branch_taken_0x2cc118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc118) {
            ctx->pc = 0x2CC11Cu;
            SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 4));
            ctx->pc = 0x2CC124u;
            goto label_2cc124;
        }
    }
    ctx->pc = 0x2CC120u;
label_2cc120:
    // 0x2cc120: 0x34e70002
    ctx->pc = 0x2cc120u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2));
label_2cc124:
    // 0x2cc124: 0xc6400050
    ctx->pc = 0x2cc124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc128:
    // 0x2cc128: 0x44800800
    ctx->pc = 0x2cc128u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_2cc12c:
    // 0x2cc12c: 0x46010032
    ctx->pc = 0x2cc12cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc130:
    // 0x2cc130: 0x0
    ctx->pc = 0x2cc130u;
    // NOP
label_2cc134:
    // 0x2cc134: 0x4500000b
label_2cc138:
    if (ctx->pc == 0x2CC138u) {
        ctx->pc = 0x2CC138u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC13Cu;
        goto label_2cc13c;
    }
    ctx->pc = 0x2CC134u;
    {
        const bool branch_taken_0x2cc134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC138u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc134) {
            ctx->pc = 0x2CC164u;
            goto label_2cc164;
        }
    }
    ctx->pc = 0x2CC13Cu;
label_2cc13c:
    // 0x2cc13c: 0xc6400054
    ctx->pc = 0x2cc13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc140:
    // 0x2cc140: 0x46010032
    ctx->pc = 0x2cc140u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc144:
    // 0x2cc144: 0x0
    ctx->pc = 0x2cc144u;
    // NOP
label_2cc148:
    // 0x2cc148: 0x45020007
label_2cc14c:
    if (ctx->pc == 0x2CC14Cu) {
        ctx->pc = 0x2CC14Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC150u;
        goto label_2cc150;
    }
    ctx->pc = 0x2CC148u;
    {
        const bool branch_taken_0x2cc148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc148) {
            ctx->pc = 0x2CC14Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2CC168u;
            goto label_2cc168;
        }
    }
    ctx->pc = 0x2CC150u;
label_2cc150:
    // 0x2cc150: 0xc6400058
    ctx->pc = 0x2cc150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc154:
    // 0x2cc154: 0x46010032
    ctx->pc = 0x2cc154u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc158:
    // 0x2cc158: 0x0
    ctx->pc = 0x2cc158u;
    // NOP
label_2cc15c:
    // 0x2cc15c: 0x45010003
label_2cc160:
    if (ctx->pc == 0x2CC160u) {
        ctx->pc = 0x2CC160u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 6));
        ctx->pc = 0x2CC164u;
        goto label_2cc164;
    }
    ctx->pc = 0x2CC15Cu;
    {
        const bool branch_taken_0x2cc15c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC160u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 6));
        if (branch_taken_0x2cc15c) {
            ctx->pc = 0x2CC16Cu;
            goto label_2cc16c;
        }
    }
    ctx->pc = 0x2CC164u;
label_2cc164:
    // 0x2cc164: 0x24030001
    ctx->pc = 0x2cc164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2cc168:
    // 0x2cc168: 0x102183
    ctx->pc = 0x2cc168u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 6));
label_2cc16c:
    // 0x2cc16c: 0x30840001
    ctx->pc = 0x2cc16cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
label_2cc170:
    // 0x2cc170: 0x34820002
    ctx->pc = 0x2cc170u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 2));
label_2cc174:
    // 0x2cc174: 0x43200b
    ctx->pc = 0x2cc174u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_2cc178:
    // 0x2cc178: 0x32020001
    ctx->pc = 0x2cc178u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_2cc17c:
    // 0x2cc17c: 0x50400012
label_2cc180:
    if (ctx->pc == 0x2CC180u) {
        ctx->pc = 0x2CC180u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC184u;
        goto label_2cc184;
    }
    ctx->pc = 0x2CC17Cu;
    {
        const bool branch_taken_0x2cc17c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cc17c) {
            ctx->pc = 0x2CC180u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2CC1C8u;
            goto label_2cc1c8;
        }
    }
    ctx->pc = 0x2CC184u;
label_2cc184:
    // 0x2cc184: 0xc6410040
    ctx->pc = 0x2cc184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc188:
    // 0x2cc188: 0x44800000
    ctx->pc = 0x2cc188u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2cc18c:
    // 0x2cc18c: 0x46000832
    ctx->pc = 0x2cc18cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc190:
    // 0x2cc190: 0x0
    ctx->pc = 0x2cc190u;
    // NOP
label_2cc194:
    // 0x2cc194: 0x45010008
label_2cc198:
    if (ctx->pc == 0x2CC198u) {
        ctx->pc = 0x2CC198u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC19Cu;
        goto label_2cc19c;
    }
    ctx->pc = 0x2CC194u;
    {
        const bool branch_taken_0x2cc194 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC198u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc194) {
            ctx->pc = 0x2CC1B8u;
            goto label_2cc1b8;
        }
    }
    ctx->pc = 0x2CC19Cu;
label_2cc19c:
    // 0x2cc19c: 0x3c01bf80
    ctx->pc = 0x2cc19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_2cc1a0:
    // 0x2cc1a0: 0x44810000
    ctx->pc = 0x2cc1a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2cc1a4:
    // 0x2cc1a4: 0x46000832
    ctx->pc = 0x2cc1a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc1a8:
    // 0x2cc1a8: 0x0
    ctx->pc = 0x2cc1a8u;
    // NOP
label_2cc1ac:
    // 0x2cc1ac: 0x45000002
label_2cc1b0:
    if (ctx->pc == 0x2CC1B0u) {
        ctx->pc = 0x2CC1B0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2CC1B4u;
        goto label_2cc1b4;
    }
    ctx->pc = 0x2CC1ACu;
    {
        const bool branch_taken_0x2cc1ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC1B0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2cc1ac) {
            ctx->pc = 0x2CC1B8u;
            goto label_2cc1b8;
        }
    }
    ctx->pc = 0x2CC1B4u;
label_2cc1b4:
    // 0x2cc1b4: 0x24070003
    ctx->pc = 0x2cc1b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
label_2cc1b8:
    // 0x2cc1b8: 0x24020003
    ctx->pc = 0x2cc1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2cc1bc:
    // 0x2cc1bc: 0x40202d
    ctx->pc = 0x2cc1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc1c0:
    // 0x2cc1c0: 0x3200a
    ctx->pc = 0x2cc1c0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_2cc1c4:
    // 0x2cc1c4: 0x24020001
    ctx->pc = 0x2cc1c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2cc1c8:
    // 0x2cc1c8: 0xafa20000
    ctx->pc = 0x2cc1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2cc1cc:
    // 0x2cc1cc: 0x96430032
    ctx->pc = 0x2cc1ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_2cc1d0:
    // 0x2cc1d0: 0x24020064
    ctx->pc = 0x2cc1d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_2cc1d4:
    // 0x2cc1d4: 0x40282d
    ctx->pc = 0x2cc1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc1d8:
    // 0x2cc1d8: 0x63280b
    ctx->pc = 0x2cc1d8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2cc1dc:
    // 0x2cc1dc: 0xc5102a
    ctx->pc = 0x2cc1dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
label_2cc1e0:
    // 0x2cc1e0: 0xc2280b
    ctx->pc = 0x2cc1e0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
label_2cc1e4:
    // 0x2cc1e4: 0x2c820006
    ctx->pc = 0x2cc1e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 6));
label_2cc1e8:
    // 0x2cc1e8: 0x1040002e
label_2cc1ec:
    if (ctx->pc == 0x2CC1ECu) {
        ctx->pc = 0x2CC1ECu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1F0u;
        goto label_2cc1f0;
    }
    ctx->pc = 0x2CC1E8u;
    {
        const bool branch_taken_0x2cc1e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC1ECu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc1e8) {
            ctx->pc = 0x2CC2A4u;
            goto label_2cc2a4;
        }
    }
    ctx->pc = 0x2CC1F0u;
label_2cc1f0:
    // 0x2cc1f0: 0x3c02003b
    ctx->pc = 0x2cc1f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2cc1f4:
    // 0x2cc1f4: 0x24427540
    ctx->pc = 0x2cc1f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30016));
label_2cc1f8:
    // 0x2cc1f8: 0x41880
    ctx->pc = 0x2cc1f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_2cc1fc:
    // 0x2cc1fc: 0x621821
    ctx->pc = 0x2cc1fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cc200:
    // 0x2cc200: 0x8c620000
    ctx->pc = 0x2cc200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc204:
    // 0x2cc204: 0x400008
label_2cc208:
    if (ctx->pc == 0x2CC208u) {
        ctx->pc = 0x2CC20Cu;
        goto label_2cc20c;
    }
    ctx->pc = 0x2CC204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBCC8u: goto label_2cbcc8;
            case 0x2CBCCCu: goto label_2cbccc;
            case 0x2CBCD0u: goto label_2cbcd0;
            case 0x2CBCD4u: goto label_2cbcd4;
            case 0x2CBCD8u: goto label_2cbcd8;
            case 0x2CBCDCu: goto label_2cbcdc;
            case 0x2CBCE0u: goto label_2cbce0;
            case 0x2CBCE4u: goto label_2cbce4;
            case 0x2CBCE8u: goto label_2cbce8;
            case 0x2CBCECu: goto label_2cbcec;
            case 0x2CBCF0u: goto label_2cbcf0;
            case 0x2CBCF4u: goto label_2cbcf4;
            case 0x2CBCF8u: goto label_2cbcf8;
            case 0x2CBCFCu: goto label_2cbcfc;
            case 0x2CBD00u: goto label_2cbd00;
            case 0x2CBD04u: goto label_2cbd04;
            case 0x2CBD08u: goto label_2cbd08;
            case 0x2CBD0Cu: goto label_2cbd0c;
            case 0x2CBD10u: goto label_2cbd10;
            case 0x2CBD14u: goto label_2cbd14;
            case 0x2CBD18u: goto label_2cbd18;
            case 0x2CBD1Cu: goto label_2cbd1c;
            case 0x2CBD20u: goto label_2cbd20;
            case 0x2CBD24u: goto label_2cbd24;
            case 0x2CBD28u: goto label_2cbd28;
            case 0x2CBD2Cu: goto label_2cbd2c;
            case 0x2CBD30u: goto label_2cbd30;
            case 0x2CBD34u: goto label_2cbd34;
            case 0x2CBD38u: goto label_2cbd38;
            case 0x2CBD3Cu: goto label_2cbd3c;
            case 0x2CBD40u: goto label_2cbd40;
            case 0x2CBD44u: goto label_2cbd44;
            case 0x2CBD48u: goto label_2cbd48;
            case 0x2CBD4Cu: goto label_2cbd4c;
            case 0x2CBD50u: goto label_2cbd50;
            case 0x2CBD54u: goto label_2cbd54;
            case 0x2CBD58u: goto label_2cbd58;
            case 0x2CBD5Cu: goto label_2cbd5c;
            case 0x2CBD60u: goto label_2cbd60;
            case 0x2CBD64u: goto label_2cbd64;
            case 0x2CBD68u: goto label_2cbd68;
            case 0x2CBD6Cu: goto label_2cbd6c;
            case 0x2CBD70u: goto label_2cbd70;
            case 0x2CBD74u: goto label_2cbd74;
            case 0x2CBD78u: goto label_2cbd78;
            case 0x2CBD7Cu: goto label_2cbd7c;
            case 0x2CBD80u: goto label_2cbd80;
            case 0x2CBD84u: goto label_2cbd84;
            case 0x2CBD88u: goto label_2cbd88;
            case 0x2CBD8Cu: goto label_2cbd8c;
            case 0x2CBD90u: goto label_2cbd90;
            case 0x2CBD94u: goto label_2cbd94;
            case 0x2CBD98u: goto label_2cbd98;
            case 0x2CBD9Cu: goto label_2cbd9c;
            case 0x2CBDA0u: goto label_2cbda0;
            case 0x2CBDA4u: goto label_2cbda4;
            case 0x2CBDA8u: goto label_2cbda8;
            case 0x2CBDACu: goto label_2cbdac;
            case 0x2CBDB0u: goto label_2cbdb0;
            case 0x2CBDB4u: goto label_2cbdb4;
            case 0x2CBDB8u: goto label_2cbdb8;
            case 0x2CBDBCu: goto label_2cbdbc;
            case 0x2CBDC0u: goto label_2cbdc0;
            case 0x2CBDC4u: goto label_2cbdc4;
            case 0x2CBDC8u: goto label_2cbdc8;
            case 0x2CBDCCu: goto label_2cbdcc;
            case 0x2CBDD0u: goto label_2cbdd0;
            case 0x2CBDD4u: goto label_2cbdd4;
            case 0x2CBDD8u: goto label_2cbdd8;
            case 0x2CBDDCu: goto label_2cbddc;
            case 0x2CBDE0u: goto label_2cbde0;
            case 0x2CBDE4u: goto label_2cbde4;
            case 0x2CBDE8u: goto label_2cbde8;
            case 0x2CBDECu: goto label_2cbdec;
            case 0x2CBDF0u: goto label_2cbdf0;
            case 0x2CBDF4u: goto label_2cbdf4;
            case 0x2CBDF8u: goto label_2cbdf8;
            case 0x2CBDFCu: goto label_2cbdfc;
            case 0x2CBE00u: goto label_2cbe00;
            case 0x2CBE04u: goto label_2cbe04;
            case 0x2CBE08u: goto label_2cbe08;
            case 0x2CBE0Cu: goto label_2cbe0c;
            case 0x2CBE10u: goto label_2cbe10;
            case 0x2CBE14u: goto label_2cbe14;
            case 0x2CBE18u: goto label_2cbe18;
            case 0x2CBE1Cu: goto label_2cbe1c;
            case 0x2CBE20u: goto label_2cbe20;
            case 0x2CBE24u: goto label_2cbe24;
            case 0x2CBE28u: goto label_2cbe28;
            case 0x2CBE2Cu: goto label_2cbe2c;
            case 0x2CBE30u: goto label_2cbe30;
            case 0x2CBE34u: goto label_2cbe34;
            case 0x2CBE38u: goto label_2cbe38;
            case 0x2CBE3Cu: goto label_2cbe3c;
            case 0x2CBE40u: goto label_2cbe40;
            case 0x2CBE44u: goto label_2cbe44;
            case 0x2CBE48u: goto label_2cbe48;
            case 0x2CBE4Cu: goto label_2cbe4c;
            case 0x2CBE50u: goto label_2cbe50;
            case 0x2CBE54u: goto label_2cbe54;
            case 0x2CBE58u: goto label_2cbe58;
            case 0x2CBE5Cu: goto label_2cbe5c;
            case 0x2CBE60u: goto label_2cbe60;
            case 0x2CBE64u: goto label_2cbe64;
            case 0x2CBE68u: goto label_2cbe68;
            case 0x2CBE6Cu: goto label_2cbe6c;
            case 0x2CBE70u: goto label_2cbe70;
            case 0x2CBE74u: goto label_2cbe74;
            case 0x2CBE78u: goto label_2cbe78;
            case 0x2CBE7Cu: goto label_2cbe7c;
            case 0x2CBE80u: goto label_2cbe80;
            case 0x2CBE84u: goto label_2cbe84;
            case 0x2CBE88u: goto label_2cbe88;
            case 0x2CBE8Cu: goto label_2cbe8c;
            case 0x2CBE90u: goto label_2cbe90;
            case 0x2CBE94u: goto label_2cbe94;
            case 0x2CBE98u: goto label_2cbe98;
            case 0x2CBE9Cu: goto label_2cbe9c;
            case 0x2CBEA0u: goto label_2cbea0;
            case 0x2CBEA4u: goto label_2cbea4;
            case 0x2CBEA8u: goto label_2cbea8;
            case 0x2CBEACu: goto label_2cbeac;
            case 0x2CBEB0u: goto label_2cbeb0;
            case 0x2CBEB4u: goto label_2cbeb4;
            case 0x2CBEB8u: goto label_2cbeb8;
            case 0x2CBEBCu: goto label_2cbebc;
            case 0x2CBEC0u: goto label_2cbec0;
            case 0x2CBEC4u: goto label_2cbec4;
            case 0x2CBEC8u: goto label_2cbec8;
            case 0x2CBECCu: goto label_2cbecc;
            case 0x2CBED0u: goto label_2cbed0;
            case 0x2CBED4u: goto label_2cbed4;
            case 0x2CBED8u: goto label_2cbed8;
            case 0x2CBEDCu: goto label_2cbedc;
            case 0x2CBEE0u: goto label_2cbee0;
            case 0x2CBEE4u: goto label_2cbee4;
            case 0x2CBEE8u: goto label_2cbee8;
            case 0x2CBEECu: goto label_2cbeec;
            case 0x2CBEF0u: goto label_2cbef0;
            case 0x2CBEF4u: goto label_2cbef4;
            case 0x2CBEF8u: goto label_2cbef8;
            case 0x2CBEFCu: goto label_2cbefc;
            case 0x2CBF00u: goto label_2cbf00;
            case 0x2CBF04u: goto label_2cbf04;
            case 0x2CBF08u: goto label_2cbf08;
            case 0x2CBF0Cu: goto label_2cbf0c;
            case 0x2CBF10u: goto label_2cbf10;
            case 0x2CBF14u: goto label_2cbf14;
            case 0x2CBF18u: goto label_2cbf18;
            case 0x2CBF1Cu: goto label_2cbf1c;
            case 0x2CBF20u: goto label_2cbf20;
            case 0x2CBF24u: goto label_2cbf24;
            case 0x2CBF28u: goto label_2cbf28;
            case 0x2CBF2Cu: goto label_2cbf2c;
            case 0x2CBF30u: goto label_2cbf30;
            case 0x2CBF34u: goto label_2cbf34;
            case 0x2CBF38u: goto label_2cbf38;
            case 0x2CBF3Cu: goto label_2cbf3c;
            case 0x2CBF40u: goto label_2cbf40;
            case 0x2CBF44u: goto label_2cbf44;
            case 0x2CBF48u: goto label_2cbf48;
            case 0x2CBF4Cu: goto label_2cbf4c;
            case 0x2CBF50u: goto label_2cbf50;
            case 0x2CBF54u: goto label_2cbf54;
            case 0x2CBF58u: goto label_2cbf58;
            case 0x2CBF5Cu: goto label_2cbf5c;
            case 0x2CBF60u: goto label_2cbf60;
            case 0x2CBF64u: goto label_2cbf64;
            case 0x2CBF68u: goto label_2cbf68;
            case 0x2CBF6Cu: goto label_2cbf6c;
            case 0x2CBF70u: goto label_2cbf70;
            case 0x2CBF74u: goto label_2cbf74;
            case 0x2CBF78u: goto label_2cbf78;
            case 0x2CBF7Cu: goto label_2cbf7c;
            case 0x2CBF80u: goto label_2cbf80;
            case 0x2CBF84u: goto label_2cbf84;
            case 0x2CBF88u: goto label_2cbf88;
            case 0x2CBF8Cu: goto label_2cbf8c;
            case 0x2CBF90u: goto label_2cbf90;
            case 0x2CBF94u: goto label_2cbf94;
            case 0x2CBF98u: goto label_2cbf98;
            case 0x2CBF9Cu: goto label_2cbf9c;
            case 0x2CBFA0u: goto label_2cbfa0;
            case 0x2CBFA4u: goto label_2cbfa4;
            case 0x2CBFA8u: goto label_2cbfa8;
            case 0x2CBFACu: goto label_2cbfac;
            case 0x2CBFB0u: goto label_2cbfb0;
            case 0x2CBFB4u: goto label_2cbfb4;
            case 0x2CBFB8u: goto label_2cbfb8;
            case 0x2CBFBCu: goto label_2cbfbc;
            case 0x2CBFC0u: goto label_2cbfc0;
            case 0x2CBFC4u: goto label_2cbfc4;
            case 0x2CBFC8u: goto label_2cbfc8;
            case 0x2CBFCCu: goto label_2cbfcc;
            case 0x2CBFD0u: goto label_2cbfd0;
            case 0x2CBFD4u: goto label_2cbfd4;
            case 0x2CBFD8u: goto label_2cbfd8;
            case 0x2CBFDCu: goto label_2cbfdc;
            case 0x2CBFE0u: goto label_2cbfe0;
            case 0x2CBFE4u: goto label_2cbfe4;
            case 0x2CBFE8u: goto label_2cbfe8;
            case 0x2CBFECu: goto label_2cbfec;
            case 0x2CBFF0u: goto label_2cbff0;
            case 0x2CBFF4u: goto label_2cbff4;
            case 0x2CBFF8u: goto label_2cbff8;
            case 0x2CBFFCu: goto label_2cbffc;
            case 0x2CC000u: goto label_2cc000;
            case 0x2CC004u: goto label_2cc004;
            case 0x2CC008u: goto label_2cc008;
            case 0x2CC00Cu: goto label_2cc00c;
            case 0x2CC010u: goto label_2cc010;
            case 0x2CC014u: goto label_2cc014;
            case 0x2CC018u: goto label_2cc018;
            case 0x2CC01Cu: goto label_2cc01c;
            case 0x2CC020u: goto label_2cc020;
            case 0x2CC024u: goto label_2cc024;
            case 0x2CC028u: goto label_2cc028;
            case 0x2CC02Cu: goto label_2cc02c;
            case 0x2CC030u: goto label_2cc030;
            case 0x2CC034u: goto label_2cc034;
            case 0x2CC038u: goto label_2cc038;
            case 0x2CC03Cu: goto label_2cc03c;
            case 0x2CC040u: goto label_2cc040;
            case 0x2CC044u: goto label_2cc044;
            case 0x2CC048u: goto label_2cc048;
            case 0x2CC04Cu: goto label_2cc04c;
            case 0x2CC050u: goto label_2cc050;
            case 0x2CC054u: goto label_2cc054;
            case 0x2CC058u: goto label_2cc058;
            case 0x2CC05Cu: goto label_2cc05c;
            case 0x2CC060u: goto label_2cc060;
            case 0x2CC064u: goto label_2cc064;
            case 0x2CC068u: goto label_2cc068;
            case 0x2CC06Cu: goto label_2cc06c;
            case 0x2CC070u: goto label_2cc070;
            case 0x2CC074u: goto label_2cc074;
            case 0x2CC078u: goto label_2cc078;
            case 0x2CC07Cu: goto label_2cc07c;
            case 0x2CC080u: goto label_2cc080;
            case 0x2CC084u: goto label_2cc084;
            case 0x2CC088u: goto label_2cc088;
            case 0x2CC08Cu: goto label_2cc08c;
            case 0x2CC090u: goto label_2cc090;
            case 0x2CC094u: goto label_2cc094;
            case 0x2CC098u: goto label_2cc098;
            case 0x2CC09Cu: goto label_2cc09c;
            case 0x2CC0A0u: goto label_2cc0a0;
            case 0x2CC0A4u: goto label_2cc0a4;
            case 0x2CC0A8u: goto label_2cc0a8;
            case 0x2CC0ACu: goto label_2cc0ac;
            case 0x2CC0B0u: goto label_2cc0b0;
            case 0x2CC0B4u: goto label_2cc0b4;
            case 0x2CC0B8u: goto label_2cc0b8;
            case 0x2CC0BCu: goto label_2cc0bc;
            case 0x2CC0C0u: goto label_2cc0c0;
            case 0x2CC0C4u: goto label_2cc0c4;
            case 0x2CC0C8u: goto label_2cc0c8;
            case 0x2CC0CCu: goto label_2cc0cc;
            case 0x2CC0D0u: goto label_2cc0d0;
            case 0x2CC0D4u: goto label_2cc0d4;
            case 0x2CC0D8u: goto label_2cc0d8;
            case 0x2CC0DCu: goto label_2cc0dc;
            case 0x2CC0E0u: goto label_2cc0e0;
            case 0x2CC0E4u: goto label_2cc0e4;
            case 0x2CC0E8u: goto label_2cc0e8;
            case 0x2CC0ECu: goto label_2cc0ec;
            case 0x2CC0F0u: goto label_2cc0f0;
            case 0x2CC0F4u: goto label_2cc0f4;
            case 0x2CC0F8u: goto label_2cc0f8;
            case 0x2CC0FCu: goto label_2cc0fc;
            case 0x2CC100u: goto label_2cc100;
            case 0x2CC104u: goto label_2cc104;
            case 0x2CC108u: goto label_2cc108;
            case 0x2CC10Cu: goto label_2cc10c;
            case 0x2CC110u: goto label_2cc110;
            case 0x2CC114u: goto label_2cc114;
            case 0x2CC118u: goto label_2cc118;
            case 0x2CC11Cu: goto label_2cc11c;
            case 0x2CC120u: goto label_2cc120;
            case 0x2CC124u: goto label_2cc124;
            case 0x2CC128u: goto label_2cc128;
            case 0x2CC12Cu: goto label_2cc12c;
            case 0x2CC130u: goto label_2cc130;
            case 0x2CC134u: goto label_2cc134;
            case 0x2CC138u: goto label_2cc138;
            case 0x2CC13Cu: goto label_2cc13c;
            case 0x2CC140u: goto label_2cc140;
            case 0x2CC144u: goto label_2cc144;
            case 0x2CC148u: goto label_2cc148;
            case 0x2CC14Cu: goto label_2cc14c;
            case 0x2CC150u: goto label_2cc150;
            case 0x2CC154u: goto label_2cc154;
            case 0x2CC158u: goto label_2cc158;
            case 0x2CC15Cu: goto label_2cc15c;
            case 0x2CC160u: goto label_2cc160;
            case 0x2CC164u: goto label_2cc164;
            case 0x2CC168u: goto label_2cc168;
            case 0x2CC16Cu: goto label_2cc16c;
            case 0x2CC170u: goto label_2cc170;
            case 0x2CC174u: goto label_2cc174;
            case 0x2CC178u: goto label_2cc178;
            case 0x2CC17Cu: goto label_2cc17c;
            case 0x2CC180u: goto label_2cc180;
            case 0x2CC184u: goto label_2cc184;
            case 0x2CC188u: goto label_2cc188;
            case 0x2CC18Cu: goto label_2cc18c;
            case 0x2CC190u: goto label_2cc190;
            case 0x2CC194u: goto label_2cc194;
            case 0x2CC198u: goto label_2cc198;
            case 0x2CC19Cu: goto label_2cc19c;
            case 0x2CC1A0u: goto label_2cc1a0;
            case 0x2CC1A4u: goto label_2cc1a4;
            case 0x2CC1A8u: goto label_2cc1a8;
            case 0x2CC1ACu: goto label_2cc1ac;
            case 0x2CC1B0u: goto label_2cc1b0;
            case 0x2CC1B4u: goto label_2cc1b4;
            case 0x2CC1B8u: goto label_2cc1b8;
            case 0x2CC1BCu: goto label_2cc1bc;
            case 0x2CC1C0u: goto label_2cc1c0;
            case 0x2CC1C4u: goto label_2cc1c4;
            case 0x2CC1C8u: goto label_2cc1c8;
            case 0x2CC1CCu: goto label_2cc1cc;
            case 0x2CC1D0u: goto label_2cc1d0;
            case 0x2CC1D4u: goto label_2cc1d4;
            case 0x2CC1D8u: goto label_2cc1d8;
            case 0x2CC1DCu: goto label_2cc1dc;
            case 0x2CC1E0u: goto label_2cc1e0;
            case 0x2CC1E4u: goto label_2cc1e4;
            case 0x2CC1E8u: goto label_2cc1e8;
            case 0x2CC1ECu: goto label_2cc1ec;
            case 0x2CC1F0u: goto label_2cc1f0;
            case 0x2CC1F4u: goto label_2cc1f4;
            case 0x2CC1F8u: goto label_2cc1f8;
            case 0x2CC1FCu: goto label_2cc1fc;
            case 0x2CC200u: goto label_2cc200;
            case 0x2CC204u: goto label_2cc204;
            case 0x2CC208u: goto label_2cc208;
            case 0x2CC20Cu: goto label_2cc20c;
            case 0x2CC210u: goto label_2cc210;
            case 0x2CC214u: goto label_2cc214;
            case 0x2CC218u: goto label_2cc218;
            case 0x2CC21Cu: goto label_2cc21c;
            case 0x2CC220u: goto label_2cc220;
            case 0x2CC224u: goto label_2cc224;
            case 0x2CC228u: goto label_2cc228;
            case 0x2CC22Cu: goto label_2cc22c;
            case 0x2CC230u: goto label_2cc230;
            case 0x2CC234u: goto label_2cc234;
            case 0x2CC238u: goto label_2cc238;
            case 0x2CC23Cu: goto label_2cc23c;
            case 0x2CC240u: goto label_2cc240;
            case 0x2CC244u: goto label_2cc244;
            case 0x2CC248u: goto label_2cc248;
            case 0x2CC24Cu: goto label_2cc24c;
            case 0x2CC250u: goto label_2cc250;
            case 0x2CC254u: goto label_2cc254;
            case 0x2CC258u: goto label_2cc258;
            case 0x2CC25Cu: goto label_2cc25c;
            case 0x2CC260u: goto label_2cc260;
            case 0x2CC264u: goto label_2cc264;
            case 0x2CC268u: goto label_2cc268;
            case 0x2CC26Cu: goto label_2cc26c;
            case 0x2CC270u: goto label_2cc270;
            case 0x2CC274u: goto label_2cc274;
            case 0x2CC278u: goto label_2cc278;
            case 0x2CC27Cu: goto label_2cc27c;
            case 0x2CC280u: goto label_2cc280;
            case 0x2CC284u: goto label_2cc284;
            case 0x2CC288u: goto label_2cc288;
            case 0x2CC28Cu: goto label_2cc28c;
            case 0x2CC290u: goto label_2cc290;
            case 0x2CC294u: goto label_2cc294;
            case 0x2CC298u: goto label_2cc298;
            case 0x2CC29Cu: goto label_2cc29c;
            case 0x2CC2A0u: goto label_2cc2a0;
            case 0x2CC2A4u: goto label_2cc2a4;
            case 0x2CC2A8u: goto label_2cc2a8;
            case 0x2CC2ACu: goto label_2cc2ac;
            case 0x2CC2B0u: goto label_2cc2b0;
            case 0x2CC2B4u: goto label_2cc2b4;
            case 0x2CC2B8u: goto label_2cc2b8;
            case 0x2CC2BCu: goto label_2cc2bc;
            case 0x2CC2C0u: goto label_2cc2c0;
            case 0x2CC2C4u: goto label_2cc2c4;
            case 0x2CC2C8u: goto label_2cc2c8;
            case 0x2CC2CCu: goto label_2cc2cc;
            case 0x2CC2D0u: goto label_2cc2d0;
            case 0x2CC2D4u: goto label_2cc2d4;
            case 0x2CC2D8u: goto label_2cc2d8;
            case 0x2CC2DCu: goto label_2cc2dc;
            case 0x2CC2E0u: goto label_2cc2e0;
            case 0x2CC2E4u: goto label_2cc2e4;
            case 0x2CC2E8u: goto label_2cc2e8;
            case 0x2CC2ECu: goto label_2cc2ec;
            case 0x2CC2F0u: goto label_2cc2f0;
            case 0x2CC2F4u: goto label_2cc2f4;
            case 0x2CC2F8u: goto label_2cc2f8;
            case 0x2CC2FCu: goto label_2cc2fc;
            case 0x2CC300u: goto label_2cc300;
            case 0x2CC304u: goto label_2cc304;
            case 0x2CC308u: goto label_2cc308;
            case 0x2CC30Cu: goto label_2cc30c;
            case 0x2CC310u: goto label_2cc310;
            case 0x2CC314u: goto label_2cc314;
            case 0x2CC318u: goto label_2cc318;
            case 0x2CC31Cu: goto label_2cc31c;
            case 0x2CC320u: goto label_2cc320;
            case 0x2CC324u: goto label_2cc324;
            case 0x2CC328u: goto label_2cc328;
            case 0x2CC32Cu: goto label_2cc32c;
            case 0x2CC330u: goto label_2cc330;
            case 0x2CC334u: goto label_2cc334;
            case 0x2CC338u: goto label_2cc338;
            case 0x2CC33Cu: goto label_2cc33c;
            case 0x2CC340u: goto label_2cc340;
            case 0x2CC344u: goto label_2cc344;
            case 0x2CC348u: goto label_2cc348;
            case 0x2CC34Cu: goto label_2cc34c;
            case 0x2CC350u: goto label_2cc350;
            case 0x2CC354u: goto label_2cc354;
            case 0x2CC358u: goto label_2cc358;
            case 0x2CC35Cu: goto label_2cc35c;
            case 0x2CC360u: goto label_2cc360;
            case 0x2CC364u: goto label_2cc364;
            case 0x2CC368u: goto label_2cc368;
            case 0x2CC36Cu: goto label_2cc36c;
            case 0x2CC370u: goto label_2cc370;
            case 0x2CC374u: goto label_2cc374;
            case 0x2CC378u: goto label_2cc378;
            case 0x2CC37Cu: goto label_2cc37c;
            case 0x2CC380u: goto label_2cc380;
            case 0x2CC384u: goto label_2cc384;
            case 0x2CC388u: goto label_2cc388;
            case 0x2CC38Cu: goto label_2cc38c;
            case 0x2CC390u: goto label_2cc390;
            case 0x2CC394u: goto label_2cc394;
            case 0x2CC398u: goto label_2cc398;
            case 0x2CC39Cu: goto label_2cc39c;
            case 0x2CC3A0u: goto label_2cc3a0;
            case 0x2CC3A4u: goto label_2cc3a4;
            case 0x2CC3A8u: goto label_2cc3a8;
            case 0x2CC3ACu: goto label_2cc3ac;
            case 0x2CC3B0u: goto label_2cc3b0;
            case 0x2CC3B4u: goto label_2cc3b4;
            case 0x2CC3B8u: goto label_2cc3b8;
            case 0x2CC3BCu: goto label_2cc3bc;
            case 0x2CC3C0u: goto label_2cc3c0;
            case 0x2CC3C4u: goto label_2cc3c4;
            case 0x2CC3C8u: goto label_2cc3c8;
            case 0x2CC3CCu: goto label_2cc3cc;
            case 0x2CC3D0u: goto label_2cc3d0;
            case 0x2CC3D4u: goto label_2cc3d4;
            case 0x2CC3D8u: goto label_2cc3d8;
            case 0x2CC3DCu: goto label_2cc3dc;
            case 0x2CC3E0u: goto label_2cc3e0;
            case 0x2CC3E4u: goto label_2cc3e4;
            case 0x2CC3E8u: goto label_2cc3e8;
            case 0x2CC3ECu: goto label_2cc3ec;
            case 0x2CC3F0u: goto label_2cc3f0;
            case 0x2CC3F4u: goto label_2cc3f4;
            case 0x2CC3F8u: goto label_2cc3f8;
            case 0x2CC3FCu: goto label_2cc3fc;
            case 0x2CC400u: goto label_2cc400;
            case 0x2CC404u: goto label_2cc404;
            case 0x2CC408u: goto label_2cc408;
            case 0x2CC40Cu: goto label_2cc40c;
            case 0x2CC410u: goto label_2cc410;
            case 0x2CC414u: goto label_2cc414;
            case 0x2CC418u: goto label_2cc418;
            case 0x2CC41Cu: goto label_2cc41c;
            case 0x2CC420u: goto label_2cc420;
            case 0x2CC424u: goto label_2cc424;
            case 0x2CC428u: goto label_2cc428;
            case 0x2CC42Cu: goto label_2cc42c;
            case 0x2CC430u: goto label_2cc430;
            case 0x2CC434u: goto label_2cc434;
            case 0x2CC438u: goto label_2cc438;
            case 0x2CC43Cu: goto label_2cc43c;
            case 0x2CC440u: goto label_2cc440;
            case 0x2CC444u: goto label_2cc444;
            case 0x2CC448u: goto label_2cc448;
            case 0x2CC44Cu: goto label_2cc44c;
            case 0x2CC450u: goto label_2cc450;
            case 0x2CC454u: goto label_2cc454;
            case 0x2CC458u: goto label_2cc458;
            case 0x2CC45Cu: goto label_2cc45c;
            case 0x2CC460u: goto label_2cc460;
            case 0x2CC464u: goto label_2cc464;
            case 0x2CC468u: goto label_2cc468;
            case 0x2CC46Cu: goto label_2cc46c;
            case 0x2CC470u: goto label_2cc470;
            case 0x2CC474u: goto label_2cc474;
            case 0x2CC478u: goto label_2cc478;
            case 0x2CC47Cu: goto label_2cc47c;
            case 0x2CC480u: goto label_2cc480;
            case 0x2CC484u: goto label_2cc484;
            case 0x2CC488u: goto label_2cc488;
            case 0x2CC48Cu: goto label_2cc48c;
            case 0x2CC490u: goto label_2cc490;
            case 0x2CC494u: goto label_2cc494;
            case 0x2CC498u: goto label_2cc498;
            case 0x2CC49Cu: goto label_2cc49c;
            case 0x2CC4A0u: goto label_2cc4a0;
            case 0x2CC4A4u: goto label_2cc4a4;
            case 0x2CC4A8u: goto label_2cc4a8;
            case 0x2CC4ACu: goto label_2cc4ac;
            case 0x2CC4B0u: goto label_2cc4b0;
            case 0x2CC4B4u: goto label_2cc4b4;
            case 0x2CC4B8u: goto label_2cc4b8;
            case 0x2CC4BCu: goto label_2cc4bc;
            case 0x2CC4C0u: goto label_2cc4c0;
            case 0x2CC4C4u: goto label_2cc4c4;
            case 0x2CC4C8u: goto label_2cc4c8;
            case 0x2CC4CCu: goto label_2cc4cc;
            case 0x2CC4D0u: goto label_2cc4d0;
            case 0x2CC4D4u: goto label_2cc4d4;
            case 0x2CC4D8u: goto label_2cc4d8;
            case 0x2CC4DCu: goto label_2cc4dc;
            case 0x2CC4E0u: goto label_2cc4e0;
            case 0x2CC4E4u: goto label_2cc4e4;
            case 0x2CC4E8u: goto label_2cc4e8;
            case 0x2CC4ECu: goto label_2cc4ec;
            case 0x2CC4F0u: goto label_2cc4f0;
            case 0x2CC4F4u: goto label_2cc4f4;
            case 0x2CC4F8u: goto label_2cc4f8;
            case 0x2CC4FCu: goto label_2cc4fc;
            case 0x2CC500u: goto label_2cc500;
            case 0x2CC504u: goto label_2cc504;
            case 0x2CC508u: goto label_2cc508;
            case 0x2CC50Cu: goto label_2cc50c;
            case 0x2CC510u: goto label_2cc510;
            case 0x2CC514u: goto label_2cc514;
            case 0x2CC518u: goto label_2cc518;
            case 0x2CC51Cu: goto label_2cc51c;
            case 0x2CC520u: goto label_2cc520;
            case 0x2CC524u: goto label_2cc524;
            case 0x2CC528u: goto label_2cc528;
            case 0x2CC52Cu: goto label_2cc52c;
            case 0x2CC530u: goto label_2cc530;
            case 0x2CC534u: goto label_2cc534;
            case 0x2CC538u: goto label_2cc538;
            case 0x2CC53Cu: goto label_2cc53c;
            case 0x2CC540u: goto label_2cc540;
            case 0x2CC544u: goto label_2cc544;
            case 0x2CC548u: goto label_2cc548;
            case 0x2CC54Cu: goto label_2cc54c;
            case 0x2CC550u: goto label_2cc550;
            case 0x2CC554u: goto label_2cc554;
            case 0x2CC558u: goto label_2cc558;
            case 0x2CC55Cu: goto label_2cc55c;
            case 0x2CC560u: goto label_2cc560;
            case 0x2CC564u: goto label_2cc564;
            case 0x2CC568u: goto label_2cc568;
            case 0x2CC56Cu: goto label_2cc56c;
            case 0x2CC570u: goto label_2cc570;
            case 0x2CC574u: goto label_2cc574;
            case 0x2CC578u: goto label_2cc578;
            case 0x2CC57Cu: goto label_2cc57c;
            case 0x2CC580u: goto label_2cc580;
            case 0x2CC584u: goto label_2cc584;
            case 0x2CC588u: goto label_2cc588;
            case 0x2CC58Cu: goto label_2cc58c;
            case 0x2CC590u: goto label_2cc590;
            case 0x2CC594u: goto label_2cc594;
            case 0x2CC598u: goto label_2cc598;
            case 0x2CC59Cu: goto label_2cc59c;
            case 0x2CC5A0u: goto label_2cc5a0;
            case 0x2CC5A4u: goto label_2cc5a4;
            case 0x2CC5A8u: goto label_2cc5a8;
            case 0x2CC5ACu: goto label_2cc5ac;
            case 0x2CC5B0u: goto label_2cc5b0;
            case 0x2CC5B4u: goto label_2cc5b4;
            case 0x2CC5B8u: goto label_2cc5b8;
            case 0x2CC5BCu: goto label_2cc5bc;
            case 0x2CC5C0u: goto label_2cc5c0;
            case 0x2CC5C4u: goto label_2cc5c4;
            case 0x2CC5C8u: goto label_2cc5c8;
            case 0x2CC5CCu: goto label_2cc5cc;
            case 0x2CC5D0u: goto label_2cc5d0;
            case 0x2CC5D4u: goto label_2cc5d4;
            case 0x2CC5D8u: goto label_2cc5d8;
            case 0x2CC5DCu: goto label_2cc5dc;
            case 0x2CC5E0u: goto label_2cc5e0;
            case 0x2CC5E4u: goto label_2cc5e4;
            case 0x2CC5E8u: goto label_2cc5e8;
            case 0x2CC5ECu: goto label_2cc5ec;
            case 0x2CC5F0u: goto label_2cc5f0;
            case 0x2CC5F4u: goto label_2cc5f4;
            case 0x2CC5F8u: goto label_2cc5f8;
            case 0x2CC5FCu: goto label_2cc5fc;
            case 0x2CC600u: goto label_2cc600;
            case 0x2CC604u: goto label_2cc604;
            case 0x2CC608u: goto label_2cc608;
            case 0x2CC60Cu: goto label_2cc60c;
            case 0x2CC610u: goto label_2cc610;
            case 0x2CC614u: goto label_2cc614;
            case 0x2CC618u: goto label_2cc618;
            case 0x2CC61Cu: goto label_2cc61c;
            case 0x2CC620u: goto label_2cc620;
            case 0x2CC624u: goto label_2cc624;
            case 0x2CC628u: goto label_2cc628;
            case 0x2CC62Cu: goto label_2cc62c;
            case 0x2CC630u: goto label_2cc630;
            case 0x2CC634u: goto label_2cc634;
            case 0x2CC638u: goto label_2cc638;
            case 0x2CC63Cu: goto label_2cc63c;
            case 0x2CC640u: goto label_2cc640;
            case 0x2CC644u: goto label_2cc644;
            case 0x2CC648u: goto label_2cc648;
            case 0x2CC64Cu: goto label_2cc64c;
            case 0x2CC650u: goto label_2cc650;
            case 0x2CC654u: goto label_2cc654;
            case 0x2CC658u: goto label_2cc658;
            case 0x2CC65Cu: goto label_2cc65c;
            case 0x2CC660u: goto label_2cc660;
            case 0x2CC664u: goto label_2cc664;
            case 0x2CC668u: goto label_2cc668;
            case 0x2CC66Cu: goto label_2cc66c;
            case 0x2CC670u: goto label_2cc670;
            case 0x2CC674u: goto label_2cc674;
            case 0x2CC678u: goto label_2cc678;
            case 0x2CC67Cu: goto label_2cc67c;
            case 0x2CC680u: goto label_2cc680;
            case 0x2CC684u: goto label_2cc684;
            case 0x2CC688u: goto label_2cc688;
            case 0x2CC68Cu: goto label_2cc68c;
            case 0x2CC690u: goto label_2cc690;
            case 0x2CC694u: goto label_2cc694;
            case 0x2CC698u: goto label_2cc698;
            case 0x2CC69Cu: goto label_2cc69c;
            case 0x2CC6A0u: goto label_2cc6a0;
            case 0x2CC6A4u: goto label_2cc6a4;
            case 0x2CC6A8u: goto label_2cc6a8;
            case 0x2CC6ACu: goto label_2cc6ac;
            case 0x2CC6B0u: goto label_2cc6b0;
            case 0x2CC6B4u: goto label_2cc6b4;
            case 0x2CC6B8u: goto label_2cc6b8;
            case 0x2CC6BCu: goto label_2cc6bc;
            case 0x2CC6C0u: goto label_2cc6c0;
            case 0x2CC6C4u: goto label_2cc6c4;
            case 0x2CC6C8u: goto label_2cc6c8;
            case 0x2CC6CCu: goto label_2cc6cc;
            case 0x2CC6D0u: goto label_2cc6d0;
            case 0x2CC6D4u: goto label_2cc6d4;
            case 0x2CC6D8u: goto label_2cc6d8;
            case 0x2CC6DCu: goto label_2cc6dc;
            case 0x2CC6E0u: goto label_2cc6e0;
            case 0x2CC6E4u: goto label_2cc6e4;
            case 0x2CC6E8u: goto label_2cc6e8;
            case 0x2CC6ECu: goto label_2cc6ec;
            case 0x2CC6F0u: goto label_2cc6f0;
            case 0x2CC6F4u: goto label_2cc6f4;
            case 0x2CC6F8u: goto label_2cc6f8;
            case 0x2CC6FCu: goto label_2cc6fc;
            case 0x2CC700u: goto label_2cc700;
            case 0x2CC704u: goto label_2cc704;
            case 0x2CC708u: goto label_2cc708;
            case 0x2CC70Cu: goto label_2cc70c;
            case 0x2CC710u: goto label_2cc710;
            case 0x2CC714u: goto label_2cc714;
            case 0x2CC718u: goto label_2cc718;
            case 0x2CC71Cu: goto label_2cc71c;
            case 0x2CC720u: goto label_2cc720;
            case 0x2CC724u: goto label_2cc724;
            case 0x2CC728u: goto label_2cc728;
            case 0x2CC72Cu: goto label_2cc72c;
            case 0x2CC730u: goto label_2cc730;
            case 0x2CC734u: goto label_2cc734;
            case 0x2CC738u: goto label_2cc738;
            case 0x2CC73Cu: goto label_2cc73c;
            case 0x2CC740u: goto label_2cc740;
            case 0x2CC744u: goto label_2cc744;
            case 0x2CC748u: goto label_2cc748;
            case 0x2CC74Cu: goto label_2cc74c;
            case 0x2CC750u: goto label_2cc750;
            case 0x2CC754u: goto label_2cc754;
            case 0x2CC758u: goto label_2cc758;
            case 0x2CC75Cu: goto label_2cc75c;
            case 0x2CC760u: goto label_2cc760;
            case 0x2CC764u: goto label_2cc764;
            case 0x2CC768u: goto label_2cc768;
            case 0x2CC76Cu: goto label_2cc76c;
            case 0x2CC770u: goto label_2cc770;
            case 0x2CC774u: goto label_2cc774;
            case 0x2CC778u: goto label_2cc778;
            case 0x2CC77Cu: goto label_2cc77c;
            case 0x2CC780u: goto label_2cc780;
            case 0x2CC784u: goto label_2cc784;
            case 0x2CC788u: goto label_2cc788;
            case 0x2CC78Cu: goto label_2cc78c;
            case 0x2CC790u: goto label_2cc790;
            case 0x2CC794u: goto label_2cc794;
            case 0x2CC798u: goto label_2cc798;
            case 0x2CC79Cu: goto label_2cc79c;
            case 0x2CC7A0u: goto label_2cc7a0;
            case 0x2CC7A4u: goto label_2cc7a4;
            case 0x2CC7A8u: goto label_2cc7a8;
            case 0x2CC7ACu: goto label_2cc7ac;
            case 0x2CC7B0u: goto label_2cc7b0;
            case 0x2CC7B4u: goto label_2cc7b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CC20Cu;
label_2cc20c:
    // 0x2cc20c: 0x3c02002d
    ctx->pc = 0x2cc20cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc210:
    // 0x2cc210: 0x2448d3b8
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294955960));
label_2cc214:
    // 0x2cc214: 0x1000001f
label_2cc218:
    if (ctx->pc == 0x2CC218u) {
        ctx->pc = 0x2CC218u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC21Cu;
        goto label_2cc21c;
    }
    ctx->pc = 0x2CC214u;
    {
        const bool branch_taken_0x2cc214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC218u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cc214) {
            ctx->pc = 0x2CC294u;
            goto label_2cc294;
        }
    }
    ctx->pc = 0x2CC21Cu;
label_2cc21c:
    // 0x2cc21c: 0x3c02002d
    ctx->pc = 0x2cc21cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc220:
    // 0x2cc220: 0x4600e824
    ctx->pc = 0x2cc220u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[29]);
label_2cc224:
    // 0x2cc224: 0x44150000
    ctx->pc = 0x2cc224u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[0]);
label_2cc228:
    // 0x2cc228: 0x1000001a
label_2cc22c:
    if (ctx->pc == 0x2CC22Cu) {
        ctx->pc = 0x2CC22Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294956032));
        ctx->pc = 0x2CC230u;
        goto label_2cc230;
    }
    ctx->pc = 0x2CC228u;
    {
        const bool branch_taken_0x2cc228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC22Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294956032));
        if (branch_taken_0x2cc228) {
            ctx->pc = 0x2CC294u;
            goto label_2cc294;
        }
    }
    ctx->pc = 0x2CC230u;
label_2cc230:
    // 0x2cc230: 0x3c014120
    ctx->pc = 0x2cc230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_2cc234:
    // 0x2cc234: 0x44810000
    ctx->pc = 0x2cc234u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2cc238:
    // 0x2cc238: 0x4600e834
    ctx->pc = 0x2cc238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[29], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc23c:
    // 0x2cc23c: 0x0
    ctx->pc = 0x2cc23cu;
    // NOP
label_2cc240:
    // 0x2cc240: 0x45010004
label_2cc244:
    if (ctx->pc == 0x2CC244u) {
        ctx->pc = 0x2CC244u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC248u;
        goto label_2cc248;
    }
    ctx->pc = 0x2CC240u;
    {
        const bool branch_taken_0x2cc240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC244u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc240) {
            ctx->pc = 0x2CC254u;
            goto label_2cc254;
        }
    }
    ctx->pc = 0x2CC248u;
label_2cc248:
    // 0x2cc248: 0x46007802
    ctx->pc = 0x2cc248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_2cc24c:
    // 0x2cc24c: 0x46000064
    ctx->pc = 0x2cc24cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2cc250:
    // 0x2cc250: 0x44150800
    ctx->pc = 0x2cc250u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[1]);
label_2cc254:
    // 0x2cc254: 0x24030008
    ctx->pc = 0x2cc254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_2cc258:
    // 0x2cc258: 0x24020007
    ctx->pc = 0x2cc258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2cc25c:
    // 0x2cc25c: 0x55102a
    ctx->pc = 0x2cc25cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 21)));
label_2cc260:
    // 0x2cc260: 0x62a80a
    ctx->pc = 0x2cc260u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
label_2cc264:
    // 0x2cc264: 0x1aa00004
label_2cc268:
    if (ctx->pc == 0x2CC268u) {
        ctx->pc = 0x2CC268u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 21)));
        ctx->pc = 0x2CC26Cu;
        goto label_2cc26c;
    }
    ctx->pc = 0x2CC264u;
    {
        const bool branch_taken_0x2cc264 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2CC268u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 21)));
        if (branch_taken_0x2cc264) {
            ctx->pc = 0x2CC278u;
            goto label_2cc278;
        }
    }
    ctx->pc = 0x2CC26Cu;
label_2cc26c:
    // 0x2cc26c: 0xc0182d
    ctx->pc = 0x2cc26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cc270:
    // 0x2cc270: 0x10000002
label_2cc274:
    if (ctx->pc == 0x2CC274u) {
        ctx->pc = 0x2CC274u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 21));
        ctx->pc = 0x2CC278u;
        goto label_2cc278;
    }
    ctx->pc = 0x2CC270u;
    {
        const bool branch_taken_0x2cc270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC274u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 21));
        if (branch_taken_0x2cc270) {
            ctx->pc = 0x2CC27Cu;
            goto label_2cc27c;
        }
    }
    ctx->pc = 0x2CC278u;
label_2cc278:
    // 0x2cc278: 0x24030001
    ctx->pc = 0x2cc278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2cc27c:
    // 0x2cc27c: 0x96420032
    ctx->pc = 0x2cc27cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_2cc280:
    // 0x2cc280: 0x60a82d
    ctx->pc = 0x2cc280u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cc284:
    // 0x2cc284: 0x42a80b
    ctx->pc = 0x2cc284u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 2));
label_2cc288:
    // 0x2cc288: 0x3c02002d
    ctx->pc = 0x2cc288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc28c:
    // 0x2cc28c: 0x2448d490
    ctx->pc = 0x2cc28cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294956176));
label_2cc290:
    // 0x2cc290: 0x241e0001
    ctx->pc = 0x2cc290u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_2cc294:
    // 0x2cc294: 0x9642002c
    ctx->pc = 0x2cc294u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2cc298:
    // 0x2cc298: 0x34420004
    ctx->pc = 0x2cc298u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
label_2cc29c:
    // 0x2cc29c: 0x10000007
label_2cc2a0:
    if (ctx->pc == 0x2CC2A0u) {
        ctx->pc = 0x2CC2A0u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2CC2A4u;
        goto label_2cc2a4;
    }
    ctx->pc = 0x2CC29Cu;
    {
        const bool branch_taken_0x2cc29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC2A0u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2cc29c) {
            ctx->pc = 0x2CC2BCu;
            goto label_2cc2bc;
        }
    }
    ctx->pc = 0x2CC2A4u;
label_2cc2a4:
    // 0x2cc2a4: 0x3c02002d
    ctx->pc = 0x2cc2a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc2a8:
    // 0x2cc2a8: 0x2448d6e8
    ctx->pc = 0x2cc2a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294956776));
label_2cc2ac:
    // 0x2cc2ac: 0x9642002c
    ctx->pc = 0x2cc2acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2cc2b0:
    // 0x2cc2b0: 0x34420004
    ctx->pc = 0x2cc2b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
label_2cc2b4:
    // 0x2cc2b4: 0xa642002c
    ctx->pc = 0x2cc2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
label_2cc2b8:
    // 0x2cc2b8: 0xc0a82d
    ctx->pc = 0x2cc2b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cc2bc:
    // 0x2cc2bc: 0xb5102a
    ctx->pc = 0x2cc2bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 21)));
label_2cc2c0:
    // 0x2cc2c0: 0xa2a80b
    ctx->pc = 0x2cc2c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 5));
label_2cc2c4:
    // 0x2cc2c4: 0x24170001
    ctx->pc = 0x2cc2c4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_2cc2c8:
    // 0x2cc2c8: 0x96430030
    ctx->pc = 0x2cc2c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_2cc2cc:
    // 0x2cc2cc: 0x2402001f
    ctx->pc = 0x2cc2ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_2cc2d0:
    // 0x2cc2d0: 0x40282d
    ctx->pc = 0x2cc2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc2d4:
    // 0x2cc2d4: 0x63280b
    ctx->pc = 0x2cc2d4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2cc2d8:
    // 0x2cc2d8: 0xc5102a
    ctx->pc = 0x2cc2d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
label_2cc2dc:
    // 0x2cc2dc: 0xc2280b
    ctx->pc = 0x2cc2dcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
label_2cc2e0:
    // 0x2cc2e0: 0x2ce20006
    ctx->pc = 0x2cc2e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 6));
label_2cc2e4:
    // 0x2cc2e4: 0x1040003b
label_2cc2e8:
    if (ctx->pc == 0x2CC2E8u) {
        ctx->pc = 0x2CC2E8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2ECu;
        goto label_2cc2ec;
    }
    ctx->pc = 0x2CC2E4u;
    {
        const bool branch_taken_0x2cc2e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC2E8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc2e4) {
            ctx->pc = 0x2CC3D4u;
            goto label_2cc3d4;
        }
    }
    ctx->pc = 0x2CC2ECu;
label_2cc2ec:
    // 0x2cc2ec: 0x3c02003b
    ctx->pc = 0x2cc2ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2cc2f0:
    // 0x2cc2f0: 0x24427560
    ctx->pc = 0x2cc2f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30048));
label_2cc2f4:
    // 0x2cc2f4: 0x71880
    ctx->pc = 0x2cc2f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
label_2cc2f8:
    // 0x2cc2f8: 0x621821
    ctx->pc = 0x2cc2f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cc2fc:
    // 0x2cc2fc: 0x8c620000
    ctx->pc = 0x2cc2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc300:
    // 0x2cc300: 0x400008
label_2cc304:
    if (ctx->pc == 0x2CC304u) {
        ctx->pc = 0x2CC308u;
        goto label_2cc308;
    }
    ctx->pc = 0x2CC300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBCC8u: goto label_2cbcc8;
            case 0x2CBCCCu: goto label_2cbccc;
            case 0x2CBCD0u: goto label_2cbcd0;
            case 0x2CBCD4u: goto label_2cbcd4;
            case 0x2CBCD8u: goto label_2cbcd8;
            case 0x2CBCDCu: goto label_2cbcdc;
            case 0x2CBCE0u: goto label_2cbce0;
            case 0x2CBCE4u: goto label_2cbce4;
            case 0x2CBCE8u: goto label_2cbce8;
            case 0x2CBCECu: goto label_2cbcec;
            case 0x2CBCF0u: goto label_2cbcf0;
            case 0x2CBCF4u: goto label_2cbcf4;
            case 0x2CBCF8u: goto label_2cbcf8;
            case 0x2CBCFCu: goto label_2cbcfc;
            case 0x2CBD00u: goto label_2cbd00;
            case 0x2CBD04u: goto label_2cbd04;
            case 0x2CBD08u: goto label_2cbd08;
            case 0x2CBD0Cu: goto label_2cbd0c;
            case 0x2CBD10u: goto label_2cbd10;
            case 0x2CBD14u: goto label_2cbd14;
            case 0x2CBD18u: goto label_2cbd18;
            case 0x2CBD1Cu: goto label_2cbd1c;
            case 0x2CBD20u: goto label_2cbd20;
            case 0x2CBD24u: goto label_2cbd24;
            case 0x2CBD28u: goto label_2cbd28;
            case 0x2CBD2Cu: goto label_2cbd2c;
            case 0x2CBD30u: goto label_2cbd30;
            case 0x2CBD34u: goto label_2cbd34;
            case 0x2CBD38u: goto label_2cbd38;
            case 0x2CBD3Cu: goto label_2cbd3c;
            case 0x2CBD40u: goto label_2cbd40;
            case 0x2CBD44u: goto label_2cbd44;
            case 0x2CBD48u: goto label_2cbd48;
            case 0x2CBD4Cu: goto label_2cbd4c;
            case 0x2CBD50u: goto label_2cbd50;
            case 0x2CBD54u: goto label_2cbd54;
            case 0x2CBD58u: goto label_2cbd58;
            case 0x2CBD5Cu: goto label_2cbd5c;
            case 0x2CBD60u: goto label_2cbd60;
            case 0x2CBD64u: goto label_2cbd64;
            case 0x2CBD68u: goto label_2cbd68;
            case 0x2CBD6Cu: goto label_2cbd6c;
            case 0x2CBD70u: goto label_2cbd70;
            case 0x2CBD74u: goto label_2cbd74;
            case 0x2CBD78u: goto label_2cbd78;
            case 0x2CBD7Cu: goto label_2cbd7c;
            case 0x2CBD80u: goto label_2cbd80;
            case 0x2CBD84u: goto label_2cbd84;
            case 0x2CBD88u: goto label_2cbd88;
            case 0x2CBD8Cu: goto label_2cbd8c;
            case 0x2CBD90u: goto label_2cbd90;
            case 0x2CBD94u: goto label_2cbd94;
            case 0x2CBD98u: goto label_2cbd98;
            case 0x2CBD9Cu: goto label_2cbd9c;
            case 0x2CBDA0u: goto label_2cbda0;
            case 0x2CBDA4u: goto label_2cbda4;
            case 0x2CBDA8u: goto label_2cbda8;
            case 0x2CBDACu: goto label_2cbdac;
            case 0x2CBDB0u: goto label_2cbdb0;
            case 0x2CBDB4u: goto label_2cbdb4;
            case 0x2CBDB8u: goto label_2cbdb8;
            case 0x2CBDBCu: goto label_2cbdbc;
            case 0x2CBDC0u: goto label_2cbdc0;
            case 0x2CBDC4u: goto label_2cbdc4;
            case 0x2CBDC8u: goto label_2cbdc8;
            case 0x2CBDCCu: goto label_2cbdcc;
            case 0x2CBDD0u: goto label_2cbdd0;
            case 0x2CBDD4u: goto label_2cbdd4;
            case 0x2CBDD8u: goto label_2cbdd8;
            case 0x2CBDDCu: goto label_2cbddc;
            case 0x2CBDE0u: goto label_2cbde0;
            case 0x2CBDE4u: goto label_2cbde4;
            case 0x2CBDE8u: goto label_2cbde8;
            case 0x2CBDECu: goto label_2cbdec;
            case 0x2CBDF0u: goto label_2cbdf0;
            case 0x2CBDF4u: goto label_2cbdf4;
            case 0x2CBDF8u: goto label_2cbdf8;
            case 0x2CBDFCu: goto label_2cbdfc;
            case 0x2CBE00u: goto label_2cbe00;
            case 0x2CBE04u: goto label_2cbe04;
            case 0x2CBE08u: goto label_2cbe08;
            case 0x2CBE0Cu: goto label_2cbe0c;
            case 0x2CBE10u: goto label_2cbe10;
            case 0x2CBE14u: goto label_2cbe14;
            case 0x2CBE18u: goto label_2cbe18;
            case 0x2CBE1Cu: goto label_2cbe1c;
            case 0x2CBE20u: goto label_2cbe20;
            case 0x2CBE24u: goto label_2cbe24;
            case 0x2CBE28u: goto label_2cbe28;
            case 0x2CBE2Cu: goto label_2cbe2c;
            case 0x2CBE30u: goto label_2cbe30;
            case 0x2CBE34u: goto label_2cbe34;
            case 0x2CBE38u: goto label_2cbe38;
            case 0x2CBE3Cu: goto label_2cbe3c;
            case 0x2CBE40u: goto label_2cbe40;
            case 0x2CBE44u: goto label_2cbe44;
            case 0x2CBE48u: goto label_2cbe48;
            case 0x2CBE4Cu: goto label_2cbe4c;
            case 0x2CBE50u: goto label_2cbe50;
            case 0x2CBE54u: goto label_2cbe54;
            case 0x2CBE58u: goto label_2cbe58;
            case 0x2CBE5Cu: goto label_2cbe5c;
            case 0x2CBE60u: goto label_2cbe60;
            case 0x2CBE64u: goto label_2cbe64;
            case 0x2CBE68u: goto label_2cbe68;
            case 0x2CBE6Cu: goto label_2cbe6c;
            case 0x2CBE70u: goto label_2cbe70;
            case 0x2CBE74u: goto label_2cbe74;
            case 0x2CBE78u: goto label_2cbe78;
            case 0x2CBE7Cu: goto label_2cbe7c;
            case 0x2CBE80u: goto label_2cbe80;
            case 0x2CBE84u: goto label_2cbe84;
            case 0x2CBE88u: goto label_2cbe88;
            case 0x2CBE8Cu: goto label_2cbe8c;
            case 0x2CBE90u: goto label_2cbe90;
            case 0x2CBE94u: goto label_2cbe94;
            case 0x2CBE98u: goto label_2cbe98;
            case 0x2CBE9Cu: goto label_2cbe9c;
            case 0x2CBEA0u: goto label_2cbea0;
            case 0x2CBEA4u: goto label_2cbea4;
            case 0x2CBEA8u: goto label_2cbea8;
            case 0x2CBEACu: goto label_2cbeac;
            case 0x2CBEB0u: goto label_2cbeb0;
            case 0x2CBEB4u: goto label_2cbeb4;
            case 0x2CBEB8u: goto label_2cbeb8;
            case 0x2CBEBCu: goto label_2cbebc;
            case 0x2CBEC0u: goto label_2cbec0;
            case 0x2CBEC4u: goto label_2cbec4;
            case 0x2CBEC8u: goto label_2cbec8;
            case 0x2CBECCu: goto label_2cbecc;
            case 0x2CBED0u: goto label_2cbed0;
            case 0x2CBED4u: goto label_2cbed4;
            case 0x2CBED8u: goto label_2cbed8;
            case 0x2CBEDCu: goto label_2cbedc;
            case 0x2CBEE0u: goto label_2cbee0;
            case 0x2CBEE4u: goto label_2cbee4;
            case 0x2CBEE8u: goto label_2cbee8;
            case 0x2CBEECu: goto label_2cbeec;
            case 0x2CBEF0u: goto label_2cbef0;
            case 0x2CBEF4u: goto label_2cbef4;
            case 0x2CBEF8u: goto label_2cbef8;
            case 0x2CBEFCu: goto label_2cbefc;
            case 0x2CBF00u: goto label_2cbf00;
            case 0x2CBF04u: goto label_2cbf04;
            case 0x2CBF08u: goto label_2cbf08;
            case 0x2CBF0Cu: goto label_2cbf0c;
            case 0x2CBF10u: goto label_2cbf10;
            case 0x2CBF14u: goto label_2cbf14;
            case 0x2CBF18u: goto label_2cbf18;
            case 0x2CBF1Cu: goto label_2cbf1c;
            case 0x2CBF20u: goto label_2cbf20;
            case 0x2CBF24u: goto label_2cbf24;
            case 0x2CBF28u: goto label_2cbf28;
            case 0x2CBF2Cu: goto label_2cbf2c;
            case 0x2CBF30u: goto label_2cbf30;
            case 0x2CBF34u: goto label_2cbf34;
            case 0x2CBF38u: goto label_2cbf38;
            case 0x2CBF3Cu: goto label_2cbf3c;
            case 0x2CBF40u: goto label_2cbf40;
            case 0x2CBF44u: goto label_2cbf44;
            case 0x2CBF48u: goto label_2cbf48;
            case 0x2CBF4Cu: goto label_2cbf4c;
            case 0x2CBF50u: goto label_2cbf50;
            case 0x2CBF54u: goto label_2cbf54;
            case 0x2CBF58u: goto label_2cbf58;
            case 0x2CBF5Cu: goto label_2cbf5c;
            case 0x2CBF60u: goto label_2cbf60;
            case 0x2CBF64u: goto label_2cbf64;
            case 0x2CBF68u: goto label_2cbf68;
            case 0x2CBF6Cu: goto label_2cbf6c;
            case 0x2CBF70u: goto label_2cbf70;
            case 0x2CBF74u: goto label_2cbf74;
            case 0x2CBF78u: goto label_2cbf78;
            case 0x2CBF7Cu: goto label_2cbf7c;
            case 0x2CBF80u: goto label_2cbf80;
            case 0x2CBF84u: goto label_2cbf84;
            case 0x2CBF88u: goto label_2cbf88;
            case 0x2CBF8Cu: goto label_2cbf8c;
            case 0x2CBF90u: goto label_2cbf90;
            case 0x2CBF94u: goto label_2cbf94;
            case 0x2CBF98u: goto label_2cbf98;
            case 0x2CBF9Cu: goto label_2cbf9c;
            case 0x2CBFA0u: goto label_2cbfa0;
            case 0x2CBFA4u: goto label_2cbfa4;
            case 0x2CBFA8u: goto label_2cbfa8;
            case 0x2CBFACu: goto label_2cbfac;
            case 0x2CBFB0u: goto label_2cbfb0;
            case 0x2CBFB4u: goto label_2cbfb4;
            case 0x2CBFB8u: goto label_2cbfb8;
            case 0x2CBFBCu: goto label_2cbfbc;
            case 0x2CBFC0u: goto label_2cbfc0;
            case 0x2CBFC4u: goto label_2cbfc4;
            case 0x2CBFC8u: goto label_2cbfc8;
            case 0x2CBFCCu: goto label_2cbfcc;
            case 0x2CBFD0u: goto label_2cbfd0;
            case 0x2CBFD4u: goto label_2cbfd4;
            case 0x2CBFD8u: goto label_2cbfd8;
            case 0x2CBFDCu: goto label_2cbfdc;
            case 0x2CBFE0u: goto label_2cbfe0;
            case 0x2CBFE4u: goto label_2cbfe4;
            case 0x2CBFE8u: goto label_2cbfe8;
            case 0x2CBFECu: goto label_2cbfec;
            case 0x2CBFF0u: goto label_2cbff0;
            case 0x2CBFF4u: goto label_2cbff4;
            case 0x2CBFF8u: goto label_2cbff8;
            case 0x2CBFFCu: goto label_2cbffc;
            case 0x2CC000u: goto label_2cc000;
            case 0x2CC004u: goto label_2cc004;
            case 0x2CC008u: goto label_2cc008;
            case 0x2CC00Cu: goto label_2cc00c;
            case 0x2CC010u: goto label_2cc010;
            case 0x2CC014u: goto label_2cc014;
            case 0x2CC018u: goto label_2cc018;
            case 0x2CC01Cu: goto label_2cc01c;
            case 0x2CC020u: goto label_2cc020;
            case 0x2CC024u: goto label_2cc024;
            case 0x2CC028u: goto label_2cc028;
            case 0x2CC02Cu: goto label_2cc02c;
            case 0x2CC030u: goto label_2cc030;
            case 0x2CC034u: goto label_2cc034;
            case 0x2CC038u: goto label_2cc038;
            case 0x2CC03Cu: goto label_2cc03c;
            case 0x2CC040u: goto label_2cc040;
            case 0x2CC044u: goto label_2cc044;
            case 0x2CC048u: goto label_2cc048;
            case 0x2CC04Cu: goto label_2cc04c;
            case 0x2CC050u: goto label_2cc050;
            case 0x2CC054u: goto label_2cc054;
            case 0x2CC058u: goto label_2cc058;
            case 0x2CC05Cu: goto label_2cc05c;
            case 0x2CC060u: goto label_2cc060;
            case 0x2CC064u: goto label_2cc064;
            case 0x2CC068u: goto label_2cc068;
            case 0x2CC06Cu: goto label_2cc06c;
            case 0x2CC070u: goto label_2cc070;
            case 0x2CC074u: goto label_2cc074;
            case 0x2CC078u: goto label_2cc078;
            case 0x2CC07Cu: goto label_2cc07c;
            case 0x2CC080u: goto label_2cc080;
            case 0x2CC084u: goto label_2cc084;
            case 0x2CC088u: goto label_2cc088;
            case 0x2CC08Cu: goto label_2cc08c;
            case 0x2CC090u: goto label_2cc090;
            case 0x2CC094u: goto label_2cc094;
            case 0x2CC098u: goto label_2cc098;
            case 0x2CC09Cu: goto label_2cc09c;
            case 0x2CC0A0u: goto label_2cc0a0;
            case 0x2CC0A4u: goto label_2cc0a4;
            case 0x2CC0A8u: goto label_2cc0a8;
            case 0x2CC0ACu: goto label_2cc0ac;
            case 0x2CC0B0u: goto label_2cc0b0;
            case 0x2CC0B4u: goto label_2cc0b4;
            case 0x2CC0B8u: goto label_2cc0b8;
            case 0x2CC0BCu: goto label_2cc0bc;
            case 0x2CC0C0u: goto label_2cc0c0;
            case 0x2CC0C4u: goto label_2cc0c4;
            case 0x2CC0C8u: goto label_2cc0c8;
            case 0x2CC0CCu: goto label_2cc0cc;
            case 0x2CC0D0u: goto label_2cc0d0;
            case 0x2CC0D4u: goto label_2cc0d4;
            case 0x2CC0D8u: goto label_2cc0d8;
            case 0x2CC0DCu: goto label_2cc0dc;
            case 0x2CC0E0u: goto label_2cc0e0;
            case 0x2CC0E4u: goto label_2cc0e4;
            case 0x2CC0E8u: goto label_2cc0e8;
            case 0x2CC0ECu: goto label_2cc0ec;
            case 0x2CC0F0u: goto label_2cc0f0;
            case 0x2CC0F4u: goto label_2cc0f4;
            case 0x2CC0F8u: goto label_2cc0f8;
            case 0x2CC0FCu: goto label_2cc0fc;
            case 0x2CC100u: goto label_2cc100;
            case 0x2CC104u: goto label_2cc104;
            case 0x2CC108u: goto label_2cc108;
            case 0x2CC10Cu: goto label_2cc10c;
            case 0x2CC110u: goto label_2cc110;
            case 0x2CC114u: goto label_2cc114;
            case 0x2CC118u: goto label_2cc118;
            case 0x2CC11Cu: goto label_2cc11c;
            case 0x2CC120u: goto label_2cc120;
            case 0x2CC124u: goto label_2cc124;
            case 0x2CC128u: goto label_2cc128;
            case 0x2CC12Cu: goto label_2cc12c;
            case 0x2CC130u: goto label_2cc130;
            case 0x2CC134u: goto label_2cc134;
            case 0x2CC138u: goto label_2cc138;
            case 0x2CC13Cu: goto label_2cc13c;
            case 0x2CC140u: goto label_2cc140;
            case 0x2CC144u: goto label_2cc144;
            case 0x2CC148u: goto label_2cc148;
            case 0x2CC14Cu: goto label_2cc14c;
            case 0x2CC150u: goto label_2cc150;
            case 0x2CC154u: goto label_2cc154;
            case 0x2CC158u: goto label_2cc158;
            case 0x2CC15Cu: goto label_2cc15c;
            case 0x2CC160u: goto label_2cc160;
            case 0x2CC164u: goto label_2cc164;
            case 0x2CC168u: goto label_2cc168;
            case 0x2CC16Cu: goto label_2cc16c;
            case 0x2CC170u: goto label_2cc170;
            case 0x2CC174u: goto label_2cc174;
            case 0x2CC178u: goto label_2cc178;
            case 0x2CC17Cu: goto label_2cc17c;
            case 0x2CC180u: goto label_2cc180;
            case 0x2CC184u: goto label_2cc184;
            case 0x2CC188u: goto label_2cc188;
            case 0x2CC18Cu: goto label_2cc18c;
            case 0x2CC190u: goto label_2cc190;
            case 0x2CC194u: goto label_2cc194;
            case 0x2CC198u: goto label_2cc198;
            case 0x2CC19Cu: goto label_2cc19c;
            case 0x2CC1A0u: goto label_2cc1a0;
            case 0x2CC1A4u: goto label_2cc1a4;
            case 0x2CC1A8u: goto label_2cc1a8;
            case 0x2CC1ACu: goto label_2cc1ac;
            case 0x2CC1B0u: goto label_2cc1b0;
            case 0x2CC1B4u: goto label_2cc1b4;
            case 0x2CC1B8u: goto label_2cc1b8;
            case 0x2CC1BCu: goto label_2cc1bc;
            case 0x2CC1C0u: goto label_2cc1c0;
            case 0x2CC1C4u: goto label_2cc1c4;
            case 0x2CC1C8u: goto label_2cc1c8;
            case 0x2CC1CCu: goto label_2cc1cc;
            case 0x2CC1D0u: goto label_2cc1d0;
            case 0x2CC1D4u: goto label_2cc1d4;
            case 0x2CC1D8u: goto label_2cc1d8;
            case 0x2CC1DCu: goto label_2cc1dc;
            case 0x2CC1E0u: goto label_2cc1e0;
            case 0x2CC1E4u: goto label_2cc1e4;
            case 0x2CC1E8u: goto label_2cc1e8;
            case 0x2CC1ECu: goto label_2cc1ec;
            case 0x2CC1F0u: goto label_2cc1f0;
            case 0x2CC1F4u: goto label_2cc1f4;
            case 0x2CC1F8u: goto label_2cc1f8;
            case 0x2CC1FCu: goto label_2cc1fc;
            case 0x2CC200u: goto label_2cc200;
            case 0x2CC204u: goto label_2cc204;
            case 0x2CC208u: goto label_2cc208;
            case 0x2CC20Cu: goto label_2cc20c;
            case 0x2CC210u: goto label_2cc210;
            case 0x2CC214u: goto label_2cc214;
            case 0x2CC218u: goto label_2cc218;
            case 0x2CC21Cu: goto label_2cc21c;
            case 0x2CC220u: goto label_2cc220;
            case 0x2CC224u: goto label_2cc224;
            case 0x2CC228u: goto label_2cc228;
            case 0x2CC22Cu: goto label_2cc22c;
            case 0x2CC230u: goto label_2cc230;
            case 0x2CC234u: goto label_2cc234;
            case 0x2CC238u: goto label_2cc238;
            case 0x2CC23Cu: goto label_2cc23c;
            case 0x2CC240u: goto label_2cc240;
            case 0x2CC244u: goto label_2cc244;
            case 0x2CC248u: goto label_2cc248;
            case 0x2CC24Cu: goto label_2cc24c;
            case 0x2CC250u: goto label_2cc250;
            case 0x2CC254u: goto label_2cc254;
            case 0x2CC258u: goto label_2cc258;
            case 0x2CC25Cu: goto label_2cc25c;
            case 0x2CC260u: goto label_2cc260;
            case 0x2CC264u: goto label_2cc264;
            case 0x2CC268u: goto label_2cc268;
            case 0x2CC26Cu: goto label_2cc26c;
            case 0x2CC270u: goto label_2cc270;
            case 0x2CC274u: goto label_2cc274;
            case 0x2CC278u: goto label_2cc278;
            case 0x2CC27Cu: goto label_2cc27c;
            case 0x2CC280u: goto label_2cc280;
            case 0x2CC284u: goto label_2cc284;
            case 0x2CC288u: goto label_2cc288;
            case 0x2CC28Cu: goto label_2cc28c;
            case 0x2CC290u: goto label_2cc290;
            case 0x2CC294u: goto label_2cc294;
            case 0x2CC298u: goto label_2cc298;
            case 0x2CC29Cu: goto label_2cc29c;
            case 0x2CC2A0u: goto label_2cc2a0;
            case 0x2CC2A4u: goto label_2cc2a4;
            case 0x2CC2A8u: goto label_2cc2a8;
            case 0x2CC2ACu: goto label_2cc2ac;
            case 0x2CC2B0u: goto label_2cc2b0;
            case 0x2CC2B4u: goto label_2cc2b4;
            case 0x2CC2B8u: goto label_2cc2b8;
            case 0x2CC2BCu: goto label_2cc2bc;
            case 0x2CC2C0u: goto label_2cc2c0;
            case 0x2CC2C4u: goto label_2cc2c4;
            case 0x2CC2C8u: goto label_2cc2c8;
            case 0x2CC2CCu: goto label_2cc2cc;
            case 0x2CC2D0u: goto label_2cc2d0;
            case 0x2CC2D4u: goto label_2cc2d4;
            case 0x2CC2D8u: goto label_2cc2d8;
            case 0x2CC2DCu: goto label_2cc2dc;
            case 0x2CC2E0u: goto label_2cc2e0;
            case 0x2CC2E4u: goto label_2cc2e4;
            case 0x2CC2E8u: goto label_2cc2e8;
            case 0x2CC2ECu: goto label_2cc2ec;
            case 0x2CC2F0u: goto label_2cc2f0;
            case 0x2CC2F4u: goto label_2cc2f4;
            case 0x2CC2F8u: goto label_2cc2f8;
            case 0x2CC2FCu: goto label_2cc2fc;
            case 0x2CC300u: goto label_2cc300;
            case 0x2CC304u: goto label_2cc304;
            case 0x2CC308u: goto label_2cc308;
            case 0x2CC30Cu: goto label_2cc30c;
            case 0x2CC310u: goto label_2cc310;
            case 0x2CC314u: goto label_2cc314;
            case 0x2CC318u: goto label_2cc318;
            case 0x2CC31Cu: goto label_2cc31c;
            case 0x2CC320u: goto label_2cc320;
            case 0x2CC324u: goto label_2cc324;
            case 0x2CC328u: goto label_2cc328;
            case 0x2CC32Cu: goto label_2cc32c;
            case 0x2CC330u: goto label_2cc330;
            case 0x2CC334u: goto label_2cc334;
            case 0x2CC338u: goto label_2cc338;
            case 0x2CC33Cu: goto label_2cc33c;
            case 0x2CC340u: goto label_2cc340;
            case 0x2CC344u: goto label_2cc344;
            case 0x2CC348u: goto label_2cc348;
            case 0x2CC34Cu: goto label_2cc34c;
            case 0x2CC350u: goto label_2cc350;
            case 0x2CC354u: goto label_2cc354;
            case 0x2CC358u: goto label_2cc358;
            case 0x2CC35Cu: goto label_2cc35c;
            case 0x2CC360u: goto label_2cc360;
            case 0x2CC364u: goto label_2cc364;
            case 0x2CC368u: goto label_2cc368;
            case 0x2CC36Cu: goto label_2cc36c;
            case 0x2CC370u: goto label_2cc370;
            case 0x2CC374u: goto label_2cc374;
            case 0x2CC378u: goto label_2cc378;
            case 0x2CC37Cu: goto label_2cc37c;
            case 0x2CC380u: goto label_2cc380;
            case 0x2CC384u: goto label_2cc384;
            case 0x2CC388u: goto label_2cc388;
            case 0x2CC38Cu: goto label_2cc38c;
            case 0x2CC390u: goto label_2cc390;
            case 0x2CC394u: goto label_2cc394;
            case 0x2CC398u: goto label_2cc398;
            case 0x2CC39Cu: goto label_2cc39c;
            case 0x2CC3A0u: goto label_2cc3a0;
            case 0x2CC3A4u: goto label_2cc3a4;
            case 0x2CC3A8u: goto label_2cc3a8;
            case 0x2CC3ACu: goto label_2cc3ac;
            case 0x2CC3B0u: goto label_2cc3b0;
            case 0x2CC3B4u: goto label_2cc3b4;
            case 0x2CC3B8u: goto label_2cc3b8;
            case 0x2CC3BCu: goto label_2cc3bc;
            case 0x2CC3C0u: goto label_2cc3c0;
            case 0x2CC3C4u: goto label_2cc3c4;
            case 0x2CC3C8u: goto label_2cc3c8;
            case 0x2CC3CCu: goto label_2cc3cc;
            case 0x2CC3D0u: goto label_2cc3d0;
            case 0x2CC3D4u: goto label_2cc3d4;
            case 0x2CC3D8u: goto label_2cc3d8;
            case 0x2CC3DCu: goto label_2cc3dc;
            case 0x2CC3E0u: goto label_2cc3e0;
            case 0x2CC3E4u: goto label_2cc3e4;
            case 0x2CC3E8u: goto label_2cc3e8;
            case 0x2CC3ECu: goto label_2cc3ec;
            case 0x2CC3F0u: goto label_2cc3f0;
            case 0x2CC3F4u: goto label_2cc3f4;
            case 0x2CC3F8u: goto label_2cc3f8;
            case 0x2CC3FCu: goto label_2cc3fc;
            case 0x2CC400u: goto label_2cc400;
            case 0x2CC404u: goto label_2cc404;
            case 0x2CC408u: goto label_2cc408;
            case 0x2CC40Cu: goto label_2cc40c;
            case 0x2CC410u: goto label_2cc410;
            case 0x2CC414u: goto label_2cc414;
            case 0x2CC418u: goto label_2cc418;
            case 0x2CC41Cu: goto label_2cc41c;
            case 0x2CC420u: goto label_2cc420;
            case 0x2CC424u: goto label_2cc424;
            case 0x2CC428u: goto label_2cc428;
            case 0x2CC42Cu: goto label_2cc42c;
            case 0x2CC430u: goto label_2cc430;
            case 0x2CC434u: goto label_2cc434;
            case 0x2CC438u: goto label_2cc438;
            case 0x2CC43Cu: goto label_2cc43c;
            case 0x2CC440u: goto label_2cc440;
            case 0x2CC444u: goto label_2cc444;
            case 0x2CC448u: goto label_2cc448;
            case 0x2CC44Cu: goto label_2cc44c;
            case 0x2CC450u: goto label_2cc450;
            case 0x2CC454u: goto label_2cc454;
            case 0x2CC458u: goto label_2cc458;
            case 0x2CC45Cu: goto label_2cc45c;
            case 0x2CC460u: goto label_2cc460;
            case 0x2CC464u: goto label_2cc464;
            case 0x2CC468u: goto label_2cc468;
            case 0x2CC46Cu: goto label_2cc46c;
            case 0x2CC470u: goto label_2cc470;
            case 0x2CC474u: goto label_2cc474;
            case 0x2CC478u: goto label_2cc478;
            case 0x2CC47Cu: goto label_2cc47c;
            case 0x2CC480u: goto label_2cc480;
            case 0x2CC484u: goto label_2cc484;
            case 0x2CC488u: goto label_2cc488;
            case 0x2CC48Cu: goto label_2cc48c;
            case 0x2CC490u: goto label_2cc490;
            case 0x2CC494u: goto label_2cc494;
            case 0x2CC498u: goto label_2cc498;
            case 0x2CC49Cu: goto label_2cc49c;
            case 0x2CC4A0u: goto label_2cc4a0;
            case 0x2CC4A4u: goto label_2cc4a4;
            case 0x2CC4A8u: goto label_2cc4a8;
            case 0x2CC4ACu: goto label_2cc4ac;
            case 0x2CC4B0u: goto label_2cc4b0;
            case 0x2CC4B4u: goto label_2cc4b4;
            case 0x2CC4B8u: goto label_2cc4b8;
            case 0x2CC4BCu: goto label_2cc4bc;
            case 0x2CC4C0u: goto label_2cc4c0;
            case 0x2CC4C4u: goto label_2cc4c4;
            case 0x2CC4C8u: goto label_2cc4c8;
            case 0x2CC4CCu: goto label_2cc4cc;
            case 0x2CC4D0u: goto label_2cc4d0;
            case 0x2CC4D4u: goto label_2cc4d4;
            case 0x2CC4D8u: goto label_2cc4d8;
            case 0x2CC4DCu: goto label_2cc4dc;
            case 0x2CC4E0u: goto label_2cc4e0;
            case 0x2CC4E4u: goto label_2cc4e4;
            case 0x2CC4E8u: goto label_2cc4e8;
            case 0x2CC4ECu: goto label_2cc4ec;
            case 0x2CC4F0u: goto label_2cc4f0;
            case 0x2CC4F4u: goto label_2cc4f4;
            case 0x2CC4F8u: goto label_2cc4f8;
            case 0x2CC4FCu: goto label_2cc4fc;
            case 0x2CC500u: goto label_2cc500;
            case 0x2CC504u: goto label_2cc504;
            case 0x2CC508u: goto label_2cc508;
            case 0x2CC50Cu: goto label_2cc50c;
            case 0x2CC510u: goto label_2cc510;
            case 0x2CC514u: goto label_2cc514;
            case 0x2CC518u: goto label_2cc518;
            case 0x2CC51Cu: goto label_2cc51c;
            case 0x2CC520u: goto label_2cc520;
            case 0x2CC524u: goto label_2cc524;
            case 0x2CC528u: goto label_2cc528;
            case 0x2CC52Cu: goto label_2cc52c;
            case 0x2CC530u: goto label_2cc530;
            case 0x2CC534u: goto label_2cc534;
            case 0x2CC538u: goto label_2cc538;
            case 0x2CC53Cu: goto label_2cc53c;
            case 0x2CC540u: goto label_2cc540;
            case 0x2CC544u: goto label_2cc544;
            case 0x2CC548u: goto label_2cc548;
            case 0x2CC54Cu: goto label_2cc54c;
            case 0x2CC550u: goto label_2cc550;
            case 0x2CC554u: goto label_2cc554;
            case 0x2CC558u: goto label_2cc558;
            case 0x2CC55Cu: goto label_2cc55c;
            case 0x2CC560u: goto label_2cc560;
            case 0x2CC564u: goto label_2cc564;
            case 0x2CC568u: goto label_2cc568;
            case 0x2CC56Cu: goto label_2cc56c;
            case 0x2CC570u: goto label_2cc570;
            case 0x2CC574u: goto label_2cc574;
            case 0x2CC578u: goto label_2cc578;
            case 0x2CC57Cu: goto label_2cc57c;
            case 0x2CC580u: goto label_2cc580;
            case 0x2CC584u: goto label_2cc584;
            case 0x2CC588u: goto label_2cc588;
            case 0x2CC58Cu: goto label_2cc58c;
            case 0x2CC590u: goto label_2cc590;
            case 0x2CC594u: goto label_2cc594;
            case 0x2CC598u: goto label_2cc598;
            case 0x2CC59Cu: goto label_2cc59c;
            case 0x2CC5A0u: goto label_2cc5a0;
            case 0x2CC5A4u: goto label_2cc5a4;
            case 0x2CC5A8u: goto label_2cc5a8;
            case 0x2CC5ACu: goto label_2cc5ac;
            case 0x2CC5B0u: goto label_2cc5b0;
            case 0x2CC5B4u: goto label_2cc5b4;
            case 0x2CC5B8u: goto label_2cc5b8;
            case 0x2CC5BCu: goto label_2cc5bc;
            case 0x2CC5C0u: goto label_2cc5c0;
            case 0x2CC5C4u: goto label_2cc5c4;
            case 0x2CC5C8u: goto label_2cc5c8;
            case 0x2CC5CCu: goto label_2cc5cc;
            case 0x2CC5D0u: goto label_2cc5d0;
            case 0x2CC5D4u: goto label_2cc5d4;
            case 0x2CC5D8u: goto label_2cc5d8;
            case 0x2CC5DCu: goto label_2cc5dc;
            case 0x2CC5E0u: goto label_2cc5e0;
            case 0x2CC5E4u: goto label_2cc5e4;
            case 0x2CC5E8u: goto label_2cc5e8;
            case 0x2CC5ECu: goto label_2cc5ec;
            case 0x2CC5F0u: goto label_2cc5f0;
            case 0x2CC5F4u: goto label_2cc5f4;
            case 0x2CC5F8u: goto label_2cc5f8;
            case 0x2CC5FCu: goto label_2cc5fc;
            case 0x2CC600u: goto label_2cc600;
            case 0x2CC604u: goto label_2cc604;
            case 0x2CC608u: goto label_2cc608;
            case 0x2CC60Cu: goto label_2cc60c;
            case 0x2CC610u: goto label_2cc610;
            case 0x2CC614u: goto label_2cc614;
            case 0x2CC618u: goto label_2cc618;
            case 0x2CC61Cu: goto label_2cc61c;
            case 0x2CC620u: goto label_2cc620;
            case 0x2CC624u: goto label_2cc624;
            case 0x2CC628u: goto label_2cc628;
            case 0x2CC62Cu: goto label_2cc62c;
            case 0x2CC630u: goto label_2cc630;
            case 0x2CC634u: goto label_2cc634;
            case 0x2CC638u: goto label_2cc638;
            case 0x2CC63Cu: goto label_2cc63c;
            case 0x2CC640u: goto label_2cc640;
            case 0x2CC644u: goto label_2cc644;
            case 0x2CC648u: goto label_2cc648;
            case 0x2CC64Cu: goto label_2cc64c;
            case 0x2CC650u: goto label_2cc650;
            case 0x2CC654u: goto label_2cc654;
            case 0x2CC658u: goto label_2cc658;
            case 0x2CC65Cu: goto label_2cc65c;
            case 0x2CC660u: goto label_2cc660;
            case 0x2CC664u: goto label_2cc664;
            case 0x2CC668u: goto label_2cc668;
            case 0x2CC66Cu: goto label_2cc66c;
            case 0x2CC670u: goto label_2cc670;
            case 0x2CC674u: goto label_2cc674;
            case 0x2CC678u: goto label_2cc678;
            case 0x2CC67Cu: goto label_2cc67c;
            case 0x2CC680u: goto label_2cc680;
            case 0x2CC684u: goto label_2cc684;
            case 0x2CC688u: goto label_2cc688;
            case 0x2CC68Cu: goto label_2cc68c;
            case 0x2CC690u: goto label_2cc690;
            case 0x2CC694u: goto label_2cc694;
            case 0x2CC698u: goto label_2cc698;
            case 0x2CC69Cu: goto label_2cc69c;
            case 0x2CC6A0u: goto label_2cc6a0;
            case 0x2CC6A4u: goto label_2cc6a4;
            case 0x2CC6A8u: goto label_2cc6a8;
            case 0x2CC6ACu: goto label_2cc6ac;
            case 0x2CC6B0u: goto label_2cc6b0;
            case 0x2CC6B4u: goto label_2cc6b4;
            case 0x2CC6B8u: goto label_2cc6b8;
            case 0x2CC6BCu: goto label_2cc6bc;
            case 0x2CC6C0u: goto label_2cc6c0;
            case 0x2CC6C4u: goto label_2cc6c4;
            case 0x2CC6C8u: goto label_2cc6c8;
            case 0x2CC6CCu: goto label_2cc6cc;
            case 0x2CC6D0u: goto label_2cc6d0;
            case 0x2CC6D4u: goto label_2cc6d4;
            case 0x2CC6D8u: goto label_2cc6d8;
            case 0x2CC6DCu: goto label_2cc6dc;
            case 0x2CC6E0u: goto label_2cc6e0;
            case 0x2CC6E4u: goto label_2cc6e4;
            case 0x2CC6E8u: goto label_2cc6e8;
            case 0x2CC6ECu: goto label_2cc6ec;
            case 0x2CC6F0u: goto label_2cc6f0;
            case 0x2CC6F4u: goto label_2cc6f4;
            case 0x2CC6F8u: goto label_2cc6f8;
            case 0x2CC6FCu: goto label_2cc6fc;
            case 0x2CC700u: goto label_2cc700;
            case 0x2CC704u: goto label_2cc704;
            case 0x2CC708u: goto label_2cc708;
            case 0x2CC70Cu: goto label_2cc70c;
            case 0x2CC710u: goto label_2cc710;
            case 0x2CC714u: goto label_2cc714;
            case 0x2CC718u: goto label_2cc718;
            case 0x2CC71Cu: goto label_2cc71c;
            case 0x2CC720u: goto label_2cc720;
            case 0x2CC724u: goto label_2cc724;
            case 0x2CC728u: goto label_2cc728;
            case 0x2CC72Cu: goto label_2cc72c;
            case 0x2CC730u: goto label_2cc730;
            case 0x2CC734u: goto label_2cc734;
            case 0x2CC738u: goto label_2cc738;
            case 0x2CC73Cu: goto label_2cc73c;
            case 0x2CC740u: goto label_2cc740;
            case 0x2CC744u: goto label_2cc744;
            case 0x2CC748u: goto label_2cc748;
            case 0x2CC74Cu: goto label_2cc74c;
            case 0x2CC750u: goto label_2cc750;
            case 0x2CC754u: goto label_2cc754;
            case 0x2CC758u: goto label_2cc758;
            case 0x2CC75Cu: goto label_2cc75c;
            case 0x2CC760u: goto label_2cc760;
            case 0x2CC764u: goto label_2cc764;
            case 0x2CC768u: goto label_2cc768;
            case 0x2CC76Cu: goto label_2cc76c;
            case 0x2CC770u: goto label_2cc770;
            case 0x2CC774u: goto label_2cc774;
            case 0x2CC778u: goto label_2cc778;
            case 0x2CC77Cu: goto label_2cc77c;
            case 0x2CC780u: goto label_2cc780;
            case 0x2CC784u: goto label_2cc784;
            case 0x2CC788u: goto label_2cc788;
            case 0x2CC78Cu: goto label_2cc78c;
            case 0x2CC790u: goto label_2cc790;
            case 0x2CC794u: goto label_2cc794;
            case 0x2CC798u: goto label_2cc798;
            case 0x2CC79Cu: goto label_2cc79c;
            case 0x2CC7A0u: goto label_2cc7a0;
            case 0x2CC7A4u: goto label_2cc7a4;
            case 0x2CC7A8u: goto label_2cc7a8;
            case 0x2CC7ACu: goto label_2cc7ac;
            case 0x2CC7B0u: goto label_2cc7b0;
            case 0x2CC7B4u: goto label_2cc7b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CC308u;
label_2cc308:
    // 0x2cc308: 0x3c02002d
    ctx->pc = 0x2cc308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc30c:
    // 0x2cc30c: 0x2444cc68
    ctx->pc = 0x2cc30cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954088));
label_2cc310:
    // 0x2cc310: 0x10000033
label_2cc314:
    if (ctx->pc == 0x2CC314u) {
        ctx->pc = 0x2CC314u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC318u;
        goto label_2cc318;
    }
    ctx->pc = 0x2CC310u;
    {
        const bool branch_taken_0x2cc310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC314u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cc310) {
            ctx->pc = 0x2CC3E0u;
            goto label_2cc3e0;
        }
    }
    ctx->pc = 0x2CC318u;
label_2cc318:
    // 0x2cc318: 0x3c02002d
    ctx->pc = 0x2cc318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc31c:
    // 0x2cc31c: 0x2444ccb0
    ctx->pc = 0x2cc31cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954160));
label_2cc320:
    // 0x2cc320: 0x9642002c
    ctx->pc = 0x2cc320u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2cc324:
    // 0x2cc324: 0x34420008
    ctx->pc = 0x2cc324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
label_2cc328:
    // 0x2cc328: 0xa642002c
    ctx->pc = 0x2cc328u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
label_2cc32c:
    // 0x2cc32c: 0x4600e824
    ctx->pc = 0x2cc32cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[29]);
label_2cc330:
    // 0x2cc330: 0x44130000
    ctx->pc = 0x2cc330u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[0]);
label_2cc334:
    // 0x2cc334: 0x1000002e
label_2cc338:
    if (ctx->pc == 0x2CC338u) {
        ctx->pc = 0x2CC338u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 19)));
        ctx->pc = 0x2CC33Cu;
        goto label_2cc33c;
    }
    ctx->pc = 0x2CC334u;
    {
        const bool branch_taken_0x2cc334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC338u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 19)));
        if (branch_taken_0x2cc334) {
            ctx->pc = 0x2CC3F0u;
            goto label_2cc3f0;
        }
    }
    ctx->pc = 0x2CC33Cu;
label_2cc33c:
    // 0x2cc33c: 0x3c02002d
    ctx->pc = 0x2cc33cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc340:
    // 0x2cc340: 0x2444cd38
    ctx->pc = 0x2cc340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954296));
label_2cc344:
    // 0x2cc344: 0x3c02003a
    ctx->pc = 0x2cc344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2cc348:
    // 0x2cc348: 0x2442aa38
    ctx->pc = 0x2cc348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945336));
label_2cc34c:
    // 0x2cc34c: 0x8c530048
    ctx->pc = 0x2cc34cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2cc350:
    // 0x2cc350: 0x260282d
    ctx->pc = 0x2cc350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cc354:
    // 0x2cc354: 0x8c43004c
    ctx->pc = 0x2cc354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2cc358:
    // 0x2cc358: 0xae43000c
    ctx->pc = 0x2cc358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2cc35c:
    // 0x2cc35c: 0x8c420050
    ctx->pc = 0x2cc35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2cc360:
    // 0x2cc360: 0xae420014
    ctx->pc = 0x2cc360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2cc364:
    // 0x2cc364: 0x10000021
label_2cc368:
    if (ctx->pc == 0x2CC368u) {
        ctx->pc = 0x2CC368u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC36Cu;
        goto label_2cc36c;
    }
    ctx->pc = 0x2CC364u;
    {
        const bool branch_taken_0x2cc364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC368u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc364) {
            ctx->pc = 0x2CC3ECu;
            goto label_2cc3ec;
        }
    }
    ctx->pc = 0x2CC36Cu;
label_2cc36c:
    // 0x2cc36c: 0x3c014120
    ctx->pc = 0x2cc36cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_2cc370:
    // 0x2cc370: 0x44810000
    ctx->pc = 0x2cc370u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2cc374:
    // 0x2cc374: 0x4600e834
    ctx->pc = 0x2cc374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[29], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc378:
    // 0x2cc378: 0x0
    ctx->pc = 0x2cc378u;
    // NOP
label_2cc37c:
    // 0x2cc37c: 0x45010004
label_2cc380:
    if (ctx->pc == 0x2CC380u) {
        ctx->pc = 0x2CC380u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC384u;
        goto label_2cc384;
    }
    ctx->pc = 0x2CC37Cu;
    {
        const bool branch_taken_0x2cc37c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC380u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc37c) {
            ctx->pc = 0x2CC390u;
            goto label_2cc390;
        }
    }
    ctx->pc = 0x2CC384u;
label_2cc384:
    // 0x2cc384: 0x46007802
    ctx->pc = 0x2cc384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_2cc388:
    // 0x2cc388: 0x46000064
    ctx->pc = 0x2cc388u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2cc38c:
    // 0x2cc38c: 0x44130800
    ctx->pc = 0x2cc38cu;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[1]);
label_2cc390:
    // 0x2cc390: 0x24030008
    ctx->pc = 0x2cc390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_2cc394:
    // 0x2cc394: 0x24020007
    ctx->pc = 0x2cc394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2cc398:
    // 0x2cc398: 0x53102a
    ctx->pc = 0x2cc398u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_2cc39c:
    // 0x2cc39c: 0x62980a
    ctx->pc = 0x2cc39cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_2cc3a0:
    // 0x2cc3a0: 0x1a600004
label_2cc3a4:
    if (ctx->pc == 0x2CC3A4u) {
        ctx->pc = 0x2CC3A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 19)));
        ctx->pc = 0x2CC3A8u;
        goto label_2cc3a8;
    }
    ctx->pc = 0x2CC3A0u;
    {
        const bool branch_taken_0x2cc3a0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2CC3A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 19)));
        if (branch_taken_0x2cc3a0) {
            ctx->pc = 0x2CC3B4u;
            goto label_2cc3b4;
        }
    }
    ctx->pc = 0x2CC3A8u;
label_2cc3a8:
    // 0x2cc3a8: 0xc0182d
    ctx->pc = 0x2cc3a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cc3ac:
    // 0x2cc3ac: 0x10000002
label_2cc3b0:
    if (ctx->pc == 0x2CC3B0u) {
        ctx->pc = 0x2CC3B0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 19));
        ctx->pc = 0x2CC3B4u;
        goto label_2cc3b4;
    }
    ctx->pc = 0x2CC3ACu;
    {
        const bool branch_taken_0x2cc3ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC3B0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 19));
        if (branch_taken_0x2cc3ac) {
            ctx->pc = 0x2CC3B8u;
            goto label_2cc3b8;
        }
    }
    ctx->pc = 0x2CC3B4u;
label_2cc3b4:
    // 0x2cc3b4: 0x24030001
    ctx->pc = 0x2cc3b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2cc3b8:
    // 0x2cc3b8: 0x96420030
    ctx->pc = 0x2cc3b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_2cc3bc:
    // 0x2cc3bc: 0x60982d
    ctx->pc = 0x2cc3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cc3c0:
    // 0x2cc3c0: 0x42980b
    ctx->pc = 0x2cc3c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
label_2cc3c4:
    // 0x2cc3c4: 0x3c02002d
    ctx->pc = 0x2cc3c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc3c8:
    // 0x2cc3c8: 0x2444d0a0
    ctx->pc = 0x2cc3c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955168));
label_2cc3cc:
    // 0x2cc3cc: 0x10000004
label_2cc3d0:
    if (ctx->pc == 0x2CC3D0u) {
        ctx->pc = 0x2CC3D0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC3D4u;
        goto label_2cc3d4;
    }
    ctx->pc = 0x2CC3CCu;
    {
        const bool branch_taken_0x2cc3cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC3D0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cc3cc) {
            ctx->pc = 0x2CC3E0u;
            goto label_2cc3e0;
        }
    }
    ctx->pc = 0x2CC3D4u;
label_2cc3d4:
    // 0x2cc3d4: 0x3c02002d
    ctx->pc = 0x2cc3d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc3d8:
    // 0x2cc3d8: 0x2444d308
    ctx->pc = 0x2cc3d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955784));
label_2cc3dc:
    // 0x2cc3dc: 0xc0982d
    ctx->pc = 0x2cc3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cc3e0:
    // 0x2cc3e0: 0x9642002c
    ctx->pc = 0x2cc3e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2cc3e4:
    // 0x2cc3e4: 0x34420008
    ctx->pc = 0x2cc3e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
label_2cc3e8:
    // 0x2cc3e8: 0xa642002c
    ctx->pc = 0x2cc3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
label_2cc3ec:
    // 0x2cc3ec: 0xb3102a
    ctx->pc = 0x2cc3ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 19)));
label_2cc3f0:
    // 0x2cc3f0: 0xa2980b
    ctx->pc = 0x2cc3f0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 5));
label_2cc3f4:
    // 0x2cc3f4: 0x24030001
    ctx->pc = 0x2cc3f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2cc3f8:
    // 0x2cc3f8: 0x13102a
    ctx->pc = 0x2cc3f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 19)));
label_2cc3fc:
    // 0x2cc3fc: 0x62980a
    ctx->pc = 0x2cc3fcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_2cc400:
    // 0x2cc400: 0x2a630020
    ctx->pc = 0x2cc400u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 32));
label_2cc404:
    // 0x2cc404: 0x2402001f
    ctx->pc = 0x2cc404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_2cc408:
    // 0x2cc408: 0x43980a
    ctx->pc = 0x2cc408u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
label_2cc40c:
    // 0x2cc40c: 0x96420032
    ctx->pc = 0x2cc40cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_2cc410:
    // 0x2cc410: 0x54400007
label_2cc414:
    if (ctx->pc == 0x2CC414u) {
        ctx->pc = 0x2CC414u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
        ctx->pc = 0x2CC418u;
        goto label_2cc418;
    }
    ctx->pc = 0x2CC410u;
    {
        const bool branch_taken_0x2cc410 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cc410) {
            ctx->pc = 0x2CC414u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
            ctx->pc = 0x2CC430u;
            goto label_2cc430;
        }
    }
    ctx->pc = 0x2CC418u;
label_2cc418:
    // 0x2cc418: 0x2aa20065
    ctx->pc = 0x2cc418u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 101));
label_2cc41c:
    // 0x2cc41c: 0x24030064
    ctx->pc = 0x2cc41cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
label_2cc420:
    // 0x2cc420: 0x62a80a
    ctx->pc = 0x2cc420u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
label_2cc424:
    // 0x2cc424: 0x2aa20065
    ctx->pc = 0x2cc424u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 101));
label_2cc428:
    // 0x2cc428: 0x62a80a
    ctx->pc = 0x2cc428u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
label_2cc42c:
    // 0x2cc42c: 0x96430032
    ctx->pc = 0x2cc42cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_2cc430:
    // 0x2cc430: 0x24020064
    ctx->pc = 0x2cc430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_2cc434:
    // 0x2cc434: 0x40282d
    ctx->pc = 0x2cc434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc438:
    // 0x2cc438: 0x63280b
    ctx->pc = 0x2cc438u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2cc43c:
    // 0x2cc43c: 0x2a5102a
    ctx->pc = 0x2cc43cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 5)));
label_2cc440:
    // 0x2cc440: 0xa2a80a
    ctx->pc = 0x2cc440u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 5));
label_2cc444:
    // 0x2cc444: 0x3c03003a
    ctx->pc = 0x2cc444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2cc448:
    // 0x2cc448: 0x8e42000c
    ctx->pc = 0x2cc448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2cc44c:
    // 0x2cc44c: 0x8c63aa84
    ctx->pc = 0x2cc44cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_2cc450:
    // 0x2cc450: 0x431026
    ctx->pc = 0x2cc450u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cc454:
    // 0x2cc454: 0xc641009c
    ctx->pc = 0x2cc454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc458:
    // 0x2cc458: 0x44800000
    ctx->pc = 0x2cc458u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2cc45c:
    // 0x2cc45c: 0x46000832
    ctx->pc = 0x2cc45cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc460:
    // 0x2cc460: 0x0
    ctx->pc = 0x2cc460u;
    // NOP
label_2cc464:
    // 0x2cc464: 0x45010002
label_2cc468:
    if (ctx->pc == 0x2CC468u) {
        ctx->pc = 0x2CC468u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2CC46Cu;
        goto label_2cc46c;
    }
    ctx->pc = 0x2CC464u;
    {
        const bool branch_taken_0x2cc464 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC468u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2cc464) {
            ctx->pc = 0x2CC470u;
            goto label_2cc470;
        }
    }
    ctx->pc = 0x2CC46Cu;
label_2cc46c:
    // 0x2cc46c: 0x34630002
    ctx->pc = 0x2cc46cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
label_2cc470:
    // 0x2cc470: 0xc6410098
    ctx->pc = 0x2cc470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc474:
    // 0x2cc474: 0x44800000
    ctx->pc = 0x2cc474u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2cc478:
    // 0x2cc478: 0x46000832
    ctx->pc = 0x2cc478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc47c:
    // 0x2cc47c: 0x0
    ctx->pc = 0x2cc47cu;
    // NOP
label_2cc480:
    // 0x2cc480: 0x45020001
label_2cc484:
    if (ctx->pc == 0x2CC484u) {
        ctx->pc = 0x2CC484u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2CC488u;
        goto label_2cc488;
    }
    ctx->pc = 0x2CC480u;
    {
        const bool branch_taken_0x2cc480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc480) {
            ctx->pc = 0x2CC484u;
            SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
            ctx->pc = 0x2CC488u;
            goto label_2cc488;
        }
    }
    ctx->pc = 0x2CC488u;
label_2cc488:
    // 0x2cc488: 0x2c620008
    ctx->pc = 0x2cc488u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_2cc48c:
    // 0x2cc48c: 0x1040001c
label_2cc490:
    if (ctx->pc == 0x2CC490u) {
        ctx->pc = 0x2CC490u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2CC494u;
        goto label_2cc494;
    }
    ctx->pc = 0x2CC48Cu;
    {
        const bool branch_taken_0x2cc48c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC490u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2cc48c) {
            ctx->pc = 0x2CC500u;
            goto label_2cc500;
        }
    }
    ctx->pc = 0x2CC494u;
label_2cc494:
    // 0x2cc494: 0x24427580
    ctx->pc = 0x2cc494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30080));
label_2cc498:
    // 0x2cc498: 0x31880
    ctx->pc = 0x2cc498u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2cc49c:
    // 0x2cc49c: 0x621821
    ctx->pc = 0x2cc49cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cc4a0:
    // 0x2cc4a0: 0x8c620000
    ctx->pc = 0x2cc4a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc4a4:
    // 0x2cc4a4: 0x400008
label_2cc4a8:
    if (ctx->pc == 0x2CC4A8u) {
        ctx->pc = 0x2CC4ACu;
        goto label_2cc4ac;
    }
    ctx->pc = 0x2CC4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBCC8u: goto label_2cbcc8;
            case 0x2CBCCCu: goto label_2cbccc;
            case 0x2CBCD0u: goto label_2cbcd0;
            case 0x2CBCD4u: goto label_2cbcd4;
            case 0x2CBCD8u: goto label_2cbcd8;
            case 0x2CBCDCu: goto label_2cbcdc;
            case 0x2CBCE0u: goto label_2cbce0;
            case 0x2CBCE4u: goto label_2cbce4;
            case 0x2CBCE8u: goto label_2cbce8;
            case 0x2CBCECu: goto label_2cbcec;
            case 0x2CBCF0u: goto label_2cbcf0;
            case 0x2CBCF4u: goto label_2cbcf4;
            case 0x2CBCF8u: goto label_2cbcf8;
            case 0x2CBCFCu: goto label_2cbcfc;
            case 0x2CBD00u: goto label_2cbd00;
            case 0x2CBD04u: goto label_2cbd04;
            case 0x2CBD08u: goto label_2cbd08;
            case 0x2CBD0Cu: goto label_2cbd0c;
            case 0x2CBD10u: goto label_2cbd10;
            case 0x2CBD14u: goto label_2cbd14;
            case 0x2CBD18u: goto label_2cbd18;
            case 0x2CBD1Cu: goto label_2cbd1c;
            case 0x2CBD20u: goto label_2cbd20;
            case 0x2CBD24u: goto label_2cbd24;
            case 0x2CBD28u: goto label_2cbd28;
            case 0x2CBD2Cu: goto label_2cbd2c;
            case 0x2CBD30u: goto label_2cbd30;
            case 0x2CBD34u: goto label_2cbd34;
            case 0x2CBD38u: goto label_2cbd38;
            case 0x2CBD3Cu: goto label_2cbd3c;
            case 0x2CBD40u: goto label_2cbd40;
            case 0x2CBD44u: goto label_2cbd44;
            case 0x2CBD48u: goto label_2cbd48;
            case 0x2CBD4Cu: goto label_2cbd4c;
            case 0x2CBD50u: goto label_2cbd50;
            case 0x2CBD54u: goto label_2cbd54;
            case 0x2CBD58u: goto label_2cbd58;
            case 0x2CBD5Cu: goto label_2cbd5c;
            case 0x2CBD60u: goto label_2cbd60;
            case 0x2CBD64u: goto label_2cbd64;
            case 0x2CBD68u: goto label_2cbd68;
            case 0x2CBD6Cu: goto label_2cbd6c;
            case 0x2CBD70u: goto label_2cbd70;
            case 0x2CBD74u: goto label_2cbd74;
            case 0x2CBD78u: goto label_2cbd78;
            case 0x2CBD7Cu: goto label_2cbd7c;
            case 0x2CBD80u: goto label_2cbd80;
            case 0x2CBD84u: goto label_2cbd84;
            case 0x2CBD88u: goto label_2cbd88;
            case 0x2CBD8Cu: goto label_2cbd8c;
            case 0x2CBD90u: goto label_2cbd90;
            case 0x2CBD94u: goto label_2cbd94;
            case 0x2CBD98u: goto label_2cbd98;
            case 0x2CBD9Cu: goto label_2cbd9c;
            case 0x2CBDA0u: goto label_2cbda0;
            case 0x2CBDA4u: goto label_2cbda4;
            case 0x2CBDA8u: goto label_2cbda8;
            case 0x2CBDACu: goto label_2cbdac;
            case 0x2CBDB0u: goto label_2cbdb0;
            case 0x2CBDB4u: goto label_2cbdb4;
            case 0x2CBDB8u: goto label_2cbdb8;
            case 0x2CBDBCu: goto label_2cbdbc;
            case 0x2CBDC0u: goto label_2cbdc0;
            case 0x2CBDC4u: goto label_2cbdc4;
            case 0x2CBDC8u: goto label_2cbdc8;
            case 0x2CBDCCu: goto label_2cbdcc;
            case 0x2CBDD0u: goto label_2cbdd0;
            case 0x2CBDD4u: goto label_2cbdd4;
            case 0x2CBDD8u: goto label_2cbdd8;
            case 0x2CBDDCu: goto label_2cbddc;
            case 0x2CBDE0u: goto label_2cbde0;
            case 0x2CBDE4u: goto label_2cbde4;
            case 0x2CBDE8u: goto label_2cbde8;
            case 0x2CBDECu: goto label_2cbdec;
            case 0x2CBDF0u: goto label_2cbdf0;
            case 0x2CBDF4u: goto label_2cbdf4;
            case 0x2CBDF8u: goto label_2cbdf8;
            case 0x2CBDFCu: goto label_2cbdfc;
            case 0x2CBE00u: goto label_2cbe00;
            case 0x2CBE04u: goto label_2cbe04;
            case 0x2CBE08u: goto label_2cbe08;
            case 0x2CBE0Cu: goto label_2cbe0c;
            case 0x2CBE10u: goto label_2cbe10;
            case 0x2CBE14u: goto label_2cbe14;
            case 0x2CBE18u: goto label_2cbe18;
            case 0x2CBE1Cu: goto label_2cbe1c;
            case 0x2CBE20u: goto label_2cbe20;
            case 0x2CBE24u: goto label_2cbe24;
            case 0x2CBE28u: goto label_2cbe28;
            case 0x2CBE2Cu: goto label_2cbe2c;
            case 0x2CBE30u: goto label_2cbe30;
            case 0x2CBE34u: goto label_2cbe34;
            case 0x2CBE38u: goto label_2cbe38;
            case 0x2CBE3Cu: goto label_2cbe3c;
            case 0x2CBE40u: goto label_2cbe40;
            case 0x2CBE44u: goto label_2cbe44;
            case 0x2CBE48u: goto label_2cbe48;
            case 0x2CBE4Cu: goto label_2cbe4c;
            case 0x2CBE50u: goto label_2cbe50;
            case 0x2CBE54u: goto label_2cbe54;
            case 0x2CBE58u: goto label_2cbe58;
            case 0x2CBE5Cu: goto label_2cbe5c;
            case 0x2CBE60u: goto label_2cbe60;
            case 0x2CBE64u: goto label_2cbe64;
            case 0x2CBE68u: goto label_2cbe68;
            case 0x2CBE6Cu: goto label_2cbe6c;
            case 0x2CBE70u: goto label_2cbe70;
            case 0x2CBE74u: goto label_2cbe74;
            case 0x2CBE78u: goto label_2cbe78;
            case 0x2CBE7Cu: goto label_2cbe7c;
            case 0x2CBE80u: goto label_2cbe80;
            case 0x2CBE84u: goto label_2cbe84;
            case 0x2CBE88u: goto label_2cbe88;
            case 0x2CBE8Cu: goto label_2cbe8c;
            case 0x2CBE90u: goto label_2cbe90;
            case 0x2CBE94u: goto label_2cbe94;
            case 0x2CBE98u: goto label_2cbe98;
            case 0x2CBE9Cu: goto label_2cbe9c;
            case 0x2CBEA0u: goto label_2cbea0;
            case 0x2CBEA4u: goto label_2cbea4;
            case 0x2CBEA8u: goto label_2cbea8;
            case 0x2CBEACu: goto label_2cbeac;
            case 0x2CBEB0u: goto label_2cbeb0;
            case 0x2CBEB4u: goto label_2cbeb4;
            case 0x2CBEB8u: goto label_2cbeb8;
            case 0x2CBEBCu: goto label_2cbebc;
            case 0x2CBEC0u: goto label_2cbec0;
            case 0x2CBEC4u: goto label_2cbec4;
            case 0x2CBEC8u: goto label_2cbec8;
            case 0x2CBECCu: goto label_2cbecc;
            case 0x2CBED0u: goto label_2cbed0;
            case 0x2CBED4u: goto label_2cbed4;
            case 0x2CBED8u: goto label_2cbed8;
            case 0x2CBEDCu: goto label_2cbedc;
            case 0x2CBEE0u: goto label_2cbee0;
            case 0x2CBEE4u: goto label_2cbee4;
            case 0x2CBEE8u: goto label_2cbee8;
            case 0x2CBEECu: goto label_2cbeec;
            case 0x2CBEF0u: goto label_2cbef0;
            case 0x2CBEF4u: goto label_2cbef4;
            case 0x2CBEF8u: goto label_2cbef8;
            case 0x2CBEFCu: goto label_2cbefc;
            case 0x2CBF00u: goto label_2cbf00;
            case 0x2CBF04u: goto label_2cbf04;
            case 0x2CBF08u: goto label_2cbf08;
            case 0x2CBF0Cu: goto label_2cbf0c;
            case 0x2CBF10u: goto label_2cbf10;
            case 0x2CBF14u: goto label_2cbf14;
            case 0x2CBF18u: goto label_2cbf18;
            case 0x2CBF1Cu: goto label_2cbf1c;
            case 0x2CBF20u: goto label_2cbf20;
            case 0x2CBF24u: goto label_2cbf24;
            case 0x2CBF28u: goto label_2cbf28;
            case 0x2CBF2Cu: goto label_2cbf2c;
            case 0x2CBF30u: goto label_2cbf30;
            case 0x2CBF34u: goto label_2cbf34;
            case 0x2CBF38u: goto label_2cbf38;
            case 0x2CBF3Cu: goto label_2cbf3c;
            case 0x2CBF40u: goto label_2cbf40;
            case 0x2CBF44u: goto label_2cbf44;
            case 0x2CBF48u: goto label_2cbf48;
            case 0x2CBF4Cu: goto label_2cbf4c;
            case 0x2CBF50u: goto label_2cbf50;
            case 0x2CBF54u: goto label_2cbf54;
            case 0x2CBF58u: goto label_2cbf58;
            case 0x2CBF5Cu: goto label_2cbf5c;
            case 0x2CBF60u: goto label_2cbf60;
            case 0x2CBF64u: goto label_2cbf64;
            case 0x2CBF68u: goto label_2cbf68;
            case 0x2CBF6Cu: goto label_2cbf6c;
            case 0x2CBF70u: goto label_2cbf70;
            case 0x2CBF74u: goto label_2cbf74;
            case 0x2CBF78u: goto label_2cbf78;
            case 0x2CBF7Cu: goto label_2cbf7c;
            case 0x2CBF80u: goto label_2cbf80;
            case 0x2CBF84u: goto label_2cbf84;
            case 0x2CBF88u: goto label_2cbf88;
            case 0x2CBF8Cu: goto label_2cbf8c;
            case 0x2CBF90u: goto label_2cbf90;
            case 0x2CBF94u: goto label_2cbf94;
            case 0x2CBF98u: goto label_2cbf98;
            case 0x2CBF9Cu: goto label_2cbf9c;
            case 0x2CBFA0u: goto label_2cbfa0;
            case 0x2CBFA4u: goto label_2cbfa4;
            case 0x2CBFA8u: goto label_2cbfa8;
            case 0x2CBFACu: goto label_2cbfac;
            case 0x2CBFB0u: goto label_2cbfb0;
            case 0x2CBFB4u: goto label_2cbfb4;
            case 0x2CBFB8u: goto label_2cbfb8;
            case 0x2CBFBCu: goto label_2cbfbc;
            case 0x2CBFC0u: goto label_2cbfc0;
            case 0x2CBFC4u: goto label_2cbfc4;
            case 0x2CBFC8u: goto label_2cbfc8;
            case 0x2CBFCCu: goto label_2cbfcc;
            case 0x2CBFD0u: goto label_2cbfd0;
            case 0x2CBFD4u: goto label_2cbfd4;
            case 0x2CBFD8u: goto label_2cbfd8;
            case 0x2CBFDCu: goto label_2cbfdc;
            case 0x2CBFE0u: goto label_2cbfe0;
            case 0x2CBFE4u: goto label_2cbfe4;
            case 0x2CBFE8u: goto label_2cbfe8;
            case 0x2CBFECu: goto label_2cbfec;
            case 0x2CBFF0u: goto label_2cbff0;
            case 0x2CBFF4u: goto label_2cbff4;
            case 0x2CBFF8u: goto label_2cbff8;
            case 0x2CBFFCu: goto label_2cbffc;
            case 0x2CC000u: goto label_2cc000;
            case 0x2CC004u: goto label_2cc004;
            case 0x2CC008u: goto label_2cc008;
            case 0x2CC00Cu: goto label_2cc00c;
            case 0x2CC010u: goto label_2cc010;
            case 0x2CC014u: goto label_2cc014;
            case 0x2CC018u: goto label_2cc018;
            case 0x2CC01Cu: goto label_2cc01c;
            case 0x2CC020u: goto label_2cc020;
            case 0x2CC024u: goto label_2cc024;
            case 0x2CC028u: goto label_2cc028;
            case 0x2CC02Cu: goto label_2cc02c;
            case 0x2CC030u: goto label_2cc030;
            case 0x2CC034u: goto label_2cc034;
            case 0x2CC038u: goto label_2cc038;
            case 0x2CC03Cu: goto label_2cc03c;
            case 0x2CC040u: goto label_2cc040;
            case 0x2CC044u: goto label_2cc044;
            case 0x2CC048u: goto label_2cc048;
            case 0x2CC04Cu: goto label_2cc04c;
            case 0x2CC050u: goto label_2cc050;
            case 0x2CC054u: goto label_2cc054;
            case 0x2CC058u: goto label_2cc058;
            case 0x2CC05Cu: goto label_2cc05c;
            case 0x2CC060u: goto label_2cc060;
            case 0x2CC064u: goto label_2cc064;
            case 0x2CC068u: goto label_2cc068;
            case 0x2CC06Cu: goto label_2cc06c;
            case 0x2CC070u: goto label_2cc070;
            case 0x2CC074u: goto label_2cc074;
            case 0x2CC078u: goto label_2cc078;
            case 0x2CC07Cu: goto label_2cc07c;
            case 0x2CC080u: goto label_2cc080;
            case 0x2CC084u: goto label_2cc084;
            case 0x2CC088u: goto label_2cc088;
            case 0x2CC08Cu: goto label_2cc08c;
            case 0x2CC090u: goto label_2cc090;
            case 0x2CC094u: goto label_2cc094;
            case 0x2CC098u: goto label_2cc098;
            case 0x2CC09Cu: goto label_2cc09c;
            case 0x2CC0A0u: goto label_2cc0a0;
            case 0x2CC0A4u: goto label_2cc0a4;
            case 0x2CC0A8u: goto label_2cc0a8;
            case 0x2CC0ACu: goto label_2cc0ac;
            case 0x2CC0B0u: goto label_2cc0b0;
            case 0x2CC0B4u: goto label_2cc0b4;
            case 0x2CC0B8u: goto label_2cc0b8;
            case 0x2CC0BCu: goto label_2cc0bc;
            case 0x2CC0C0u: goto label_2cc0c0;
            case 0x2CC0C4u: goto label_2cc0c4;
            case 0x2CC0C8u: goto label_2cc0c8;
            case 0x2CC0CCu: goto label_2cc0cc;
            case 0x2CC0D0u: goto label_2cc0d0;
            case 0x2CC0D4u: goto label_2cc0d4;
            case 0x2CC0D8u: goto label_2cc0d8;
            case 0x2CC0DCu: goto label_2cc0dc;
            case 0x2CC0E0u: goto label_2cc0e0;
            case 0x2CC0E4u: goto label_2cc0e4;
            case 0x2CC0E8u: goto label_2cc0e8;
            case 0x2CC0ECu: goto label_2cc0ec;
            case 0x2CC0F0u: goto label_2cc0f0;
            case 0x2CC0F4u: goto label_2cc0f4;
            case 0x2CC0F8u: goto label_2cc0f8;
            case 0x2CC0FCu: goto label_2cc0fc;
            case 0x2CC100u: goto label_2cc100;
            case 0x2CC104u: goto label_2cc104;
            case 0x2CC108u: goto label_2cc108;
            case 0x2CC10Cu: goto label_2cc10c;
            case 0x2CC110u: goto label_2cc110;
            case 0x2CC114u: goto label_2cc114;
            case 0x2CC118u: goto label_2cc118;
            case 0x2CC11Cu: goto label_2cc11c;
            case 0x2CC120u: goto label_2cc120;
            case 0x2CC124u: goto label_2cc124;
            case 0x2CC128u: goto label_2cc128;
            case 0x2CC12Cu: goto label_2cc12c;
            case 0x2CC130u: goto label_2cc130;
            case 0x2CC134u: goto label_2cc134;
            case 0x2CC138u: goto label_2cc138;
            case 0x2CC13Cu: goto label_2cc13c;
            case 0x2CC140u: goto label_2cc140;
            case 0x2CC144u: goto label_2cc144;
            case 0x2CC148u: goto label_2cc148;
            case 0x2CC14Cu: goto label_2cc14c;
            case 0x2CC150u: goto label_2cc150;
            case 0x2CC154u: goto label_2cc154;
            case 0x2CC158u: goto label_2cc158;
            case 0x2CC15Cu: goto label_2cc15c;
            case 0x2CC160u: goto label_2cc160;
            case 0x2CC164u: goto label_2cc164;
            case 0x2CC168u: goto label_2cc168;
            case 0x2CC16Cu: goto label_2cc16c;
            case 0x2CC170u: goto label_2cc170;
            case 0x2CC174u: goto label_2cc174;
            case 0x2CC178u: goto label_2cc178;
            case 0x2CC17Cu: goto label_2cc17c;
            case 0x2CC180u: goto label_2cc180;
            case 0x2CC184u: goto label_2cc184;
            case 0x2CC188u: goto label_2cc188;
            case 0x2CC18Cu: goto label_2cc18c;
            case 0x2CC190u: goto label_2cc190;
            case 0x2CC194u: goto label_2cc194;
            case 0x2CC198u: goto label_2cc198;
            case 0x2CC19Cu: goto label_2cc19c;
            case 0x2CC1A0u: goto label_2cc1a0;
            case 0x2CC1A4u: goto label_2cc1a4;
            case 0x2CC1A8u: goto label_2cc1a8;
            case 0x2CC1ACu: goto label_2cc1ac;
            case 0x2CC1B0u: goto label_2cc1b0;
            case 0x2CC1B4u: goto label_2cc1b4;
            case 0x2CC1B8u: goto label_2cc1b8;
            case 0x2CC1BCu: goto label_2cc1bc;
            case 0x2CC1C0u: goto label_2cc1c0;
            case 0x2CC1C4u: goto label_2cc1c4;
            case 0x2CC1C8u: goto label_2cc1c8;
            case 0x2CC1CCu: goto label_2cc1cc;
            case 0x2CC1D0u: goto label_2cc1d0;
            case 0x2CC1D4u: goto label_2cc1d4;
            case 0x2CC1D8u: goto label_2cc1d8;
            case 0x2CC1DCu: goto label_2cc1dc;
            case 0x2CC1E0u: goto label_2cc1e0;
            case 0x2CC1E4u: goto label_2cc1e4;
            case 0x2CC1E8u: goto label_2cc1e8;
            case 0x2CC1ECu: goto label_2cc1ec;
            case 0x2CC1F0u: goto label_2cc1f0;
            case 0x2CC1F4u: goto label_2cc1f4;
            case 0x2CC1F8u: goto label_2cc1f8;
            case 0x2CC1FCu: goto label_2cc1fc;
            case 0x2CC200u: goto label_2cc200;
            case 0x2CC204u: goto label_2cc204;
            case 0x2CC208u: goto label_2cc208;
            case 0x2CC20Cu: goto label_2cc20c;
            case 0x2CC210u: goto label_2cc210;
            case 0x2CC214u: goto label_2cc214;
            case 0x2CC218u: goto label_2cc218;
            case 0x2CC21Cu: goto label_2cc21c;
            case 0x2CC220u: goto label_2cc220;
            case 0x2CC224u: goto label_2cc224;
            case 0x2CC228u: goto label_2cc228;
            case 0x2CC22Cu: goto label_2cc22c;
            case 0x2CC230u: goto label_2cc230;
            case 0x2CC234u: goto label_2cc234;
            case 0x2CC238u: goto label_2cc238;
            case 0x2CC23Cu: goto label_2cc23c;
            case 0x2CC240u: goto label_2cc240;
            case 0x2CC244u: goto label_2cc244;
            case 0x2CC248u: goto label_2cc248;
            case 0x2CC24Cu: goto label_2cc24c;
            case 0x2CC250u: goto label_2cc250;
            case 0x2CC254u: goto label_2cc254;
            case 0x2CC258u: goto label_2cc258;
            case 0x2CC25Cu: goto label_2cc25c;
            case 0x2CC260u: goto label_2cc260;
            case 0x2CC264u: goto label_2cc264;
            case 0x2CC268u: goto label_2cc268;
            case 0x2CC26Cu: goto label_2cc26c;
            case 0x2CC270u: goto label_2cc270;
            case 0x2CC274u: goto label_2cc274;
            case 0x2CC278u: goto label_2cc278;
            case 0x2CC27Cu: goto label_2cc27c;
            case 0x2CC280u: goto label_2cc280;
            case 0x2CC284u: goto label_2cc284;
            case 0x2CC288u: goto label_2cc288;
            case 0x2CC28Cu: goto label_2cc28c;
            case 0x2CC290u: goto label_2cc290;
            case 0x2CC294u: goto label_2cc294;
            case 0x2CC298u: goto label_2cc298;
            case 0x2CC29Cu: goto label_2cc29c;
            case 0x2CC2A0u: goto label_2cc2a0;
            case 0x2CC2A4u: goto label_2cc2a4;
            case 0x2CC2A8u: goto label_2cc2a8;
            case 0x2CC2ACu: goto label_2cc2ac;
            case 0x2CC2B0u: goto label_2cc2b0;
            case 0x2CC2B4u: goto label_2cc2b4;
            case 0x2CC2B8u: goto label_2cc2b8;
            case 0x2CC2BCu: goto label_2cc2bc;
            case 0x2CC2C0u: goto label_2cc2c0;
            case 0x2CC2C4u: goto label_2cc2c4;
            case 0x2CC2C8u: goto label_2cc2c8;
            case 0x2CC2CCu: goto label_2cc2cc;
            case 0x2CC2D0u: goto label_2cc2d0;
            case 0x2CC2D4u: goto label_2cc2d4;
            case 0x2CC2D8u: goto label_2cc2d8;
            case 0x2CC2DCu: goto label_2cc2dc;
            case 0x2CC2E0u: goto label_2cc2e0;
            case 0x2CC2E4u: goto label_2cc2e4;
            case 0x2CC2E8u: goto label_2cc2e8;
            case 0x2CC2ECu: goto label_2cc2ec;
            case 0x2CC2F0u: goto label_2cc2f0;
            case 0x2CC2F4u: goto label_2cc2f4;
            case 0x2CC2F8u: goto label_2cc2f8;
            case 0x2CC2FCu: goto label_2cc2fc;
            case 0x2CC300u: goto label_2cc300;
            case 0x2CC304u: goto label_2cc304;
            case 0x2CC308u: goto label_2cc308;
            case 0x2CC30Cu: goto label_2cc30c;
            case 0x2CC310u: goto label_2cc310;
            case 0x2CC314u: goto label_2cc314;
            case 0x2CC318u: goto label_2cc318;
            case 0x2CC31Cu: goto label_2cc31c;
            case 0x2CC320u: goto label_2cc320;
            case 0x2CC324u: goto label_2cc324;
            case 0x2CC328u: goto label_2cc328;
            case 0x2CC32Cu: goto label_2cc32c;
            case 0x2CC330u: goto label_2cc330;
            case 0x2CC334u: goto label_2cc334;
            case 0x2CC338u: goto label_2cc338;
            case 0x2CC33Cu: goto label_2cc33c;
            case 0x2CC340u: goto label_2cc340;
            case 0x2CC344u: goto label_2cc344;
            case 0x2CC348u: goto label_2cc348;
            case 0x2CC34Cu: goto label_2cc34c;
            case 0x2CC350u: goto label_2cc350;
            case 0x2CC354u: goto label_2cc354;
            case 0x2CC358u: goto label_2cc358;
            case 0x2CC35Cu: goto label_2cc35c;
            case 0x2CC360u: goto label_2cc360;
            case 0x2CC364u: goto label_2cc364;
            case 0x2CC368u: goto label_2cc368;
            case 0x2CC36Cu: goto label_2cc36c;
            case 0x2CC370u: goto label_2cc370;
            case 0x2CC374u: goto label_2cc374;
            case 0x2CC378u: goto label_2cc378;
            case 0x2CC37Cu: goto label_2cc37c;
            case 0x2CC380u: goto label_2cc380;
            case 0x2CC384u: goto label_2cc384;
            case 0x2CC388u: goto label_2cc388;
            case 0x2CC38Cu: goto label_2cc38c;
            case 0x2CC390u: goto label_2cc390;
            case 0x2CC394u: goto label_2cc394;
            case 0x2CC398u: goto label_2cc398;
            case 0x2CC39Cu: goto label_2cc39c;
            case 0x2CC3A0u: goto label_2cc3a0;
            case 0x2CC3A4u: goto label_2cc3a4;
            case 0x2CC3A8u: goto label_2cc3a8;
            case 0x2CC3ACu: goto label_2cc3ac;
            case 0x2CC3B0u: goto label_2cc3b0;
            case 0x2CC3B4u: goto label_2cc3b4;
            case 0x2CC3B8u: goto label_2cc3b8;
            case 0x2CC3BCu: goto label_2cc3bc;
            case 0x2CC3C0u: goto label_2cc3c0;
            case 0x2CC3C4u: goto label_2cc3c4;
            case 0x2CC3C8u: goto label_2cc3c8;
            case 0x2CC3CCu: goto label_2cc3cc;
            case 0x2CC3D0u: goto label_2cc3d0;
            case 0x2CC3D4u: goto label_2cc3d4;
            case 0x2CC3D8u: goto label_2cc3d8;
            case 0x2CC3DCu: goto label_2cc3dc;
            case 0x2CC3E0u: goto label_2cc3e0;
            case 0x2CC3E4u: goto label_2cc3e4;
            case 0x2CC3E8u: goto label_2cc3e8;
            case 0x2CC3ECu: goto label_2cc3ec;
            case 0x2CC3F0u: goto label_2cc3f0;
            case 0x2CC3F4u: goto label_2cc3f4;
            case 0x2CC3F8u: goto label_2cc3f8;
            case 0x2CC3FCu: goto label_2cc3fc;
            case 0x2CC400u: goto label_2cc400;
            case 0x2CC404u: goto label_2cc404;
            case 0x2CC408u: goto label_2cc408;
            case 0x2CC40Cu: goto label_2cc40c;
            case 0x2CC410u: goto label_2cc410;
            case 0x2CC414u: goto label_2cc414;
            case 0x2CC418u: goto label_2cc418;
            case 0x2CC41Cu: goto label_2cc41c;
            case 0x2CC420u: goto label_2cc420;
            case 0x2CC424u: goto label_2cc424;
            case 0x2CC428u: goto label_2cc428;
            case 0x2CC42Cu: goto label_2cc42c;
            case 0x2CC430u: goto label_2cc430;
            case 0x2CC434u: goto label_2cc434;
            case 0x2CC438u: goto label_2cc438;
            case 0x2CC43Cu: goto label_2cc43c;
            case 0x2CC440u: goto label_2cc440;
            case 0x2CC444u: goto label_2cc444;
            case 0x2CC448u: goto label_2cc448;
            case 0x2CC44Cu: goto label_2cc44c;
            case 0x2CC450u: goto label_2cc450;
            case 0x2CC454u: goto label_2cc454;
            case 0x2CC458u: goto label_2cc458;
            case 0x2CC45Cu: goto label_2cc45c;
            case 0x2CC460u: goto label_2cc460;
            case 0x2CC464u: goto label_2cc464;
            case 0x2CC468u: goto label_2cc468;
            case 0x2CC46Cu: goto label_2cc46c;
            case 0x2CC470u: goto label_2cc470;
            case 0x2CC474u: goto label_2cc474;
            case 0x2CC478u: goto label_2cc478;
            case 0x2CC47Cu: goto label_2cc47c;
            case 0x2CC480u: goto label_2cc480;
            case 0x2CC484u: goto label_2cc484;
            case 0x2CC488u: goto label_2cc488;
            case 0x2CC48Cu: goto label_2cc48c;
            case 0x2CC490u: goto label_2cc490;
            case 0x2CC494u: goto label_2cc494;
            case 0x2CC498u: goto label_2cc498;
            case 0x2CC49Cu: goto label_2cc49c;
            case 0x2CC4A0u: goto label_2cc4a0;
            case 0x2CC4A4u: goto label_2cc4a4;
            case 0x2CC4A8u: goto label_2cc4a8;
            case 0x2CC4ACu: goto label_2cc4ac;
            case 0x2CC4B0u: goto label_2cc4b0;
            case 0x2CC4B4u: goto label_2cc4b4;
            case 0x2CC4B8u: goto label_2cc4b8;
            case 0x2CC4BCu: goto label_2cc4bc;
            case 0x2CC4C0u: goto label_2cc4c0;
            case 0x2CC4C4u: goto label_2cc4c4;
            case 0x2CC4C8u: goto label_2cc4c8;
            case 0x2CC4CCu: goto label_2cc4cc;
            case 0x2CC4D0u: goto label_2cc4d0;
            case 0x2CC4D4u: goto label_2cc4d4;
            case 0x2CC4D8u: goto label_2cc4d8;
            case 0x2CC4DCu: goto label_2cc4dc;
            case 0x2CC4E0u: goto label_2cc4e0;
            case 0x2CC4E4u: goto label_2cc4e4;
            case 0x2CC4E8u: goto label_2cc4e8;
            case 0x2CC4ECu: goto label_2cc4ec;
            case 0x2CC4F0u: goto label_2cc4f0;
            case 0x2CC4F4u: goto label_2cc4f4;
            case 0x2CC4F8u: goto label_2cc4f8;
            case 0x2CC4FCu: goto label_2cc4fc;
            case 0x2CC500u: goto label_2cc500;
            case 0x2CC504u: goto label_2cc504;
            case 0x2CC508u: goto label_2cc508;
            case 0x2CC50Cu: goto label_2cc50c;
            case 0x2CC510u: goto label_2cc510;
            case 0x2CC514u: goto label_2cc514;
            case 0x2CC518u: goto label_2cc518;
            case 0x2CC51Cu: goto label_2cc51c;
            case 0x2CC520u: goto label_2cc520;
            case 0x2CC524u: goto label_2cc524;
            case 0x2CC528u: goto label_2cc528;
            case 0x2CC52Cu: goto label_2cc52c;
            case 0x2CC530u: goto label_2cc530;
            case 0x2CC534u: goto label_2cc534;
            case 0x2CC538u: goto label_2cc538;
            case 0x2CC53Cu: goto label_2cc53c;
            case 0x2CC540u: goto label_2cc540;
            case 0x2CC544u: goto label_2cc544;
            case 0x2CC548u: goto label_2cc548;
            case 0x2CC54Cu: goto label_2cc54c;
            case 0x2CC550u: goto label_2cc550;
            case 0x2CC554u: goto label_2cc554;
            case 0x2CC558u: goto label_2cc558;
            case 0x2CC55Cu: goto label_2cc55c;
            case 0x2CC560u: goto label_2cc560;
            case 0x2CC564u: goto label_2cc564;
            case 0x2CC568u: goto label_2cc568;
            case 0x2CC56Cu: goto label_2cc56c;
            case 0x2CC570u: goto label_2cc570;
            case 0x2CC574u: goto label_2cc574;
            case 0x2CC578u: goto label_2cc578;
            case 0x2CC57Cu: goto label_2cc57c;
            case 0x2CC580u: goto label_2cc580;
            case 0x2CC584u: goto label_2cc584;
            case 0x2CC588u: goto label_2cc588;
            case 0x2CC58Cu: goto label_2cc58c;
            case 0x2CC590u: goto label_2cc590;
            case 0x2CC594u: goto label_2cc594;
            case 0x2CC598u: goto label_2cc598;
            case 0x2CC59Cu: goto label_2cc59c;
            case 0x2CC5A0u: goto label_2cc5a0;
            case 0x2CC5A4u: goto label_2cc5a4;
            case 0x2CC5A8u: goto label_2cc5a8;
            case 0x2CC5ACu: goto label_2cc5ac;
            case 0x2CC5B0u: goto label_2cc5b0;
            case 0x2CC5B4u: goto label_2cc5b4;
            case 0x2CC5B8u: goto label_2cc5b8;
            case 0x2CC5BCu: goto label_2cc5bc;
            case 0x2CC5C0u: goto label_2cc5c0;
            case 0x2CC5C4u: goto label_2cc5c4;
            case 0x2CC5C8u: goto label_2cc5c8;
            case 0x2CC5CCu: goto label_2cc5cc;
            case 0x2CC5D0u: goto label_2cc5d0;
            case 0x2CC5D4u: goto label_2cc5d4;
            case 0x2CC5D8u: goto label_2cc5d8;
            case 0x2CC5DCu: goto label_2cc5dc;
            case 0x2CC5E0u: goto label_2cc5e0;
            case 0x2CC5E4u: goto label_2cc5e4;
            case 0x2CC5E8u: goto label_2cc5e8;
            case 0x2CC5ECu: goto label_2cc5ec;
            case 0x2CC5F0u: goto label_2cc5f0;
            case 0x2CC5F4u: goto label_2cc5f4;
            case 0x2CC5F8u: goto label_2cc5f8;
            case 0x2CC5FCu: goto label_2cc5fc;
            case 0x2CC600u: goto label_2cc600;
            case 0x2CC604u: goto label_2cc604;
            case 0x2CC608u: goto label_2cc608;
            case 0x2CC60Cu: goto label_2cc60c;
            case 0x2CC610u: goto label_2cc610;
            case 0x2CC614u: goto label_2cc614;
            case 0x2CC618u: goto label_2cc618;
            case 0x2CC61Cu: goto label_2cc61c;
            case 0x2CC620u: goto label_2cc620;
            case 0x2CC624u: goto label_2cc624;
            case 0x2CC628u: goto label_2cc628;
            case 0x2CC62Cu: goto label_2cc62c;
            case 0x2CC630u: goto label_2cc630;
            case 0x2CC634u: goto label_2cc634;
            case 0x2CC638u: goto label_2cc638;
            case 0x2CC63Cu: goto label_2cc63c;
            case 0x2CC640u: goto label_2cc640;
            case 0x2CC644u: goto label_2cc644;
            case 0x2CC648u: goto label_2cc648;
            case 0x2CC64Cu: goto label_2cc64c;
            case 0x2CC650u: goto label_2cc650;
            case 0x2CC654u: goto label_2cc654;
            case 0x2CC658u: goto label_2cc658;
            case 0x2CC65Cu: goto label_2cc65c;
            case 0x2CC660u: goto label_2cc660;
            case 0x2CC664u: goto label_2cc664;
            case 0x2CC668u: goto label_2cc668;
            case 0x2CC66Cu: goto label_2cc66c;
            case 0x2CC670u: goto label_2cc670;
            case 0x2CC674u: goto label_2cc674;
            case 0x2CC678u: goto label_2cc678;
            case 0x2CC67Cu: goto label_2cc67c;
            case 0x2CC680u: goto label_2cc680;
            case 0x2CC684u: goto label_2cc684;
            case 0x2CC688u: goto label_2cc688;
            case 0x2CC68Cu: goto label_2cc68c;
            case 0x2CC690u: goto label_2cc690;
            case 0x2CC694u: goto label_2cc694;
            case 0x2CC698u: goto label_2cc698;
            case 0x2CC69Cu: goto label_2cc69c;
            case 0x2CC6A0u: goto label_2cc6a0;
            case 0x2CC6A4u: goto label_2cc6a4;
            case 0x2CC6A8u: goto label_2cc6a8;
            case 0x2CC6ACu: goto label_2cc6ac;
            case 0x2CC6B0u: goto label_2cc6b0;
            case 0x2CC6B4u: goto label_2cc6b4;
            case 0x2CC6B8u: goto label_2cc6b8;
            case 0x2CC6BCu: goto label_2cc6bc;
            case 0x2CC6C0u: goto label_2cc6c0;
            case 0x2CC6C4u: goto label_2cc6c4;
            case 0x2CC6C8u: goto label_2cc6c8;
            case 0x2CC6CCu: goto label_2cc6cc;
            case 0x2CC6D0u: goto label_2cc6d0;
            case 0x2CC6D4u: goto label_2cc6d4;
            case 0x2CC6D8u: goto label_2cc6d8;
            case 0x2CC6DCu: goto label_2cc6dc;
            case 0x2CC6E0u: goto label_2cc6e0;
            case 0x2CC6E4u: goto label_2cc6e4;
            case 0x2CC6E8u: goto label_2cc6e8;
            case 0x2CC6ECu: goto label_2cc6ec;
            case 0x2CC6F0u: goto label_2cc6f0;
            case 0x2CC6F4u: goto label_2cc6f4;
            case 0x2CC6F8u: goto label_2cc6f8;
            case 0x2CC6FCu: goto label_2cc6fc;
            case 0x2CC700u: goto label_2cc700;
            case 0x2CC704u: goto label_2cc704;
            case 0x2CC708u: goto label_2cc708;
            case 0x2CC70Cu: goto label_2cc70c;
            case 0x2CC710u: goto label_2cc710;
            case 0x2CC714u: goto label_2cc714;
            case 0x2CC718u: goto label_2cc718;
            case 0x2CC71Cu: goto label_2cc71c;
            case 0x2CC720u: goto label_2cc720;
            case 0x2CC724u: goto label_2cc724;
            case 0x2CC728u: goto label_2cc728;
            case 0x2CC72Cu: goto label_2cc72c;
            case 0x2CC730u: goto label_2cc730;
            case 0x2CC734u: goto label_2cc734;
            case 0x2CC738u: goto label_2cc738;
            case 0x2CC73Cu: goto label_2cc73c;
            case 0x2CC740u: goto label_2cc740;
            case 0x2CC744u: goto label_2cc744;
            case 0x2CC748u: goto label_2cc748;
            case 0x2CC74Cu: goto label_2cc74c;
            case 0x2CC750u: goto label_2cc750;
            case 0x2CC754u: goto label_2cc754;
            case 0x2CC758u: goto label_2cc758;
            case 0x2CC75Cu: goto label_2cc75c;
            case 0x2CC760u: goto label_2cc760;
            case 0x2CC764u: goto label_2cc764;
            case 0x2CC768u: goto label_2cc768;
            case 0x2CC76Cu: goto label_2cc76c;
            case 0x2CC770u: goto label_2cc770;
            case 0x2CC774u: goto label_2cc774;
            case 0x2CC778u: goto label_2cc778;
            case 0x2CC77Cu: goto label_2cc77c;
            case 0x2CC780u: goto label_2cc780;
            case 0x2CC784u: goto label_2cc784;
            case 0x2CC788u: goto label_2cc788;
            case 0x2CC78Cu: goto label_2cc78c;
            case 0x2CC790u: goto label_2cc790;
            case 0x2CC794u: goto label_2cc794;
            case 0x2CC798u: goto label_2cc798;
            case 0x2CC79Cu: goto label_2cc79c;
            case 0x2CC7A0u: goto label_2cc7a0;
            case 0x2CC7A4u: goto label_2cc7a4;
            case 0x2CC7A8u: goto label_2cc7a8;
            case 0x2CC7ACu: goto label_2cc7ac;
            case 0x2CC7B0u: goto label_2cc7b0;
            case 0x2CC7B4u: goto label_2cc7b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CC4ACu;
label_2cc4ac:
    // 0x2cc4ac: 0x3c02002d
    ctx->pc = 0x2cc4acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc4b0:
    // 0x2cc4b0: 0x10000012
label_2cc4b4:
    if (ctx->pc == 0x2CC4B4u) {
        ctx->pc = 0x2CC4B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956888));
        ctx->pc = 0x2CC4B8u;
        goto label_2cc4b8;
    }
    ctx->pc = 0x2CC4B0u;
    {
        const bool branch_taken_0x2cc4b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC4B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956888));
        if (branch_taken_0x2cc4b0) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4B8u;
label_2cc4b8:
    // 0x2cc4b8: 0x3c02002d
    ctx->pc = 0x2cc4b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc4bc:
    // 0x2cc4bc: 0x1000000f
label_2cc4c0:
    if (ctx->pc == 0x2CC4C0u) {
        ctx->pc = 0x2CC4C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957032));
        ctx->pc = 0x2CC4C4u;
        goto label_2cc4c4;
    }
    ctx->pc = 0x2CC4BCu;
    {
        const bool branch_taken_0x2cc4bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC4C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957032));
        if (branch_taken_0x2cc4bc) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4C4u;
label_2cc4c4:
    // 0x2cc4c4: 0x3c02002d
    ctx->pc = 0x2cc4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc4c8:
    // 0x2cc4c8: 0x1000000c
label_2cc4cc:
    if (ctx->pc == 0x2CC4CCu) {
        ctx->pc = 0x2CC4CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956888));
        ctx->pc = 0x2CC4D0u;
        goto label_2cc4d0;
    }
    ctx->pc = 0x2CC4C8u;
    {
        const bool branch_taken_0x2cc4c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC4CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956888));
        if (branch_taken_0x2cc4c8) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4D0u;
label_2cc4d0:
    // 0x2cc4d0: 0x3c02002d
    ctx->pc = 0x2cc4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc4d4:
    // 0x2cc4d4: 0x10000009
label_2cc4d8:
    if (ctx->pc == 0x2CC4D8u) {
        ctx->pc = 0x2CC4D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957032));
        ctx->pc = 0x2CC4DCu;
        goto label_2cc4dc;
    }
    ctx->pc = 0x2CC4D4u;
    {
        const bool branch_taken_0x2cc4d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC4D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957032));
        if (branch_taken_0x2cc4d4) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4DCu;
label_2cc4dc:
    // 0x2cc4dc: 0x3c02002d
    ctx->pc = 0x2cc4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc4e0:
    // 0x2cc4e0: 0x10000006
label_2cc4e4:
    if (ctx->pc == 0x2CC4E4u) {
        ctx->pc = 0x2CC4E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956952));
        ctx->pc = 0x2CC4E8u;
        goto label_2cc4e8;
    }
    ctx->pc = 0x2CC4E0u;
    {
        const bool branch_taken_0x2cc4e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC4E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956952));
        if (branch_taken_0x2cc4e0) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4E8u;
label_2cc4e8:
    // 0x2cc4e8: 0x3c02002d
    ctx->pc = 0x2cc4e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc4ec:
    // 0x2cc4ec: 0x10000003
label_2cc4f0:
    if (ctx->pc == 0x2CC4F0u) {
        ctx->pc = 0x2CC4F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956952));
        ctx->pc = 0x2CC4F4u;
        goto label_2cc4f4;
    }
    ctx->pc = 0x2CC4ECu;
    {
        const bool branch_taken_0x2cc4ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC4F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956952));
        if (branch_taken_0x2cc4ec) {
            ctx->pc = 0x2CC4FCu;
            goto label_2cc4fc;
        }
    }
    ctx->pc = 0x2CC4F4u;
label_2cc4f4:
    // 0x2cc4f4: 0x3c02002d
    ctx->pc = 0x2cc4f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_2cc4f8:
    // 0x2cc4f8: 0x2442d840
    ctx->pc = 0x2cc4f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957120));
label_2cc4fc:
    // 0x2cc4fc: 0xae42006c
    ctx->pc = 0x2cc4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_2cc500:
    // 0x2cc500: 0xa646002e
    ctx->pc = 0x2cc500u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 6));
label_2cc504:
    // 0x2cc504: 0xa6550032
    ctx->pc = 0x2cc504u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 21));
label_2cc508:
    // 0x2cc508: 0xa6530030
    ctx->pc = 0x2cc508u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 19));
label_2cc50c:
    // 0x2cc50c: 0xae480068
    ctx->pc = 0x2cc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 8));
label_2cc510:
    // 0x2cc510: 0xae440064
    ctx->pc = 0x2cc510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
label_2cc514:
    // 0x2cc514: 0x24d40001
    ctx->pc = 0x2cc514u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 6), 1));
label_2cc518:
    // 0x2cc518: 0x2402fffe
    ctx->pc = 0x2cc518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2cc51c:
    // 0x2cc51c: 0x282a024
    ctx->pc = 0x2cc51cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2cc520:
    // 0x2cc520: 0x8fa20000
    ctx->pc = 0x2cc520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc524:
    // 0x2cc524: 0x40182d
    ctx->pc = 0x2cc524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc528:
    // 0x2cc528: 0x2a3100b
    ctx->pc = 0x2cc528u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 21));
label_2cc52c:
    // 0x2cc52c: 0xafa20000
    ctx->pc = 0x2cc52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2cc530:
    // 0x2cc530: 0x277b80b
    ctx->pc = 0x2cc530u;
    if (GPR_U32(ctx, 23) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 19));
label_2cc534:
    // 0x2cc534: 0x2bef00b
    ctx->pc = 0x2cc534u;
    if (GPR_U32(ctx, 30) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 21));
label_2cc538:
    // 0x2cc538: 0x276b00b
    ctx->pc = 0x2cc538u;
    if (GPR_U32(ctx, 22) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 19));
label_2cc53c:
    // 0x2cc53c: 0x148840
    ctx->pc = 0x2cc53cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 20), 1));
label_2cc540:
    // 0x2cc540: 0x2402000c
    ctx->pc = 0x2cc540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2cc544:
    // 0x2cc544: 0x2e21818
    ctx->pc = 0x2cc544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2cc548:
    // 0x2cc548: 0x2238821
    ctx->pc = 0x2cc548u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2cc54c:
    // 0x2cc54c: 0x8fa30000
    ctx->pc = 0x2cc54cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc550:
    // 0x2cc550: 0x621018
    ctx->pc = 0x2cc550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2cc554:
    // 0x2cc554: 0x2228821
    ctx->pc = 0x2cc554u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2cc558:
    // 0x2cc558: 0x2368821
    ctx->pc = 0x2cc558u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_2cc55c:
    // 0x2cc55c: 0x8e420004
    ctx->pc = 0x2cc55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2cc560:
    // 0x2cc560: 0x1040000a
label_2cc564:
    if (ctx->pc == 0x2CC564u) {
        ctx->pc = 0x2CC564u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        ctx->pc = 0x2CC568u;
        goto label_2cc568;
    }
    ctx->pc = 0x2CC560u;
    {
        const bool branch_taken_0x2cc560 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC564u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        if (branch_taken_0x2cc560) {
            ctx->pc = 0x2CC58Cu;
            goto label_2cc58c;
        }
    }
    ctx->pc = 0x2CC568u;
label_2cc568:
    // 0x2cc568: 0xc0b4f52
label_2cc56c:
    if (ctx->pc == 0x2CC56Cu) {
        ctx->pc = 0x2CC56Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC570u;
        goto label_2cc570;
    }
    ctx->pc = 0x2CC568u;
    SET_GPR_U32(ctx, 31, 0x2CC570u);
    ctx->pc = 0x2CC56Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC570u; }
    }
    if (ctx->pc != 0x2CC570u) { return; }
    ctx->pc = 0x2CC570u;
label_2cc570:
    // 0x2cc570: 0x40802d
    ctx->pc = 0x2cc570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc574:
    // 0x2cc574: 0x3c03003a
    ctx->pc = 0x2cc574u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2cc578:
    // 0x2cc578: 0x2463aa38
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945336));
label_2cc57c:
    // 0x2cc57c: 0x8c620024
    ctx->pc = 0x2cc57cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2cc580:
    // 0x2cc580: 0x2221021
    ctx->pc = 0x2cc580u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2cc584:
    // 0x2cc584: 0x10000005
label_2cc588:
    if (ctx->pc == 0x2CC588u) {
        ctx->pc = 0x2CC588u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x2CC58Cu;
        goto label_2cc58c;
    }
    ctx->pc = 0x2CC584u;
    {
        const bool branch_taken_0x2cc584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC588u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x2cc584) {
            ctx->pc = 0x2CC59Cu;
            goto label_2cc59c;
        }
    }
    ctx->pc = 0x2CC58Cu;
label_2cc58c:
    // 0x2cc58c: 0x220202d
    ctx->pc = 0x2cc58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc590:
    // 0x2cc590: 0xc0b23a4
label_2cc594:
    if (ctx->pc == 0x2CC594u) {
        ctx->pc = 0x2CC594u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2CC598u;
        goto label_2cc598;
    }
    ctx->pc = 0x2CC590u;
    SET_GPR_U32(ctx, 31, 0x2CC598u);
    ctx->pc = 0x2CC594u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x2C8E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        allocPsysMem_0x2c8e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC598u; }
    }
    if (ctx->pc != 0x2CC598u) { return; }
    ctx->pc = 0x2CC598u;
label_2cc598:
    // 0x2cc598: 0x40802d
    ctx->pc = 0x2cc598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc59c:
    // 0x2cc59c: 0x1600000e
label_2cc5a0:
    if (ctx->pc == 0x2CC5A0u) {
        ctx->pc = 0x2CC5A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5A4u;
        goto label_2cc5a4;
    }
    ctx->pc = 0x2CC59Cu;
    {
        const bool branch_taken_0x2cc59c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CC5A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc59c) {
            ctx->pc = 0x2CC5D8u;
            goto label_2cc5d8;
        }
    }
    ctx->pc = 0x2CC5A4u;
label_2cc5a4:
    // 0x2cc5a4: 0x8e450004
    ctx->pc = 0x2cc5a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2cc5a8:
    // 0x2cc5a8: 0x10a00005
label_2cc5ac:
    if (ctx->pc == 0x2CC5ACu) {
        ctx->pc = 0x2CC5ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2CC5B0u;
        goto label_2cc5b0;
    }
    ctx->pc = 0x2CC5A8u;
    {
        const bool branch_taken_0x2cc5a8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC5ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2cc5a8) {
            ctx->pc = 0x2CC5C0u;
            goto label_2cc5c0;
        }
    }
    ctx->pc = 0x2CC5B0u;
label_2cc5b0:
    // 0x2cc5b0: 0xc0b492e
label_2cc5b4:
    if (ctx->pc == 0x2CC5B4u) {
        ctx->pc = 0x2CC5B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29904));
        ctx->pc = 0x2CC5B8u;
        goto label_2cc5b8;
    }
    ctx->pc = 0x2CC5B0u;
    SET_GPR_U32(ctx, 31, 0x2CC5B8u);
    ctx->pc = 0x2CC5B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29904));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC5B8u; }
    }
    if (ctx->pc != 0x2CC5B8u) { return; }
    ctx->pc = 0x2CC5B8u;
label_2cc5b8:
    // 0x2cc5b8: 0x10000069
label_2cc5bc:
    if (ctx->pc == 0x2CC5BCu) {
        ctx->pc = 0x2CC5BCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x2CC5C0u;
        goto label_2cc5c0;
    }
    ctx->pc = 0x2CC5B8u;
    {
        const bool branch_taken_0x2cc5b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC5BCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2cc5b8) {
            ctx->pc = 0x2CC760u;
            goto label_2cc760;
        }
    }
    ctx->pc = 0x2CC5C0u;
label_2cc5c0:
    // 0x2cc5c0: 0x3c04003b
    ctx->pc = 0x2cc5c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2cc5c4:
    // 0x2cc5c4: 0x248474f0
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29936));
label_2cc5c8:
    // 0x2cc5c8: 0xc0b492e
label_2cc5cc:
    if (ctx->pc == 0x2CC5CCu) {
        ctx->pc = 0x2CC5CCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2CC5D0u;
        goto label_2cc5d0;
    }
    ctx->pc = 0x2CC5C8u;
    SET_GPR_U32(ctx, 31, 0x2CC5D0u);
    ctx->pc = 0x2CC5CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC5D0u; }
    }
    if (ctx->pc != 0x2CC5D0u) { return; }
    ctx->pc = 0x2CC5D0u;
label_2cc5d0:
    // 0x2cc5d0: 0x10000063
label_2cc5d4:
    if (ctx->pc == 0x2CC5D4u) {
        ctx->pc = 0x2CC5D4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x2CC5D8u;
        goto label_2cc5d8;
    }
    ctx->pc = 0x2CC5D0u;
    {
        const bool branch_taken_0x2cc5d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC5D4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2cc5d0) {
            ctx->pc = 0x2CC760u;
            goto label_2cc760;
        }
    }
    ctx->pc = 0x2CC5D8u;
label_2cc5d8:
    // 0x2cc5d8: 0x282d
    ctx->pc = 0x2cc5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc5dc:
    // 0x2cc5dc: 0xc0becc6
label_2cc5e0:
    if (ctx->pc == 0x2CC5E0u) {
        ctx->pc = 0x2CC5E0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5E4u;
        goto label_2cc5e4;
    }
    ctx->pc = 0x2CC5DCu;
    SET_GPR_U32(ctx, 31, 0x2CC5E4u);
    ctx->pc = 0x2CC5E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC5E4u; }
    }
    if (ctx->pc != 0x2CC5E4u) { return; }
    ctx->pc = 0x2CC5E4u;
label_2cc5e4:
    // 0x2cc5e4: 0xae500008
    ctx->pc = 0x2cc5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_2cc5e8:
    // 0x2cc5e8: 0x141040
    ctx->pc = 0x2cc5e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
label_2cc5ec:
    // 0x2cc5ec: 0x12e00005
label_2cc5f0:
    if (ctx->pc == 0x2CC5F0u) {
        ctx->pc = 0x2CC5F0u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x2CC5F4u;
        goto label_2cc5f4;
    }
    ctx->pc = 0x2CC5ECu;
    {
        const bool branch_taken_0x2cc5ec = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC5F0u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x2cc5ec) {
            ctx->pc = 0x2CC604u;
            goto label_2cc604;
        }
    }
    ctx->pc = 0x2CC5F4u;
label_2cc5f4:
    // 0x2cc5f4: 0xae50000c
    ctx->pc = 0x2cc5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_2cc5f8:
    // 0x2cc5f8: 0x2402000c
    ctx->pc = 0x2cc5f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2cc5fc:
    // 0x2cc5fc: 0x2e21818
    ctx->pc = 0x2cc5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2cc600:
    // 0x2cc600: 0x708021
    ctx->pc = 0x2cc600u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cc604:
    // 0x2cc604: 0x8fa20000
    ctx->pc = 0x2cc604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc608:
    // 0x2cc608: 0x10400005
label_2cc60c:
    if (ctx->pc == 0x2CC60Cu) {
        ctx->pc = 0x2CC60Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2CC610u;
        goto label_2cc610;
    }
    ctx->pc = 0x2CC608u;
    {
        const bool branch_taken_0x2cc608 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC60Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2cc608) {
            ctx->pc = 0x2CC620u;
            goto label_2cc620;
        }
    }
    ctx->pc = 0x2CC610u;
label_2cc610:
    // 0x2cc610: 0xae500010
    ctx->pc = 0x2cc610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
label_2cc614:
    // 0x2cc614: 0x8fa30000
    ctx->pc = 0x2cc614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc618:
    // 0x2cc618: 0x621818
    ctx->pc = 0x2cc618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2cc61c:
    // 0x2cc61c: 0x708021
    ctx->pc = 0x2cc61cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2cc620:
    // 0x2cc620: 0x12c00003
label_2cc624:
    if (ctx->pc == 0x2CC624u) {
        ctx->pc = 0x2CC628u;
        goto label_2cc628;
    }
    ctx->pc = 0x2CC620u;
    {
        const bool branch_taken_0x2cc620 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cc620) {
            ctx->pc = 0x2CC630u;
            goto label_2cc630;
        }
    }
    ctx->pc = 0x2CC628u;
label_2cc628:
    // 0x2cc628: 0xae500014
    ctx->pc = 0x2cc628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_2cc62c:
    // 0x2cc62c: 0x2d08021
    ctx->pc = 0x2cc62cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2cc630:
    // 0x2cc630: 0x57c00001
label_2cc634:
    if (ctx->pc == 0x2CC634u) {
        ctx->pc = 0x2CC634u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
        ctx->pc = 0x2CC638u;
        goto label_2cc638;
    }
    ctx->pc = 0x2CC630u;
    {
        const bool branch_taken_0x2cc630 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cc630) {
            ctx->pc = 0x2CC634u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
            ctx->pc = 0x2CC638u;
            goto label_2cc638;
        }
    }
    ctx->pc = 0x2CC638u;
label_2cc638:
    // 0x2cc638: 0x24020001
    ctx->pc = 0x2cc638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2cc63c:
    // 0x2cc63c: 0x26630001
    ctx->pc = 0x2cc63cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
label_2cc640:
    // 0x2cc640: 0x43102a
    ctx->pc = 0x2cc640u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2cc644:
    // 0x2cc644: 0x10400009
label_2cc648:
    if (ctx->pc == 0x2CC648u) {
        ctx->pc = 0x2CC648u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC64Cu;
        goto label_2cc64c;
    }
    ctx->pc = 0x2CC644u;
    {
        const bool branch_taken_0x2cc644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC648u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc644) {
            ctx->pc = 0x2CC66Cu;
            goto label_2cc66c;
        }
    }
    ctx->pc = 0x2CC64Cu;
label_2cc64c:
    // 0x2cc64c: 0x24050001
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2cc650:
    // 0x2cc650: 0x24840001
    ctx->pc = 0x2cc650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2cc654:
    // 0x2cc654: 0x851004
    ctx->pc = 0x2cc654u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_2cc658:
    // 0x2cc658: 0x43102a
    ctx->pc = 0x2cc658u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2cc65c:
    // 0x2cc65c: 0x0
    ctx->pc = 0x2cc65cu;
    // NOP
label_2cc660:
    // 0x2cc660: 0x0
    ctx->pc = 0x2cc660u;
    // NOP
label_2cc664:
    // 0x2cc664: 0x1440fffa
label_2cc668:
    if (ctx->pc == 0x2CC668u) {
        ctx->pc = 0x2CC66Cu;
        goto label_2cc66c;
    }
    ctx->pc = 0x2CC664u;
    {
        const bool branch_taken_0x2cc664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cc664) {
            ctx->pc = 0x2CC650u;
            goto label_2cc650;
        }
    }
    ctx->pc = 0x2CC66Cu;
label_2cc66c:
    // 0x2cc66c: 0xa2440035
    ctx->pc = 0x2cc66cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 4));
label_2cc670:
    // 0x2cc670: 0x24020001
    ctx->pc = 0x2cc670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2cc674:
    // 0x2cc674: 0x26a30001
    ctx->pc = 0x2cc674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 1));
label_2cc678:
    // 0x2cc678: 0x43102a
    ctx->pc = 0x2cc678u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2cc67c:
    // 0x2cc67c: 0x10400009
label_2cc680:
    if (ctx->pc == 0x2CC680u) {
        ctx->pc = 0x2CC680u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC684u;
        goto label_2cc684;
    }
    ctx->pc = 0x2CC67Cu;
    {
        const bool branch_taken_0x2cc67c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC680u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc67c) {
            ctx->pc = 0x2CC6A4u;
            goto label_2cc6a4;
        }
    }
    ctx->pc = 0x2CC684u;
label_2cc684:
    // 0x2cc684: 0x24050001
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2cc688:
    // 0x2cc688: 0x24840001
    ctx->pc = 0x2cc688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2cc68c:
    // 0x2cc68c: 0x851004
    ctx->pc = 0x2cc68cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_2cc690:
    // 0x2cc690: 0x43102a
    ctx->pc = 0x2cc690u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2cc694:
    // 0x2cc694: 0x0
    ctx->pc = 0x2cc694u;
    // NOP
label_2cc698:
    // 0x2cc698: 0x0
    ctx->pc = 0x2cc698u;
    // NOP
label_2cc69c:
    // 0x2cc69c: 0x1440fffa
label_2cc6a0:
    if (ctx->pc == 0x2CC6A0u) {
        ctx->pc = 0x2CC6A4u;
        goto label_2cc6a4;
    }
    ctx->pc = 0x2CC69Cu;
    {
        const bool branch_taken_0x2cc69c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cc69c) {
            ctx->pc = 0x2CC688u;
            goto label_2cc688;
        }
    }
    ctx->pc = 0x2CC6A4u;
label_2cc6a4:
    // 0x2cc6a4: 0xa2440036
    ctx->pc = 0x2cc6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 4));
label_2cc6a8:
    // 0x2cc6a8: 0x308200ff
    ctx->pc = 0x2cc6a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
label_2cc6ac:
    // 0x2cc6ac: 0x24030010
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
label_2cc6b0:
    // 0x2cc6b0: 0x621823
    ctx->pc = 0x2cc6b0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cc6b4:
    // 0x2cc6b4: 0x92420035
    ctx->pc = 0x2cc6b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_2cc6b8:
    // 0x2cc6b8: 0x621823
    ctx->pc = 0x2cc6b8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cc6bc:
    // 0x2cc6bc: 0x1c600021
label_2cc6c0:
    if (ctx->pc == 0x2CC6C0u) {
        ctx->pc = 0x2CC6C0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2CC6C4u;
        goto label_2cc6c4;
    }
    ctx->pc = 0x2CC6BCu;
    {
        const bool branch_taken_0x2cc6bc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CC6C0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2cc6bc) {
            ctx->pc = 0x2CC744u;
            goto label_2cc744;
        }
    }
    ctx->pc = 0x2CC6C4u;
label_2cc6c4:
    // 0x2cc6c4: 0x308500ff
    ctx->pc = 0x2cc6c4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
label_2cc6c8:
    // 0x2cc6c8: 0x40382d
    ctx->pc = 0x2cc6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc6cc:
    // 0x2cc6cc: 0x24a20001
    ctx->pc = 0x2cc6ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
label_2cc6d0:
    // 0x2cc6d0: 0x3c04003b
    ctx->pc = 0x2cc6d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2cc6d4:
    // 0x2cc6d4: 0x24847508
    ctx->pc = 0x2cc6d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29960));
label_2cc6d8:
    // 0x2cc6d8: 0xe0302d
    ctx->pc = 0x2cc6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2cc6dc:
    // 0x2cc6dc: 0xe23821
    ctx->pc = 0x2cc6dcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2cc6e0:
    // 0x2cc6e0: 0xc0b492e
label_2cc6e4:
    if (ctx->pc == 0x2CC6E4u) {
        ctx->pc = 0x2CC6E4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2CC6E8u;
        goto label_2cc6e8;
    }
    ctx->pc = 0x2CC6E0u;
    SET_GPR_U32(ctx, 31, 0x2CC6E8u);
    ctx->pc = 0x2CC6E4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC6E8u; }
    }
    if (ctx->pc != 0x2CC6E8u) { return; }
    ctx->pc = 0x2CC6E8u;
label_2cc6e8:
    // 0x2cc6e8: 0x8e440028
    ctx->pc = 0x2cc6e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2cc6ec:
    // 0x2cc6ec: 0xdfbf00a0
    ctx->pc = 0x2cc6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2cc6f0:
    // 0x2cc6f0: 0xdfbe0090
    ctx->pc = 0x2cc6f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2cc6f4:
    // 0x2cc6f4: 0xdfb70080
    ctx->pc = 0x2cc6f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2cc6f8:
    // 0x2cc6f8: 0xdfb60070
    ctx->pc = 0x2cc6f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2cc6fc:
    // 0x2cc6fc: 0xdfb50060
    ctx->pc = 0x2cc6fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2cc700:
    // 0x2cc700: 0xdfb40050
    ctx->pc = 0x2cc700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc704:
    // 0x2cc704: 0xdfb30040
    ctx->pc = 0x2cc704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cc708:
    // 0x2cc708: 0xdfb20030
    ctx->pc = 0x2cc708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cc70c:
    // 0x2cc70c: 0xdfb10020
    ctx->pc = 0x2cc70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc710:
    // 0x2cc710: 0xdfb00010
    ctx->pc = 0x2cc710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc714:
    // 0x2cc714: 0xc7bd00f8
    ctx->pc = 0x2cc714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_2cc718:
    // 0x2cc718: 0xc7bc00f0
    ctx->pc = 0x2cc718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2cc71c:
    // 0x2cc71c: 0xc7bb00e8
    ctx->pc = 0x2cc71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2cc720:
    // 0x2cc720: 0xc7ba00e0
    ctx->pc = 0x2cc720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2cc724:
    // 0x2cc724: 0xc7b900d8
    ctx->pc = 0x2cc724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2cc728:
    // 0x2cc728: 0xc7b800d0
    ctx->pc = 0x2cc728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2cc72c:
    // 0x2cc72c: 0xc7b700c8
    ctx->pc = 0x2cc72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2cc730:
    // 0x2cc730: 0xc7b600c0
    ctx->pc = 0x2cc730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cc734:
    // 0x2cc734: 0xc7b500b8
    ctx->pc = 0x2cc734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cc738:
    // 0x2cc738: 0xc7b400b0
    ctx->pc = 0x2cc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cc73c:
    // 0x2cc73c: 0x80b2470
label_2cc740:
    if (ctx->pc == 0x2CC740u) {
        ctx->pc = 0x2CC740u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2CC744u;
        goto label_2cc744;
    }
    ctx->pc = 0x2CC73Cu;
    ctx->pc = 0x2CC740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x2C91C0u;
    MBTerminatePsys_0x2c91c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2CC744u;
label_2cc744:
    // 0x2cc744: 0x2662ffff
    ctx->pc = 0x2cc744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967295));
label_2cc748:
    // 0x2cc748: 0xa642001c
    ctx->pc = 0x2cc748u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
label_2cc74c:
    // 0x2cc74c: 0x26a2ffff
    ctx->pc = 0x2cc74cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294967295));
label_2cc750:
    // 0x2cc750: 0xa6420020
    ctx->pc = 0x2cc750u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 2));
label_2cc754:
    // 0x2cc754: 0x3402ffff
    ctx->pc = 0x2cc754u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
label_2cc758:
    // 0x2cc758: 0xa642001e
    ctx->pc = 0x2cc758u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
label_2cc75c:
    // 0x2cc75c: 0xa6420022
    ctx->pc = 0x2cc75cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
label_2cc760:
    // 0x2cc760: 0xdfbf00a0
    ctx->pc = 0x2cc760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2cc764:
    // 0x2cc764: 0xdfbe0090
    ctx->pc = 0x2cc764u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2cc768:
    // 0x2cc768: 0xdfb70080
    ctx->pc = 0x2cc768u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2cc76c:
    // 0x2cc76c: 0xdfb60070
    ctx->pc = 0x2cc76cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2cc770:
    // 0x2cc770: 0xdfb50060
    ctx->pc = 0x2cc770u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2cc774:
    // 0x2cc774: 0xdfb40050
    ctx->pc = 0x2cc774u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc778:
    // 0x2cc778: 0xdfb30040
    ctx->pc = 0x2cc778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cc77c:
    // 0x2cc77c: 0xdfb20030
    ctx->pc = 0x2cc77cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cc780:
    // 0x2cc780: 0xdfb10020
    ctx->pc = 0x2cc780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc784:
    // 0x2cc784: 0xdfb00010
    ctx->pc = 0x2cc784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc788:
    // 0x2cc788: 0xc7bd00f8
    ctx->pc = 0x2cc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_2cc78c:
    // 0x2cc78c: 0xc7bc00f0
    ctx->pc = 0x2cc78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2cc790:
    // 0x2cc790: 0xc7bb00e8
    ctx->pc = 0x2cc790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2cc794:
    // 0x2cc794: 0xc7ba00e0
    ctx->pc = 0x2cc794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2cc798:
    // 0x2cc798: 0xc7b900d8
    ctx->pc = 0x2cc798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2cc79c:
    // 0x2cc79c: 0xc7b800d0
    ctx->pc = 0x2cc79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2cc7a0:
    // 0x2cc7a0: 0xc7b700c8
    ctx->pc = 0x2cc7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2cc7a4:
    // 0x2cc7a4: 0xc7b600c0
    ctx->pc = 0x2cc7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cc7a8:
    // 0x2cc7a8: 0xc7b500b8
    ctx->pc = 0x2cc7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cc7ac:
    // 0x2cc7ac: 0xc7b400b0
    ctx->pc = 0x2cc7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cc7b0:
    // 0x2cc7b0: 0x3e00008
label_2cc7b4:
    if (ctx->pc == 0x2CC7B4u) {
        ctx->pc = 0x2CC7B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2CC7B8u;
        goto label_fallthrough_0x2cc7b0;
    }
    ctx->pc = 0x2CC7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC7B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBCC8u: goto label_2cbcc8;
            case 0x2CBCCCu: goto label_2cbccc;
            case 0x2CBCD0u: goto label_2cbcd0;
            case 0x2CBCD4u: goto label_2cbcd4;
            case 0x2CBCD8u: goto label_2cbcd8;
            case 0x2CBCDCu: goto label_2cbcdc;
            case 0x2CBCE0u: goto label_2cbce0;
            case 0x2CBCE4u: goto label_2cbce4;
            case 0x2CBCE8u: goto label_2cbce8;
            case 0x2CBCECu: goto label_2cbcec;
            case 0x2CBCF0u: goto label_2cbcf0;
            case 0x2CBCF4u: goto label_2cbcf4;
            case 0x2CBCF8u: goto label_2cbcf8;
            case 0x2CBCFCu: goto label_2cbcfc;
            case 0x2CBD00u: goto label_2cbd00;
            case 0x2CBD04u: goto label_2cbd04;
            case 0x2CBD08u: goto label_2cbd08;
            case 0x2CBD0Cu: goto label_2cbd0c;
            case 0x2CBD10u: goto label_2cbd10;
            case 0x2CBD14u: goto label_2cbd14;
            case 0x2CBD18u: goto label_2cbd18;
            case 0x2CBD1Cu: goto label_2cbd1c;
            case 0x2CBD20u: goto label_2cbd20;
            case 0x2CBD24u: goto label_2cbd24;
            case 0x2CBD28u: goto label_2cbd28;
            case 0x2CBD2Cu: goto label_2cbd2c;
            case 0x2CBD30u: goto label_2cbd30;
            case 0x2CBD34u: goto label_2cbd34;
            case 0x2CBD38u: goto label_2cbd38;
            case 0x2CBD3Cu: goto label_2cbd3c;
            case 0x2CBD40u: goto label_2cbd40;
            case 0x2CBD44u: goto label_2cbd44;
            case 0x2CBD48u: goto label_2cbd48;
            case 0x2CBD4Cu: goto label_2cbd4c;
            case 0x2CBD50u: goto label_2cbd50;
            case 0x2CBD54u: goto label_2cbd54;
            case 0x2CBD58u: goto label_2cbd58;
            case 0x2CBD5Cu: goto label_2cbd5c;
            case 0x2CBD60u: goto label_2cbd60;
            case 0x2CBD64u: goto label_2cbd64;
            case 0x2CBD68u: goto label_2cbd68;
            case 0x2CBD6Cu: goto label_2cbd6c;
            case 0x2CBD70u: goto label_2cbd70;
            case 0x2CBD74u: goto label_2cbd74;
            case 0x2CBD78u: goto label_2cbd78;
            case 0x2CBD7Cu: goto label_2cbd7c;
            case 0x2CBD80u: goto label_2cbd80;
            case 0x2CBD84u: goto label_2cbd84;
            case 0x2CBD88u: goto label_2cbd88;
            case 0x2CBD8Cu: goto label_2cbd8c;
            case 0x2CBD90u: goto label_2cbd90;
            case 0x2CBD94u: goto label_2cbd94;
            case 0x2CBD98u: goto label_2cbd98;
            case 0x2CBD9Cu: goto label_2cbd9c;
            case 0x2CBDA0u: goto label_2cbda0;
            case 0x2CBDA4u: goto label_2cbda4;
            case 0x2CBDA8u: goto label_2cbda8;
            case 0x2CBDACu: goto label_2cbdac;
            case 0x2CBDB0u: goto label_2cbdb0;
            case 0x2CBDB4u: goto label_2cbdb4;
            case 0x2CBDB8u: goto label_2cbdb8;
            case 0x2CBDBCu: goto label_2cbdbc;
            case 0x2CBDC0u: goto label_2cbdc0;
            case 0x2CBDC4u: goto label_2cbdc4;
            case 0x2CBDC8u: goto label_2cbdc8;
            case 0x2CBDCCu: goto label_2cbdcc;
            case 0x2CBDD0u: goto label_2cbdd0;
            case 0x2CBDD4u: goto label_2cbdd4;
            case 0x2CBDD8u: goto label_2cbdd8;
            case 0x2CBDDCu: goto label_2cbddc;
            case 0x2CBDE0u: goto label_2cbde0;
            case 0x2CBDE4u: goto label_2cbde4;
            case 0x2CBDE8u: goto label_2cbde8;
            case 0x2CBDECu: goto label_2cbdec;
            case 0x2CBDF0u: goto label_2cbdf0;
            case 0x2CBDF4u: goto label_2cbdf4;
            case 0x2CBDF8u: goto label_2cbdf8;
            case 0x2CBDFCu: goto label_2cbdfc;
            case 0x2CBE00u: goto label_2cbe00;
            case 0x2CBE04u: goto label_2cbe04;
            case 0x2CBE08u: goto label_2cbe08;
            case 0x2CBE0Cu: goto label_2cbe0c;
            case 0x2CBE10u: goto label_2cbe10;
            case 0x2CBE14u: goto label_2cbe14;
            case 0x2CBE18u: goto label_2cbe18;
            case 0x2CBE1Cu: goto label_2cbe1c;
            case 0x2CBE20u: goto label_2cbe20;
            case 0x2CBE24u: goto label_2cbe24;
            case 0x2CBE28u: goto label_2cbe28;
            case 0x2CBE2Cu: goto label_2cbe2c;
            case 0x2CBE30u: goto label_2cbe30;
            case 0x2CBE34u: goto label_2cbe34;
            case 0x2CBE38u: goto label_2cbe38;
            case 0x2CBE3Cu: goto label_2cbe3c;
            case 0x2CBE40u: goto label_2cbe40;
            case 0x2CBE44u: goto label_2cbe44;
            case 0x2CBE48u: goto label_2cbe48;
            case 0x2CBE4Cu: goto label_2cbe4c;
            case 0x2CBE50u: goto label_2cbe50;
            case 0x2CBE54u: goto label_2cbe54;
            case 0x2CBE58u: goto label_2cbe58;
            case 0x2CBE5Cu: goto label_2cbe5c;
            case 0x2CBE60u: goto label_2cbe60;
            case 0x2CBE64u: goto label_2cbe64;
            case 0x2CBE68u: goto label_2cbe68;
            case 0x2CBE6Cu: goto label_2cbe6c;
            case 0x2CBE70u: goto label_2cbe70;
            case 0x2CBE74u: goto label_2cbe74;
            case 0x2CBE78u: goto label_2cbe78;
            case 0x2CBE7Cu: goto label_2cbe7c;
            case 0x2CBE80u: goto label_2cbe80;
            case 0x2CBE84u: goto label_2cbe84;
            case 0x2CBE88u: goto label_2cbe88;
            case 0x2CBE8Cu: goto label_2cbe8c;
            case 0x2CBE90u: goto label_2cbe90;
            case 0x2CBE94u: goto label_2cbe94;
            case 0x2CBE98u: goto label_2cbe98;
            case 0x2CBE9Cu: goto label_2cbe9c;
            case 0x2CBEA0u: goto label_2cbea0;
            case 0x2CBEA4u: goto label_2cbea4;
            case 0x2CBEA8u: goto label_2cbea8;
            case 0x2CBEACu: goto label_2cbeac;
            case 0x2CBEB0u: goto label_2cbeb0;
            case 0x2CBEB4u: goto label_2cbeb4;
            case 0x2CBEB8u: goto label_2cbeb8;
            case 0x2CBEBCu: goto label_2cbebc;
            case 0x2CBEC0u: goto label_2cbec0;
            case 0x2CBEC4u: goto label_2cbec4;
            case 0x2CBEC8u: goto label_2cbec8;
            case 0x2CBECCu: goto label_2cbecc;
            case 0x2CBED0u: goto label_2cbed0;
            case 0x2CBED4u: goto label_2cbed4;
            case 0x2CBED8u: goto label_2cbed8;
            case 0x2CBEDCu: goto label_2cbedc;
            case 0x2CBEE0u: goto label_2cbee0;
            case 0x2CBEE4u: goto label_2cbee4;
            case 0x2CBEE8u: goto label_2cbee8;
            case 0x2CBEECu: goto label_2cbeec;
            case 0x2CBEF0u: goto label_2cbef0;
            case 0x2CBEF4u: goto label_2cbef4;
            case 0x2CBEF8u: goto label_2cbef8;
            case 0x2CBEFCu: goto label_2cbefc;
            case 0x2CBF00u: goto label_2cbf00;
            case 0x2CBF04u: goto label_2cbf04;
            case 0x2CBF08u: goto label_2cbf08;
            case 0x2CBF0Cu: goto label_2cbf0c;
            case 0x2CBF10u: goto label_2cbf10;
            case 0x2CBF14u: goto label_2cbf14;
            case 0x2CBF18u: goto label_2cbf18;
            case 0x2CBF1Cu: goto label_2cbf1c;
            case 0x2CBF20u: goto label_2cbf20;
            case 0x2CBF24u: goto label_2cbf24;
            case 0x2CBF28u: goto label_2cbf28;
            case 0x2CBF2Cu: goto label_2cbf2c;
            case 0x2CBF30u: goto label_2cbf30;
            case 0x2CBF34u: goto label_2cbf34;
            case 0x2CBF38u: goto label_2cbf38;
            case 0x2CBF3Cu: goto label_2cbf3c;
            case 0x2CBF40u: goto label_2cbf40;
            case 0x2CBF44u: goto label_2cbf44;
            case 0x2CBF48u: goto label_2cbf48;
            case 0x2CBF4Cu: goto label_2cbf4c;
            case 0x2CBF50u: goto label_2cbf50;
            case 0x2CBF54u: goto label_2cbf54;
            case 0x2CBF58u: goto label_2cbf58;
            case 0x2CBF5Cu: goto label_2cbf5c;
            case 0x2CBF60u: goto label_2cbf60;
            case 0x2CBF64u: goto label_2cbf64;
            case 0x2CBF68u: goto label_2cbf68;
            case 0x2CBF6Cu: goto label_2cbf6c;
            case 0x2CBF70u: goto label_2cbf70;
            case 0x2CBF74u: goto label_2cbf74;
            case 0x2CBF78u: goto label_2cbf78;
            case 0x2CBF7Cu: goto label_2cbf7c;
            case 0x2CBF80u: goto label_2cbf80;
            case 0x2CBF84u: goto label_2cbf84;
            case 0x2CBF88u: goto label_2cbf88;
            case 0x2CBF8Cu: goto label_2cbf8c;
            case 0x2CBF90u: goto label_2cbf90;
            case 0x2CBF94u: goto label_2cbf94;
            case 0x2CBF98u: goto label_2cbf98;
            case 0x2CBF9Cu: goto label_2cbf9c;
            case 0x2CBFA0u: goto label_2cbfa0;
            case 0x2CBFA4u: goto label_2cbfa4;
            case 0x2CBFA8u: goto label_2cbfa8;
            case 0x2CBFACu: goto label_2cbfac;
            case 0x2CBFB0u: goto label_2cbfb0;
            case 0x2CBFB4u: goto label_2cbfb4;
            case 0x2CBFB8u: goto label_2cbfb8;
            case 0x2CBFBCu: goto label_2cbfbc;
            case 0x2CBFC0u: goto label_2cbfc0;
            case 0x2CBFC4u: goto label_2cbfc4;
            case 0x2CBFC8u: goto label_2cbfc8;
            case 0x2CBFCCu: goto label_2cbfcc;
            case 0x2CBFD0u: goto label_2cbfd0;
            case 0x2CBFD4u: goto label_2cbfd4;
            case 0x2CBFD8u: goto label_2cbfd8;
            case 0x2CBFDCu: goto label_2cbfdc;
            case 0x2CBFE0u: goto label_2cbfe0;
            case 0x2CBFE4u: goto label_2cbfe4;
            case 0x2CBFE8u: goto label_2cbfe8;
            case 0x2CBFECu: goto label_2cbfec;
            case 0x2CBFF0u: goto label_2cbff0;
            case 0x2CBFF4u: goto label_2cbff4;
            case 0x2CBFF8u: goto label_2cbff8;
            case 0x2CBFFCu: goto label_2cbffc;
            case 0x2CC000u: goto label_2cc000;
            case 0x2CC004u: goto label_2cc004;
            case 0x2CC008u: goto label_2cc008;
            case 0x2CC00Cu: goto label_2cc00c;
            case 0x2CC010u: goto label_2cc010;
            case 0x2CC014u: goto label_2cc014;
            case 0x2CC018u: goto label_2cc018;
            case 0x2CC01Cu: goto label_2cc01c;
            case 0x2CC020u: goto label_2cc020;
            case 0x2CC024u: goto label_2cc024;
            case 0x2CC028u: goto label_2cc028;
            case 0x2CC02Cu: goto label_2cc02c;
            case 0x2CC030u: goto label_2cc030;
            case 0x2CC034u: goto label_2cc034;
            case 0x2CC038u: goto label_2cc038;
            case 0x2CC03Cu: goto label_2cc03c;
            case 0x2CC040u: goto label_2cc040;
            case 0x2CC044u: goto label_2cc044;
            case 0x2CC048u: goto label_2cc048;
            case 0x2CC04Cu: goto label_2cc04c;
            case 0x2CC050u: goto label_2cc050;
            case 0x2CC054u: goto label_2cc054;
            case 0x2CC058u: goto label_2cc058;
            case 0x2CC05Cu: goto label_2cc05c;
            case 0x2CC060u: goto label_2cc060;
            case 0x2CC064u: goto label_2cc064;
            case 0x2CC068u: goto label_2cc068;
            case 0x2CC06Cu: goto label_2cc06c;
            case 0x2CC070u: goto label_2cc070;
            case 0x2CC074u: goto label_2cc074;
            case 0x2CC078u: goto label_2cc078;
            case 0x2CC07Cu: goto label_2cc07c;
            case 0x2CC080u: goto label_2cc080;
            case 0x2CC084u: goto label_2cc084;
            case 0x2CC088u: goto label_2cc088;
            case 0x2CC08Cu: goto label_2cc08c;
            case 0x2CC090u: goto label_2cc090;
            case 0x2CC094u: goto label_2cc094;
            case 0x2CC098u: goto label_2cc098;
            case 0x2CC09Cu: goto label_2cc09c;
            case 0x2CC0A0u: goto label_2cc0a0;
            case 0x2CC0A4u: goto label_2cc0a4;
            case 0x2CC0A8u: goto label_2cc0a8;
            case 0x2CC0ACu: goto label_2cc0ac;
            case 0x2CC0B0u: goto label_2cc0b0;
            case 0x2CC0B4u: goto label_2cc0b4;
            case 0x2CC0B8u: goto label_2cc0b8;
            case 0x2CC0BCu: goto label_2cc0bc;
            case 0x2CC0C0u: goto label_2cc0c0;
            case 0x2CC0C4u: goto label_2cc0c4;
            case 0x2CC0C8u: goto label_2cc0c8;
            case 0x2CC0CCu: goto label_2cc0cc;
            case 0x2CC0D0u: goto label_2cc0d0;
            case 0x2CC0D4u: goto label_2cc0d4;
            case 0x2CC0D8u: goto label_2cc0d8;
            case 0x2CC0DCu: goto label_2cc0dc;
            case 0x2CC0E0u: goto label_2cc0e0;
            case 0x2CC0E4u: goto label_2cc0e4;
            case 0x2CC0E8u: goto label_2cc0e8;
            case 0x2CC0ECu: goto label_2cc0ec;
            case 0x2CC0F0u: goto label_2cc0f0;
            case 0x2CC0F4u: goto label_2cc0f4;
            case 0x2CC0F8u: goto label_2cc0f8;
            case 0x2CC0FCu: goto label_2cc0fc;
            case 0x2CC100u: goto label_2cc100;
            case 0x2CC104u: goto label_2cc104;
            case 0x2CC108u: goto label_2cc108;
            case 0x2CC10Cu: goto label_2cc10c;
            case 0x2CC110u: goto label_2cc110;
            case 0x2CC114u: goto label_2cc114;
            case 0x2CC118u: goto label_2cc118;
            case 0x2CC11Cu: goto label_2cc11c;
            case 0x2CC120u: goto label_2cc120;
            case 0x2CC124u: goto label_2cc124;
            case 0x2CC128u: goto label_2cc128;
            case 0x2CC12Cu: goto label_2cc12c;
            case 0x2CC130u: goto label_2cc130;
            case 0x2CC134u: goto label_2cc134;
            case 0x2CC138u: goto label_2cc138;
            case 0x2CC13Cu: goto label_2cc13c;
            case 0x2CC140u: goto label_2cc140;
            case 0x2CC144u: goto label_2cc144;
            case 0x2CC148u: goto label_2cc148;
            case 0x2CC14Cu: goto label_2cc14c;
            case 0x2CC150u: goto label_2cc150;
            case 0x2CC154u: goto label_2cc154;
            case 0x2CC158u: goto label_2cc158;
            case 0x2CC15Cu: goto label_2cc15c;
            case 0x2CC160u: goto label_2cc160;
            case 0x2CC164u: goto label_2cc164;
            case 0x2CC168u: goto label_2cc168;
            case 0x2CC16Cu: goto label_2cc16c;
            case 0x2CC170u: goto label_2cc170;
            case 0x2CC174u: goto label_2cc174;
            case 0x2CC178u: goto label_2cc178;
            case 0x2CC17Cu: goto label_2cc17c;
            case 0x2CC180u: goto label_2cc180;
            case 0x2CC184u: goto label_2cc184;
            case 0x2CC188u: goto label_2cc188;
            case 0x2CC18Cu: goto label_2cc18c;
            case 0x2CC190u: goto label_2cc190;
            case 0x2CC194u: goto label_2cc194;
            case 0x2CC198u: goto label_2cc198;
            case 0x2CC19Cu: goto label_2cc19c;
            case 0x2CC1A0u: goto label_2cc1a0;
            case 0x2CC1A4u: goto label_2cc1a4;
            case 0x2CC1A8u: goto label_2cc1a8;
            case 0x2CC1ACu: goto label_2cc1ac;
            case 0x2CC1B0u: goto label_2cc1b0;
            case 0x2CC1B4u: goto label_2cc1b4;
            case 0x2CC1B8u: goto label_2cc1b8;
            case 0x2CC1BCu: goto label_2cc1bc;
            case 0x2CC1C0u: goto label_2cc1c0;
            case 0x2CC1C4u: goto label_2cc1c4;
            case 0x2CC1C8u: goto label_2cc1c8;
            case 0x2CC1CCu: goto label_2cc1cc;
            case 0x2CC1D0u: goto label_2cc1d0;
            case 0x2CC1D4u: goto label_2cc1d4;
            case 0x2CC1D8u: goto label_2cc1d8;
            case 0x2CC1DCu: goto label_2cc1dc;
            case 0x2CC1E0u: goto label_2cc1e0;
            case 0x2CC1E4u: goto label_2cc1e4;
            case 0x2CC1E8u: goto label_2cc1e8;
            case 0x2CC1ECu: goto label_2cc1ec;
            case 0x2CC1F0u: goto label_2cc1f0;
            case 0x2CC1F4u: goto label_2cc1f4;
            case 0x2CC1F8u: goto label_2cc1f8;
            case 0x2CC1FCu: goto label_2cc1fc;
            case 0x2CC200u: goto label_2cc200;
            case 0x2CC204u: goto label_2cc204;
            case 0x2CC208u: goto label_2cc208;
            case 0x2CC20Cu: goto label_2cc20c;
            case 0x2CC210u: goto label_2cc210;
            case 0x2CC214u: goto label_2cc214;
            case 0x2CC218u: goto label_2cc218;
            case 0x2CC21Cu: goto label_2cc21c;
            case 0x2CC220u: goto label_2cc220;
            case 0x2CC224u: goto label_2cc224;
            case 0x2CC228u: goto label_2cc228;
            case 0x2CC22Cu: goto label_2cc22c;
            case 0x2CC230u: goto label_2cc230;
            case 0x2CC234u: goto label_2cc234;
            case 0x2CC238u: goto label_2cc238;
            case 0x2CC23Cu: goto label_2cc23c;
            case 0x2CC240u: goto label_2cc240;
            case 0x2CC244u: goto label_2cc244;
            case 0x2CC248u: goto label_2cc248;
            case 0x2CC24Cu: goto label_2cc24c;
            case 0x2CC250u: goto label_2cc250;
            case 0x2CC254u: goto label_2cc254;
            case 0x2CC258u: goto label_2cc258;
            case 0x2CC25Cu: goto label_2cc25c;
            case 0x2CC260u: goto label_2cc260;
            case 0x2CC264u: goto label_2cc264;
            case 0x2CC268u: goto label_2cc268;
            case 0x2CC26Cu: goto label_2cc26c;
            case 0x2CC270u: goto label_2cc270;
            case 0x2CC274u: goto label_2cc274;
            case 0x2CC278u: goto label_2cc278;
            case 0x2CC27Cu: goto label_2cc27c;
            case 0x2CC280u: goto label_2cc280;
            case 0x2CC284u: goto label_2cc284;
            case 0x2CC288u: goto label_2cc288;
            case 0x2CC28Cu: goto label_2cc28c;
            case 0x2CC290u: goto label_2cc290;
            case 0x2CC294u: goto label_2cc294;
            case 0x2CC298u: goto label_2cc298;
            case 0x2CC29Cu: goto label_2cc29c;
            case 0x2CC2A0u: goto label_2cc2a0;
            case 0x2CC2A4u: goto label_2cc2a4;
            case 0x2CC2A8u: goto label_2cc2a8;
            case 0x2CC2ACu: goto label_2cc2ac;
            case 0x2CC2B0u: goto label_2cc2b0;
            case 0x2CC2B4u: goto label_2cc2b4;
            case 0x2CC2B8u: goto label_2cc2b8;
            case 0x2CC2BCu: goto label_2cc2bc;
            case 0x2CC2C0u: goto label_2cc2c0;
            case 0x2CC2C4u: goto label_2cc2c4;
            case 0x2CC2C8u: goto label_2cc2c8;
            case 0x2CC2CCu: goto label_2cc2cc;
            case 0x2CC2D0u: goto label_2cc2d0;
            case 0x2CC2D4u: goto label_2cc2d4;
            case 0x2CC2D8u: goto label_2cc2d8;
            case 0x2CC2DCu: goto label_2cc2dc;
            case 0x2CC2E0u: goto label_2cc2e0;
            case 0x2CC2E4u: goto label_2cc2e4;
            case 0x2CC2E8u: goto label_2cc2e8;
            case 0x2CC2ECu: goto label_2cc2ec;
            case 0x2CC2F0u: goto label_2cc2f0;
            case 0x2CC2F4u: goto label_2cc2f4;
            case 0x2CC2F8u: goto label_2cc2f8;
            case 0x2CC2FCu: goto label_2cc2fc;
            case 0x2CC300u: goto label_2cc300;
            case 0x2CC304u: goto label_2cc304;
            case 0x2CC308u: goto label_2cc308;
            case 0x2CC30Cu: goto label_2cc30c;
            case 0x2CC310u: goto label_2cc310;
            case 0x2CC314u: goto label_2cc314;
            case 0x2CC318u: goto label_2cc318;
            case 0x2CC31Cu: goto label_2cc31c;
            case 0x2CC320u: goto label_2cc320;
            case 0x2CC324u: goto label_2cc324;
            case 0x2CC328u: goto label_2cc328;
            case 0x2CC32Cu: goto label_2cc32c;
            case 0x2CC330u: goto label_2cc330;
            case 0x2CC334u: goto label_2cc334;
            case 0x2CC338u: goto label_2cc338;
            case 0x2CC33Cu: goto label_2cc33c;
            case 0x2CC340u: goto label_2cc340;
            case 0x2CC344u: goto label_2cc344;
            case 0x2CC348u: goto label_2cc348;
            case 0x2CC34Cu: goto label_2cc34c;
            case 0x2CC350u: goto label_2cc350;
            case 0x2CC354u: goto label_2cc354;
            case 0x2CC358u: goto label_2cc358;
            case 0x2CC35Cu: goto label_2cc35c;
            case 0x2CC360u: goto label_2cc360;
            case 0x2CC364u: goto label_2cc364;
            case 0x2CC368u: goto label_2cc368;
            case 0x2CC36Cu: goto label_2cc36c;
            case 0x2CC370u: goto label_2cc370;
            case 0x2CC374u: goto label_2cc374;
            case 0x2CC378u: goto label_2cc378;
            case 0x2CC37Cu: goto label_2cc37c;
            case 0x2CC380u: goto label_2cc380;
            case 0x2CC384u: goto label_2cc384;
            case 0x2CC388u: goto label_2cc388;
            case 0x2CC38Cu: goto label_2cc38c;
            case 0x2CC390u: goto label_2cc390;
            case 0x2CC394u: goto label_2cc394;
            case 0x2CC398u: goto label_2cc398;
            case 0x2CC39Cu: goto label_2cc39c;
            case 0x2CC3A0u: goto label_2cc3a0;
            case 0x2CC3A4u: goto label_2cc3a4;
            case 0x2CC3A8u: goto label_2cc3a8;
            case 0x2CC3ACu: goto label_2cc3ac;
            case 0x2CC3B0u: goto label_2cc3b0;
            case 0x2CC3B4u: goto label_2cc3b4;
            case 0x2CC3B8u: goto label_2cc3b8;
            case 0x2CC3BCu: goto label_2cc3bc;
            case 0x2CC3C0u: goto label_2cc3c0;
            case 0x2CC3C4u: goto label_2cc3c4;
            case 0x2CC3C8u: goto label_2cc3c8;
            case 0x2CC3CCu: goto label_2cc3cc;
            case 0x2CC3D0u: goto label_2cc3d0;
            case 0x2CC3D4u: goto label_2cc3d4;
            case 0x2CC3D8u: goto label_2cc3d8;
            case 0x2CC3DCu: goto label_2cc3dc;
            case 0x2CC3E0u: goto label_2cc3e0;
            case 0x2CC3E4u: goto label_2cc3e4;
            case 0x2CC3E8u: goto label_2cc3e8;
            case 0x2CC3ECu: goto label_2cc3ec;
            case 0x2CC3F0u: goto label_2cc3f0;
            case 0x2CC3F4u: goto label_2cc3f4;
            case 0x2CC3F8u: goto label_2cc3f8;
            case 0x2CC3FCu: goto label_2cc3fc;
            case 0x2CC400u: goto label_2cc400;
            case 0x2CC404u: goto label_2cc404;
            case 0x2CC408u: goto label_2cc408;
            case 0x2CC40Cu: goto label_2cc40c;
            case 0x2CC410u: goto label_2cc410;
            case 0x2CC414u: goto label_2cc414;
            case 0x2CC418u: goto label_2cc418;
            case 0x2CC41Cu: goto label_2cc41c;
            case 0x2CC420u: goto label_2cc420;
            case 0x2CC424u: goto label_2cc424;
            case 0x2CC428u: goto label_2cc428;
            case 0x2CC42Cu: goto label_2cc42c;
            case 0x2CC430u: goto label_2cc430;
            case 0x2CC434u: goto label_2cc434;
            case 0x2CC438u: goto label_2cc438;
            case 0x2CC43Cu: goto label_2cc43c;
            case 0x2CC440u: goto label_2cc440;
            case 0x2CC444u: goto label_2cc444;
            case 0x2CC448u: goto label_2cc448;
            case 0x2CC44Cu: goto label_2cc44c;
            case 0x2CC450u: goto label_2cc450;
            case 0x2CC454u: goto label_2cc454;
            case 0x2CC458u: goto label_2cc458;
            case 0x2CC45Cu: goto label_2cc45c;
            case 0x2CC460u: goto label_2cc460;
            case 0x2CC464u: goto label_2cc464;
            case 0x2CC468u: goto label_2cc468;
            case 0x2CC46Cu: goto label_2cc46c;
            case 0x2CC470u: goto label_2cc470;
            case 0x2CC474u: goto label_2cc474;
            case 0x2CC478u: goto label_2cc478;
            case 0x2CC47Cu: goto label_2cc47c;
            case 0x2CC480u: goto label_2cc480;
            case 0x2CC484u: goto label_2cc484;
            case 0x2CC488u: goto label_2cc488;
            case 0x2CC48Cu: goto label_2cc48c;
            case 0x2CC490u: goto label_2cc490;
            case 0x2CC494u: goto label_2cc494;
            case 0x2CC498u: goto label_2cc498;
            case 0x2CC49Cu: goto label_2cc49c;
            case 0x2CC4A0u: goto label_2cc4a0;
            case 0x2CC4A4u: goto label_2cc4a4;
            case 0x2CC4A8u: goto label_2cc4a8;
            case 0x2CC4ACu: goto label_2cc4ac;
            case 0x2CC4B0u: goto label_2cc4b0;
            case 0x2CC4B4u: goto label_2cc4b4;
            case 0x2CC4B8u: goto label_2cc4b8;
            case 0x2CC4BCu: goto label_2cc4bc;
            case 0x2CC4C0u: goto label_2cc4c0;
            case 0x2CC4C4u: goto label_2cc4c4;
            case 0x2CC4C8u: goto label_2cc4c8;
            case 0x2CC4CCu: goto label_2cc4cc;
            case 0x2CC4D0u: goto label_2cc4d0;
            case 0x2CC4D4u: goto label_2cc4d4;
            case 0x2CC4D8u: goto label_2cc4d8;
            case 0x2CC4DCu: goto label_2cc4dc;
            case 0x2CC4E0u: goto label_2cc4e0;
            case 0x2CC4E4u: goto label_2cc4e4;
            case 0x2CC4E8u: goto label_2cc4e8;
            case 0x2CC4ECu: goto label_2cc4ec;
            case 0x2CC4F0u: goto label_2cc4f0;
            case 0x2CC4F4u: goto label_2cc4f4;
            case 0x2CC4F8u: goto label_2cc4f8;
            case 0x2CC4FCu: goto label_2cc4fc;
            case 0x2CC500u: goto label_2cc500;
            case 0x2CC504u: goto label_2cc504;
            case 0x2CC508u: goto label_2cc508;
            case 0x2CC50Cu: goto label_2cc50c;
            case 0x2CC510u: goto label_2cc510;
            case 0x2CC514u: goto label_2cc514;
            case 0x2CC518u: goto label_2cc518;
            case 0x2CC51Cu: goto label_2cc51c;
            case 0x2CC520u: goto label_2cc520;
            case 0x2CC524u: goto label_2cc524;
            case 0x2CC528u: goto label_2cc528;
            case 0x2CC52Cu: goto label_2cc52c;
            case 0x2CC530u: goto label_2cc530;
            case 0x2CC534u: goto label_2cc534;
            case 0x2CC538u: goto label_2cc538;
            case 0x2CC53Cu: goto label_2cc53c;
            case 0x2CC540u: goto label_2cc540;
            case 0x2CC544u: goto label_2cc544;
            case 0x2CC548u: goto label_2cc548;
            case 0x2CC54Cu: goto label_2cc54c;
            case 0x2CC550u: goto label_2cc550;
            case 0x2CC554u: goto label_2cc554;
            case 0x2CC558u: goto label_2cc558;
            case 0x2CC55Cu: goto label_2cc55c;
            case 0x2CC560u: goto label_2cc560;
            case 0x2CC564u: goto label_2cc564;
            case 0x2CC568u: goto label_2cc568;
            case 0x2CC56Cu: goto label_2cc56c;
            case 0x2CC570u: goto label_2cc570;
            case 0x2CC574u: goto label_2cc574;
            case 0x2CC578u: goto label_2cc578;
            case 0x2CC57Cu: goto label_2cc57c;
            case 0x2CC580u: goto label_2cc580;
            case 0x2CC584u: goto label_2cc584;
            case 0x2CC588u: goto label_2cc588;
            case 0x2CC58Cu: goto label_2cc58c;
            case 0x2CC590u: goto label_2cc590;
            case 0x2CC594u: goto label_2cc594;
            case 0x2CC598u: goto label_2cc598;
            case 0x2CC59Cu: goto label_2cc59c;
            case 0x2CC5A0u: goto label_2cc5a0;
            case 0x2CC5A4u: goto label_2cc5a4;
            case 0x2CC5A8u: goto label_2cc5a8;
            case 0x2CC5ACu: goto label_2cc5ac;
            case 0x2CC5B0u: goto label_2cc5b0;
            case 0x2CC5B4u: goto label_2cc5b4;
            case 0x2CC5B8u: goto label_2cc5b8;
            case 0x2CC5BCu: goto label_2cc5bc;
            case 0x2CC5C0u: goto label_2cc5c0;
            case 0x2CC5C4u: goto label_2cc5c4;
            case 0x2CC5C8u: goto label_2cc5c8;
            case 0x2CC5CCu: goto label_2cc5cc;
            case 0x2CC5D0u: goto label_2cc5d0;
            case 0x2CC5D4u: goto label_2cc5d4;
            case 0x2CC5D8u: goto label_2cc5d8;
            case 0x2CC5DCu: goto label_2cc5dc;
            case 0x2CC5E0u: goto label_2cc5e0;
            case 0x2CC5E4u: goto label_2cc5e4;
            case 0x2CC5E8u: goto label_2cc5e8;
            case 0x2CC5ECu: goto label_2cc5ec;
            case 0x2CC5F0u: goto label_2cc5f0;
            case 0x2CC5F4u: goto label_2cc5f4;
            case 0x2CC5F8u: goto label_2cc5f8;
            case 0x2CC5FCu: goto label_2cc5fc;
            case 0x2CC600u: goto label_2cc600;
            case 0x2CC604u: goto label_2cc604;
            case 0x2CC608u: goto label_2cc608;
            case 0x2CC60Cu: goto label_2cc60c;
            case 0x2CC610u: goto label_2cc610;
            case 0x2CC614u: goto label_2cc614;
            case 0x2CC618u: goto label_2cc618;
            case 0x2CC61Cu: goto label_2cc61c;
            case 0x2CC620u: goto label_2cc620;
            case 0x2CC624u: goto label_2cc624;
            case 0x2CC628u: goto label_2cc628;
            case 0x2CC62Cu: goto label_2cc62c;
            case 0x2CC630u: goto label_2cc630;
            case 0x2CC634u: goto label_2cc634;
            case 0x2CC638u: goto label_2cc638;
            case 0x2CC63Cu: goto label_2cc63c;
            case 0x2CC640u: goto label_2cc640;
            case 0x2CC644u: goto label_2cc644;
            case 0x2CC648u: goto label_2cc648;
            case 0x2CC64Cu: goto label_2cc64c;
            case 0x2CC650u: goto label_2cc650;
            case 0x2CC654u: goto label_2cc654;
            case 0x2CC658u: goto label_2cc658;
            case 0x2CC65Cu: goto label_2cc65c;
            case 0x2CC660u: goto label_2cc660;
            case 0x2CC664u: goto label_2cc664;
            case 0x2CC668u: goto label_2cc668;
            case 0x2CC66Cu: goto label_2cc66c;
            case 0x2CC670u: goto label_2cc670;
            case 0x2CC674u: goto label_2cc674;
            case 0x2CC678u: goto label_2cc678;
            case 0x2CC67Cu: goto label_2cc67c;
            case 0x2CC680u: goto label_2cc680;
            case 0x2CC684u: goto label_2cc684;
            case 0x2CC688u: goto label_2cc688;
            case 0x2CC68Cu: goto label_2cc68c;
            case 0x2CC690u: goto label_2cc690;
            case 0x2CC694u: goto label_2cc694;
            case 0x2CC698u: goto label_2cc698;
            case 0x2CC69Cu: goto label_2cc69c;
            case 0x2CC6A0u: goto label_2cc6a0;
            case 0x2CC6A4u: goto label_2cc6a4;
            case 0x2CC6A8u: goto label_2cc6a8;
            case 0x2CC6ACu: goto label_2cc6ac;
            case 0x2CC6B0u: goto label_2cc6b0;
            case 0x2CC6B4u: goto label_2cc6b4;
            case 0x2CC6B8u: goto label_2cc6b8;
            case 0x2CC6BCu: goto label_2cc6bc;
            case 0x2CC6C0u: goto label_2cc6c0;
            case 0x2CC6C4u: goto label_2cc6c4;
            case 0x2CC6C8u: goto label_2cc6c8;
            case 0x2CC6CCu: goto label_2cc6cc;
            case 0x2CC6D0u: goto label_2cc6d0;
            case 0x2CC6D4u: goto label_2cc6d4;
            case 0x2CC6D8u: goto label_2cc6d8;
            case 0x2CC6DCu: goto label_2cc6dc;
            case 0x2CC6E0u: goto label_2cc6e0;
            case 0x2CC6E4u: goto label_2cc6e4;
            case 0x2CC6E8u: goto label_2cc6e8;
            case 0x2CC6ECu: goto label_2cc6ec;
            case 0x2CC6F0u: goto label_2cc6f0;
            case 0x2CC6F4u: goto label_2cc6f4;
            case 0x2CC6F8u: goto label_2cc6f8;
            case 0x2CC6FCu: goto label_2cc6fc;
            case 0x2CC700u: goto label_2cc700;
            case 0x2CC704u: goto label_2cc704;
            case 0x2CC708u: goto label_2cc708;
            case 0x2CC70Cu: goto label_2cc70c;
            case 0x2CC710u: goto label_2cc710;
            case 0x2CC714u: goto label_2cc714;
            case 0x2CC718u: goto label_2cc718;
            case 0x2CC71Cu: goto label_2cc71c;
            case 0x2CC720u: goto label_2cc720;
            case 0x2CC724u: goto label_2cc724;
            case 0x2CC728u: goto label_2cc728;
            case 0x2CC72Cu: goto label_2cc72c;
            case 0x2CC730u: goto label_2cc730;
            case 0x2CC734u: goto label_2cc734;
            case 0x2CC738u: goto label_2cc738;
            case 0x2CC73Cu: goto label_2cc73c;
            case 0x2CC740u: goto label_2cc740;
            case 0x2CC744u: goto label_2cc744;
            case 0x2CC748u: goto label_2cc748;
            case 0x2CC74Cu: goto label_2cc74c;
            case 0x2CC750u: goto label_2cc750;
            case 0x2CC754u: goto label_2cc754;
            case 0x2CC758u: goto label_2cc758;
            case 0x2CC75Cu: goto label_2cc75c;
            case 0x2CC760u: goto label_2cc760;
            case 0x2CC764u: goto label_2cc764;
            case 0x2CC768u: goto label_2cc768;
            case 0x2CC76Cu: goto label_2cc76c;
            case 0x2CC770u: goto label_2cc770;
            case 0x2CC774u: goto label_2cc774;
            case 0x2CC778u: goto label_2cc778;
            case 0x2CC77Cu: goto label_2cc77c;
            case 0x2CC780u: goto label_2cc780;
            case 0x2CC784u: goto label_2cc784;
            case 0x2CC788u: goto label_2cc788;
            case 0x2CC78Cu: goto label_2cc78c;
            case 0x2CC790u: goto label_2cc790;
            case 0x2CC794u: goto label_2cc794;
            case 0x2CC798u: goto label_2cc798;
            case 0x2CC79Cu: goto label_2cc79c;
            case 0x2CC7A0u: goto label_2cc7a0;
            case 0x2CC7A4u: goto label_2cc7a4;
            case 0x2CC7A8u: goto label_2cc7a8;
            case 0x2CC7ACu: goto label_2cc7ac;
            case 0x2CC7B0u: goto label_2cc7b0;
            case 0x2CC7B4u: goto label_2cc7b4;
            default: break;
        }
        return;
    }
label_fallthrough_0x2cc7b0:
    ctx->pc = 0x2CC7B8u;
}
