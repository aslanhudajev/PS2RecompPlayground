#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: acosf
// Address: 0x2e8028 - 0x2e8124
void acosf_0x2e8028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e8028u;

    // 0x2e8028: 0x27bdffa0
    ctx->pc = 0x2e8028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e802c: 0xe7b40050
    ctx->pc = 0x2e802cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e8030: 0xffb00030
    ctx->pc = 0x2e8030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e8034: 0xe7b50058
    ctx->pc = 0x2e8034u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e8038: 0xffbf0040
    ctx->pc = 0x2e8038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e803c: 0xc0ba7d6
    ctx->pc = 0x2E803Cu;
    SET_GPR_U32(ctx, 31, 0x2E8044u);
    ctx->pc = 0x2E8040u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2E9F58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_acosf_0x2e9f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8044u; }
    }
    if (ctx->pc != 0x2E8044u) { return; }
    ctx->pc = 0x2E8044u;
    // 0x2e8044: 0x3c02003c
    ctx->pc = 0x2e8044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2e8048: 0x8c509c60
    ctx->pc = 0x2e8048u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294941792)));
    // 0x2e804c: 0x2403ffff
    ctx->pc = 0x2e804cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8050: 0x1203002d
    ctx->pc = 0x2E8050u;
    {
        const bool branch_taken_0x2e8050 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x2E8054u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2e8050) {
            ctx->pc = 0x2E8108u;
            goto label_2e8108;
        }
    }
    ctx->pc = 0x2E8058u;
    // 0x2e8058: 0xc0bb2f2
    ctx->pc = 0x2E8058u;
    SET_GPR_U32(ctx, 31, 0x2E8060u);
    ctx->pc = 0x2E805Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnanf_0x2ecbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8060u; }
    }
    if (ctx->pc != 0x2E8060u) { return; }
    ctx->pc = 0x2E8060u;
    // 0x2e8060: 0x1440002a
    ctx->pc = 0x2E8060u;
    {
        const bool branch_taken_0x2e8060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E8064u;
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2e8060) {
            ctx->pc = 0x2E810Cu;
            goto label_2e810c;
        }
    }
    ctx->pc = 0x2E8068u;
    // 0x2e8068: 0xc0b9e08
    ctx->pc = 0x2E8068u;
    SET_GPR_U32(ctx, 31, 0x2E8070u);
    ctx->pc = 0x2E806Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7820u;
    {
        const uint32_t __entryPc = ctx->pc;
        fabsf_0x2e7820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8070u; }
    }
    if (ctx->pc != 0x2E8070u) { return; }
    ctx->pc = 0x2E8070u;
    // 0x2e8070: 0x3c013f80
    ctx->pc = 0x2e8070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2e8074: 0x44810800
    ctx->pc = 0x2e8074u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2e8078: 0x46000834
    ctx->pc = 0x2e8078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e807c: 0x0
    ctx->pc = 0x2e807cu;
    // NOP
    // 0x2e8080: 0x45000021
    ctx->pc = 0x2E8080u;
    {
        const bool branch_taken_0x2e8080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8084u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2e8080) {
            ctx->pc = 0x2E8108u;
            goto label_2e8108;
        }
    }
    ctx->pc = 0x2E8088u;
    // 0x2e8088: 0x24030001
    ctx->pc = 0x2e8088u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e808c: 0x24429358
    ctx->pc = 0x2e808cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939480));
    // 0x2e8090: 0xafa30000
    ctx->pc = 0x2e8090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e8094: 0xafa20004
    ctx->pc = 0x2e8094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2e8098: 0x4600a306
    ctx->pc = 0x2e8098u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e809c: 0xc0be862
    ctx->pc = 0x2E809Cu;
    SET_GPR_U32(ctx, 31, 0x2E80A4u);
    ctx->pc = 0x2E80A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80A4u; }
    }
    if (ctx->pc != 0x2E80A4u) { return; }
    ctx->pc = 0x2E80A4u;
    // 0x2e80a4: 0x182d
    ctx->pc = 0x2e80a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80a8: 0xffa20008
    ctx->pc = 0x2e80a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2e80ac: 0xffa30018
    ctx->pc = 0x2e80acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2e80b0: 0x24030002
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e80b4: 0x12030005
    ctx->pc = 0x2E80B4u;
    {
        const bool branch_taken_0x2e80b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x2E80B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2e80b4) {
            ctx->pc = 0x2E80CCu;
            goto label_2e80cc;
        }
    }
    ctx->pc = 0x2E80BCu;
    // 0x2e80bc: 0xc0bb1f0
    ctx->pc = 0x2E80BCu;
    SET_GPR_U32(ctx, 31, 0x2E80C4u);
    ctx->pc = 0x2E80C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EC7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        matherr_0x2ec7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80C4u; }
    }
    if (ctx->pc != 0x2E80C4u) { return; }
    ctx->pc = 0x2E80C4u;
    // 0x2e80c4: 0x14400006
    ctx->pc = 0x2E80C4u;
    {
        const bool branch_taken_0x2e80c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E80C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2e80c4) {
            ctx->pc = 0x2E80E0u;
            goto label_2e80e0;
        }
    }
    ctx->pc = 0x2E80CCu;
label_2e80cc:
    // 0x2e80cc: 0xc0be8b2
    ctx->pc = 0x2E80CCu;
    SET_GPR_U32(ctx, 31, 0x2E80D4u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80D4u; }
    }
    if (ctx->pc != 0x2E80D4u) { return; }
    ctx->pc = 0x2E80D4u;
    // 0x2e80d4: 0x24030021
    ctx->pc = 0x2e80d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e80d8: 0xac430000
    ctx->pc = 0x2e80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e80dc: 0x8fa20020
    ctx->pc = 0x2e80dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2e80e0:
    // 0x2e80e0: 0x10400005
    ctx->pc = 0x2E80E0u;
    {
        const bool branch_taken_0x2e80e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e80e0) {
            ctx->pc = 0x2E80F8u;
            goto label_2e80f8;
        }
    }
    ctx->pc = 0x2E80E8u;
    // 0x2e80e8: 0xc0be8b2
    ctx->pc = 0x2E80E8u;
    SET_GPR_U32(ctx, 31, 0x2E80F0u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80F0u; }
    }
    if (ctx->pc != 0x2E80F0u) { return; }
    ctx->pc = 0x2E80F0u;
    // 0x2e80f0: 0x8fa30020
    ctx->pc = 0x2e80f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e80f4: 0xac430000
    ctx->pc = 0x2e80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e80f8:
    // 0x2e80f8: 0xc0be564
    ctx->pc = 0x2E80F8u;
    SET_GPR_U32(ctx, 31, 0x2E8100u);
    ctx->pc = 0x2E80FCu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8100u; }
    }
    if (ctx->pc != 0x2E8100u) { return; }
    ctx->pc = 0x2E8100u;
    // 0x2e8100: 0x10000003
    ctx->pc = 0x2E8100u;
    {
        const bool branch_taken_0x2e8100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E8104u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2e8100) {
            ctx->pc = 0x2E8110u;
            goto label_2e8110;
        }
    }
    ctx->pc = 0x2E8108u;
label_2e8108:
    // 0x2e8108: 0x4600a806
    ctx->pc = 0x2e8108u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2e810c:
    // 0x2e810c: 0xdfbf0040
    ctx->pc = 0x2e810cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8110:
    // 0x2e8110: 0xdfb00030
    ctx->pc = 0x2e8110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8114: 0xc7b50058
    ctx->pc = 0x2e8114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e8118: 0xc7b40050
    ctx->pc = 0x2e8118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e811c: 0x3e00008
    ctx->pc = 0x2E811Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E80CCu: goto label_2e80cc;
            case 0x2E80E0u: goto label_2e80e0;
            case 0x2E80F8u: goto label_2e80f8;
            case 0x2E8108u: goto label_2e8108;
            case 0x2E810Cu: goto label_2e810c;
            case 0x2E8110u: goto label_2e8110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E8124u;
}
