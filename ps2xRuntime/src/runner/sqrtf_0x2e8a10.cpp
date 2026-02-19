#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sqrtf
// Address: 0x2e8a10 - 0x2e8b24
void sqrtf_0x2e8a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e8a10u;

    // 0x2e8a10: 0x27bdff90
    ctx->pc = 0x2e8a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8a14: 0xe7b40060
    ctx->pc = 0x2e8a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e8a18: 0x46006506
    ctx->pc = 0x2e8a18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8a1c: 0xffb10040
    ctx->pc = 0x2e8a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2e8a20: 0xffb00030
    ctx->pc = 0x2e8a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e8a24: 0xe7b50068
    ctx->pc = 0x2e8a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e8a28: 0xffbf0050
    ctx->pc = 0x2e8a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e8a2c: 0xc0badfa
    ctx->pc = 0x2E8A2Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A34u);
    ctx->pc = 0x2E8A30u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    ctx->pc = 0x2EB7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_sqrtf_0x2eb7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A34u; }
    }
    if (ctx->pc != 0x2E8A34u) { return; }
    ctx->pc = 0x2E8A34u;
    // 0x2e8a34: 0x8e309c60
    ctx->pc = 0x2e8a34u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4294941792)));
    // 0x2e8a38: 0x2402ffff
    ctx->pc = 0x2e8a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8a3c: 0x12020031
    ctx->pc = 0x2E8A3Cu;
    {
        const bool branch_taken_0x2e8a3c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E8A40u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2e8a3c) {
            ctx->pc = 0x2E8B04u;
            goto label_2e8b04;
        }
    }
    ctx->pc = 0x2E8A44u;
    // 0x2e8a44: 0xc0bb2f2
    ctx->pc = 0x2E8A44u;
    SET_GPR_U32(ctx, 31, 0x2E8A4Cu);
    ctx->pc = 0x2E8A48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A4Cu; }
    }
    if (ctx->pc != 0x2E8A4Cu) { return; }
    ctx->pc = 0x2E8A4Cu;
    // 0x2e8a4c: 0x1440002e
    ctx->pc = 0x2E8A4Cu;
    {
        const bool branch_taken_0x2e8a4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8A50u;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2e8a4c) {
            ctx->pc = 0x2E8B08u;
            goto label_2e8b08;
        }
    }
    ctx->pc = 0x2E8A54u;
    // 0x2e8a54: 0x44800000
    ctx->pc = 0x2e8a54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2e8a58: 0x4600a034
    ctx->pc = 0x2e8a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8a5c: 0x0
    ctx->pc = 0x2e8a5cu;
    // NOP
    // 0x2e8a60: 0x45000028
    ctx->pc = 0x2E8A60u;
    {
        const bool branch_taken_0x2e8a60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8A64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e8a60) {
            ctx->pc = 0x2E8B04u;
            goto label_2e8b04;
        }
    }
    ctx->pc = 0x2E8A68u;
    // 0x2e8a68: 0x24030001
    ctx->pc = 0x2e8a68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8a6c: 0x244293b0
    ctx->pc = 0x2e8a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939568));
    // 0x2e8a70: 0xafa30000
    ctx->pc = 0x2e8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e8a74: 0xafa20004
    ctx->pc = 0x2e8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8a78: 0x4600a306
    ctx->pc = 0x2e8a78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e8a7c: 0xc0be862
    ctx->pc = 0x2E8A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A84u);
    ctx->pc = 0x2E8A80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A84u; }
    }
    if (ctx->pc != 0x2E8A84u) { return; }
    ctx->pc = 0x2E8A84u;
    // 0x2e8a84: 0xffa20008
    ctx->pc = 0x2e8a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2e8a88: 0x16000004
    ctx->pc = 0x2E8A88u;
    {
        const bool branch_taken_0x2e8a88 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8A8Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8a88) {
            ctx->pc = 0x2E8A9Cu;
            goto label_2e8a9c;
        }
    }
    ctx->pc = 0x2E8A90u;
    // 0x2e8a90: 0x102d
    ctx->pc = 0x2e8a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a94: 0x10000004
    ctx->pc = 0x2E8A94u;
    {
        const bool branch_taken_0x2e8a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8A98u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8a94) {
            ctx->pc = 0x2E8AA8u;
            goto label_2e8aa8;
        }
    }
    ctx->pc = 0x2E8A9Cu;
label_2e8a9c:
    // 0x2e8a9c: 0x3c02003c
    ctx->pc = 0x2e8a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e8aa0: 0xdc4393b8
    ctx->pc = 0x2e8aa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294939576)));
    // 0x2e8aa4: 0xffa30018
    ctx->pc = 0x2e8aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2e8aa8:
    // 0x2e8aa8: 0x8e239c60
    ctx->pc = 0x2e8aa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294941792)));
    // 0x2e8aac: 0x24020002
    ctx->pc = 0x2e8aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8ab0: 0x10620005
    ctx->pc = 0x2E8AB0u;
    {
        const bool branch_taken_0x2e8ab0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2e8ab0) {
            ctx->pc = 0x2E8AC8u;
            goto label_2e8ac8;
        }
    }
    ctx->pc = 0x2E8AB8u;
    // 0x2e8ab8: 0xc0bb1f0
    ctx->pc = 0x2E8AB8u;
    SET_GPR_U32(ctx, 31, 0x2E8AC0u);
    ctx->pc = 0x2E8ABCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AC0u; }
    }
    if (ctx->pc != 0x2E8AC0u) { return; }
    ctx->pc = 0x2E8AC0u;
    // 0x2e8ac0: 0x14400006
    ctx->pc = 0x2E8AC0u;
    {
        const bool branch_taken_0x2e8ac0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8AC4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e8ac0) {
            ctx->pc = 0x2E8ADCu;
            goto label_2e8adc;
        }
    }
    ctx->pc = 0x2E8AC8u;
label_2e8ac8:
    // 0x2e8ac8: 0xc0be8b2
    ctx->pc = 0x2E8AC8u;
    SET_GPR_U32(ctx, 31, 0x2E8AD0u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AD0u; }
    }
    if (ctx->pc != 0x2E8AD0u) { return; }
    ctx->pc = 0x2E8AD0u;
    // 0x2e8ad0: 0x24030021
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e8ad4: 0xac430000
    ctx->pc = 0x2e8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e8ad8: 0x8fa20020
    ctx->pc = 0x2e8ad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8adc:
    // 0x2e8adc: 0x10400005
    ctx->pc = 0x2E8ADCu;
    {
        const bool branch_taken_0x2e8adc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e8adc) {
            ctx->pc = 0x2E8AF4u;
            goto label_2e8af4;
        }
    }
    ctx->pc = 0x2E8AE4u;
    // 0x2e8ae4: 0xc0be8b2
    ctx->pc = 0x2E8AE4u;
    SET_GPR_U32(ctx, 31, 0x2E8AECu);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AECu; }
    }
    if (ctx->pc != 0x2E8AECu) { return; }
    ctx->pc = 0x2E8AECu;
    // 0x2e8aec: 0x8fa30020
    ctx->pc = 0x2e8aecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8af0: 0xac430000
    ctx->pc = 0x2e8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e8af4:
    // 0x2e8af4: 0xc0be564
    ctx->pc = 0x2E8AF4u;
    SET_GPR_U32(ctx, 31, 0x2E8AFCu);
    ctx->pc = 0x2E8AF8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8AFCu; }
    }
    if (ctx->pc != 0x2E8AFCu) { return; }
    ctx->pc = 0x2E8AFCu;
    // 0x2e8afc: 0x10000003
    ctx->pc = 0x2E8AFCu;
    {
        const bool branch_taken_0x2e8afc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8B00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2e8afc) {
            ctx->pc = 0x2E8B0Cu;
            goto label_2e8b0c;
        }
    }
    ctx->pc = 0x2E8B04u;
label_2e8b04:
    // 0x2e8b04: 0x4600a806
    ctx->pc = 0x2e8b04u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2e8b08:
    // 0x2e8b08: 0xdfbf0050
    ctx->pc = 0x2e8b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e8b0c:
    // 0x2e8b0c: 0xdfb10040
    ctx->pc = 0x2e8b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8b10: 0xdfb00030
    ctx->pc = 0x2e8b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8b14: 0xc7b50068
    ctx->pc = 0x2e8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e8b18: 0xc7b40060
    ctx->pc = 0x2e8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e8b1c: 0x3e00008
    ctx->pc = 0x2E8B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8A9Cu: goto label_2e8a9c;
            case 0x2E8AA8u: goto label_2e8aa8;
            case 0x2E8AC8u: goto label_2e8ac8;
            case 0x2E8ADCu: goto label_2e8adc;
            case 0x2E8AF4u: goto label_2e8af4;
            case 0x2E8B04u: goto label_2e8b04;
            case 0x2E8B08u: goto label_2e8b08;
            case 0x2E8B0Cu: goto label_2e8b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E8B24u;
}
