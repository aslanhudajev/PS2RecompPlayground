#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic23
// Address: 0x23daf0 - 0x23dc40
void move_logic23_0x23daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23daf0u;

    // 0x23daf0: 0x27bdffd0
    ctx->pc = 0x23daf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23daf4: 0xffbf0020
    ctx->pc = 0x23daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23daf8: 0xffb10010
    ctx->pc = 0x23daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23dafc: 0xffb00000
    ctx->pc = 0x23dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23db00: 0x80882d
    ctx->pc = 0x23db00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23db04: 0x240303b0
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23db08: 0x2231818
    ctx->pc = 0x23db08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23db0c: 0x3c020033
    ctx->pc = 0x23db0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23db10: 0x2442dfd0
    ctx->pc = 0x23db10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23db14: 0x628021
    ctx->pc = 0x23db14u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23db18: 0x40034800
    ctx->pc = 0x23db18u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23db1c: 0x3c02003a
    ctx->pc = 0x23db1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23db20: 0x8c4221d0
    ctx->pc = 0x23db20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23db24: 0xac4302d8
    ctx->pc = 0x23db24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 728), GPR_U32(ctx, 3));
    // 0x23db28: 0x86030324
    ctx->pc = 0x23db28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23db2c: 0x86020328
    ctx->pc = 0x23db2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23db30: 0x50620004
    ctx->pc = 0x23DB30u;
    {
        const bool branch_taken_0x23db30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23db30) {
            ctx->pc = 0x23DB34u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23DB44u;
            goto label_23db44;
        }
    }
    ctx->pc = 0x23DB38u;
    // 0x23db38: 0xc08e210
    ctx->pc = 0x23DB38u;
    SET_GPR_U32(ctx, 31, 0x23DB40u);
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB40u; }
    }
    if (ctx->pc != 0x23DB40u) { return; }
    ctx->pc = 0x23DB40u;
    // 0x23db40: 0x200202d
    ctx->pc = 0x23db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23db44:
    // 0x23db44: 0xc08f0f0
    ctx->pc = 0x23DB44u;
    SET_GPR_U32(ctx, 31, 0x23DB4Cu);
    ctx->pc = 0x23DB48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB4Cu; }
    }
    if (ctx->pc != 0x23DB4Cu) { return; }
    ctx->pc = 0x23DB4Cu;
    // 0x23db4c: 0xe6000260
    ctx->pc = 0x23db4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23db50: 0x86020288
    ctx->pc = 0x23db50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23db54: 0x4400025
    ctx->pc = 0x23DB54u;
    {
        const bool branch_taken_0x23db54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23DB58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23db54) {
            ctx->pc = 0x23DBECu;
            goto label_23dbec;
        }
    }
    ctx->pc = 0x23DB5Cu;
    // 0x23db5c: 0x431818
    ctx->pc = 0x23db5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23db60: 0x3c020032
    ctx->pc = 0x23db60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23db64: 0x24421bc0
    ctx->pc = 0x23db64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23db68: 0x621821
    ctx->pc = 0x23db68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23db6c: 0xc6010044
    ctx->pc = 0x23db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23db70: 0xc4600054
    ctx->pc = 0x23db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23db74: 0x46000841
    ctx->pc = 0x23db74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23db78: 0x860202f0
    ctx->pc = 0x23db78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23db7c: 0x1040001b
    ctx->pc = 0x23DB7Cu;
    {
        const bool branch_taken_0x23db7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DB80u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x23db7c) {
            ctx->pc = 0x23DBECu;
            goto label_23dbec;
        }
    }
    ctx->pc = 0x23DB84u;
    // 0x23db84: 0xc6000290
    ctx->pc = 0x23db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23db88: 0x46020036
    ctx->pc = 0x23db88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23db8c: 0x45000017
    ctx->pc = 0x23DB8Cu;
    {
        const bool branch_taken_0x23db8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23db8c) {
            ctx->pc = 0x23DBECu;
            goto label_23dbec;
        }
    }
    ctx->pc = 0x23DB94u;
    // 0x23db94: 0x3c01c120
    ctx->pc = 0x23db94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x23db98: 0x44810000
    ctx->pc = 0x23db98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23db9c: 0x46010036
    ctx->pc = 0x23db9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dba0: 0x45000012
    ctx->pc = 0x23DBA0u;
    {
        const bool branch_taken_0x23dba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dba0) {
            ctx->pc = 0x23DBECu;
            goto label_23dbec;
        }
    }
    ctx->pc = 0x23DBA8u;
    // 0x23dba8: 0x3c014120
    ctx->pc = 0x23dba8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23dbac: 0x44810000
    ctx->pc = 0x23dbacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23dbb0: 0x46000836
    ctx->pc = 0x23dbb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dbb4: 0x4500000d
    ctx->pc = 0x23DBB4u;
    {
        const bool branch_taken_0x23dbb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dbb4) {
            ctx->pc = 0x23DBECu;
            goto label_23dbec;
        }
    }
    ctx->pc = 0x23DBBCu;
    // 0x23dbbc: 0x8e020334
    ctx->pc = 0x23dbbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23dbc0: 0x1c400006
    ctx->pc = 0x23DBC0u;
    {
        const bool branch_taken_0x23dbc0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23DBC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23dbc0) {
            ctx->pc = 0x23DBDCu;
            goto label_23dbdc;
        }
    }
    ctx->pc = 0x23DBC8u;
    // 0x23dbc8: 0x200202d
    ctx->pc = 0x23dbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dbcc: 0xc09de18
    ctx->pc = 0x23DBCCu;
    SET_GPR_U32(ctx, 31, 0x23DBD4u);
    ctx->pc = 0x23DBD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBD4u; }
    }
    if (ctx->pc != 0x23DBD4u) { return; }
    ctx->pc = 0x23DBD4u;
    // 0x23dbd4: 0x10000005
    ctx->pc = 0x23DBD4u;
    {
        const bool branch_taken_0x23dbd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23dbd4) {
            ctx->pc = 0x23DBECu;
            goto label_23dbec;
        }
    }
    ctx->pc = 0x23DBDCu;
label_23dbdc:
    // 0x23dbdc: 0x8e030334
    ctx->pc = 0x23dbdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23dbe0: 0x8c42ffbc
    ctx->pc = 0x23dbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23dbe4: 0x621823
    ctx->pc = 0x23dbe4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dbe8: 0xae030334
    ctx->pc = 0x23dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
label_23dbec:
    // 0x23dbec: 0xc08f20c
    ctx->pc = 0x23DBECu;
    SET_GPR_U32(ctx, 31, 0x23DBF4u);
    ctx->pc = 0x23DBF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBF4u; }
    }
    if (ctx->pc != 0x23DBF4u) { return; }
    ctx->pc = 0x23DBF4u;
    // 0x23dbf4: 0xe6000258
    ctx->pc = 0x23dbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23dbf8: 0xc090e82
    ctx->pc = 0x23DBF8u;
    SET_GPR_U32(ctx, 31, 0x23DC00u);
    ctx->pc = 0x23DBFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DC00u; }
    }
    if (ctx->pc != 0x23DC00u) { return; }
    ctx->pc = 0x23DC00u;
    // 0x23dc00: 0x40034800
    ctx->pc = 0x23dc00u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23dc04: 0x3c02003a
    ctx->pc = 0x23dc04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23dc08: 0x8c4421d0
    ctx->pc = 0x23dc08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23dc0c: 0x8c8202d8
    ctx->pc = 0x23dc0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x23dc10: 0x621823
    ctx->pc = 0x23dc10u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dc14: 0x8c8202d0
    ctx->pc = 0x23dc14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x23dc18: 0x621821
    ctx->pc = 0x23dc18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dc1c: 0xac8302d0
    ctx->pc = 0x23dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 3));
    // 0x23dc20: 0x8c8202d4
    ctx->pc = 0x23dc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 724)));
    // 0x23dc24: 0x24420001
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23dc28: 0xac8202d4
    ctx->pc = 0x23dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 2));
    // 0x23dc2c: 0xdfbf0020
    ctx->pc = 0x23dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23dc30: 0xdfb10010
    ctx->pc = 0x23dc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dc34: 0xdfb00000
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dc38: 0x3e00008
    ctx->pc = 0x23DC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DC3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DB44u: goto label_23db44;
            case 0x23DBDCu: goto label_23dbdc;
            case 0x23DBECu: goto label_23dbec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DC40u;
}
