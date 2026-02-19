#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_orbit
// Address: 0x26bcc0 - 0x26bde4
void MoveCam_orbit_0x26bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26bcc0u;

    // 0x26bcc0: 0x240301a0
    ctx->pc = 0x26bcc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26bcc4: 0x831818
    ctx->pc = 0x26bcc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26bcc8: 0x3c020034
    ctx->pc = 0x26bcc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26bccc: 0x2442eb60
    ctx->pc = 0x26bcccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26bcd0: 0x14800006
    ctx->pc = 0x26BCD0u;
    {
        const bool branch_taken_0x26bcd0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BCD4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26bcd0) {
            ctx->pc = 0x26BCECu;
            goto label_26bcec;
        }
    }
    ctx->pc = 0x26BCD8u;
    // 0x26bcd8: 0x3c020031
    ctx->pc = 0x26bcd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26bcdc: 0x8c430018
    ctx->pc = 0x26bcdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26bce0: 0x34028008
    ctx->pc = 0x26bce0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26bce4: 0x14620008
    ctx->pc = 0x26BCE4u;
    {
        const bool branch_taken_0x26bce4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26BCE8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26bce4) {
            ctx->pc = 0x26BD08u;
            goto label_26bd08;
        }
    }
    ctx->pc = 0x26BCECu;
label_26bcec:
    // 0x26bcec: 0x24020001
    ctx->pc = 0x26bcecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bcf0: 0x1482003a
    ctx->pc = 0x26BCF0u;
    {
        const bool branch_taken_0x26bcf0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26BCF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bcf0) {
            ctx->pc = 0x26BDDCu;
            goto label_26bddc;
        }
    }
    ctx->pc = 0x26BCF8u;
    // 0x26bcf8: 0x8c430018
    ctx->pc = 0x26bcf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26bcfc: 0x34028008
    ctx->pc = 0x26bcfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26bd00: 0x14620036
    ctx->pc = 0x26BD00u;
    {
        const bool branch_taken_0x26bd00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26BD04u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26bd00) {
            ctx->pc = 0x26BDDCu;
            goto label_26bddc;
        }
    }
    ctx->pc = 0x26BD08u;
label_26bd08:
    // 0x26bd08: 0x8c62ffbc
    ctx->pc = 0x26bd08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26bd0c: 0x4400005
    ctx->pc = 0x26BD0Cu;
    {
        const bool branch_taken_0x26bd0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26BD10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26bd0c) {
            ctx->pc = 0x26BD24u;
            goto label_26bd24;
        }
    }
    ctx->pc = 0x26BD14u;
    // 0x26bd14: 0x44820000
    ctx->pc = 0x26bd14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26bd18: 0x46800020
    ctx->pc = 0x26bd18u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26bd1c: 0x10000009
    ctx->pc = 0x26BD1Cu;
    {
        const bool branch_taken_0x26bd1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BD20u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x26bd1c) {
            ctx->pc = 0x26BD44u;
            goto label_26bd44;
        }
    }
    ctx->pc = 0x26BD24u;
label_26bd24:
    // 0x26bd24: 0x8c820000
    ctx->pc = 0x26bd24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26bd28: 0x30430001
    ctx->pc = 0x26bd28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26bd2c: 0x21042
    ctx->pc = 0x26bd2cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26bd30: 0x621825
    ctx->pc = 0x26bd30u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26bd34: 0x44830000
    ctx->pc = 0x26bd34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26bd38: 0x46800020
    ctx->pc = 0x26bd38u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26bd3c: 0x46000000
    ctx->pc = 0x26bd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26bd40: 0x46000046
    ctx->pc = 0x26bd40u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_26bd44:
    // 0x26bd44: 0x3c020031
    ctx->pc = 0x26bd44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26bd48: 0x8c421b28
    ctx->pc = 0x26bd48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x26bd4c: 0x3c030200
    ctx->pc = 0x26bd4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x26bd50: 0x431024
    ctx->pc = 0x26bd50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26bd54: 0x14400005
    ctx->pc = 0x26BD54u;
    {
        const bool branch_taken_0x26bd54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BD58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bd54) {
            ctx->pc = 0x26BD6Cu;
            goto label_26bd6c;
        }
    }
    ctx->pc = 0x26BD5Cu;
    // 0x26bd5c: 0x3c013dcc
    ctx->pc = 0x26bd5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26bd60: 0x3421cccd
    ctx->pc = 0x26bd60u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26bd64: 0x44810000
    ctx->pc = 0x26bd64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26bd68: 0x46000842
    ctx->pc = 0x26bd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26bd6c:
    // 0x26bd6c: 0x8c421b24
    ctx->pc = 0x26bd6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26bd70: 0x30420030
    ctx->pc = 0x26bd70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x26bd74: 0x10400004
    ctx->pc = 0x26BD74u;
    {
        const bool branch_taken_0x26bd74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BD78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bd74) {
            ctx->pc = 0x26BD88u;
            goto label_26bd88;
        }
    }
    ctx->pc = 0x26BD7Cu;
    // 0x26bd7c: 0xc4a00094
    ctx->pc = 0x26bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd80: 0x46000800
    ctx->pc = 0x26bd80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26bd84: 0xe4a00094
    ctx->pc = 0x26bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
label_26bd88:
    // 0x26bd88: 0x8c421b24
    ctx->pc = 0x26bd88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26bd8c: 0x304200c0
    ctx->pc = 0x26bd8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x26bd90: 0x10400004
    ctx->pc = 0x26BD90u;
    {
        const bool branch_taken_0x26bd90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BD94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bd90) {
            ctx->pc = 0x26BDA4u;
            goto label_26bda4;
        }
    }
    ctx->pc = 0x26BD98u;
    // 0x26bd98: 0xc4a00094
    ctx->pc = 0x26bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd9c: 0x46010001
    ctx->pc = 0x26bd9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26bda0: 0xe4a00094
    ctx->pc = 0x26bda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
label_26bda4:
    // 0x26bda4: 0x8c421b24
    ctx->pc = 0x26bda4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26bda8: 0x3042000c
    ctx->pc = 0x26bda8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x26bdac: 0x10400004
    ctx->pc = 0x26BDACu;
    {
        const bool branch_taken_0x26bdac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BDB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bdac) {
            ctx->pc = 0x26BDC0u;
            goto label_26bdc0;
        }
    }
    ctx->pc = 0x26BDB4u;
    // 0x26bdb4: 0xc4a00090
    ctx->pc = 0x26bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bdb8: 0x46000800
    ctx->pc = 0x26bdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26bdbc: 0xe4a00090
    ctx->pc = 0x26bdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 144), bits); }
label_26bdc0:
    // 0x26bdc0: 0x8c421b24
    ctx->pc = 0x26bdc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26bdc4: 0x30420003
    ctx->pc = 0x26bdc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x26bdc8: 0x10400004
    ctx->pc = 0x26BDC8u;
    {
        const bool branch_taken_0x26bdc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26bdc8) {
            ctx->pc = 0x26BDDCu;
            goto label_26bddc;
        }
    }
    ctx->pc = 0x26BDD0u;
    // 0x26bdd0: 0xc4a00090
    ctx->pc = 0x26bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bdd4: 0x46010001
    ctx->pc = 0x26bdd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26bdd8: 0xe4a00090
    ctx->pc = 0x26bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 144), bits); }
label_26bddc:
    // 0x26bddc: 0x3e00008
    ctx->pc = 0x26BDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26BCECu: goto label_26bcec;
            case 0x26BD08u: goto label_26bd08;
            case 0x26BD24u: goto label_26bd24;
            case 0x26BD44u: goto label_26bd44;
            case 0x26BD6Cu: goto label_26bd6c;
            case 0x26BD88u: goto label_26bd88;
            case 0x26BDA4u: goto label_26bda4;
            case 0x26BDC0u: goto label_26bdc0;
            case 0x26BDDCu: goto label_26bddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26BDE4u;
}
