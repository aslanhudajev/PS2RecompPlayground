#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossGenerateEnemy
// Address: 0x29dd40 - 0x29de8c
void BossGenerateEnemy_0x29dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29dd40u;

    // 0x29dd40: 0x27bdff60
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29dd44: 0xffbf0080
    ctx->pc = 0x29dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29dd48: 0xffb50070
    ctx->pc = 0x29dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x29dd4c: 0xffb40060
    ctx->pc = 0x29dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x29dd50: 0xffb30050
    ctx->pc = 0x29dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x29dd54: 0xffb20040
    ctx->pc = 0x29dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x29dd58: 0xffb10030
    ctx->pc = 0x29dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29dd5c: 0xffb00020
    ctx->pc = 0x29dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29dd60: 0xe7b40090
    ctx->pc = 0x29dd60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29dd64: 0x3c020036
    ctx->pc = 0x29dd64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29dd68: 0x8c43d934
    ctx->pc = 0x29dd68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x29dd6c: 0x2402002c
    ctx->pc = 0x29dd6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x29dd70: 0x1462003c
    ctx->pc = 0x29DD70u;
    {
        const bool branch_taken_0x29dd70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x29DD74u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29dd70) {
            ctx->pc = 0x29DE64u;
            goto label_29de64;
        }
    }
    ctx->pc = 0x29DD78u;
    // 0x29dd78: 0x902d
    ctx->pc = 0x29dd78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd7c: 0x27b30010
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
    // 0x29dd80: 0x3c020036
    ctx->pc = 0x29dd80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29dd84: 0x2455d810
    ctx->pc = 0x29dd84u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x29dd88: 0x3c014040
    ctx->pc = 0x29dd88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x29dd8c: 0x4481a000
    ctx->pc = 0x29dd8cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29dd90: 0x3c020033
    ctx->pc = 0x29dd90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x29dd94: 0x2454dfd0
    ctx->pc = 0x29dd94u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294959056));
label_29dd98:
    // 0x29dd98: 0x121080
    ctx->pc = 0x29dd98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x29dd9c: 0x551021
    ctx->pc = 0x29dd9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29dda0: 0x26240020
    ctx->pc = 0x29dda0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x29dda4: 0x260282d
    ctx->pc = 0x29dda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dda8: 0xc0b57e6
    ctx->pc = 0x29DDA8u;
    SET_GPR_U32(ctx, 31, 0x29DDB0u);
    ctx->pc = 0x29DDACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DDB0u; }
    }
    if (ctx->pc != 0x29DDB0u) { return; }
    ctx->pc = 0x29DDB0u;
    // 0x29ddb0: 0xc7a00010
    ctx->pc = 0x29ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ddb4: 0x46140002
    ctx->pc = 0x29ddb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29ddb8: 0xc6210030
    ctx->pc = 0x29ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ddbc: 0x46010000
    ctx->pc = 0x29ddbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ddc0: 0xe7a00000
    ctx->pc = 0x29ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ddc4: 0xc7a00014
    ctx->pc = 0x29ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ddc8: 0x46140002
    ctx->pc = 0x29ddc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29ddcc: 0xc6210034
    ctx->pc = 0x29ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ddd0: 0x46010000
    ctx->pc = 0x29ddd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ddd4: 0xe7a00004
    ctx->pc = 0x29ddd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29ddd8: 0xc7a00018
    ctx->pc = 0x29ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dddc: 0x46140002
    ctx->pc = 0x29dddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29dde0: 0xc6210038
    ctx->pc = 0x29dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dde4: 0x46010000
    ctx->pc = 0x29dde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29dde8: 0xe7a00008
    ctx->pc = 0x29dde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29ddec: 0x3a0202d
    ctx->pc = 0x29ddecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddf0: 0x2405001b
    ctx->pc = 0x29ddf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 27));
    // 0x29ddf4: 0x24060003
    ctx->pc = 0x29ddf4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ddf8: 0x260382d
    ctx->pc = 0x29ddf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddfc: 0x3c013f80
    ctx->pc = 0x29ddfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29de00: 0x44816000
    ctx->pc = 0x29de00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29de04: 0x2408ffff
    ctx->pc = 0x29de04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29de08: 0x482d
    ctx->pc = 0x29de08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de0c: 0xc08e53c
    ctx->pc = 0x29DE0Cu;
    SET_GPR_U32(ctx, 31, 0x29DE14u);
    ctx->pc = 0x29DE10u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2394F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        generate_enemy_0x2394f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE14u; }
    }
    if (ctx->pc != 0x29DE14u) { return; }
    ctx->pc = 0x29DE14u;
    // 0x29de14: 0x240303b0
    ctx->pc = 0x29de14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x29de18: 0x432018
    ctx->pc = 0x29de18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29de1c: 0x948021
    ctx->pc = 0x29de1cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x29de20: 0xc7ac0010
    ctx->pc = 0x29de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29de24: 0xc0ba04a
    ctx->pc = 0x29DE24u;
    SET_GPR_U32(ctx, 31, 0x29DE2Cu);
    ctx->pc = 0x29DE28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE2Cu; }
    }
    if (ctx->pc != 0x29DE2Cu) { return; }
    ctx->pc = 0x29DE2Cu;
    // 0x29de2c: 0xe6000260
    ctx->pc = 0x29de2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x29de30: 0xe6000264
    ctx->pc = 0x29de30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x29de34: 0xae000254
    ctx->pc = 0x29de34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    // 0x29de38: 0xe6000258
    ctx->pc = 0x29de38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x29de3c: 0xae00025c
    ctx->pc = 0x29de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x29de40: 0xc6200030
    ctx->pc = 0x29de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de44: 0xe6000300
    ctx->pc = 0x29de44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x29de48: 0xc6200034
    ctx->pc = 0x29de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de4c: 0xe6000304
    ctx->pc = 0x29de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x29de50: 0xc6200038
    ctx->pc = 0x29de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de54: 0x26520001
    ctx->pc = 0x29de54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x29de58: 0x2a420002
    ctx->pc = 0x29de58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 2));
    // 0x29de5c: 0x1440ffce
    ctx->pc = 0x29DE5Cu;
    {
        const bool branch_taken_0x29de5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29DE60u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
        if (branch_taken_0x29de5c) {
            ctx->pc = 0x29DD98u;
            goto label_29dd98;
        }
    }
    ctx->pc = 0x29DE64u;
label_29de64:
    // 0x29de64: 0xdfbf0080
    ctx->pc = 0x29de64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29de68: 0xdfb50070
    ctx->pc = 0x29de68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29de6c: 0xdfb40060
    ctx->pc = 0x29de6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29de70: 0xdfb30050
    ctx->pc = 0x29de70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29de74: 0xdfb20040
    ctx->pc = 0x29de74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29de78: 0xdfb10030
    ctx->pc = 0x29de78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29de7c: 0xdfb00020
    ctx->pc = 0x29de7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29de80: 0xc7b40090
    ctx->pc = 0x29de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29de84: 0x3e00008
    ctx->pc = 0x29DE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DE88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DD98u: goto label_29dd98;
            case 0x29DE64u: goto label_29de64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DE8Cu;
}
