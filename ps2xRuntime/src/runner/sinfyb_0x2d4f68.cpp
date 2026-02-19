#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sinfyb
// Address: 0x2d4f68 - 0x2d50b8
void sinfyb_0x2d4f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4f68u;

    // 0x2d4f68: 0x3c02003a
    ctx->pc = 0x2d4f68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4f6c: 0xe44c2640
    ctx->pc = 0x2d4f6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d4f70: 0x3c014049
    ctx->pc = 0x2d4f70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2d4f74: 0x34210fdb
    ctx->pc = 0x2d4f74u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d4f78: 0x44810000
    ctx->pc = 0x2d4f78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d4f7c: 0x460c0034
    ctx->pc = 0x2d4f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4f80: 0x0
    ctx->pc = 0x2d4f80u;
    // NOP
    // 0x2d4f84: 0x4500000f
    ctx->pc = 0x2D4F84u;
    {
        const bool branch_taken_0x2d4f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4F88u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2d4f84) {
            ctx->pc = 0x2D4FC4u;
            goto label_2d4fc4;
        }
    }
    ctx->pc = 0x2D4F8Cu;
    // 0x2d4f8c: 0x3c0140c9
    ctx->pc = 0x2d4f8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d4f90: 0x34210fdb
    ctx->pc = 0x2d4f90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d4f94: 0x44811800
    ctx->pc = 0x2d4f94u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2d4f98: 0x46006046
    ctx->pc = 0x2d4f98u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x2d4f9c: 0x0
    ctx->pc = 0x2d4f9cu;
    // NOP
label_2d4fa0:
    // 0x2d4fa0: 0x46030801
    ctx->pc = 0x2d4fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2d4fa4: 0x46000046
    ctx->pc = 0x2d4fa4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d4fa8: 0x46001034
    ctx->pc = 0x2d4fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4fac: 0x0
    ctx->pc = 0x2d4facu;
    // NOP
    // 0x2d4fb0: 0x0
    ctx->pc = 0x2d4fb0u;
    // NOP
    // 0x2d4fb4: 0x4501fffa
    ctx->pc = 0x2D4FB4u;
    {
        const bool branch_taken_0x2d4fb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4fb4) {
            ctx->pc = 0x2D4FA0u;
            goto label_2d4fa0;
        }
    }
    ctx->pc = 0x2D4FBCu;
    // 0x2d4fbc: 0xe4412640
    ctx->pc = 0x2d4fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d4fc0: 0x3c02003a
    ctx->pc = 0x2d4fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2d4fc4:
    // 0x2d4fc4: 0x3c01c049
    ctx->pc = 0x2d4fc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2d4fc8: 0x34210fdb
    ctx->pc = 0x2d4fc8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d4fcc: 0x44810800
    ctx->pc = 0x2d4fccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d4fd0: 0xc4402640
    ctx->pc = 0x2d4fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4fd4: 0x46010036
    ctx->pc = 0x2d4fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4fd8: 0x0
    ctx->pc = 0x2d4fd8u;
    // NOP
    // 0x2d4fdc: 0x45020010
    ctx->pc = 0x2D4FDCu;
    {
        const bool branch_taken_0x2d4fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4fdc) {
            ctx->pc = 0x2D4FE0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2D5020u;
            goto label_2d5020;
        }
    }
    ctx->pc = 0x2D4FE4u;
    // 0x2d4fe4: 0x3c0140c9
    ctx->pc = 0x2d4fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d4fe8: 0x34210fdb
    ctx->pc = 0x2d4fe8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d4fec: 0x44811800
    ctx->pc = 0x2d4fecu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2d4ff0: 0x46000886
    ctx->pc = 0x2d4ff0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2d4ff4: 0x46000046
    ctx->pc = 0x2d4ff4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2d4ff8:
    // 0x2d4ff8: 0x46030800
    ctx->pc = 0x2d4ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d4ffc: 0x46000046
    ctx->pc = 0x2d4ffcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5000: 0x46020036
    ctx->pc = 0x2d5000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5004: 0x0
    ctx->pc = 0x2d5004u;
    // NOP
    // 0x2d5008: 0x0
    ctx->pc = 0x2d5008u;
    // NOP
    // 0x2d500c: 0x4501fffa
    ctx->pc = 0x2D500Cu;
    {
        const bool branch_taken_0x2d500c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d500c) {
            ctx->pc = 0x2D4FF8u;
            goto label_2d4ff8;
        }
    }
    ctx->pc = 0x2D5014u;
    // 0x2d5014: 0xe4412640
    ctx->pc = 0x2d5014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d5018: 0x3c02003a
    ctx->pc = 0x2d5018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d501c: 0xc4412640
    ctx->pc = 0x2d501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5020:
    // 0x2d5020: 0x3c013fc9
    ctx->pc = 0x2d5020u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2d5024: 0x34210fdb
    ctx->pc = 0x2d5024u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d5028: 0x44810000
    ctx->pc = 0x2d5028u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d502c: 0x46010034
    ctx->pc = 0x2d502cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5030: 0x0
    ctx->pc = 0x2d5030u;
    // NOP
    // 0x2d5034: 0x45020006
    ctx->pc = 0x2D5034u;
    {
        const bool branch_taken_0x2d5034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5034) {
            ctx->pc = 0x2D5038u;
            SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
            ctx->pc = 0x2D5050u;
            goto label_2d5050;
        }
    }
    ctx->pc = 0x2D503Cu;
    // 0x2d503c: 0x3c014049
    ctx->pc = 0x2d503cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2d5040: 0x34210fdb
    ctx->pc = 0x2d5040u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d5044: 0x44810000
    ctx->pc = 0x2d5044u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d5048: 0x1000000d
    ctx->pc = 0x2D5048u;
    {
        const bool branch_taken_0x2d5048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D504Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2d5048) {
            ctx->pc = 0x2D5080u;
            goto label_2d5080;
        }
    }
    ctx->pc = 0x2D5050u;
label_2d5050:
    // 0x2d5050: 0xc4412640
    ctx->pc = 0x2d5050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5054: 0x3c01bfc9
    ctx->pc = 0x2d5054u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x2d5058: 0x34210fdb
    ctx->pc = 0x2d5058u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d505c: 0x44810000
    ctx->pc = 0x2d505cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d5060: 0x46000834
    ctx->pc = 0x2d5060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5064: 0x0
    ctx->pc = 0x2d5064u;
    // NOP
    // 0x2d5068: 0x45020007
    ctx->pc = 0x2D5068u;
    {
        const bool branch_taken_0x2d5068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5068) {
            ctx->pc = 0x2D506Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
            ctx->pc = 0x2D5088u;
            goto label_2d5088;
        }
    }
    ctx->pc = 0x2D5070u;
    // 0x2d5070: 0x3c01c049
    ctx->pc = 0x2d5070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2d5074: 0x34210fdb
    ctx->pc = 0x2d5074u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d5078: 0x44810000
    ctx->pc = 0x2d5078u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d507c: 0x46010001
    ctx->pc = 0x2d507cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d5080:
    // 0x2d5080: 0xe4402640
    ctx->pc = 0x2d5080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d5084: 0x3c02003a
    ctx->pc = 0x2d5084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2d5088:
    // 0x2d5088: 0x24422640
    ctx->pc = 0x2d5088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9792));
    // 0x2d508c: 0x3c04003a
    ctx->pc = 0x2d508cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d5090: 0x24832620
    ctx->pc = 0x2d5090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 9760));
    // 0x2d5094: 0xd8500000
    ctx->pc = 0x2d5094u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5098: 0xf
    ctx->pc = 0x2d5098u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d509c: 0x40f
    ctx->pc = 0x2d509cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d50a0: 0x4a0002ff
    ctx->pc = 0x2d50a0u;
    // NOP operation, no action needed for VU0
    // 0x2d50a4: 0x4a000038
    ctx->pc = 0x2d50a4u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
    // 0x2d50a8: 0x4a0002ff
    ctx->pc = 0x2d50a8u;
    // NOP operation, no action needed for VU0
    // 0x2d50ac: 0xf8700000
    ctx->pc = 0x2d50acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2d50b0: 0x3e00008
    ctx->pc = 0x2D50B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D50B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 9760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D4FA0u: goto label_2d4fa0;
            case 0x2D4FC4u: goto label_2d4fc4;
            case 0x2D4FF8u: goto label_2d4ff8;
            case 0x2D5020u: goto label_2d5020;
            case 0x2D5050u: goto label_2d5050;
            case 0x2D5080u: goto label_2d5080;
            case 0x2D5088u: goto label_2d5088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D50B8u;
}
