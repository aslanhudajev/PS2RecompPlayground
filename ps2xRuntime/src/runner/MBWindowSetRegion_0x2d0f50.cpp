#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowSetRegion
// Address: 0x2d0f50 - 0x2d1244
void MBWindowSetRegion_0x2d0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0f50u;

    // 0x2d0f50: 0x27bdffb0
    ctx->pc = 0x2d0f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d0f54: 0xffbf0010
    ctx->pc = 0x2d0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0f58: 0xffb00000
    ctx->pc = 0x2d0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0f5c: 0xe7b90048
    ctx->pc = 0x2d0f5cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d0f60: 0xe7b80040
    ctx->pc = 0x2d0f60u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d0f64: 0xe7b70038
    ctx->pc = 0x2d0f64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d0f68: 0xe7b60030
    ctx->pc = 0x2d0f68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d0f6c: 0xe7b50028
    ctx->pc = 0x2d0f6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d0f70: 0xe7b40020
    ctx->pc = 0x2d0f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d0f74: 0x460065c6
    ctx->pc = 0x2d0f74u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2d0f78: 0x46006d46
    ctx->pc = 0x2d0f78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2d0f7c: 0x46007586
    ctx->pc = 0x2d0f7cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2d0f80: 0x46007e06
    ctx->pc = 0x2d0f80u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x2d0f84: 0x46008646
    ctx->pc = 0x2d0f84u;
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    // 0x2d0f88: 0x3c020036
    ctx->pc = 0x2d0f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d0f8c: 0x8c43dee0
    ctx->pc = 0x2d0f8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d0f90: 0x3c02003a
    ctx->pc = 0x2d0f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d0f94: 0x3c01bf80
    ctx->pc = 0x2d0f94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2d0f98: 0x44810000
    ctx->pc = 0x2d0f98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d0f9c: 0x4600b832
    ctx->pc = 0x2d0f9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0fa0: 0x0
    ctx->pc = 0x2d0fa0u;
    // NOP
    // 0x2d0fa4: 0x45000004
    ctx->pc = 0x2D0FA4u;
    {
        const bool branch_taken_0x2d0fa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0FA8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
        if (branch_taken_0x2d0fa4) {
            ctx->pc = 0x2D0FB8u;
            goto label_2d0fb8;
        }
    }
    ctx->pc = 0x2D0FACu;
    // 0x2d0fac: 0x4480b800
    ctx->pc = 0x2d0facu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x2d0fb0: 0x3c01bf80
    ctx->pc = 0x2d0fb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2d0fb4: 0x44810000
    ctx->pc = 0x2d0fb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2d0fb8:
    // 0x2d0fb8: 0x4600a832
    ctx->pc = 0x2d0fb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0fbc: 0x45000006
    ctx->pc = 0x2D0FBCu;
    {
        const bool branch_taken_0x2d0fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0fbc) {
            ctx->pc = 0x2D0FD8u;
            goto label_2d0fd8;
        }
    }
    ctx->pc = 0x2D0FC4u;
    // 0x2d0fc4: 0x8c620010
    ctx->pc = 0x2d0fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d0fc8: 0xc4550020
    ctx->pc = 0x2d0fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d0fcc: 0x4680ad60
    ctx->pc = 0x2d0fccu;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2d0fd0: 0x10000009
    ctx->pc = 0x2D0FD0u;
    {
        const bool branch_taken_0x2d0fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0fd0) {
            ctx->pc = 0x2D0FF8u;
            goto label_2d0ff8;
        }
    }
    ctx->pc = 0x2D0FD8u;
label_2d0fd8:
    // 0x2d0fd8: 0x44800000
    ctx->pc = 0x2d0fd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d0fdc: 0x4600a834
    ctx->pc = 0x2d0fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0fe0: 0x45000005
    ctx->pc = 0x2D0FE0u;
    {
        const bool branch_taken_0x2d0fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0fe0) {
            ctx->pc = 0x2D0FF8u;
            goto label_2d0ff8;
        }
    }
    ctx->pc = 0x2D0FE8u;
    // 0x2d0fe8: 0x8c620010
    ctx->pc = 0x2d0fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d0fec: 0xc4400020
    ctx->pc = 0x2d0fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0ff0: 0x46800020
    ctx->pc = 0x2d0ff0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d0ff4: 0x4600ad40
    ctx->pc = 0x2d0ff4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2d0ff8:
    // 0x2d0ff8: 0x3c01bf80
    ctx->pc = 0x2d0ff8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2d0ffc: 0x44810000
    ctx->pc = 0x2d0ffcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d1000: 0x4600b032
    ctx->pc = 0x2d1000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1004: 0x45000006
    ctx->pc = 0x2D1004u;
    {
        const bool branch_taken_0x2d1004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1004) {
            ctx->pc = 0x2D1020u;
            goto label_2d1020;
        }
    }
    ctx->pc = 0x2D100Cu;
    // 0x2d100c: 0x8c620010
    ctx->pc = 0x2d100cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d1010: 0xc4560024
    ctx->pc = 0x2d1010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d1014: 0x4680b5a0
    ctx->pc = 0x2d1014u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x2d1018: 0x10000009
    ctx->pc = 0x2D1018u;
    {
        const bool branch_taken_0x2d1018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d1018) {
            ctx->pc = 0x2D1040u;
            goto label_2d1040;
        }
    }
    ctx->pc = 0x2D1020u;
label_2d1020:
    // 0x2d1020: 0x44800000
    ctx->pc = 0x2d1020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d1024: 0x4600b034
    ctx->pc = 0x2d1024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1028: 0x45000005
    ctx->pc = 0x2D1028u;
    {
        const bool branch_taken_0x2d1028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1028) {
            ctx->pc = 0x2D1040u;
            goto label_2d1040;
        }
    }
    ctx->pc = 0x2D1030u;
    // 0x2d1030: 0x8c620010
    ctx->pc = 0x2d1030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d1034: 0xc4400024
    ctx->pc = 0x2d1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1038: 0x46800020
    ctx->pc = 0x2d1038u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d103c: 0x4600b580
    ctx->pc = 0x2d103cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_2d1040:
    // 0x2d1040: 0x3c01bf80
    ctx->pc = 0x2d1040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2d1044: 0x44810000
    ctx->pc = 0x2d1044u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d1048: 0x4600c032
    ctx->pc = 0x2d1048u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d104c: 0x0
    ctx->pc = 0x2d104cu;
    // NOP
    // 0x2d1050: 0x45000002
    ctx->pc = 0x2D1050u;
    {
        const bool branch_taken_0x2d1050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1054u;
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        if (branch_taken_0x2d1050) {
            ctx->pc = 0x2D105Cu;
            goto label_2d105c;
        }
    }
    ctx->pc = 0x2D1058u;
    // 0x2d1058: 0x4480c000
    ctx->pc = 0x2d1058u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
label_2d105c:
    // 0x2d105c: 0x4600c3c6
    ctx->pc = 0x2d105cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x2d1060: 0x4600ab46
    ctx->pc = 0x2d1060u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2d1064: 0x44800000
    ctx->pc = 0x2d1064u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d1068: 0x4600b834
    ctx->pc = 0x2d1068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d106c: 0x0
    ctx->pc = 0x2d106cu;
    // NOP
    // 0x2d1070: 0x45000003
    ctx->pc = 0x2D1070u;
    {
        const bool branch_taken_0x2d1070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1074u;
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x2d1070) {
            ctx->pc = 0x2D1080u;
            goto label_2d1080;
        }
    }
    ctx->pc = 0x2D1078u;
    // 0x2d1078: 0x46000306
    ctx->pc = 0x2d1078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d107c: 0x44800000
    ctx->pc = 0x2d107cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2d1080:
    // 0x2d1080: 0x46006834
    ctx->pc = 0x2d1080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1084: 0x0
    ctx->pc = 0x2d1084u;
    // NOP
    // 0x2d1088: 0x45030001
    ctx->pc = 0x2D1088u;
    {
        const bool branch_taken_0x2d1088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1088) {
            ctx->pc = 0x2D108Cu;
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2D1090u;
            goto label_2d1090;
        }
    }
    ctx->pc = 0x2D1090u;
label_2d1090:
    // 0x2d1090: 0x44800000
    ctx->pc = 0x2d1090u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d1094: 0x46007034
    ctx->pc = 0x2d1094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1098: 0x0
    ctx->pc = 0x2d1098u;
    // NOP
    // 0x2d109c: 0x45030002
    ctx->pc = 0x2D109Cu;
    {
        const bool branch_taken_0x2d109c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d109c) {
            ctx->pc = 0x2D10A0u;
            ctx->f[14] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2D10A8u;
            goto label_2d10a8;
        }
    }
    ctx->pc = 0x2D10A4u;
    // 0x2d10a4: 0x44800000
    ctx->pc = 0x2d10a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2d10a8:
    // 0x2d10a8: 0x46007834
    ctx->pc = 0x2d10a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d10ac: 0x0
    ctx->pc = 0x2d10acu;
    // NOP
    // 0x2d10b0: 0x45030001
    ctx->pc = 0x2D10B0u;
    {
        const bool branch_taken_0x2d10b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d10b0) {
            ctx->pc = 0x2D10B4u;
            ctx->f[15] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2D10B8u;
            goto label_2d10b8;
        }
    }
    ctx->pc = 0x2D10B8u;
label_2d10b8:
    // 0x2d10b8: 0x8c620010
    ctx->pc = 0x2d10b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d10bc: 0xc4400020
    ctx->pc = 0x2d10bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d10c0: 0x46800020
    ctx->pc = 0x2d10c0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d10c4: 0x460c0034
    ctx->pc = 0x2d10c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d10c8: 0x0
    ctx->pc = 0x2d10c8u;
    // NOP
    // 0x2d10cc: 0x45030004
    ctx->pc = 0x2D10CCu;
    {
        const bool branch_taken_0x2d10cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d10cc) {
            ctx->pc = 0x2D10D0u;
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2D10E0u;
            goto label_2d10e0;
        }
    }
    ctx->pc = 0x2D10D4u;
    // 0x2d10d4: 0x8c620010
    ctx->pc = 0x2d10d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d10d8: 0xc4400020
    ctx->pc = 0x2d10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d10dc: 0x46800020
    ctx->pc = 0x2d10dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2d10e0:
    // 0x2d10e0: 0x460d0034
    ctx->pc = 0x2d10e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d10e4: 0x0
    ctx->pc = 0x2d10e4u;
    // NOP
    // 0x2d10e8: 0x45030001
    ctx->pc = 0x2D10E8u;
    {
        const bool branch_taken_0x2d10e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d10e8) {
            ctx->pc = 0x2D10ECu;
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2D10F0u;
            goto label_2d10f0;
        }
    }
    ctx->pc = 0x2D10F0u;
label_2d10f0:
    // 0x2d10f0: 0x8c620010
    ctx->pc = 0x2d10f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d10f4: 0xc4400024
    ctx->pc = 0x2d10f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d10f8: 0x46800020
    ctx->pc = 0x2d10f8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d10fc: 0x460e0034
    ctx->pc = 0x2d10fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1100: 0x0
    ctx->pc = 0x2d1100u;
    // NOP
    // 0x2d1104: 0x45030004
    ctx->pc = 0x2D1104u;
    {
        const bool branch_taken_0x2d1104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1104) {
            ctx->pc = 0x2D1108u;
            ctx->f[14] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2D1118u;
            goto label_2d1118;
        }
    }
    ctx->pc = 0x2D110Cu;
    // 0x2d110c: 0x8c620010
    ctx->pc = 0x2d110cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d1110: 0xc4400024
    ctx->pc = 0x2d1110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1114: 0x46800020
    ctx->pc = 0x2d1114u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2d1118:
    // 0x2d1118: 0x460f0034
    ctx->pc = 0x2d1118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d111c: 0x0
    ctx->pc = 0x2d111cu;
    // NOP
    // 0x2d1120: 0x45030001
    ctx->pc = 0x2D1120u;
    {
        const bool branch_taken_0x2d1120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1120) {
            ctx->pc = 0x2D1124u;
            ctx->f[15] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2D1128u;
            goto label_2d1128;
        }
    }
    ctx->pc = 0x2D1128u;
label_2d1128:
    // 0x2d1128: 0x460d6034
    ctx->pc = 0x2d1128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d112c: 0x0
    ctx->pc = 0x2d112cu;
    // NOP
    // 0x2d1130: 0x45000005
    ctx->pc = 0x2D1130u;
    {
        const bool branch_taken_0x2d1130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1134u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
        if (branch_taken_0x2d1130) {
            ctx->pc = 0x2D1148u;
            goto label_2d1148;
        }
    }
    ctx->pc = 0x2D1138u;
    // 0x2d1138: 0xc4400020
    ctx->pc = 0x2d1138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d113c: 0x46800020
    ctx->pc = 0x2d113cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d1140: 0x10000004
    ctx->pc = 0x2D1140u;
    {
        const bool branch_taken_0x2d1140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1144u;
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
        if (branch_taken_0x2d1140) {
            ctx->pc = 0x2D1154u;
            goto label_2d1154;
        }
    }
    ctx->pc = 0x2D1148u;
label_2d1148:
    // 0x2d1148: 0xc4400020
    ctx->pc = 0x2d1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d114c: 0x46800020
    ctx->pc = 0x2d114cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d1150: 0x460c0301
    ctx->pc = 0x2d1150u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_2d1154:
    // 0x2d1154: 0x460f7034
    ctx->pc = 0x2d1154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1158: 0x0
    ctx->pc = 0x2d1158u;
    // NOP
    // 0x2d115c: 0x45000005
    ctx->pc = 0x2D115Cu;
    {
        const bool branch_taken_0x2d115c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1160u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
        if (branch_taken_0x2d115c) {
            ctx->pc = 0x2D1174u;
            goto label_2d1174;
        }
    }
    ctx->pc = 0x2D1164u;
    // 0x2d1164: 0xc4400024
    ctx->pc = 0x2d1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1168: 0x46800020
    ctx->pc = 0x2d1168u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d116c: 0x10000004
    ctx->pc = 0x2D116Cu;
    {
        const bool branch_taken_0x2d116c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1170u;
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
        if (branch_taken_0x2d116c) {
            ctx->pc = 0x2D1180u;
            goto label_2d1180;
        }
    }
    ctx->pc = 0x2D1174u;
label_2d1174:
    // 0x2d1174: 0xc4400024
    ctx->pc = 0x2d1174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1178: 0x46800020
    ctx->pc = 0x2d1178u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d117c: 0x460e0381
    ctx->pc = 0x2d117cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
label_2d1180:
    // 0x2d1180: 0xc0aae00
    ctx->pc = 0x2D1180u;
    SET_GPR_U32(ctx, 31, 0x2D1188u);
    ctx->pc = 0x2AB800u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowViewport_0x2ab800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1188u; }
    }
    if (ctx->pc != 0x2D1188u) { return; }
    ctx->pc = 0x2D1188u;
    // 0x2d1188: 0x4617a881
    ctx->pc = 0x2d1188u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x2d118c: 0x4618b0c1
    ctx->pc = 0x2d118cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x2d1190: 0x3c013f00
    ctx->pc = 0x2d1190u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d1194: 0x4481a000
    ctx->pc = 0x2d1194u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2d1198: 0x4619b801
    ctx->pc = 0x2d1198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x2d119c: 0xe600003c
    ctx->pc = 0x2d119cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2d11a0: 0x4619a800
    ctx->pc = 0x2d11a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x2d11a4: 0xe6000040
    ctx->pc = 0x2d11a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2d11a8: 0x4619c800
    ctx->pc = 0x2d11a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
    // 0x2d11ac: 0x4600b040
    ctx->pc = 0x2d11acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2d11b0: 0xe6010044
    ctx->pc = 0x2d11b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2d11b4: 0x4600c001
    ctx->pc = 0x2d11b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x2d11b8: 0xe6000048
    ctx->pc = 0x2d11b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2d11bc: 0xe617004c
    ctx->pc = 0x2d11bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2d11c0: 0xe6150050
    ctx->pc = 0x2d11c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2d11c4: 0xe6160054
    ctx->pc = 0x2d11c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2d11c8: 0xe6180058
    ctx->pc = 0x2d11c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2d11cc: 0xe6020014
    ctx->pc = 0x2d11ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d11d0: 0xe6030018
    ctx->pc = 0x2d11d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d11d4: 0xc60c001c
    ctx->pc = 0x2d11d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d11d8: 0xc0b4492
    ctx->pc = 0x2D11D8u;
    SET_GPR_U32(ctx, 31, 0x2D11E0u);
    ctx->pc = 0x2D11DCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D1248u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetAng_0x2d1248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D11E0u; }
    }
    if (ctx->pc != 0x2D11E0u) { return; }
    ctx->pc = 0x2D11E0u;
    // 0x2d11e0: 0xc6000014
    ctx->pc = 0x2d11e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d11e4: 0x46140002
    ctx->pc = 0x2d11e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d11e8: 0xe60001ac
    ctx->pc = 0x2d11e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x2d11ec: 0xc6000018
    ctx->pc = 0x2d11ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d11f0: 0x46140002
    ctx->pc = 0x2d11f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d11f4: 0xe60001b0
    ctx->pc = 0x2d11f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x2d11f8: 0xc6000010
    ctx->pc = 0x2d11f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d11fc: 0xe60001b4
    ctx->pc = 0x2d11fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x2d1200: 0x4615b800
    ctx->pc = 0x2d1200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x2d1204: 0x46140002
    ctx->pc = 0x2d1204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d1208: 0xe60001a0
    ctx->pc = 0x2d1208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2d120c: 0x4618b000
    ctx->pc = 0x2d120cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x2d1210: 0x46140002
    ctx->pc = 0x2d1210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d1214: 0xe60001a4
    ctx->pc = 0x2d1214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2d1218: 0xae0001a8
    ctx->pc = 0x2d1218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2d121c: 0xdfbf0010
    ctx->pc = 0x2d121cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1220: 0xdfb00000
    ctx->pc = 0x2d1220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1224: 0xc7b90048
    ctx->pc = 0x2d1224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2d1228: 0xc7b80040
    ctx->pc = 0x2d1228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d122c: 0xc7b70038
    ctx->pc = 0x2d122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d1230: 0xc7b60030
    ctx->pc = 0x2d1230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d1234: 0xc7b50028
    ctx->pc = 0x2d1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d1238: 0xc7b40020
    ctx->pc = 0x2d1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d123c: 0x3e00008
    ctx->pc = 0x2D123Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0FB8u: goto label_2d0fb8;
            case 0x2D0FD8u: goto label_2d0fd8;
            case 0x2D0FF8u: goto label_2d0ff8;
            case 0x2D1020u: goto label_2d1020;
            case 0x2D1040u: goto label_2d1040;
            case 0x2D105Cu: goto label_2d105c;
            case 0x2D1080u: goto label_2d1080;
            case 0x2D1090u: goto label_2d1090;
            case 0x2D10A8u: goto label_2d10a8;
            case 0x2D10B8u: goto label_2d10b8;
            case 0x2D10E0u: goto label_2d10e0;
            case 0x2D10F0u: goto label_2d10f0;
            case 0x2D1118u: goto label_2d1118;
            case 0x2D1128u: goto label_2d1128;
            case 0x2D1148u: goto label_2d1148;
            case 0x2D1154u: goto label_2d1154;
            case 0x2D1174u: goto label_2d1174;
            case 0x2D1180u: goto label_2d1180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D1244u;
}
