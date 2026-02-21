#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic17
// Address: 0x23ec20 - 0x23ed4c
void move_logic17_0x23ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23ec20u;

    // 0x23ec20: 0x27bdffd0
    ctx->pc = 0x23ec20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ec24: 0xffbf0020
    ctx->pc = 0x23ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23ec28: 0xffb10010
    ctx->pc = 0x23ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23ec2c: 0xffb00000
    ctx->pc = 0x23ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ec30: 0x80882d
    ctx->pc = 0x23ec30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec34: 0x240303b0
    ctx->pc = 0x23ec34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23ec38: 0x2231818
    ctx->pc = 0x23ec38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ec3c: 0x3c020033
    ctx->pc = 0x23ec3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23ec40: 0x2442dfd0
    ctx->pc = 0x23ec40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23ec44: 0x628021
    ctx->pc = 0x23ec44u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ec48: 0x40034800
    ctx->pc = 0x23ec48u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23ec4c: 0x3c02003a
    ctx->pc = 0x23ec4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23ec50: 0x8c4221d0
    ctx->pc = 0x23ec50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23ec54: 0xac430278
    ctx->pc = 0x23ec54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 632), GPR_U32(ctx, 3));
    // 0x23ec58: 0x86030324
    ctx->pc = 0x23ec58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23ec5c: 0x86020328
    ctx->pc = 0x23ec5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23ec60: 0x50620004
    ctx->pc = 0x23EC60u;
    {
        const bool branch_taken_0x23ec60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23ec60) {
            ctx->pc = 0x23EC64u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23EC68u;
    // 0x23ec68: 0xc08e210
    ctx->pc = 0x23EC68u;
    SET_GPR_U32(ctx, 31, 0x23EC70u);
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC70u; }
    }
    if (ctx->pc != 0x23EC70u) { return; }
    ctx->pc = 0x23EC70u;
    // 0x23ec70: 0x200202d
    ctx->pc = 0x23ec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ec74:
    // 0x23ec74: 0xc08f0f0
    ctx->pc = 0x23EC74u;
    SET_GPR_U32(ctx, 31, 0x23EC7Cu);
    ctx->pc = 0x23EC78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EC7Cu; }
    }
    if (ctx->pc != 0x23EC7Cu) { return; }
    ctx->pc = 0x23EC7Cu;
    // 0x23ec7c: 0xe6000260
    ctx->pc = 0x23ec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23ec80: 0x86020288
    ctx->pc = 0x23ec80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23ec84: 0x440001c
    ctx->pc = 0x23EC84u;
    {
        const bool branch_taken_0x23ec84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23EC88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23ec84) {
            ctx->pc = 0x23ECF8u;
            goto label_23ecf8;
        }
    }
    ctx->pc = 0x23EC8Cu;
    // 0x23ec8c: 0x431818
    ctx->pc = 0x23ec8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ec90: 0x3c020032
    ctx->pc = 0x23ec90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23ec94: 0x24421bc0
    ctx->pc = 0x23ec94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23ec98: 0x621821
    ctx->pc = 0x23ec98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ec9c: 0xc6010044
    ctx->pc = 0x23ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eca0: 0xc4600054
    ctx->pc = 0x23eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23eca4: 0x46000841
    ctx->pc = 0x23eca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23eca8: 0x860202f0
    ctx->pc = 0x23eca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23ecac: 0x10400012
    ctx->pc = 0x23ECACu;
    {
        const bool branch_taken_0x23ecac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23ECB0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x23ecac) {
            ctx->pc = 0x23ECF8u;
            goto label_23ecf8;
        }
    }
    ctx->pc = 0x23ECB4u;
    // 0x23ecb4: 0xc6000290
    ctx->pc = 0x23ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ecb8: 0x46020036
    ctx->pc = 0x23ecb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ecbc: 0x4500000e
    ctx->pc = 0x23ECBCu;
    {
        const bool branch_taken_0x23ecbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ecbc) {
            ctx->pc = 0x23ECF8u;
            goto label_23ecf8;
        }
    }
    ctx->pc = 0x23ECC4u;
    // 0x23ecc4: 0x3c01c120
    ctx->pc = 0x23ecc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x23ecc8: 0x44810000
    ctx->pc = 0x23ecc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23eccc: 0x46010036
    ctx->pc = 0x23ecccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ecd0: 0x45000009
    ctx->pc = 0x23ECD0u;
    {
        const bool branch_taken_0x23ecd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ecd0) {
            ctx->pc = 0x23ECF8u;
            goto label_23ecf8;
        }
    }
    ctx->pc = 0x23ECD8u;
    // 0x23ecd8: 0x3c014120
    ctx->pc = 0x23ecd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23ecdc: 0x44810000
    ctx->pc = 0x23ecdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ece0: 0x46000836
    ctx->pc = 0x23ece0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ece4: 0x0
    ctx->pc = 0x23ece4u;
    // NOP
    // 0x23ece8: 0x45000003
    ctx->pc = 0x23ECE8u;
    {
        const bool branch_taken_0x23ece8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23ECECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23ece8) {
            ctx->pc = 0x23ECF8u;
            goto label_23ecf8;
        }
    }
    ctx->pc = 0x23ECF0u;
    // 0x23ecf0: 0xc09de18
    ctx->pc = 0x23ECF0u;
    SET_GPR_U32(ctx, 31, 0x23ECF8u);
    ctx->pc = 0x23ECF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ECF8u; }
    }
    if (ctx->pc != 0x23ECF8u) { return; }
    ctx->pc = 0x23ECF8u;
label_23ecf8:
    // 0x23ecf8: 0xc08f20c
    ctx->pc = 0x23ECF8u;
    SET_GPR_U32(ctx, 31, 0x23ED00u);
    ctx->pc = 0x23ECFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ED00u; }
    }
    if (ctx->pc != 0x23ED00u) { return; }
    ctx->pc = 0x23ED00u;
    // 0x23ed00: 0xe6000258
    ctx->pc = 0x23ed00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23ed04: 0xc090e82
    ctx->pc = 0x23ED04u;
    SET_GPR_U32(ctx, 31, 0x23ED0Cu);
    ctx->pc = 0x23ED08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ED0Cu; }
    }
    if (ctx->pc != 0x23ED0Cu) { return; }
    ctx->pc = 0x23ED0Cu;
    // 0x23ed0c: 0x40034800
    ctx->pc = 0x23ed0cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23ed10: 0x3c02003a
    ctx->pc = 0x23ed10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23ed14: 0x8c4421d0
    ctx->pc = 0x23ed14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23ed18: 0x8c820278
    ctx->pc = 0x23ed18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x23ed1c: 0x621823
    ctx->pc = 0x23ed1cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ed20: 0x8c820270
    ctx->pc = 0x23ed20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x23ed24: 0x621821
    ctx->pc = 0x23ed24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ed28: 0xac830270
    ctx->pc = 0x23ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x23ed2c: 0x8c820274
    ctx->pc = 0x23ed2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x23ed30: 0x24420001
    ctx->pc = 0x23ed30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ed34: 0xac820274
    ctx->pc = 0x23ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
    // 0x23ed38: 0xdfbf0020
    ctx->pc = 0x23ed38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ed3c: 0xdfb10010
    ctx->pc = 0x23ed3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ed40: 0xdfb00000
    ctx->pc = 0x23ed40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ed44: 0x3e00008
    ctx->pc = 0x23ED44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ED48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23EC74u: goto label_23ec74;
            case 0x23ECF8u: goto label_23ecf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23ED4Cu;
}
