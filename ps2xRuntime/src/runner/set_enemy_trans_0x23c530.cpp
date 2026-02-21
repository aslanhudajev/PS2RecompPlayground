#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_enemy_trans
// Address: 0x23c530 - 0x23c658
void set_enemy_trans_0x23c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c530u;

    // 0x23c530: 0x27bdffd0
    ctx->pc = 0x23c530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c534: 0xffbf0010
    ctx->pc = 0x23c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c538: 0xffb00000
    ctx->pc = 0x23c538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c53c: 0xe7b50028
    ctx->pc = 0x23c53cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23c540: 0xe7b40020
    ctx->pc = 0x23c540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23c544: 0x80802d
    ctx->pc = 0x23c544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c548: 0x46006546
    ctx->pc = 0x23c548u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x23c54c: 0x3c020036
    ctx->pc = 0x23c54cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x23c550: 0x8e030000
    ctx->pc = 0x23c550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23c554: 0x8c42d934
    ctx->pc = 0x23c554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x23c558: 0x10620039
    ctx->pc = 0x23C558u;
    {
        const bool branch_taken_0x23c558 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23C55Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x23c558) {
            ctx->pc = 0x23C640u;
            goto label_23c640;
        }
    }
    ctx->pc = 0x23C560u;
    // 0x23c560: 0x8e0300e0
    ctx->pc = 0x23c560u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23c564: 0x24020001
    ctx->pc = 0x23c564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c568: 0x10620036
    ctx->pc = 0x23C568u;
    {
        const bool branch_taken_0x23c568 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23C56Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x23c568) {
            ctx->pc = 0x23C644u;
            goto label_23c644;
        }
    }
    ctx->pc = 0x23C570u;
    // 0x23c570: 0x3c013fa0
    ctx->pc = 0x23c570u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16288 << 16));
    // 0x23c574: 0x44810000
    ctx->pc = 0x23c574u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c578: 0x46150036
    ctx->pc = 0x23c578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c57c: 0x0
    ctx->pc = 0x23c57cu;
    // NOP
    // 0x23c580: 0x45000002
    ctx->pc = 0x23C580u;
    {
        const bool branch_taken_0x23c580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23C584u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x23c580) {
            ctx->pc = 0x23C58Cu;
            goto label_23c58c;
        }
    }
    ctx->pc = 0x23C588u;
    // 0x23c588: 0x24050004
    ctx->pc = 0x23c588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_23c58c:
    // 0x23c58c: 0xc09de18
    ctx->pc = 0x23C58Cu;
    SET_GPR_U32(ctx, 31, 0x23C594u);
    ctx->pc = 0x23C590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C594u; }
    }
    if (ctx->pc != 0x23C594u) { return; }
    ctx->pc = 0x23C594u;
    // 0x23c594: 0x8e0300e0
    ctx->pc = 0x23c594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23c598: 0x2462fffd
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x23c59c: 0x2c420002
    ctx->pc = 0x23c59cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23c5a0: 0x5440000a
    ctx->pc = 0x23C5A0u;
    {
        const bool branch_taken_0x23c5a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23c5a0) {
            ctx->pc = 0x23C5A4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23C5CCu;
            goto label_23c5cc;
        }
    }
    ctx->pc = 0x23C5A8u;
    // 0x23c5a8: 0x24020016
    ctx->pc = 0x23c5a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x23c5ac: 0x10620006
    ctx->pc = 0x23C5ACu;
    {
        const bool branch_taken_0x23c5ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23C5B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x23c5ac) {
            ctx->pc = 0x23C5C8u;
            goto label_23c5c8;
        }
    }
    ctx->pc = 0x23C5B4u;
    // 0x23c5b4: 0x50620005
    ctx->pc = 0x23C5B4u;
    {
        const bool branch_taken_0x23c5b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23c5b4) {
            ctx->pc = 0x23C5B8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23C5CCu;
            goto label_23c5cc;
        }
    }
    ctx->pc = 0x23C5BCu;
    // 0x23c5bc: 0x8e020298
    ctx->pc = 0x23c5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x23c5c0: 0x4400020
    ctx->pc = 0x23C5C0u;
    {
        const bool branch_taken_0x23c5c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23C5C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x23c5c0) {
            ctx->pc = 0x23C644u;
            goto label_23c644;
        }
    }
    ctx->pc = 0x23C5C8u;
label_23c5c8:
    // 0x23c5c8: 0xc6000320
    ctx->pc = 0x23c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23c5cc:
    // 0x23c5cc: 0x46140032
    ctx->pc = 0x23c5ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c5d0: 0x0
    ctx->pc = 0x23c5d0u;
    // NOP
    // 0x23c5d4: 0x45010009
    ctx->pc = 0x23C5D4u;
    {
        const bool branch_taken_0x23c5d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23C5D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x23c5d4) {
            ctx->pc = 0x23C5FCu;
            goto label_23c5fc;
        }
    }
    ctx->pc = 0x23C5DCu;
    // 0x23c5dc: 0xc0b9e4a
    ctx->pc = 0x23C5DCu;
    SET_GPR_U32(ctx, 31, 0x23C5E4u);
    ctx->pc = 0x23C5E0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5E4u; }
    }
    if (ctx->pc != 0x23C5E4u) { return; }
    ctx->pc = 0x23C5E4u;
    // 0x23c5e4: 0xe6000318
    ctx->pc = 0x23c5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 792), bits); }
    // 0x23c5e8: 0xc0b9dce
    ctx->pc = 0x23C5E8u;
    SET_GPR_U32(ctx, 31, 0x23C5F0u);
    ctx->pc = 0x23C5ECu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5F0u; }
    }
    if (ctx->pc != 0x23C5F0u) { return; }
    ctx->pc = 0x23C5F0u;
    // 0x23c5f0: 0xe600031c
    ctx->pc = 0x23c5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 796), bits); }
    // 0x23c5f4: 0xe6140320
    ctx->pc = 0x23c5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
    // 0x23c5f8: 0x3c03003c
    ctx->pc = 0x23c5f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_23c5fc:
    // 0x23c5fc: 0x24631bb8
    ctx->pc = 0x23c5fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x23c600: 0x8e020000
    ctx->pc = 0x23c600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23c604: 0x21080
    ctx->pc = 0x23c604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c608: 0x431021
    ctx->pc = 0x23c608u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c60c: 0xc6010318
    ctx->pc = 0x23c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c610: 0xc4420000
    ctx->pc = 0x23c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23c614: 0x46020842
    ctx->pc = 0x23c614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x23c618: 0x46150842
    ctx->pc = 0x23c618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x23c61c: 0xc600031c
    ctx->pc = 0x23c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c620: 0x46020002
    ctx->pc = 0x23c620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23c624: 0x46150002
    ctx->pc = 0x23c624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x23c628: 0xc6020224
    ctx->pc = 0x23c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23c62c: 0x46020840
    ctx->pc = 0x23c62cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23c630: 0xe6010224
    ctx->pc = 0x23c630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x23c634: 0xc601022c
    ctx->pc = 0x23c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c638: 0x46010000
    ctx->pc = 0x23c638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23c63c: 0xe600022c
    ctx->pc = 0x23c63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
label_23c640:
    // 0x23c640: 0xdfbf0010
    ctx->pc = 0x23c640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c644:
    // 0x23c644: 0xdfb00000
    ctx->pc = 0x23c644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c648: 0xc7b50028
    ctx->pc = 0x23c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23c64c: 0xc7b40020
    ctx->pc = 0x23c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c650: 0x3e00008
    ctx->pc = 0x23C650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C654u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C58Cu: goto label_23c58c;
            case 0x23C5C8u: goto label_23c5c8;
            case 0x23C5CCu: goto label_23c5cc;
            case 0x23C5FCu: goto label_23c5fc;
            case 0x23C640u: goto label_23c640;
            case 0x23C644u: goto label_23c644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C658u;
}
