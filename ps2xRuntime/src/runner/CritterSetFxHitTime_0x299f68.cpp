#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterSetFxHitTime
// Address: 0x299f68 - 0x29a048
void CritterSetFxHitTime_0x299f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x299f68u;

    // 0x299f68: 0x3c01bf80
    ctx->pc = 0x299f68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x299f6c: 0x44811000
    ctx->pc = 0x299f6cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x299f70: 0x44800000
    ctx->pc = 0x299f70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x299f74: 0x46006036
    ctx->pc = 0x299f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299f78: 0x0
    ctx->pc = 0x299f78u;
    // NOP
    // 0x299f7c: 0x45010030
    ctx->pc = 0x299F7Cu;
    {
        const bool branch_taken_0x299f7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299F80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x299f7c) {
            ctx->pc = 0x29A040u;
            goto label_29a040;
        }
    }
    ctx->pc = 0x299F84u;
    // 0x299f84: 0x302d
    ctx->pc = 0x299f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f88: 0x3c090031
    ctx->pc = 0x299f88u;
    SET_GPR_U32(ctx, 9, ((uint32_t)49 << 16));
    // 0x299f8c: 0x2488052c
    ctx->pc = 0x299f8cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 1324));
    // 0x299f90: 0x248a0524
    ctx->pc = 0x299f90u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 4), 1316));
    // 0x299f94: 0x460000c6
    ctx->pc = 0x299f94u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x299f98: 0x61080
    ctx->pc = 0x299f98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x299f9c: 0x0
    ctx->pc = 0x299f9cu;
    // NOP
label_299fa0:
    // 0x299fa0: 0x1023821
    ctx->pc = 0x299fa0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x299fa4: 0xc521ffa4
    ctx->pc = 0x299fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299fa8: 0xc4e00000
    ctx->pc = 0x299fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299fac: 0x46010034
    ctx->pc = 0x299facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299fb0: 0x0
    ctx->pc = 0x299fb0u;
    // NOP
    // 0x299fb4: 0x45000007
    ctx->pc = 0x299FB4u;
    {
        const bool branch_taken_0x299fb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299FB8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x299fb4) {
            ctx->pc = 0x299FD4u;
            goto label_299fd4;
        }
    }
    ctx->pc = 0x299FBCu;
    // 0x299fbc: 0x1421021
    ctx->pc = 0x299fbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x299fc0: 0xa4450000
    ctx->pc = 0x299fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x299fc4: 0xc520ffa4
    ctx->pc = 0x299fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299fc8: 0x46006000
    ctx->pc = 0x299fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x299fcc: 0x3e00008
    ctx->pc = 0x299FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299FD0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299FA0u: goto label_299fa0;
            case 0x299FD4u: goto label_299fd4;
            case 0x299FFCu: goto label_299ffc;
            case 0x29A008u: goto label_29a008;
            case 0x29A040u: goto label_29a040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299FD4u;
label_299fd4:
    // 0x299fd4: 0x46031034
    ctx->pc = 0x299fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299fd8: 0x0
    ctx->pc = 0x299fd8u;
    // NOP
    // 0x299fdc: 0x45010007
    ctx->pc = 0x299FDCu;
    {
        const bool branch_taken_0x299fdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299FE0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x299fdc) {
            ctx->pc = 0x299FFCu;
            goto label_299ffc;
        }
    }
    ctx->pc = 0x299FE4u;
    // 0x299fe4: 0x1021021
    ctx->pc = 0x299fe4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x299fe8: 0xc4400000
    ctx->pc = 0x299fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299fec: 0x46020034
    ctx->pc = 0x299fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299ff0: 0x0
    ctx->pc = 0x299ff0u;
    // NOP
    // 0x299ff4: 0x45000004
    ctx->pc = 0x299FF4u;
    {
        const bool branch_taken_0x299ff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299FF8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x299ff4) {
            ctx->pc = 0x29A008u;
            goto label_29a008;
        }
    }
    ctx->pc = 0x299FFCu;
label_299ffc:
    // 0x299ffc: 0x1021021
    ctx->pc = 0x299ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x29a000: 0xc4420000
    ctx->pc = 0x29a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a004: 0xc0182d
    ctx->pc = 0x29a004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29a008:
    // 0x29a008: 0x24c60001
    ctx->pc = 0x29a008u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x29a00c: 0x28c20004
    ctx->pc = 0x29a00cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x29a010: 0x1440ffe3
    ctx->pc = 0x29A010u;
    {
        const bool branch_taken_0x29a010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A014u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x29a010) {
            ctx->pc = 0x299FA0u;
            goto label_299fa0;
        }
    }
    ctx->pc = 0x29A018u;
    // 0x29a018: 0x4600009
    ctx->pc = 0x29A018u;
    {
        const bool branch_taken_0x29a018 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x29A01Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x29a018) {
            ctx->pc = 0x29A040u;
            goto label_29a040;
        }
    }
    ctx->pc = 0x29A020u;
    // 0x29a020: 0x821021
    ctx->pc = 0x29a020u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29a024: 0xa4450524
    ctx->pc = 0x29a024u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1316), (uint16_t)GPR_U32(ctx, 5));
    // 0x29a028: 0x31880
    ctx->pc = 0x29a028u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a02c: 0x831821
    ctx->pc = 0x29a02cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29a030: 0x3c020031
    ctx->pc = 0x29a030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29a034: 0xc440ffa4
    ctx->pc = 0x29a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a038: 0x46006000
    ctx->pc = 0x29a038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x29a03c: 0xe460052c
    ctx->pc = 0x29a03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1324), bits); }
label_29a040:
    // 0x29a040: 0x3e00008
    ctx->pc = 0x29A040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299FA0u: goto label_299fa0;
            case 0x299FD4u: goto label_299fd4;
            case 0x299FFCu: goto label_299ffc;
            case 0x29A008u: goto label_29a008;
            case 0x29A040u: goto label_29a040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A048u;
}
