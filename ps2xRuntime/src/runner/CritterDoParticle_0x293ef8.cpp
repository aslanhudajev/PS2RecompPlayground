#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoParticle
// Address: 0x293ef8 - 0x2940e8
void CritterDoParticle_0x293ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293ef8u;

    // 0x293ef8: 0x27bdffa0
    ctx->pc = 0x293ef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x293efc: 0xffbf0030
    ctx->pc = 0x293efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x293f00: 0xffb20020
    ctx->pc = 0x293f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x293f04: 0xffb10010
    ctx->pc = 0x293f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293f08: 0xffb00000
    ctx->pc = 0x293f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293f0c: 0xe7b60050
    ctx->pc = 0x293f0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x293f10: 0xe7b50048
    ctx->pc = 0x293f10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x293f14: 0xe7b40040
    ctx->pc = 0x293f14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x293f18: 0xa0882d
    ctx->pc = 0x293f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f1c: 0x8e230000
    ctx->pc = 0x293f1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293f20: 0x3c020f00
    ctx->pc = 0x293f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3840 << 16));
    // 0x293f24: 0x623824
    ctx->pc = 0x293f24u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293f28: 0x8e320008
    ctx->pc = 0x293f28u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x293f2c: 0xc6210040
    ctx->pc = 0x293f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293f30: 0x3c0141f0
    ctx->pc = 0x293f30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x293f34: 0x44810000
    ctx->pc = 0x293f34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x293f38: 0x46000d02
    ctx->pc = 0x293f38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x293f3c: 0x86220046
    ctx->pc = 0x293f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x293f40: 0x4482a800
    ctx->pc = 0x293f40u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x293f44: 0x4680ad60
    ctx->pc = 0x293f44u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x293f48: 0x3c013c23
    ctx->pc = 0x293f48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x293f4c: 0x3421d70a
    ctx->pc = 0x293f4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x293f50: 0x44810000
    ctx->pc = 0x293f50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x293f54: 0x4600ad42
    ctx->pc = 0x293f54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x293f58: 0x30634000
    ctx->pc = 0x293f58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x293f5c: 0x10600009
    ctx->pc = 0x293F5Cu;
    {
        const bool branch_taken_0x293f5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x293F60u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        if (branch_taken_0x293f5c) {
            ctx->pc = 0x293F84u;
            goto label_293f84;
        }
    }
    ctx->pc = 0x293F64u;
    // 0x293f64: 0x4c00007
    ctx->pc = 0x293F64u;
    {
        const bool branch_taken_0x293f64 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x293F68u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x293f64) {
            ctx->pc = 0x293F84u;
            goto label_293f84;
        }
    }
    ctx->pc = 0x293F6Cu;
    // 0x293f6c: 0x24630eb0
    ctx->pc = 0x293f6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x293f70: 0x240200f0
    ctx->pc = 0x293f70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x293f74: 0xc21018
    ctx->pc = 0x293f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293f78: 0x431021
    ctx->pc = 0x293f78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293f7c: 0x10000004
    ctx->pc = 0x293F7Cu;
    {
        const bool branch_taken_0x293f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x293F80u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        if (branch_taken_0x293f7c) {
            ctx->pc = 0x293F90u;
            goto label_293f90;
        }
    }
    ctx->pc = 0x293F84u;
label_293f84:
    // 0x293f84: 0x8c8500dc
    ctx->pc = 0x293f84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x293f88: 0x50a00001
    ctx->pc = 0x293F88u;
    {
        const bool branch_taken_0x293f88 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x293f88) {
            ctx->pc = 0x293F8Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->pc = 0x293F90u;
            goto label_293f90;
        }
    }
    ctx->pc = 0x293F90u;
label_293f90:
    // 0x293f90: 0x3c020100
    ctx->pc = 0x293f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x293f94: 0x10e2001d
    ctx->pc = 0x293F94u;
    {
        const bool branch_taken_0x293f94 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x293F98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
        if (branch_taken_0x293f94) {
            ctx->pc = 0x29400Cu;
            goto label_29400c;
        }
    }
    ctx->pc = 0x293F9Cu;
    // 0x293f9c: 0x14e2001c
    ctx->pc = 0x293F9Cu;
    {
        const bool branch_taken_0x293f9c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x293FA0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x293f9c) {
            ctx->pc = 0x294010u;
            goto label_294010;
        }
    }
    ctx->pc = 0x293FA4u;
    // 0x293fa4: 0x24842550
    ctx->pc = 0x293fa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x293fa8: 0x302d
    ctx->pc = 0x293fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fac: 0xc0b27fe
    ctx->pc = 0x293FACu;
    SET_GPR_U32(ctx, 31, 0x293FB4u);
    ctx->pc = 0x293FB0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C9FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPsysDefault_0x2c9ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293FB4u; }
    }
    if (ctx->pc != 0x293FB4u) { return; }
    ctx->pc = 0x293FB4u;
    // 0x293fb4: 0x40802d
    ctx->pc = 0x293fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fb8: 0x12000021
    ctx->pc = 0x293FB8u;
    {
        const bool branch_taken_0x293fb8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x293FBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293fb8) {
            ctx->pc = 0x294040u;
            goto label_294040;
        }
    }
    ctx->pc = 0x293FC0u;
    // 0x293fc0: 0x3c013e4c
    ctx->pc = 0x293fc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x293fc4: 0x3421cccd
    ctx->pc = 0x293fc4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x293fc8: 0x44816000
    ctx->pc = 0x293fc8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x293fcc: 0xc0b25f6
    ctx->pc = 0x293FCCu;
    SET_GPR_U32(ctx, 31, 0x293FD4u);
    ctx->pc = 0x293FD0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C97D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTime_0x2c97d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293FD4u; }
    }
    if (ctx->pc != 0x293FD4u) { return; }
    ctx->pc = 0x293FD4u;
    // 0x293fd4: 0x200202d
    ctx->pc = 0x293fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fd8: 0x24050880
    ctx->pc = 0x293fd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2176));
    // 0x293fdc: 0xc0b41b8
    ctx->pc = 0x293FDCu;
    SET_GPR_U32(ctx, 31, 0x293FE4u);
    ctx->pc = 0x293FE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293FE4u; }
    }
    if (ctx->pc != 0x293FE4u) { return; }
    ctx->pc = 0x293FE4u;
    // 0x293fe4: 0x200202d
    ctx->pc = 0x293fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fe8: 0x24050003
    ctx->pc = 0x293fe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x293fec: 0x3c013f80
    ctx->pc = 0x293fecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x293ff0: 0x44816000
    ctx->pc = 0x293ff0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x293ff4: 0x46006346
    ctx->pc = 0x293ff4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x293ff8: 0x44807800
    ctx->pc = 0x293ff8u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 0);
    // 0x293ffc: 0xc0b26a6
    ctx->pc = 0x293FFCu;
    SET_GPR_U32(ctx, 31, 0x294004u);
    ctx->pc = 0x294000u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294004u; }
    }
    if (ctx->pc != 0x294004u) { return; }
    ctx->pc = 0x294004u;
    // 0x294004: 0x1000000c
    ctx->pc = 0x294004u;
    {
        const bool branch_taken_0x294004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x294004) {
            ctx->pc = 0x294038u;
            goto label_294038;
        }
    }
    ctx->pc = 0x29400Cu;
label_29400c:
    // 0x29400c: 0x3c04003a
    ctx->pc = 0x29400cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_294010:
    // 0x294010: 0x24842550
    ctx->pc = 0x294010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x294014: 0x302d
    ctx->pc = 0x294014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294018: 0xc0b27fe
    ctx->pc = 0x294018u;
    SET_GPR_U32(ctx, 31, 0x294020u);
    ctx->pc = 0x29401Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C9FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPsysDefault_0x2c9ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294020u; }
    }
    if (ctx->pc != 0x294020u) { return; }
    ctx->pc = 0x294020u;
    // 0x294020: 0x40802d
    ctx->pc = 0x294020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294024: 0x200202d
    ctx->pc = 0x294024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294028: 0x3c013f00
    ctx->pc = 0x294028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29402c: 0x44816000
    ctx->pc = 0x29402cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x294030: 0xc0b25f6
    ctx->pc = 0x294030u;
    SET_GPR_U32(ctx, 31, 0x294038u);
    ctx->pc = 0x294034u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C97D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTime_0x2c97d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294038u; }
    }
    if (ctx->pc != 0x294038u) { return; }
    ctx->pc = 0x294038u;
label_294038:
    // 0x294038: 0x5600000c
    ctx->pc = 0x294038u;
    {
        const bool branch_taken_0x294038 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x294038) {
            ctx->pc = 0x29403Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29406Cu;
            goto label_29406c;
        }
    }
    ctx->pc = 0x294040u;
label_294040:
    // 0x294040: 0x3c04003b
    ctx->pc = 0x294040u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x294044: 0x2484e220
    ctx->pc = 0x294044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959648));
    // 0x294048: 0xdfbf0030
    ctx->pc = 0x294048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29404c: 0xdfb20020
    ctx->pc = 0x29404cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294050: 0xdfb10010
    ctx->pc = 0x294050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294054: 0xdfb00000
    ctx->pc = 0x294054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294058: 0xc7b60050
    ctx->pc = 0x294058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29405c: 0xc7b50048
    ctx->pc = 0x29405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x294060: 0xc7b40040
    ctx->pc = 0x294060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x294064: 0x80b492e
    ctx->pc = 0x294064u;
    ctx->pc = 0x294068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x29406Cu;
label_29406c:
    // 0x29406c: 0xe6000030
    ctx->pc = 0x29406cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x294070: 0xc6200034
    ctx->pc = 0x294070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294074: 0xe6000034
    ctx->pc = 0x294074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x294078: 0xc6200038
    ctx->pc = 0x294078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29407c: 0xe6000038
    ctx->pc = 0x29407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x294080: 0x200202d
    ctx->pc = 0x294080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294084: 0xc0b2716
    ctx->pc = 0x294084u;
    SET_GPR_U32(ctx, 31, 0x29408Cu);
    ctx->pc = 0x294088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTex_0x2c9c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29408Cu; }
    }
    if (ctx->pc != 0x29408Cu) { return; }
    ctx->pc = 0x29408Cu;
    // 0x29408c: 0x200202d
    ctx->pc = 0x29408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294090: 0x4600a306
    ctx->pc = 0x294090u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x294094: 0x4600a346
    ctx->pc = 0x294094u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x294098: 0x4600a386
    ctx->pc = 0x294098u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x29409c: 0xc0b2646
    ctx->pc = 0x29409Cu;
    SET_GPR_U32(ctx, 31, 0x2940A4u);
    ctx->pc = 0x2940A0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C9918u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetERate4_0x2c9918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2940A4u; }
    }
    if (ctx->pc != 0x2940A4u) { return; }
    ctx->pc = 0x2940A4u;
    // 0x2940a4: 0x200202d
    ctx->pc = 0x2940a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940a8: 0x3c013d0b
    ctx->pc = 0x2940a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15627 << 16));
    // 0x2940ac: 0x34214396
    ctx->pc = 0x2940acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 17302));
    // 0x2940b0: 0x44816800
    ctx->pc = 0x2940b0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2940b4: 0xc0b25a6
    ctx->pc = 0x2940B4u;
    SET_GPR_U32(ctx, 31, 0x2940BCu);
    ctx->pc = 0x2940B8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2C9698u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetETime_0x2c9698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2940BCu; }
    }
    if (ctx->pc != 0x2940BCu) { return; }
    ctx->pc = 0x2940BCu;
    // 0x2940bc: 0x200202d
    ctx->pc = 0x2940bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940c0: 0x4600ab06
    ctx->pc = 0x2940c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2940c4: 0xdfbf0030
    ctx->pc = 0x2940c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2940c8: 0xdfb20020
    ctx->pc = 0x2940c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2940cc: 0xdfb10010
    ctx->pc = 0x2940ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2940d0: 0xdfb00000
    ctx->pc = 0x2940d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2940d4: 0xc7b60050
    ctx->pc = 0x2940d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2940d8: 0xc7b50048
    ctx->pc = 0x2940d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2940dc: 0xc7b40040
    ctx->pc = 0x2940dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2940e0: 0x80b2664
    ctx->pc = 0x2940E0u;
    ctx->pc = 0x2940E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2C9990u;
    MBPsysSetPSpeed_0x2c9990(rdram, ctx, runtime); return;
    ctx->pc = 0x2940E8u;
}
