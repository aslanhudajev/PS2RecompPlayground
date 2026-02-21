#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showVu1FuncData
// Address: 0x2bc810 - 0x2bc888
void showVu1FuncData_0x2bc810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bc810u;

    // 0x2bc810: 0x27bdffc0
    ctx->pc = 0x2bc810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bc814: 0xffbf0030
    ctx->pc = 0x2bc814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bc818: 0xffb20020
    ctx->pc = 0x2bc818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bc81c: 0xffb10010
    ctx->pc = 0x2bc81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bc820: 0xffb00000
    ctx->pc = 0x2bc820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc824: 0x80902d
    ctx->pc = 0x2bc824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc828: 0x8ca50004
    ctx->pc = 0x2bc828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bc82c: 0x10a00010
    ctx->pc = 0x2BC82Cu;
    {
        const bool branch_taken_0x2bc82c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC830u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc82c) {
            ctx->pc = 0x2BC870u;
            goto label_2bc870;
        }
    }
    ctx->pc = 0x2BC834u;
    // 0x2bc834: 0xa0802d
    ctx->pc = 0x2bc834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc838: 0x8e020004
    ctx->pc = 0x2bc838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc83c: 0x1040000d
    ctx->pc = 0x2BC83Cu;
    {
        const bool branch_taken_0x2bc83c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC840u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2bc83c) {
            ctx->pc = 0x2BC874u;
            goto label_2bc874;
        }
    }
    ctx->pc = 0x2BC844u;
    // 0x2bc844: 0x8e020008
    ctx->pc = 0x2bc844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2bc848:
    // 0x2bc848: 0x3042000f
    ctx->pc = 0x2bc848u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x2bc84c: 0x56220005
    ctx->pc = 0x2BC84Cu;
    {
        const bool branch_taken_0x2bc84c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bc84c) {
            ctx->pc = 0x2BC850u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x2BC864u;
            goto label_2bc864;
        }
    }
    ctx->pc = 0x2BC854u;
    // 0x2bc854: 0x240202d
    ctx->pc = 0x2bc854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc858: 0xc0af05c
    ctx->pc = 0x2BC858u;
    SET_GPR_U32(ctx, 31, 0x2BC860u);
    ctx->pc = 0x2BC85Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BC170u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuShowData_0x2bc170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC860u; }
    }
    if (ctx->pc != 0x2BC860u) { return; }
    ctx->pc = 0x2BC860u;
    // 0x2bc860: 0x2610000c
    ctx->pc = 0x2bc860u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
label_2bc864:
    // 0x2bc864: 0x8e020004
    ctx->pc = 0x2bc864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc868: 0x5440fff7
    ctx->pc = 0x2BC868u;
    {
        const bool branch_taken_0x2bc868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bc868) {
            ctx->pc = 0x2BC86Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2BC848u;
            goto label_2bc848;
        }
    }
    ctx->pc = 0x2BC870u;
label_2bc870:
    // 0x2bc870: 0xdfbf0030
    ctx->pc = 0x2bc870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bc874:
    // 0x2bc874: 0xdfb20020
    ctx->pc = 0x2bc874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc878: 0xdfb10010
    ctx->pc = 0x2bc878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc87c: 0xdfb00000
    ctx->pc = 0x2bc87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc880: 0x3e00008
    ctx->pc = 0x2BC880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BC848u: goto label_2bc848;
            case 0x2BC864u: goto label_2bc864;
            case 0x2BC870u: goto label_2bc870;
            case 0x2BC874u: goto label_2bc874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BC888u;
}
