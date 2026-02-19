#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxNodeAdd
// Address: 0x27fbe8 - 0x27fd18
void DmgFxNodeAdd_0x27fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fbe8u;

    // 0x27fbe8: 0x27bdff90
    ctx->pc = 0x27fbe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27fbec: 0xffbf0040
    ctx->pc = 0x27fbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27fbf0: 0xffb30030
    ctx->pc = 0x27fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27fbf4: 0xffb20020
    ctx->pc = 0x27fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27fbf8: 0xffb10010
    ctx->pc = 0x27fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27fbfc: 0xffb00000
    ctx->pc = 0x27fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27fc00: 0xe7b70068
    ctx->pc = 0x27fc00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27fc04: 0xe7b60060
    ctx->pc = 0x27fc04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27fc08: 0xe7b50058
    ctx->pc = 0x27fc08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27fc0c: 0xe7b40050
    ctx->pc = 0x27fc0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27fc10: 0x46006506
    ctx->pc = 0x27fc10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27fc14: 0x46006d46
    ctx->pc = 0x27fc14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27fc18: 0x46007586
    ctx->pc = 0x27fc18u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x27fc1c: 0x46007dc6
    ctx->pc = 0x27fc1cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x27fc20: 0x80182d
    ctx->pc = 0x27fc20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc24: 0xa0882d
    ctx->pc = 0x27fc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc28: 0xc0982d
    ctx->pc = 0x27fc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc2c: 0x3c120040
    ctx->pc = 0x27fc2cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)64 << 16));
    // 0x27fc30: 0x44800000
    ctx->pc = 0x27fc30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27fc34: 0x4600a032
    ctx->pc = 0x27fc34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fc38: 0x0
    ctx->pc = 0x27fc38u;
    // NOP
    // 0x27fc3c: 0x45000007
    ctx->pc = 0x27FC3Cu;
    {
        const bool branch_taken_0x27fc3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FC40u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 6152));
        if (branch_taken_0x27fc3c) {
            ctx->pc = 0x27FC5Cu;
            goto label_27fc5c;
        }
    }
    ctx->pc = 0x27FC44u;
    // 0x27fc44: 0x3c013c23
    ctx->pc = 0x27fc44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27fc48: 0x3421d70a
    ctx->pc = 0x27fc48u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27fc4c: 0x4481a800
    ctx->pc = 0x27fc4cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x27fc50: 0x4600ad06
    ctx->pc = 0x27fc50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x27fc54: 0x3c120040
    ctx->pc = 0x27fc54u;
    SET_GPR_U32(ctx, 18, ((uint32_t)64 << 16));
    // 0x27fc58: 0x36521809
    ctx->pc = 0x27fc58u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 6153));
label_27fc5c:
    // 0x27fc5c: 0x10e00003
    ctx->pc = 0x27FC5Cu;
    {
        const bool branch_taken_0x27fc5c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FC60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x27fc5c) {
            ctx->pc = 0x27FC6Cu;
            goto label_27fc6c;
        }
    }
    ctx->pc = 0x27FC64u;
    // 0x27fc64: 0x10000003
    ctx->pc = 0x27FC64u;
    {
        const bool branch_taken_0x27fc64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FC68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294950736));
        if (branch_taken_0x27fc64) {
            ctx->pc = 0x27FC74u;
            goto label_27fc74;
        }
    }
    ctx->pc = 0x27FC6Cu;
label_27fc6c:
    // 0x27fc6c: 0x3c02003b
    ctx->pc = 0x27fc6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x27fc70: 0x2444bf48
    ctx->pc = 0x27fc70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294950728));
label_27fc74:
    // 0x27fc74: 0x282d
    ctx->pc = 0x27fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc78: 0x60302d
    ctx->pc = 0x27fc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc7c: 0xc0b1b04
    ctx->pc = 0x27FC7Cu;
    SET_GPR_U32(ctx, 31, 0x27FC84u);
    ctx->pc = 0x27FC80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC84u; }
    }
    if (ctx->pc != 0x27FC84u) { return; }
    ctx->pc = 0x27FC84u;
    // 0x27fc84: 0x40802d
    ctx->pc = 0x27fc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc88: 0xc6200000
    ctx->pc = 0x27fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc8c: 0xe6000030
    ctx->pc = 0x27fc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27fc90: 0xc6200004
    ctx->pc = 0x27fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc94: 0xe6000034
    ctx->pc = 0x27fc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x27fc98: 0xc6200008
    ctx->pc = 0x27fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc9c: 0xe6000038
    ctx->pc = 0x27fc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27fca0: 0x200202d
    ctx->pc = 0x27fca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fca4: 0x4600a306
    ctx->pc = 0x27fca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27fca8: 0x4600ab46
    ctx->pc = 0x27fca8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27fcac: 0x4600b386
    ctx->pc = 0x27fcacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x27fcb0: 0x4600bbc6
    ctx->pc = 0x27fcb0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x27fcb4: 0xc09fe8c
    ctx->pc = 0x27FCB4u;
    SET_GPR_U32(ctx, 31, 0x27FCBCu);
    ctx->pc = 0x27FCB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxNodeUpdate_0x27fa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCBCu; }
    }
    if (ctx->pc != 0x27FCBCu) { return; }
    ctx->pc = 0x27FCBCu;
    // 0x27fcbc: 0x32420001
    ctx->pc = 0x27fcbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
    // 0x27fcc0: 0x10400004
    ctx->pc = 0x27FCC0u;
    {
        const bool branch_taken_0x27fcc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FCC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27fcc0) {
            ctx->pc = 0x27FCD4u;
            goto label_27fcd4;
        }
    }
    ctx->pc = 0x27FCC8u;
    // 0x27fcc8: 0x24050001
    ctx->pc = 0x27fcc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fccc: 0xc0b41b8
    ctx->pc = 0x27FCCCu;
    SET_GPR_U32(ctx, 31, 0x27FCD4u);
    ctx->pc = 0x27FCD0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCD4u; }
    }
    if (ctx->pc != 0x27FCD4u) { return; }
    ctx->pc = 0x27FCD4u;
label_27fcd4:
    // 0x27fcd4: 0x1a600004
    ctx->pc = 0x27FCD4u;
    {
        const bool branch_taken_0x27fcd4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x27FCD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27fcd4) {
            ctx->pc = 0x27FCE8u;
            goto label_27fce8;
        }
    }
    ctx->pc = 0x27FCDCu;
    // 0x27fcdc: 0x260282d
    ctx->pc = 0x27fcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fce0: 0xc0b40c0
    ctx->pc = 0x27FCE0u;
    SET_GPR_U32(ctx, 31, 0x27FCE8u);
    ctx->pc = 0x27FCE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCE8u; }
    }
    if (ctx->pc != 0x27FCE8u) { return; }
    ctx->pc = 0x27FCE8u;
label_27fce8:
    // 0x27fce8: 0x200102d
    ctx->pc = 0x27fce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcec: 0xdfbf0040
    ctx->pc = 0x27fcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fcf0: 0xdfb30030
    ctx->pc = 0x27fcf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fcf4: 0xdfb20020
    ctx->pc = 0x27fcf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fcf8: 0xdfb10010
    ctx->pc = 0x27fcf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fcfc: 0xdfb00000
    ctx->pc = 0x27fcfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fd00: 0xc7b70068
    ctx->pc = 0x27fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27fd04: 0xc7b60060
    ctx->pc = 0x27fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27fd08: 0xc7b50058
    ctx->pc = 0x27fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27fd0c: 0xc7b40050
    ctx->pc = 0x27fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27fd10: 0x3e00008
    ctx->pc = 0x27FD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FD14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FC5Cu: goto label_27fc5c;
            case 0x27FC6Cu: goto label_27fc6c;
            case 0x27FC74u: goto label_27fc74;
            case 0x27FCD4u: goto label_27fcd4;
            case 0x27FCE8u: goto label_27fce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27FD18u;
}
