#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStillPlaying
// Address: 0x222df8 - 0x222f00
void AudioStillPlaying_0x222df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222df8u;

    // 0x222df8: 0x27bdffe0
    ctx->pc = 0x222df8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222dfc: 0xffbf0010
    ctx->pc = 0x222dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222e00: 0xffb00000
    ctx->pc = 0x222e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222e04: 0x3c02003c
    ctx->pc = 0x222e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222e08: 0xac40d604
    ctx->pc = 0x222e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956548), GPR_U32(ctx, 0));
    // 0x222e0c: 0x3c020032
    ctx->pc = 0x222e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222e10: 0x8c42fd58
    ctx->pc = 0x222e10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x222e14: 0x14400035
    ctx->pc = 0x222E14u;
    {
        const bool branch_taken_0x222e14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222E18u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222e14) {
            ctx->pc = 0x222EECu;
            goto label_222eec;
        }
    }
    ctx->pc = 0x222E1Cu;
    // 0x222e1c: 0xc088ad6
    ctx->pc = 0x222E1Cu;
    SET_GPR_U32(ctx, 31, 0x222E24u);
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E24u; }
    }
    if (ctx->pc != 0x222E24u) { return; }
    ctx->pc = 0x222E24u;
    // 0x222e24: 0x10400012
    ctx->pc = 0x222E24u;
    {
        const bool branch_taken_0x222e24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222E28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x222e24) {
            ctx->pc = 0x222E70u;
            goto label_222e70;
        }
    }
    ctx->pc = 0x222E2Cu;
    // 0x222e2c: 0x8c43fd74
    ctx->pc = 0x222e2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966644)));
    // 0x222e30: 0x2031821
    ctx->pc = 0x222e30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x222e34: 0xac43fd74
    ctx->pc = 0x222e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966644), GPR_U32(ctx, 3));
    // 0x222e38: 0x3c0202fa
    ctx->pc = 0x222e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)762 << 16));
    // 0x222e3c: 0x3442f080
    ctx->pc = 0x222e3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61568));
    // 0x222e40: 0x43102a
    ctx->pc = 0x222e40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x222e44: 0x10400008
    ctx->pc = 0x222E44u;
    {
        const bool branch_taken_0x222e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222E48u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x222e44) {
            ctx->pc = 0x222E68u;
            goto label_222e68;
        }
    }
    ctx->pc = 0x222E4Cu;
    // 0x222e4c: 0xc0b492e
    ctx->pc = 0x222E4Cu;
    SET_GPR_U32(ctx, 31, 0x222E54u);
    ctx->pc = 0x222E50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26960));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E54u; }
    }
    if (ctx->pc != 0x222E54u) { return; }
    ctx->pc = 0x222E54u;
    // 0x222e54: 0x3c030032
    ctx->pc = 0x222e54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x222e58: 0x8c62fd78
    ctx->pc = 0x222e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966648)));
    // 0x222e5c: 0x24420001
    ctx->pc = 0x222e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x222e60: 0x10000022
    ctx->pc = 0x222E60u;
    {
        const bool branch_taken_0x222e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222E64u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966648), GPR_U32(ctx, 2));
        if (branch_taken_0x222e60) {
            ctx->pc = 0x222EECu;
            goto label_222eec;
        }
    }
    ctx->pc = 0x222E68u;
label_222e68:
    // 0x222e68: 0x10000021
    ctx->pc = 0x222E68u;
    {
        const bool branch_taken_0x222e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x222e68) {
            ctx->pc = 0x222EF0u;
            goto label_222ef0;
        }
    }
    ctx->pc = 0x222E70u;
label_222e70:
    // 0x222e70: 0x202d
    ctx->pc = 0x222e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e74: 0x3c020032
    ctx->pc = 0x222e74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222e78: 0x2448fe38
    ctx->pc = 0x222e78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x222e7c: 0x24070014
    ctx->pc = 0x222e7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    // 0x222e80: 0x3c020032
    ctx->pc = 0x222e80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222e84: 0x2446fe40
    ctx->pc = 0x222e84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x222e88: 0x44801000
    ctx->pc = 0x222e88u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x222e8c: 0x3c050031
    ctx->pc = 0x222e8cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x222e90: 0x871818
    ctx->pc = 0x222e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222e94: 0x0
    ctx->pc = 0x222e94u;
    // NOP
label_222e98:
    // 0x222e98: 0x661021
    ctx->pc = 0x222e98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x222e9c: 0xc4410000
    ctx->pc = 0x222e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222ea0: 0x681821
    ctx->pc = 0x222ea0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x222ea4: 0x8c620000
    ctx->pc = 0x222ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222ea8: 0x5040000b
    ctx->pc = 0x222EA8u;
    {
        const bool branch_taken_0x222ea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x222ea8) {
            ctx->pc = 0x222EACu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x222ED8u;
            goto label_222ed8;
        }
    }
    ctx->pc = 0x222EB0u;
    // 0x222eb0: 0x46011034
    ctx->pc = 0x222eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222eb4: 0x0
    ctx->pc = 0x222eb4u;
    // NOP
    // 0x222eb8: 0x45020007
    ctx->pc = 0x222EB8u;
    {
        const bool branch_taken_0x222eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222eb8) {
            ctx->pc = 0x222EBCu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x222ED8u;
            goto label_222ed8;
        }
    }
    ctx->pc = 0x222EC0u;
    // 0x222ec0: 0xc4a0ffa4
    ctx->pc = 0x222ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222ec4: 0x46010034
    ctx->pc = 0x222ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222ec8: 0x0
    ctx->pc = 0x222ec8u;
    // NOP
    // 0x222ecc: 0x45010006
    ctx->pc = 0x222ECCu;
    {
        const bool branch_taken_0x222ecc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x222ecc) {
            ctx->pc = 0x222EE8u;
            goto label_222ee8;
        }
    }
    ctx->pc = 0x222ED4u;
    // 0x222ed4: 0x24840001
    ctx->pc = 0x222ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_222ed8:
    // 0x222ed8: 0x2882000c
    ctx->pc = 0x222ed8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 12));
    // 0x222edc: 0x1440ffee
    ctx->pc = 0x222EDCu;
    {
        const bool branch_taken_0x222edc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222EE0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x222edc) {
            ctx->pc = 0x222E98u;
            goto label_222e98;
        }
    }
    ctx->pc = 0x222EE4u;
    // 0x222ee4: 0x3c020032
    ctx->pc = 0x222ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_222ee8:
    // 0x222ee8: 0xac40fd74
    ctx->pc = 0x222ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966644), GPR_U32(ctx, 0));
label_222eec:
    // 0x222eec: 0x102d
    ctx->pc = 0x222eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222ef0:
    // 0x222ef0: 0xdfbf0010
    ctx->pc = 0x222ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222ef4: 0xdfb00000
    ctx->pc = 0x222ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222ef8: 0x3e00008
    ctx->pc = 0x222EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222EFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222E68u: goto label_222e68;
            case 0x222E70u: goto label_222e70;
            case 0x222E98u: goto label_222e98;
            case 0x222ED8u: goto label_222ed8;
            case 0x222EE8u: goto label_222ee8;
            case 0x222EECu: goto label_222eec;
            case 0x222EF0u: goto label_222ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222F00u;
}
