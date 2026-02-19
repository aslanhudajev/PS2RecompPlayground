#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitOAnimList
// Address: 0x210810 - 0x2108e8
void InitOAnimList_0x210810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210810u;

    // 0x210810: 0x27bdff90
    ctx->pc = 0x210810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x210814: 0xffbf0060
    ctx->pc = 0x210814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x210818: 0xffb50050
    ctx->pc = 0x210818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21081c: 0xffb40040
    ctx->pc = 0x21081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x210820: 0xffb30030
    ctx->pc = 0x210820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x210824: 0xffb20020
    ctx->pc = 0x210824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210828: 0xffb10010
    ctx->pc = 0x210828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21082c: 0xffb00000
    ctx->pc = 0x21082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210830: 0x80902d
    ctx->pc = 0x210830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210834: 0x16400006
    ctx->pc = 0x210834u;
    {
        const bool branch_taken_0x210834 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x210838u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210834) {
            ctx->pc = 0x210850u;
            goto label_210850;
        }
    }
    ctx->pc = 0x21083Cu;
    // 0x21083c: 0x3c04003a
    ctx->pc = 0x21083cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x210840: 0x24845800
    ctx->pc = 0x210840u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22528));
    // 0x210844: 0x3c050080
    ctx->pc = 0x210844u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x210848: 0xc0b49a6
    ctx->pc = 0x210848u;
    SET_GPR_U32(ctx, 31, 0x210850u);
    ctx->pc = 0x21084Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210850u; }
    }
    if (ctx->pc != 0x210850u) { return; }
    ctx->pc = 0x210850u;
label_210850:
    // 0x210850: 0x8e420000
    ctx->pc = 0x210850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x210854: 0x2428021
    ctx->pc = 0x210854u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x210858: 0x8e420004
    ctx->pc = 0x210858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21085c: 0x18400019
    ctx->pc = 0x21085Cu;
    {
        const bool branch_taken_0x21085c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x210860u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21085c) {
            ctx->pc = 0x2108C4u;
            goto label_2108c4;
        }
    }
    ctx->pc = 0x210864u;
    // 0x210864: 0x2414ffff
    ctx->pc = 0x210864u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210868: 0x3c15003a
    ctx->pc = 0x210868u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x21086c: 0x0
    ctx->pc = 0x21086cu;
    // NOP
label_210870:
    // 0x210870: 0x82020000
    ctx->pc = 0x210870u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210874: 0x1040000d
    ctx->pc = 0x210874u;
    {
        const bool branch_taken_0x210874 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x210878u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210874) {
            ctx->pc = 0x2108ACu;
            goto label_2108ac;
        }
    }
    ctx->pc = 0x21087Cu;
    // 0x21087c: 0x260282d
    ctx->pc = 0x21087cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210880: 0x260302d
    ctx->pc = 0x210880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210884: 0xc0b19fe
    ctx->pc = 0x210884u;
    SET_GPR_U32(ctx, 31, 0x21088Cu);
    ctx->pc = 0x210888u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21088Cu; }
    }
    if (ctx->pc != 0x21088Cu) { return; }
    ctx->pc = 0x21088Cu;
    // 0x21088c: 0x14540008
    ctx->pc = 0x21088Cu;
    {
        const bool branch_taken_0x21088c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        ctx->pc = 0x210890u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x21088c) {
            ctx->pc = 0x2108B0u;
            goto label_2108b0;
        }
    }
    ctx->pc = 0x210894u;
    // 0x210894: 0x26a45828
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 22568));
    // 0x210898: 0x200282d
    ctx->pc = 0x210898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21089c: 0xc0b492e
    ctx->pc = 0x21089Cu;
    SET_GPR_U32(ctx, 31, 0x2108A4u);
    ctx->pc = 0x2108A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2108A4u; }
    }
    if (ctx->pc != 0x2108A4u) { return; }
    ctx->pc = 0x2108A4u;
    // 0x2108a4: 0x10000003
    ctx->pc = 0x2108A4u;
    {
        const bool branch_taken_0x2108a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2108A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2108a4) {
            ctx->pc = 0x2108B4u;
            goto label_2108b4;
        }
    }
    ctx->pc = 0x2108ACu;
label_2108ac:
    // 0x2108ac: 0xae140020
    ctx->pc = 0x2108acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_2108b0:
    // 0x2108b0: 0x26310001
    ctx->pc = 0x2108b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2108b4:
    // 0x2108b4: 0x8e420004
    ctx->pc = 0x2108b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2108b8: 0x222102a
    ctx->pc = 0x2108b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2108bc: 0x1440ffec
    ctx->pc = 0x2108BCu;
    {
        const bool branch_taken_0x2108bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2108C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 40));
        if (branch_taken_0x2108bc) {
            ctx->pc = 0x210870u;
            goto label_210870;
        }
    }
    ctx->pc = 0x2108C4u;
label_2108c4:
    // 0x2108c4: 0xdfbf0060
    ctx->pc = 0x2108c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2108c8: 0xdfb50050
    ctx->pc = 0x2108c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2108cc: 0xdfb40040
    ctx->pc = 0x2108ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2108d0: 0xdfb30030
    ctx->pc = 0x2108d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2108d4: 0xdfb20020
    ctx->pc = 0x2108d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2108d8: 0xdfb10010
    ctx->pc = 0x2108d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2108dc: 0xdfb00000
    ctx->pc = 0x2108dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2108e0: 0x3e00008
    ctx->pc = 0x2108E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2108E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210850u: goto label_210850;
            case 0x210870u: goto label_210870;
            case 0x2108ACu: goto label_2108ac;
            case 0x2108B0u: goto label_2108b0;
            case 0x2108B4u: goto label_2108b4;
            case 0x2108C4u: goto label_2108c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2108E8u;
}
