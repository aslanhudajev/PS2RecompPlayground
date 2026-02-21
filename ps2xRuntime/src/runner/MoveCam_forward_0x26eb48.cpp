#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_forward
// Address: 0x26eb48 - 0x26ecb4
void MoveCam_forward_0x26eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26eb48u;

    // 0x26eb48: 0x240301a0
    ctx->pc = 0x26eb48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26eb4c: 0x831818
    ctx->pc = 0x26eb4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26eb50: 0x3c020034
    ctx->pc = 0x26eb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26eb54: 0x2442eb60
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26eb58: 0x14800006
    ctx->pc = 0x26EB58u;
    {
        const bool branch_taken_0x26eb58 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26EB5Cu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26eb58) {
            ctx->pc = 0x26EB74u;
            goto label_26eb74;
        }
    }
    ctx->pc = 0x26EB60u;
    // 0x26eb60: 0x3c020031
    ctx->pc = 0x26eb60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26eb64: 0x8c430018
    ctx->pc = 0x26eb64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26eb68: 0x34028008
    ctx->pc = 0x26eb68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26eb6c: 0x14620008
    ctx->pc = 0x26EB6Cu;
    {
        const bool branch_taken_0x26eb6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26EB70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26eb6c) {
            ctx->pc = 0x26EB90u;
            goto label_26eb90;
        }
    }
    ctx->pc = 0x26EB74u;
label_26eb74:
    // 0x26eb74: 0x24020001
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eb78: 0x1482004c
    ctx->pc = 0x26EB78u;
    {
        const bool branch_taken_0x26eb78 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26EB7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26eb78) {
            ctx->pc = 0x26ECACu;
            goto label_26ecac;
        }
    }
    ctx->pc = 0x26EB80u;
    // 0x26eb80: 0x8c430018
    ctx->pc = 0x26eb80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26eb84: 0x34028008
    ctx->pc = 0x26eb84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26eb88: 0x14620048
    ctx->pc = 0x26EB88u;
    {
        const bool branch_taken_0x26eb88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26EB8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26eb88) {
            ctx->pc = 0x26ECACu;
            goto label_26ecac;
        }
    }
    ctx->pc = 0x26EB90u;
label_26eb90:
    // 0x26eb90: 0x8c421b24
    ctx->pc = 0x26eb90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26eb94: 0x3c030300
    ctx->pc = 0x26eb94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)768 << 16));
    // 0x26eb98: 0x431024
    ctx->pc = 0x26eb98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26eb9c: 0x14400005
    ctx->pc = 0x26EB9Cu;
    {
        const bool branch_taken_0x26eb9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26EBA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26eb9c) {
            ctx->pc = 0x26EBB4u;
            goto label_26ebb4;
        }
    }
    ctx->pc = 0x26EBA4u;
    // 0x26eba4: 0x44800000
    ctx->pc = 0x26eba4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26eba8: 0xe44038d8
    ctx->pc = 0x26eba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14552), bits); }
    // 0x26ebac: 0x1000000d
    ctx->pc = 0x26EBACu;
    {
        const bool branch_taken_0x26ebac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EBB0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
        if (branch_taken_0x26ebac) {
            ctx->pc = 0x26EBE4u;
            goto label_26ebe4;
        }
    }
    ctx->pc = 0x26EBB4u;
label_26ebb4:
    // 0x26ebb4: 0xc44038d8
    ctx->pc = 0x26ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ebb8: 0x3c013ca3
    ctx->pc = 0x26ebb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x26ebbc: 0x3421d70a
    ctx->pc = 0x26ebbcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x26ebc0: 0x44810800
    ctx->pc = 0x26ebc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26ebc4: 0x46010000
    ctx->pc = 0x26ebc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ebc8: 0x3c013f80
    ctx->pc = 0x26ebc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26ebcc: 0x44810800
    ctx->pc = 0x26ebccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26ebd0: 0x46000834
    ctx->pc = 0x26ebd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ebd4: 0x0
    ctx->pc = 0x26ebd4u;
    // NOP
    // 0x26ebd8: 0x45000002
    ctx->pc = 0x26EBD8u;
    {
        const bool branch_taken_0x26ebd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EBDCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14552), bits); }
        if (branch_taken_0x26ebd8) {
            ctx->pc = 0x26EBE4u;
            goto label_26ebe4;
        }
    }
    ctx->pc = 0x26EBE0u;
    // 0x26ebe0: 0xe44138d8
    ctx->pc = 0x26ebe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14552), bits); }
label_26ebe4:
    // 0x26ebe4: 0x3c020031
    ctx->pc = 0x26ebe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26ebe8: 0x8c421b24
    ctx->pc = 0x26ebe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26ebec: 0x3c030100
    ctx->pc = 0x26ebecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x26ebf0: 0x431024
    ctx->pc = 0x26ebf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ebf4: 0x10400014
    ctx->pc = 0x26EBF4u;
    {
        const bool branch_taken_0x26ebf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EBF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26ebf4) {
            ctx->pc = 0x26EC48u;
            goto label_26ec48;
        }
    }
    ctx->pc = 0x26EBFCu;
    // 0x26ebfc: 0x244638d8
    ctx->pc = 0x26ebfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 14552));
    // 0x26ec00: 0x3c030031
    ctx->pc = 0x26ec00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26ec04: 0x8c62ffbc
    ctx->pc = 0x26ec04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26ec08: 0x4400005
    ctx->pc = 0x26EC08u;
    {
        const bool branch_taken_0x26ec08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26EC0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26ec08) {
            ctx->pc = 0x26EC20u;
            goto label_26ec20;
        }
    }
    ctx->pc = 0x26EC10u;
    // 0x26ec10: 0x44820800
    ctx->pc = 0x26ec10u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26ec14: 0x46800860
    ctx->pc = 0x26ec14u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26ec18: 0x10000009
    ctx->pc = 0x26EC18u;
    {
        const bool branch_taken_0x26ec18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EC1Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26ec18) {
            ctx->pc = 0x26EC40u;
            goto label_26ec40;
        }
    }
    ctx->pc = 0x26EC20u;
label_26ec20:
    // 0x26ec20: 0x8c820000
    ctx->pc = 0x26ec20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ec24: 0x30430001
    ctx->pc = 0x26ec24u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26ec28: 0x21042
    ctx->pc = 0x26ec28u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26ec2c: 0x621825
    ctx->pc = 0x26ec2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ec30: 0x44830800
    ctx->pc = 0x26ec30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26ec34: 0x46800860
    ctx->pc = 0x26ec34u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26ec38: 0x46010840
    ctx->pc = 0x26ec38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26ec3c: 0xc4c00000
    ctx->pc = 0x26ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ec40:
    // 0x26ec40: 0x46000802
    ctx->pc = 0x26ec40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26ec44: 0xe4a00098
    ctx->pc = 0x26ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
label_26ec48:
    // 0x26ec48: 0x3c020031
    ctx->pc = 0x26ec48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26ec4c: 0x8c421b24
    ctx->pc = 0x26ec4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26ec50: 0x3c030200
    ctx->pc = 0x26ec50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x26ec54: 0x431024
    ctx->pc = 0x26ec54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ec58: 0x10400014
    ctx->pc = 0x26EC58u;
    {
        const bool branch_taken_0x26ec58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EC5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26ec58) {
            ctx->pc = 0x26ECACu;
            goto label_26ecac;
        }
    }
    ctx->pc = 0x26EC60u;
    // 0x26ec60: 0xc44038d8
    ctx->pc = 0x26ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ec64: 0x46000047
    ctx->pc = 0x26ec64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x26ec68: 0x3c030031
    ctx->pc = 0x26ec68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26ec6c: 0x8c62ffbc
    ctx->pc = 0x26ec6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26ec70: 0x4400005
    ctx->pc = 0x26EC70u;
    {
        const bool branch_taken_0x26ec70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26EC74u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26ec70) {
            ctx->pc = 0x26EC88u;
            goto label_26ec88;
        }
    }
    ctx->pc = 0x26EC78u;
    // 0x26ec78: 0x44820000
    ctx->pc = 0x26ec78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26ec7c: 0x46800020
    ctx->pc = 0x26ec7cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26ec80: 0x10000009
    ctx->pc = 0x26EC80u;
    {
        const bool branch_taken_0x26ec80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EC84u;
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26ec80) {
            ctx->pc = 0x26ECA8u;
            goto label_26eca8;
        }
    }
    ctx->pc = 0x26EC88u;
label_26ec88:
    // 0x26ec88: 0x8c820000
    ctx->pc = 0x26ec88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ec8c: 0x30430001
    ctx->pc = 0x26ec8cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26ec90: 0x21042
    ctx->pc = 0x26ec90u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26ec94: 0x621825
    ctx->pc = 0x26ec94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ec98: 0x44830000
    ctx->pc = 0x26ec98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26ec9c: 0x46800020
    ctx->pc = 0x26ec9cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26eca0: 0x46000000
    ctx->pc = 0x26eca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26eca4: 0x46000802
    ctx->pc = 0x26eca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26eca8:
    // 0x26eca8: 0xe4a00098
    ctx->pc = 0x26eca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
label_26ecac:
    // 0x26ecac: 0x3e00008
    ctx->pc = 0x26ECACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EB74u: goto label_26eb74;
            case 0x26EB90u: goto label_26eb90;
            case 0x26EBB4u: goto label_26ebb4;
            case 0x26EBE4u: goto label_26ebe4;
            case 0x26EC20u: goto label_26ec20;
            case 0x26EC40u: goto label_26ec40;
            case 0x26EC48u: goto label_26ec48;
            case 0x26EC88u: goto label_26ec88;
            case 0x26ECA8u: goto label_26eca8;
            case 0x26ECACu: goto label_26ecac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26ECB4u;
}
