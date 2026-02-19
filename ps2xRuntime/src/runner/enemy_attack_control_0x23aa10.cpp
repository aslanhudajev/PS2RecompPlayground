#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_attack_control
// Address: 0x23aa10 - 0x23ae10
void enemy_attack_control_0x23aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23aa10u;

    // 0x23aa10: 0x27bdff80
    ctx->pc = 0x23aa10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23aa14: 0xffbf0060
    ctx->pc = 0x23aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23aa18: 0xffb30050
    ctx->pc = 0x23aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x23aa1c: 0xffb20040
    ctx->pc = 0x23aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x23aa20: 0xffb10030
    ctx->pc = 0x23aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x23aa24: 0xffb00020
    ctx->pc = 0x23aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23aa28: 0xe7b40070
    ctx->pc = 0x23aa28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23aa2c: 0x80802d
    ctx->pc = 0x23aa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa30: 0x96020324
    ctx->pc = 0x23aa30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23aa34: 0x2442ffe4
    ctx->pc = 0x23aa34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x23aa38: 0x2c420003
    ctx->pc = 0x23aa38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x23aa3c: 0x10400005
    ctx->pc = 0x23AA3Cu;
    {
        const bool branch_taken_0x23aa3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AA40u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23aa3c) {
            ctx->pc = 0x23AA54u;
            goto label_23aa54;
        }
    }
    ctx->pc = 0x23AA44u;
    // 0x23aa44: 0x8e0202e4
    ctx->pc = 0x23aa44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x23aa48: 0x3042000f
    ctx->pc = 0x23aa48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x23aa4c: 0x5440000a
    ctx->pc = 0x23AA4Cu;
    {
        const bool branch_taken_0x23aa4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23aa4c) {
            ctx->pc = 0x23AA50u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->pc = 0x23AA78u;
            goto label_23aa78;
        }
    }
    ctx->pc = 0x23AA54u;
label_23aa54:
    // 0x23aa54: 0x86030324
    ctx->pc = 0x23aa54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23aa58: 0x2402001f
    ctx->pc = 0x23aa58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x23aa5c: 0x54620032
    ctx->pc = 0x23AA5Cu;
    {
        const bool branch_taken_0x23aa5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23aa5c) {
            ctx->pc = 0x23AA60u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 736)));
            ctx->pc = 0x23AB28u;
            goto label_23ab28;
        }
    }
    ctx->pc = 0x23AA64u;
    // 0x23aa64: 0x8e0202e4
    ctx->pc = 0x23aa64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x23aa68: 0x30420002
    ctx->pc = 0x23aa68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x23aa6c: 0x5040002e
    ctx->pc = 0x23AA6Cu;
    {
        const bool branch_taken_0x23aa6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23aa6c) {
            ctx->pc = 0x23AA70u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 736)));
            ctx->pc = 0x23AB28u;
            goto label_23ab28;
        }
    }
    ctx->pc = 0x23AA74u;
    // 0x23aa74: 0x8e020298
    ctx->pc = 0x23aa74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_23aa78:
    // 0x23aa78: 0x443002b
    ctx->pc = 0x23AA78u;
    {
        const bool branch_taken_0x23aa78 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23aa78) {
            ctx->pc = 0x23AA7Cu;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 736)));
            ctx->pc = 0x23AB28u;
            goto label_23ab28;
        }
    }
    ctx->pc = 0x23AA80u;
    // 0x23aa80: 0x86040288
    ctx->pc = 0x23aa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23aa84: 0x480000b
    ctx->pc = 0x23AA84u;
    {
        const bool branch_taken_0x23aa84 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23AA88u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x23aa84) {
            ctx->pc = 0x23AAB4u;
            goto label_23aab4;
        }
    }
    ctx->pc = 0x23AA8Cu;
    // 0x23aa8c: 0x24631bc0
    ctx->pc = 0x23aa8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x23aa90: 0x24022b00
    ctx->pc = 0x23aa90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23aa94: 0x821018
    ctx->pc = 0x23aa94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23aa98: 0x431021
    ctx->pc = 0x23aa98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23aa9c: 0xc4400070
    ctx->pc = 0x23aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aaa0: 0xe7a00010
    ctx->pc = 0x23aaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23aaa4: 0xc4400074
    ctx->pc = 0x23aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aaa8: 0xe7a00014
    ctx->pc = 0x23aaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23aaac: 0x10000014
    ctx->pc = 0x23AAACu;
    {
        const bool branch_taken_0x23aaac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AAB0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23aaac) {
            ctx->pc = 0x23AB00u;
            goto label_23ab00;
        }
    }
    ctx->pc = 0x23AAB4u;
label_23aab4:
    // 0x23aab4: 0xc6000060
    ctx->pc = 0x23aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aab8: 0xe7a00010
    ctx->pc = 0x23aab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23aabc: 0xc6000064
    ctx->pc = 0x23aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aac0: 0xe7a00014
    ctx->pc = 0x23aac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23aac4: 0xc6000068
    ctx->pc = 0x23aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aac8: 0xe7a00018
    ctx->pc = 0x23aac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23aacc: 0xc0b9e4a
    ctx->pc = 0x23AACCu;
    SET_GPR_U32(ctx, 31, 0x23AAD4u);
    ctx->pc = 0x23AAD0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AAD4u; }
    }
    if (ctx->pc != 0x23AAD4u) { return; }
    ctx->pc = 0x23AAD4u;
    // 0x23aad4: 0x3c0141a0
    ctx->pc = 0x23aad4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x23aad8: 0x4481a000
    ctx->pc = 0x23aad8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x23aadc: 0x46140002
    ctx->pc = 0x23aadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x23aae0: 0xc7a10010
    ctx->pc = 0x23aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23aae4: 0x46010000
    ctx->pc = 0x23aae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23aae8: 0xe7a00010
    ctx->pc = 0x23aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23aaec: 0xc0b9dce
    ctx->pc = 0x23AAECu;
    SET_GPR_U32(ctx, 31, 0x23AAF4u);
    ctx->pc = 0x23AAF0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AAF4u; }
    }
    if (ctx->pc != 0x23AAF4u) { return; }
    ctx->pc = 0x23AAF4u;
    // 0x23aaf4: 0x46140002
    ctx->pc = 0x23aaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x23aaf8: 0xc7a10018
    ctx->pc = 0x23aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23aafc: 0x46010000
    ctx->pc = 0x23aafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23ab00:
    // 0x23ab00: 0xe7a00018
    ctx->pc = 0x23ab00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23ab04: 0x200202d
    ctx->pc = 0x23ab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ab08: 0x27a50010
    ctx->pc = 0x23ab08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x23ab0c: 0xc08ea4a
    ctx->pc = 0x23AB0Cu;
    SET_GPR_U32(ctx, 31, 0x23AB14u);
    ctx->pc = 0x23AB10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x23A928u;
    {
        const uint32_t __entryPc = ctx->pc;
        shoot_missile_0x23a928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB14u; }
    }
    if (ctx->pc != 0x23AB14u) { return; }
    ctx->pc = 0x23AB14u;
    // 0x23ab14: 0x8e0202e4
    ctx->pc = 0x23ab14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x23ab18: 0x2403fff0
    ctx->pc = 0x23ab18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x23ab1c: 0x431024
    ctx->pc = 0x23ab1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ab20: 0xae0202e4
    ctx->pc = 0x23ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x23ab24: 0x860402e0
    ctx->pc = 0x23ab24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 736)));
label_23ab28:
    // 0x23ab28: 0x4800083
    ctx->pc = 0x23AB28u;
    {
        const bool branch_taken_0x23ab28 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23AB2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
        if (branch_taken_0x23ab28) {
            ctx->pc = 0x23AD38u;
            goto label_23ad38;
        }
    }
    ctx->pc = 0x23AB30u;
    // 0x23ab30: 0x3042000f
    ctx->pc = 0x23ab30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x23ab34: 0x1040007f
    ctx->pc = 0x23AB34u;
    {
        const bool branch_taken_0x23ab34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AB38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23ab34) {
            ctx->pc = 0x23AD34u;
            goto label_23ad34;
        }
    }
    ctx->pc = 0x23AB3Cu;
    // 0x23ab3c: 0x831818
    ctx->pc = 0x23ab3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ab40: 0x3c020032
    ctx->pc = 0x23ab40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23ab44: 0x24421bc0
    ctx->pc = 0x23ab44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23ab48: 0x628821
    ctx->pc = 0x23ab48u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ab4c: 0x8e2300fc
    ctx->pc = 0x23ab4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x23ab50: 0x24020001
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ab54: 0x14620076
    ctx->pc = 0x23AB54u;
    {
        const bool branch_taken_0x23ab54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23AB58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23ab54) {
            ctx->pc = 0x23AD30u;
            goto label_23ad30;
        }
    }
    ctx->pc = 0x23AB5Cu;
    // 0x23ab5c: 0x24130001
    ctx->pc = 0x23ab5cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ab60: 0x3c020032
    ctx->pc = 0x23ab60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23ab64: 0xc44107fc
    ctx->pc = 0x23ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ab68: 0x3c013f80
    ctx->pc = 0x23ab68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23ab6c: 0x44810000
    ctx->pc = 0x23ab6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ab70: 0x46000834
    ctx->pc = 0x23ab70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ab74: 0x0
    ctx->pc = 0x23ab74u;
    // NOP
    // 0x23ab78: 0x45000005
    ctx->pc = 0x23AB78u;
    {
        const bool branch_taken_0x23ab78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AB7Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x23ab78) {
            ctx->pc = 0x23AB90u;
            goto label_23ab90;
        }
    }
    ctx->pc = 0x23AB80u;
    // 0x23ab80: 0x3c013f00
    ctx->pc = 0x23ab80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23ab84: 0x44810000
    ctx->pc = 0x23ab84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ab88: 0x10000019
    ctx->pc = 0x23AB88u;
    {
        const bool branch_taken_0x23ab88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AB8Cu;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23ab88) {
            ctx->pc = 0x23ABF0u;
            goto label_23abf0;
        }
    }
    ctx->pc = 0x23AB90u;
label_23ab90:
    // 0x23ab90: 0x8e0202e4
    ctx->pc = 0x23ab90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x23ab94: 0x30420002
    ctx->pc = 0x23ab94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x23ab98: 0x5040000c
    ctx->pc = 0x23AB98u;
    {
        const bool branch_taken_0x23ab98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23ab98) {
            ctx->pc = 0x23AB9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x23ABCCu;
            goto label_23abcc;
        }
    }
    ctx->pc = 0x23ABA0u;
    // 0x23aba0: 0x3c013fc0
    ctx->pc = 0x23aba0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x23aba4: 0x44810000
    ctx->pc = 0x23aba4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23aba8: 0x4600a502
    ctx->pc = 0x23aba8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23abac: 0xc6010250
    ctx->pc = 0x23abacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23abb0: 0x3c014000
    ctx->pc = 0x23abb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23abb4: 0x44810000
    ctx->pc = 0x23abb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23abb8: 0x46010034
    ctx->pc = 0x23abb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23abbc: 0x0
    ctx->pc = 0x23abbcu;
    // NOP
    // 0x23abc0: 0x45030001
    ctx->pc = 0x23ABC0u;
    {
        const bool branch_taken_0x23abc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23abc0) {
            ctx->pc = 0x23ABC4u;
            SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 16));
            ctx->pc = 0x23ABC8u;
            goto label_23abc8;
        }
    }
    ctx->pc = 0x23ABC8u;
label_23abc8:
    // 0x23abc8: 0x8e020000
    ctx->pc = 0x23abc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23abcc:
    // 0x23abcc: 0x36430020
    ctx->pc = 0x23abccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 18), 32));
    // 0x23abd0: 0x3842001d
    ctx->pc = 0x23abd0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 29));
    // 0x23abd4: 0xc6010250
    ctx->pc = 0x23abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23abd8: 0x3c014000
    ctx->pc = 0x23abd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23abdc: 0x44810000
    ctx->pc = 0x23abdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23abe0: 0x46000836
    ctx->pc = 0x23abe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23abe4: 0x0
    ctx->pc = 0x23abe4u;
    // NOP
    // 0x23abe8: 0x45000008
    ctx->pc = 0x23ABE8u;
    {
        const bool branch_taken_0x23abe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23ABECu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x23abe8) {
            ctx->pc = 0x23AC0Cu;
            goto label_23ac0c;
        }
    }
    ctx->pc = 0x23ABF0u;
label_23abf0:
    // 0x23abf0: 0x3c024000
    ctx->pc = 0x23abf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x23abf4: 0x2429025
    ctx->pc = 0x23abf4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23abf8: 0xc6010250
    ctx->pc = 0x23abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23abfc: 0x3c014000
    ctx->pc = 0x23abfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23ac00: 0x44810000
    ctx->pc = 0x23ac00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ac04: 0x46000836
    ctx->pc = 0x23ac04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ac08: 0x0
    ctx->pc = 0x23ac08u;
    // NOP
label_23ac0c:
    // 0x23ac0c: 0x45000004
    ctx->pc = 0x23AC0Cu;
    {
        const bool branch_taken_0x23ac0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AC10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x23ac0c) {
            ctx->pc = 0x23AC20u;
            goto label_23ac20;
        }
    }
    ctx->pc = 0x23AC14u;
    // 0x23ac14: 0x8e030000
    ctx->pc = 0x23ac14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ac18: 0x14620009
    ctx->pc = 0x23AC18u;
    {
        const bool branch_taken_0x23ac18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23ac18) {
            ctx->pc = 0x23AC40u;
            goto label_23ac40;
        }
    }
    ctx->pc = 0x23AC20u;
label_23ac20:
    // 0x23ac20: 0x8e030000
    ctx->pc = 0x23ac20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ac24: 0x24020002
    ctx->pc = 0x23ac24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ac28: 0x10620005
    ctx->pc = 0x23AC28u;
    {
        const bool branch_taken_0x23ac28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23AC2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x23ac28) {
            ctx->pc = 0x23AC40u;
            goto label_23ac40;
        }
    }
    ctx->pc = 0x23AC30u;
    // 0x23ac30: 0x10620003
    ctx->pc = 0x23AC30u;
    {
        const bool branch_taken_0x23ac30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23AC34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x23ac30) {
            ctx->pc = 0x23AC40u;
            goto label_23ac40;
        }
    }
    ctx->pc = 0x23AC38u;
    // 0x23ac38: 0x14620005
    ctx->pc = 0x23AC38u;
    {
        const bool branch_taken_0x23ac38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23AC3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967292));
        if (branch_taken_0x23ac38) {
            ctx->pc = 0x23AC50u;
            goto label_23ac50;
        }
    }
    ctx->pc = 0x23AC40u;
label_23ac40:
    // 0x23ac40: 0xc097e6c
    ctx->pc = 0x23AC40u;
    SET_GPR_U32(ctx, 31, 0x23AC48u);
    ctx->pc = 0x23AC44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25F9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnemyBite_0x25f9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC48u; }
    }
    if (ctx->pc != 0x23AC48u) { return; }
    ctx->pc = 0x23AC48u;
    // 0x23ac48: 0x1000000f
    ctx->pc = 0x23AC48u;
    {
        const bool branch_taken_0x23ac48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AC4Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23ac48) {
            ctx->pc = 0x23AC88u;
            goto label_23ac88;
        }
    }
    ctx->pc = 0x23AC50u;
label_23ac50:
    // 0x23ac50: 0x2c420002
    ctx->pc = 0x23ac50u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23ac54: 0x54400005
    ctx->pc = 0x23AC54u;
    {
        const bool branch_taken_0x23ac54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23ac54) {
            ctx->pc = 0x23AC58u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 538)));
            ctx->pc = 0x23AC6Cu;
            goto label_23ac6c;
        }
    }
    ctx->pc = 0x23AC5Cu;
    // 0x23ac5c: 0x2402000a
    ctx->pc = 0x23ac5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x23ac60: 0x1462000a
    ctx->pc = 0x23AC60u;
    {
        const bool branch_taken_0x23ac60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23AC64u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 304));
        if (branch_taken_0x23ac60) {
            ctx->pc = 0x23AC8Cu;
            goto label_23ac8c;
        }
    }
    ctx->pc = 0x23AC68u;
    // 0x23ac68: 0x8602021a
    ctx->pc = 0x23ac68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 538)));
label_23ac6c:
    // 0x23ac6c: 0x28420002
    ctx->pc = 0x23ac6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x23ac70: 0x24030004
    ctx->pc = 0x23ac70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x23ac74: 0x24050003
    ctx->pc = 0x23ac74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ac78: 0x860402e0
    ctx->pc = 0x23ac78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x23ac7c: 0xc097b0c
    ctx->pc = 0x23AC7Cu;
    SET_GPR_U32(ctx, 31, 0x23AC84u);
    ctx->pc = 0x23AC80u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    ctx->pc = 0x25EC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerHit_0x25ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC84u; }
    }
    if (ctx->pc != 0x23AC84u) { return; }
    ctx->pc = 0x23AC84u;
    // 0x23ac84: 0x982d
    ctx->pc = 0x23ac84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ac88:
    // 0x23ac88: 0x32420130
    ctx->pc = 0x23ac88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 304));
label_23ac8c:
    // 0x23ac8c: 0x50400018
    ctx->pc = 0x23AC8Cu;
    {
        const bool branch_taken_0x23ac8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23ac8c) {
            ctx->pc = 0x23AC90u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 736)));
            ctx->pc = 0x23ACF0u;
            goto label_23acf0;
        }
    }
    ctx->pc = 0x23AC94u;
    // 0x23ac94: 0xc6200070
    ctx->pc = 0x23ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ac98: 0xc6010060
    ctx->pc = 0x23ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ac9c: 0x46010001
    ctx->pc = 0x23ac9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23aca0: 0xe7a00000
    ctx->pc = 0x23aca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23aca4: 0xc6220074
    ctx->pc = 0x23aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23aca8: 0xc6000064
    ctx->pc = 0x23aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23acac: 0x46001081
    ctx->pc = 0x23acacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23acb0: 0xc6200078
    ctx->pc = 0x23acb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23acb4: 0xc6010068
    ctx->pc = 0x23acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23acb8: 0x46010001
    ctx->pc = 0x23acb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23acbc: 0xe7a00008
    ctx->pc = 0x23acbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23acc0: 0x46001087
    ctx->pc = 0x23acc0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x23acc4: 0xe7a20004
    ctx->pc = 0x23acc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23acc8: 0xc0b58a4
    ctx->pc = 0x23ACC8u;
    SET_GPR_U32(ctx, 31, 0x23ACD0u);
    ctx->pc = 0x23ACCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACD0u; }
    }
    if (ctx->pc != 0x23ACD0u) { return; }
    ctx->pc = 0x23ACD0u;
    // 0x23acd0: 0x860402e0
    ctx->pc = 0x23acd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x23acd4: 0x4600a306
    ctx->pc = 0x23acd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23acd8: 0x260282d
    ctx->pc = 0x23acd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acdc: 0x240302d
    ctx->pc = 0x23acdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ace0: 0xc08c73c
    ctx->pc = 0x23ACE0u;
    SET_GPR_U32(ctx, 31, 0x23ACE8u);
    ctx->pc = 0x23ACE4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACE8u; }
    }
    if (ctx->pc != 0x23ACE8u) { return; }
    ctx->pc = 0x23ACE8u;
    // 0x23ace8: 0x10000007
    ctx->pc = 0x23ACE8u;
    {
        const bool branch_taken_0x23ace8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23ACECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x23ace8) {
            ctx->pc = 0x23AD08u;
            goto label_23ad08;
        }
    }
    ctx->pc = 0x23ACF0u;
label_23acf0:
    // 0x23acf0: 0x4600a306
    ctx->pc = 0x23acf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23acf4: 0x260282d
    ctx->pc = 0x23acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acf8: 0x240302d
    ctx->pc = 0x23acf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acfc: 0xc08c73c
    ctx->pc = 0x23ACFCu;
    SET_GPR_U32(ctx, 31, 0x23AD04u);
    ctx->pc = 0x23AD00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD04u; }
    }
    if (ctx->pc != 0x23AD04u) { return; }
    ctx->pc = 0x23AD04u;
    // 0x23ad04: 0x3c030032
    ctx->pc = 0x23ad04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_23ad08:
    // 0x23ad08: 0x24020001
    ctx->pc = 0x23ad08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ad0c: 0xac6207f0
    ctx->pc = 0x23ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2032), GPR_U32(ctx, 2));
    // 0x23ad10: 0x960202e2
    ctx->pc = 0x23ad10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 738)));
    // 0x23ad14: 0x24420001
    ctx->pc = 0x23ad14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ad18: 0xa60202e2
    ctx->pc = 0x23ad18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 738), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ad1c: 0x8e0202e4
    ctx->pc = 0x23ad1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x23ad20: 0x2403fff0
    ctx->pc = 0x23ad20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x23ad24: 0x431024
    ctx->pc = 0x23ad24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ad28: 0xae0202e4
    ctx->pc = 0x23ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x23ad2c: 0x2402ffff
    ctx->pc = 0x23ad2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23ad30:
    // 0x23ad30: 0xa60202e0
    ctx->pc = 0x23ad30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 736), (uint16_t)GPR_U32(ctx, 2));
label_23ad34:
    // 0x23ad34: 0x8e0202e4
    ctx->pc = 0x23ad34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_23ad38:
    // 0x23ad38: 0x30420010
    ctx->pc = 0x23ad38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x23ad3c: 0x1040002d
    ctx->pc = 0x23AD3Cu;
    {
        const bool branch_taken_0x23ad3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AD40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x23ad3c) {
            ctx->pc = 0x23ADF4u;
            goto label_23adf4;
        }
    }
    ctx->pc = 0x23AD44u;
    // 0x23ad44: 0x86040288
    ctx->pc = 0x23ad44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23ad48: 0x480000b
    ctx->pc = 0x23AD48u;
    {
        const bool branch_taken_0x23ad48 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23AD4Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x23ad48) {
            ctx->pc = 0x23AD78u;
            goto label_23ad78;
        }
    }
    ctx->pc = 0x23AD50u;
    // 0x23ad50: 0x24631bc0
    ctx->pc = 0x23ad50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x23ad54: 0x24022b00
    ctx->pc = 0x23ad54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23ad58: 0x821018
    ctx->pc = 0x23ad58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ad5c: 0x431021
    ctx->pc = 0x23ad5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ad60: 0xc4400070
    ctx->pc = 0x23ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ad64: 0xe7a00010
    ctx->pc = 0x23ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23ad68: 0xc4400074
    ctx->pc = 0x23ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ad6c: 0xe7a00014
    ctx->pc = 0x23ad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23ad70: 0x10000014
    ctx->pc = 0x23AD70u;
    {
        const bool branch_taken_0x23ad70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AD74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23ad70) {
            ctx->pc = 0x23ADC4u;
            goto label_23adc4;
        }
    }
    ctx->pc = 0x23AD78u;
label_23ad78:
    // 0x23ad78: 0xc6000060
    ctx->pc = 0x23ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ad7c: 0xe7a00010
    ctx->pc = 0x23ad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23ad80: 0xc6000064
    ctx->pc = 0x23ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ad84: 0xe7a00014
    ctx->pc = 0x23ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23ad88: 0xc6000068
    ctx->pc = 0x23ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ad8c: 0xe7a00018
    ctx->pc = 0x23ad8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23ad90: 0xc0b9e4a
    ctx->pc = 0x23AD90u;
    SET_GPR_U32(ctx, 31, 0x23AD98u);
    ctx->pc = 0x23AD94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD98u; }
    }
    if (ctx->pc != 0x23AD98u) { return; }
    ctx->pc = 0x23AD98u;
    // 0x23ad98: 0x3c0141a0
    ctx->pc = 0x23ad98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x23ad9c: 0x4481a000
    ctx->pc = 0x23ad9cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x23ada0: 0x46140002
    ctx->pc = 0x23ada0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x23ada4: 0xc7a10010
    ctx->pc = 0x23ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ada8: 0x46010000
    ctx->pc = 0x23ada8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23adac: 0xe7a00010
    ctx->pc = 0x23adacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23adb0: 0xc0b9dce
    ctx->pc = 0x23ADB0u;
    SET_GPR_U32(ctx, 31, 0x23ADB8u);
    ctx->pc = 0x23ADB4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADB8u; }
    }
    if (ctx->pc != 0x23ADB8u) { return; }
    ctx->pc = 0x23ADB8u;
    // 0x23adb8: 0x46140002
    ctx->pc = 0x23adb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x23adbc: 0xc7a10018
    ctx->pc = 0x23adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23adc0: 0x46010000
    ctx->pc = 0x23adc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23adc4:
    // 0x23adc4: 0xe7a00018
    ctx->pc = 0x23adc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23adc8: 0x200202d
    ctx->pc = 0x23adc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23adcc: 0x27a50010
    ctx->pc = 0x23adccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x23add0: 0xc08ea4a
    ctx->pc = 0x23ADD0u;
    SET_GPR_U32(ctx, 31, 0x23ADD8u);
    ctx->pc = 0x23ADD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x23A928u;
    {
        const uint32_t __entryPc = ctx->pc;
        shoot_missile_0x23a928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADD8u; }
    }
    if (ctx->pc != 0x23ADD8u) { return; }
    ctx->pc = 0x23ADD8u;
    // 0x23add8: 0x24020001
    ctx->pc = 0x23add8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23addc: 0xae020330
    ctx->pc = 0x23addcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x23ade0: 0x8e0202e4
    ctx->pc = 0x23ade0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x23ade4: 0x2403ffef
    ctx->pc = 0x23ade4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x23ade8: 0x431024
    ctx->pc = 0x23ade8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23adec: 0xae0202e4
    ctx->pc = 0x23adecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x23adf0: 0xdfbf0060
    ctx->pc = 0x23adf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23adf4:
    // 0x23adf4: 0xdfb30050
    ctx->pc = 0x23adf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23adf8: 0xdfb20040
    ctx->pc = 0x23adf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23adfc: 0xdfb10030
    ctx->pc = 0x23adfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ae00: 0xdfb00020
    ctx->pc = 0x23ae00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ae04: 0xc7b40070
    ctx->pc = 0x23ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ae08: 0x3e00008
    ctx->pc = 0x23AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AE0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AA54u: goto label_23aa54;
            case 0x23AA78u: goto label_23aa78;
            case 0x23AAB4u: goto label_23aab4;
            case 0x23AB00u: goto label_23ab00;
            case 0x23AB28u: goto label_23ab28;
            case 0x23AB90u: goto label_23ab90;
            case 0x23ABC8u: goto label_23abc8;
            case 0x23ABCCu: goto label_23abcc;
            case 0x23ABF0u: goto label_23abf0;
            case 0x23AC0Cu: goto label_23ac0c;
            case 0x23AC20u: goto label_23ac20;
            case 0x23AC40u: goto label_23ac40;
            case 0x23AC50u: goto label_23ac50;
            case 0x23AC6Cu: goto label_23ac6c;
            case 0x23AC88u: goto label_23ac88;
            case 0x23AC8Cu: goto label_23ac8c;
            case 0x23ACF0u: goto label_23acf0;
            case 0x23AD08u: goto label_23ad08;
            case 0x23AD30u: goto label_23ad30;
            case 0x23AD34u: goto label_23ad34;
            case 0x23AD38u: goto label_23ad38;
            case 0x23AD78u: goto label_23ad78;
            case 0x23ADC4u: goto label_23adc4;
            case 0x23ADF4u: goto label_23adf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AE10u;
}
