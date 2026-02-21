#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: expf
// Address: 0x2e8250 - 0x2e83c4
void expf_0x2e8250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e8250u;

    // 0x2e8250: 0x27bdff90
    ctx->pc = 0x2e8250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8254: 0xe7b40060
    ctx->pc = 0x2e8254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e8258: 0x46006506
    ctx->pc = 0x2e8258u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e825c: 0xffb10040
    ctx->pc = 0x2e825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2e8260: 0xffb00030
    ctx->pc = 0x2e8260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e8264: 0xe7b50068
    ctx->pc = 0x2e8264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e8268: 0xffbf0050
    ctx->pc = 0x2e8268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e826c: 0xc0ba99c
    ctx->pc = 0x2E826Cu;
    SET_GPR_U32(ctx, 31, 0x2E8274u);
    ctx->pc = 0x2E8270u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    ctx->pc = 0x2EA670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_expf_0x2ea670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8274u; }
    }
    if (ctx->pc != 0x2E8274u) { return; }
    ctx->pc = 0x2E8274u;
    // 0x2e8274: 0x8e309c60
    ctx->pc = 0x2e8274u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4294941792)));
    // 0x2e8278: 0x2402ffff
    ctx->pc = 0x2e8278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e827c: 0x1202004a
    ctx->pc = 0x2E827Cu;
    {
        const bool branch_taken_0x2e827c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E8280u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2e827c) {
            ctx->pc = 0x2E83A8u;
            goto label_2e83a8;
        }
    }
    ctx->pc = 0x2E8284u;
    // 0x2e8284: 0xc0bb2e8
    ctx->pc = 0x2E8284u;
    SET_GPR_U32(ctx, 31, 0x2E828Cu);
    ctx->pc = 0x2E8288u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        finitef_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E828Cu; }
    }
    if (ctx->pc != 0x2E828Cu) { return; }
    ctx->pc = 0x2E828Cu;
    // 0x2e828c: 0x10400046
    ctx->pc = 0x2E828Cu;
    {
        const bool branch_taken_0x2e828c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8290u;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2e828c) {
            ctx->pc = 0x2E83A8u;
            goto label_2e83a8;
        }
    }
    ctx->pc = 0x2E8294u;
    // 0x2e8294: 0x3c0142b1
    ctx->pc = 0x2e8294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17073 << 16));
    // 0x2e8298: 0x34217180
    ctx->pc = 0x2e8298u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 29056));
    // 0x2e829c: 0x44810000
    ctx->pc = 0x2e829cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e82a0: 0x46140034
    ctx->pc = 0x2e82a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e82a4: 0x0
    ctx->pc = 0x2e82a4u;
    // NOP
    // 0x2e82a8: 0x45000018
    ctx->pc = 0x2E82A8u;
    {
        const bool branch_taken_0x2e82a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E82ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e82a8) {
            ctx->pc = 0x2E830Cu;
            goto label_2e830c;
        }
    }
    ctx->pc = 0x2E82B0u;
    // 0x2e82b0: 0x24030003
    ctx->pc = 0x2e82b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e82b4: 0x24429370
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939504));
    // 0x2e82b8: 0xafa30000
    ctx->pc = 0x2e82b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e82bc: 0xafa20004
    ctx->pc = 0x2e82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e82c0: 0x4600a306
    ctx->pc = 0x2e82c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e82c4: 0xc0be862
    ctx->pc = 0x2E82C4u;
    SET_GPR_U32(ctx, 31, 0x2E82CCu);
    ctx->pc = 0x2E82C8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E82CCu; }
    }
    if (ctx->pc != 0x2E82CCu) { return; }
    ctx->pc = 0x2E82CCu;
    // 0x2e82cc: 0xffa20008
    ctx->pc = 0x2e82ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2e82d0: 0x16000005
    ctx->pc = 0x2E82D0u;
    {
        const bool branch_taken_0x2e82d0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E82D4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e82d0) {
            ctx->pc = 0x2E82E8u;
            goto label_2e82e8;
        }
    }
    ctx->pc = 0x2E82D8u;
    // 0x2e82d8: 0x3c01003c
    ctx->pc = 0x2e82d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x2e82dc: 0xdc229378
    ctx->pc = 0x2e82dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294939512)));
    // 0x2e82e0: 0x10000004
    ctx->pc = 0x2E82E0u;
    {
        const bool branch_taken_0x2e82e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E82E4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x2e82e0) {
            ctx->pc = 0x2E82F4u;
            goto label_2e82f4;
        }
    }
    ctx->pc = 0x2E82E8u;
label_2e82e8:
    // 0x2e82e8: 0x3c02003c
    ctx->pc = 0x2e82e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e82ec: 0xdc439c58
    ctx->pc = 0x2e82ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294941784)));
    // 0x2e82f0: 0xffa30018
    ctx->pc = 0x2e82f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2e82f4:
    // 0x2e82f4: 0x8e239c60
    ctx->pc = 0x2e82f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294941792)));
    // 0x2e82f8: 0x24020002
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e82fc: 0x1062001a
    ctx->pc = 0x2E82FCu;
    {
        const bool branch_taken_0x2e82fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2e82fc) {
            ctx->pc = 0x2E8368u;
            goto label_2e8368;
        }
    }
    ctx->pc = 0x2E8304u;
    // 0x2e8304: 0x10000014
    ctx->pc = 0x2E8304u;
    {
        const bool branch_taken_0x2e8304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e8304) {
            ctx->pc = 0x2E8358u;
            goto label_2e8358;
        }
    }
    ctx->pc = 0x2E830Cu;
label_2e830c:
    // 0x2e830c: 0x3c01c2cf
    ctx->pc = 0x2e830cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49871 << 16));
    // 0x2e8310: 0x3421f1b5
    ctx->pc = 0x2e8310u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61877));
    // 0x2e8314: 0x44810000
    ctx->pc = 0x2e8314u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e8318: 0x4600a034
    ctx->pc = 0x2e8318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e831c: 0x0
    ctx->pc = 0x2e831cu;
    // NOP
    // 0x2e8320: 0x45000020
    ctx->pc = 0x2E8320u;
    {
        const bool branch_taken_0x2e8320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8324u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2e8320) {
            ctx->pc = 0x2E83A4u;
            goto label_2e83a4;
        }
    }
    ctx->pc = 0x2E8328u;
    // 0x2e8328: 0x24429370
    ctx->pc = 0x2e8328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939504));
    // 0x2e832c: 0xafa30000
    ctx->pc = 0x2e832cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e8330: 0xafa20004
    ctx->pc = 0x2e8330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8334: 0x4600a306
    ctx->pc = 0x2e8334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e8338: 0xc0be862
    ctx->pc = 0x2E8338u;
    SET_GPR_U32(ctx, 31, 0x2E8340u);
    ctx->pc = 0x2E833Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8340u; }
    }
    if (ctx->pc != 0x2E8340u) { return; }
    ctx->pc = 0x2E8340u;
    // 0x2e8340: 0x182d
    ctx->pc = 0x2e8340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8344: 0xffa20008
    ctx->pc = 0x2e8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2e8348: 0xffa30018
    ctx->pc = 0x2e8348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2e834c: 0x24030002
    ctx->pc = 0x2e834cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8350: 0x12030005
    ctx->pc = 0x2E8350u;
    {
        const bool branch_taken_0x2e8350 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x2E8354u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8350) {
            ctx->pc = 0x2E8368u;
            goto label_2e8368;
        }
    }
    ctx->pc = 0x2E8358u;
label_2e8358:
    // 0x2e8358: 0xc0bb1f0
    ctx->pc = 0x2E8358u;
    SET_GPR_U32(ctx, 31, 0x2E8360u);
    ctx->pc = 0x2E835Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8360u; }
    }
    if (ctx->pc != 0x2E8360u) { return; }
    ctx->pc = 0x2E8360u;
    // 0x2e8360: 0x14400006
    ctx->pc = 0x2E8360u;
    {
        const bool branch_taken_0x2e8360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8364u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e8360) {
            ctx->pc = 0x2E837Cu;
            goto label_2e837c;
        }
    }
    ctx->pc = 0x2E8368u;
label_2e8368:
    // 0x2e8368: 0xc0be8b2
    ctx->pc = 0x2E8368u;
    SET_GPR_U32(ctx, 31, 0x2E8370u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8370u; }
    }
    if (ctx->pc != 0x2E8370u) { return; }
    ctx->pc = 0x2E8370u;
    // 0x2e8370: 0x24030022
    ctx->pc = 0x2e8370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
    // 0x2e8374: 0xac430000
    ctx->pc = 0x2e8374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e8378: 0x8fa20020
    ctx->pc = 0x2e8378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e837c:
    // 0x2e837c: 0x10400005
    ctx->pc = 0x2E837Cu;
    {
        const bool branch_taken_0x2e837c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e837c) {
            ctx->pc = 0x2E8394u;
            goto label_2e8394;
        }
    }
    ctx->pc = 0x2E8384u;
    // 0x2e8384: 0xc0be8b2
    ctx->pc = 0x2E8384u;
    SET_GPR_U32(ctx, 31, 0x2E838Cu);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E838Cu; }
    }
    if (ctx->pc != 0x2E838Cu) { return; }
    ctx->pc = 0x2E838Cu;
    // 0x2e838c: 0x8fa30020
    ctx->pc = 0x2e838cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8390: 0xac430000
    ctx->pc = 0x2e8390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e8394:
    // 0x2e8394: 0xc0be564
    ctx->pc = 0x2E8394u;
    SET_GPR_U32(ctx, 31, 0x2E839Cu);
    ctx->pc = 0x2E8398u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E839Cu; }
    }
    if (ctx->pc != 0x2E839Cu) { return; }
    ctx->pc = 0x2E839Cu;
    // 0x2e839c: 0x10000003
    ctx->pc = 0x2E839Cu;
    {
        const bool branch_taken_0x2e839c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E83A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2e839c) {
            ctx->pc = 0x2E83ACu;
            goto label_2e83ac;
        }
    }
    ctx->pc = 0x2E83A4u;
label_2e83a4:
    // 0x2e83a4: 0x4600a806
    ctx->pc = 0x2e83a4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2e83a8:
    // 0x2e83a8: 0xdfbf0050
    ctx->pc = 0x2e83a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e83ac:
    // 0x2e83ac: 0xdfb10040
    ctx->pc = 0x2e83acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e83b0: 0xdfb00030
    ctx->pc = 0x2e83b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e83b4: 0xc7b50068
    ctx->pc = 0x2e83b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e83b8: 0xc7b40060
    ctx->pc = 0x2e83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e83bc: 0x3e00008
    ctx->pc = 0x2E83BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E83C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E82E8u: goto label_2e82e8;
            case 0x2E82F4u: goto label_2e82f4;
            case 0x2E830Cu: goto label_2e830c;
            case 0x2E8358u: goto label_2e8358;
            case 0x2E8368u: goto label_2e8368;
            case 0x2E837Cu: goto label_2e837c;
            case 0x2E8394u: goto label_2e8394;
            case 0x2E83A4u: goto label_2e83a4;
            case 0x2E83A8u: goto label_2e83a8;
            case 0x2E83ACu: goto label_2e83ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E83C4u;
}
