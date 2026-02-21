#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindInfoIndex
// Address: 0x253808 - 0x2538cc
void FindInfoIndex_0x253808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253808u;

    // 0x253808: 0x27bdff90
    ctx->pc = 0x253808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25380c: 0xffbf0060
    ctx->pc = 0x25380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x253810: 0xffb50050
    ctx->pc = 0x253810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x253814: 0xffb40040
    ctx->pc = 0x253814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x253818: 0xffb30030
    ctx->pc = 0x253818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25381c: 0xffb20020
    ctx->pc = 0x25381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x253820: 0xffb10010
    ctx->pc = 0x253820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253824: 0xffb00000
    ctx->pc = 0x253824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253828: 0x80a02d
    ctx->pc = 0x253828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25382c: 0xa0902d
    ctx->pc = 0x25382cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253830: 0xc0982d
    ctx->pc = 0x253830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253834: 0x3c020032
    ctx->pc = 0x253834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x253838: 0x2442f9f8
    ctx->pc = 0x253838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x25383c: 0x8c500068
    ctx->pc = 0x25383cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x253840: 0x8c420074
    ctx->pc = 0x253840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x253844: 0x18400017
    ctx->pc = 0x253844u;
    {
        const bool branch_taken_0x253844 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x253848u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253844) {
            ctx->pc = 0x2538A4u;
            goto label_2538a4;
        }
    }
    ctx->pc = 0x25384Cu;
    // 0x25384c: 0x3c020032
    ctx->pc = 0x25384cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x253850: 0x2455f9f8
    ctx->pc = 0x253850u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x253854: 0x0
    ctx->pc = 0x253854u;
    // NOP
label_253858:
    // 0x253858: 0x260202d
    ctx->pc = 0x253858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25385c: 0xc0bf270
    ctx->pc = 0x25385Cu;
    SET_GPR_U32(ctx, 31, 0x253864u);
    ctx->pc = 0x253860u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 40));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253864u; }
    }
    if (ctx->pc != 0x253864u) { return; }
    ctx->pc = 0x253864u;
    // 0x253864: 0x5440000b
    ctx->pc = 0x253864u;
    {
        const bool branch_taken_0x253864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x253864) {
            ctx->pc = 0x253868u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x253894u;
            goto label_253894;
        }
    }
    ctx->pc = 0x25386Cu;
    // 0x25386c: 0x8e020000
    ctx->pc = 0x25386cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253870: 0x56820008
    ctx->pc = 0x253870u;
    {
        const bool branch_taken_0x253870 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x253870) {
            ctx->pc = 0x253874u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x253894u;
            goto label_253894;
        }
    }
    ctx->pc = 0x253878u;
    // 0x253878: 0x1240000b
    ctx->pc = 0x253878u;
    {
        const bool branch_taken_0x253878 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x25387Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253878) {
            ctx->pc = 0x2538A8u;
            goto label_2538a8;
        }
    }
    ctx->pc = 0x253880u;
    // 0x253880: 0x8e020004
    ctx->pc = 0x253880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x253884: 0x56420003
    ctx->pc = 0x253884u;
    {
        const bool branch_taken_0x253884 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x253884) {
            ctx->pc = 0x253888u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x253894u;
            goto label_253894;
        }
    }
    ctx->pc = 0x25388Cu;
    // 0x25388c: 0x10000006
    ctx->pc = 0x25388Cu;
    {
        const bool branch_taken_0x25388c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253890u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25388c) {
            ctx->pc = 0x2538A8u;
            goto label_2538a8;
        }
    }
    ctx->pc = 0x253894u;
label_253894:
    // 0x253894: 0x8ea20074
    ctx->pc = 0x253894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x253898: 0x222102a
    ctx->pc = 0x253898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x25389c: 0x1440ffee
    ctx->pc = 0x25389Cu;
    {
        const bool branch_taken_0x25389c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2538A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x25389c) {
            ctx->pc = 0x253858u;
            goto label_253858;
        }
    }
    ctx->pc = 0x2538A4u;
label_2538a4:
    // 0x2538a4: 0x2402ffff
    ctx->pc = 0x2538a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2538a8:
    // 0x2538a8: 0xdfbf0060
    ctx->pc = 0x2538a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2538ac: 0xdfb50050
    ctx->pc = 0x2538acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2538b0: 0xdfb40040
    ctx->pc = 0x2538b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2538b4: 0xdfb30030
    ctx->pc = 0x2538b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2538b8: 0xdfb20020
    ctx->pc = 0x2538b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2538bc: 0xdfb10010
    ctx->pc = 0x2538bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2538c0: 0xdfb00000
    ctx->pc = 0x2538c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2538c4: 0x3e00008
    ctx->pc = 0x2538C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2538C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253858u: goto label_253858;
            case 0x253894u: goto label_253894;
            case 0x2538A4u: goto label_2538a4;
            case 0x2538A8u: goto label_2538a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2538CCu;
}
