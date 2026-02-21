#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncVNorm
// Address: 0x2b7010 - 0x2b715c
void efuncVNorm_0x2b7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7010u;

    // 0x2b7010: 0x27bdffc0
    ctx->pc = 0x2b7010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b7014: 0xffbf0030
    ctx->pc = 0x2b7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b7018: 0xffb20020
    ctx->pc = 0x2b7018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b701c: 0xffb10010
    ctx->pc = 0x2b701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b7020: 0xffb00000
    ctx->pc = 0x2b7020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7024: 0x8c910010
    ctx->pc = 0x2b7024u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b7028: 0x8e230000
    ctx->pc = 0x2b7028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b702c: 0x24020002
    ctx->pc = 0x2b702cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7030: 0x10620003
    ctx->pc = 0x2B7030u;
    {
        const bool branch_taken_0x2b7030 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7034u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2b7030) {
            ctx->pc = 0x2B7040u;
            goto label_2b7040;
        }
    }
    ctx->pc = 0x2B7038u;
    // 0x2b7038: 0x10000041
    ctx->pc = 0x2B7038u;
    {
        const bool branch_taken_0x2b7038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B703Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b7038) {
            ctx->pc = 0x2B7140u;
            goto label_2b7140;
        }
    }
    ctx->pc = 0x2B7040u;
label_2b7040:
    // 0x2b7040: 0x44806000
    ctx->pc = 0x2b7040u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2b7044: 0x8c820004
    ctx->pc = 0x2b7044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b7048: 0x80500006
    ctx->pc = 0x2b7048u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b704c: 0x2610ffd0
    ctx->pc = 0x2b704cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x2b7050: 0x2602ffff
    ctx->pc = 0x2b7050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b7054: 0x2c420004
    ctx->pc = 0x2b7054u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x2b7058: 0x24030003
    ctx->pc = 0x2b7058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b705c: 0x62800a
    ctx->pc = 0x2b705cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x2b7060: 0x1a00000b
    ctx->pc = 0x2B7060u;
    {
        const bool branch_taken_0x2b7060 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B7064u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b7060) {
            ctx->pc = 0x2B7090u;
            goto label_2b7090;
        }
    }
    ctx->pc = 0x2B7068u;
    // 0x2b7068: 0x26230010
    ctx->pc = 0x2b7068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 16));
    // 0x2b706c: 0x0
    ctx->pc = 0x2b706cu;
    // NOP
label_2b7070:
    // 0x2b7070: 0x41080
    ctx->pc = 0x2b7070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7074: 0x621021
    ctx->pc = 0x2b7074u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7078: 0xc4400000
    ctx->pc = 0x2b7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b707c: 0x46000002
    ctx->pc = 0x2b707cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b7080: 0x24840001
    ctx->pc = 0x2b7080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b7084: 0x90102a
    ctx->pc = 0x2b7084u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 16)));
    // 0x2b7088: 0x1440fff9
    ctx->pc = 0x2B7088u;
    {
        const bool branch_taken_0x2b7088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B708Cu;
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2b7088) {
            ctx->pc = 0x2B7070u;
            goto label_2b7070;
        }
    }
    ctx->pc = 0x2B7090u;
label_2b7090:
    // 0x2b7090: 0x44800000
    ctx->pc = 0x2b7090u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2b7094: 0x46006032
    ctx->pc = 0x2b7094u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7098: 0x4501000f
    ctx->pc = 0x2B7098u;
    {
        const bool branch_taken_0x2b7098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7098) {
            ctx->pc = 0x2B70D8u;
            goto label_2b70d8;
        }
    }
    ctx->pc = 0x2B70A0u;
    // 0x2b70a0: 0x0
    ctx->pc = 0x2b70a0u;
    // NOP
    // 0x2b70a4: 0x0
    ctx->pc = 0x2b70a4u;
    // NOP
    // 0x2b70a8: 0x460c0044
    ctx->pc = 0x2b70a8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b70ac: 0x46010832
    ctx->pc = 0x2b70acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b70b0: 0x45010004
    ctx->pc = 0x2B70B0u;
    {
        const bool branch_taken_0x2b70b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b70b0) {
            ctx->pc = 0x2B70C4u;
            goto label_2b70c4;
        }
    }
    ctx->pc = 0x2B70B8u;
    // 0x2b70b8: 0xc0ba284
    ctx->pc = 0x2B70B8u;
    SET_GPR_U32(ctx, 31, 0x2B70C0u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B70C0u; }
    }
    if (ctx->pc != 0x2B70C0u) { return; }
    ctx->pc = 0x2B70C0u;
    // 0x2b70c0: 0x46000046
    ctx->pc = 0x2b70c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2b70c4:
    // 0x2b70c4: 0x3c013f80
    ctx->pc = 0x2b70c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2b70c8: 0x44810000
    ctx->pc = 0x2b70c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2b70cc: 0x0
    ctx->pc = 0x2b70ccu;
    // NOP
    // 0x2b70d0: 0x0
    ctx->pc = 0x2b70d0u;
    // NOP
    // 0x2b70d4: 0x46010303
    ctx->pc = 0x2b70d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
label_2b70d8:
    // 0x2b70d8: 0x1a00000c
    ctx->pc = 0x2B70D8u;
    {
        const bool branch_taken_0x2b70d8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B70DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b70d8) {
            ctx->pc = 0x2B710Cu;
            goto label_2b710c;
        }
    }
    ctx->pc = 0x2B70E0u;
    // 0x2b70e0: 0x26460010
    ctx->pc = 0x2b70e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 16));
    // 0x2b70e4: 0x26250010
    ctx->pc = 0x2b70e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
label_2b70e8:
    // 0x2b70e8: 0x41080
    ctx->pc = 0x2b70e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b70ec: 0xc21821
    ctx->pc = 0x2b70ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b70f0: 0xa21021
    ctx->pc = 0x2b70f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b70f4: 0xc4400000
    ctx->pc = 0x2b70f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b70f8: 0x46006002
    ctx->pc = 0x2b70f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b70fc: 0x24840001
    ctx->pc = 0x2b70fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b7100: 0x90102a
    ctx->pc = 0x2b7100u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 16)));
    // 0x2b7104: 0x1440fff8
    ctx->pc = 0x2B7104u;
    {
        const bool branch_taken_0x2b7104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7108u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x2b7104) {
            ctx->pc = 0x2B70E8u;
            goto label_2b70e8;
        }
    }
    ctx->pc = 0x2B710Cu;
label_2b710c:
    // 0x2b710c: 0x28820004
    ctx->pc = 0x2b710cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2b7110: 0x1040000b
    ctx->pc = 0x2B7110u;
    {
        const bool branch_taken_0x2b7110 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b7110) {
            ctx->pc = 0x2B7140u;
            goto label_2b7140;
        }
    }
    ctx->pc = 0x2B7118u;
    // 0x2b7118: 0x26430010
    ctx->pc = 0x2b7118u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 16));
    // 0x2b711c: 0x0
    ctx->pc = 0x2b711cu;
    // NOP
label_2b7120:
    // 0x2b7120: 0x41080
    ctx->pc = 0x2b7120u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7124: 0x621021
    ctx->pc = 0x2b7124u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7128: 0xac400000
    ctx->pc = 0x2b7128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b712c: 0x24840001
    ctx->pc = 0x2b712cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b7130: 0x28820004
    ctx->pc = 0x2b7130u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2b7134: 0x1440fffa
    ctx->pc = 0x2B7134u;
    {
        const bool branch_taken_0x2b7134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b7134) {
            ctx->pc = 0x2B7120u;
            goto label_2b7120;
        }
    }
    ctx->pc = 0x2B713Cu;
    // 0x2b713c: 0x24020002
    ctx->pc = 0x2b713cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2b7140:
    // 0x2b7140: 0xae420000
    ctx->pc = 0x2b7140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b7144: 0xdfbf0030
    ctx->pc = 0x2b7144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7148: 0xdfb20020
    ctx->pc = 0x2b7148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b714c: 0xdfb10010
    ctx->pc = 0x2b714cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7150: 0xdfb00000
    ctx->pc = 0x2b7150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7154: 0x3e00008
    ctx->pc = 0x2B7154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7158u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7040u: goto label_2b7040;
            case 0x2B7070u: goto label_2b7070;
            case 0x2B7090u: goto label_2b7090;
            case 0x2B70C4u: goto label_2b70c4;
            case 0x2B70D8u: goto label_2b70d8;
            case 0x2B70E8u: goto label_2b70e8;
            case 0x2B710Cu: goto label_2b710c;
            case 0x2B7120u: goto label_2b7120;
            case 0x2B7140u: goto label_2b7140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B715Cu;
}
