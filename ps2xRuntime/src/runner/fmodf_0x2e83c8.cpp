#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fmodf
// Address: 0x2e83c8 - 0x2e8504
void fmodf_0x2e83c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e83c8u;

    // 0x2e83c8: 0x27bdff80
    ctx->pc = 0x2e83c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e83cc: 0xe7b50068
    ctx->pc = 0x2e83ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e83d0: 0xe7b40060
    ctx->pc = 0x2e83d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e83d4: 0x46006546
    ctx->pc = 0x2e83d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2e83d8: 0x46006d06
    ctx->pc = 0x2e83d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2e83dc: 0xffb10040
    ctx->pc = 0x2e83dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2e83e0: 0xffb00030
    ctx->pc = 0x2e83e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e83e4: 0xe7b60070
    ctx->pc = 0x2e83e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e83e8: 0xffbf0050
    ctx->pc = 0x2e83e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e83ec: 0xc0baa4a
    ctx->pc = 0x2E83ECu;
    SET_GPR_U32(ctx, 31, 0x2E83F4u);
    ctx->pc = 0x2E83F0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    ctx->pc = 0x2EA928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_fmodf_0x2ea928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E83F4u; }
    }
    if (ctx->pc != 0x2E83F4u) { return; }
    ctx->pc = 0x2E83F4u;
    // 0x2e83f4: 0x8e309c60
    ctx->pc = 0x2e83f4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4294941792)));
    // 0x2e83f8: 0x2402ffff
    ctx->pc = 0x2e83f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e83fc: 0x12020038
    ctx->pc = 0x2E83FCu;
    {
        const bool branch_taken_0x2e83fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2E8400u;
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2e83fc) {
            ctx->pc = 0x2E84E0u;
            goto label_2e84e0;
        }
    }
    ctx->pc = 0x2E8404u;
    // 0x2e8404: 0xc0bb2f2
    ctx->pc = 0x2E8404u;
    SET_GPR_U32(ctx, 31, 0x2E840Cu);
    ctx->pc = 0x2E8408u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E840Cu; }
    }
    if (ctx->pc != 0x2E840Cu) { return; }
    ctx->pc = 0x2E840Cu;
    // 0x2e840c: 0x14400035
    ctx->pc = 0x2E840Cu;
    {
        const bool branch_taken_0x2e840c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8410u;
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x2e840c) {
            ctx->pc = 0x2E84E4u;
            goto label_2e84e4;
        }
    }
    ctx->pc = 0x2E8414u;
    // 0x2e8414: 0xc0bb2f2
    ctx->pc = 0x2E8414u;
    SET_GPR_U32(ctx, 31, 0x2E841Cu);
    ctx->pc = 0x2E8418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E841Cu; }
    }
    if (ctx->pc != 0x2E841Cu) { return; }
    ctx->pc = 0x2E841Cu;
    // 0x2e841c: 0x14400031
    ctx->pc = 0x2E841Cu;
    {
        const bool branch_taken_0x2e841c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8420u;
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x2e841c) {
            ctx->pc = 0x2E84E4u;
            goto label_2e84e4;
        }
    }
    ctx->pc = 0x2E8424u;
    // 0x2e8424: 0x44800000
    ctx->pc = 0x2e8424u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2e8428: 0x4600a032
    ctx->pc = 0x2e8428u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e842c: 0x0
    ctx->pc = 0x2e842cu;
    // NOP
    // 0x2e8430: 0x4500002b
    ctx->pc = 0x2E8430u;
    {
        const bool branch_taken_0x2e8430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8434u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e8430) {
            ctx->pc = 0x2E84E0u;
            goto label_2e84e0;
        }
    }
    ctx->pc = 0x2E8438u;
    // 0x2e8438: 0x24030001
    ctx->pc = 0x2e8438u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e843c: 0x24429380
    ctx->pc = 0x2e843cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939520));
    // 0x2e8440: 0xafa30000
    ctx->pc = 0x2e8440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e8444: 0xafa20004
    ctx->pc = 0x2e8444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8448: 0x4600ab06
    ctx->pc = 0x2e8448u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e844c: 0xc0be862
    ctx->pc = 0x2E844Cu;
    SET_GPR_U32(ctx, 31, 0x2E8454u);
    ctx->pc = 0x2E8450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8454u; }
    }
    if (ctx->pc != 0x2E8454u) { return; }
    ctx->pc = 0x2E8454u;
    // 0x2e8454: 0x4600a306
    ctx->pc = 0x2e8454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e8458: 0xc0be862
    ctx->pc = 0x2E8458u;
    SET_GPR_U32(ctx, 31, 0x2E8460u);
    ctx->pc = 0x2E845Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8460u; }
    }
    if (ctx->pc != 0x2E8460u) { return; }
    ctx->pc = 0x2E8460u;
    // 0x2e8460: 0x16000005
    ctx->pc = 0x2E8460u;
    {
        const bool branch_taken_0x2e8460 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8464u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8460) {
            ctx->pc = 0x2E8478u;
            goto label_2e8478;
        }
    }
    ctx->pc = 0x2E8468u;
    // 0x2e8468: 0xc0be862
    ctx->pc = 0x2E8468u;
    SET_GPR_U32(ctx, 31, 0x2E8470u);
    ctx->pc = 0x2E846Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8470u; }
    }
    if (ctx->pc != 0x2E8470u) { return; }
    ctx->pc = 0x2E8470u;
    // 0x2e8470: 0x10000004
    ctx->pc = 0x2E8470u;
    {
        const bool branch_taken_0x2e8470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8474u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x2e8470) {
            ctx->pc = 0x2E8484u;
            goto label_2e8484;
        }
    }
    ctx->pc = 0x2E8478u;
label_2e8478:
    // 0x2e8478: 0x3c02003c
    ctx->pc = 0x2e8478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e847c: 0xdc439388
    ctx->pc = 0x2e847cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294939528)));
    // 0x2e8480: 0xffa30018
    ctx->pc = 0x2e8480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2e8484:
    // 0x2e8484: 0x8e239c60
    ctx->pc = 0x2e8484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294941792)));
    // 0x2e8488: 0x24020002
    ctx->pc = 0x2e8488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e848c: 0x10620005
    ctx->pc = 0x2E848Cu;
    {
        const bool branch_taken_0x2e848c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2e848c) {
            ctx->pc = 0x2E84A4u;
            goto label_2e84a4;
        }
    }
    ctx->pc = 0x2E8494u;
    // 0x2e8494: 0xc0bb1f0
    ctx->pc = 0x2E8494u;
    SET_GPR_U32(ctx, 31, 0x2E849Cu);
    ctx->pc = 0x2E8498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E849Cu; }
    }
    if (ctx->pc != 0x2E849Cu) { return; }
    ctx->pc = 0x2E849Cu;
    // 0x2e849c: 0x14400006
    ctx->pc = 0x2E849Cu;
    {
        const bool branch_taken_0x2e849c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E84A0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e849c) {
            ctx->pc = 0x2E84B8u;
            goto label_2e84b8;
        }
    }
    ctx->pc = 0x2E84A4u;
label_2e84a4:
    // 0x2e84a4: 0xc0be8b2
    ctx->pc = 0x2E84A4u;
    SET_GPR_U32(ctx, 31, 0x2E84ACu);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E84ACu; }
    }
    if (ctx->pc != 0x2E84ACu) { return; }
    ctx->pc = 0x2E84ACu;
    // 0x2e84ac: 0x24030021
    ctx->pc = 0x2e84acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e84b0: 0xac430000
    ctx->pc = 0x2e84b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e84b4: 0x8fa20020
    ctx->pc = 0x2e84b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e84b8:
    // 0x2e84b8: 0x10400005
    ctx->pc = 0x2E84B8u;
    {
        const bool branch_taken_0x2e84b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e84b8) {
            ctx->pc = 0x2E84D0u;
            goto label_2e84d0;
        }
    }
    ctx->pc = 0x2E84C0u;
    // 0x2e84c0: 0xc0be8b2
    ctx->pc = 0x2E84C0u;
    SET_GPR_U32(ctx, 31, 0x2E84C8u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E84C8u; }
    }
    if (ctx->pc != 0x2E84C8u) { return; }
    ctx->pc = 0x2E84C8u;
    // 0x2e84c8: 0x8fa30020
    ctx->pc = 0x2e84c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e84cc: 0xac430000
    ctx->pc = 0x2e84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e84d0:
    // 0x2e84d0: 0xc0be564
    ctx->pc = 0x2E84D0u;
    SET_GPR_U32(ctx, 31, 0x2E84D8u);
    ctx->pc = 0x2E84D4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E84D8u; }
    }
    if (ctx->pc != 0x2E84D8u) { return; }
    ctx->pc = 0x2E84D8u;
    // 0x2e84d8: 0x10000003
    ctx->pc = 0x2E84D8u;
    {
        const bool branch_taken_0x2e84d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E84DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2e84d8) {
            ctx->pc = 0x2E84E8u;
            goto label_2e84e8;
        }
    }
    ctx->pc = 0x2E84E0u;
label_2e84e0:
    // 0x2e84e0: 0x4600b006
    ctx->pc = 0x2e84e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_2e84e4:
    // 0x2e84e4: 0xdfbf0050
    ctx->pc = 0x2e84e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e84e8:
    // 0x2e84e8: 0xdfb10040
    ctx->pc = 0x2e84e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e84ec: 0xdfb00030
    ctx->pc = 0x2e84ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e84f0: 0xc7b60070
    ctx->pc = 0x2e84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e84f4: 0xc7b50068
    ctx->pc = 0x2e84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e84f8: 0xc7b40060
    ctx->pc = 0x2e84f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e84fc: 0x3e00008
    ctx->pc = 0x2E84FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8500u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8478u: goto label_2e8478;
            case 0x2E8484u: goto label_2e8484;
            case 0x2E84A4u: goto label_2e84a4;
            case 0x2E84B8u: goto label_2e84b8;
            case 0x2E84D0u: goto label_2e84d0;
            case 0x2E84E0u: goto label_2e84e0;
            case 0x2E84E4u: goto label_2e84e4;
            case 0x2E84E8u: goto label_2e84e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E8504u;
}
