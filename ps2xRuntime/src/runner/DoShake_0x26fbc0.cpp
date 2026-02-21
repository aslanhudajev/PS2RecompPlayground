#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoShake
// Address: 0x26fbc0 - 0x26fe08
void DoShake_0x26fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26fbc0u;

    // 0x26fbc0: 0x27bdffb0
    ctx->pc = 0x26fbc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26fbc4: 0xffbf0030
    ctx->pc = 0x26fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26fbc8: 0xffb20020
    ctx->pc = 0x26fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26fbcc: 0xffb10010
    ctx->pc = 0x26fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26fbd0: 0xffb00000
    ctx->pc = 0x26fbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26fbd4: 0xe7b40040
    ctx->pc = 0x26fbd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26fbd8: 0xa0882d
    ctx->pc = 0x26fbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbdc: 0x3c05003c
    ctx->pc = 0x26fbdcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x26fbe0: 0x8ca239a8
    ctx->pc = 0x26fbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 14760)));
    // 0x26fbe4: 0x10400081
    ctx->pc = 0x26FBE4u;
    {
        const bool branch_taken_0x26fbe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26FBE8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26fbe4) {
            ctx->pc = 0x26FDECu;
            goto label_26fdec;
        }
    }
    ctx->pc = 0x26FBECu;
    // 0x26fbec: 0x3c020031
    ctx->pc = 0x26fbecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26fbf0: 0x3c030031
    ctx->pc = 0x26fbf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26fbf4: 0x8c42ff9c
    ctx->pc = 0x26fbf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x26fbf8: 0x8c630024
    ctx->pc = 0x26fbf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x26fbfc: 0x431025
    ctx->pc = 0x26fbfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fc00: 0x1440007b
    ctx->pc = 0x26FC00u;
    {
        const bool branch_taken_0x26fc00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26FC04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x26fc00) {
            ctx->pc = 0x26FDF0u;
            goto label_26fdf0;
        }
    }
    ctx->pc = 0x26FC08u;
    // 0x26fc08: 0x3c04003c
    ctx->pc = 0x26fc08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x26fc0c: 0x3c030031
    ctx->pc = 0x26fc0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26fc10: 0x8c8239b4
    ctx->pc = 0x26fc10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14772)));
    // 0x26fc14: 0x8c63ffbc
    ctx->pc = 0x26fc14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26fc18: 0x431023
    ctx->pc = 0x26fc18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fc1c: 0x4410004
    ctx->pc = 0x26FC1Cu;
    {
        const bool branch_taken_0x26fc1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26FC20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14772), GPR_U32(ctx, 2));
        if (branch_taken_0x26fc1c) {
            ctx->pc = 0x26FC30u;
            goto label_26fc30;
        }
    }
    ctx->pc = 0x26FC24u;
    // 0x26fc24: 0xaca039a8
    ctx->pc = 0x26fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14760), GPR_U32(ctx, 0));
    // 0x26fc28: 0x3c02003c
    ctx->pc = 0x26fc28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fc2c: 0xac4039ac
    ctx->pc = 0x26fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14764), GPR_U32(ctx, 0));
label_26fc30:
    // 0x26fc30: 0x3c04003c
    ctx->pc = 0x26fc30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x26fc34: 0x3c020031
    ctx->pc = 0x26fc34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26fc38: 0x8c8339b0
    ctx->pc = 0x26fc38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14768)));
    // 0x26fc3c: 0x8c42ffbc
    ctx->pc = 0x26fc3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x26fc40: 0x621823
    ctx->pc = 0x26fc40u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26fc44: 0x4610002
    ctx->pc = 0x26FC44u;
    {
        const bool branch_taken_0x26fc44 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x26FC48u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14768), GPR_U32(ctx, 3));
        if (branch_taken_0x26fc44) {
            ctx->pc = 0x26FC50u;
            goto label_26fc50;
        }
    }
    ctx->pc = 0x26FC4Cu;
    // 0x26fc4c: 0xac8039b0
    ctx->pc = 0x26fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14768), GPR_U32(ctx, 0));
label_26fc50:
    // 0x26fc50: 0x3c02003c
    ctx->pc = 0x26fc50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fc54: 0x8c4339a4
    ctx->pc = 0x26fc54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14756)));
    // 0x26fc58: 0x24020001
    ctx->pc = 0x26fc58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fc5c: 0x10620028
    ctx->pc = 0x26FC5Cu;
    {
        const bool branch_taken_0x26fc5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26FC60u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x26fc5c) {
            ctx->pc = 0x26FD00u;
            goto label_26fd00;
        }
    }
    ctx->pc = 0x26FC64u;
    // 0x26fc64: 0x50400005
    ctx->pc = 0x26FC64u;
    {
        const bool branch_taken_0x26fc64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26fc64) {
            ctx->pc = 0x26FC68u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x26FC7Cu;
            goto label_26fc7c;
        }
    }
    ctx->pc = 0x26FC6Cu;
    // 0x26fc6c: 0x10600007
    ctx->pc = 0x26FC6Cu;
    {
        const bool branch_taken_0x26fc6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x26FC70u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x26fc6c) {
            ctx->pc = 0x26FC8Cu;
            goto label_26fc8c;
        }
    }
    ctx->pc = 0x26FC74u;
    // 0x26fc74: 0x1000005f
    ctx->pc = 0x26FC74u;
    {
        const bool branch_taken_0x26fc74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26FC78u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26fc74) {
            ctx->pc = 0x26FDF4u;
            goto label_26fdf4;
        }
    }
    ctx->pc = 0x26FC7Cu;
label_26fc7c:
    // 0x26fc7c: 0x10620031
    ctx->pc = 0x26FC7Cu;
    {
        const bool branch_taken_0x26fc7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26FC80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x26fc7c) {
            ctx->pc = 0x26FD44u;
            goto label_26fd44;
        }
    }
    ctx->pc = 0x26FC84u;
    // 0x26fc84: 0x1000005b
    ctx->pc = 0x26FC84u;
    {
        const bool branch_taken_0x26fc84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26FC88u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26fc84) {
            ctx->pc = 0x26FDF4u;
            goto label_26fdf4;
        }
    }
    ctx->pc = 0x26FC8Cu;
label_26fc8c:
    // 0x26fc8c: 0x3c02003c
    ctx->pc = 0x26fc8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fc90: 0x8c4239b0
    ctx->pc = 0x26fc90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14768)));
    // 0x26fc94: 0x1c400057
    ctx->pc = 0x26FC94u;
    {
        const bool branch_taken_0x26fc94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26FC98u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26fc94) {
            ctx->pc = 0x26FDF4u;
            goto label_26fdf4;
        }
    }
    ctx->pc = 0x26FC9Cu;
    // 0x26fc9c: 0x3c02003c
    ctx->pc = 0x26fc9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fca0: 0xc45439b4
    ctx->pc = 0x26fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fca4: 0x4680a520
    ctx->pc = 0x26fca4u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x26fca8: 0x3c013f29
    ctx->pc = 0x26fca8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16169 << 16));
    // 0x26fcac: 0x3421c920
    ctx->pc = 0x26fcacu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51488));
    // 0x26fcb0: 0x44816000
    ctx->pc = 0x26fcb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26fcb4: 0xc0b5a1a
    ctx->pc = 0x26FCB4u;
    SET_GPR_U32(ctx, 31, 0x26FCBCu);
    ctx->pc = 0x26FCB8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCBCu; }
    }
    if (ctx->pc != 0x26FCBCu) { return; }
    ctx->pc = 0x26FCBCu;
    // 0x26fcbc: 0x46000506
    ctx->pc = 0x26fcbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26fcc0: 0xc0b9dce
    ctx->pc = 0x26FCC0u;
    SET_GPR_U32(ctx, 31, 0x26FCC8u);
    ctx->pc = 0x26FCC4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCC8u; }
    }
    if (ctx->pc != 0x26FCC8u) { return; }
    ctx->pc = 0x26FCC8u;
    // 0x26fcc8: 0x3c10003c
    ctx->pc = 0x26fcc8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x26fccc: 0xc60139b8
    ctx->pc = 0x26fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fcd0: 0x46010002
    ctx->pc = 0x26fcd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26fcd4: 0xc6210000
    ctx->pc = 0x26fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fcd8: 0x46010000
    ctx->pc = 0x26fcd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fcdc: 0xe6200000
    ctx->pc = 0x26fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x26fce0: 0xc0b9e4a
    ctx->pc = 0x26FCE0u;
    SET_GPR_U32(ctx, 31, 0x26FCE8u);
    ctx->pc = 0x26FCE4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCE8u; }
    }
    if (ctx->pc != 0x26FCE8u) { return; }
    ctx->pc = 0x26FCE8u;
    // 0x26fce8: 0xc60139b8
    ctx->pc = 0x26fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fcec: 0x46010002
    ctx->pc = 0x26fcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26fcf0: 0xc6210008
    ctx->pc = 0x26fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fcf4: 0x46010000
    ctx->pc = 0x26fcf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fcf8: 0x1000003c
    ctx->pc = 0x26FCF8u;
    {
        const bool branch_taken_0x26fcf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26FCFCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        if (branch_taken_0x26fcf8) {
            ctx->pc = 0x26FDECu;
            goto label_26fdec;
        }
    }
    ctx->pc = 0x26FD00u;
label_26fd00:
    // 0x26fd00: 0x3c02003c
    ctx->pc = 0x26fd00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fd04: 0x8c4239b0
    ctx->pc = 0x26fd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14768)));
    // 0x26fd08: 0x1c400039
    ctx->pc = 0x26FD08u;
    {
        const bool branch_taken_0x26fd08 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26FD0Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x26fd08) {
            ctx->pc = 0x26FDF0u;
            goto label_26fdf0;
        }
    }
    ctx->pc = 0x26FD10u;
    // 0x26fd10: 0x3c02003c
    ctx->pc = 0x26fd10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fd14: 0xc45439b4
    ctx->pc = 0x26fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fd18: 0x4680a520
    ctx->pc = 0x26fd18u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x26fd1c: 0x3c013f29
    ctx->pc = 0x26fd1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16169 << 16));
    // 0x26fd20: 0x3421c920
    ctx->pc = 0x26fd20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51488));
    // 0x26fd24: 0x44816000
    ctx->pc = 0x26fd24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26fd28: 0xc0b5a1a
    ctx->pc = 0x26FD28u;
    SET_GPR_U32(ctx, 31, 0x26FD30u);
    ctx->pc = 0x26FD2Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD30u; }
    }
    if (ctx->pc != 0x26FD30u) { return; }
    ctx->pc = 0x26FD30u;
    // 0x26fd30: 0x46000506
    ctx->pc = 0x26fd30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26fd34: 0xc0b9dce
    ctx->pc = 0x26FD34u;
    SET_GPR_U32(ctx, 31, 0x26FD3Cu);
    ctx->pc = 0x26FD38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD3Cu; }
    }
    if (ctx->pc != 0x26FD3Cu) { return; }
    ctx->pc = 0x26FD3Cu;
    // 0x26fd3c: 0x1000001f
    ctx->pc = 0x26FD3Cu;
    {
        const bool branch_taken_0x26fd3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26FD40u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x26fd3c) {
            ctx->pc = 0x26FDBCu;
            goto label_26fdbc;
        }
    }
    ctx->pc = 0x26FD44u;
label_26fd44:
    // 0x26fd44: 0x3c02003c
    ctx->pc = 0x26fd44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fd48: 0x8c4239b0
    ctx->pc = 0x26fd48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14768)));
    // 0x26fd4c: 0x5c400029
    ctx->pc = 0x26FD4Cu;
    {
        const bool branch_taken_0x26fd4c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26fd4c) {
            ctx->pc = 0x26FD50u;
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x26FDF4u;
            goto label_26fdf4;
        }
    }
    ctx->pc = 0x26FD54u;
    // 0x26fd54: 0x3c02003c
    ctx->pc = 0x26fd54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fd58: 0xc45439b4
    ctx->pc = 0x26fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fd5c: 0x4680a520
    ctx->pc = 0x26fd5cu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x26fd60: 0x3c013f29
    ctx->pc = 0x26fd60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16169 << 16));
    // 0x26fd64: 0x3421c920
    ctx->pc = 0x26fd64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51488));
    // 0x26fd68: 0x44816000
    ctx->pc = 0x26fd68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26fd6c: 0xc0b5a1a
    ctx->pc = 0x26FD6Cu;
    SET_GPR_U32(ctx, 31, 0x26FD74u);
    ctx->pc = 0x26FD70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD74u; }
    }
    if (ctx->pc != 0x26FD74u) { return; }
    ctx->pc = 0x26FD74u;
    // 0x26fd74: 0x46000506
    ctx->pc = 0x26fd74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26fd78: 0xc0b9dce
    ctx->pc = 0x26FD78u;
    SET_GPR_U32(ctx, 31, 0x26FD80u);
    ctx->pc = 0x26FD7Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD80u; }
    }
    if (ctx->pc != 0x26FD80u) { return; }
    ctx->pc = 0x26FD80u;
    // 0x26fd80: 0x3c10003c
    ctx->pc = 0x26fd80u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x26fd84: 0xc60139b8
    ctx->pc = 0x26fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fd88: 0x46010002
    ctx->pc = 0x26fd88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26fd8c: 0xc6210000
    ctx->pc = 0x26fd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fd90: 0x46010000
    ctx->pc = 0x26fd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fd94: 0xe6200000
    ctx->pc = 0x26fd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x26fd98: 0xc0b9e4a
    ctx->pc = 0x26FD98u;
    SET_GPR_U32(ctx, 31, 0x26FDA0u);
    ctx->pc = 0x26FD9Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDA0u; }
    }
    if (ctx->pc != 0x26FDA0u) { return; }
    ctx->pc = 0x26FDA0u;
    // 0x26fda0: 0xc60139b8
    ctx->pc = 0x26fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fda4: 0x46010002
    ctx->pc = 0x26fda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26fda8: 0xc6210008
    ctx->pc = 0x26fda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fdac: 0x46010000
    ctx->pc = 0x26fdacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fdb0: 0xe6200008
    ctx->pc = 0x26fdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x26fdb4: 0xc0b9dce
    ctx->pc = 0x26FDB4u;
    SET_GPR_U32(ctx, 31, 0x26FDBCu);
    ctx->pc = 0x26FDB8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDBCu; }
    }
    if (ctx->pc != 0x26FDBCu) { return; }
    ctx->pc = 0x26FDBCu;
label_26fdbc:
    // 0x26fdbc: 0xc60139b8
    ctx->pc = 0x26fdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fdc0: 0x46010002
    ctx->pc = 0x26fdc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26fdc4: 0xc6410000
    ctx->pc = 0x26fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fdc8: 0x46010000
    ctx->pc = 0x26fdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fdcc: 0xe6400000
    ctx->pc = 0x26fdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x26fdd0: 0xc0b9e4a
    ctx->pc = 0x26FDD0u;
    SET_GPR_U32(ctx, 31, 0x26FDD8u);
    ctx->pc = 0x26FDD4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDD8u; }
    }
    if (ctx->pc != 0x26FDD8u) { return; }
    ctx->pc = 0x26FDD8u;
    // 0x26fdd8: 0xc60139b8
    ctx->pc = 0x26fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fddc: 0x46010002
    ctx->pc = 0x26fddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26fde0: 0xc6410008
    ctx->pc = 0x26fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fde4: 0x46010000
    ctx->pc = 0x26fde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fde8: 0xe6400008
    ctx->pc = 0x26fde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_26fdec:
    // 0x26fdec: 0xdfbf0030
    ctx->pc = 0x26fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26fdf0:
    // 0x26fdf0: 0xdfb20020
    ctx->pc = 0x26fdf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26fdf4:
    // 0x26fdf4: 0xdfb10010
    ctx->pc = 0x26fdf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fdf8: 0xdfb00000
    ctx->pc = 0x26fdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fdfc: 0xc7b40040
    ctx->pc = 0x26fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fe00: 0x3e00008
    ctx->pc = 0x26FE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FE04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FC30u: goto label_26fc30;
            case 0x26FC50u: goto label_26fc50;
            case 0x26FC7Cu: goto label_26fc7c;
            case 0x26FC8Cu: goto label_26fc8c;
            case 0x26FD00u: goto label_26fd00;
            case 0x26FD44u: goto label_26fd44;
            case 0x26FDBCu: goto label_26fdbc;
            case 0x26FDECu: goto label_26fdec;
            case 0x26FDF0u: goto label_26fdf0;
            case 0x26FDF4u: goto label_26fdf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FE08u;
}
