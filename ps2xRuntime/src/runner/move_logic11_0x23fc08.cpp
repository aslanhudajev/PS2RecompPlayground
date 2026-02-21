#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic11
// Address: 0x23fc08 - 0x23fd94
void move_logic11_0x23fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23fc08u;

    // 0x23fc08: 0x27bdff90
    ctx->pc = 0x23fc08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23fc0c: 0xffbf0060
    ctx->pc = 0x23fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23fc10: 0xffb10050
    ctx->pc = 0x23fc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x23fc14: 0xffb00040
    ctx->pc = 0x23fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x23fc18: 0x80882d
    ctx->pc = 0x23fc18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc1c: 0x240303b0
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23fc20: 0x2231818
    ctx->pc = 0x23fc20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23fc24: 0x3c020033
    ctx->pc = 0x23fc24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23fc28: 0x2442dfd0
    ctx->pc = 0x23fc28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23fc2c: 0x628021
    ctx->pc = 0x23fc2cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fc30: 0x40034800
    ctx->pc = 0x23fc30u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23fc34: 0x3c02003a
    ctx->pc = 0x23fc34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23fc38: 0x8c4221d0
    ctx->pc = 0x23fc38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23fc3c: 0xac430218
    ctx->pc = 0x23fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 3));
    // 0x23fc40: 0xae0000e4
    ctx->pc = 0x23fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x23fc44: 0x3c030031
    ctx->pc = 0x23fc44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x23fc48: 0x8c62ffbc
    ctx->pc = 0x23fc48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x23fc4c: 0x4400005
    ctx->pc = 0x23FC4Cu;
    {
        const bool branch_taken_0x23fc4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23FC50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x23fc4c) {
            ctx->pc = 0x23FC64u;
            goto label_23fc64;
        }
    }
    ctx->pc = 0x23FC54u;
    // 0x23fc54: 0x44820000
    ctx->pc = 0x23fc54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x23fc58: 0x46800020
    ctx->pc = 0x23fc58u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x23fc5c: 0x10000008
    ctx->pc = 0x23FC5Cu;
    {
        const bool branch_taken_0x23fc5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23fc5c) {
            ctx->pc = 0x23FC80u;
            goto label_23fc80;
        }
    }
    ctx->pc = 0x23FC64u;
label_23fc64:
    // 0x23fc64: 0x8c820000
    ctx->pc = 0x23fc64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23fc68: 0x30430001
    ctx->pc = 0x23fc68u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x23fc6c: 0x21042
    ctx->pc = 0x23fc6cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x23fc70: 0x621825
    ctx->pc = 0x23fc70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fc74: 0x44830000
    ctx->pc = 0x23fc74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x23fc78: 0x46800020
    ctx->pc = 0x23fc78u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x23fc7c: 0x46000000
    ctx->pc = 0x23fc7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_23fc80:
    // 0x23fc80: 0x3c014049
    ctx->pc = 0x23fc80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23fc84: 0x34210fdb
    ctx->pc = 0x23fc84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23fc88: 0x44811000
    ctx->pc = 0x23fc88u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x23fc8c: 0x46020002
    ctx->pc = 0x23fc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23fc90: 0x3c013bb6
    ctx->pc = 0x23fc90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15286 << 16));
    // 0x23fc94: 0x34210b61
    ctx->pc = 0x23fc94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2913));
    // 0x23fc98: 0x44810800
    ctx->pc = 0x23fc98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23fc9c: 0x46010002
    ctx->pc = 0x23fc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23fca0: 0xc6010260
    ctx->pc = 0x23fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fca4: 0x46010040
    ctx->pc = 0x23fca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23fca8: 0x46011034
    ctx->pc = 0x23fca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23fcac: 0x0
    ctx->pc = 0x23fcacu;
    // NOP
    // 0x23fcb0: 0x45000006
    ctx->pc = 0x23FCB0u;
    {
        const bool branch_taken_0x23fcb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23FCB4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x23fcb0) {
            ctx->pc = 0x23FCCCu;
            goto label_23fccc;
        }
    }
    ctx->pc = 0x23FCB8u;
    // 0x23fcb8: 0x3c0140c9
    ctx->pc = 0x23fcb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23fcbc: 0x34210fdb
    ctx->pc = 0x23fcbcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23fcc0: 0x44810000
    ctx->pc = 0x23fcc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23fcc4: 0x1000000d
    ctx->pc = 0x23FCC4u;
    {
        const bool branch_taken_0x23fcc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FCC8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23fcc4) {
            ctx->pc = 0x23FCFCu;
            goto label_23fcfc;
        }
    }
    ctx->pc = 0x23FCCCu;
label_23fccc:
    // 0x23fccc: 0xc6010260
    ctx->pc = 0x23fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fcd0: 0x3c01c049
    ctx->pc = 0x23fcd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23fcd4: 0x34210fdb
    ctx->pc = 0x23fcd4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23fcd8: 0x44810000
    ctx->pc = 0x23fcd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23fcdc: 0x46000836
    ctx->pc = 0x23fcdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23fce0: 0x0
    ctx->pc = 0x23fce0u;
    // NOP
    // 0x23fce4: 0x45020005
    ctx->pc = 0x23FCE4u;
    {
        const bool branch_taken_0x23fce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fce4) {
            ctx->pc = 0x23FCE8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23FCFCu;
            goto label_23fcfc;
        }
    }
    ctx->pc = 0x23FCECu;
    // 0x23fcec: 0x3c0140c9
    ctx->pc = 0x23fcecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23fcf0: 0x34210fdb
    ctx->pc = 0x23fcf0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23fcf4: 0x44810000
    ctx->pc = 0x23fcf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23fcf8: 0x46000800
    ctx->pc = 0x23fcf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23fcfc:
    // 0x23fcfc: 0xe6000260
    ctx->pc = 0x23fcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23fd00: 0xc08f20c
    ctx->pc = 0x23FD00u;
    SET_GPR_U32(ctx, 31, 0x23FD08u);
    ctx->pc = 0x23FD04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD08u; }
    }
    if (ctx->pc != 0x23FD08u) { return; }
    ctx->pc = 0x23FD08u;
    // 0x23fd08: 0xe6000258
    ctx->pc = 0x23fd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23fd0c: 0x3a0202d
    ctx->pc = 0x23fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd10: 0xc0b5ae8
    ctx->pc = 0x23FD10u;
    SET_GPR_U32(ctx, 31, 0x23FD18u);
    ctx->pc = 0x23FD14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 596));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD18u; }
    }
    if (ctx->pc != 0x23FD18u) { return; }
    ctx->pc = 0x23FD18u;
    // 0x23fd18: 0x3a0202d
    ctx->pc = 0x23fd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd1c: 0xc0b549e
    ctx->pc = 0x23FD1Cu;
    SET_GPR_U32(ctx, 31, 0x23FD24u);
    ctx->pc = 0x23FD20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD24u; }
    }
    if (ctx->pc != 0x23FD24u) { return; }
    ctx->pc = 0x23FD24u;
    // 0x23fd24: 0x8e0202a4
    ctx->pc = 0x23fd24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x23fd28: 0x10400008
    ctx->pc = 0x23FD28u;
    {
        const bool branch_taken_0x23fd28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FD2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23fd28) {
            ctx->pc = 0x23FD4Cu;
            goto label_23fd4c;
        }
    }
    ctx->pc = 0x23FD30u;
    // 0x23fd30: 0x8e0300c8
    ctx->pc = 0x23fd30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x23fd34: 0x14620007
    ctx->pc = 0x23FD34u;
    {
        const bool branch_taken_0x23fd34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23FD38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23fd34) {
            ctx->pc = 0x23FD54u;
            goto label_23fd54;
        }
    }
    ctx->pc = 0x23FD3Cu;
    // 0x23fd3c: 0x8c42fff0
    ctx->pc = 0x23fd3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x23fd40: 0x28420002
    ctx->pc = 0x23fd40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x23fd44: 0x14400003
    ctx->pc = 0x23FD44u;
    {
        const bool branch_taken_0x23fd44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23fd44) {
            ctx->pc = 0x23FD54u;
            goto label_23fd54;
        }
    }
    ctx->pc = 0x23FD4Cu;
label_23fd4c:
    // 0x23fd4c: 0xc08e734
    ctx->pc = 0x23FD4Cu;
    SET_GPR_U32(ctx, 31, 0x23FD54u);
    ctx->pc = 0x23FD50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_enemy_0x239cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FD54u; }
    }
    if (ctx->pc != 0x23FD54u) { return; }
    ctx->pc = 0x23FD54u;
label_23fd54:
    // 0x23fd54: 0x40034800
    ctx->pc = 0x23fd54u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23fd58: 0x3c02003a
    ctx->pc = 0x23fd58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23fd5c: 0x8c4421d0
    ctx->pc = 0x23fd5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23fd60: 0x8c820218
    ctx->pc = 0x23fd60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x23fd64: 0x621823
    ctx->pc = 0x23fd64u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fd68: 0x8c820210
    ctx->pc = 0x23fd68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x23fd6c: 0x621821
    ctx->pc = 0x23fd6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fd70: 0xac830210
    ctx->pc = 0x23fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 3));
    // 0x23fd74: 0x8c820214
    ctx->pc = 0x23fd74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x23fd78: 0x24420001
    ctx->pc = 0x23fd78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23fd7c: 0xac820214
    ctx->pc = 0x23fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
    // 0x23fd80: 0xdfbf0060
    ctx->pc = 0x23fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fd84: 0xdfb10050
    ctx->pc = 0x23fd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fd88: 0xdfb00040
    ctx->pc = 0x23fd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fd8c: 0x3e00008
    ctx->pc = 0x23FD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FC64u: goto label_23fc64;
            case 0x23FC80u: goto label_23fc80;
            case 0x23FCCCu: goto label_23fccc;
            case 0x23FCFCu: goto label_23fcfc;
            case 0x23FD4Cu: goto label_23fd4c;
            case 0x23FD54u: goto label_23fd54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FD94u;
}
