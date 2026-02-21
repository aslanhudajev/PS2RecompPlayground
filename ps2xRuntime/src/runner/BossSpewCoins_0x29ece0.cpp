#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossSpewCoins
// Address: 0x29ece0 - 0x29f0e8
void BossSpewCoins_0x29ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ece0u;

    // 0x29ece0: 0x27bdff60
    ctx->pc = 0x29ece0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29ece4: 0xffbf0060
    ctx->pc = 0x29ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29ece8: 0xffb40050
    ctx->pc = 0x29ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29ecec: 0xffb30040
    ctx->pc = 0x29ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29ecf0: 0xffb20030
    ctx->pc = 0x29ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29ecf4: 0xffb10020
    ctx->pc = 0x29ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29ecf8: 0xffb00010
    ctx->pc = 0x29ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29ecfc: 0xe7b80090
    ctx->pc = 0x29ecfcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29ed00: 0xe7b70088
    ctx->pc = 0x29ed00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29ed04: 0xe7b60080
    ctx->pc = 0x29ed04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29ed08: 0xe7b50078
    ctx->pc = 0x29ed08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29ed0c: 0xe7b40070
    ctx->pc = 0x29ed0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29ed10: 0x80982d
    ctx->pc = 0x29ed10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed14: 0xa0902d
    ctx->pc = 0x29ed14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed18: 0x46006586
    ctx->pc = 0x29ed18u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x29ed1c: 0x202d
    ctx->pc = 0x29ed1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed20: 0x260282d
    ctx->pc = 0x29ed20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed24: 0x3c0140a0
    ctx->pc = 0x29ed24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x29ed28: 0x44816000
    ctx->pc = 0x29ed28u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29ed2c: 0x24060022
    ctx->pc = 0x29ed2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x29ed30: 0xc09f5fa
    ctx->pc = 0x29ED30u;
    SET_GPR_U32(ctx, 31, 0x29ED38u);
    ctx->pc = 0x29ED34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED38u; }
    }
    if (ctx->pc != 0x29ED38u) { return; }
    ctx->pc = 0x29ED38u;
    // 0x29ed38: 0x40202d
    ctx->pc = 0x29ed38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed3c: 0x3c01447a
    ctx->pc = 0x29ed3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x29ed40: 0x44816000
    ctx->pc = 0x29ed40u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29ed44: 0x282d
    ctx->pc = 0x29ed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed48: 0x46006346
    ctx->pc = 0x29ed48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x29ed4c: 0x44807000
    ctx->pc = 0x29ed4cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x29ed50: 0xc09f780
    ctx->pc = 0x29ED50u;
    SET_GPR_U32(ctx, 31, 0x29ED58u);
    ctx->pc = 0x29ED54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED58u; }
    }
    if (ctx->pc != 0x29ED58u) { return; }
    ctx->pc = 0x29ED58u;
    // 0x29ed58: 0x3c020036
    ctx->pc = 0x29ed58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ed5c: 0x8c43d934
    ctx->pc = 0x29ed5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x29ed60: 0x2402002a
    ctx->pc = 0x29ed60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
    // 0x29ed64: 0x14620007
    ctx->pc = 0x29ED64u;
    {
        const bool branch_taken_0x29ed64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x29ED68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29ed64) {
            ctx->pc = 0x29ED84u;
            goto label_29ed84;
        }
    }
    ctx->pc = 0x29ED6Cu;
    // 0x29ed6c: 0x260202d
    ctx->pc = 0x29ed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed70: 0x240282d
    ctx->pc = 0x29ed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed74: 0xc0a7c3a
    ctx->pc = 0x29ED74u;
    SET_GPR_U32(ctx, 31, 0x29ED7Cu);
    ctx->pc = 0x29ED78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x29F0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SkorneSpewItems_0x29f0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED7Cu; }
    }
    if (ctx->pc != 0x29ED7Cu) { return; }
    ctx->pc = 0x29ED7Cu;
    // 0x29ed7c: 0x100000ce
    ctx->pc = 0x29ED7Cu;
    {
        const bool branch_taken_0x29ed7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29ED80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x29ed7c) {
            ctx->pc = 0x29F0B8u;
            goto label_29f0b8;
        }
    }
    ctx->pc = 0x29ED84u;
label_29ed84:
    // 0x29ed84: 0x8c450028
    ctx->pc = 0x29ed84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29ed88: 0x10a000ca
    ctx->pc = 0x29ED88u;
    {
        const bool branch_taken_0x29ed88 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x29ED8Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
        if (branch_taken_0x29ed88) {
            ctx->pc = 0x29F0B4u;
            goto label_29f0b4;
        }
    }
    ctx->pc = 0x29ED90u;
    // 0x29ed90: 0x2484d818
    ctx->pc = 0x29ed90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957080));
    // 0x29ed94: 0x3c020034
    ctx->pc = 0x29ed94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29ed98: 0x8c42e7f0
    ctx->pc = 0x29ed98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x29ed9c: 0x2403000c
    ctx->pc = 0x29ed9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x29eda0: 0x431018
    ctx->pc = 0x29eda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29eda4: 0x441021
    ctx->pc = 0x29eda4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29eda8: 0x8c420000
    ctx->pc = 0x29eda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29edac: 0x458818
    ctx->pc = 0x29edacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29edb0: 0x12200039
    ctx->pc = 0x29EDB0u;
    {
        const bool branch_taken_0x29edb0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x29EDB4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
        if (branch_taken_0x29edb0) {
            ctx->pc = 0x29EE98u;
            goto label_29ee98;
        }
    }
    ctx->pc = 0x29EDB8u;
    // 0x29edb8: 0x4616b540
    ctx->pc = 0x29edb8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x29edbc: 0x44910000
    ctx->pc = 0x29edbcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x29edc0: 0x46800020
    ctx->pc = 0x29edc0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29edc4: 0x0
    ctx->pc = 0x29edc4u;
    // NOP
    // 0x29edc8: 0x0
    ctx->pc = 0x29edc8u;
    // NOP
    // 0x29edcc: 0x4600ad43
    ctx->pc = 0x29edccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x29edd0: 0x4600b507
    ctx->pc = 0x29edd0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[22]);
    // 0x29edd4: 0x3c013f00
    ctx->pc = 0x29edd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29edd8: 0x44810000
    ctx->pc = 0x29edd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29eddc: 0x4600a802
    ctx->pc = 0x29eddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29ede0: 0x4600a500
    ctx->pc = 0x29ede0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29ede4: 0x1a20002c
    ctx->pc = 0x29EDE4u;
    {
        const bool branch_taken_0x29ede4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x29EDE8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29ede4) {
            ctx->pc = 0x29EE98u;
            goto label_29ee98;
        }
    }
    ctx->pc = 0x29EDECu;
    // 0x29edec: 0x3c013dcc
    ctx->pc = 0x29edecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29edf0: 0x3421cccd
    ctx->pc = 0x29edf0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29edf4: 0x4481c000
    ctx->pc = 0x29edf4u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
    // 0x29edf8: 0x3c013f59
    ctx->pc = 0x29edf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16217 << 16));
    // 0x29edfc: 0x3421999a
    ctx->pc = 0x29edfcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x29ee00: 0x4481b800
    ctx->pc = 0x29ee00u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x29ee04: 0x3c14003b
    ctx->pc = 0x29ee04u;
    SET_GPR_U32(ctx, 20, ((uint32_t)59 << 16));
label_29ee08:
    // 0x29ee08: 0xc0b5c06
    ctx->pc = 0x29EE08u;
    SET_GPR_U32(ctx, 31, 0x29EE10u);
    ctx->pc = 0x29EE0Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE10u; }
    }
    if (ctx->pc != 0x29EE10u) { return; }
    ctx->pc = 0x29EE10u;
    // 0x29ee10: 0x46170000
    ctx->pc = 0x29ee10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x29ee14: 0xc6410000
    ctx->pc = 0x29ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ee18: 0x46010002
    ctx->pc = 0x29ee18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ee1c: 0xe7a00000
    ctx->pc = 0x29ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ee20: 0xc0b5c06
    ctx->pc = 0x29EE20u;
    SET_GPR_U32(ctx, 31, 0x29EE28u);
    ctx->pc = 0x29EE24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE28u; }
    }
    if (ctx->pc != 0x29EE28u) { return; }
    ctx->pc = 0x29EE28u;
    // 0x29ee28: 0x46170000
    ctx->pc = 0x29ee28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x29ee2c: 0xc6410004
    ctx->pc = 0x29ee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ee30: 0x46010002
    ctx->pc = 0x29ee30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ee34: 0xe7a00004
    ctx->pc = 0x29ee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29ee38: 0xc0b5c06
    ctx->pc = 0x29EE38u;
    SET_GPR_U32(ctx, 31, 0x29EE40u);
    ctx->pc = 0x29EE3Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE40u; }
    }
    if (ctx->pc != 0x29EE40u) { return; }
    ctx->pc = 0x29EE40u;
    // 0x29ee40: 0x46170000
    ctx->pc = 0x29ee40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x29ee44: 0xc6410008
    ctx->pc = 0x29ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ee48: 0x46010002
    ctx->pc = 0x29ee48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ee4c: 0xe7a00008
    ctx->pc = 0x29ee4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29ee50: 0x240202d
    ctx->pc = 0x29ee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee54: 0x3a0282d
    ctx->pc = 0x29ee54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee58: 0xc0b57e6
    ctx->pc = 0x29EE58u;
    SET_GPR_U32(ctx, 31, 0x29EE60u);
    ctx->pc = 0x29EE5Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE60u; }
    }
    if (ctx->pc != 0x29EE60u) { return; }
    ctx->pc = 0x29EE60u;
    // 0x29ee60: 0x24040001
    ctx->pc = 0x29ee60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ee64: 0x24050001
    ctx->pc = 0x29ee64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ee68: 0x2686e498
    ctx->pc = 0x29ee68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 4294960280));
    // 0x29ee6c: 0x240701f4
    ctx->pc = 0x29ee6cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 500));
    // 0x29ee70: 0x402d
    ctx->pc = 0x29ee70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee74: 0x44806000
    ctx->pc = 0x29ee74u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x29ee78: 0x260482d
    ctx->pc = 0x29ee78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee7c: 0xc0a7a28
    ctx->pc = 0x29EE7Cu;
    SET_GPR_U32(ctx, 31, 0x29EE84u);
    ctx->pc = 0x29EE80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29E8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartSpewItem_0x29e8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE84u; }
    }
    if (ctx->pc != 0x29EE84u) { return; }
    ctx->pc = 0x29EE84u;
    // 0x29ee84: 0x26100001
    ctx->pc = 0x29ee84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x29ee88: 0x211102a
    ctx->pc = 0x29ee88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x29ee8c: 0x1440ffde
    ctx->pc = 0x29EE8Cu;
    {
        const bool branch_taken_0x29ee8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29EE90u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        if (branch_taken_0x29ee8c) {
            ctx->pc = 0x29EE08u;
            goto label_29ee08;
        }
    }
    ctx->pc = 0x29EE94u;
    // 0x29ee94: 0x3c040036
    ctx->pc = 0x29ee94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_29ee98:
    // 0x29ee98: 0x2484d818
    ctx->pc = 0x29ee98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957080));
    // 0x29ee9c: 0x3c020034
    ctx->pc = 0x29ee9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29eea0: 0x8c42e7f0
    ctx->pc = 0x29eea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x29eea4: 0x2403000c
    ctx->pc = 0x29eea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x29eea8: 0x431018
    ctx->pc = 0x29eea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29eeac: 0x822021
    ctx->pc = 0x29eeacu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29eeb0: 0x3c020031
    ctx->pc = 0x29eeb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29eeb4: 0x8c830004
    ctx->pc = 0x29eeb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29eeb8: 0x8c420028
    ctx->pc = 0x29eeb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29eebc: 0x628818
    ctx->pc = 0x29eebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29eec0: 0x12200039
    ctx->pc = 0x29EEC0u;
    {
        const bool branch_taken_0x29eec0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x29EEC4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
        if (branch_taken_0x29eec0) {
            ctx->pc = 0x29EFA8u;
            goto label_29efa8;
        }
    }
    ctx->pc = 0x29EEC8u;
    // 0x29eec8: 0x4616b540
    ctx->pc = 0x29eec8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x29eecc: 0x44910000
    ctx->pc = 0x29eeccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x29eed0: 0x46800020
    ctx->pc = 0x29eed0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29eed4: 0x0
    ctx->pc = 0x29eed4u;
    // NOP
    // 0x29eed8: 0x0
    ctx->pc = 0x29eed8u;
    // NOP
    // 0x29eedc: 0x4600ad43
    ctx->pc = 0x29eedcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x29eee0: 0x4600b507
    ctx->pc = 0x29eee0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[22]);
    // 0x29eee4: 0x3c013f00
    ctx->pc = 0x29eee4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29eee8: 0x44810000
    ctx->pc = 0x29eee8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29eeec: 0x4600a802
    ctx->pc = 0x29eeecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29eef0: 0x4600a500
    ctx->pc = 0x29eef0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29eef4: 0x1a20002c
    ctx->pc = 0x29EEF4u;
    {
        const bool branch_taken_0x29eef4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x29EEF8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29eef4) {
            ctx->pc = 0x29EFA8u;
            goto label_29efa8;
        }
    }
    ctx->pc = 0x29EEFCu;
    // 0x29eefc: 0x3c013dcc
    ctx->pc = 0x29eefcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29ef00: 0x3421cccd
    ctx->pc = 0x29ef00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29ef04: 0x4481c000
    ctx->pc = 0x29ef04u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
    // 0x29ef08: 0x3c013f4c
    ctx->pc = 0x29ef08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x29ef0c: 0x3421cccd
    ctx->pc = 0x29ef0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29ef10: 0x4481b800
    ctx->pc = 0x29ef10u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x29ef14: 0x3c14003b
    ctx->pc = 0x29ef14u;
    SET_GPR_U32(ctx, 20, ((uint32_t)59 << 16));
label_29ef18:
    // 0x29ef18: 0xc0b5c06
    ctx->pc = 0x29EF18u;
    SET_GPR_U32(ctx, 31, 0x29EF20u);
    ctx->pc = 0x29EF1Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EF20u; }
    }
    if (ctx->pc != 0x29EF20u) { return; }
    ctx->pc = 0x29EF20u;
    // 0x29ef20: 0x46170000
    ctx->pc = 0x29ef20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x29ef24: 0xc6410000
    ctx->pc = 0x29ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ef28: 0x46010002
    ctx->pc = 0x29ef28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ef2c: 0xe7a00000
    ctx->pc = 0x29ef2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ef30: 0xc0b5c06
    ctx->pc = 0x29EF30u;
    SET_GPR_U32(ctx, 31, 0x29EF38u);
    ctx->pc = 0x29EF34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EF38u; }
    }
    if (ctx->pc != 0x29EF38u) { return; }
    ctx->pc = 0x29EF38u;
    // 0x29ef38: 0x46170000
    ctx->pc = 0x29ef38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x29ef3c: 0xc6410004
    ctx->pc = 0x29ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ef40: 0x46010002
    ctx->pc = 0x29ef40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ef44: 0xe7a00004
    ctx->pc = 0x29ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29ef48: 0xc0b5c06
    ctx->pc = 0x29EF48u;
    SET_GPR_U32(ctx, 31, 0x29EF50u);
    ctx->pc = 0x29EF4Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EF50u; }
    }
    if (ctx->pc != 0x29EF50u) { return; }
    ctx->pc = 0x29EF50u;
    // 0x29ef50: 0x46170000
    ctx->pc = 0x29ef50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x29ef54: 0xc6410008
    ctx->pc = 0x29ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ef58: 0x46010002
    ctx->pc = 0x29ef58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ef5c: 0xe7a00008
    ctx->pc = 0x29ef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29ef60: 0x240202d
    ctx->pc = 0x29ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef64: 0x3a0282d
    ctx->pc = 0x29ef64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef68: 0xc0b57e6
    ctx->pc = 0x29EF68u;
    SET_GPR_U32(ctx, 31, 0x29EF70u);
    ctx->pc = 0x29EF6Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EF70u; }
    }
    if (ctx->pc != 0x29EF70u) { return; }
    ctx->pc = 0x29EF70u;
    // 0x29ef70: 0x24040001
    ctx->pc = 0x29ef70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ef74: 0x24050001
    ctx->pc = 0x29ef74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ef78: 0x2686e4a8
    ctx->pc = 0x29ef78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 4294960296));
    // 0x29ef7c: 0x240703e8
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x29ef80: 0x402d
    ctx->pc = 0x29ef80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef84: 0x44806000
    ctx->pc = 0x29ef84u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x29ef88: 0x260482d
    ctx->pc = 0x29ef88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef8c: 0xc0a7a28
    ctx->pc = 0x29EF8Cu;
    SET_GPR_U32(ctx, 31, 0x29EF94u);
    ctx->pc = 0x29EF90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29E8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartSpewItem_0x29e8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EF94u; }
    }
    if (ctx->pc != 0x29EF94u) { return; }
    ctx->pc = 0x29EF94u;
    // 0x29ef94: 0x26100001
    ctx->pc = 0x29ef94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x29ef98: 0x211102a
    ctx->pc = 0x29ef98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x29ef9c: 0x1440ffde
    ctx->pc = 0x29EF9Cu;
    {
        const bool branch_taken_0x29ef9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29EFA0u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        if (branch_taken_0x29ef9c) {
            ctx->pc = 0x29EF18u;
            goto label_29ef18;
        }
    }
    ctx->pc = 0x29EFA4u;
    // 0x29efa4: 0x3c040036
    ctx->pc = 0x29efa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_29efa8:
    // 0x29efa8: 0x2484d818
    ctx->pc = 0x29efa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957080));
    // 0x29efac: 0x3c020034
    ctx->pc = 0x29efacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29efb0: 0x8c42e7f0
    ctx->pc = 0x29efb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x29efb4: 0x2403000c
    ctx->pc = 0x29efb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x29efb8: 0x431018
    ctx->pc = 0x29efb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29efbc: 0x822021
    ctx->pc = 0x29efbcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29efc0: 0x3c020031
    ctx->pc = 0x29efc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29efc4: 0x8c830008
    ctx->pc = 0x29efc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29efc8: 0x8c420028
    ctx->pc = 0x29efc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29efcc: 0x628818
    ctx->pc = 0x29efccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29efd0: 0x12200039
    ctx->pc = 0x29EFD0u;
    {
        const bool branch_taken_0x29efd0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x29EFD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x29efd0) {
            ctx->pc = 0x29F0B8u;
            goto label_29f0b8;
        }
    }
    ctx->pc = 0x29EFD8u;
    // 0x29efd8: 0x4616b540
    ctx->pc = 0x29efd8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x29efdc: 0x44910000
    ctx->pc = 0x29efdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x29efe0: 0x46800020
    ctx->pc = 0x29efe0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29efe4: 0x0
    ctx->pc = 0x29efe4u;
    // NOP
    // 0x29efe8: 0x0
    ctx->pc = 0x29efe8u;
    // NOP
    // 0x29efec: 0x4600ad43
    ctx->pc = 0x29efecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x29eff0: 0x4600b507
    ctx->pc = 0x29eff0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[22]);
    // 0x29eff4: 0x3c013f00
    ctx->pc = 0x29eff4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29eff8: 0x44810000
    ctx->pc = 0x29eff8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29effc: 0x4600a802
    ctx->pc = 0x29effcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29f000: 0x4600a500
    ctx->pc = 0x29f000u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29f004: 0x1a20002c
    ctx->pc = 0x29F004u;
    {
        const bool branch_taken_0x29f004 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x29F008u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29f004) {
            ctx->pc = 0x29F0B8u;
            goto label_29f0b8;
        }
    }
    ctx->pc = 0x29F00Cu;
    // 0x29f00c: 0x3c013dcc
    ctx->pc = 0x29f00cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x29f010: 0x3421cccd
    ctx->pc = 0x29f010u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29f014: 0x4481b800
    ctx->pc = 0x29f014u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x29f018: 0x3c013f40
    ctx->pc = 0x29f018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x29f01c: 0x4481b000
    ctx->pc = 0x29f01cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x29f020: 0x3c14003b
    ctx->pc = 0x29f020u;
    SET_GPR_U32(ctx, 20, ((uint32_t)59 << 16));
    // 0x29f024: 0x0
    ctx->pc = 0x29f024u;
    // NOP
label_29f028:
    // 0x29f028: 0xc0b5c06
    ctx->pc = 0x29F028u;
    SET_GPR_U32(ctx, 31, 0x29F030u);
    ctx->pc = 0x29F02Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F030u; }
    }
    if (ctx->pc != 0x29F030u) { return; }
    ctx->pc = 0x29F030u;
    // 0x29f030: 0x46160000
    ctx->pc = 0x29f030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x29f034: 0xc6410000
    ctx->pc = 0x29f034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f038: 0x46010002
    ctx->pc = 0x29f038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29f03c: 0xe7a00000
    ctx->pc = 0x29f03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f040: 0xc0b5c06
    ctx->pc = 0x29F040u;
    SET_GPR_U32(ctx, 31, 0x29F048u);
    ctx->pc = 0x29F044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F048u; }
    }
    if (ctx->pc != 0x29F048u) { return; }
    ctx->pc = 0x29F048u;
    // 0x29f048: 0x46160000
    ctx->pc = 0x29f048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x29f04c: 0xc6410004
    ctx->pc = 0x29f04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f050: 0x46010002
    ctx->pc = 0x29f050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29f054: 0xe7a00004
    ctx->pc = 0x29f054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f058: 0xc0b5c06
    ctx->pc = 0x29F058u;
    SET_GPR_U32(ctx, 31, 0x29F060u);
    ctx->pc = 0x29F05Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F060u; }
    }
    if (ctx->pc != 0x29F060u) { return; }
    ctx->pc = 0x29F060u;
    // 0x29f060: 0x46160000
    ctx->pc = 0x29f060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x29f064: 0xc6410008
    ctx->pc = 0x29f064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f068: 0x46010002
    ctx->pc = 0x29f068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29f06c: 0xe7a00008
    ctx->pc = 0x29f06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29f070: 0x3a0202d
    ctx->pc = 0x29f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f074: 0x3a0282d
    ctx->pc = 0x29f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f078: 0xc0b57e6
    ctx->pc = 0x29F078u;
    SET_GPR_U32(ctx, 31, 0x29F080u);
    ctx->pc = 0x29F07Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F080u; }
    }
    if (ctx->pc != 0x29F080u) { return; }
    ctx->pc = 0x29F080u;
    // 0x29f080: 0x24040001
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f084: 0x24050001
    ctx->pc = 0x29f084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f088: 0x2686e4b8
    ctx->pc = 0x29f088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 4294960312));
    // 0x29f08c: 0x24071388
    ctx->pc = 0x29f08cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5000));
    // 0x29f090: 0x402d
    ctx->pc = 0x29f090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f094: 0x44806000
    ctx->pc = 0x29f094u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x29f098: 0x260482d
    ctx->pc = 0x29f098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f09c: 0xc0a7a28
    ctx->pc = 0x29F09Cu;
    SET_GPR_U32(ctx, 31, 0x29F0A4u);
    ctx->pc = 0x29F0A0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29E8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartSpewItem_0x29e8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F0A4u; }
    }
    if (ctx->pc != 0x29F0A4u) { return; }
    ctx->pc = 0x29F0A4u;
    // 0x29f0a4: 0x26100001
    ctx->pc = 0x29f0a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x29f0a8: 0x211102a
    ctx->pc = 0x29f0a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x29f0ac: 0x1440ffde
    ctx->pc = 0x29F0ACu;
    {
        const bool branch_taken_0x29f0ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29F0B0u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        if (branch_taken_0x29f0ac) {
            ctx->pc = 0x29F028u;
            goto label_29f028;
        }
    }
    ctx->pc = 0x29F0B4u;
label_29f0b4:
    // 0x29f0b4: 0xdfbf0060
    ctx->pc = 0x29f0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29f0b8:
    // 0x29f0b8: 0xdfb40050
    ctx->pc = 0x29f0b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29f0bc: 0xdfb30040
    ctx->pc = 0x29f0bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f0c0: 0xdfb20030
    ctx->pc = 0x29f0c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f0c4: 0xdfb10020
    ctx->pc = 0x29f0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f0c8: 0xdfb00010
    ctx->pc = 0x29f0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f0cc: 0xc7b80090
    ctx->pc = 0x29f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29f0d0: 0xc7b70088
    ctx->pc = 0x29f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29f0d4: 0xc7b60080
    ctx->pc = 0x29f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29f0d8: 0xc7b50078
    ctx->pc = 0x29f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29f0dc: 0xc7b40070
    ctx->pc = 0x29f0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f0e0: 0x3e00008
    ctx->pc = 0x29F0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F0E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29ED84u: goto label_29ed84;
            case 0x29EE08u: goto label_29ee08;
            case 0x29EE98u: goto label_29ee98;
            case 0x29EF18u: goto label_29ef18;
            case 0x29EFA8u: goto label_29efa8;
            case 0x29F028u: goto label_29f028;
            case 0x29F0B4u: goto label_29f0b4;
            case 0x29F0B8u: goto label_29f0b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29F0E8u;
}
